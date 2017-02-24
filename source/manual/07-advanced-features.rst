.. raw:: latex

    \clearpage

.. include:: substitutions.rst

|image17|

Image copyright info: [img7]_

Advanced features
=================

Attribute alarms
----------------

Each Tango attribute two several alarms. These alarms are :

-  A four thresholds level alarm

-  The read different than set (RDS) alarm

The level alarms
~~~~~~~~~~~~~~~~

This alarm is defined for all Tango attribute read type and for
numerical data type. The action of this alarm depend on the attribute
value when it is read :

-  If the attribute value is below or equal the attribute configuration
   **min\_alarm** parameter, the attribute quality factor is switched to
   Tango::ATTR\_ALARM and if the device state is Tango::ON, it is
   switched to Tango::ALARM.

-  If the attribute value is below or equal the attribute configuration
   **min\_warning** parameter, the attribute quality factor is switched
   to Tango::ATTR\_WARNING and if the device state is Tango::ON, it is
   switched to Tango::ALARM.

-  If the attribute value is above or equal the attribute configuration
   **max\_warning** parameter, the attribute quality factor is switched
   to Tango::ATTR\_WARNING and if the device state is Tango::ON, it is
   switched to Tango::ALARM.

-  If the attribute value is above or equal the attribute configuration
   **max\_alarm** parameter, the attribute quality factor is switched to
   Tango::ATTR\_ALARM and if the device state is Tango::ON, it is
   switched to Tango::ALARM.

If the attribute is a spectrum or an image, then the alarm is set if any
one of the attribute value satisfies the above criterium. By default,
these four parameters are not defined and no check will be done.

The following figure is a drawing of attribute quality factor and device
state values function of the the attribute value.

.. _`7.1`:

.. figure:: advanced/alarm.png
   :alt: Level alarm

   Figure 7.1: Level alarm

If the min\_warning and max\_warning parameters are not set, the
attribute quality factor will simply change between Tango::ATTR\_ALARM
and Tango::ATTR\_VALID function of the attribute value.

The Read Different than Set (RDS) alarm
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This alarm is defined only for attribute of the Tango::READ\_WRITE and
Tango::READ\_WITH\_WRITE read/write type and for numerical data type.
When the attribute is read (or when the device state is requested), if
the difference between its read value and the last written value is
something more than or equal to an authorized delta and if at least a
certain amount of milli seconds occurs since the last write operation,
the attribute quality factor will be set to Tango::ATTR\_ALARM and if
the device state is Tango::ON, it is switched to Tango::ALARM. If the
attribute is a spectrum or an image, then the alarm is set if any one of
the attribute value’s satisfies the above criterium. This alarm
configuration is done with two attribute configuration parameters called
**delta\_val** and **delta\_t**. By default, these two parameters are
not defined and no check will be done.

Enumerated attribute
--------------------

Since Tango release 9, enumerated attribute is supported using the new
data type DevEnum. This data type is not a real C++ enumeration because:

#. The enumerated value allways start with 0

#. Values are consecutive

#. It is transferred on the network as DevShort data type

One enumeration label is associated to each enumeration value. For the
Tango kernel, it is this list of enumeration labels which will define
the possible enumeration values. For instance if the enumeration has 3
labels, its value must be between 0 and 2. There are two ways to define
the enumeration labels:

#. At attribute creation time. This is the most common case when the
   list of possible enumeration values and labels are known at compile
   time. The Tango code generator Pogo generates for you the code needed
   to pass the enumeration labels to the Tango kernel.

#. In the user code when the enumeration values and labels are not known
   at compile time but retrieved during device startup phase. The user
   gives the possible enumeration values to the Tango kernel using the
   Attribute class *set\_properties()* method.

A Tango client is able to retrieve the enumeration labels in the
attribute configuration returned by instance by a call to the
*DeviceProxy::get\_attribute\_config()* method. Using the
*DeviceProxy::set\_attribute\_config()* call, a user may change the
enumeration labels but not their number.

Usage in a Tango class
~~~~~~~~~~~~~~~~~~~~~~

Within a Tango class, you set the attribute value with a C++ enum or a
DevShort variable. In case a DevShort variable is used, its value will
be checked according to the enumeration labels list given to Tango
kernel.

Setting the labels with enumeration compile time knowledge
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In such a case, the enumeration labels are given to Tango at the
attribute creation time in the *attribute\_factory* method of the
XXXClass class. Let us take one example

.. code:: cpp
  :number-lines:

    enum class Card: short
    {
        NORTH = 0,
        SOUTH,
        EAST,
        WEST
    };

    void XXXClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
        .....
        TheEnumAttrib	*theenum = new TheEnumAttrib();
        Tango::UserDefaultAttrProp theenum_prop;
        vector<string> labels = {"North","South","East","West"};
        theenum_prop.set_enum_labels(labels);
        theenum->set_default_properties(theenum_prop);
        att_list.push_back(theenum);
        .....
     }

line 1-7 : The definition of the enumeration (C++11 in this example)

line 14 : A vector of strings with the enumeration labels is created.
Because there is no way to get the labels from the enumeration
definition, they are re-defined here.

line 15 : This vector is given to the theenum\_prop object which
contains the user default properties

| line 16 : The user default properties are associated to the attribute
| In most cases, all this code will be automatically generated by the
  Tango code generator Pogo. It is given here for completness.

Setting the labels without enumeration compile time knowledge
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In such a case, the enumeration labels are retrieved by the user in a
way specific to the device and passed to Tango using the Attribute class
*set\_properties()* method. Let us take one example

.. code:: cpp
  :number-lines:

    void MyDev::init_device()
    {
        ...

        Attribute &att = get_device_attr()->get_attr_by_name("TheEnumAtt");
        MultiAttrProp<DevEnum> multi_prop;
        att.get_properties(multi_prop);

        multi_prop.enum_labels = {....};
        att.set_properties(multi_prop);
        ....
     }

line 5 : Get a reference to the attribute object

line 7 : Retrieve the attribute properties

line 9 : Initialise the attribute labels in the set of attribute
properties

line 10 : Set the attribute properties

Setting the attribute value
^^^^^^^^^^^^^^^^^^^^^^^^^^^

It is possible to set the attribute value using either a classical
DevShort variable or using a variable of the C++ enumeration. The
following example is when you have compile time knowledge of the
enumeration definition. We assume that the enumeration is the same than
the one defined above (Card enumeration)

.. code:: cpp
  :number-lines:

    enum Card points;

    void MyDev::read_TheEnum(Attribute &att)
    {
        ...
        points = SOUTH;
        att.set_value(&points);
    }

line 1 : One instance of the Card enum is created (named points)

line 6 : The enumeration is initialized

| line 7 : The value of the attribute object is set using the
  enumeration (by pointer)
| To get the same result using a classical DevShort variable, the code
  looks like

.. code:: cpp
  :number-lines:

    DevShort sh;

    void MyDev::read_TheEnum(Attribute &att)
    {
        ...
        sh = 1;
        att.set_value(&sh);
    }

line 1 : A DevShort variable is created (named sh)

line 6 : The variable is initialized

line 7 : The value of the attribute object is set using the DevShort
variable (by pointer)

Usage in a Tango client
~~~~~~~~~~~~~~~~~~~~~~~

