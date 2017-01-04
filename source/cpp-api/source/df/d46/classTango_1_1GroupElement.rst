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

`Public Member Functions <#pub-methods>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `Friends <#friends>`__ \| `List of all
members <../../d2/d64/classTango_1_1GroupElement-members.html>`__

Tango::GroupElement Class Referenceabstract

``#include "group.h"``

Inheritance diagram for Tango::GroupElement:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual bool 

`contains <../../df/d46/classTango_1_1GroupElement.html#a64f031e079125a08bdab73d21c906c86>`__
(const std::string &n, bool fwd=true)

 

void 

`disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__
()

 

virtual void 

`dump <../../df/d46/classTango_1_1GroupElement.html#af8ebd6508a22f24c40886f97f879c54f>`__
(int indent\_level=0)=0

 

virtual void 

`dump <../../df/d46/classTango_1_1GroupElement.html#aee01792236e000e57e4725e6141a46a1>`__
(TangoSys\_OMemStream &oms, int indent\_level=0)=0

 

void 

`enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__
()

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__
(const std::string &n)=0

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../df/d46/classTango_1_1GroupElement.html#ab40d45bdf475f9e4ea51ab855e38bf91>`__
(long idx)=0

 

const std::string 

`get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__
() const

 

const std::string & 

`get\_name <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__
() const

 

virtual bool 

`is\_connected <../../df/d46/classTango_1_1GroupElement.html#a5ca539735117e31e002587883e508ca5>`__
()

 

bool 

`is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__
() const

 

bool 

`name\_equals <../../df/d46/classTango_1_1GroupElement.html#ac38ec8a0666000aaeb0be72a538555f6>`__
(const std::string &n)

 

bool 

`name\_matches <../../df/d46/classTango_1_1GroupElement.html#ac59fc656076f55359d8d3b000d0940e9>`__
(const std::string &n)

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`operator[] <../../df/d46/classTango_1_1GroupElement.html#aef54618c81a0042334be5c13d0326346>`__
(long idx)=0

 

virtual bool 

`ping <../../df/d46/classTango_1_1GroupElement.html#ab004b0e82f6a7cd7db714ca42b3b1d8a>`__
(bool fwd=true)=0

 

virtual void 

`set\_timeout\_millis <../../df/d46/classTango_1_1GroupElement.html#aa4ed03d3347901cecadbeff4c9b465a3>`__
(int tmo\_ms)=0

 

Protected Member Functions
--------------------------

 

`GroupElement <../../df/d46/classTango_1_1GroupElement.html#a5f9e25c3711969c3fc5fe50202a22bb9>`__
(const std::string &name,
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
\*parent=0)

 

virtual 

`~GroupElement <../../df/d46/classTango_1_1GroupElement.html#a9e4421b2ad2ad0c72dfa587b6912c811>`__
()

 

Friends
-------

class 

