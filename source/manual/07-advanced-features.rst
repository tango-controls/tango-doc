.. raw:: latex

    \clearpage

.. include:: substitutions.rst

|image17|

Image copyright info: [img7]_

Advanced features
=================















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
