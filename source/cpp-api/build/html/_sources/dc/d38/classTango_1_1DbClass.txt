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

`Classes <#nested-classes>`__ \| `List of all
members <../../dd/dba/classTango_1_1DbClass-members.html>`__

Tango::DbClass Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

A database object for a class which can be used to query or modify class
properties.
`More... <../../dc/d38/classTango_1_1DbClass.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DbClass <../../dc/d38/classTango_1_1DbClass.html#afc0cd676677e89b14f27318588f64d23>`__
(string class\_name)

 

| Create a `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
instance. `More... <#afc0cd676677e89b14f27318588f64d23>`__

 

 

`DbClass <../../dc/d38/classTango_1_1DbClass.html#ab3cc824aa4a5dd46a97254019a4e9600>`__
(string class\_name,
`Database <../../d6/dc5/classTango_1_1Database.html>`__ \*db)

 

| Create a `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
instance using a specified database.
`More... <#ab3cc824aa4a5dd46a97254019a4e9600>`__

 

Property oriented methods

void 

`get\_property <../../dc/d38/classTango_1_1DbClass.html#a08aa0ec6b718aefca1cdafc3430d0159>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get class property from database.
`More... <#a08aa0ec6b718aefca1cdafc3430d0159>`__

 

void 

`put\_property <../../dc/d38/classTango_1_1DbClass.html#a276eeccb2af23e7223109e94f57d9484>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update class property in database.
`More... <#a276eeccb2af23e7223109e94f57d9484>`__

 

void 

`delete\_property <../../dc/d38/classTango_1_1DbClass.html#a77a1ff9ebf5a4e5cbaa71802275f4c6d>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove class property from database.
`More... <#a77a1ff9ebf5a4e5cbaa71802275f4c6d>`__

 

void 

`get\_attribute\_property <../../dc/d38/classTango_1_1DbClass.html#a5c9d03bef93ac135659016c4be4e23a8>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get class attribute property from database.
`More... <#a5c9d03bef93ac135659016c4be4e23a8>`__

 

void 

`put\_attribute\_property <../../dc/d38/classTango_1_1DbClass.html#a068555bb06fa9510e1ae0f81bd4e06ff>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update class attribute property in database.
`More... <#a068555bb06fa9510e1ae0f81bd4e06ff>`__

 

void 

`delete\_attribute\_property <../../dc/d38/classTango_1_1DbClass.html#af5ca60df7812776e82a8136fb88deda5>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove class attribute property from database.
`More... <#af5ca60df7812776e82a8136fb88deda5>`__

 

void 

`get\_pipe\_property <../../dc/d38/classTango_1_1DbClass.html#a59644325189626fe4a34282d68398089>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get class pipe property from database.
`More... <#a59644325189626fe4a34282d68398089>`__

 

void 

`put\_pipe\_property <../../dc/d38/classTango_1_1DbClass.html#a3c28ab0e673e20431db58f7dadbe219c>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update class pipe property in database.
`More... <#a3c28ab0e673e20431db58f7dadbe219c>`__

 

void 

`delete\_pipe\_property <../../dc/d38/classTango_1_1DbClass.html#ad076695e963147713d893e2145d46656>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove class pipe property from database.
`More... <#ad076695e963147713d893e2145d46656>`__

 

Detailed Description
--------------------

A database object for a class which can be used to query or modify class
properties.

Constructor & Destructor Documentation
--------------------------------------

+---------------------------+-----+-----------+-----------------+-----+----+
| Tango::DbClass::DbClass   | (   | string    | *class\_name*   | )   |    |
+---------------------------+-----+-----------+-----------------+-----+----+