Within a Tango client, you insert/extract enumerated attribute value
in/from DeviceAttribute object with a C++ enum or a DevShort variable.
The later case is for generic client which do not have compile time
knowledge of the enumeration. The code looks like

.. code:: cpp
  :number-lines:

    DeviceAttribute da = the_dev.read_attribute("TheEnumAtt");
    Card ca;
    da >> ca;

    DeviceAttribute db = the_dev.read_attribute("TheEnumAtt");
    DevShort sh;
    da >> sh;

line 2-3 : The attribute value is extracted in a C++ enumeration
variable

line 6-7 : The attribute value is extracted in a DevShort variable

Device polling
--------------

Introduction
~~~~~~~~~~~~

Each tango device server automatically have a separate polling thread
pool. Polling a device means periodically executing command on a device
(or reading device attribute) and storing the results (or the thrown
exception) in a polling buffer. The aim of this polling is threefold :

-  Speed-up response time for slow device

-  Get a first-level history of device command output or attribute value

-  Be the data source for the Tango event system

Speeding-up response time is achieved because the command\_inout or
read\_attribute CORBA operation is able to get its data from the polling
buffer or from the a real access to the device. For “slow” device,
getting the data from the buffer is much faster than accessing the
device. Returning a first-level command output history (or attribute
value history) to a client is possible due to the polling buffer which
is managed as a circular buffer. The history is the contents of this
circular buffer. Obviously, the history depth is limited to the depth of
the circular buffer. The polling is also the data source for the event
system because detecting an event means being able to regularly read the
data, memorize it and declaring that it is an event after some
comparison with older values.

Starting with Tango 9, the default polling algorithm has been modifed.
However, it is still possible to use the polling as it was in Tango
releases prior to release 9. See chaper on polling configuration to get
details on this.

Configuring the polling system
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Configuring what has to be polled and how
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

It is possible to configure the polling in order to poll :

-  Any command which does not need input parameter

-  Any attribute

Configuring the polling is done by sending command to the device server
administration device automatically implemented in every device server
process. Seven commands are dedicated to this feature. These commands
are

**AddObjPolling**
    It add a new object (command or attribute) to the list of object(s)
    to be polled. It is also with this command that the polling period
    is specified.

**RemObjPolling**
    To remove one object (command or attribute) from the polled
    object(s) list

**UpdObjPollingPeriod**
    Change one object polling period

**StartPolling**
    Starts polling for the whole process

**StopPolling**
    Stops polling for the whole process

**PolledDevice**
    Allow a client to know which device are polled

**DevPollStatus**
    Allow a client to precisely knows the polling status for a device

All the necessary parameters for the polling configuration are stored in
the Tango database. Therefore, the polling configuration is not lost
after a device server process stop and restart (or after a device server
process crash!!).

It is also possible to automatically poll a command (or an attribute)
without sending command to the device server administration device. This
request some coding (a method call) in the device server software during
the command or attribute creation. In this case, for every devices
supporting this command or this attribute, polling configuration will be
automatically updated in the database and the polling will start
automatically at each device server process startup. It is possible to
stop this behavior on a device basis by sending a RemObjPolling command
to the device server administration device. The following piece of code
shows how the source code should be written.

.. code:: cpp
  :number-lines:


    void DevTestClass::command_factory()
    {
    ...
        command_list.push_back(new IOStartPoll("IOStartPoll",
                                                Tango::DEV_VOID,
                                                Tango::DEV_LONG,
                                                "Void",
                                                "Constant number"));
        command_list.back()->set_polling_period(400);
    ...
    }


    void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
    ...
        att_list.push_back(new Tango::Attr("String_attr",
                                            Tango::DEV_STRING,
                                            Tango::READ));
        att_list.back()->set_polling_period(250);
    ...
    }

A polling period of 400 mS is set for the command called “IOStartPoll”
at line 10 with the *set\_polling\_period* method of the Command class.
Therefore, for a device of this class, the polling thread will start
polling its IOStartPoll command at process start-up except if a
RemObjPolling indicating this device and the IOStartPoll command has
already been received by the device server administration device. This
is exactly the same behavior for attribute. The polling period for
attribute called “String\_attr” is defined at line 20.

Configuring the polling means defining device attribute/command polling
period. The polling period has to be chosen with care. If reading an
attribute needs 200 mS, there is no point to poll this attribute with a
polling period equal or even below 200 mS. You should also take into
account that some free time has to be foreseen for external request(s)
on the device. On average, for one attribute needing X mS as reading
time, define a polling period which is equal to 1.4 X (280 mS for our
example of one attribute needing 200 mS as reading time). In case the
polling tuning is given to external user, Tango provides a way to define
polling period minimun threshold. This is done using device properties.
These properties are named *min\_poll\_period*, *cmd\_min\_poll\_period*
and *attr\_min\_poll\_period*. The property min\_poll\_period (mS)
defined a minimun polling period for the device. The property
cmd\_min\_poll\_period allows the definition of a minimun polling period
for a specific device command. The property attr\_min\_poll\_period
allows the definition of a minimun polling period for one device
attribute. In case these properties are defined, it is not possible to
poll the device command/attribute with a polling period below those
defined by these properties. See Appendix A on device parameter to get a
precise syntax description for these properties.

The Jive (`JIVE home page`_) tool also allows a graphical device
polling configuration.

Configuring the polling threads pool
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Starting with Tango release 7, a Tango device server process may have
several polling threads managed as a pool. For instance, this could be
usefull in case of devices within the same device server process but
accessed by different hardware channel when one of the channel is not
responding (Thus generating long timeout and de-synchronising the
polling thread). By default, the polling threads pool size is set to 1
and all the polled object(s) are managed by the same thread (idem
polling system in Tango releases older than release 7) . The
configuration of the polling thread pool is done using two properties
associated to the device server administration device. These properties
are named:

-  *polling\_threads\_pool\_size* defining the maximun number of threads
   that you can have in the pool

-  *polling\_threads\_pool\_conf* defining which threads in the pool
   manages which device

The granularity of the polling threads pool tuning is the device. You
cannot ask the polling threads pool to have thread number 1 in charge of
attribute *att1* of device *dev1* and thread number 2 to be in charge of
*att2* of the same device *dev1*.

When you require a new object (command or attribute) to be polled, two
main cases may arrive:

#. Some polled object(s) belonging to the device are already polled by
   one of the polling threads in the pool: There is no new thread
   created. The object is simply added to the list of objects to be
   polled for the existing thread

#. There is no thread already created for the device. We have two
   sub-cases:

   #. The number of polling threads is less than the
      polling\_threads\_pool\_size: A new thread is created and started
      to poll the object (command or attribute)

   #. The number of polling threads is already equal to the
      polling\_threads\_pool\_size: The software search for the thread
      with the smallest number of polled objects and add the new polled
      object to this thread

Each time the polling threads pool configuration is changed, it is
written in the database using the polling\_threads\_pool\_conf property.
If the behaviour previously described does not fulfill your needs, it is
possible to update the polling\_threads\_pool\_conf property in a
graphical way using the Tango Astor (`ASTOR home page`_) tool
or manually using the Jive tool [Jive]_. These
changes will be taken into account at the next device server process
start-up. At start-up, the polling threads pool will allways be
configured as required by the polling\_threads\_pool\_conf property. The
syntax used for this property is described in the Reference part of the
`Appendix <A-reference.rst>`. The following window dump is the Astor
tool window which allows polling threads pool management.

