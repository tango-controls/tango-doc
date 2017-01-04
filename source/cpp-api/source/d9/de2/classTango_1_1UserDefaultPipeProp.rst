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
members <../../da/dbf/classTango_1_1UserDefaultPipeProp-members.html>`__

Tango::UserDefaultPipeProp Class Reference

`Server classes <../../da/d64/group__Server.html>`__

User class to set pipe default properties.
`More... <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#details>`__

Public Member Functions
-----------------------

Constructor

Only one constructor is defined for this class

 

`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a82e93031702a5358117b85ec41e3b09c>`__
()

 

| Constructs a newly allocated
`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
object. `More... <#a82e93031702a5358117b85ec41e3b09c>`__

 

Set default property methods

void 

`set\_label <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a907036fa8c1fa267cc15ea8699eadfd1>`__
(const string &def\_label)

 

| Set default label property.
`More... <#a907036fa8c1fa267cc15ea8699eadfd1>`__

 

void 

`set\_description <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#aab0829fe22ca5e105e6168f4e3e9888b>`__
(const string &def\_desc)

 

| Set default description property.
`More... <#aab0829fe22ca5e105e6168f4e3e9888b>`__

 

Detailed Description
--------------------

User class to set pipe default properties.

This class is used to set pipe default properties. Three levels of pipes
properties setting are implemented within
`Tango <../../de/ddf/namespaceTango.html>`__. The highest property
setting level is the database. Then the user default (set using this
`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
class) and finally a `Tango <../../de/ddf/namespaceTango.html>`__
library default value

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | Tango::UserDefaultPipeProp::UserDe |                                      |
| faultPipeProp   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
object.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
| | void Tango::UserDefaultPipeProp::s |                                      |
| et\_description   | (   | const stri |                                      |
| ng &    | *def\_desc*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set default description property.

Parameters
    +-------------+-----------------------------------------+
    | def\_desc   | The user default description property   |
    +-------------+-----------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----------------- |                                      |
| --+----------------+-----+----+      |                                      |
| | void Tango::UserDefaultPipeProp::s |                                      |
| et\_label   | (   | const string &   |                                      |
|   | *def\_label*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| --+----------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set default label property.

Parameters
    +--------------+-----------------------------------+
    | def\_label   | The user default label property   |
    +--------------+-----------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `pipedesc.h <../../da/dea/pipedesc_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
