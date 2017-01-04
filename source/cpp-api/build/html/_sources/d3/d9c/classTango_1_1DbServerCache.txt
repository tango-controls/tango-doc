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

`Classes <#nested-classes>`__ \| `Public Member
Functions <#pub-methods>`__ \| `List of all
members <../../dc/db5/classTango_1_1DbServerCache-members.html>`__

Tango::DbServerCache Class Reference

``#include "dbapi.h"``

Classes
-------

struct  

`AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__

 

struct  

`ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__

 

struct  

`DevEltIdx <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__

 

struct  

`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__

 

struct  

`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__

 

Public Member Functions
-----------------------

 

`DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html#ac4367efe4048d5f000757c416a0ca2ce>`__
(`Database <../../d6/dc5/classTango_1_1Database.html>`__ \*, string &,
string &)

 

 

`~DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html#a879e63fd1e796202e25fe1811d2a0b3c>`__
()

 

const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
& 

`get\_adm\_dev\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a6f3388bbc156eb81639f43ed58c16957>`__
()

 

const DevVarStringArray \* 

`get\_class\_att\_property <../../d3/d9c/classTango_1_1DbServerCache.html#a1d51ab1060c7869ef9949a8e6f01bf78>`__
(DevVarStringArray \*)

 

int 

`get\_class\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a6fb218ae51715acd591cbe1866600273>`__
()

 

const DevVarStringArray \* 

`get\_class\_pipe\_property <../../d3/d9c/classTango_1_1DbServerCache.html#a8fc512292286a0a123509cc69d520d78>`__
(DevVarStringArray \*)

 

const DevVarStringArray \* 

`get\_class\_property <../../d3/d9c/classTango_1_1DbServerCache.html#a9e08aa049f7eada2d4cd53629a7fbeec>`__
(DevVarStringArray \*)

 

const
`ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__
\* 

`get\_classes\_elt <../../d3/d9c/classTango_1_1DbServerCache.html#a698cc95655debad33c798aed2029ca43>`__
()

 

const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
& 

`get\_ctrl\_serv\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a5b8b573b77b996c3a5e65ed91c726323>`__
()

 

int 

`get\_data\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a563ac0a97a4264997f91a255ba5e9aa6>`__
()

 

const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
& 

`get\_Default\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aba3e6ed06dada57a8e28f41db77a36c3>`__
()

 

const DevVarStringArray \* 

`get\_dev\_att\_property <../../d3/d9c/classTango_1_1DbServerCache.html#a741c66aa44b53aabd6d02938a39d6665>`__
(DevVarStringArray \*)

 

const DevVarStringArray \* 

`get\_dev\_list <../../d3/d9c/classTango_1_1DbServerCache.html#a43c0e6184ae0ac2e37b81b527260eaef>`__
(DevVarStringArray \*)

 

const DevVarStringArray \* 

`get\_dev\_pipe\_property <../../d3/d9c/classTango_1_1DbServerCache.html#ae768e8e04cd75dfee203f0b1181a6f76>`__
(DevVarStringArray \*)

 

const DevVarStringArray \* 

`get\_dev\_property <../../d3/d9c/classTango_1_1DbServerCache.html#a585a7cff4d7258c732648302e4c7b014>`__
(DevVarStringArray \*)

 

const DevVarStringArray \* 

`get\_device\_property\_list <../../d3/d9c/classTango_1_1DbServerCache.html#aca3f498aa2cf7f21cca6010f99c8cad9>`__
(DevVarStringArray \*)

 

const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
& 

`get\_DServer\_class\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aa1264b373e8a7ffa06fea2d669077283>`__
()

 

const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__ & 

`get\_imp\_adm\_event <../../d3/d9c/classTango_1_1DbServerCache.html#ace05512b3c0ed14098351cefc5de755f>`__
()

 

const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__ & 

`get\_imp\_dat <../../d3/d9c/classTango_1_1DbServerCache.html#aec240b67c7bae7eeac3a55f7cfe99bae>`__
()

 

const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__ & 

`get\_imp\_notifd\_event <../../d3/d9c/classTango_1_1DbServerCache.html#a545fc2b0346c24f12336bde2f2879e54>`__
()

 

const DevVarStringArray \* 

`get\_obj\_property <../../d3/d9c/classTango_1_1DbServerCache.html#ab243d19bed9da9e884594881354dcbac>`__
(DevVarStringArray \*)

 

const DevVarLongStringArray \* 

`import\_adm\_dev <../../d3/d9c/classTango_1_1DbServerCache.html#ac9cd0f9b6e07d3155b932f241e1d7a59>`__
()

 

const DevVarLongStringArray \* 

`import\_adm\_event <../../d3/d9c/classTango_1_1DbServerCache.html#aebde4557fffeb5937fc720964e676413>`__
()

 

const DevVarLongStringArray \* 

`import\_notifd\_event <../../d3/d9c/classTango_1_1DbServerCache.html#a18e8f5e8f1b43b4d3849e10fd4e13d83>`__
()

 

const DevVarLongStringArray \* 

