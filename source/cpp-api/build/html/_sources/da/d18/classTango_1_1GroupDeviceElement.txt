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

`Public Member Functions <#pub-methods>`__ \| `Friends <#friends>`__ \|
`List of all
members <../../d3/d9c/classTango_1_1GroupDeviceElement-members.html>`__

Tango::GroupDeviceElement Class Reference

``#include "group.h"``

Inheritance diagram for Tango::GroupDeviceElement:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::GroupDeviceElement:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual void 

`dump <../../da/d18/classTango_1_1GroupDeviceElement.html#a14f1b125cf6cf5eae91c1a06cadc41a9>`__
(int indent\_level=0)

 

virtual void 

`dump <../../da/d18/classTango_1_1GroupDeviceElement.html#a93d666ca9b3ba59abcf1feb86a111390>`__
(TangoSys\_OMemStream &oms, int indent\_level=0)

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../da/d18/classTango_1_1GroupDeviceElement.html#a5abe1c9a7c93eb66bca1e756833fdadd>`__
(const std::string &n)

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../da/d18/classTango_1_1GroupDeviceElement.html#acb1f9c6754c2dfc7b902bd0e90d3dfc1>`__
(long idx)

 

virtual bool 

`is\_connected <../../da/d18/classTango_1_1GroupDeviceElement.html#af229babcc705fac5bf51edd7715a3496>`__
()

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`operator[] <../../da/d18/classTango_1_1GroupDeviceElement.html#a8230a10f49f459944de457deaf2d8915>`__
(long idx)

 

virtual bool 

`ping <../../da/d18/classTango_1_1GroupDeviceElement.html#a326af717a2dde9c75f60ab0ed6b35c2f>`__
(bool fwd=true)

 

virtual void 

`set\_timeout\_millis <../../da/d18/classTango_1_1GroupDeviceElement.html#a7e318af767b4030e04d3104e318da0b5>`__
(int tmo\_ms)

 

|-| Public Member Functions inherited from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

virtual bool 

`contains <../../df/d46/classTango_1_1GroupElement.html#a64f031e079125a08bdab73d21c906c86>`__
(const std::string &n, bool fwd=true)

 

void 

`disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__
()

 

void 

`enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__
()

 

const std::string 

`get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__
() const

 

const std::string & 

`get\_name <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__
() const

 

bool 

`is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__
() const

 

bool 

`name\_equals <../../df/d46/classTango_1_1GroupElement.html#ac38ec8a0666000aaeb0be72a538555f6>`__
(const std::string &n)

 

bool 

`name\_matches <../../df/d46/classTango_1_1GroupElement.html#ac59fc656076f55359d8d3b000d0940e9>`__
(const std::string &n)

 

Friends
-------

class 

`Group <../../da/d18/classTango_1_1GroupDeviceElement.html#a2697825715974a353728f0d4d5658112>`__

 

class 

`GroupElementFactory <../../da/d18/classTango_1_1GroupDeviceElement.html#acf9aa16af65e1d1aa7375bf81409d9f0>`__

 

Additional Inherited Members
----------------------------

|-| Protected Member Functions inherited from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

 

`GroupElement <../../df/d46/classTango_1_1GroupElement.html#a5f9e25c3711969c3fc5fe50202a22bb9>`__
(const std::string &name,
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
\*parent=0)

 

virtual 

`~GroupElement <../../df/d46/classTango_1_1GroupElement.html#a9e4421b2ad2ad0c72dfa587b6912c811>`__
()

 

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+--------+------- |                                      |
| --------------------+-----+----+     |                                      |
| | virtual void Tango::GroupDeviceEle |                                      |
| ment::dump   | (   | int    | *inden |                                      |
| t\_level* = ``0``   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| -------------+-----+--------+------- |                                      |
| --------------------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#af8ebd6508a22f24c40886f97f879c54f>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| -----------+------------------------ |                                      |
| ----+                                |                                      |
| | virtual void Tango::GroupDeviceEle |                                      |
| ment::dump   | (   | TangoSys\_OMemS |                                      |
| tream &    | *oms*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| -----------+------------------------ |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|              |     | int             |                                      |
|            | *indent\_level* = ``0`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| -----------+------------------------ |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|            |                         |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| -----------+------------------------ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#aee01792236e000e57e4725e6141a46a1>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+-------------------- |                                      |
| ----+-------+-----+----+             |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupDeviceElement::get\_ |                                      |
| device   | (   | const std::string & |                                      |
|     | *n*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+-------------------- |                                      |
| ----+-------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+---------+---------+ |                                      |
| -----+----+                          |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupDeviceElement::get\_ |                                      |
| device   | (   | long    | *idx*   | |                                      |
|  )   |    |                          |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+---------+---------+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#ab40d45bdf475f9e4ea51ab855e38bf91>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
| | virtual bool Tango::GroupDeviceEle |                                      |
| ment::is\_connected   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reimplemented from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#a5ca539735117e31e002587883e508ca5>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+---------+---------+- |                                      |
| ----+----+                           |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupDeviceElement::opera |                                      |
| tor[]   | (   | long    | *idx*   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+---------+---------+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#aef54618c81a0042334be5c13d0326346>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------+------ |                                      |
| --------------+-----+----+           |                                      |
| | virtual bool Tango::GroupDeviceEle |                                      |
| ment::ping   | (   | bool    | *fwd* |                                      |
|  = ``true``   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------+------ |                                      |
| --------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#ab004b0e82f6a7cd7db714ca42b3b1d8a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------------+-----+ |                                      |
| --------+-------------+-----+----+   |                                      |
| | virtual void Tango::GroupDeviceEle |                                      |
| ment::set\_timeout\_millis   | (   | |                                      |
|  int    | *tmo\_ms*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| --------+-------------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#aa4ed03d3347901cecadbeff4c9b465a3>`__.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| -------------------------------+     |                                      |
| | friend class `Group <../../d4/d6d/ |                                      |
| classTango_1_1Group.html>`__   |     |                                      |
| +----------------------------------- |                                      |
| -------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
| | friend class `GroupElementFactory  |                                      |
| <../../da/da9/classTango_1_1GroupEle |                                      |
| mentFactory.html>`__   |             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d9/d88/classTango_1_1GroupDeviceElement__inherit__graph.png
.. |Collaboration graph| image:: ../../d6/df3/classTango_1_1GroupDeviceElement__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
