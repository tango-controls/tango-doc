+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `File List <../../files.html>`__
-  `File Members <../../globals.html>`__

`Classes <#nested-classes>`__ \| `Namespaces <#namespaces>`__ \|
`Macros <#define-members>`__

w\_attribute.h File Reference

| ``#include <tango.h>``
|  ``#include <tango/server/attrdesc.h>``
|  ``#include <functional>``
|  ``#include <time.h>``

Include dependency graph for w\_attribute.h:

|image1|

This graph shows which files directly or indirectly include this file:

|image2|

`Go to the source code of this
file. <../../df/da4/w__attribute_8h_source.html>`__

Classes
-------

class  

`Tango::WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__

 

| This class represents a writable attribute.
`More... <../../db/da8/classTango_1_1WAttribute.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`COMPUTE\_TIME\_DIFF <../../df/da4/w__attribute_8h.html#a7f9db7493b5ca2f9c2b7b18d118f2891>`__\ (RESULT,
BEFORE, AFTER)

 

Macro Definition Documentation
------------------------------

+-------------------------------+-----+-----+-----------+
| #define COMPUTE\_TIME\_DIFF   | (   |     | RESULT,   |
+-------------------------------+-----+-----+-----------+
|                               |     |     | BEFORE,   |
+-------------------------------+-----+-----+-----------+
|                               |     |     | AFTER     |
+-------------------------------+-----+-----+-----------+
|                               | )   |     |           |
+-------------------------------+-----+-----+-----------+

**Value:**

long bef = ((BEFORE.tv\_sec - 1095000000) \* 1000) + (BEFORE.tv\_usec /
1000); \\

long after = ((AFTER.tv\_sec - 1095000000) \* 1000) + (AFTER.tv\_usec /
1000); \\

RESULT = after - bef;

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `w\_attribute.h <../../df/da4/w__attribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d6/d85/w__attribute_8h__incl.png
.. |image2| image:: ../../da/d9e/w__attribute_8h__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