`import\_tac\_dev <../../d3/d9c/classTango_1_1DbServerCache.html#ac88bfa9af0e4706f9c2e9de6a7cd2b5c>`__
(string &)

 

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------------+-----+---------------------------------------------------------------+-----+
| Tango::DbServerCache::DbServerCache   | (   | `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*    | ,   |
+---------------------------------------+-----+---------------------------------------------------------------+-----+
|                                       |     | string &                                                      | ,   |
+---------------------------------------+-----+---------------------------------------------------------------+-----+
|                                       |     | string &                                                      |     |
+---------------------------------------+-----+---------------------------------------------------------------+-----+
|                                       | )   |                                                               |     |
+---------------------------------------+-----+---------------------------------------------------------------+-----+

+----------------------------------------+-----+----+-----+----+
| Tango::DbServerCache::~DbServerCache   | (   |    | )   |    |
+----------------------------------------+-----+----+-----+----+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
| | const `PropEltIdx <../../d4/d22/st |                                      |
| ructTango_1_1DbServerCache_1_1PropEl |                                      |
| tIdx.html>`__\ & Tango::DbServerCach |                                      |
| e::get\_adm\_dev\_prop   | (   |     |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+-----------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_class\_att\_property   | (   | DevVarStringArray \*    |    | )   |    |
+-----------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | int Tango::DbServerCache::get\_cla |                                      |
| ss\_nb   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+------------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_class\_pipe\_property   | (   | DevVarStringArray \*    |    | )   |    |
+------------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_class\_property   | (   | DevVarStringArray \*    |    | )   |    |
+------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | const `ClassEltIdx <../../de/d56/s |                                      |
| tructTango_1_1DbServerCache_1_1Class |                                      |
| EltIdx.html>`__\ \* Tango::DbServerC |                                      |
| ache::get\_classes\_elt   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
| | const `PropEltIdx <../../d4/d22/st |                                      |
| ructTango_1_1DbServerCache_1_1PropEl |                                      |
| tIdx.html>`__\ & Tango::DbServerCach |                                      |
| e::get\_ctrl\_serv\_prop   | (   |   |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | int Tango::DbServerCache::get\_dat |                                      |
| a\_nb   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
| | const `PropEltIdx <../../d4/d22/st |                                      |
| ructTango_1_1DbServerCache_1_1PropEl |                                      |
| tIdx.html>`__\ & Tango::DbServerCach |                                      |
| e::get\_Default\_prop   | (   |    | |                                      |
|  )   |    |                          |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+---------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_dev\_att\_property   | (   | DevVarStringArray \*    |    | )   |    |
+---------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_dev\_list   | (   | DevVarStringArray \*    |    | )   |    |
+------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+----------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_dev\_pipe\_property   | (   | DevVarStringArray \*    |    | )   |    |
+----------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+----------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_dev\_property   | (   | DevVarStringArray \*    |    | )   |    |
+----------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+-------------------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_device\_property\_list   | (   | DevVarStringArray \*    |    | )   |    |
+-------------------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
| | const `PropEltIdx <../../d4/d22/st |                                      |
| ructTango_1_1DbServerCache_1_1PropEl |                                      |
| tIdx.html>`__\ & Tango::DbServerCach |                                      |
| e::get\_DServer\_class\_prop   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | const `EltIdx <../../dd/dd7/struct |                                      |
| Tango_1_1DbServerCache_1_1EltIdx.htm |                                      |
| l>`__\ & Tango::DbServerCache::get\_ |                                      |
| imp\_adm\_event   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------+-----+----+-----+----+   |                                      |
| | const `EltIdx <../../dd/dd7/struct |                                      |
| Tango_1_1DbServerCache_1_1EltIdx.htm |                                      |
| l>`__\ & Tango::DbServerCache::get\_ |                                      |
| imp\_dat   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | const `EltIdx <../../dd/dd7/struct |                                      |
| Tango_1_1DbServerCache_1_1EltIdx.htm |                                      |
| l>`__\ & Tango::DbServerCache::get\_ |                                      |
| imp\_notifd\_event   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+----------------------------------------------------------------------+-----+-------------------------+----+-----+----+
| const DevVarStringArray\* Tango::DbServerCache::get\_obj\_property   | (   | DevVarStringArray \*    |    | )   |    |
+----------------------------------------------------------------------+-----+-------------------------+----+-----+----+

+------------------------------------------------------------------------+-----+----+-----+----+
| const DevVarLongStringArray\* Tango::DbServerCache::import\_adm\_dev   | (   |    | )   |    |
+------------------------------------------------------------------------+-----+----+-----+----+

+--------------------------------------------------------------------------+-----+----+-----+----+
| const DevVarLongStringArray\* Tango::DbServerCache::import\_adm\_event   | (   |    | )   |    |
+--------------------------------------------------------------------------+-----+----+-----+----+

+-----------------------------------------------------------------------------+-----+----+-----+----+
| const DevVarLongStringArray\* Tango::DbServerCache::import\_notifd\_event   | (   |    | )   |    |
+-----------------------------------------------------------------------------+-----+----+-----+----+

+------------------------------------------------------------------------+-----+-------------+----+-----+----+
| const DevVarLongStringArray\* Tango::DbServerCache::import\_tac\_dev   | (   | string &    |    | )   |    |
+------------------------------------------------------------------------+-----+-------------+----+-----+----+

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
