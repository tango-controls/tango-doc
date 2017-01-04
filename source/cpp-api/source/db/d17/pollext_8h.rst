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

pollext.h File Reference

| ``#include <tango.h>``

Include dependency graph for pollext.h:

|image1|

This graph shows which files directly or indirectly include this file:

|image2|

`Go to the source code of this
file. <../../db/d17/pollext_8h_source.html>`__

Classes
-------

class  

`Tango::AttrData< T > <../../d4/d7a/classTango_1_1AttrData.html>`__

 

class  

`Tango::AttrHistoryStack< T
> <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__

 

| This class is a used to pass an attribute value history when the user
directly fills the attribute polling buffer.
`More... <../../d0/dcb/classTango_1_1AttrHistoryStack.html#details>`__

 

class  

`Tango::CmdHistoryStack< T
> <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__

 

| This class is a used to pass a command result history when the user
directly fills the command polling buffer.
`More... <../../dc/d8f/classTango_1_1CmdHistoryStack.html#details>`__

 

class  

`Tango::TimedAttrData< T
> <../../da/d12/classTango_1_1TimedAttrData.html>`__

 

| This class is used to store one element of an attribute history stack.
`More... <../../da/d12/classTango_1_1TimedAttrData.html#details>`__

 

class  

`Tango::TimedCmdData< T
> <../../df/db1/classTango_1_1TimedCmdData.html>`__

 

| This class is used to store one element of a command history stack.
`More... <../../df/db1/classTango_1_1TimedCmdData.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`\_\_CHECK\_DIM <../../db/d17/pollext_8h.html#a55ff6cf2d431f70c018dac5372bd3596>`__\ ()

 

#define 

`\_\_CHECK\_DIM\_X <../../db/d17/pollext_8h.html#a6f3bb473425819c00929ff64ab7c4b74>`__\ ()

 

Macro Definition Documentation
------------------------------

+--------------------------+-----+----+-----+----+
| #define \_\_CHECK\_DIM   | (   |    | )   |    |
+--------------------------+-----+----+-----+----+

**Value:**

if ((x == 0) \|\| (y == 0)) \\

{ \\

Except::throw\_exception((const char
\*)\ `API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__,
\\

(const char \*)"X or Y dimension cannot be 0 for image attribute", \\

(const char \*)"AttrData::AttrData"); \\

} \\

else \\

(void)0

`Tango::API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__

const char \*const API\_AttrOptProp

**Definition:** tango\_const.h:340

+-----------------------------+-----+----+-----+----+
| #define \_\_CHECK\_DIM\_X   | (   |    | )   |    |
+-----------------------------+-----+----+-----+----+

**Value:**

if (x == 0) \\

{ \\

Except::throw\_exception((const char
\*)\ `API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__,
\\

(const char \*)"X dimension cannot be 0 for spectrum or image
attribute", \\

(const char \*)"AttrData::AttrData"); \\

} \\

else \\

(void)0

`Tango::API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__

const char \*const API\_AttrOptProp

**Definition:** tango\_const.h:340

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `pollext.h <../../db/d17/pollext_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../dd/d78/pollext_8h__incl.png
.. |image2| image:: ../../d1/dc1/pollext_8h__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
