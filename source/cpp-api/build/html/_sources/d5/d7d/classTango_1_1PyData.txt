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

`Public Member Functions <#pub-methods>`__ \| `Public
Attributes <#pub-attribs>`__ \| `List of all
members <../../d4/d1a/classTango_1_1PyData-members.html>`__

Tango::PyData Class Reference

``#include "utils.h"``

Inheritance diagram for Tango::PyData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::PyData:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`PyData <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__
()

 

 

`~PyData <../../d5/d7d/classTango_1_1PyData.html#a9f0f9dd95a4133c2d94f7dd07013a1e1>`__
()

 

Public Attributes
-----------------

string 

`device\_name <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__

 

DevErrorList 

`PerTh\_del <../../d5/d7d/classTango_1_1PyData.html#aa6fdaf75321c1c9b3a819c732046ab91>`__

 

DevFailed 

`PerTh\_df <../../d5/d7d/classTango_1_1PyData.html#a2032805b8c84d1bc82263b5877673a42>`__

 

DevVarCharArray 

`PerTh\_dvca <../../d5/d7d/classTango_1_1PyData.html#ab43581a61e37c52df1c464e262d280d2>`__

 

DevVarDoubleArray 

`PerTh\_dvda <../../d5/d7d/classTango_1_1PyData.html#a17b084256b71d8a61f3e95cb080d33e6>`__

 

DevVarDoubleStringArray 

`PerTh\_dvdsa <../../d5/d7d/classTango_1_1PyData.html#ad9842dd552c41ab0ffc28b4e95e93d55>`__

 

DevVarEncodedArray 

`PerTh\_dvea <../../d5/d7d/classTango_1_1PyData.html#a98561b5e9c727034d4111e822172b4d8>`__

 

DevVarFloatArray 

`PerTh\_dvfa <../../d5/d7d/classTango_1_1PyData.html#a324a0e96fabfe4c1cf6d99ef3c5c1e75>`__

 

DevVarLong64Array 

`PerTh\_dvl64a <../../d5/d7d/classTango_1_1PyData.html#a703a851cbc4e192a9622527f068f32aa>`__

 

DevVarLongArray 

`PerTh\_dvla <../../d5/d7d/classTango_1_1PyData.html#a0e12526319c05fa6aaf445484b536890>`__

 

DevVarLongStringArray 

`PerTh\_dvlsa <../../d5/d7d/classTango_1_1PyData.html#a8f2867611bde6c2bac6b4101f5fde7c7>`__

 

DevVarStringArray 

`PerTh\_dvsa <../../d5/d7d/classTango_1_1PyData.html#aa7f30e052ddcac7cb02cd6cd2548b4d3>`__

 

DevVarShortArray 

`PerTh\_dvsha <../../d5/d7d/classTango_1_1PyData.html#a6ee5be64c90d940fc63c9bd8e191ca74>`__

 

DevVarULong64Array 

`PerTh\_dvul64a <../../d5/d7d/classTango_1_1PyData.html#a78aecea8ee48e0dee4995ef5c7a6abff>`__

 

DevVarULongArray 

`PerTh\_dvula <../../d5/d7d/classTango_1_1PyData.html#a44206072acd001ca4070a193d23f1b9e>`__

 

DevVarUShortArray 

`PerTh\_dvusa <../../d5/d7d/classTango_1_1PyData.html#ac92beb98b5f4805a421fbc2e793faad6>`__

 

`PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__ \* 

`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__

 

string 

`PerTh\_string <../../d5/d7d/classTango_1_1PyData.html#a299e537d89784a8f94fd0bedcabf1a98>`__

 

vector< double > 

`PerTh\_vec\_db <../../d5/d7d/classTango_1_1PyData.html#aa2c3319a646452bf32bf337db2a39705>`__

 

vector< string > 

`PerTh\_vec\_str <../../d5/d7d/classTango_1_1PyData.html#a0827b0a384ed37aa2cdadd9f088ddeaa>`__

 

bool 

`rec\_state <../../d5/d7d/classTango_1_1PyData.html#a5452838e669ec839234459d7db57bff3>`__

 

bool 

