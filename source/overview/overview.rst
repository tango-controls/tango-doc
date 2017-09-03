.. highlight:: Overview

Overview of Tango Controls
==========================

What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system framework which defines a communication protocol,
an Application Programmers Interface (API) and provides a set of tools and libraries to build software for control systems,
especially :term:`SCADA`.

It is build around concept of :term:`devices` and :term:`device classes <device class>`. This is unique feature of Tango Controls and
make it different to other SCADA software which usually treats a controls system as a set of signals and read and
write of process values.

Devices are created by :term:`device servers <device server>`. Device servers are processes implementing set of
:term:`device classes <device class>`. 
Device classes implement a state machine, commands (actions or methods) and attributes (data fields) for each class.
Each device therefore has state, zero or more commands and zero or more attributes.
Device classes are responsible for translating hardware communication protocols into
Tango Controls communication. This way you may control and monitor all your equipment like
motors, valves, oscilloscopes, etc. Device classes can be used to implement any algorithm or act as a mailbox to 
any other software program or system.

Tango Controls has been designed to manage small and large systems. Each system has a centralised (MariaDB/MySQL) database.
The database stores configuration data used at startup of a device server, and acts as name server by storing
the dynamic network addresses.
The database acts as permanent store of dynamic settings which need to be memorised.
A large system can be made up of tens of thousands or devices (the limit has not been reached yet).
Systems of systems are supported by the protocol i.e. the API supports transparent access to devices
from multiple systems.

Tango Controls communication protocol defines how all components of the system communicates with each other.
Tango uses CORBA [CORBA]_ for synchronous communications and ZeroMQ [ZeroMQ]_ for asynchronous communication. 
The detail of these protocols are hidden from the developer and user of Tango by the API and high
level tools. 

History
-------

The concept of using device servers to access devices was first proposed at the `ESRF <https://www.esrf.eu>`_ 
in 1989. 
It has been successfully used as the heart of the ESRF Control System of the institute accelerator complex. 
This control system was called TACO. 
TACO was based on the SUN RPC (as is the NFS protocol) and C as its core programming language.

In 1999, a renewal of the ESRF distributed control system was started with the aim of replacing SUN/RPC with CORBA, using C++ as the 
core programming languages. The new software was called TANGO and was developed as a collaboration. 
In June 2002, Soleil and ESRF offically decide to collaborate to develop this renewal of the old TACO control
system. 
`Soleil <https://www.synchrotron-soleil.fr/>`_ is a French synchrotron radiation facility based close to Paris. 
In December 2003, Elettra joined the club. `Elettra <https://www.elettra.trieste.it/>`_ is an Italian
synchrotron radiation facility located in Trieste. 
Beginning of 2005 ALBA also decided to join. 
`ALBA <https://www.cells.es/en/>`_ is a Spanish synchrotron radiation facility located in Barcelona. 
`DESY <http://www.desy.de/>`_ and `MaxIV <https://www.maxiv.lu.se/>`_ were the next big synchrotrons in Europe to join the collaboration.
After that things speeded up and more and more sites doing diverse things adopted Tango.

Tango Technologies
------------------

TANGO is based on the 21 century technologies :

* CORBA and ZMQ to communicate between device server and clients
* C++, Python and Java as reference programming languages
* Linux and Windows as operating systems
* Modern object oriented design patterns
* Naturally implements a microservices architecture
* Github hosted, unit tested, continuous integration
* Extensive documentation + tools, large community


Tango Community
---------------

Over the last 17 years that Tango exists over 40 small and large sites (see http://www.tango-controls.org/community/institutions/) 
have adopted Tango for their control system.
Tango is now used to control not only accelerators but also experimental lasers (`ELI <https://eli-laser.eu/>`_), 
wind tunnels (`Onera <http://www.onera.fr/en>`_), and most recently has been adopted by the world's largest
radio telescope as its core control system (`SKA <http://skatelescope.org/>`_).  