Create a `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ instance.

A constructor for a
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ object for a class
in the TANGO database specified by the TANGO\_HOST environment variable

Parameters
    +--------+---------------+---------------------------------------------------------------+
    | [in]   | class\_name   | The `Tango <../../de/ddf/namespaceTango.html>`__ class name   |
    +--------+---------------+---------------------------------------------------------------+

+---------------------------+-----+---------------------------------------------------------------+------------------+
| Tango::DbClass::DbClass   | (   | string                                                        | *class\_name*,   |
+---------------------------+-----+---------------------------------------------------------------+------------------+
|                           |     | `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*    | *db*             |
+---------------------------+-----+---------------------------------------------------------------+------------------+
|                           | )   |                                                               |                  |
+---------------------------+-----+---------------------------------------------------------------+------------------+

Create a `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ instance
using a specified database.

A constructor for a
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ object for the
`Tango <../../de/ddf/namespaceTango.html>`__ class in the specified
database. This method reuses the
`Database <../../d6/dc5/classTango_1_1Database.html>`__ supplied by the
programmer.

Parameters
    +--------+---------------+---------------------------------------------------------------+
    | [in]   | class\_name   | The `Tango <../../de/ddf/namespaceTango.html>`__ class name   |
    +--------+---------------+---------------------------------------------------------------+
    | [in]   | db            | The database object                                           |
    +--------+---------------+---------------------------------------------------------------+

Member Function Documentation
-----------------------------

+----------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::delete\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+----------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove class attribute property from database.

Delete all properties for the list of specified attributes for this
class in the database. See
`Database::delete\_class\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#ad174f83038e4d6c42813493b63ac2d6f>`__
for an example of how to specify the properties.

Parameters
    +--------+------+--------------------+
    | [in]   | db   | Property name(s)   |
    +--------+------+--------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+-----------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::delete\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+-----------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove class pipe property from database.

Delete all properties for the list of specified pipes for this class in
the database. See
`Database::delete\_class\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#ae7016c5e60b8b99e4354ec5d45d23e4a>`__
for an example of how to specify the properties.

Parameters
    +--------+------+--------------------+
    | [in]   | db   | Property name(s)   |
    +--------+------+--------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+-----------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::delete\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+-----------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove class property from database.

Delete the list of specified properties for this class in the database.
See
`Database::delete\_property() <../../d6/dc5/classTango_1_1Database.html#a500bc3ba2fb3b24ea00e8aed0e477c97>`__
for an example of how to specify the properties.

Parameters
    +--------+------+--------------------+
    | [in]   | db   | Property name(s)   |
    +--------+------+--------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+-------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::get\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+-------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get class attribute property from database.

Query the database for the list of attribute properties of this class.
See
`Database::get\_class\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#aca022f5e1ac4a4bad5068fd191d722be>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::get\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get class pipe property from database.

Query the database for the list of pipe properties of this class. See
`Database::get\_class\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#a0535d15f39ec906f3e8e615dd316ba4b>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::get\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get class property from database.

Query the database for the list of properties of this class. See
`Database::get\_class\_property() <../../d6/dc5/classTango_1_1Database.html#a8e46a86143d90e308342c5ac673afaf7>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+-------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::put\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+-------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update class attribute property in database.

Update the list of attribute properties for this class in the database.
See
`Database::put\_class\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#a23eace3b226c74f472926927240529cb>`__
for an example of how to specify the properties.

Parameters
    +--------+------+------------------------------+
    | [in]   | db   | Property name(s) and value   |
    +--------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::put\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update class pipe property in database.

Update the list of pipe properties for this class in the database. See
`Database::put\_class\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#a47c3980644bfc0c7e300db8e001ff29e>`__
for an example of how to specify the properties.

Parameters
    +--------+------+------------------------------+
    | [in]   | db   | Property name(s) and value   |
    +--------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbClass::put\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update class property in database.

Update the list of properties for this class in the database. See
`Database::put\_class\_property() <../../d6/dc5/classTango_1_1Database.html#ac4bdb799dba9411084cad9fab25a8f66>`__
for an example of how to specify the properties.

Parameters
    +--------+------+------------------------------+
    | [in]   | db   | Property name(s) and value   |
    +--------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
