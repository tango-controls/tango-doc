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

`Public Member Functions <#pub-methods>`__ \| `List of all
members <../../d3/d1c/classTango_1_1DbHistory-members.html>`__

Tango::DbHistory Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

Class used to retrieve database object history.
`More... <../../d3/d55/classTango_1_1DbHistory.html#details>`__

Public Member Functions
-----------------------

 

`DbHistory <../../d3/d55/classTango_1_1DbHistory.html#a3d4ba889f2f79659906ef989c4e16033>`__
(string, string, vector< string > &)

 

 

`DbHistory <../../d3/d55/classTango_1_1DbHistory.html#a4325dc938449fb06f09f680a834d7b46>`__
(string, string, string, vector< string > &)

 

string 

`get\_attribute\_name <../../d3/d55/classTango_1_1DbHistory.html#a0f532f6d49c60c914253c2bf419b8c0e>`__
()

 

| Get attribute name. `More... <#a0f532f6d49c60c914253c2bf419b8c0e>`__

 

string 

`get\_date <../../d3/d55/classTango_1_1DbHistory.html#a6fbe1f96e256cf130a6c7ad82de81f17>`__
()

 

| Get change date. `More... <#a6fbe1f96e256cf130a6c7ad82de81f17>`__

 

string 

`get\_name <../../d3/d55/classTango_1_1DbHistory.html#a80c1a81fae093feb44370c1a2d0796d1>`__
()

 

| Get property name. `More... <#a80c1a81fae093feb44370c1a2d0796d1>`__

 

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ 

`get\_value <../../d3/d55/classTango_1_1DbHistory.html#ab11812600a09b269cab0d419e01d075a>`__
()

 

| Get value. `More... <#ab11812600a09b269cab0d419e01d075a>`__

 

bool 

`is\_deleted <../../d3/d55/classTango_1_1DbHistory.html#a946c37f983f5d9dc5465a1e9e6ed2332>`__
()

 

| Get property deleted flag.
`More... <#a946c37f983f5d9dc5465a1e9e6ed2332>`__

 

Detailed Description
--------------------

Class used to retrieve database object history.

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------+-----+-----------------------+-----+
| Tango::DbHistory::DbHistory   | (   | string                | ,   |
+-------------------------------+-----+-----------------------+-----+
|                               |     | string                | ,   |
+-------------------------------+-----+-----------------------+-----+
|                               |     | vector< string > &    |     |
+-------------------------------+-----+-----------------------+-----+
|                               | )   |                       |     |
+-------------------------------+-----+-----------------------+-----+

+-------------------------------+-----+-----------------------+-----+
| Tango::DbHistory::DbHistory   | (   | string                | ,   |
+-------------------------------+-----+-----------------------+-----+
|                               |     | string                | ,   |
+-------------------------------+-----+-----------------------+-----+
|                               |     | string                | ,   |
+-------------------------------+-----+-----------------------+-----+
|                               |     | vector< string > &    |     |
+-------------------------------+-----+-----------------------+-----+
|                               | )   |                       |     |
+-------------------------------+-----+-----------------------+-----+

Member Function Documentation
-----------------------------

+-------------------------------------------------+-----+----+-----+----+
| string Tango::DbHistory::get\_attribute\_name   | (   |    | )   |    |
+-------------------------------------------------+-----+----+-----+----+

Get attribute name.

Returns
    The attribute name

+--------------------------------------+-----+----+-----+----+
| string Tango::DbHistory::get\_date   | (   |    | )   |    |
+--------------------------------------+-----+----+-----+----+

Get change date.

Returns
    The date

+--------------------------------------+-----+----+-----+----+
| string Tango::DbHistory::get\_name   | (   |    | )   |    |
+--------------------------------------+-----+----+-----+----+

Get property name.

Returns
    The property name

+--------------------------------------------------------------------------------------+-----+----+-----+----+
| `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ Tango::DbHistory::get\_value   | (   |    | )   |    |
+--------------------------------------------------------------------------------------+-----+----+-----+----+

Get value.

Returns
    The property value

+--------------------------------------+-----+----+-----+----+
| bool Tango::DbHistory::is\_deleted   | (   |    | )   |    |
+--------------------------------------+-----+----+-----+----+

Get property deleted flag.

Returns
    The property deleted flag

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
