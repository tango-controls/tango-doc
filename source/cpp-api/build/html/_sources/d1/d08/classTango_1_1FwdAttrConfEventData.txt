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

`Public Member Functions <#pub-methods>`__ \| `List of all
members <../../da/d99/classTango_1_1FwdAttrConfEventData-members.html>`__

Tango::FwdAttrConfEventData Class Reference

``#include "event.h"``

Inheritance diagram for Tango::FwdAttrConfEventData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::FwdAttrConfEventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a65b41bd462ee1a1bea3ea0f7a8d62a37>`__
()

 

 

`FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#ad70981509e7ab46f8b70bc0d90737def>`__
(`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*,
string &, string &,
`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
\*, DevErrorList &)

 

const AttributeConfig\_5 \* 

`get\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#ade61194ca130c87b018f3222d6970264>`__
()

 

void 

`set\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a8954f696a706ec4aa1f7390e974de017>`__
(const AttributeConfig\_5 \*\_p)

 

Additional Inherited Members
----------------------------

|-| Public Attributes inherited from
`Tango::AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

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

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------------------+-----+----+-----+----+
| Tango::FwdAttrConfEventData::FwdAttrConfEventData   | (   |    | )   |    |
+-----------------------------------------------------+-----+----+-----+----+

+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
| Tango::FwdAttrConfEventData::FwdAttrConfEventData   | (   | `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*                    | ,   |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
|                                                     |     | string &                                                                            | ,   |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
|                                                     |     | string &                                                                            | ,   |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
|                                                     |     | `Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ \*    | ,   |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
|                                                     |     | DevErrorList &                                                                      |     |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+
|                                                     | )   |                                                                                     |     |
+-----------------------------------------------------+-----+-------------------------------------------------------------------------------------+-----+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ---------+-----+----+-----+----+     |                                      |
| | const AttributeConfig\_5\* Tango:: |                                      |
| FwdAttrConfEventData::get\_fwd\_attr |                                      |
| \_conf   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------------+-----+------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
| | void Tango::FwdAttrConfEventData:: |                                      |
| set\_fwd\_attr\_conf   | (   | const |                                      |
|  AttributeConfig\_5 \*    | *\_p*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d8/d1f/classTango_1_1FwdAttrConfEventData__inherit__graph.png
.. |Collaboration graph| image:: ../../d5/dff/classTango_1_1FwdAttrConfEventData__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
