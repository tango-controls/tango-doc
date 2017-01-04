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
members <../../d5/d8c/classTango_1_1NamedDevFailed-members.html>`__

Tango::NamedDevFailed Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

An exception class.
`More... <../../dc/d08/classTango_1_1NamedDevFailed.html#details>`__

Public Attributes
-----------------

DevErrorList 

`err\_stack <../../dc/d08/classTango_1_1NamedDevFailed.html#ab24a8e7c1a1a7b20e6361e85d5d4c20a>`__

 

| The error stack. `More... <#ab24a8e7c1a1a7b20e6361e85d5d4c20a>`__

 

long 

`idx\_in\_call <../../dc/d08/classTango_1_1NamedDevFailed.html#a74da251e8cc904dddd1f037fb12d0288>`__

 

| Index in the write\_attributes method parameter vector of the
attribute which failed. `More... <#a74da251e8cc904dddd1f037fb12d0288>`__

 

string 

`name <../../dc/d08/classTango_1_1NamedDevFailed.html#a721334d873251d8ee91fb1f0479f281b>`__

 

| The name of the attribute which fails.
`More... <#a721334d873251d8ee91fb1f0479f281b>`__

 

Detailed Description
--------------------

An exception class.

This class is used as exception for the DeviceProxy::write\_attribute
call()

$Author$ $Revision$

Member Data Documentation
-------------------------

+--------------------------------------------------+
| DevErrorList Tango::NamedDevFailed::err\_stack   |
+--------------------------------------------------+

The error stack.

+---------------------------------------------+
| long Tango::NamedDevFailed::idx\_in\_call   |
+---------------------------------------------+

Index in the write\_attributes method parameter vector of the attribute
which failed.

+--------------------------------------+
| string Tango::NamedDevFailed::name   |
+--------------------------------------+

The name of the attribute which fails.

--------------

The documentation for this class was generated from the following file:

-  `apiexcept.h <../../d3/d7a/apiexcept_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `NamedDevFailed <../../dc/d08/classTango_1_1NamedDevFailed.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
