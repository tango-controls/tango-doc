+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `File List <../../files.html>`__
-  `File Members <../../globals.html>`__

`Classes <#nested-classes>`__ \| `Namespaces <#namespaces>`__ \|
`Macros <#define-members>`__ \| `Typedefs <#typedef-members>`__

dbapi.h File Reference

| ``#include <vector>``
|  ``#include <errno.h>``
|  ``#include <tango/client/devapi.h>``
|  ``#include "Database.h"``
|  ``#include "DbDevice.h"``

Include dependency graph for dbapi.h:

|image1|

`Go to the source code of this
file. <../../dc/df8/dbapi_8h_source.html>`__

Classes
-------

struct  

`Tango::DbServerCache::AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__

 

struct  

`Tango::DbServerCache::ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__

 

class  

`Tango::Database <../../d6/dc5/classTango_1_1Database.html>`__

 

| A high level object which contains the link to the database.
`More... <../../d6/dc5/classTango_1_1Database.html#details>`__

 

class  

`Tango::DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__

 

class  

`Tango::DbClass <../../dc/d38/classTango_1_1DbClass.html>`__

 

| A database object for a class which can be used to query or modify
class properties.
`More... <../../dc/d38/classTango_1_1DbClass.html#details>`__

 

class  

`Tango::DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__

 

| A database value.
`More... <../../d3/d0f/classTango_1_1DbDatum.html#details>`__

 

class  

`Tango::DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__

 

| Device export information to the database.
`More... <../../d6/d4b/classTango_1_1DbDevExportInfo.html#details>`__

 

class  

`Tango::DbDevFullInfo <../../d3/d6d/classTango_1_1DbDevFullInfo.html>`__

 

| Device information from the database.
`More... <../../d3/d6d/classTango_1_1DbDevFullInfo.html#details>`__

 

class  

`Tango::DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__

 

| A high level object for a device interface to the database.
`More... <../../da/dbb/classTango_1_1DbDevice.html#details>`__

 

class  

`Tango::DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

 

| Device import information from the database.
`More... <../../d0/d4b/classTango_1_1DbDevImportInfo.html#details>`__

 

class  

`Tango::DbDevInfo <../../dd/d01/classTango_1_1DbDevInfo.html>`__

 

| Device information for
`Database <../../d6/dc5/classTango_1_1Database.html>`__ device creation.
`More... <../../dd/d01/classTango_1_1DbDevInfo.html#details>`__

 

class  

`Tango::DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__

 

| Class used to retrieve database object history.
`More... <../../d3/d55/classTango_1_1DbHistory.html#details>`__

 

class  

`Tango::DbProperty <../../df/d27/classTango_1_1DbProperty.html>`__

 

class  

`Tango::DbServer <../../d6/deb/classTango_1_1DbServer.html>`__

 

| A database object for a device server which can be used to query or
modify server database information.
`More... <../../d6/deb/classTango_1_1DbServer.html#details>`__

 

class  

`Tango::DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__

 

class  

`Tango::DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__

 

| Class used to move/copy a complete device server process database
configuration from one `Tango <../../de/ddf/namespaceTango.html>`__ host
to another.
`More... <../../dc/d95/classTango_1_1DbServerData.html#details>`__

 

class  

`Tango::DbServerInfo <../../db/dad/classTango_1_1DbServerInfo.html>`__

 

struct  

`Tango::DbServerCache::DevEltIdx <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__

 

struct  

`Tango::DbServerCache::EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__

 

struct  

`Tango::DbServerCache::PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`CALL\_DB\_SERVER <../../dc/df8/dbapi_8h.html#a4982ee044887994e11e6b73dce645581>`__\ (NAME,
SEND, RET)

 

#define 

`CALL\_DB\_SERVER\_NO\_RET <../../dc/df8/dbapi_8h.html#a85ea3965d82f35e14eba1d170a127a0f>`__\ (NAME,
SEND)

 

#define 

`MANAGE\_EXCEPT <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__\ (NAME)

 

#define 

`POGO\_DESC <../../dc/df8/dbapi_8h.html#acee1075bda717b32291b054853f14d22>`__   "Description"

 

