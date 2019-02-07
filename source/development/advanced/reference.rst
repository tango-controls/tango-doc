.. raw:: latex

    \clearpage

Reference part
==============

:audience:`developers`, :lang:`all`

**This chapter is only part of the TANGO device server reference guide.
To get reference documentation about the C++ library classes, see
[TangoRefMan]_ . To get reference documentation about
the Java classes, also see   [TangoRefMan]_ .**

Device parameter
----------------

A black box, a device description field, a device state and status are
associated with each TANGO device.

The device black box
~~~~~~~~~~~~~~~~~~~~

The device black box is managed as a circular buffer. It is possible to
tune the buffer depth via a device property. This property name is

device name->blackbox\_depth

A default value is hard-coded to 50 if the property is not defined. This
black box depth property is retrieved from the Tango property database
during the device creation phase.

The device description field
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

There are two ways to intialise the device description field.

-  At device creation time. Some constructors of the DeviceImpl class
   supports this field as parameter. If these constructor are not used,
   the device description field is set to a default value which is *A
   Tango device*.

-  With a property. A description field defines with this method
   overrides a device description defined at construction time. The
   property name is

   device name->description

The device state and status
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Some constructors of the DeviceImpl class allows the initialisation of
device state and/or status or device creation time. If these fields are
not defined, a default value is applied. The default state is
Tango::UNKOWN, the default status is *Not Initialised.*

The device polling
~~~~~~~~~~~~~~~~~~

Seven device properties allow the polling tunning. These properties are
described in the following table

.. csv-table::
   :header-rows: 1

   "Property name", "property rule", "default value"
   "poll\_ring\_depth", "Polling buffer depth", "10"
   "cmd\_poll\_ring\_depth", "Cmd polling buffer depth", ""
   "attr\_poll\_ring\_depth", "Attr polling buffer depth", ""
   "poll\_old\_factor", "Data too old factor", "4"
   "min\_poll\_period", "Minimun polling period", ""
   "cmd\_min\_poll\_period", "Min. polling period for cmd", ""
   "attr\_min\_poll\_period", "Min. polling period for attr", ""

The rule of the poll\_ring\_depth property is obvious. It defines the
polling ring depth for all the device polled command(s) and
attribute(s). Nevertheless, when filling the polling buffer via the
fill\_cmd\_polling\_buffer() (or fill\_attr\_polling\_buffer()) method,
it could be helpfull to define specific polling ring depth for a command
(or an attribute). This is the rule of the cmd\_poll\_ring\_depth and
attr\_poll\_ring\_depth properties. For each polled object with specific
polling depth (command or attribute), the syntax of this property is the
object name followed by the ring depth (ie State,20,Status,15). If one
of these properties is defined, for the specific command or attribute,
it will overwrite the value set by the poll\_ring\_depth property. The
poll\_old\_factor property allows the user to tune how long the data
recorded in the polling buffer are valid. Each time some data are read
from the polling buffer, a check is done between the date when the data
were recorded in the polling buffer and the date when the user request
these data. If the interval is greater than the object polling period
multiply by the value of the poll\_old\_factor factory, an exception is
returned to the caller. These two properties are defined at device level
and therefore, it is not possible to tune this parameter for each polled
object (command or attribute). The last 3 properties are dedicated to
define a polling period minimum threshold. The property
min\_poll\_period defines in (mS) a device minimum polling period.
Property cmd\_min\_poll\_period defines (in mS) a minimum polling period
for a specific command. The syntax of this property is the command name
followed by the minimum polling period (ie MyCmd,400). Property
attr\_min\_poll\_period defines (in mS) a minimum polling period for a
specific attribute. The syntax of this property is the attribute name
followed by the minimum polling period (ie MyAttr,600). These two
properties has a higher priority than the min\_poll\_period property. By
default these three properties are not defined mening that there is no
minimun polling period.

Four other properties are used by the Tango core classes to manage the
polling thread. These properties are :

-  polled\_cmd to memorize the name of the device polled command

-  polled\_attr to memorize the name of the device polled attribute

-  non\_auto\_polled\_cmd to memorize the name of the command which
   shoule not be polled automatically at the first request

-  non\_auto\_polled\_attr to memorize the name of the attribute which
   should not be polled automatically at the first request

You don’t have to change these properties values by yourself. They are
automatically created/modified/deleted by Tango core classes.

.. _the-device-logging:

The device logging
~~~~~~~~~~~~~~~~~~

The Tango Logging Service (TLS) uses device properties to control device
logging at startup (static configuration). These properties are
described in the following table

.. csv-table::
   :header-rows: 1

   "Property name", "property rule", "default value"
   "logging\_level", "Initial device logging level", "WARN"
   "logging\_target", "Initial device logging target", "No default"
   "logging\_rft", "Logging rolling file threshold", "20 Mega bytes"
   "logging\_path", "Logging file path", "/tmp/tango-<logging name> or C:/tango-<logging name> (Windows)"

-  The logging\_level property controls the initial logging level of a
   device. Its set of possible values is: OFF, FATAL, ERROR, WARN, INFO
   or DEBUG. This property is overwritten by the verbose command line
   option (-v).

