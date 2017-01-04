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
members <../../d1/d00/classTango_1_1DbServerData-members.html>`__

Tango::DbServerData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

Class used to move/copy a complete device server process database
configuration from one `Tango <../../de/ddf/namespaceTango.html>`__ host
to another.
`More... <../../dc/d95/classTango_1_1DbServerData.html#details>`__

Public Member Functions
-----------------------

 

`DbServerData <../../dc/d95/classTango_1_1DbServerData.html#a9091f7e8303cb507cd6d571ab6901cbf>`__
(const string &ds\_exec\_name, const string &ds\_inst\_name)

 

| Create a
`DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__
instance. `More... <#a9091f7e8303cb507cd6d571ab6901cbf>`__

 

bool 

`already\_exist <../../dc/d95/classTango_1_1DbServerData.html#a19dd1e256705a4ba7aae9a7e696c6a7b>`__
(const string &tg\_host)

 

| Check if device(s) already defined.
`More... <#a19dd1e256705a4ba7aae9a7e696c6a7b>`__

 

void 

`put\_in\_database <../../dc/d95/classTango_1_1DbServerData.html#a642eaefe3d22329cb415d6893a388c9d>`__
(const string &tg\_host)

 

| Put device server database configuration in new
`Tango <../../de/ddf/namespaceTango.html>`__ host.
`More... <#a642eaefe3d22329cb415d6893a388c9d>`__

 

void 

`remove <../../dc/d95/classTango_1_1DbServerData.html#a8d0f3027d2c152939a7cc7a0129c7e73>`__
(const string &tg\_host)

 

| Remove device server database configuration from
`Tango <../../de/ddf/namespaceTango.html>`__ host.
`More... <#a8d0f3027d2c152939a7cc7a0129c7e73>`__

 

void 

`remove <../../dc/d95/classTango_1_1DbServerData.html#a71c4b877ede37ab729a172da7668872b>`__
()

 

| Remove device server database configuration from default
`Tango <../../de/ddf/namespaceTango.html>`__ host.
`More... <#a71c4b877ede37ab729a172da7668872b>`__

 

Detailed Description
--------------------

Class used to move/copy a complete device server process database
configuration from one `Tango <../../de/ddf/namespaceTango.html>`__ host
to another.

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------------+-----+-------------------+---------------------+
| Tango::DbServerData::DbServerData   | (   | const string &    | *ds\_exec\_name*,   |
+-------------------------------------+-----+-------------------+---------------------+
|                                     |     | const string &    | *ds\_inst\_name*    |
+-------------------------------------+-----+-------------------+---------------------+
|                                     | )   |                   |                     |
+-------------------------------------+-----+-------------------+---------------------+

Create a `DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__
instance.

A constructor for a
`DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__ object
for a device server process defined in the TANGO database specified by
the TANGO\_HOST environment variable

Parameters
    +--------+------------------+---------------------------------------------+
    | [in]   | ds\_exec\_name   | The device server process executable name   |
    +--------+------------------+---------------------------------------------+
    | [in]   | ds\_inst\_name   | The device server process instance name     |
    +--------+------------------+---------------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------------+-----+-------------------+--------------+-----+----+
| bool Tango::DbServerData::already\_exist   | (   | const string &    | *tg\_host*   | )   |    |
+--------------------------------------------+-----+-------------------+--------------+-----+----+

Check if device(s) already defined.

Return true if one of the device defined in the device server process
with configuration in this instance is already defined in the database
defined by the `Tango <../../de/ddf/namespaceTango.html>`__ host given
as parameter

Parameters
    +--------+------------+------------------+
    | [in]   | tg\_host   | The tango host   |
    +--------+------------+------------------+

Returns
    Boolean set to true if one of the device server device is defined in
    the `Tango <../../de/ddf/namespaceTango.html>`__ host given as
    parameter

+-----------------------------------------------+-----+-------------------+--------------+-----+----+
| void Tango::DbServerData::put\_in\_database   | (   | const string &    | *tg\_host*   | )   |    |
+-----------------------------------------------+-----+-------------------+--------------+-----+----+

Put device server database configuration in new
`Tango <../../de/ddf/namespaceTango.html>`__ host.

Store the device server process database configuration in the database
specified by the given `Tango <../../de/ddf/namespaceTango.html>`__ host
parameter

Parameters
    +--------+------------+------------------+
    | [in]   | tg\_host   | The tango host   |
    +--------+------------+------------------+

+------------------------------------+-----+-------------------+--------------+-----+----+
| void Tango::DbServerData::remove   | (   | const string &    | *tg\_host*   | )   |    |
+------------------------------------+-----+-------------------+--------------+-----+----+

Remove device server database configuration from
`Tango <../../de/ddf/namespaceTango.html>`__ host.

Remove the device server process database configuration from the
database specified by the given
`Tango <../../de/ddf/namespaceTango.html>`__ host parameter

Parameters
    +--------+------------+------------------+
    | [in]   | tg\_host   | The tango host   |
    +--------+------------+------------------+

+------------------------------------+-----+----+-----+----+
| void Tango::DbServerData::remove   | (   |    | )   |    |
+------------------------------------+-----+----+-----+----+

Remove device server database configuration from default
`Tango <../../de/ddf/namespaceTango.html>`__ host.

Remove the device server process database configuration from the
database specified by the environment variable TANGO\_HOST

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
