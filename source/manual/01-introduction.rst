.. raw:: latex

    \clearpage

.. include:: substitutions.rst

Introduction
============

|image02|

Introduction to device server
-----------------------------

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

In this manual the process of how to write TANGO client (applications)
and device servers will be treated. The manual has been organized as
follows :

-  A getting started chapter.

-  The TANGO device server model is treated in chapter 3

-  Generalities on the Tango Application Programmer Interfaces are given
   in chapter 4

-  Chapter 5 is an a programmer’s guide for the Tango Application
   ToolKit (TangoATK). This is a Java toolkit to help Tango Java
   application developers.

-  How to write a TANGO device server is explained in chapter 6

-  Chapter 7 describes advanced Tango features

Throughout this manual examples of source code will be given in order to
illustrate what is meant. Most examples have been taken from the
StepperMotor class - a simulation of a stepper motor which illustrates
how a typical device server for a stepper motor at the ESRF functions.

Device server history
---------------------

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

-  CORBA [3]_ and ZMQ [ZMQ]_ to communicate between
   device server and clients

-  C++, Python and Java as reference programming languages

-  Linux and Windows as operating systems

-  Modern object oriented design patterns

.. include:: footnotes.rst
