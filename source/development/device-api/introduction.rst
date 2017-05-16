Introduction to device server
=============================

Device servers were first developed at the European Synchrotron
radiation Facility (ESRF) for controlling the 6 Gev synchrotron
radiation source. This document is a Programmer’s Manual on how to write
TANGO device servers. It will not go into the details of the ESRF, nor
its Control System nor any of the specific device servers in the Control
System. The role of this document is to help programmers faced with the
task of writing TANGO device servers.

Device servers have been developed at the ESRF in order to solve the
main task of Control Systems viz provide read and write access to all
devices in a distributed system. The problem of distributed device
access is only part of the problem however. The other part of the
problem is providing a programming framework for a large number of
devices programmed by a large number of programmers each having
different levels of experience and style.

Device servers have been written at the ESRF for a large variety of
different devices. Devices vary from serial line devices to devices
interfaced by field-bus to memory mapped VME cards or PC cards to entire
data acquisition systems. The definition of a device depends very much
on the user’s requirements. In the simple case a device server can be
used to hide the serial line protocol required to communicate with a
device. For more complicated devices the device server can be used to
hide the entire complexity of the device timing, configuration and
acquisition cycle behind a set of high level commands.

This section is organized as follows:

.. TO-DO:

    -  A getting started chapter.

    -  The TANGO device server model is treated in chapter 3

    -  Generalities on the Tango Application Programmer Interfaces are given
       in chapter 4

    -  Chapter 5 is an a programmer’s guide for the Tango Application
       ToolKit (TangoATK). This is a Java toolkit to help Tango Java
       application developers.

    -  How to write a TANGO device server is explained in chapter 6

    -  Chapter 7 describes advanced Tango features

Throughout this section examples of source code will be given in order to
illustrate what is meant. Most examples have been taken from the
StepperMotor class - a simulation of a stepper motor which illustrates
how a typical device server for a stepper motor at the ESRF functions.