|image18|

In this example, the polling threads pool size to set to 9 but only 4
polling threads are running. Thread 1 is in charge of all polled objects
related to device pv/thread-pool/test-1 and pv/thread-pool/test-2.
Thread 2 is in charge of all polled objects related to device
pv/thread-pool/test-3. Thread 3 is in charge of all polled objects
related to device pv/thread-pool/test-5 anf finally, thread 4 is in
charge of all polled objects for devices pv/thread-pool/test-4,
pv/thread-pool/test-6 and pv/thread-pool/test-7.

It’s also possible to define the polling threads pool size
programmatically in the main function of a device server process using
the *Util::set\_polling\_threads\_pool\_size()* method before the call
to the *Util::server\_init()* method

Choosing polling algorithm
^^^^^^^^^^^^^^^^^^^^^^^^^^

Starting with Tango 9, you can choose between two different polling
algorithm:

-  The polling as it was in Tango since it has been introduced. This
   means:

   -  For one device, always poll attribute one at a time even if the
      polling period is the same (use of read\_attribute instead of
      read\_attributes)

   -  Do not allow the polling thread to be late: If it is the case
      (because at the end of polling object 1, the time is greater than
      the polling date of object 2), discard polling object and inform
      event user by sending one event with error (Polling thread is late
      and discard....)

-  New polling algorithm introduced in Tango 9 as the default one. This
   means:

   -  For one device, poll all attributes with the same polling period
      using a single device call (read\_attributes)

   -  Allow the polling thread to be late but only if number of late
      objects decreases.

The advantages of new polling algorithm are

#. In case of several attributes polled on the same device at the same
   period a lower device occupation time by the polling thread (due to a
   single read\_attributes() call instead of several single
   read\_attribute() calls)

#. Less “Polling thread late” errors in the event system in case of
   device with non constant response time

The drawback is

#. The loss of attribute individual timing data reported in the polling
   thread status

It is still possible to return to pre-release 9 polling algorithm. To do
so, you can use the device server process administration device
*polling\_before\_9* property by setting it to true. It is also possible
to choose this pre-release 9 algorithm in device server process code in
the main function of the process using the
*Util::set\_polling\_before\_9()* method.

Reading data from the polling buffer
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

For a polled command or a polled attribute, a client has three
possibilities to get command result or attribute value (or the thrown
exception) :

-  From the device itself

-  From the polling buffer

-  From the polling buffer first and from the device if data in the
   polling buffer are invalid or if the polling is badly configured.

The choice is done during the command\_inout CORBA operation by
positioning one of the operation parameter. When reading data from the
polling buffer, several error cases are possible

-  The data in the buffer are not valid any more. Every time data are
   requested from the polling buffer, a check is done between the client
   request date and the date when the data were stored in the buffer. An
   exception is thrown if the delta is greater than the polling period
   multiplied by a “too old” factor. This factor has a default value and
   is up-datable via a device property. This is detailed in the
   reference part of this manual.

-  The polling is correctly configured but there is no data yet in the
   polling buffer.

Retrieving command/attribute result history
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The polling thread stores the command result or attribute value in
circular buffers. It is possible to retrieve an history of the command
result (or attribute value) from these polling buffers. Obviously the
history is limited by the depth of the circular buffer. For commands, a
CORBA operation called *command\_inout\_history\_2* allows this
retrieval. The client specifies the command name and the record number
he want to retrieve. For each record, the call returns the date when the
command was executed, the command result or the exception stack in case
of the command failed when it was executed by the polling thread. In
such a case, the exception stack is sent as a structure member and not
as an exception. The same thing is available for attribute. The CORBA
operation name is *read\_attribute\_history\_2.* For these two calls,
there is no check done between the call date and the record date in
contrary of the call to retrieve the last command result (or attribute
value).

Externally triggered polling
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Sometimes, rather than polling a command or an attribute regulary with a
fixed period, it is more interesting to manually decides when the
polling must occurs. The Tango polling system also supports this kind of
usage. This is called *externally triggered polling*. To define one
attribute (or command) as externally triggered, simply set its polling
period to 0. This can be done with the device server administration
device AddObjPolling or UpdObjPollingPeriod command. Once in this mode,
the attribute (or command) polling is triggered with the
*trigger\_cmd\_polling()* method (or *trigger\_attr\_polling()* method)
of the Util class. The following piece of code shows how this method
could be used for one externally triggered command.

.. code:: cpp
  :number-lines:

    .....

    string ext_polled_cmd("MyCmd");
    Tango::DeviceImpl *device = .....;

    Tango::Util *tg = Tango::Util::instance();

    tg->trigger_cmd_polling(device,ext_polled_cmd);

    .....

line 3 : The externally polled command name

line 4 : The device object

line 8 : Trigger polling of command MyCmd

Filling polling buffer
~~~~~~~~~~~~~~~~~~~~~~

Some hardware to be interfaced already returned an array of pair value,
timestamp. In order to be read with the *command\_inout\_history* or
*read\_attribute\_history* calls, this array has to be transferred in
the attribute or command polling buffer. This is possible only for
attribute or command configured in the externally triggered polling
mode. Once in externally triggered polling mode, the attribute (or
command) polling buffer is filled with the
*fill\_cmd\_polling\_buffer()* method (or
*fill\_attr\_polling\_buffer()* method) of the Util class. For command,
the user uses a template class called *TimedCmdData* for each element of
the command history. Each element is stored in a stack in one instance
of a template class called *CmdHistoryStack.* This object is one of the
argument of the fill\_cmd\_polling\_buffer() method. Obviously, the
stack depth cannot be larger than the polling buffer depth. See
[sub:The-device-polling-prop] to learn how the polling buffer depth is
defined. The same way is used for attribute with the *TimedAttrData* and
*AttrHistoryStack* template classes. These classes are documented in
[TangoRefMan]_ . The following piece of code fills the
polling buffer for a command called MyCmd which is already in externally
triggered mode. It returns a DevVarLongArray data type with three
elements. This example is not really something you will find in a real
hardware interface. It is only to demonstrate the
fill\_cmd\_polling\_buffer() method usage. Error management has also
been removed.

.. code:: cpp
  :number-lines:

    ....

    Tango::DevVarLongArray dvla_array[4];

    for(int i = 0;i < 4;i++)
    {
        dvla_array[i].length(3);
        dvla_array[i][0] = 10 + i;
        dvla_array[i][1] = 11 + i;
        dvla_array[i][2] = 12 + i;
    }

    Tango::CmdHistoryStack<DevVarLongArray> chs;
    chs.length(4);

    for (int k = 0;k < 4;k++)
    {
        time_t when = time(NULL);

        Tango::TimedCmdData<DevVarLongArray> tcd(&dvla_array[k],when);
        chs.push(tcd);
    }

    Tango::Util *tg = Tango::Util::instance();
    string cmd_name("MyCmd");
    DeviceImpl *dev = ....;

    tg->fill_cmd_polling_buffer(dev,cmd_name,chs);

    .....

Line 3-11 : Simulate data coming from hardware

Line 13-14 : Create one instance of the CmdHistoryStack class and
reserve space for one history of 4 elements

Line 16-17 : A loop on each history element

Line 18 : Get date (hardware simulation)

Line 20 : Create one instance of the TimedCmdData class with data and
date

Line 21 : Store this command history element in the history stack. The
element order will be the insertion order whatever the element date is.

