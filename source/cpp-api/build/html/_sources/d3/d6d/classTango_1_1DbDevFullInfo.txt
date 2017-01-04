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

`Public Attributes <#pub-attribs>`__ \| `List of all
members <../../df/d99/classTango_1_1DbDevFullInfo-members.html>`__

Tango::DbDevFullInfo Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

Device information from the database.
`More... <../../d3/d6d/classTango_1_1DbDevFullInfo.html#details>`__

Inheritance diagram for Tango::DbDevFullInfo:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DbDevFullInfo:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

string 

`class\_name <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a3658e97139f19989ae047ff9b15b2212>`__

 

| The device class name.
`More... <#a3658e97139f19989ae047ff9b15b2212>`__

 

string 

`ds\_full\_name <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a85c4fbc78980374147ae1e3ede672f8c>`__

 

| The full device server process name.
`More... <#a85c4fbc78980374147ae1e3ede672f8c>`__

 

string 

`host <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a6a4d6321daaa58dc575e230267347473>`__

 

| The host name where the device server process is running.
`More... <#a6a4d6321daaa58dc575e230267347473>`__

 

long 

`pid <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a88cc31cdd59f77d84583f497e0d8a5c3>`__

 

| The device server process PID (-1 if not set in DB)
`More... <#a88cc31cdd59f77d84583f497e0d8a5c3>`__

 

string 

`started\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#aadfba1d0368c960d7f29997c6397f46e>`__

 

| Date of the last device export (empty if not set in DB)
`More... <#aadfba1d0368c960d7f29997c6397f46e>`__

 

string 

`stopped\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a08478bed60290351915a3d7f068389a3>`__

 

| Date of the last device un-export (empty if not set in DB)
`More... <#a08478bed60290351915a3d7f068389a3>`__

 

|-| Public Attributes inherited from
`Tango::DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

long 

`exported <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a2a799d0bf486fecb4df770af69c71bd9>`__

 

| The exported flag. `More... <#a2a799d0bf486fecb4df770af69c71bd9>`__

 

string 

`ior <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a5d22c1daf5d2d97fcb5939db4224ca07>`__

 

| The device IOR. `More... <#a5d22c1daf5d2d97fcb5939db4224ca07>`__

 

string 

`name <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a885165239e268932e47bfd5a8cfdaaef>`__

 

| The device name. `More... <#a885165239e268932e47bfd5a8cfdaaef>`__

 

string 

`version <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a29cc919c256c62429416b56137bb1161>`__

 

| The device version (as a string)
`More... <#a29cc919c256c62429416b56137bb1161>`__

 

Detailed Description
--------------------

Device information from the database.

Member Data Documentation
-------------------------

+--------------------------------------------+
| string Tango::DbDevFullInfo::class\_name   |
+--------------------------------------------+

The device class name.

+-----------------------------------------------+
| string Tango::DbDevFullInfo::ds\_full\_name   |
+-----------------------------------------------+

The full device server process name.

+-------------------------------------+
| string Tango::DbDevFullInfo::host   |
+-------------------------------------+

The host name where the device server process is running.

+----------------------------------+
| long Tango::DbDevFullInfo::pid   |
+----------------------------------+

The device server process PID (-1 if not set in DB)

+----------------------------------------------+
| string Tango::DbDevFullInfo::started\_date   |
+----------------------------------------------+

Date of the last device export (empty if not set in DB)

+----------------------------------------------+
| string Tango::DbDevFullInfo::stopped\_date   |
+----------------------------------------------+

Date of the last device un-export (empty if not set in DB)

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbDevFullInfo <../../d3/d6d/classTango_1_1DbDevFullInfo.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d8/d2f/classTango_1_1DbDevFullInfo__inherit__graph.png
.. |Collaboration graph| image:: ../../d7/d68/classTango_1_1DbDevFullInfo__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
