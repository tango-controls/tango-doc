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
members <../../df/dec/classTango_1_1DbDevice-members.html>`__

Tango::DbDevice Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

A high level object for a device interface to the database.
`More... <../../da/dbb/classTango_1_1DbDevice.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DbDevice <../../da/dbb/classTango_1_1DbDevice.html#acdda5efc00d2df65d336e9f9060eeb2c>`__
(string &dev\_name)

 

| Create a `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__
object. `More... <#acdda5efc00d2df65d336e9f9060eeb2c>`__

 

 

`DbDevice <../../da/dbb/classTango_1_1DbDevice.html#a2c588a2b7c490b26712a2f65586c7eb6>`__
(string &dev\_name,
`Database <../../d6/dc5/classTango_1_1Database.html>`__ \*db)

 

| Create a `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__
object using a specified database.
`More... <#a2c588a2b7c490b26712a2f65586c7eb6>`__

 

Device oriented methods

`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__ 

`import\_device <../../da/dbb/classTango_1_1DbDevice.html#ae9f33ae25ca3ef8467ac34467cf080a9>`__
()

 

| Import the device from database.
`More... <#ae9f33ae25ca3ef8467ac34467cf080a9>`__

 

void 

`export\_device <../../da/dbb/classTango_1_1DbDevice.html#a868d901f35341f14b297deb9405831a2>`__
(`DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__
&dev\_info)

 

| Export device info to the database.
`More... <#a868d901f35341f14b297deb9405831a2>`__

 

Property oriented methods

void 

`get\_property <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get device property from database.
`More... <#a86b8f41493e382aac14b5013e792d019>`__

 

void 

`put\_property <../../da/dbb/classTango_1_1DbDevice.html#a2028608c6d8a113acc96e3f8d8d9381f>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update device property in database.
`More... <#a2028608c6d8a113acc96e3f8d8d9381f>`__

 

void 

`delete\_property <../../da/dbb/classTango_1_1DbDevice.html#ae256c5cc0e663b3612a708df684533be>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove device property from database.
`More... <#ae256c5cc0e663b3612a708df684533be>`__

 

void 

`get\_attribute\_property <../../da/dbb/classTango_1_1DbDevice.html#afcef3b9a415adc2ee47c138508122115>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get device attribute property from database.
`More... <#afcef3b9a415adc2ee47c138508122115>`__

 

void 

`put\_attribute\_property <../../da/dbb/classTango_1_1DbDevice.html#a37dbf78b26f8cefbdca525ed85b6fe8f>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update device attribute property in database.
`More... <#a37dbf78b26f8cefbdca525ed85b6fe8f>`__

 

void 

`delete\_attribute\_property <../../da/dbb/classTango_1_1DbDevice.html#a74e7727413e1bc8e135a416592dfb773>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove device attribute property from database.
`More... <#a74e7727413e1bc8e135a416592dfb773>`__

 

void 

`get\_pipe\_property <../../da/dbb/classTango_1_1DbDevice.html#a966837d3a9fed34e3fbee22503aa0f9e>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get device pipe property from database.
`More... <#a966837d3a9fed34e3fbee22503aa0f9e>`__

 

void 

`put\_pipe\_property <../../da/dbb/classTango_1_1DbDevice.html#a57616c4d0c515bb50b074f850be39e40>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Update device pipe property in database.
`More... <#a57616c4d0c515bb50b074f850be39e40>`__

 

void 

`delete\_pipe\_property <../../da/dbb/classTango_1_1DbDevice.html#a087ce16d4416cad4ccc96b7fa73ee65b>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Remove device pipe property from database.
`More... <#a087ce16d4416cad4ccc96b7fa73ee65b>`__

 

Detailed Description
--------------------

A high level object for a device interface to the database.

A database object for a device which can be used to query or modify
properties, import and export information for a device. This class
provides an easy to use interface for device objects in the database. It
uses the methods of the
`Database <../../d6/dc5/classTango_1_1Database.html>`__ class therefore
the reader is referred to these for the exact calling syntax and
examples. The following methods are defined for the
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ class :

Author
    taurel

Revision
    1

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------+-----+-------------+---------------+-----+----+
| Tango::DbDevice::DbDevice   | (   | string &    | *dev\_name*   | )   |    |
+-----------------------------+-----+-------------+---------------+-----+----+

Create a `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object.

A constructor for a
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object for a
device in the TANGO database specified by the TANGO\_HOST environment
variable.

Parameters
    +--------+-------------+-------------------+
    | [in]   | dev\_name   | The device name   |
    +--------+-------------+-------------------+

+-----------------------------+-----+---------------------------------------------------------------+----------------+
| Tango::DbDevice::DbDevice   | (   | string &                                                      | *dev\_name*,   |
+-----------------------------+-----+---------------------------------------------------------------+----------------+
|                             |     | `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*    | *db*           |
+-----------------------------+-----+---------------------------------------------------------------+----------------+
|                             | )   |                                                               |                |
+-----------------------------+-----+---------------------------------------------------------------+----------------+