`rec\_status <../../d5/d7d/classTango_1_1PyData.html#a047f79a4c3ba0ae4b6043026d31c2ca8>`__

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +-------------------------+-----+--- | inline                               |
| -+-----+----+                        |                                      |
| | Tango::PyData::PyData   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +-------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`Tango::CreatePyLock::create() <../../d9/dd7/classTango_1_1CreatePyLock.html#a1dab7fbb63d9d24477ea78f7f1951eb3>`__,
`device\_name <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__,
`Tango::Util::instance() <../../d4/deb/classTango_1_1Util.html#a577119e32b43b1344d6f9ef37f587472>`__,
and
`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__.

+--------------------------------------+--------------------------------------+
| +--------------------------+-----+-- | inline                               |
| --+-----+----+                       |                                      |
| | Tango::PyData::~PyData   | (   |   |                                      |
|   | )   |    |                       |                                      |
| +--------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__.

Member Data Documentation
-------------------------

+--------------------------------------+
| string Tango::PyData::device\_name   |
+--------------------------------------+

Referenced by
`PyData() <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__.

+------------------------------------------+
| DevErrorList Tango::PyData::PerTh\_del   |
+------------------------------------------+

+--------------------------------------+
| DevFailed Tango::PyData::PerTh\_df   |
+--------------------------------------+

+----------------------------------------------+
| DevVarCharArray Tango::PyData::PerTh\_dvca   |
+----------------------------------------------+

+------------------------------------------------+
| DevVarDoubleArray Tango::PyData::PerTh\_dvda   |
+------------------------------------------------+

+-------------------------------------------------------+
| DevVarDoubleStringArray Tango::PyData::PerTh\_dvdsa   |
+-------------------------------------------------------+

+-------------------------------------------------+
| DevVarEncodedArray Tango::PyData::PerTh\_dvea   |
+-------------------------------------------------+

+-----------------------------------------------+
| DevVarFloatArray Tango::PyData::PerTh\_dvfa   |
+-----------------------------------------------+

+--------------------------------------------------+
| DevVarLong64Array Tango::PyData::PerTh\_dvl64a   |
+--------------------------------------------------+

+----------------------------------------------+
| DevVarLongArray Tango::PyData::PerTh\_dvla   |
+----------------------------------------------+

+-----------------------------------------------------+
| DevVarLongStringArray Tango::PyData::PerTh\_dvlsa   |
+-----------------------------------------------------+

+------------------------------------------------+
| DevVarStringArray Tango::PyData::PerTh\_dvsa   |
+------------------------------------------------+

+------------------------------------------------+
| DevVarShortArray Tango::PyData::PerTh\_dvsha   |
+------------------------------------------------+

+----------------------------------------------------+
| DevVarULong64Array Tango::PyData::PerTh\_dvul64a   |
+----------------------------------------------------+

+------------------------------------------------+
| DevVarULongArray Tango::PyData::PerTh\_dvula   |
+------------------------------------------------+

+-------------------------------------------------+
| DevVarUShortArray Tango::PyData::PerTh\_dvusa   |
+-------------------------------------------------+

+------------------------------------------------------------------------------------------+
| `PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__\ \* Tango::PyData::PerTh\_py\_lock   |
+------------------------------------------------------------------------------------------+

Referenced by
`PyData() <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__,
and
`~PyData() <../../d5/d7d/classTango_1_1PyData.html#a9f0f9dd95a4133c2d94f7dd07013a1e1>`__.

+---------------------------------------+
| string Tango::PyData::PerTh\_string   |
+---------------------------------------+

+------------------------------------------------+
| vector<double> Tango::PyData::PerTh\_vec\_db   |
+------------------------------------------------+

+-------------------------------------------------+
| vector<string> Tango::PyData::PerTh\_vec\_str   |
+-------------------------------------------------+

+----------------------------------+
| bool Tango::PyData::rec\_state   |
+----------------------------------+

+-----------------------------------+
| bool Tango::PyData::rec\_status   |
+-----------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `utils.h <../../d5/d60/utils_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `PyData <../../d5/d7d/classTango_1_1PyData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d1/d95/classTango_1_1PyData__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/d33/classTango_1_1PyData__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