-  The logging\_target property is a multi-valued property containing
   the initial target list. Each entry must have the following format:
   target\_type::target\_name (where target\_type is one of the
   supported target types and target\_name, the name of the target).
   Supported target types are: *console*, *file* and *device*. For a
   device target, target\_name must contain the name of a log consumer
   device (as defined in [sec:Tango-log-consumer]). For a file target,
   target\_name is the name of the file to log to. If omitted the
   device’s name is used to build the file name
   (domain\_family\_member.log). Finally, target\_name is ignored in the
   case of a console target. The TLS does not report any error occurred
   while trying to setup the initial targets.

   -  | Logging\_target property example :
      | logging\_target = [ console, file, file::/home/me/mydevice.log,
        device::tmp/log/1
      | In this case, the device will automatically logs to the standard
        output, to its default file (which is something like
        domain\_family\_member.log), to a file named mydevice.log and
        located in /home/me. Finally, the device logs are also sent to a
        log consumer device named tmp/log/1.

-  The logging\_rft property specifies the rolling file threshold (rft),
   of the device’s file targets. This threshold is expressed in Kb. When
   the size of a log file reaches the so-called rolling-file-threshold
   (rft), it is backuped as *current\_log\_file\_name* + *\_1* and a new
   current\_log\_file\_name is opened. Obviously, there is only one
   backup file at a time (i.e. any existing backup is destroyed before
   the current log file is backuped). The default threshold is 20 Mb,
   the minimum is 500 Kb and the maximum is 1000 Mb.

-  The logging\_path property overwrites the TANGO\_LOG\_PATH
   environment variable. This property can only be applied to a DServer
   class device and has no effect on other devices.

Device attribute
----------------

Attribute are configured with two kind of parameters: Parameters
hard-coded in source code and modifiable parameters

Hard-coded device attribute parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Seven attribute parameters are defined at attribute creation time in the
Tango class source code. Obviously, these parameters are not modifiable
except with a new source code compilation. These parameters are

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "name", "Attribute name"
   "data\_type", "Attribute data type"
   "data\_format", "Attribute data format"
   "writable", "Attribute read/write type"
   "max\_dim\_x", "Maximum X dimension"
   "max\_dim\_y", "Maximum Y dimension"
   "writable\_attr\_name", "Associated write attribute"
   "level", "Attribute display level"
   "root\_attr\_name", "Root attribute name"

The Attribute data type
^^^^^^^^^^^^^^^^^^^^^^^

Thirteen data types are supported. These data types are

-  Tango::DevBoolean

-  Tango::DevShort

-  Tango::DevLong

-  Tango::DevLong64

-  Tango::DevFloat

-  Tango::DevDouble

-  Tango::DevUChar

-  Tango::DevUShort

-  Tango::DevULong

-  Tango::DevULong64

-  Tango::DevString

-  Tango::DevState

-  Tango::DevEncoded

The attribute data format
^^^^^^^^^^^^^^^^^^^^^^^^^

Three data format are supported for attribute

.. csv-table::
   :header-rows: 1

   "Format", "Description"
   "Tango::SCALAR", "The attribute value is a single number"
   "Tango::SPECTRUM", "The attribute value is a one dimension number"
   "Tango::IMAGE", "The attribute value is a two dimension number"

The max\_dim\_x and max\_dim\_y parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

These two parameters defined the maximum size for attributes of the
SPECTRUM and IMAGE data format.


.. csv-table::
   :header-rows: 1

   "data format", "max\_dim\_x", "max\_dim\_y"
   "Tango::SCALAR", "1", "0"
   "Tango::SPECTRUM", "User Defined", "0"
   "Tango::IMAGE", "User Defined", "User Defined"

For attribute of the Tango::IMAGE data format, all the data are also
returned in a one dimension array. The first array is value[0],[0],
array element X is value[0],[X-1], array element X+1 is value[1][0] and
so forth.

The attribute read/write type
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Tango supports four kind of read/write attribute which are :

-  Tango::READ for read only attribute

-  Tango::WRITE for writable attribute

-  Tango::READ\_WRITE for attribute which can be read and write

-  Tango::READ\_WITH\_WRITE for a readable attribute associated to a
   writable attribute (For a power supply device, the current really
   generated is not the wanted current. To handle this, two attributes
   are defined which are *generated\_current* and *wanted\_current*. The
   *wanted\_current* is a Tango::WRITE attribute. When the
   *generated\_current* attribute is read, it is very convenient to also
   get the *wanted\_current* attribute. This is exactly what the
   Tango::READ\_WITH\_WRITE attribute is doing)

When read, attribute values are always returned within an array even for
scalar attribute. The length of this array and the meaning of its
elements is detailed in the following table for scalar attribute.

.. csv-table::
   :header-rows: 1

   "Name", "Array length", "Array[0]", "Array[1]"
   "Tango::READ", "1", "Read value", ""
   "Tango::WRITE", "1", "Last write value", ""
   "Tango::READ\_WRITE", "2", "Read value", "Last write value"
   "Tango::READ\_WITH\_WRITE", "2", "Read value", "Associated attribute last write value"

When a spectrum or image attribute is read, it is possible to code the
device class in order to send only some part of the attribute data (For
instance only a Region Of Interest for an image) but never more than
what is defined by the attribute configuration parameters max\_dim\_x
and max\_dim\_y. The number of data sent is also transferred with the
data and is named **dim\_x** and **dim\_y**. When a spectrum or image
attribute is written, it is also possible to send only some of the
attribute data but always less than max\_dim\_x for spectrum and
max\_dim\_x \* max\_dim\_y for image. The following table describe how
data are returned for spectrum attribute. dim\_x is the data size sent
by the server when the attribute is read and dim\_x\_w is the data size
used during the last attribute write call.

.. csv-table::
   :header-rows: 1

   "Name", "Array length", "Array[0->dim\_x-1]", "Array[dim\_x-> dim\_x + dim\_x\_w -1]"
   "Tango::READ", "dim\_x", "Read values", "", ""
   "Tango::WRITE", "dim\_x\_w", "Last write values", ""
   "Tango::READ\_WRITE", "dim\_x + dim\_x\_w", "Read value", "Last write values"
   "Tango::READ\_WITH\_WRITE", "dim\_x + dim\_x\_w", "Read value", "Associated attributelast write values"

The following table describe how data are returned for image attribute.
dim\_r is the data size sent by the server when the attribute is read
(dim\_x \* dim\_y) and dim\_w is the data size used during the last
attribute write call (dim\_x\_w \* dim\_y\_w).

.. csv-table::
   :header-rows: 1

   "Name", "Array length", "Array[0->dim\_r-1]", "Array[dim\_r->dim\_r + dim\_w -1]"
   "Tango::READ", "dim\_r", "Read values", ""
   "Tango::WRITE", "dim\_w", "Last write values", ""
   "Tango::READ\_WRITE", "dim\_r + dim\_w", "Read value", "Last write values"
   "Tango::READ\_WITH\_WRITE", "dim\_r + dim\_w", "Read value", "Associated attributelast write values"

Until a write operation has been performed, the last write value is
initialized to *0* for scalar attribute of the numeriacal type, to *Not
Initialised* for scalar string attribute and to *true* for scalar
boolean attribute. For spectrum or image attribute, the last write value
is initialized to an array of one element set to *0* for numerical type,
to an array of one element set to *true* for boolean attribute and to an
array of one element set to *Not initialized* for string attribute

The associated write attribute parameter
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This parameter has a meaning only for attribute with a
Tango::READ\_WITH\_WRITE read/write type. This is the name of the
associated write attribute.

The attribute display level parameter
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This parameter is only an help for graphical application. It is a C++
enumeration starting at 0. The code associated with each attribute
display level is defined in the following table (Tango::DispLevel).

.. csv-table::
   :header-rows: 1

   "name", "Value"
   "Tango::OPERATOR", "0"
   "Tango::EXPERT", "1"

This parameter allows a graphical application to support two types of
operation :

-  An operator mode for day to day operation

-  An expert mode when tuning is necessary

According to this parameter, a graphical application knows if the
attribute is for the operator mode or for the expert mode.

The root attribute name parameter
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In case the attribute is a forwarded one, this parameter is the name of
the associated root attribute. In case of classical attribute, this
string is set to Not specified.

Modifiable attribute parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Each attribute has a configuration set of 20 modifiable parameters.
These can be grouped in three different purposes:

#. General purpose parameters

#. Alarm related parameters

#. Event related parameters

General purpose parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^

Eight attribute parameters are modifiable at run-time via a device call
or via the property database.

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "description", "Attribute description"
   "label", "Attribute label"
   "unit", "Attribute unit"
   "standard\_unit", "Conversion factor to MKSA unit"
   "display\_unit", "The attribute unit in a printable form"
   "format", "How to print attribute value"
   "min\_value", "Attribute min value"
   "max\_value", "Attribute max value"
   "enum\_labels", "Enumerated labels"
   "memorized", "Attribute memorization"

The **description** parameter describes the attribute. The **label**
parameter is used by graphical application to display a label when this
attribute is used in a graphical application. The **unit** parameter is
the attribute value unit. The **standard\_unit** parameter is the
conversion factor to get attribute value in MKSA units. Even if this
parameter is a number, it is returned as a string by the device
*get\_attribute\_config* call. The **display\_unit** parameter is the
string used by graphical application to display attribute unit to
application user. The **enum\_labels** parameter is defined only for
attribute of the DEV\_ENUM data type. This is a vector of strings with
one string for each enumeration label. It is an ordered list.

The format attribute parameter
''''''''''''''''''''''''''''''

This parameter specifies how the attribute value should be printed. It
is not valid for string attribute. This format is a string of C++
streams manipulators separated by the **;** character. The supported
manipulators are :

-  fixed

-  scientific

-  uppercase

-  showpoint

-  showpos

-  setprecision()

-  setw()

Their definition are the same than for C++ streams. An example of format
parameter is

``scientific;uppercase;setprecision(3)``.

A class called Tango::AttrManip has been written to handle this format
string. Once the attribute format string has been retrieved from the
device, its value can be printed with

``cout << Tango::AttrManip(format) << value << endl;``


The min\_value and max\_value parameters
''''''''''''''''''''''''''''''''''''''''

These two parameters have a meaning only for attribute of the
Tango::WRITE read/write type and for numerical data types. Trying to set
the value of an attribute to something less than or equal to the
min\_value parameter is an error. Trying to set the value of the
attribute to something more or equal to the max\_value parameter is also
an error. Even if these parameters are numbers, they are returned as
strings by the device *get\_attribute\_config()* call.

These two parameters have no meaning for attribute with data type
DevString, DevBoolean or DevState. An exception is thrown in case the
user try to set them for attribute of these 3 data types.

The memorized attribute parameter
'''''''''''''''''''''''''''''''''

This parameter describes the attribute memorization. It is an
enumeration with the following values:

-  NOT\_KNOWN : The device is too old to return this information.

-  NONE : The attribute is not memorized

-  MEMORIZED : The attribute is memorized

-  MEMORIZED\_WRITE\_INIT : The attribute is memorized and the memorized
   value is applied at device initialization time.

The alarm related configuration parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Six alarm related attribute parameters are modifiable at run-time via a
device call or via the property database.

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "min\_alarm", "Attribute low level alarm"
   "max\_alarm", "Attribute high level alarm"
   "min\_warning", "Attribute low level warning"
   "max\_warning", "Attribute high level warning"
   "delta\_t", "delta time for RDS alarm (mS)"
   "delta\_val", "delta value for RDS alarm (absolute)"

These parameters have no meaning for attribute with data type DevString,
DevBoolean or DevState. An exception is thrown in case the user try to
set them for attribute of these 3 data types.

The min\_alarm and max\_alarm parameters
''''''''''''''''''''''''''''''''''''''''

These two parameters have a meaning only for attribute of the
Tango::READ, Tango::READ\_WRITE and Tango::READ\_WITH\_WRITE read/write
type and for numerical data type. When the attribute is read, if its
value is something less than or equal to the min\_alarm parameter or if
it is something more or equal to the max\_alarm parameter, the attribute
quality factor will be set to Tango::ATTR\_ALARM and if the device state
is Tango::ON, it is switched to Tango::ALARM. Even if these parameters
are numbers, they are returned as strings by the device
*get\_attribute\_config()* call.

The min\_warning and max\_warning parameters
''''''''''''''''''''''''''''''''''''''''''''

These two parameters have a meaning only for attribute of the
Tango::READ, Tango::READ\_WRITE and Tango::READ\_WITH\_WRITE read/write
type and for numerical data type. When the attribute is read, if its
value is something less than or equal to the min\_warning parameter or
if it is something more or equal to the max\_warning parameter, the
attribute quality factor will be set to Tango::ATTR\_WARNING and if the
device state is Tango::ON, it is switched to Tango::ALARM. Even if these
parameters are numbers, they are returned as strings by the device
*get\_attribute\_config()* call.

The delta\_t and delta\_val parameters
''''''''''''''''''''''''''''''''''''''

These two parameters have a meaning only for attribute of the
Tango::READ\_WRITE and Tango::READ\_WITH\_WRITE read/write type and for
numerical data type. They specify if and how the RDS alarm is used. When
the attribute is read, if the difference between its read value and the
last written value is something more than or equal to the delta\_val
parameter and if at least delta\_val milli seconds occurs since the last
write operation, the attribute quality factor will be set to
Tango::ATTR\_ALARM and if the device state is Tango::ON, it is switched
to Tango::ALARM. Even if these parameters are numbers, they are returned
as strings by the device *get\_attribute\_config()* call.

The event related configuration parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Six event related attribute parameters are modifiable at run-time via a
device call or via the property database.

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "rel\_change", "Relative change triggering change event"
   "abs\_change", "Absolute change triggering change event"
   "period", "Period for periodic event"
   "archive\_rel\_change", "Relative change for archive event"
   "archive\_abs\_change", "Absolute change for archive event"
   "archive\_period", "Period for change archive event"

The rel\_change and abs\_change parameters
''''''''''''''''''''''''''''''''''''''''''

Rel\_change is a property with a maximum of 2 values (comma separated).
It specifies the increasing and decreasing relative change of the
attribute value (w.r.t. the value of the previous change event) which
will trigger the event. If the attribute is a spectrum or an image then
a change event is generated if any one of the attribute value’s
satisfies the above criterium. It’s the absolute value of these values
which is taken into account. If only one value is specified then it is
used for the increasing and decreasing change.

Abs\_change is a property of maximum 2 values (comma separated). It
specifies the increasing and decreasing absolute change of the attribute
value (w.r.t the value of the previous change event) which will trigger
the event. If the attribute is a spectrum or an image then a change
event is generated if any one of the attribute value’s satisfies the
above criterium. If only one value is specified then it is used for the
increasing and decreasing change. If no values are specified then the
relative change is used.

The periodic period parameter
'''''''''''''''''''''''''''''

The minimum time between events (in milliseconds). If no property is
specified then a default value of 1 second is used.

The archive\_rel\_change, archive\_abs\_change and archive\_period parameters
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

archive\_rel\_change is an array property of maximum 2 values which
specifies the positive and negative relative change w.r.t. the previous
attribute value which will trigger the event. If the attribute is a
spectrum or an image then an archive event is generated if any one of
the attribute value’s satisfies the above criterium. If only one
property is specified then it is used for the positive and negative
change. If no properties are specified then a default fo +-10% is used

archive\_abs\_change is an array property of maximum 2 values which
specifies the positive and negative absolute change w.r.t the previous
attribute value which will trigger the event. If the attribute is a
spectrum or an image then an archive event is generated if any one of
the attribute value’s satisfies the above criterium. If only one
property is specified then it is used for the positive and negative
change. If no properties are specified then the relative change is used.

archive\_period is the minimum time between archive events (in
milliseconds). If no property is specified, no periodic archiving events
are send.

Setting modifiable attribute parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

A default value is given to all modifiable attribute parameters by the
Tango core classes. Nevertheless, it is possible to modify these values
in source code at attribute creation time or via the database. Values
retrieved from the database have a higher priority than values given at
attribute creation time. The attribute parameters are therefore
initialized from:

#. The Database

#. If nothing in database, from the Tango class default

#. If nothing in database nor in Tango class default, from the library
   default value

The default value set by the Tango core library are

+------------------+----------------------+--------------------------+
| Parameter type   | Parameter name       | Library default value    |
+==================+======================+==========================+
| general purpose  | description          | No description           |
|                  +----------------------+--------------------------+
|                  | label                | attribute name           |
|                  +----------------------+--------------------------+
|                  | unit                 | One empty string         |
|                  +----------------------+--------------------------+
|                  | standard\_unit       | No standard unit         |
|                  +----------------------+--------------------------+
|                  | display\_unit        | No display unit          |
|                  +----------------------+--------------------------+
|                  | format               | 6 characters             |
|                  |                      | with 2 decimal           |
|                  +----------------------+--------------------------+
|                  | min\_value           | Not specified            |
|                  +----------------------+--------------------------+
|                  | max\_value           | Not specified            |
+------------------+----------------------+--------------------------+
| alarm parameters | min\_alarm           | Not specified            |
|                  +----------------------+--------------------------+
|                  | max\_alarm           | Not specified            |
|                  +----------------------+--------------------------+
|                  | min\_warning         | Not specified            |
|                  +----------------------+--------------------------+
|                  | max\_warning         | Not specified            |
|                  +----------------------+--------------------------+
|                  |& delta\_t            | Not specified            |
|                  +----------------------+--------------------------+
|                  | delta\_val           | Not specified            |
+------------------+----------------------+--------------------------+
| event parameters |rel\_change           | Not specified            |
|                  +----------------------+--------------------------+
|                  | abs\_change          | Not specified            |
|                  +----------------------+--------------------------+
|                  | period               | 1000 (mS)                |
|                  +----------------------+--------------------------+
|                  | archive\_rel\_change | Not specified            |
|                  +----------------------+--------------------------+
|                  | archive\_abs\_change | Not specified            |
|                  +----------------------+--------------------------+
|                  | archive\_period      | Not specified            |
+------------------+----------------------+--------------------------+

It is possible to set modifiable parameters via the database at two
levels :

#. At class level

#. At device level. Each device attribute have all its modifiable
   parameters sets to the value defined at class level. If the setting
   defined at class level is not correct for one device, it is possible
   to re-define it.

If we take the example of a class called *BumperPowerSupply* with three
devices called *sr/bump/1*, *sr/bump/2* and *sr/bump/3* and one
attribute called *wanted\_current*. For the first two bumpers, the
max\_value is equal to 500. For the third one, the max\_value is only
400. If the max\_value parameter is defined at class level with the
value 500, all devices will have 500 as max\_value for the
*wanted\_current* attribute. It is necessary to re-defined this
parameter at device level in order to have the max\_value for device
sr/bump/3 set to 400.

For the description, label, unit, standard\_unit, display\_unit and
format parameters, it is possible to return them to their default value
by setting them to an empty string.

Resetting modifiable attribute parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

It is possible to reset attribute parameters to their default value at
any moment. This could be done via the network call available through
the DeviceProxy::set\_attribute\_config() method family. This call takes
attribute parameters as strings. The following table describes which
string has to be used to reset attribute parameters to their default
value. In this table, the user default are the values given within Pogo
in the Properties tab of the attribute edition window (or in in Tango
class code using the Tango::UserDefaultAttrProp class).

.. csv-table::
   :header-rows: 1

   "Input string", "Action"
   "'Not specified'", "Reset to **library** default"
   "''(empty string)", "Reset to **user** default if any.
   Otherwise, reset to **library** default"
   "'NaN'", "Reset to Tango **class** default if any.
   Otherwise, reset to **user** default (if any) or to **library**
   default"

Let’s take one exemple: For one attribute belonging to a device, we have
the following attribute parameters:

.. csv-table::
   :header-rows: 1

   "Parameter name", " Def. class", " Def. user", " Def. lib"
   "standard\_unit", "", "", " No standard unit"
   "min\_value", "", " 5", " Not specified"
   "max\_value", " 50", "", " Not specified"
   "rel\_change", " 5", " 10", " Not specified"

The string Not specified sent to each attribute parameter will set
attribute parameter value to No standard unit for standard\_unit, Not
specified for min\_value, Not specified for max\_value and Not specified
as well for rel\_change. The empty string sent to each attribute
parameter will result with No stanadard unit for standard\_unit, 5 for
min\_value, Not specified for max\_value and 10 for rel\_change. The
string NaN will give No standard unit for standard\_unit, 5 for
min\_value, 50 for max\_value and 5 for rel\_change.

C++ specific: Instead of the string Not specified and NaN, the
preprocessor define **AlrmValueNotSpec** and **NotANumber** can be used.

Device pipe
-----------

Pipe are configured with two kind of parameters: Parameters hard-coded
in source code and modifiable parameters

Hard-coded device pipe parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Three pipe parameters are defined at pipe creation time in the Tango
class source code. Obviously, these parameters are not modifiable except
with a new source code compilation. These parameters are

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "name", "Pipe name"
   "writable", "Pipe read/write type"
   "disp\_level", "Pipe display level"

The pipe read/write type.
^^^^^^^^^^^^^^^^^^^^^^^^^^

Tango supports two kinds of read/write pipe which are :

-  Tango::PIPE\_READ for read only pipe

-  Tango::PIPE\_READ\_WRITE for pipe which can be read and written

The pipe display level parameter
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This parameter is only an help for graphical application. It is a C++
enumeration starting at 0. The code associated with each pipe display
level is defined in the following table (Tango::DispLevel).

.. csv-table::
   :header-rows: 1

   "name", "Value"
   "Tango::OPERATOR", "0"
   "Tango::EXPERT", "1"

This parameter allows a graphical application to support two types of
operation :

-  An operator mode for day to day operation

-  An expert mode when tuning is necessary

According to this parameter, a graphical application knows if the pipe
is for the operator mode or for the expert mode.

Modifiable pipe parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~

Each pipe has a configuration set of 2 modifiable parameters. These
parameters are modifiable at run-time via a device call or via the
property database.

.. csv-table::
   :header-rows: 1

   "Parameter name", "Parameter description"
   "description", "Pipe description"
   "label", "Pipe label"

The **description** parameter describes the pipe. The **label**
parameter is used by graphical application to display a label when this
pipe is used in a graphical application.

Setting modifiable pipe parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

A default value is given to all modifiable pipe parameters by the Tango
core classes. Nevertheless, it is possible to modify these values in
source code at pipe creation time or via the database. Values retrieved
from the database have a higher priority than values given at pipe
creation time. The pipe parameters are therefore initialized from:

#. The Database

#. If nothing in database, from the Tango class default

#. If nothing in database nor in Tango class default, from the library
   default value

The default value set by the Tango core library are

.. csv-table::
   :header-rows: 1

   "Parameter name", "Library default value"
   "description", "No description"
   "label", "pipe name"

It is possible to set modifiable parameters via the database at two
levels :

#. At class level

#. At device level. Each device pipe have all its modifiable parameters
   sets to the value defined at class level. If the setting defined at
   class level is not correct for one device, it is possible to
   re-define it.

This is the same principle than the one used for attribute configuration
modifiable parameters.

Resetting modifiable pipe parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

It is possible to reset pipe parameters to their default value at any
moment. This could be done via the network call available through the
DeviceProxy::set\_pipe\_config() method family. It uses the same
principle than the one used for resetting modifiable attribute pipe
parameters. Refer to their documentation if you want to know details
about this feature.

Device class parameter
----------------------

A device documentation field is also defined at Tango device class
level. It is defined as Tango device class level because each device
belonging to a Tango device class should have the same behaviour and
therefore the same documentation. This field is store in the DeviceClass
class. It is possible to set this field via a class property. This
property name is

class name->doc\_url

and is retrieved when instance of the DeviceClass object is created. A
default value is defined for this field.

The device black box
--------------------

This black box is a help tool to ease debugging session for a running
device server. The TANGO core software records every device request in
this black box. A tango client is able to retrieve the black box
contents with a specific CORBA operation availabble for every device.
Each black box entry is returned as a string with the following
information :

-  The date where the request has been executed by the device. The date
   format is dd/mm/yyyy hh24:mi:ss:SS (The last field is the second
   hundredth number).

-  The type of CORBA requests. In case of attributes, the name of the
   requested attribute is returned. In case of operation, the operation
   type is returned. For “command\_inout” operation, the command name is
   returned.

-  The client host name

Automatically added commands
----------------------------

As already mentionned in this documentation, each Tango device supports
at least three commands which are State, Status and Init. The following
array details command input and output data type

.. csv-table::
   :header-rows: 1

   "Command name", "Input data type", "Output data type"
   "State", "void", "Tango::DevState"
   "Status", "void", "Tango::DevString"
   "Init", "void", "void"

The State command
~~~~~~~~~~~~~~~~~

This command gets the device state (stored in its *device\_state* data
member) and returns it to the caller. The device state is a variable of
the Tango\_DevState type (packed into a CORBA Any object when it is
returned by a command)

The Status command
~~~~~~~~~~~~~~~~~~

This command gets the device status (stored in its *device\_status* data
member) and returns it to the caller. The device status is a variable of
the string type.

The Init command
~~~~~~~~~~~~~~~~

This commands re-initialise a device keeping the same network
connection. After an Init command executed on a device, it is not
necessary for client to re-connect to the device. This command first
calls the device *delete\_device()* method and then execute its
*init\_device()* method. For C++ device server, all the memory allocated
in the *init\_device()* method must be freed in the *delete\_device()*
method. The language device desctructor automatically calls the
*delete\_device()* method.

.. _dserver_class_device_commands:

DServer class device commands
-----------------------------

As already explained in [DServer\_class], each device server process has
its own Tango device. This device supports the three commands previously
described plus 32 commands which are DevRestart, RestartServer,
QueryClass, QueryDevice, Kill, QueryWizardClassProperty,
QueryWizardDevProperty, QuerySubDevice, the polling related commands
which are StartPolling, StopPolling, AddObjPolling, RemObjPolling,
UpdObjPollingPeriod, PolledDevice and DevPollStatus, the device locking
related commands which are LockDevice, UnLockDevice, ReLockDevices and
DevLockStatus, the event related commands called
EventSubscriptionChange, ZmqEventSubscriptionChange and
EventConfirmSubscription and finally the logging related commands which
are AddLoggingTarget, RemoveLoggingTarget, GetLoggingTarget,
GetLoggingLevel, SetLoggingLevel, StopLogging and StartLogging. The
following table give all commands input and output data types

.. csv-table::
   :header-rows: 1

   "Command name", "Input data type", "Output data type"
   "State", "void", "Tango::DevState"
   "Status", "void", "Tango::DevString"
   "Init", "void", "void"
   "DevRestart", "Tango::DevString", "void"
   "RestartServer", "void", "void"
   "QueryClass", "void", "Tango::DevVarStringArray"
   "QueryDevice", "void", "Tango::DevVarStringArray"
   "Kill", "void", "void"
   "QueryWizardClassProperty", "Tango::DevString", "Tango::DevVarStringArray"
   "QueryWizardDevProperty", "Tango::DevString", "Tango::DevVarStringArray"
   "QuerySubDevice", "void", "Tango::DevVarStringArray"
   "StartPolling", "void", "void"
   "StopPolling", "void", "void"
   "AddObjPolling", "Tango::DevVarLongStringArray", "void"
   "RemObjPolling", "Tango::DevVarStringArray", "void"
   "UpdObjPollingPeriod", "Tango::DevVarLongStringArray", "void"
   "PolledDevice", "void", "Tango::DevVarStringArray"
   "DevPollStatus", "Tango::DevString", "Tango::DevVarStringArray"
   "LockDevice", "Tango::DevVarLongStringArray", "void"
   "UnLockDevice", "Tango::DevVarLongStringArray", "Tango::DevLong"
   "ReLockDevices", "Tango::DevVarStringArray", "void"
   "DevLockStatus", "Tango::DevString", "Tango::DevVarLongStringArray"
   "EventSubscribeChange", "Tango::DevVarStringArray", "Tango::DevLong"
   "ZmqEventSubscriptionChange", "Tango::DevVarStringArray", "Tango::DevVarLongStringArray"
   "EventConfirmSubscription", "Tango::DevVarStringArray", "void"
   "AddLoggingTarget", "Tango::DevVarStringArray", "void"
   "RemoveLoggingTarget", "Tango::DevVarStringArray", "void"
   "GetLoggingTarget", "Tango::DevString", "Tango::DevVarStringArray"
   "GetLoggingLevel", "Tango::DevVarStringArray", "Tango::DevVarLongStringArray"
   "SetLoggingLevel", "Tango::DevVarLongStringArray", "void"
   "StopLogging", "void", "void"
   "StartLogging", "void", "void"

The device description field is set to “A device server device”. Device
server started with the -file command line option also supports a
command called QueryEventChannelIOR. This command is used interanally by
the Tango kernel classes when the event system is used with device
server using database on file.

The State command
~~~~~~~~~~~~~~~~~

This device state is always set to ON

The Status command
~~~~~~~~~~~~~~~~~~

This device status is always set to “The device is ON” followed by a new
line character and a string describing polling thread status. This
string is either “The polling is OFF” or “The polling is ON” according
to polling state.

The DevRestart command
~~~~~~~~~~~~~~~~~~~~~~

The DevRestart command restart a device. The name of the device to be
re-started is the command input parameter. The command destroys the
device by calling its destructor and re-create it from its constructor.

The RestartServer command
~~~~~~~~~~~~~~~~~~~~~~~~~

The DevRestartServer command restarts all the device pattern(s) embedded
in the device server process. Therefore, all the devices implemented in
the server process are destroyed and re-built [1]_. The network
connection between client(s) and device(s) implemented in the device
server process is destroyed and re-built.

Executing this command allows a complete restart of the device server
without stopping the process.

The QueryClass command
~~~~~~~~~~~~~~~~~~~~~~

This command returns to the client the list of Tango device class(es)
embedded in the device server. It returns only class(es) implemented by
the device server programmer. The DServer device class name (implemented
by the TANGO core software) is not returned by this command.

The QueryDevice command
~~~~~~~~~~~~~~~~~~~~~~~

This command returns to the client the list of device name for all the
device(s) implemented in the device server process. Each device name is
returned using the following syntax :

<class name>::<device name>

The name of the DServer class device is not returned by this command.

The Kill command
~~~~~~~~~~~~~~~~

This command stops the device server process. In order that the client
receives a last answer from the server, this command starts a thread
which will after a short delay, kills the device server process.

The QueryWizardClassProperty command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command returns the list of property(ies) defined for a class
stored in the device server process property wizard. For each property,
its name, a description and a default value is returned.

The QueryWizardDevProperty command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command returns the list of property(ies) defined for a device
stored in the device server process property wizard. For each property,
its name, a description and a default value is returned.

The QuerySubDevice command
~~~~~~~~~~~~~~~~~~~~~~~~~~

This command returns the list of sub-device(s) imported by each device
within the server. A sub-device is a device used ( to execute command(s)
and/or to read/write attribute(s) ) by one of the device server process
devices. There is one element in the returned strings array for each
sub-device. The syntax of each string is the device name, a space and
the sub-device name. In case of device server process starting threads
using a sub-device, it is not possible to link this sub-device to any
process devices. In such a case, the string contains only the sub-device
name

The StartPolling command
~~~~~~~~~~~~~~~~~~~~~~~~

This command starts the polling thread

The StopPolling command
~~~~~~~~~~~~~~~~~~~~~~~

This command stops the polling thread

The AddObjPolling command
~~~~~~~~~~~~~~~~~~~~~~~~~

This command adds a new object in the list of object(s) to be polled.
The command input parameters are embedded within a
Tango::DevVarLongStringArray data type with one long data and three
strings. The input parameters are:

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "svalue[0]", "Device name"
   "svalue[1]", "Object type (“command“ or “attribute“)"
   "svalue[2]", "Object name"
   "lvalue[0]", "polling period in mS"

The object type string is case independent. The object name string
(command name or attribute name) is case dependant. This command does
not start polling if it is stopped. This command is not allowed in case
the device is locked and the command requester is not the lock owner.

The RemObjPolling command
~~~~~~~~~~~~~~~~~~~~~~~~~

This command removes an object of the list of polled objects. The
command input data type is a Tango::DevVarStringArray with three
strings. These strings meaning are :

.. csv-table::
   :header-rows: 1

   "String", "Meaning"
   "string[0]", "Device name"
   "string[1]", "Object type (“command“ or “attribute“)"
   "string[2]", "Object name"

The object type string is case independent. The object name string
(command name or attribute name) is case dependant. This command is not
allowed in case the device is locked and the command requester is not
the lock owner.

The UpdObjPollingPeriod command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command changes the polling period for a specified object. The
command input parameters are embedded within a
Tango::DevVarLongStringArray data type with one long data and three
strings. The input parameters are:

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "svalue[0]", "Device name"
   "svalue[1]", "Object type (“command“ or “attribute“)"
   "svalue[2]", "Object name"
   "lvalue[0]", "new polling period in mS"

The object type string is case independent. The object name string
(command name or attribute name) is case dependant. This command does
not start polling if it is stopped. This command is not allowed in case
the device is locked and the command requester is not the lock owner.

The PolledDevice command
~~~~~~~~~~~~~~~~~~~~~~~~

This command returns the name of device which are polled. Each string in
the Tango::DevVarStringArray returned by the command is a device name
which has at least one command or attribute polled. The list is
alphabetically sorted.

The DevPollStatus command
~~~~~~~~~~~~~~~~~~~~~~~~~

This command returns a polling status for a specific device. The input
parameter is a device name. Each string in the Tango::DevVarStringArray
returned by the command is the polling status for each polled device
objects (command or attribute). For each polled objects, the polling
status is :

-  The object name

-  The object polling period (in mS)

-  The object polling ring buffer depth

-  The time needed (in mS) for the last command execution or attribute
   reading

-  The time since data in the ring buffer has not been updated. This
   allows a check of the polling thread

-  The delta time between the last records in the ring buffer. This
   allows checking that the polling period is respected by the polling
   thread.

-  The exception parameters in case of the last command execution or the
   last attribute reading failed.

A new line character is inserted between each piece of information.

The LockDevice command
~~~~~~~~~~~~~~~~~~~~~~

This command locks a device for the calling process. The command input
parameters are embedded within a Tango::DevVarLongStringArray data type
with one long data and one string. The input parameters are:

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "svalue[0]", "Device name"
   "lvalue[0]", "Lock validity"

The UnLockDevice command
~~~~~~~~~~~~~~~~~~~~~~~~

This command unlocks a device. The command input parameters are embedded
within a Tango::DevVarLongStringArray data type with one long data and
one string. The input parameters are:

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "svalue[0]", "Device name"
   "lvalue[0]", "Force flag"

The force flag parameter allows a client to unlock a device already
locked by another process (for admin usage only)

The ReLockDevices command
~~~~~~~~~~~~~~~~~~~~~~~~~

This command re-lock devices. The input argument is the list of devices
to be re-locked. It’s an error to re-lock a device which is not already
locked.

The DevLockStatus command
~~~~~~~~~~~~~~~~~~~~~~~~~

This command returns a device locking status to the caller. Its input
parameter is the device name. The output parameters are embedded within
a Tango::DevVarLongStringArray data type with three strings and six
long. These data are

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "svalue[0]", "Locking string"
   "svalue[1]", "CPP client host IP address or Not defined"
   "svalue[2]", "Java VM main class for Java client or Not defined"
   "lvalue[0]", "Lock flag (1 if locked, 0 othterwise)"
   "lvalue[1]", "CPP client host IP address or 0 for Java locker"
   "lvalue[2]", "Java locker UUID part 1or 0 for CPP locker"
   "lvalue[3]", "Java locker UUID part 2 or 0 for CPP locker"
   "lvalue[4]", "Java locker UUID part 3 or 0 for CPP locker"
   "lvalue[5]", "Java locker UUID part 4 or 0 for CPP locker"

The EventSubscriptionChange command (C++ server only)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command is used as a piece of the heartbeat system between an event
client and the device server generating the event. There is no reason to
generate events if there is no client which has subscribed to it. It is
used by the *DeviceProxy::subscribe\_event()* method and one of the
event thread on the client side to inform the server to keep on
generating events for the attribute in question. It reloads the
subscription timer with the current time. Events are not generated when
there are no clients subscribed within the last 10 minutes. The input
parameters are:

.. csv-table::
   :header-rows: 1

   "Command parameter", "Parameter meaning"
   "argin[0]", "Device name"
   "argin[1]", "Attribute name"
   "argin[2]", "action (subscribe or unsubsribe)"
   "argin[3]", "event name (change, periodic, archive,attr\_conf)"

The command output data is the simply the Tango release used by the
device server process. This is necessary for compatibility reason.

The ZmqEventSubscriptionChange command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command is used as a piece of the heartbeat system between an event
client and the device server generating the event when client and/or
device server uses Tango release 8 or above. There is no reason to
generate events if there is no client which has subscribed to it. It is
used by the *DeviceProxy::subscribe\_event()* method and one of the
event thread on the client side to inform the server to keep on
generating events for the attribute in question. It reloads the
subscription timer with the current time. Events are not generated when
there are no clients subscribed within the last 10 minutes. The input
parameters are the same than the one used for the
EventSubscriptionChange command. They are:

.. csv-table::
   :header-rows: 1

   "Command in parameter", "Parameter meaning"
   "argin[0]", "Device name"
   "argin[1]", "Attribute name"
   "argin[2]", "action (subscribe or unsubsribe)"
   "argin[3]", "event name (change, periodic, archive,attr\_conf)"

The command output parameters aer all the necessary data to build one
event connection between a client and the device server process
generating the events. This means:

.. csv-table::
   :header-rows: 1

   "Command out parameter", "Parameter meaning"
   "svalue[0]", "Heartbeat ZMQ socket connect end point"
   "svalue[1]", "Event ZMQ socket connect end point"
   "lvalue[0]", "Tango lib release used by device server"
   "lvalue[1]", "Device IDL release"
   "lvalue[2]", "Subscriber HWM"
   "lvalue[3]", "Rate (Multicasting related)"
   "lvalue[4]", "IVL (Multicasting related)"

The EventConfirmSubscription command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command is used by client to regularly notify to device server
process their interest in receiving events. If this command is not
received, after a delay of 600 sec (10 mins), event(s) will not be sent
any more. The input parameters for the EventConfirmSubscription command
must be a multiple of 3. They are 3 parameters for each event confirmed
by this command. Per event, these parameters are:

.. csv-table::
   :header-rows: 1

   "Command in parameter", "Parameter meaning"
   "argin[x]", "Device name"
   "argin[x + 1]", "Attribute name"
   "argin[x + 2]", "Event name"

The AddLoggingTarget command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This command adds one (or more) logging target(s) to the specified
device(s). The command input parameter is an array of string logically
composed of {device\_name, target\_type::target\_name} groups where the
elements have the following semantic:

-  device\_name is the name of the device which logging behavior is to
   be controlled. The wildcard is supported to apply the modification to
   all devices encapsulated within the device server (e.g. to ask all
   devices to log to the same device target).

-  target\_type::target\_name: target\_type is one of the supported
   target types and target\_name, the name of the target. Supported
   target types are: *console*, *file* and *device*. For a device
   target, target\_name must contain the name of a log consumer device
   (as defined in [sec:Tango-log-consumer]). For a file target,
   target\_name is the full path to the file to log to. If omitted the
   device’s name is used to build the file name
   (domain\_family\_member.log). Finally, target\_name is ignored in the
   case of a console target and can be omitted.

This command is not allowed in case the device is locked and the command
requester is not the lock owner.

The RemoveLoggingTarget command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Remove one (or more) logging target(s) from the specified device(s).The
command input parameter is an array of string logically composed of
{device\_name, target\_type::target\_name} groups where the elements
have the following semantic:

-  device\_name: the name of the device which logging behavior is to be
   controlled. The wildcard is supported to apply the modification to
   all devices encapsulated within the device server (e.g. to ask all
   devices to stop logging to a given device target).

-  target\_type::target\_name: target\_type is one of the supported
   target types and target\_name, the name of the target. Supported
   target types are: *console*, *file* and *device*. For a device
   target, target\_name must contain the name of a log consumer device
   (as defined in [sec:Tango-log-consumer]). For a file target,
   target\_name is the full path to the file to log to. If omitted the
   device’s name is used to build the file name
   (domain\_family\_member.log). Finally, target\_name is ignored in the
   case of a console target and can be omitted.

The wildcard is supported for target\_name. For instance,
RemoveLoggingTarget ([, device::\*) removes all the device targets from
all the devices running in the device server. This command is not
allowed in case the device is locked and the command requester is not
the lock owner.

The GetLoggingTarget command
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Returns the current target list of the specified device. The command
parameter device\_name is the name of the device which logging target
list is requested. The list is returned as a DevVarStringArray
containing target\_type::target\_name elements.

The GetLoggingLevel command
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Returns the logging level of the specified devices. The command input
parameter device\_list contains the names of the devices which logging
target list is requested. The wildcard is supported to get the logging
level of all the devices running within the server. The string part of
the result contains the name of the devices and its long part contains
the levels. Obviously, result.lvalue[i] is the current logging level of
the device named result.svalue[i].

The SetLoggingLevel command
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Changes the logging level of the specified devices. The string part of
the command input parameter contains the device names while its long
part contains the logging levels. The set of possible values for levels
is: 0=OFF, 1=FATAL, 2=ERROR, 3=WARNING, 4=INFO, 5=DEBUG.

The wildcard is supported to assign all devices the same logging level.
For instance, SetLoggingLevel ([3]) set the logging level of all the
devices running within the server to WARNING. This command is not
allowed in case the device is locked and the command requester is not
the lock owner.

The StopLogging command
~~~~~~~~~~~~~~~~~~~~~~~

For all the devices running within the server, StopLogging saves their
current logging level and set their logging level to OFF.

The StartLogging command
~~~~~~~~~~~~~~~~~~~~~~~~

For each device running within the server, StartLogging restores their
logging level to the value stored during a previous StopLogging call.

DServer class device properties
-------------------------------

This device has two properties related to polling threads pool
management plus another one for the choice of polling algorithm. These
properties are described in the following table

.. csv-table::
   :header-rows: 1

   "Property name", "property rule", "default value"
   "polling\_threads\_pool\_size", "Max number of thread in the polling pool", "1"
   "polling\_threads\_pool\_conf", "Polling threads pool configuration", ""
   "polling\_before\_9", "Choice of the polling algorithm", "false"

The rule of the polling\_threads\_pool\_size is to define the maximun
number of thread created for the polling threads pool size. The rule of
the polling\_threads\_pool\_conf is to define which thread in the pool
is in charge of all the polled object(s) of which device. This property
is an array of strings with one string per used thread in the pool. The
content of the string is simply a device name list with device name
splitted by a comma. Example of polling\_threads\_pool\_conf property
for 3 threads used:

.. code:: cpp
  :number-lines:

    dserver/<ds exec name>/<inst. name>/polling_threads_pool_conf-> the/dev/01
                      the/dev/02,the/dev/06
                      the/dev/03

Thread number 2 is in charge of 2 devices. Note that there is an entry
in this list only for the used threads in the pool.

The rule of the polling\_before\_9 property is to select the polling
algorithm which was used in Tango device server process before Tango
release 9.

Tango log consumer
-------------------

The available Log Consumer
~~~~~~~~~~~~~~~~~~~~~~~~~~

One implementation of a log consumer associated to a graphical user
interface is available within Tango. It is a standalone java application
called **LogViewer** based on the publicly available chainsaw
application from the log4j package. It supports two way of running which
are:

-  The static mode: In this mode, LogViewer is started with a parameter
   which is the name of the log consumer device implemented by the
   application. All messages sent by devices with a logging target type
   set to *device* and with a logging target name set to the same device
   name than the device name passed as application parameter will be
   displayed (if the logging level allows it).

-  The dynamic mode: In this mode, the name of the log consumer device
   implemented by the application is build at application startup and is
   dynamic. The user with the help of the graphical interface chooses
   device(s) for which he want to see log messages.

The Log Consumer interface
~~~~~~~~~~~~~~~~~~~~~~~~~~

A Tango Log Consumer device is nothing but a tango device supporting the
following tango command :

void log (Tango::DevVarStringArray details)

where details is an array of string carrying the log details. Its
structure is:

-  details[0] : the timestamp in millisecond since epoch (01.01.1970)

-  details[1] : the log level

-  details[2] : the log source (i.e. device name)

-  details[3] : the log message

-  details[4] : the log NDC (contextual info) - Not used but reserved

-  details[5] : the thread identifier (i.e. the thread from which the
   log request comes from)

These log details can easily be extended. Any tango device supporting
this command can act as a device target for other devices.

Control system specific
-----------------------

It is possible to define a few control system parameters. By control
system, we mean for each set of computers having the same database
device server (the same TANGO\_HOST environment variable)

The device class documentation default value
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Each control system may have it’s own default device class documentation
value. This is defined via a class property. The property name is

Default->doc\_url

It’s retrieved if the device class itself does not define any doc\_url
property. If the Default->doc\_url property is also not defined, a
hard-coded default value is provided.

The services definition
~~~~~~~~~~~~~~~~~~~~~~~

The property used to defined control system services is named
**Services** and belongs to the free object **CtrlSystem**. This
property is an array of strings. Each string defines a service available
within the control system. The syntax of each service definition is

Service name/Instance name:service device name

Tuning the event system buffers (HWM)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Starting with Tango release 8, ZMQ is used for the event based
communication between clients and device server processes. ZMQ
implementation provides asynchronous communication in the sense that the
data to be transmitted is first stored in a buffer and then really sent
on the network by dedicated threads. The size of this buffers (on client
and device server side) is called High Water Mark (HWM) and is tunable.
This is tunable at several level.

#. The library set a default value of **1000** for both buffers (client
   and device server side)

#. Control system properties used to tune these size are named
   **DSEventBufferHwm** (device server side) and **EventBufferHwm**
   (client side). They both belongs to the free object **CtrlSystem**.
   Each property is the max number of events storable in these buffer.

#. At client or device server level using the library calls
   *Util::set\_ds\_event\_buffer\_hwm()* documented in
   [TangoRefMan]_ or
   *ApiUtil::set\_event\_buffer\_hwm()* documented in
   :cpp:class:`Tango::ApiUtil`

#. Using environment variables TANGO\_DS\_EVENT\_BUFFER\_HWM or
   TANGO\_EVENT\_BUFFER\_HWM

Allowing NaN when writing attributes (floating point)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

A property named **WAttrNaNAllowed** belonging to the free object
**CtrlSystem** allows a Tango control system administrator to allow or
disallow NaN numbers when writing attributes of the DevFloat or
DevDouble data type. This is a boolean property and by default, it’s
value is taken as false (Meaning NaN values are rejected).

Tuning multicasting event propagation
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Starting with Tango 8.1, it is possible to transfer event(s) between
devices and clients using a multicast protocol. The properties
**MulticastEvent**, **MulticastRate**, **MulticastIvl** and
**MulticastHops** also belonging to the free object **CtrlSystem** allow
the user to configure which events has to be sent using multicasting and
with which parameters. See chapter Advanced features/Using multicast
protocol to transfer events to get details about these properties.

Summary of CtrlSystem free object properties
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The following table summarizes properties defined at control system
level and belonging to the free object CtrlSystem

\|c\|c\|c\| Property name & property rule & default value
 Services & List of defined services & No default
 DsEventBufferHwm & DS event buffer high water mark & 1000
 EventBufferHwm & Client event buffer high water mark & 1000
 WAttrNaNAllowed & Allow NaN when writing attr. & false
 MulticastEvent & List of multicasting events & No default
 MulticastRate & Rate for multicast event transport & 80
 MulticastIvl & Time to keep data for re-transmission & 20
 MulticastHops & Max number of eleemnts to cross & 5

C++ specific
------------

The Tango master include file (tango.h)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Tango has a master include file called

tango.h

This master include file includes the following files :

-  Tango configuration include file : **tango\_config.h**

-  CORBA include file : **idl/tango.h**

-  Some network include files for WIN32 : **winsock2.h** and
   **mswsock.h**

-  C++ streams include file :

   -  **iostream**, **sstream** and **fstream**

-  Some standard C++ library include files : **memory, string** and
   **vector**

-  A long list of other Tango include files

Tango specific pre-processor define
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The tango.h previously described also defined some pre-processor macros
allowing Tango release to be checked at compile time. These macros are:

-  TANGO\_VERSION\_MAJOR

-  TANGO\_VERSION\_MINOR

-  TANGO\_VERSION\_PATCH

For instance, with Tango release 8.1.2, TANGO\_VERSION\_MAJOR will be
set to 8 while TANGO\_VERSION\_MINOR will be 1 and TANGO\_VERSION\_PATCH
will be 2.

Tango specific types
~~~~~~~~~~~~~~~~~~~~

Operating system free type
^^^^^^^^^^^^^^^^^^^^^^^^^^

Some data type used in the TANGO core software have been defined. They
are described in the following table.

.. csv-table::
   :header-rows: 1

   "Type name", "C++ name"
   "TangoSys\_MemStream", "stringstream"
   "TangoSys\_OMemStream", "ostringstream"
   "TangoSys\_Pid", "int"
   "TangoSys\_Cout", "ostream"

These types are defined in the tango\_config.h file

Template command model related type
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

As explained in [Command fact], command created with the template
command model uses static casting. Many type definition have been
written for these casting.

.. csv-table::
   :header-rows: 1

   "Class name", "Command allowed method (if any)", "Command execute method"
   "TemplCommand", "Tango::StateMethodPtr", "Tango::CmdMethPtr"
   "TemplCommandIn", "Tango::StateMethodPtr", "Tango::CmdMethPtr\_xxx"
   "TemplCommandOut", "Tango::StateMethodPtr", "Tango::xxx\_CmdMethPtr"
   "TemplCommandInOut", "Tango::StateMethodPtr", "Tango::xxx\_CmdMethPtr\_yyy"

The **Tango::StateMethPtr** is a pointer to a method of the DeviceImpl
class which returns a boolean and has one parameter which is a reference
to a const CORBA::Any obect.

The **Tango::CmdMethPtr** is a pointer to a method of the DeviceImpl
class which returns nothing and needs nothing as parameter.

The **Tango::CmdMethPtr\_xxx** is a pointer to a method of the
DeviceImpl class which returns nothing and has one parameter. xxx must
be set according to the method parameter type as described in the next
table

.. csv-table::
   :header-rows: 1

   "Tango type", "short cut (xxx)"
   "Tango::DevBoolean", "Bo"
   "Tango::DevShort", "Sh"
   "Tango::DevLong", "Lg"
   "Tango::DevFloat", "Fl"
   "Tango::DevDouble", "Db"
   "Tango::DevUshort", "US"
   "Tango::DevULong", "UL"
   "Tango::DevString", "Str"
   "Tango::DevVarCharArray", "ChA"
   "Tango::DevVarShortArray", "ShA"
   "Tango::DevVarLongArray", "LgA"
   "Tango::DevVarFloatArray", "FlA"
   "Tango::DevVarDoubleArray", "DbA"
   "Tango::DevVarUShortArray", "USA"
   "Tango::DevVarULongArray", "ULA"
   "Tango::DevVarStringArray", "StrA"
   "Tango::DevVarLongStringArray", "LSA"
   "Tango::DevVarDoubleStringArray", "DSA"
   "Tango::DevState", "Sta"

For instance, a pointer to a method which takes a
Tango::DevVarStringArray as input parameter must be statically casted to
a Tango::CmdMethPtr\_StrA, a pointer to a method which takes a
Tango::DevLong data as input parameter must be statically casted to a
Tango::CmdMethPtr\_Lg.

The **Tango::xxx\_CmdMethPtr** is a pointer to a method of the
DeviceImpl class which returns data of one of the Tango type and has no
input parameter. xxx must be set according to the method return data
type following the same rules than those described in the previous
table. For instance, a pointer to a method which returns a
Tango::DevDouble data must be statically casted to a
Tango::Db\_CmdMethPtr.

The **Tango::xxx\_CmdMethPtr\_yyy** is a pointer to a method of the
DeviceImpl class which returns data of one of the Tango type and has one
input parameter of one of the Tango data type. xxx and yyy must be set
according to the method return data type and parameter type following
the same rules than those described in the previous table. For instance,
a pointer to a method which returns a Tango::DevDouble data and which
takes a Tango::DevVarLongStringArray must be statically casted to a
Tango::Db\_CmdMethPtr\_LSA.

All those type are defined in the tango\_const.h file.

Tango device state code
~~~~~~~~~~~~~~~~~~~~~~~

The Tango::DevState type is a C++ enumeration starting at 0. The code
associated with each state is defined in the following table.

.. csv-table::
   :header-rows: 1

   "State name", "Value"
   "Tango::ON", "0"
   "Tango::OFF", "1"
   "Tango::CLOSE", "2"
   "Tango::OPEN", "3"
   "Tango::INSERT", "4"
   "Tango::EXTRACT", "5"
   "Tango::MOVING", "6"
   "Tango::STANDBY", "7"
   "Tango::FAULT", "8"
   "Tango::INIT", "9"
   "Tango::RUNNING", "10"
   "Tango::ALARM", "11"
   "Tango::DISABLE", "12"
   "Tango::UNKNOWN", "13"

A strings array called **Tango::DevStateName** can be used to get the
device state as a string. Use the Tango device state code as index into
the array to get the correct string.

Tango data type
~~~~~~~~~~~~~~~~

A “define” has been created for each Tango data type. This is summarized
in the following table

.. csv-table::
   :header-rows: 1

   "Type name", "Type code", "Value"
   "Tango::DevBoolean", "Tango::DEV\_BOOLEAN", "1"
   "Tango::DevShort", "Tango::DEV\_SHORT", "2"
   "Tango::DevLong", "Tango::DEV\_LONG", "3"
   "Tango::DevFloat", "Tango::DEV\_FLOAT", "4"
   "Tango::DevDouble", "Tango::DEV\_DOUBLE", "5"
   "Tango::DevUShort", "Tango::DEV\_USHORT", "6"
   "Tango::DevULong", "Tango::DEV\_ULONG", "7"
   "Tango::DevString", "Tango::DEV\_STRING", "8"
   "Tango::DevVarCharArray", "Tango::DEVVAR\_CHARARRAY", "9"
   "Tango::DevVarShortArray", "Tango::DEVVAR\_SHORTARRAY", "10"
   "Tango::DevVarLongArray", "Tango::DEVVAR\_LONGARRAY", "11"
   "Tango::DevVarFloatArray", "Tango::DEVVAR\_FLOATARRAY", "12"
   "Tango::DevVarDoubleArray", "Tango::DEVVAR\_DOUBLEARRAY", "13"
   "Tango::DevVarUShortArray", "Tango::DEVVAR\_USHORTARRAY", "14"
   "Tango::DevVarULongArray", "Tango::DEVVAR\_ULONGARRAY", "15"
   "Tango::DevVarStringArray", "Tango::DEVVAR\_STRINGARRAY", "16"
   "Tango::DevVarLongStringArray", "Tango::DEVVAR\_LONGSTRINGARRAY", "17"
   "Tango::DevVarDoubleStringArray", "Tango::DEVVAR\_DOUBLESTRINGARRAY", "18"
   "Tango::DevState", "Tango::DEV\_STATE", "19"
   "Tango::ConstDevString", "Tango::CONST\_DEV\_STRING", "20"
   "Tango::DevVarBooleanArray", "Tango::DEVVAR\_BOOLEANARRAY", "21"
   "Tango::DevUChar", "Tango::DEV\_UCHAR", "22"
   "Tango::DevLong64", "Tango::DEV\_LONG64", "23"
   "Tango::DevULong64", "Tango::DEV\_ULONG64", "24"
   "Tango::DevVarLong64Array", "Tango::DEVVAR\_LONG64ARRAY", "25"
   "Tango::DevVarULong64Array", "Tango::DEVVAR\_ULONG64ARRAY", "26"
   "Tango::DevInt", "Tango::DEV\_INT", "27"
   "Tango::DevEncoded", "Tango::DEV\_ENCODED", "28"
   "Tango::DevEnum", "Tango::DEV\_ENUM", "29"
   "Tango::DevPipeBlob", "Tango::DEV\_PIPE\_BLOB", "30"
   "Tango::DevVarStateArray", "Tango::DEVVAR\_STATEARRAY", "31"

For command which do not take input parameter, the type code
Tango::DEV\_VOID (value = 0) has been defined.

A strings array called **Tango::CmdArgTypeName** can be used to get the
data type as a string. Use the Tango data type code as index into the
array to get the correct string.

Tango command display level
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Like attribute, Tango command has a display level. The Tango::DispLevel
type is a C++ enumeration starting at 0. The code associated with each
command display level is already described in page

As for attribute, this parameter allows a graphical application to
support two types of operation :

-  An operator mode for day to day operation

-  An expert mode when tuning is necessary

According to this parameter, a graphical application knows if the
command is for the operator mode or for the expert mode.

Device server process option and environment variables
------------------------------------------------------

Classical device server
~~~~~~~~~~~~~~~~~~~~~~~

The synopsis of a device server process is

ds\_name instance\_name [OPTIONS]

The supported options are :

-  | **-h, -? -help**
   | Print the device server synopsis and a list of instance name
     defined in the database for this device server. An instance name in
     not mandatory in the command line to use this option

-  | **-v[trace level]**
   | Set the verbose level. If no trace level is given, a default value
     of 4 is used

-  | **-file=<file name path>**
   | Start a device server using an ASCII file instead of the Tango
     database.

-  | **-nodb**
   | Start a device server without using the database.

-  | **-dlist <device name list>**
   | Give the device name list. This option is supported only with the
     -nodb option.

-  | **ORB options** (started with -ORBxxx)
   | Options directly passed to the underlying ORB. Should be rarely
     used except the -ORBendPoint option for device server not using the
     database

Device server process as Windows service
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

When used as a Windows service, a Tango device server supports several
new options. These options are :

-  | **-i**
   | Install the service

-  | **-s**
   | Install the service and choose the automatic startup mode

-  | **-u**
   | Un-install the service

-  | **-dbg**
   | Run in console mode to debug service. The service must have been
     installed prior to use it.

Note that these options must be used after the device server instance
name.

Environment variables
~~~~~~~~~~~~~~~~~~~~~

A few environment variables can be used to tune a Tango control system.
TANGO\_HOST is the most important one but on top it, some Tango features
like Tango logging service or controlled access (if used) can be tuned
using environment variable. If these environment variables are not
defined, the software searches in the file **$HOME/.tangorc** for its
value. If the file is not defined or if the environment variable is also
not defined in this file, the software searches in the file
**/etc/tangorc** for its value. For Windows, the file is
**$TANGO\_ROOT/tangorc** TANGO\_ROOT being the mandatory environment
variable of the Windows binary distribution.

TANGO\_HOST
^^^^^^^^^^^

This environment variable is the anchor of the system. It specifies
where the Tango database server is running. Most of the time, its syntax
is

TANGO\_HOST=<host>:<port>

host is the name of the computer where the database server is running
and port is the port number on which it is listening. <host> should be a
FQDN (Fully Qualified Domain Name). If you want to have a Tango control
system which has several database servers (but only one database) in
order to survive a database server crash, use the following syntax

TANGO\_HOST=<host\_1>:<port\_1>,<host\_2>:<port\_2>,<host\_3>:<port\_3>

Obviously, host\_1 is the name of the computer where the first database
server is running, port\_1 is the port number on which this server is
listening. host\_2 is the name of the computer where the second
database server is running and port\_2 is its port number. All access to
database will automatically switch from one server to another one in the
list if the one which was used has died.

Tango Logging Service (TANGO\_LOG\_PATH)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The TANGO\_LOG\_PATH environment variable can be used to specify the log
files location. If not set it defaults to /tmp/tango-<user logging name>
under Unix and C:/tango-<user logging name> under Windows. For a given
device-server, the files are actually saved into $TANGO\_LOG\_PATH/{
server\_name}/{ server\_instance\_name}. This means that all the devices
running within the same process log into the same directory.

The database and controlled access server (MYSQL\_USER, MYSQL\_PASSWORD, MYSQL\_HOST and MYSQL\_DATABASE)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The Tango database server and the controlled access server (if used)
need to connect to the MySQL database. They are using four environment
variables called MYSQL\_USER, MYSQL\_PASSWORD to know which
user/password they must use to access the database, MYSQL\_HOST in case
the MySQL database is running on another host and MYSQL\_DATABASE to
specify the name of the database to connect to. The MYSQL\_HOST
environment variable allows you to specify the host and port number
where MySQL is running. Its syntax is

host:port

The port definition is optional. If it is not specified, the default
MySQL port will be used. If these environment variables are not defined,
they will connect to the DBMS using the root login on localhost with the
MySQL default port number (3306). The MYSQL\_DATABASE environment
variable has to be used in case your are using the same Tango Database
device server executable code to connect to several Tango databases each
of them having a different name.

The controlled access
^^^^^^^^^^^^^^^^^^^^^

Even if a controlled access system is running, it is possible to by-pass
it if in the environment of the client application the environment
variable SUPER\_TANGO is defined to true.

The event buffer size
^^^^^^^^^^^^^^^^^^^^^

If required, the event buffer used by the ZMQ software could be tuned
using environment variables. These variables are named
TANGO\_DS\_EVENT\_BUFFER\_HWM for the event buffer on a device server
side and TANGO\_EVENT\_BUFFER\_HWM for the event buffer on the client
size. Both of them are a number which is the maximum number of events
which could be stored in these buffers.


.. [1]
   Their black-box is also destroyed and re-built