Create a `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object
using a specified database.

A constructor for a
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object for the
device in the specified database. This method reuses the
`Database <../../d6/dc5/classTango_1_1Database.html>`__ supplied by the
programmer.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | dev\_name   | The device name       |
    +--------+-------------+-----------------------+
    | [in]   | db          | The database object   |
    +--------+-------------+-----------------------+

Member Function Documentation
-----------------------------

+-----------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::delete\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+-----------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove device attribute property from database.

Delete all properties for the list of specified attributes for this
device in the database. See
`Database::delete\_device\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#ae04f367b37ca2f8824cb8d406f61fee2>`__
for an example of how to specify the properties.

Parameters
    +--------+------+--------------------+
    | [in]   | db   | Property name(s)   |
    +--------+------+--------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::delete\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove device pipe property from database.

Delete all properties for the list of specified pipes for this device in
the database. See
`Database::delete\_device\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#a0e9f77d77c6f970661873941449a93f8>`__
for an example of how to specify the properties.

Parameters
    +--------+------+--------------------+
    | [in]   | db   | Property name(s)   |
    +--------+------+--------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::delete\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Remove device property from database.

Delete the list of specified properties for this device in the database.
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

+----------------------------------------+-----+----------------------------------------------------------------------------+---------------+-----+----+
| void Tango::DbDevice::export\_device   | (   | `DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__ &    | *dev\_info*   | )   |    |
+----------------------------------------+-----+----------------------------------------------------------------------------+---------------+-----+----+

Export device info to the database.

Update the export info for this device in the database.

Parameters
    +--------+-------------+----------------------+
    | [in]   | dev\_info   | Device export info   |
    +--------+-------------+----------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::get\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get device attribute property from database.

Query the database for the list of attribute properties of this device.
See
`Database::get\_device\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#a3618dd3ead7394eb65e245006c7c323b>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+---------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::get\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+---------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get device pipe property from database.

Query the database for the list of pipe properties of this device. See
`Database::get\_device\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#a3ee3a11271361471d966159be8755959>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+---------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::get\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+---------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Get device property from database.

Query the database for the list of properties of this device. See
`Database::get\_device\_property() <../../d6/dc5/classTango_1_1Database.html#afe55b0c9cce02fa790ff6ea148969fe3>`__
for an example of how to specify and retrieve the properties.

Parameters
    +------------+------+------------------------------+
    | [in,out]   | db   | Property name(s) and value   |
    +------------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+---------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__ Tango::DbDevice::import\_device   | (   |    | )   |    |
+---------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Import the device from database.

Query the database for the import info of this device. Returns a
`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__
structure.

Returns
    [in] The device import information

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::put\_attribute\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+--------------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update device attribute property in database.

Update the list of attribute properties for this device in the database.
See
`Database::put\_device\_attribute\_property() <../../d6/dc5/classTango_1_1Database.html#a41ce2ff3f79585ad424c7f366e77e2e1>`__
for an example of how to specify the properties.

Parameters
    +--------+------+------------------------------+
    | [in]   | db   | Property name(s) and value   |
    +--------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+---------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::put\_pipe\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+---------------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update device pipe property in database.

Update the list of pipe properties for this device in the database. See
`Database::put\_device\_pipe\_property() <../../d6/dc5/classTango_1_1Database.html#ad2a34dd1aca69f773d6c81ff15d106a5>`__
for an example of how to specify the properties.

Parameters
    +--------+------+------------------------------+
    | [in]   | db   | Property name(s) and value   |
    +--------+------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+---------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+
| void Tango::DbDevice::put\_property   | (   | `DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ &    | *db*   | )   |    |
+---------------------------------------+-----+--------------------------------------------------------------------------------------+--------+-----+----+

Update device property in database.

Update the list of properties for this device in the database. See
`Database::put\_device\_property() <../../d6/dc5/classTango_1_1Database.html#a9a484dbb0b894d44d36c50caf5f80f9b>`__
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
-  `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
