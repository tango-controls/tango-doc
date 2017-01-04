+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Class List <../../annotated.html>`__
-  `Class Hierarchy <../../inherits.html>`__
-  `Class Members <../../functions.html>`__

`Public Attributes <#pub-attribs>`__ \| `List of all
members <../../df/d0d/classTango_1_1PipeEventData-members.html>`__

Tango::PipeEventData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ event callback execution
data.
`More... <../../d8/d0d/classTango_1_1PipeEventData.html#details>`__

Collaboration diagram for Tango::PipeEventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \* 

`device <../../d8/d0d/classTango_1_1PipeEventData.html#ad858aeea852abd28dd5fbfd7193fc463>`__

 

| The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
object on which the call was executed.
`More... <#ad858aeea852abd28dd5fbfd7193fc463>`__

 

bool 

`err <../../d8/d0d/classTango_1_1PipeEventData.html#a85b367c351c624ef0cb36f877b47980a>`__

 

| A boolean flag set to true if the request failed. False otherwise.
`More... <#a85b367c351c624ef0cb36f877b47980a>`__

 

DevErrorList 

`errors <../../d8/d0d/classTango_1_1PipeEventData.html#aefe334e6f2283326ff11f0ec3a46a2ec>`__

 

| The error stack. `More... <#aefe334e6f2283326ff11f0ec3a46a2ec>`__

 

string 

`event <../../d8/d0d/classTango_1_1PipeEventData.html#a4920be1cb5e2d932f68962a4dcb7fb71>`__

 

| The event name. `More... <#a4920be1cb5e2d932f68962a4dcb7fb71>`__

 

string 

`pipe\_name <../../d8/d0d/classTango_1_1PipeEventData.html#a13fb52ff7d823781399a34d4f8aa9e0f>`__

 

| The pipe name. `More... <#a13fb52ff7d823781399a34d4f8aa9e0f>`__

 

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ \* 

`pipe\_value <../../d8/d0d/classTango_1_1PipeEventData.html#a742f0f346a553510d3f6d1560d78ba2a>`__

 

| The pipe data. `More... <#a742f0f346a553510d3f6d1560d78ba2a>`__

 

Detailed Description
--------------------

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ event callback execution
data.

This class is used to pass data to the callback method when a pipe event
is sent to the client

$Author$ $Revision$

Member Data Documentation
-------------------------

+--------------------------------------------------------------------------------------------------+
| `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \* Tango::PipeEventData::device   |
+--------------------------------------------------------------------------------------------------+

The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object
on which the call was executed.

+----------------------------------+
| bool Tango::PipeEventData::err   |
+----------------------------------+

A boolean flag set to true if the request failed. False otherwise.

+---------------------------------------------+
| DevErrorList Tango::PipeEventData::errors   |
+---------------------------------------------+

The error stack.

+--------------------------------------+
| string Tango::PipeEventData::event   |
+--------------------------------------+

The event name.

+-------------------------------------------+
| string Tango::PipeEventData::pipe\_name   |
+-------------------------------------------+

The pipe name.

+-----------------------------------------------------------------------------------------------------+
| `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__\ \* Tango::PipeEventData::pipe\_value   |
+-----------------------------------------------------------------------------------------------------+

The pipe data.

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../dd/d78/classTango_1_1PipeEventData__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
