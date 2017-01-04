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
members <../../d0/d68/classTango_1_1UserDefaultFwdAttrProp-members.html>`__

Tango::UserDefaultFwdAttrProp Class Reference

`Server classes <../../da/d64/group__Server.html>`__

User class to set forwarded attribute default properties.
`More... <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#details>`__

Public Member Functions
-----------------------

Constructor

Only one constructor is defined for this class

 

`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a1f9555dc9376f0ac86399164ae6be529>`__
()

 

| Constructs a newly allocated
`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__
object. `More... <#a1f9555dc9376f0ac86399164ae6be529>`__

 

Set default property methods

void 

`set\_label <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a83a156838771e7aac685e7e3c1a89fd3>`__
(const string &def\_label)

 

| Set default label property.
`More... <#a83a156838771e7aac685e7e3c1a89fd3>`__

 

Detailed Description
--------------------

User class to set forwarded attribute default properties.

This class is used to set forwarded attribute default properties. Three
levels of attributes properties setting are implemented within
`Tango <../../de/ddf/namespaceTango.html>`__. The highest property
setting level is the database. Then the user default (set using this
`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__
class) and finally a `Tango <../../de/ddf/namespaceTango.html>`__
library default value

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
| | Tango::UserDefaultFwdAttrProp::Use |                                      |
| rDefaultFwdAttrProp   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__
object.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+-------------- |                                      |
| -----+----------------+-----+----+   |                                      |
| | void Tango::UserDefaultFwdAttrProp |                                      |
| ::set\_label   | (   | const string  |                                      |
| &    | *def\_label*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| -----+----------------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set default label property.

Parameters
    +--------------+-----------------------------------+
    | def\_label   | The user default label property   |
    +--------------+-----------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `fwdattrdesc.h <../../d8/d3c/fwdattrdesc_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
