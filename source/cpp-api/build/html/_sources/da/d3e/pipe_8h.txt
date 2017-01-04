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
`Macros <#define-members>`__ \| `Functions <#func-members>`__

pipe.h File Reference

| ``#include <tango.h>``
|  ``#include <stdarg.h>``

Include dependency graph for pipe.h:

|image1|

`Go to the source code of this
file. <../../da/d3e/pipe_8h_source.html>`__

Classes
-------

class  

`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

 

| This class is a class representing a pipe in the TANGO device server
pattern. `More... <../../d8/d14/classTango_1_1Pipe.html#details>`__

 

struct  

`Tango::WantedPipe< A1, A2, R
> <../../dd/d06/structTango_1_1WantedPipe.html>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`PIPE\_CHECK\_PTR <../../da/d3e/pipe_8h.html#a137d9d2c4e4a865274b4fbbb0327cb4b>`__\ (A,
B, C)

 

Functions
---------

template<typename T >

Pipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__
(Pipe &, T &)

 

template<typename T >

Pipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a4dfaf860b31b94d93cbd40408e888c66>`__
(Pipe &, T \*)

 

template<typename T >

Pipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a689303d881e50f174c3e8b791df20a0b>`__
(Pipe &, DataElement< T > &)

 

Macro Definition Documentation
------------------------------

+----------------------------+-----+-----+------+
| #define PIPE\_CHECK\_PTR   | (   |     | A,   |
+----------------------------+-----+-----+------+
|                            |     |     | B,   |
+----------------------------+-----+-----+------+
|                            |     |     | C    |
+----------------------------+-----+-----+------+
|                            | )   |     |      |
+----------------------------+-----+-----+------+

**Value:**

if (A == NULL) \\

{ \\

stringstream o; \\

o << "Data pointer for pipe " << B << ", data element " << C << " is
NULL!"; \\

Except::throw\_exception(\ `API\_PipeOptProp <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__,o.str(),"Pipe::set\_value()");
\\

} \\

else \\

(void)0

`Tango::API\_PipeOptProp <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__

const char \*const API\_PipeOptProp

**Definition:** tango\_const.h:427

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `pipe.h <../../da/d3e/pipe_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d4/d0f/pipe_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
