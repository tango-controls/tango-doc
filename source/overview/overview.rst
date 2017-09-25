.. highlight:: Overview

Overview of Tango Controls
==========================

What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system framework which defines a communication protocol,
an Application Programmers Interface (API) and provides a set of tools and libraries to build software for control systems,
especially :term:`SCADA`.

It is build around concept of :term:`devices <device>` and :term:`device classes <device class>`. This is unique feature of Tango Controls and
make it different to other SCADA software which usually treats a controls system as a set of signals and read and
write of process values.

Devices are created by :term:`device servers <device server>`. Device servers are processes implementing set of
:term:`device classes <device class>`. 
Device classes implement a :term:`state machine <state machine>`, :term:`command <command>` (actions or methods), 
:term:`pipes <pipe>` and :term:`attributes <attribute>` (data fields) for each class.
Each device therefore has state, zero or more commands, zero or more pipes and zero or more attributes.
Device classes are responsible for translating hardware communication protocols into
Tango Controls communication. This way you may control and monitor all your equipment like
motors, valves, oscilloscopes, etc. Device classes can be used to implement any algorithm or act as a mailbox to 
any other software program or system.

Tango Controls has been designed to manage small and large systems. 
Each system has a centralised (MariaDB/MySQL) :term:`database <Tango Database>`.
The database stores configuration data used at startup of a device server, and acts as name server by storing
the dynamic network addresses.
The database acts as permanent store of dynamic settings which need to be memorised.
Each Tango Control system has a database and is identified by its :term:`Tango Host <Tango Host>`.
A large system can be made up of tens of thousands or devices (the limit has not been reached yet).
Systems of systems are supported by the protocol i.e. the API supports transparent access to devices
from multiple systems.

Tango Controls communication protocol defines how all components of the system communicates with each other.
Tango uses CORBA for synchronous communications and ZeroMQ for asynchronous communication. 
The detail of these protocols are hidden from the developer and user of Tango by the API and high
level tools. 

Tango Technologies
------------------

TANGO is based on the 21 century technologies :

* CORBA and ZMQ to communicate between device server and clients
* C++, Python and Java as reference programming languages
* Linux and Windows as operating systems
* Modern object oriented design patterns
* Naturally implements a microservices architecture
* Unit tested, continuous integration enabled
* Hosted on Github (https://github.com/tango-controls)
* Extensive documentation + tools, large community


Tango Community
---------------

Over the last 17 years that Tango exists over 40 small and large sites (see http://www.tango-controls.org/community/institutions/) 
have adopted Tango for their control system.
Tango is now used to control not only accelerators but also experimental lasers (`ELI <https://eli-laser.eu/>`_), 
wind tunnels (`Onera <http://www.onera.fr/en>`_), and most recently has been adopted by the world's largest
radio telescope as its core control system (`SKA <http://skatelescope.org/>`_).  
