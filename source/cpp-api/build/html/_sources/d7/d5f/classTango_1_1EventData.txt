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
members <../../db/db4/classTango_1_1EventData-members.html>`__

Tango::EventData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Event callback execution data.
`More... <../../d7/d5f/classTango_1_1EventData.html#details>`__

Inheritance diagram for Tango::EventData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::EventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

string 

`attr\_name <../../d7/d5f/classTango_1_1EventData.html#a0bd1e69e134e164209b86a4630357934>`__

 

| The attribute name. `More... <#a0bd1e69e134e164209b86a4630357934>`__

 

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\* 

`attr\_value <../../d7/d5f/classTango_1_1EventData.html#a5c709e4322db6f5129abf5063044c4a7>`__

 

| The attribute data. `More... <#a5c709e4322db6f5129abf5063044c4a7>`__

 

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \* 

`device <../../d7/d5f/classTango_1_1EventData.html#ae56b5ea4399a060a10cba21884fc7a40>`__

 

| The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
object on which the call was executed.
`More... <#ae56b5ea4399a060a10cba21884fc7a40>`__

 

bool 

`err <../../d7/d5f/classTango_1_1EventData.html#a415f9374bb792e3a638447c66af32523>`__

 

| A boolean flag set to true if the request failed. False otherwise.
`More... <#a415f9374bb792e3a638447c66af32523>`__

 

DevErrorList 

`errors <../../d7/d5f/classTango_1_1EventData.html#abbb35ed304e18a77b63d8b49210329e6>`__

 

| The error stack. `More... <#abbb35ed304e18a77b63d8b49210329e6>`__

 

string 

`event <../../d7/d5f/classTango_1_1EventData.html#a346675d2a32c917164b53fa653af173c>`__

 

| The event name. `More... <#a346675d2a32c917164b53fa653af173c>`__

 

Detailed Description
--------------------

Event callback execution data.

This class is used to pass data to the callback method when an event is
sent to the client

$Author$ $Revision$

Member Data Documentation
-------------------------

+---------------------------------------+
| string Tango::EventData::attr\_name   |
+---------------------------------------+

The attribute name.

+-----------------------------------------------------------------------------------------------------------+
| `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ \* Tango::EventData::attr\_value   |
+-----------------------------------------------------------------------------------------------------------+

The attribute data.

+----------------------------------------------------------------------------------------------+
| `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \* Tango::EventData::device   |
+----------------------------------------------------------------------------------------------+

The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object
on which the call was executed.

+------------------------------+
| bool Tango::EventData::err   |
+------------------------------+

A boolean flag set to true if the request failed. False otherwise.

+-----------------------------------------+
| DevErrorList Tango::EventData::errors   |
+-----------------------------------------+

The error stack.

+----------------------------------+
| string Tango::EventData::event   |
+----------------------------------+

The event name.

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `EventData <../../d7/d5f/classTango_1_1EventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/da4/classTango_1_1EventData__inherit__graph.png
.. |Collaboration graph| image:: ../../dd/d3c/classTango_1_1EventData__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
