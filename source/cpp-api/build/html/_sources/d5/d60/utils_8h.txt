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
`Functions <#func-members>`__

utils.h File Reference

| ``#include <tango.h>``
|  ``#include <tango/server/pollext.h>``
|  ``#include <tango/server/subdev_diag.h>``
|  ``#include <new>``
|  ``#include <tango/server/rootattreg.h>``
|  ``#include <tango/server/pollthread.h>``
|  ``#include <unistd.h>``

Include dependency graph for utils.h:

|image1|

`Go to the source code of this
file. <../../d5/d60/utils_8h_source.html>`__

Classes
-------

class  

`Tango::AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html>`__

 

class  

`Tango::CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html>`__

 

struct  

`Tango::DevDbUpd <../../d5/db2/structTango_1_1DevDbUpd.html>`__

 

class  

`Tango::Interceptors <../../d6/d62/classTango_1_1Interceptors.html>`__

 

struct  

`Tango::PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html>`__

 

class  

`Tango::PyData <../../d5/d7d/classTango_1_1PyData.html>`__

 

class  

`Tango::PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__

 

class  

`Tango::Util <../../d4/deb/classTango_1_1Util.html>`__

 

| This class is a used to store TANGO device server process data and to
provide the user with a set of utilities method.
`More... <../../d4/deb/classTango_1_1Util.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Functions
---------

long 

`Tango::\_convert\_tango\_lib\_release <../../de/ddf/namespaceTango.html#ad7ae390b6e548a26ff1b5cf3075ff577>`__
()

 

void 

`Tango::clear\_att\_dim <../../de/ddf/namespaceTango.html#adb1cc901df596cd8aea1e5d51f0cf6ac>`__
(Tango::AttributeValue\_3 &att\_val)

 

void 

`Tango::clear\_att\_dim <../../de/ddf/namespaceTango.html#a81b6f4ac7fbc8951b4ea9983a42ab7c8>`__
(Tango::AttributeValue\_4 &att\_val)

 

void 

`Tango::clear\_att\_dim <../../de/ddf/namespaceTango.html#a63d4a1bf19f45c384a1524f5f73162d7>`__
(Tango::AttributeValue\_5 &att\_val)

 

void 

`Tango::create\_PyPerThData <../../de/ddf/namespaceTango.html#a43fad155477a5f86d88574f1d8e2ac21>`__
(omni::omniInterceptors::createThread\_T::info\_T &)

 

CORBA::Any \* 

`Tango::return\_empty\_any <../../de/ddf/namespaceTango.html#a3b3bd64ad7f36f411ad17050d314a460>`__
(const char \*cmd)

 

| Create and return an empty CORBA Any object.
`More... <#a3b3bd64ad7f36f411ad17050d314a460>`__

 

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `utils.h <../../d5/d60/utils_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../db/d29/utils_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
