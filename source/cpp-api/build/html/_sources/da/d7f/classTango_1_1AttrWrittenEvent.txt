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

`Classes <#nested-classes>`__ \| `Public Attributes <#pub-attribs>`__ \|
`List of all
members <../../d1/dbe/classTango_1_1AttrWrittenEvent-members.html>`__

Tango::AttrWrittenEvent Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Asynchronous write attribute execution callback data.
`More... <../../da/d7f/classTango_1_1AttrWrittenEvent.html#details>`__

Collaboration diagram for Tango::AttrWrittenEvent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

vector< string > & 

`attr\_names <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a5ffa7a0ee56495141515b939d64df365>`__

 

| The attribute name list.
`More... <#a5ffa7a0ee56495141515b939d64df365>`__

 

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \* 

`device <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a23c2655b23415d44475c2ecfe5eeb782>`__

 

| The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
object on which the call was executed.
`More... <#a23c2655b23415d44475c2ecfe5eeb782>`__

 

bool 

`err <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ac81796b8acd485a713c00695bf53d5a8>`__

 

| A boolean flag set to true if the request failed. False otherwise.
`More... <#ac81796b8acd485a713c00695bf53d5a8>`__

 

`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__
& 

`errors <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ab66070e56148e1aed6c9e5125af2c8dd>`__

 

| The error stack. `More... <#ab66070e56148e1aed6c9e5125af2c8dd>`__

 

Detailed Description
--------------------

Asynchronous write attribute execution callback data.

This class is used to pass data to the callback method in asynchronous
callback model for write\_attribute(s) execution.

$Author$ $Revision$

Member Data Documentation
-------------------------

+--------------------------------------------------------+
| vector<string>& Tango::AttrWrittenEvent::attr\_names   |
+--------------------------------------------------------+

The attribute name list.

+------------------------------------------------------------------------------------------------------------+
| `Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \* Tango::AttrWrittenEvent::device   |
+------------------------------------------------------------------------------------------------------------+

The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object
on which the call was executed.

+-------------------------------------+
| bool Tango::AttrWrittenEvent::err   |
+-------------------------------------+

A boolean flag set to true if the request failed. False otherwise.

+------------------------------------------------------------------------------------------------------------------+
| `NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__\ & Tango::AttrWrittenEvent::errors   |
+------------------------------------------------------------------------------------------------------------------+

The error stack.

--------------

The documentation for this class was generated from the following file:

-  `devasyn.h <../../db/d02/devasyn_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../dc/d32/classTango_1_1AttrWrittenEvent__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
