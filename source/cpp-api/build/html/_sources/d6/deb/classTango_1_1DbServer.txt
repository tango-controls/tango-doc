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
members <../../dd/dad/classTango_1_1DbServer-members.html>`__

Tango::DbServer Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

A database object for a device server which can be used to query or
modify server database information.
`More... <../../d6/deb/classTango_1_1DbServer.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DbServer <../../d6/deb/classTango_1_1DbServer.html#ab9441c6d68940385163e1fc677a6a76e>`__
(string server\_name)

 

| Create a `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__
instance. `More... <#ab9441c6d68940385163e1fc677a6a76e>`__

 

 

`DbServer <../../d6/deb/classTango_1_1DbServer.html#a46869a3535ccf390b099be5bef844a6d>`__
(string server\_name,
`Database <../../d6/dc5/classTango_1_1Database.html>`__ \*db)

 

| Create a `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__
instance using a specified database.
`More... <#a46869a3535ccf390b099be5bef844a6d>`__

 

Server oriented methods

void 

`add\_server <../../d6/deb/classTango_1_1DbServer.html#a0196639724a8fd1d93385ef37a5d0ac4>`__
(`DbDevInfos <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__
&serv)

 

| Add a device server process into the database.
`More... <#a0196639724a8fd1d93385ef37a5d0ac4>`__

 

void 

`delete\_server <../../d6/deb/classTango_1_1DbServer.html#acf053de664387ae38d07afff93433d60>`__
()

 

| Delete the device server from database.
`More... <#acf053de664387ae38d07afff93433d60>`__

 

void 

`export\_server <../../d6/deb/classTango_1_1DbServer.html#ae1c4289e123c4a30dd51102186f1aa6d>`__
(`DbDevExportInfos <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__
&serv)

 

| Export all device server devices in database.
`More... <#ae1c4289e123c4a30dd51102186f1aa6d>`__

 

void 

`unexport\_server <../../d6/deb/classTango_1_1DbServer.html#a7ec946b0a31e7fb26b126063315e52bc>`__
()

 

| Mark all devices belonging to the device server as un-exported.
`More... <#a7ec946b0a31e7fb26b126063315e52bc>`__

 

Detailed Description
--------------------

A database object for a device server which can be used to query or
modify server database information.

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------+-----+-----------+------------------+-----+----+
| Tango::DbServer::DbServer   | (   | string    | *server\_name*   | )   |    |
+-----------------------------+-----+-----------+------------------+-----+----+

Create a `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__
instance.

A constructor for a
`DbServer <../../d6/deb/classTango_1_1DbServer.html>`__ object for a
server in the TANGO database specified by the TANGO\_HOST environment
variable.

Parameters
    +--------+----------------+--------------------------+
    | [in]   | server\_name   | The device server name   |
    +--------+----------------+--------------------------+

+-----------------------------+-----+---------------------------------------------------------------+-------------------+
| Tango::DbServer::DbServer   | (   | string                                                        | *server\_name*,   |
+-----------------------------+-----+---------------------------------------------------------------+-------------------+
|                             |     | `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*    | *db*              |
+-----------------------------+-----+---------------------------------------------------------------+-------------------+
|                             | )   |                                                               |                   |
+-----------------------------+-----+---------------------------------------------------------------+-------------------+

Create a `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__
instance using a specified database.

A constructor for a
`DbServer <../../d6/deb/classTango_1_1DbServer.html>`__ object for the
server in the specified database. This method reuses the
`Database <../../d6/dc5/classTango_1_1Database.html>`__ supplied by the
programmer

Parameters
    +--------+----------------+--------------------------+
    | [in]   | server\_name   | The device server name   |
    +--------+----------------+--------------------------+
    | [in]   | db             | The database object      |
    +--------+----------------+--------------------------+

Member Function Documentation
-----------------------------

+-------------------------------------+-----+------------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::DbServer::add\_server   | (   | `DbDevInfos <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__ &    | *serv*   | )   |    |
+-------------------------------------+-----+------------------------------------------------------------------------------------------+----------+-----+----+

Add a device server process into the database.

Add a group of devices to the database. The device names, server names
and classes are specified in the vector of
`DbDevInfo <../../dd/d01/classTango_1_1DbDevInfo.html>`__ structures

Parameters
    +--------+--------+------------------------------+
    | [in]   | serv   | Device server process data   |
    +--------+--------+------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+----------------------------------------+-----+----+-----+----+
| void Tango::DbServer::delete\_server   | (   |    | )   |    |
+----------------------------------------+-----+----+-----+----+

Delete the device server from database.

Delete the device server and its associated devices from the database.

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+----------------------------------------+-----+------------------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::DbServer::export\_server   | (   | `DbDevExportInfos <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__ &    | *serv*   | )   |    |
+----------------------------------------+-----+------------------------------------------------------------------------------------------------+----------+-----+----+

Export all device server devices in database.

Export a group of device to the database. The device names, IOR, class,
server name, pid etc. are specified in the vector of
`DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__
structures.

Parameters
    +--------+--------+-----------------------+
    | [in]   | serv   | Devices information   |
    +--------+--------+-----------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+------------------------------------------+-----+----+-----+----+
| void Tango::DbServer::unexport\_server   | (   |    | )   |    |
+------------------------------------------+-----+----+-----+----+

Mark all devices belonging to the device server as un-exported.

Mark all the devices exported by the server as un-exported.

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