Line 28 : Fill command polling buffer

After one execution of this code, a command\_inout\_history() call will
return one history with 4 elements. The first array element of the
oldest history record will have the value 10. The first array element of
the newest history record will have the value 13. A command\_inout()
call with the data source parameter set to CACHE will return the newest
history record (ie an array with values 13,14 and 15). A
command\_inout() call with the data source parameter set to DEVICE will
return what is coded is the command method. If you execute this code a
second time, a command\_inout\_history() call will return an history of
8 elements.

The next example fills the polling buffer for an attribute called MyAttr
which is already in externally triggered mode. It is a scalar attribute
of the DevString data type. This example is not really something you
will find in a real hardware interface. It is only to demonstrate the
fill\_attr\_polling\_buffer() method usage with memory management issue.
Error management has also been removed.

.. code:: cpp
  :number-lines:

    ....

    AttrHistoryStack<DevString> ahs;
    ahs.length(3);

    for (int k = 0;k < 3;k++)
    {
        time_t when = time(NULL);

        DevString *ptr = new DevString [1];
        ptr = CORBA::string_dup("Attr history data");

        TimedAttrData<DevString> tad(ptr,Tango::ATTR_VALID,true,when);
        ahs.push(tad);
    }

    Tango::Util *tg = Tango::Util::instance();
    string attr_name("MyAttr");
    DeviceImpl *dev = ....;

    tg->fill_attr_polling_buffer(dev,attr_name,ahs);

    .....


Line 3-4 : Create one instance of the AttrHistoryStack class and reserve
space for an history with 3 elements

Line 6-7 : A loop on each history element

Line 8 : Get date (hardware simulation)

Line 10-11 : Create a string. Note that the DevString object is created
on the heap

Line 13 : Create one instance of the TimedAttrData class with data and
date requesting the memory to be released.

Line 14 : Store this attribute history element in the history stack. The
element order will be the insertion order whatever the element date is.

Line 21 : Fill command polling buffer

It is not necessary to return the memory allocated at line 10. The
*fill\_attr\_polling\_buffer()* method will do it for you.

Setting and tuning the polling in a Tango class
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Even if the polling is normally set and tuned with external tool like
Jive, it is possible to set it directly into the code of a Tango class.
A set of methods belonging to the *DeviceImpl* class allows the user to
deal with polling. These methods are:

-  *is\_attribute\_polled()* and *is\_command\_polled()* to check if one
   command/attribute is polled

-  *get\_attribute\_poll\_period()* and *get\_command\_poll\_period()*
   to get polled object polling period

-  *poll\_attribute()* and *poll\_command()* to poll command or
   attribute

-  *stop\_poll\_attribute()* and *stop\_poll\_command()* to stop polling
   a command or an attribute

The following code snippet is just an exmaple of how these methods could
be used. They are documented in [TangoRefMan]_.

.. code:: cpp
  :number-lines:

         [Program Listing: poll_in_ds.cpp.lines
  	void MyClass::read_attr(Tango::Attribute &attr)
  	{
  	    ...
  	    ...

  	    string att_name("SomeAttribute");
  	    string another_att_name("AnotherAttribute");

  	    if (is_attribute_polled(att_name) == true)
  	        stop_poll_attribute(att_name);
  	    else
  	        poll_attribute(another_att_name,500);

  	    ....
  	    ....

  	}

    ]

Threading
---------

When used with C++, Tango used omniORB as underlying ORB. This CORBA
implementation is a threaded implementation and therefore a C++ Tango
device server or client are multi-threaded processes.

Device server process
~~~~~~~~~~~~~~~~~~~~~

A classical Tango device server without any connected clients has eight
threads. These threads are :

-  The main thread waiting in the ORB main loop

-  Two ORB implementation threads (the POA thread)

-  The ORB scavanger thread

-  The signal thread

-  The heartbeat thread (needed by the Tango event system)

-  Two Zmq implementation threads

On top of these eight threads, you have to add the thread(s) used by the
polling threads pool. This number depends on the polling thread pool
configuration and could be between 0 (no polling at all) and the maximun
number of threads in the pool.

A new thread is started for each connected client. Device server are
mostly used to interface hardware which most of the time does not
support multi-threaded access. Therefore, all remote calls executed from
a client are serialized within the device server code by using mutual
exclusion. See chapter [sub:Serialization-model-within] on which
serialization model are available. In order to limit thread number, the
underlying ORB (omniORB) is configured to shutdown threads dedicated to
client if the connection is inactive for more than 3 minutes. To also
limit thread number, the ORB is configured to create one thread per
connection up to 55 threads. When this level is reached, the threading
model is automatically switch to a thread pool model with up to 100
threads. If the number of threads decrease down to 50, the threading
model will return to thread per connection model.

If you are using event, the event system for its internal heartbeat
system periodically (every 200 seconds) sends a command to the device
server administration device. As explained above, a thread is created to
execute these command. The omniORB scavanger will terminate this thread
before the next event system heartbeat command arrives. For example, if
you have a device server with three connected clients using only event,
the process thread number will permanently change between 8 and 11
threads.

In summary, the number of threads in a device server process can be
evaluated with the following formula:

**8 + k + m**

k is the number of polling threads used from the polling threads pool
and m is the number of threads used for connected clients.

Serialization model within a device server
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Four serialization models are available within a device server. These
models protect all requests coming from the network but also requests
coming from the polling thread. These models are:

#. Serialization by device. All access to the same device are
   serialized. As an example, let’s take a device server implementing
   one class of device with two instances (dev1 and dev2). Two clients
   are connected to these devices (client1 and client2). Client2 will
   not be able to access dev1 if client1 is using it. Nevertheless,
   client2 is able to access dev2 while client1 access dev1 (There is
   one mutual exclusion object by device)

#. Serialization by class. With non multi-threaded legacy software, the
   preceding scenario could generate problem. In this mode of
   serialization, client2 is not able to access dev2 while client1
   access dev1 because dev2 and dev1 are instances of the same class
   (There is one mutual exclusion object by class)

#. Serialization by process. This is one step further than the previous
   case. In this mode, only one client can access any device embedded
   within the device server at a time. There is only one mutual
   exclusion object for the whole process)

#. No serialization. This is an exotic kind of serialization and
   **should be used with extreme care** only with device which are fully
   thread safe. In this model, most of the device access are not
   serialized at all. Due to Tango internal structure, the
   *get\_attribute\_config*, *set\_attribute\_config*,
   *read\_attributes* and *write\_attributes* CORBA calls are still
   protected. Reading the device state and status via commands or via
   CORBA attribute is also protected.

By default, every Tango device server is in serialization by device
mode. A method of the Tango::Util class allows to change this default
behavior.

.. code:: cpp
  :number-lines:

    #include <tango.h>

    int main(int argc,char *argv[])
    {

        try
        {

            Tango::Util *tg = Tango::Util::init(argc,argv);

            tg->set_serial_model(Tango::BY_CLASS);

            tg->server_init();

            cout << "Ready to accept request" << endl;
            tg->server_run();
        }
        catch (bad_alloc)
        {
             cout << "Can't allocate memory!!!" << endl;
             cout << "Exiting" << endl;
        }
        catch (CORBA::Exception &e)
        {
             Tango::Except::print_exception(e);

             cout << "Received a CORBA::Exception" << endl;
             cout << "Exiting" << endl;
        }

        return(0);
    }

