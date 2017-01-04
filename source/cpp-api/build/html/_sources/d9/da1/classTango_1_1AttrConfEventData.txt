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
members <../../d4/d3d/classTango_1_1AttrConfEventData-members.html>`__

Tango::AttrConfEventData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration
change event callback execution data.
`More... <../../d9/da1/classTango_1_1AttrConfEventData.html#details>`__

Inheritance diagram for Tango::AttrConfEventData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::AttrConfEventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
\* 

`attr\_conf <../../d9/da1/classTango_1_1AttrConfEventData.html#af84272ced68dde94791aa090fc80bd24>`__

 

| The attribute configuration.
`More... <#af84272ced68dde94791aa090fc80bd24>`__

 

string 

`attr\_name <../../d9/da1/classTango_1_1AttrConfEventData.html#a950448309e5b62a4387d94fd38ce0d75>`__

 

| The attribute name. `More... <#a950448309e5b62a4387d94fd38ce0d75>`__

 

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \* 

`device <../../d9/da1/classTango_1_1AttrConfEventData.html#a6da04a13ce41eff0ddcf63417f001c13>`__

 

| The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
object on which the call was executed.
`More... <#a6da04a13ce41eff0ddcf63417f001c13>`__

 

bool 

`err <../../d9/da1/classTango_1_1AttrConfEventData.html#a2e3fb06bc98bb156e254ebeb6a1c222e>`__

 

| A boolean flag set to true if the request failed. False otherwise.
`More... <#a2e3fb06bc98bb156e254ebeb6a1c222e>`__

 

DevErrorList 

`errors <../../d9/da1/classTango_1_1AttrConfEventData.html#adb1f2a3796ba28cfa8a6de522b1596a8>`__

 

| The error stack. `More... <#adb1f2a3796ba28cfa8a6de522b1596a8>`__

 

string 

`event <../../d9/da1/classTango_1_1AttrConfEventData.html#a70a8c86b121849afab88c952c6cc8bde>`__

 

| The event name. `More... <#a70a8c86b121849afab88c952c6cc8bde>`__

 

Detailed Description
--------------------

`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration
change event callback execution data.

This class is used to pass data to the callback method when an attribute
configuration event is sent to the client

$Author$ $Revision$

Member Data Documentation
-------------------------

+-------------------------------------------------------------------------------------------------------------------+
| `AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__\ \* Tango::AttrConfEventData::attr\_conf   |
+-------------------------------------------------------------------------------------------------------------------+

The attribute configuration.

+-----------------------------------------------+
| string Tango::AttrConfEventData::attr\_name   |
+-----------------------------------------------+

The attribute name.

+------------------------------------------------------------------------------------------------------+
| `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \* Tango::AttrConfEventData::device   |
+------------------------------------------------------------------------------------------------------+

The `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object
on which the call was executed.

+--------------------------------------+
| bool Tango::AttrConfEventData::err   |
+--------------------------------------+

A boolean flag set to true if the request failed. False otherwise.

+-------------------------------------------------+
| DevErrorList Tango::AttrConfEventData::errors   |
+-------------------------------------------------+

The error stack.

+------------------------------------------+
| string Tango::AttrConfEventData::event   |
+------------------------------------------+

The event name.

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../db/de0/classTango_1_1AttrConfEventData__inherit__graph.png
.. |Collaboration graph| image:: ../../d8/dbd/classTango_1_1AttrConfEventData__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
