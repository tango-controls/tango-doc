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

`Public Types <#pub-types>`__ \| `Public Member
Functions <#pub-methods>`__ \| `Public Attributes <#pub-attribs>`__ \|
`List of all
members <../../d7/dfe/classTango_1_1TgRequest-members.html>`__

Tango::TgRequest Class Reference

``#include "devasyn.h"``

Collaboration diagram for Tango::TgRequest:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Types
------------

enum  

| `ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
{
| 
  `CMD\_INOUT <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a04e80a438e091149063679db1a10ddb9>`__,
| 
  `READ\_ATTR <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a3466c21a6337f0cd76a5bbd90a566172>`__,
| 
  `WRITE\_ATTR\_SINGLE <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343aa7268c071129d7da5e811bf37b8f2fcb>`__,
| 
  `WRITE\_ATTR <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a82796f46c21ca154dc78089e2983de65>`__
|  }

 

Public Member Functions
-----------------------

 

`TgRequest <../../db/d68/classTango_1_1TgRequest.html#aaff69a8c4221e4ac48febff3f9c6e3b6>`__
(CORBA::Request\_ptr re,
`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty)

 

 

`TgRequest <../../db/d68/classTango_1_1TgRequest.html#ad17a7ebe95dc9bd2ed9e55409ada8059>`__
(CORBA::Request\_ptr re,
`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb)

 

 

`TgRequest <../../db/d68/classTango_1_1TgRequest.html#a3a6abdbc73d075711e9573909fbd0dba>`__
(`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*con,
`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb)

 

Public Attributes
-----------------

bool 

`arrived <../../db/d68/classTango_1_1TgRequest.html#ab6edfb4b709db11d6863eaf6b3d963fb>`__

 

`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \* 

`cb\_ptr <../../db/d68/classTango_1_1TgRequest.html#afa65b05a864aed9174755a819d8193a0>`__

 

`Connection <../../d7/de8/classTango_1_1Connection.html>`__ \* 

`dev <../../db/d68/classTango_1_1TgRequest.html#a6600b476fa5be339ff010fe4f60d593b>`__

 

`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__ 

`req\_type <../../db/d68/classTango_1_1TgRequest.html#a17cf8b3659ac680ae34ab0d801daa163>`__

 

CORBA::Request\_ptr 

`request <../../db/d68/classTango_1_1TgRequest.html#ac67ab29d677879fb006e4bbd434fef00>`__

 

Member Enumeration Documentation
--------------------------------

+--------------------------------------------------------------------------------------------------------------------+
| enum `Tango::TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__   |
+--------------------------------------------------------------------------------------------------------------------+

Enumerator

CMD\_INOUT 

READ\_ATTR 

WRITE\_ATTR\_SINGLE 

WRITE\_ATTR 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +-------------------------------+--- | inline                               |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| | Tango::TgRequest::TgRequest   | (  |                                      |
|   | CORBA::Request\_ptr              |                                      |
|                                      |                                      |
|                          | *re*,   | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| |                               |    |                                      |
|   | `ReqType <../../db/d68/classTang |                                      |
| o_1_1TgRequest.html#a6ae144d0765e704 |                                      |
| 695987f8b20255343>`__    | *ty*    | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| |                               | )  |                                      |
|   |                                  |                                      |
|                                      |                                      |
|                          |         | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +-------------------------------+--- | inline                               |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| | Tango::TgRequest::TgRequest   | (  |                                      |
|   | CORBA::Request\_ptr              |                                      |
|                                      |                                      |
|                          | *re*,   | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| |                               |    |                                      |
|   | `ReqType <../../db/d68/classTang |                                      |
| o_1_1TgRequest.html#a6ae144d0765e704 |                                      |
| 695987f8b20255343>`__    | *ty*,   | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| |                               |    |                                      |
|   | `CallBack <../../d4/ded/classTan |                                      |
| go_1_1CallBack.html>`__ \*           |                                      |
|                          | *cb*    | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
| |                               | )  |                                      |
|   |                                  |                                      |
|                                      |                                      |
|                          |         | |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +-------------------------------+--- | inline                               |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| | Tango::TgRequest::TgRequest   | (  |                                      |
|   | `Tango::Connection <../../d7/de8 |                                      |
| /classTango_1_1Connection.html>`__ \ |                                      |
| *                        | *con*,    |                                      |
| |                                    |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| |                               |    |                                      |
|   | `ReqType <../../db/d68/classTang |                                      |
| o_1_1TgRequest.html#a6ae144d0765e704 |                                      |
| 695987f8b20255343>`__    | *ty*,     |                                      |
| |                                    |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| |                               |    |                                      |
|   | `CallBack <../../d4/ded/classTan |                                      |
| go_1_1CallBack.html>`__ \*           |                                      |
|                          | *cb*      |                                      |
| |                                    |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| |                               | )  |                                      |
|   |                                  |                                      |
|                                      |                                      |
|                          |           |                                      |
| |                                    |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+----------------------------------+
| bool Tango::TgRequest::arrived   |
+----------------------------------+

+-----------------------------------------------------------------------------------------+
| `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__\ \* Tango::TgRequest::cb\_ptr   |
+-----------------------------------------------------------------------------------------+

+-----------------------------------------------------------------------------------------+
| `Connection <../../d7/de8/classTango_1_1Connection.html>`__\ \* Tango::TgRequest::dev   |
+-----------------------------------------------------------------------------------------+

+-------------------------------------------------------------------------------------------------------------------------+
| `ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__ Tango::TgRequest::req\_type   |
+-------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------------------+
| CORBA::Request\_ptr Tango::TgRequest::request   |
+-------------------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devasyn.h <../../db/d02/devasyn_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../d6/d3f/classTango_1_1TgRequest__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