The serialization model is set at line 11 before the server is
initialized and the infinite loop is started. See
[TangoRefMan]_  for all details on the methods to
set/get serialization model.

Attribute Serialization model
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Even with the serialization model described previously, in case of
attributes carrying a large number of data and several clients reading
this attribute, a device attribute serialization has to be followed.
Without this level of serialization, for attribute using a shared
buffer, a thread scheduling may happens while the device server process
is in the CORBA layer transferring the attribute data on the network.
Three serialization models are available for attribute serialization.
The default is well adapted to nearly all cases. Nevertheless, if the
user code manages several attributes data buffer or if it manages its
own buffer protection by one way or another, it could be interesting to
tune this serialization level. The available models are:

#. Serialization by kernel. This is the default case. The kernel is
   managing the serialization

#. Serialization by user. The user code is in charge of the
   serialization. This serialization is done by the use of a omni\_mutex
   object. An omni\_mutex is an object provided by the omniORB package.
   It is the user responsability to lock this mutex when appropriate and
   to give this mutex to the Tango kernel before leaving the attribute
   read method

#. No serialization.

By default, every Tango device attribute is in serialization by kernel.
Methods of the Tango::Attribute class allow to change the attribute
serialization behavior and to give the user omni\_mutex object to the
kernel.

.. code:: cpp
  :number-lines:

   void MyClass::init_device()
   {
      ...
      ...
      Tango::Attribute &att = dev_attr->get_attr_by_name("TheAttribute");
      att.set_attr_serial_model(Tango::ATTR_BY_USER);
      ....
      ....

   }


   void MyClass::read_TheAttribute(Tango::Attribute &attr)
   {
      ....
      ....
      the_mutex.lock();
      ....
      // Fill the attribute buffer
      ....
      attr.set_value(buffer,....);
      attr->set_user_attr_mutex(&the_mutex);
   }


The serialization model is set at line 6 in the init\_device() method.
The user omni\_mutex is passed to the Tango kernel at line 22. This
omni\_mutex object is a device data member. See
[TangoRefMan]_  for all details on the methods to set
attribute serialization model.

Client process
~~~~~~~~~~~~~~

Clients are also multi threaded processes. The underlying C++ ORB
(omniORB) try to keep system resources to a minimum. To decrease process
file descriptors usage, each connection to server is automatically
closed if it is idle for more than 2 minutes and automatically re-opened
when needed. A dedicated thread is spawned by the ORB to manage this
automatic closing connection (the ORB scavenger thread).

Threrefore, a Tango client has two threads which are:

#. The main thread

#. The ORB scavanger thread

If the client is using the event system and as Tango is using the event
push-push model, it has to be a server for receiving the events. This
increases the number of threads. The client now has 6 threads which are:

-  The main thread

-  The ORB scavenger thread

-  Two Zmq implementation threads

-  Two Tango event system related threads (the KeepAliveThread and the
   EventConsumer thread)

Generating events in a device server
------------------------------------

The server is at the origin of events. It will fire events as soon as
they occur. Standard events (*change*, *periodic* and *archive*) are
detected automatically in the polling thread and fired as soon as they
are detected. The *periodic* events can only be handled by the polling
thread. *Change, Data ready* and *archive* events can also be pushed
from the device server code. To allow a client to subscribe to events of
non polled attributes the server has to declare that events are pushed
from the code. Three methods are available for this purpose:

.. code:: cpp
  :number-lines:

    Attr::set_change_event(bool implemented, bool detect = true);
    Attr::set_archive_event(bool implemented, bool detect = true);
    Attr::set_data_ready_event( bool implemented);

where *implemented*\ =true indicates that events are pushed manually
from the code and *detect*\ =true (when used) triggers the verification
of the same event properties as for events send by the polling thread.
When setting *detect*\ =false, no value checking is done on the pushed
value! The class DeviceImpl also supports the first two methods with an
addictional parameter attr\_name defining the attribute name.

To push events manually from the code a set of data type dependent
methods can be used:

.. code:: cpp
  :number-lines:

    DeviceImpl::push_change_event (string attr_name, ....);
    DeviceImpl::push_archive_event(string attr_name, ....);

For the data ready event, a DeviceImpl class method has to be used to
push the event.

.. code:: cpp
  :number-lines:

    DeviceImpl::push_data_ready_event(string attr_name,Tango::DevLong ctr);

See the class documentation for all available interfaces.

For non-standard events a single call exists for pushing the data to the
CORBA Notification Service (omniNotify). Clients who are subscribed to
this event have to know what data type is in the DeviceAttribute and
unpack it accordingly.

To push non-standard events, use the following api call is available to
all device servers :

.. code:: cpp
  :number-lines:

    DeviceImpl::push_event( string attr_name,
                 vector<string> &filterable_names,
                 vector<double> &filterable_vals,
                 Attribute &att)

where *attr\_name* is the name of the attribute\ *. Filterable\_names*
and *filterable\_vals* represent any filterable data which can be used
by clients to filter on. Here is a typical example of what a server will
need to do to send its own events. We are in the read method of the
Sinusoide attribute. This attribute is readable as any other attribute
but an event is sent if its value is positive when it is read. On top of
that, this event is sent with one filterable field called value which is
set to the attribute value.

.. code:: cpp
  :number-lines:

    void MyClass::read_Sinusoide(Tango::Attribute &attr)
    {
      ...
         struct timeval tv;
         gettimeofday(&tv, NULL);
         sinusoide = 100 * sin( 2 * 3.14 * frequency * tv.tv_sec);

         if (sinusoide >= 0)
         {
            vector<string> filterable_names;
            vector<double> filterable_value;

            filterable_names.push_back("value");
            filterable_value.push_back((double)sinusoide);

            push_event( attr.get_name(),
                        filterable_names, filterable_value,
                        &sinusoide);
         }
      ....
      ....

   }

line 13-14 : The filter pair name/value is initialised

line 16-18 : The event is pushed

Using multicast protocol to transfer events
-------------------------------------------

This feature is available starting with Tango 8.1. Transferring events
using a multicast protocol means delivering the events to a group of
clients simultaneously in a single transmission from the event source.
Tango, through ZMQ, uses the OpenPGM multicating protocol. This is one
implementation of the PGM protocol defined by the RFC 3208 (Reliable
multicasting protocol). Nevertheless, the default event communication
mode is unicast and propagating events via multicasting requires some
specific configuration.

Configuring events to use multicast transport
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Before using multicasting transport for event(s), you have to choose
which address and port have to be used. In a IP V4 network, only a
limited set of addresses are associated with multicasting. These are the
IP V4 addresses between

224.0.1.0 and 238.255.255.255

Once the address is selected, you have to choose a port number. Together
with the event name, these are the two minimum configuration
informations which have to be provided to Tango to get multicast
transport. This configuration is done using the **MulticastEvent** free
property associated to the **CtrlSystem** object.

|image19|

In the above window dump of the Jive tool, the *change* event on the
*state* attribute of the *dev/test/11* device has to be transferred
using multicasting with the address *226.20.21.22* and the port number
*2222*. The exact definition of this CtrlSystem/MulticastEvent property
for one event propagated using multicast is

.. code:: cpp
  :number-lines:

   CtrlSystem->MulticastEvent:   Multicast address,
                                 port number,
                                 [rate in Mbit/sec],
                                 [ivl in seconds],
                                 event name

