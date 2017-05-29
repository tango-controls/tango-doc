.. highlight:: Overview

Overview of Tango Controls
==========================

What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system framework which defines communication protocol
and API as well as provides a set of tools and libraries to build software for control systems,
especially :term:`SCADA`.

It is build around concept of :term:`devices` and :term:`device classes <device class>`. This is unique feature of Tango Controls and
make it different to other SCADA software which usually treats a controls system as a set of signals and read and
set process values.

Devices are created by :term:`device servers <device server>`. Device servers are programs implementing set of
:term:`device classes <device class>`. Device classes are responsible for translating hardware communication protocols into
Tango Controls communication. This way you may control and monitor all your equipment like
motors, valves, oscilloscopes etc.

Tango Controls communication protocol defines how all components of the system communicates with each other.
It is based on CORBA [CORBA]_ and ZeroMQ [ZeroMQ]_ protocols. The detail of protocols are not visible to programmers,
since it hidden by API.


History
-------

The concept of using device servers to access devices was first proposed
at the ESRF in 1989. It has been successfully used as the heart of the
ESRF Control System for the institute accelerator complex. This Control
System has been named TACO [1]_. Then, it has been decided to also used
TACO to control devices in the beam-lines. Today, more than 30 instances
of TACO are running at the ESRF. The main technologies used within TACO
are the leading technologies of the 80’s. The Sun Remote Procedure Call
(RPC) is used to communicate over the network between device server and
applications, OS-9 is used on the front-end computers, C is the
reference language to write device servers and clients and the device
server framework follows the MIT Widget model. In 1999, a renewal of the
control system was started. In June 2002, Soleil and ESRF offically
decide to collaborate to develop this renewal of the old TACO control
system. Soleil is a French synchrotron radiation facility currently
under construction in the Paris suburbs. See
[Soleil]_ to get all information about
Soleil. In December 2003, Elettra joins the club. Elettra is an Italian
synchrotron radiation facility located in Trieste. See
[Elettra]_ to get all information about
Elettra. Then, beginning of 2005, ALBA also decided to join. ALBA is a
Spanish synchrotron radiation facility located in Barcelona. See
[ALBA]_ to get all information about ALBA. The new
version of the Alba/Elettra/ESRF/Soleil control system is named
TANGO [2]_ and is based on the 21 century technologies :

-  CORBA [CORBA]_ and ZMQ [ZMQ]_ to communicate between
   device server and clients

-  C++, Python and Java as reference programming languages

-  Linux and Windows as operating systems

-  Modern object oriented design patterns


Tango Community
---------------

.. [1]
   TACO stands for **T**\ elescope and **A**\ ccelerator
   **C**\ ontrolled with **O**\ bjects

.. [2]
   TANGO stands for **TA**\ co **N**\ ext **G**\ eneration **O**\ bject

.. [3]
   CORBA stands for **C**\ ommon **O**\ bject **R**\ equest **B**\ roker