Overview of Tango Controls
==========================

What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system framework which defines communication protocol
and API as well as provides a set of tools and libraries to build software for control systems,
especially :term:`SCADA`.

It is build around concept of :term:`devices` and :term:`device classes`. This is unique feature of Tango Controls and
make it different to other SCADA software which usually treats a controls system as a set of signals and read and
set process values.

Devices are created by :term:`device servers`. Device servers are programs implementing set of
:term:`device classes`. Device classes are responsible for translating hardware communication protocols into
Tango Controls communication. This way you may control and monitor all your equipment like
motors, valves, oscilloscopes etc.

Tango Controls communication protocol defines how all components of the system communicates with each other.
It is based on CORBA and ZeroMQ protocols. The detail of protocols are not visible to programmwes,
since it hidden by API.


History
-------



Tango Community
---------------