Rate and Ivl are optional properties. In case several events have to be
transferred using multicasting, simply extend the MulicastEvent property
with the configuration parameters related to the other events. There is
only one MultiCastEvent property per Tango control system. The
underlying multicast protocol (PGM) is rate limited. This means that it
limits its network bandwidth usage to a user defined value. The optional
third configuration parameter is the maximum rate (in Mbit/sec) that the
protocol will use to transfert this event. Because PGM is a reliable
protocol, data has to be buffered for re-transmission in case a receiver
signal some lost data. The optional forth configuration parameter
specify the maximum amount of time (in seconds) that a receiver can be
absent for a multicast group before unrecoverable data loss will occur.
Exercise care when setting large recovery interval as the data needed
for recovery will be held in memory. For example, a 60 seconds (1
minute) recovery interval at a data rate of 1 Gbit/sec requires a 7
GBytes in-memory buffer. Whan any of these two optional parameters are
not set, the default value (defined in next sub-chapter) are used. Here
is another example of events using multicasting configuration

|image20|

In this example, there are 5 events which are transmitted using
multicasting:

#. Event *change* for attribute *state* on device *dev/test/11* which
   uses multicasting address *226.20.21.22* and port number *2222*

#. Event *periodic* for attribute *state* on device *dev/test/10* which
   uses multicasting address *226.20.21.22* and port number *3333*

#. Event *change* for attribute *ImaAttr* on device *et/ev/01* which
   uses multicasting address *226.30.31.32* and port number *4444*. Note
   that this event uses a rate set to *40 Mbit/sec* and a ivl set to *20
   seconds*.

#. Event *change* for attribute *event\_change\_tst* on device
   *dev/test/12* which uses multicasting address *226.20.21.22* and port
   number *2233*

#. Event *archive* for attribute *event\_change\_tst* on device
   *dev/tomasz/3* which uses multicasting address *226.20.21.22* and
   port number *2234*

Default multicast related properties
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

On top of the MulticastEvent property previously described, Tango
supports three properties to defined default value for multicast
transport tuning. These properties are:

-  **MulticastRate** associated to the CtrlSystem object. This defines
   the maximum rate will will be used by the multicast protocol when
   transferring event. The unit is Mbit/sec. In case this property is
   not defined, the Tango library used a value of 80 Mbit/sec.

-  **MulticastIvl** associated to the CtrlSystem object. It specifies
   the maximusm time (in sec) during which data has to be buffered for
   re-transmision in case a receiver signals some lost data. The unit
   is seconds. In case this property is not defined, the Tango library
   takes a value of 20 seconds.

-  **MulticastHops** associated to the CtrlSystem object. This property
   defines the maximum number of element (router), the multicast packet
   is able to cross. Each time one element is crossed, the value is
   decremented. When it reaches 0, the packet is not transferred any
   more. In case this property is not defined, the Tango library uses a
   value of 5.

Memorized attribute
-------------------

It is possible to ask Tango to store in its database the last written
value for attribute of the SCALAR data format and obviously only for
READ\_WRITE or READ\_WITH\_WRITE attribute. This is fully automatic.
During device startup phase, for all device memorized attributes, the
value written in the database is fetched and applied. A write\_attribute
call can be generated to apply the memorized value to the attribute or
only the attribute set point can be initialised. The following piece of
code shows how the source code should be written to set an attribute as
memorized and to initialise only the attribute set point.

.. code:: cpp
  :number-lines:

   void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
        ...
        att_list.push_back(new String_attrAttr());
        att_list.back()->set_memorized();
        att_list.back()->set_memorized_init(false);
        ...
    }

Line 4 : The attribute to be memorized is created and inserted in the
attribute vector.

Line 5 : The *set\_memorized()* method of the attribute base class is
called to define the attribute as memorized.

Line 6 : The set\_memorized\_init() method is called with the parameter
false to define that only the set point should be initialsied.

Forwarded attribute
-------------------

Definition
~~~~~~~~~~

Let’s take an example to explain what is a forwarded attribute. We
assume we have to write a Tango class for a ski lift in a ski resort
somewhere in the Alps. Obviously, the ski lift has a motor for which we
already have a Tango class. This motor Tango class has one attribute
*speed*. But for the ski lift, the motor speed is not the only thing
which has to be controlled. For instance, you also want to give access
to the wind sensor data installed on the top of the ski lift. Therefore,
you write a ski-lift Tango class representing the whole ski-lift system.
This ski-lift class will have at least two attributes which are:

#. The wind speed at the top of the ski-lift

#. The motor speed

The ski-lift Tango class motor speed attribute is nothing more than the
motor Tango class speed attribute. All the ski-lift class has to do for
this attribute is to forward the request (read/write) to the speed
attribute of the motor Tango class. The speed attribute of the ski-lift
Tango class is a **forwarded attribute** while the speed attribute of
the motor Tango class is its **root attribute**.

A forwarded attribute get its configuration from its root attribute and
it forwards to its root attribute

-  Its read / write / write\_read requests

-  Its configuration change

-  Its event subscription

-  Its locking behavior

As stated above, a forwarded attribute has the same configuration than
its root attribute except its *name* and *label* which stays local. All
other attribute configuration parameters are forwarded to the root
attribute. If a root attribute configuration parameter is changed, the
forwarded attribute is informed (via event) and its local configuration
is also modified.

The association between the forwarded attribute and its root attribute
is done using a property named

\_\_root\_att

belonging to the forwarded attribute. This property value is simply the
name of the root attribute. Muti-control system is supported and this
\_\_root\_att attribute property value can be something like
*tango://my\_tango\_host:10000/my/favorite/dev/the\_root\_attribute*.
The name of the root attribute is included in attribute configuration.

It is forbidden to poll a forwarded attribute and one exception is
thrown if such a case happens. Polling has to be done on the root
attribute. Nevertheless, if the root attribute is polled, a request to
read the forwarded attribute with the DeviceProxy object source
parameter set to CACHE\_DEVICE or CACHE will get its data from the root
attribute polling buffer.

If you subscribe to event(s) on a forwarded attribute, the subscription
is forwarded to the root attribute. When the event is received by the
forwarded attribute, the attribute name in the event data is modified to
reflect the forwarded attribute name and the event is pushed to the
original client(s).

When a device with forwarded attribute is locked, the device to which
the root attribute belongs is also locked.

Coding
~~~~~~

As explained in the chapter Writing a Tango device server, each Tango
class attribute is implemented via a C++ class which has to inherit from
either *Attr*, *SpectrumAttr* or *ImageAttr* according to the attribute
data format. For forwarded attribute, the related class has to inherit
from the **FwdAttr** class whatever its data format is. For classical
attribute, the programmer can define in the Tango class code default
value for the attribute properties using one instance of the
*UserDefaultAttrProp* class. For forwarded attribute, the programmer has
to create one instance of the **UserDefaultFwdAttrProp** class but only
the attribute label can be defined. One example of how to program a
forwarded attribute is given below

.. code:: cpp
  :number-lines:

    class MyFwdAttr: public Tango::FwdAttr
    {
    public:
        MyFwdAttr(const string &_n):FwdAttr(_n) {};
        ~MyFwdAttr() {};
    };

    void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
       ...
       MyFwdAttr *att1 = new MyFwdAttr("fwd_att_name");
       Tango::UserDefaultFwdAttrProp att1_prop;
       att1_prop.set_label("Gasp a fwd attribute");
       att1->set_default_properties(att1_prop);
       att_list.push_back(att1);
       ...
    }