`Group <../../df/d46/classTango_1_1GroupElement.html#a2697825715974a353728f0d4d5658112>`__

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| --------+---------------------+      |                                      |
| | Tango::GroupElement::GroupElement  |                                      |
|   | (   | const std::string &        |                                      |
|                                      |                                      |
|         | *name*,             |      |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| --------+---------------------+      |                                      |
| |                                    |                                      |
|   |     | `GroupElement <../../df/d4 |                                      |
| 6/classTango_1_1GroupElement.html>`_ |                                      |
| _ \*    | *parent* = ``0``    |      |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| --------+---------------------+      |                                      |
| |                                    |                                      |
|   | )   |                            |                                      |
|                                      |                                      |
|         |                     |      |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| --------+---------------------+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedvirtual                     |
| -----------+-----+----+-----+----+   |                                      |
| | virtual Tango::GroupElement::~Grou |                                      |
| pElement   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------+-----+------------------ |                                      |
| ------+---------------------+        |                                      |
| | virtual bool Tango::GroupElement:: |                                      |
| contains   | (   | const std::string |                                      |
|  &    | *n*,                |        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| ------+---------------------+        |                                      |
| |                                    |                                      |
|            |     | bool              |                                      |
|       | *fwd* = ``true``    |        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| ------+---------------------+        |                                      |
| |                                    |                                      |
|            | )   |                   |                                      |
|       |                     |        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| ------+---------------------+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reimplemented in
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#a2885b00242d3a2d199836e48186dd71e>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+----+-----+----+            |                                      |
| | void Tango::GroupElement::disable  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------+-----+--------+------------- |                                      |
| --------------+-----+----+           |                                      |
| | virtual void Tango::GroupElement:: |                                      |
| dump   | (   | int    | *indent\_lev |                                      |
| el* = ``0``   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| -------+-----+--------+------------- |                                      |
| --------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a14f1b125cf6cf5eae91c1a06cadc41a9>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------+-----+---------------------- |                                      |
| -----+----------------------------+  |                                      |
| | virtual void Tango::GroupElement:: |                                      |
| dump   | (   | TangoSys\_OMemStream  |                                      |
| &    | *oms*,                     |  |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------------------- |                                      |
| -----+----------------------------+  |                                      |
| |                                    |                                      |
|        |     | int                   |                                      |
|      | *indent\_level* = ``0``    |  |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------------------- |                                      |
| -----+----------------------------+  |                                      |
| |                                    |                                      |
|        | )   |                       |                                      |
|      |                            |  |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------------------- |                                      |
| -----+----------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a93d666ca9b3ba59abcf1feb86a111390>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -+-----+----+-----+----+             |                                      |
| | void Tango::GroupElement::enable   |                                      |
|  | (   |    | )   |    |             |                                      |
| +----------------------------------- |                                      |
| -+-----+----+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------------+- |                                      |
| ------+-----+----+                   |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupElement::get\_device |                                      |
|    | (   | const std::string &    |  |                                      |
| *n*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------------+- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a5abe1c9a7c93eb66bca1e756833fdadd>`__,
and
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+---------+---------+-----+ |                                      |
| ----+                                |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupElement::get\_device |                                      |
|    | (   | long    | *idx*   | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+---------+---------+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#acb1f9c6754c2dfc7b902bd0e90d3dfc1>`__,
and
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#a29685f1ad173310c2cf695390cedd362>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------------------------+ |                                      |
| -----+----+-----+---------+          |                                      |
| | const std::string Tango::GroupElem |                                      |
| ent::get\_fully\_qualified\_name   | |                                      |
|  (   |    | )   | const   |          |                                      |
| +----------------------------------- |                                      |
| -----------------------------------+ |                                      |
| -----+----+-----+---------+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`get\_fully\_qualified\_name() <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__.

Referenced by
`get\_fully\_qualified\_name() <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----+-----+ |                                      |
| ---------+                           |                                      |
| | const std::string& Tango::GroupEle |                                      |
| ment::get\_name   | (   |    | )   | |                                      |
|  const   |                           |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | virtual bool Tango::GroupElement:: |                                      |
| is\_connected   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reimplemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#af229babcc705fac5bf51edd7715a3496>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+---------+   |                                      |
| | bool Tango::GroupElement::is\_enab |                                      |
| led   | (   |    | )   | const   |   |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+---------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+------------------------------------------+-----+------------------------+-------+-----+----+
| bool Tango::GroupElement::name\_equals   | (   | const std::string &    | *n*   | )   |    |
+------------------------------------------+-----+------------------------+-------+-----+----+

+-------------------------------------------+-----+------------------------+-------+-----+----+
| bool Tango::GroupElement::name\_matches   | (   | const std::string &    | *n*   | )   |    |
+-------------------------------------------+-----+------------------------+-------+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+---------+---------+-----+- |                                      |
| ---+                                 |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::GroupElement::operator[]  |                                      |
|   | (   | long    | *idx*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+---------+---------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a8230a10f49f459944de457deaf2d8915>`__,
and
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#aea3b781cd10d28770cb584c55c065534>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------+-----+---------+------------ |                                      |
| --------+-----+----+                 |                                      |
| | virtual bool Tango::GroupElement:: |                                      |
| ping   | (   | bool    | *fwd* = ``t |                                      |
| rue``   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------+------------ |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a326af717a2dde9c75f60ab0ed6b35c2f>`__,
and
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#aa7cd5c6f1be1a85c244c7a4ec99081ec>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -----------------------+-----+------ |                                      |
| --+-------------+-----+----+         |                                      |
| | virtual void Tango::GroupElement:: |                                      |
| set\_timeout\_millis   | (   | int   |                                      |
|   | *tmo\_ms*   | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| --+-------------+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html#a7e318af767b4030e04d3104e318da0b5>`__,
and
`Tango::Group <../../d4/d6d/classTango_1_1Group.html#a92242b89511557c3296480ee19b790b2>`__.

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

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../db/d4d/classTango_1_1GroupElement__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
