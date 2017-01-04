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
members <../../d8/dc3/classTango_1_1DataReadyEventData-members.html>`__

Tango::DataReadyEventData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Data ready event callback execution data.
`More... <../../df/d39/classTango_1_1DataReadyEventData.html#details>`__

Collaboration diagram for Tango::DataReadyEventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

int 

`attr\_data\_type <../../df/d39/classTango_1_1DataReadyEventData.html#abc2542d1f11b9d8faff06e524793aa69>`__

 

| The attribute data type.
`More... <#abc2542d1f11b9d8faff06e524793aa69>`__

 

string 

`attr\_name <../../df/d39/classTango_1_1DataReadyEventData.html#a2cd31366088f9fee0d06364c2a81796f>`__

 

| The attribute name. `More... <#a2cd31366088f9fee0d06364c2a81796f>`__

 

int 

`ctr <../../df/d39/classTango_1_1DataReadyEventData.html#a68d3c729f0f7aa64540f30c65b2b690f>`__

 

| The user counter. Set to 0 if not defined when sent by the server.
`More... <#a68d3c729f0f7aa64540f30c65b2b690f>`__

 

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \* 

`device <../../df/d39/classTango_1_1DataReadyEventData.html#a7df862854af7b80913dcb9dd1d330a64>`__

 

| The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
object on which the call was executed.
`More... <#a7df862854af7b80913dcb9dd1d330a64>`__

 

bool 

`err <../../df/d39/classTango_1_1DataReadyEventData.html#afc55fe4eee219eea959e8ad53d34f310>`__

 

| A boolean flag set to true if the request failed. False otherwise.
`More... <#afc55fe4eee219eea959e8ad53d34f310>`__

 

DevErrorList 

`errors <../../df/d39/classTango_1_1DataReadyEventData.html#acc8ce497a9b75d7db6878472ae471995>`__

 

| The error stack. `More... <#acc8ce497a9b75d7db6878472ae471995>`__

 

string 

`event <../../df/d39/classTango_1_1DataReadyEventData.html#a90279b05b0751e18e8f348c0a41848fa>`__

 

| The event name. `More... <#a90279b05b0751e18e8f348c0a41848fa>`__

 

Detailed Description
--------------------

Data ready event callback execution data.

This class is used to pass data to the callback method when an attribute
data ready event is sent to the client.

$Author$ $Revision$

Member Data Documentation
-------------------------

+---------------------------------------------------+
| int Tango::DataReadyEventData::attr\_data\_type   |
+---------------------------------------------------+

The attribute data type.

+------------------------------------------------+
| string Tango::DataReadyEventData::attr\_name   |
+------------------------------------------------+

The attribute name.

+--------------------------------------+
| int Tango::DataReadyEventData::ctr   |
+--------------------------------------+

The user counter. Set to 0 if not defined when sent by the server.

+-------------------------------------------------------------------------------------------------------+
| `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \* Tango::DataReadyEventData::device   |
+-------------------------------------------------------------------------------------------------------+

The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object
on which the call was executed.

+---------------------------------------+
| bool Tango::DataReadyEventData::err   |
+---------------------------------------+

A boolean flag set to true if the request failed. False otherwise.

+--------------------------------------------------+
| DevErrorList Tango::DataReadyEventData::errors   |
+--------------------------------------------------+

The error stack.

+-------------------------------------------+
| string Tango::DataReadyEventData::event   |
+-------------------------------------------+

The event name.

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../db/dc4/classTango_1_1DataReadyEventData__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