Line 1 : The forwarded attribute class inherits from FwdAttr class.

Line 4-5 : Only constructor and destructor methods are required

Line 11 : The attribute object is created

Line 12-14 : A default value for the forwarded attribute label is
defined.

Line 15: The forwarded attribute is added to the list of attribute

In case of error in the forwarded attribute configuration (for instance
missing \_\_root\_att property), the attribute is not created by the
Tango kernel and is therefore not visible for the external world. The
state of the device to which the forwarded attribute belongs to is set
to ALARM (if not already FAULT) and a detailed error report is available
in the device status. In case a device with forwarded attribute(s) is
started before the device(s) with the root attribute(s), the same
principle is used: forwarded attribute(s) are not created, device state
is set to ALARM and device status is reporting the error. When the
device(s) with the root attribute will start, the forwarded attributes
will automatically be created.

Transferring images
-------------------

Some optimized methods have been written to optimize image transfer
between client and server using the attribute DevEncoded data type. All
these methods have been merged in a class called EncodedAttribute.
Within this class, you will find methods to:

-  Encode an image in a compressed way (JPEG) for images coded on 8
   (gray scale), 24 or 32 bits

-  Encode a grey scale image coded on 8 or 16 bits

-  Encode a color image coded on 24 bits

-  Decode images coded on 8 or 16 bits (gray scale) and returned a 8 or
   bits grey scale image

-  Decode color images transmitted using a compressed format (JPEG) and
   returns a 32 bits RGB image

The following code snippets are examples of how these methods have to be
used in a server and in a client. On the server side, creates an
instance of the EncodedAttribute class within your object

.. code:: cpp
  :number-lines:

   class MyDevice::Tango::Device_4Impl
    {
        ...
        Tango::EncodedAttribute jpeg;
        ...
    }

In the code of your device, use an encoding method of the
EncodedAttribute class

.. code:: cpp
  :number-lines:

   void MyDevice::read_Encoded_attr_image(Tango::Attribute &att)
   {
        ....
        jpeg.encode_jpeg_gray8(imageData,256,256,50.0);
        att.set_value(&jpeg);
   }

Line 4: Image encoding. The size of the image is 256 by 256. Each pixel
is coded using 8 bits. The encoding quality is defined to 50 in a scale
of 0 - 100. imageData is the pointer to the image data (pointer to
unsigned char)

Line 5: Set the value of the attribute using a *Attribute::set\_value()*
method.

On the client side, the code is the following (without exception
management)

.. code:: cpp
  :number-lines:

      ....
      DeviceAttribute da;
      EncodedAttribute att;
      int width,height;
      unsigned char *gray8;

      da = device.read_attribute("Encoded_attr_image");
      att.decode_gray8(&da,&width,&height,&gray8);
      ....
     delete [] gray8;
     ...

The attribute named Encoded\_attr\_image is read at line7. The image is
decoded at line 8 in a 8 bits gray scale format. The image data are
stored in the buffer pointed to by gray8. The memory allocated by the
image decoding at line 8 is returned to the system at line 10.

Device server with user defined event loop
------------------------------------------

Sometimes, it could be usefull to write your own process event handling
loop. For instance, this feature can be used in a device server process
where the ORB is only one of several components that must perform event
handling. A device server with a graphical user interface must allow the
GUI to handle windowing events in addition to allowing the ORB to handle
incoming requests. These types of device server therefore perform
non-blocking event handling. They turn the main thread of control over
each of the vvarious event-handling sub-systems while not allowing any
of them to block for significants period of time. The *Tango::Util*
class has a method called *server\_set\_event\_loop()* to deal with such
a case. This method has only one argument which is a function pointer.
This function does not receive any argument and returns a boolean. If
this boolean is true, the device server process exits. The device server
core will call this function in a loop without any sleeping time between
the call. It is the user responsability to implement in this function
some kind of sleeping mechanism in order not to make this loop too CPU
consuming. The code of this function is executed by the device server
main thread. The following piece of code is an example of how you can
use this feature.