#define 

`POGO\_TITLE <../../dc/df8/dbapi_8h.html#a96ad2363140145a75cffbf2f84407d56>`__   "ProjectTitle"

 

Typedefs
--------

typedef vector< DbDatum > 

`Tango::DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__

 

typedef vector< DbDevExportInfo > 

`Tango::DbDevExportInfos <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__

 

typedef vector< DbDevImportInfo > 

`Tango::DbDevImportInfos <../../de/ddf/namespaceTango.html#a63b451c2d202d3b0b9024b1dd48086ec>`__

 

typedef vector< DbDevInfo > 

`Tango::DbDevInfos <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__

 

| Some typedef and define.
`More... <#aaec13f55a8cc1c657fc9966bfba00b0c>`__

 

Macro Definition Documentation
------------------------------

+----------------------------+-----+-----+---------+
| #define CALL\_DB\_SERVER   | (   |     | NAME,   |
+----------------------------+-----+-----+---------+
|                            |     |     | SEND,   |
+----------------------------+-----+-----+---------+
|                            |     |     | RET     |
+----------------------------+-----+-----+---------+
|                            | )   |     |         |
+----------------------------+-----+-----+---------+

**Value:**

{ \\

bool retry\_mac = true; \\

long db\_retries = 0; \\

if (db\_tg != NULL) \\

{ \\

if (db\_tg->is\_svr\_starting() == true) \\

db\_retries =
`DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__;
\\

} \\

while (retry\_mac == true) \\

{ \\

try \\

{ \\

RET = command\_inout(NAME,SEND); \\

retry\_mac = false; \\

} `\\ <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__

`MANAGE\_EXCEPT <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__\ (NAME)
\\

} \\

}

`MANAGE\_EXCEPT <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__

#define MANAGE\_EXCEPT(NAME)

**Definition:** dbapi.h:1158

`Tango::DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__

const int DB\_START\_PHASE\_RETRIES

**Definition:** tango\_const.h:179

+-------------------------------------+-----+-----+---------+
| #define CALL\_DB\_SERVER\_NO\_RET   | (   |     | NAME,   |
+-------------------------------------+-----+-----+---------+
|                                     |     |     | SEND    |
+-------------------------------------+-----+-----+---------+
|                                     | )   |     |         |
+-------------------------------------+-----+-----+---------+

**Value:**

{ \\

bool retry\_mac = true; \\

long db\_retries = 0; \\

if (db\_tg != NULL) \\

{ \\

if (db\_tg->is\_svr\_starting() == true) \\

db\_retries =
`DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__;
\\

} \\

while (retry\_mac == true) \\

{ \\

try \\

{ \\

command\_inout(NAME,SEND); \\

retry\_mac = false; \\

} `\\ <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__

`MANAGE\_EXCEPT <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__\ (NAME)
\\

} \\

}

`MANAGE\_EXCEPT <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__

#define MANAGE\_EXCEPT(NAME)

**Definition:** dbapi.h:1158

`Tango::DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__

const int DB\_START\_PHASE\_RETRIES

**Definition:** tango\_const.h:179

+--------------------------+-----+-----+--------+-----+----+
| #define MANAGE\_EXCEPT   | (   |     | NAME   | )   |    |
+--------------------------+-----+-----+--------+-----+----+

**Value:**

catch (Tango::CommunicationFailed &e) \\

{ \\

if (e.errors.length() >= 2) \\

{ \\

if (::strcmp(e.errors[1].reason.in(),"API\_DeviceTimedOut") == 0) \\

{ \\

if (db\_retries != 0) \\

{ \\

db\_retries--; \\

if (db\_retries == 0) \\

throw; \\

} \\

else \\

throw; \\

} \\

else \\

throw; \\

} \\

else \\

throw; \\

}

+--------------------------------------+
| #define POGO\_DESC   "Description"   |
+--------------------------------------+

+----------------------------------------+
| #define POGO\_TITLE   "ProjectTitle"   |
+----------------------------------------+

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `dbapi.h <../../dc/df8/dbapi_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d4/d6b/dbapi_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
