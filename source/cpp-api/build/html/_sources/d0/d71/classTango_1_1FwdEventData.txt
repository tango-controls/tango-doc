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
members <../../d8/daa/classTango_1_1FwdEventData-members.html>`__

Tango::FwdEventData Class Reference

``#include "event.h"``

Inheritance diagram for Tango::FwdEventData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::FwdEventData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ac40ba97b20f3b6e560a49645f490d0dc>`__
()

 

 

`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#a97f18e379658d7ca891f3e1ccec5e100>`__
(`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*,
string &, string &,
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*, DevErrorList &)

 

 

`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ab002114dec7643ac7bc9e7b1291ad799>`__
(`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*,
string &, string &,
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*, DevErrorList &, zmq::message\_t \*)

 

const AttributeValue\_5 \* 

`get\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a619ea982fd645f27cab11c4c66de586b>`__
()

 

zmq::message\_t \* 

`get\_zmq\_mess\_ptr <../../d0/d71/classTango_1_1FwdEventData.html#a44b315e19fbd41954b9174c4fe8b5efc>`__
()

 

void 

`set\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a07b8a8e405b306fd9092ace7de53401d>`__
(const AttributeValue\_5 \*\_p)

 

Additional Inherited Members
----------------------------

|-| Public Attributes inherited from
`Tango::EventData <../../d7/d5f/classTango_1_1EventData.html>`__

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

 

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------------+-----+----+-----+----+
| Tango::FwdEventData::FwdEventData   | (   |    | )   |    |
+-------------------------------------+-----+----+-----+----+

+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
| Tango::FwdEventData::FwdEventData   | (   | `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*                   | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | string &                                                                           | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | string &                                                                           | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | `Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ \*    | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | DevErrorList &                                                                     |     |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     | )   |                                                                                    |     |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+

+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
| Tango::FwdEventData::FwdEventData   | (   | `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*                   | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | string &                                                                           | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | string &                                                                           | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | `Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ \*    | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | DevErrorList &                                                                     | ,   |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     |     | zmq::message\_t \*                                                                 |     |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+
|                                     | )   |                                                                                    |     |
+-------------------------------------+-----+------------------------------------------------------------------------------------+-----+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | const AttributeValue\_5\* Tango::F |                                      |
| wdEventData::get\_av\_5   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
| | zmq::message\_t\* Tango::FwdEventD |                                      |
| ata::get\_zmq\_mess\_ptr   | (   |   |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------------------ |                                      |
| -------+---------+-----+----+        |                                      |
| | void Tango::FwdEventData::set\_av\ |                                      |
| _5   | (   | const AttributeValue\_5 |                                      |
|  \*    | *\_p*   | )   |    |        |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------------------ |                                      |
| -------+---------+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d2/d75/classTango_1_1FwdEventData__inherit__graph.png
.. |Collaboration graph| image:: ../../de/df7/classTango_1_1FwdEventData__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