.. code:: cpp
  :number-lines:


    bool my_event_loop()
    {
       bool ret;

       some_sleeping_time();

       ret = handle_gui_events();

       return ret;
    }

    int main(int argc,char *argv[])
    {
       Tango::Util *tg;
       try
       {
          // Initialise the device server
          //----------------------------------------
          tg = Tango::Util::init(argc,argv);

          tg->set_polling_threads_pool_size(5);

          // Create the device server singleton
          //        which will create everything
          //----------------------------------------
          tg->server_init(false);

          tg->server_set_event_loop(my_event_loop);

          // Run the endless loop
          //----------------------------------------
          cout << "Ready to accept request" << endl;
          tg->server_run();
       }
       catch (bad_alloc)
       {
       ...

The device server main event loop is set at line 29 before the call to
the Util::server\_run() method. The function used as server loop is
defined between lines 2 and 11.

Device server using file as database
------------------------------------

For device servers not able to access the Tango database (most of the
time due to network route or security reason), it is possible to start
them using file instead of a real database. This is done via the device
server

-file=<file name>

command line option. In this case,

-  Getting, setting and deleting class properties

-  Getting, setting and deleting device properties

-  Getting, setting and deleting class attribute properties

-  Getting, setting and deleting device attribute properties

are handled using the specified file instead of the Tango database. The
file is an ASCII file and follows a well-defined syntax with predefined
keywords. The simplest way to generate the file for a specific device
server is to use the Jive application. See [Jive]_
to get Jive documentation. The Tango database is not only used to store
device configuration parameters, it is also used to store device network
access parameter (the CORBA IOR). To allow an application to connect to
a device hosted by a device server using file instead of database, you
need to start it on a pre-defined port, and you must use one of the
underlying ORB option called *endPoint* like

myserver myinstance\_name -file=/tmp/MyServerFile -ORBendPoint
giop:tcp::<port number>

to start your device server. The device name passed to the client
application must also be modified in order to refect the non-database
usage. See [DeviceNaming] to learn about Tango device name syntax.
Nevertheless, using this Tango feature prevents some other features to
be used :

-  No check that the same device server is running twice.

-  No device or attribute alias name.

-  In case of several device servers running on the same host, the user
   must manually manage a list of already used network port.

Device server without database
------------------------------

In some very specific cases (Running a device server within a lab during
hardware development...), it could be very useful to have a device
server able to run even if there is no database in the control system.
Obviously, running a Tango device server without a database means
loosing Tango features. The lost features are :

-  No check that the same device server is running twice.

-  No device configuration via properties.

-  No event generated by the server.

-  No memorized attributes

-  No device attribute configuration via the database.

-  No check that the same device name is used twice within the same
   control system.

-  In case of several device servers running on the same host, the user
   must manually manage a list of already used network port.

To run a device server without a database, the **-nodb** command line
option must be used. One problem when running a device server without
the database is to pass device name(s) to the device server. Within
Tango, it is possible to define these device names at two different
levels :

#. At the command line with the **-dlist** option: In case of device
   server with several device pattern implementation, the device name
   list given at command line is only for the last device pattern
   created in the *class\_factory()* method. In the device name list,
   the device name separator is the comma character.

#. At the device pattern implementation level: In the class inherited
   from the Tango::DeviceClass class via the re-definition of a well
   defined method called *device\_name\_factory()*

If none of these two possibilities is used, the tango core classes
defined one default device name for each device pattern implementation.
This default device name is *NoName*. Device definition at the command
line has the highest priority.

Example of device server started without database usage
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Without database, you need to start a Tango device server on a
pre-defined port, and you must use one of the underlying ORB option
called *endPoint* like

myserver myinstance\_name -ORBendPoint giop:tcp::<port number> -nodb
-dlist a/b/c

The following is two examples of starting a device server not using the
database when the *device\_name\_factory()* method is not re-defined.

-  | StepperMotor et -nodb -dlist id11/motor/1,id11/motor/2
   | This command line starts the device server with two devices named
     *id11/motor/1* and *id11/motor/2*

-  | StepperMotor et -nodb
   | This command line starts a device server with one device named
     *NoName*

When the *device\_name\_factory()* method is re-defined within the
StepperMotorClass class.

.. code:: cpp
  :number-lines:

    void StepperMotorClass::device_name_factory(vector<string> &list)
    {
        list.push_back("sr/cav-tuner/1");
        list.push_back("sr/cav-tuner/2");
    }

-  | StepperMotor et -nodb
   | This commands starts a device server with two devices named
     *sr/cav-tuner/1* and *sr/cav-tuner/2*.

-  | StepperMotor et -nodb -dlist id12/motor/1
   | Starts a device server with only one device named id12/motor/1

Connecting client to device within a device server started without database
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

In this case, the host and port on which the device server is running
are part of the device name. If the device name is *a/b/c*, the host is
*mycomputer* and the port *1234*, the device name to be used by client
is

mycomputer:1234/a/b/c#dbase=no

See appendix [DeviceNaming] for all details about Tango object naming.

Multiple database servers within a Tango control system
-------------------------------------------------------

Tango uses MySQL as database and allows access to this database via a
specific Tango device server. It is possible for the same Tango control
system to have several Tango database servers. The host name and port
number of the database server is known via the TANGO\_HOST environment
variable. If you want to start several database servers in order to
prevent server crash, use the following TANGO\_HOST syntax

TANGO\_HOST=<host\_1>:<port\_1>,<host\_2>:<port\_2>,<host\_3>:<port\_3>

All calls to the database server will automatically switch to a running
servers in the given list if the one used dies.

The Tango controlled access system
----------------------------------

User rights definition
~~~~~~~~~~~~~~~~~~~~~~

Within the Tango controlled system, you give rights to a user. User is
the name of the user used to log-in the computer where the application
trying to access a device is running. Two kind of users are defined:

#. Users with defined rights

#. Users without any rights defined in the controlled system. These
   users will have the rights associated with the pseudo-user called All
   Users

The controlled system manages two kind of rights:

-  Write access meaning that all type of requests are allowed on the
   device

-  Read access meaning that only read-like access are allowed
   (write\_attribute, write\_read\_attribute and set\_attribute\_config
   network calls are forbidden). Executing a command is also forbidden
   except for commands defined as **Allowed commands**. Getting a device
   state or status using the command\_inout call is always allowed. The
   definition of the allowed commands is done at the device class level.
   Therefore, all devices belonging to the same class will have the
   allowed commands set.

The rights given to a user is the check result splitted in two levels:

#. At the host level: You define from which hosts the user may have
   write access to the control system by specifying the host name. If
   the request comes from a host which is not defined, the right will be
   Read access. If nothing is defined at this level for the user, the
   rights of the All Users user will be used. It is also possible to
   specify the host by its IP address. You can define a host family
   using wide-card in the IP address (eg. 160.103.11.\* meaning any host
   with IP address starting with 160.103.11). Only IP V4 is supported.

#. At the device level: You define on which device(s) request are
   allowed using device name. Device family can be used using widecard
   in device name like domin/family/\*

Therefore, the controlled system is doing the following checks when a
client try to access a device:

-  Get the user name

-  Get the host IP address

-  If rights defined at host level for this specific user and this IP
   address, gives user temporary write acccess to the control system

-  If nothing is specified for this specific user on this host, gives to
   the user a temporary access right equal to the host access rights of
   the All User user.

-  If the temporary right given to the user is write access to the
   control system

   -  If something defined at device level for this specific user

      -  If there is a right defined for the device to be accessed (or
         for the device family), give user the defined right

      -  Else

         -  If rights defined for the All Users user for this device,
            give this right to the user

         -  Else, give user the Read Access for this device

   -  Else

      -  If there is a right defined for the device to be accessed (or
         for the device family) for the All User user, give user this
         right

      -  Else, give user the Read Access right for this device

-  Else, access right will be Read Access

Then, when the client tries to access the device, the following
algorithm is used:

-  If right is Read Access

   -  If the call is a write type call, refuse the call

   -  If the call is a command execution

      -  If the command is one of the command defined in the Allowed
         commands for the device class, send the call

      -  Else, refuse the call

All these checks are done during the DeviceProxy instance constructor
except those related to the device class allowed commands which are
checked during the command\_inout call.

To simplify the rights management, give the All Users user host access
right to all hosts (.\*.\*.\*) and read access to all devices (/\*/\*).
With such a set-up for this user, each new user without any rights
defined in the controlled access will have only Read Access to all
devices on the control system but from any hosts. Then, on request,
gives Write Access to specific user on specific host (or family) and on
specific device (or family).

The rights managements are done using the Tango
Astor [ASTOR]_ tool which has some graphical windows
allowing to grant/revoke user rights and to define device class allowed
commands set. The following window dump shows this Astor window.

|image21|

In this example, the user taurel has Write Access to the device
sr/d-ct/1 and to all devices belonging to the domain fe but only from
the host pcantares He has read access to all other devices but always
only from the host pcantares. The user verdier has write access to the
device sys/dev/01 from any host on the network 160.103.5 and Read Access
to all the remaining devices from the same network. All the other users
has only Read Access but from any host.

Running a Tango control system with the controlled access
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

All the users rights are stored in two tables of the Tango database. A
dedicated device server called **TangoAccessControl** access these
tables without using the classical Tango database server. This
TangoAccessControl device server must be configured with only one
device. The property **Services** belonging to the free object
**CtrlSystem** is used to run a Tango control system with its controlled
access. This property is an array of string with each string describing
the service(s) running in the control system. For controlled access, the
service name is AccessControl. The service instance name has to be
defined as tango. The device name associated with this service must be
the name of the TangoAccessControl server device. For instance, if the
TangoAccessControl device server device is named
*sys/access\_control/1*, one element of the Services property of the
CtrlSystem object has to be set to

AccessControl/tango:sys/access\_control/1

If the service is defined but without a valid device name corresponding
to the TangoAccessControl device server, all users from any host will
have write access (simulating a Tango control system without controlled
access). Note that this device server connects to the MySQL database and
therefore may need the MySQL connection related environment variables
MYSQL\_USER and MYSQL\_PASSWORD described in [sub:Db-Env-Variables]

Even if a controlled access system is running, it is possible to by-pass
it if, in the environment of the client application, the environment
variable SUPER\_TANGO is defined to true. If for one reason or another,
the controlled access server is defined but not accessible, the device
right checked at that time will be Read Access.

.. include:: footnotes.rst
