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

device.h File Reference

| ``#include <tango.h>``
|  ``#include <tango/server/blackbox.h>``
|  ``#include <tango/server/classattribute.h>``
|  ``#include <tango/server/classpipe.h>``
|  ``#include <tango/server/attrdesc.h>``
|  ``#include <tango/server/attribute.h>``
|  ``#include <tango/server/w_attribute.h>``
|  ``#include <tango/server/fwdattribute.h>``
|  ``#include <tango/server/multiattribute.h>``
|  ``#include <tango/server/pollobj.h>``
|  ``#include <tango/server/deviceclass.h>``
|  ``#include <tango/server/devintr.h>``
|  ``#include <tango/server/dintrthread.h>``

Include dependency graph for device.h:

|image1|

`Go to the source code of this
file. <../../db/de9/device_8h_source.html>`__

Classes
-------

class  

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

 

| Base class for all TANGO device.
`More... <../../d3/d62/classTango_1_1DeviceImpl.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`DATA\_IN\_NET\_OBJECT <../../db/de9/device_8h.html#ac89799415e9cd7a70591f72e48c58708>`__\ (A,
B, C, D, E)

 

#define 

`DATA\_IN\_OBJECT <../../db/de9/device_8h.html#a963d0fe11371931a236713f2d57114eb>`__\ (A,
B, C, D)

 

Macro Definition Documentation
------------------------------

+---------------------------------+-----+-----+------+
| #define DATA\_IN\_NET\_OBJECT   | (   |     | A,   |
+---------------------------------+-----+-----+------+
|                                 |     |     | B,   |
+---------------------------------+-----+-----+------+
|                                 |     |     | C,   |
+---------------------------------+-----+-----+------+
|                                 |     |     | D,   |
+---------------------------------+-----+-----+------+
|                                 |     |     | E    |
+---------------------------------+-----+-----+------+
|                                 | )   |     |      |
+---------------------------------+-----+-----+------+

+----------------------------+-----+-----+------+
| #define DATA\_IN\_OBJECT   | (   |     | A,   |
+----------------------------+-----+-----+------+
|                            |     |     | B,   |
+----------------------------+-----+-----+------+
|                            |     |     | C,   |
+----------------------------+-----+-----+------+
|                            |     |     | D    |
+----------------------------+-----+-----+------+
|                            | )   |     |      |
+----------------------------+-----+-----+------+

**Value:**

do \\

{ \\

Tango::A \*ptr = att.B(); \\

if (aid.data\_5 != Tango\_nullptr) \\

{ \\

(\*aid.data\_5)[index].value.D(C); \\

A &the\_seq = (\*aid.data\_5)[index].value.D(); \\

the\_seq.replace(ptr->length(),ptr->length(),ptr->get\_buffer(),ptr->release());
\\

if (ptr->release() == true) \\

ptr->get\_buffer(true); \\

} \\

else if (aid.data\_4 != Tango\_nullptr) \\

{ \\

(\*aid.data\_4)[index].value.D(C); \\

A &the\_seq = (\*aid.data\_4)[index].value.D(); \\

the\_seq.replace(ptr->length(),ptr->length(),ptr->get\_buffer(),ptr->release());
\\

if (ptr->release() == true) \\

ptr->get\_buffer(true); \\

} \\

else \\

{ \\

(\*aid.data\_3)[index].value <<= \*ptr; \\

} \\

\\

if (del\_seq == true) \\

delete ptr; \\

} \\

while (false)

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `device.h <../../db/de9/device_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d5/d97/device_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
