.. raw:: latex

    \clearpage

.. _starting_tango:

Starting a Tango control system
===============================

Without database
----------------

When used without database, there is no additional process to start.
Simply starts device server using the -nodb option (and eventually the
-dlist option) on specific port. See [sec:Device-server-without] to find
informations on how to start/write Tango device server not using the
database.

With database
-------------

Starting the Tango control system simply means starting its database
device server on a well defined host using a well defined port. Use the
host name and the port number to build the TANGO\_HOST environment
variable. See [Env variable] to find how starting a device server on a
specific host. Obviously, the underlying database software (MySQL) must
be started before the Tango database device server. The Tango database
server connects to MySQL using a default logging name set to root. You
can change this behaviour with the MYSQL\_USER and MYSQL\_PASSWORD
environment variables. Define them before starting the database server.

If you are using the Tango administration graphical tool called
**Astor**, you also need to start a specific Tango device server called
**Starter** on each host where Tango device server(s) are running. See
[ASTOR]_ for Astor documentation. This starter
device server is able to start even before the Tango database device
server is started. In this case, it will enter a loop in which it
periodically tries to access the Tango database device. The loop exits
and the server starts only if the database device access succeed.

With database and event
-----------------------

For Tango releases lower than 8
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

On top of what is described in the previous chapter, using event means
using CORBA Notification service. Start one Notification Service daemon
on each host where device server(s) used via events are running. The
Notification Service daemon event channel factory IOR has to be
registered in the Tango database. This is done with the **notifd2db**
command. The notification daemon is a process with a high thread number.
By default, Unix like operating systems reserve a big amount of memory
for each thread stack (8 MByte for Linux/Ubuntu, 10 MByte for
Linux/RedHat 4). If your process has several hundreds of threads, this
could generate a too high memory requirement on virtual memory and even
exceed the maximun allowed memory per process (3 GBytes on Linux for 32
bits computer). The notification service daemon works very well with a
value of only 2 Mybtes for thread stack. The Unix command line ulimit -s
2048 asks the operating system to give 2 Mbytes for each thread stack.
Example of starting and registering a Notification Service daemon on a
UNIX like operating system

.. code:: cpp
  :number-lines:

    ulimit -s 2048
    notifd -n -DDeadFilterInterval=300 &
    notifd2db

The Notification Service daemon is started at line 2. Its
-DDeadFilterInterval option is used to specify some internal cleaning of
dead objects within the notification service. The -n option is used to
disable the use of the CORBA Naming Service for registering the default
event channel factory. The registration of the Notification Service
daemon in the Tango database is done at line 2.

It differs on a Windows computer

.. code:: cpp
  :number-lines:

    notifd -n -DDeadFilterInterval=300 -DFactoryIORFileName=C:\Temp\evfact.ior &
    notifd2db C:\Temp\evfact.ior

For release 8 and above
~~~~~~~~~~~~~~~~~~~~~~~

A new event system has been implemented starting with Tango release 8.
With this new event system, the CORBA Notification service is not needed
any more. This means that **as soon** as all Tango device server
processes running on a host and all clients using events from their
devices used Tango 8, it is not required to start any process other than
the device servers and the clients. You can forget the previous
sub-chapter!

With file used as database
--------------------------

When used with database on file, there is no additional process to
start. Simply starts device server using the -file option specifying
file name port. See [sec:Device-server-file] to find informations on how
to start Tango device server using database on file.

With file used as database and event
------------------------------------

For Tango releases lower than 8
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Using event means using CORBA Notification service. Start one
Notification Service daemon on the host where device server(s) using
events are running. The Notification Service daemon event channel
factory IOR has to be registered in the file(s) use as database. This is
done with the **notifd2db** command. Example of starting and registering
a Notification Service daemon on a UNIX like operating system

.. code:: cpp
  :number-lines:

    notifd -n -DDeadFilterInterval=300 &
    notifd2db -o /var/myfile.res

The Notification Service daemon is started at line 1. Its -n option is
used to disable the use of the CORBA Naming Service for registering the
default event channel factory. The registration of the Notification
Service daemon in the file used as database is done at line 2 with its
**-o** command line option.

It differs on a Windows computer because the name of the file used by
the CORBA notification service to store its channel factory IOR must be
specified using its -D command line option. This file name has also to
be passed to the notifd2db command.

.. code:: cpp
  :number-lines:

    notifd -n -DDeadFilterInterval=300 -DFactoryIORFileName=C:\Temp\evfact.ior &
    notifd2db C:\Temp\evfact.ior -o C:\Temp\myfile.res

For release 8 and above
~~~~~~~~~~~~~~~~~~~~~~~

A new event system has been implemented starting with Tango release 8.
With this new event system, the CORBA Notification service is not needed
any more. This means that **as soon** as all clients using events from
devices embedded in the device server use Tango 8, it is not required to
start any process other than the device server and its clients.

With the controlled access
--------------------------

Using the Tango controlled access means starting a specific device
server called TangoAccessControl. By default, this server has to be
started with the instance name set to 1 and its device name is
sys/access\_control/1. The command line to start this device server is:

.. code:: cpp
  :number-lines:

    TangoAccessControl 1

This server connects to MySQL using a default logging name set to root.
You can change this behaviour with the MYSQL\_USER and MYSQL\_PASSWORD
environment variables. Define them before starting the controlled access
device server. This server also uses the MYSQL\_HOST environment
variable if you need to connect it to some MySQL server running on
another host. The syntax of this environment varaible is host:port. Port
is optional and if it is not defined, the MySQL default port is used
(3306). If it is not defined at all, a connection to the localhost is
made. This controlled access system uses the Tango database to retrieve
user rights and it is not possible to run it in a Tango control system
running without database.
