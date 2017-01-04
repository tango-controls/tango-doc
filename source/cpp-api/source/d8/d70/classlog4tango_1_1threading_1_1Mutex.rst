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
members <../../db/d23/classlog4tango_1_1threading_1_1Mutex-members.html>`__

log4tango::threading::Mutex Class Reference

``#include "MSThreads.hh"``

Public Member Functions
-----------------------

 

`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__
()

 

 

`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__
()

 

 

`~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__
()

 

 

`~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__
()

 

LPCRITICAL\_SECTION 

`get\_critical\_section <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__
(void)

 

void 

`lock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a121bae8bb2ca8d412983fbb303441ed0>`__
()

 

void 

`unlock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a0689618bc67462cc3646e86de6b5f261>`__
()

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+----+-----+----+           |                                      |
| | log4tango::threading::Mutex::Mutex |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | log4tango::threading::Mutex::~Mute |                                      |
| x   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+----+-----+----+           |                                      |
| | log4tango::threading::Mutex::Mutex |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | log4tango::threading::Mutex::~Mute |                                      |
| x   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----+-----+---------+----+-----+---- |                                      |
| +                                    |                                      |
| | LPCRITICAL\_SECTION log4tango::thr |                                      |
| eading::Mutex::get\_critical\_sectio |                                      |
| n   | (   | void    |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+---------+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`log4tango::threading::ScopedLock::ScopedLock() <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | void log4tango::threading::Mutex:: |                                      |
| lock   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+---------+----+----- |                                      |
| +----+                               |                                      |
| | void log4tango::threading::Mutex:: |                                      |
| unlock   | (   | void    |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ---------+-----+---------+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following files:

-  `MSThreads.hh <../../db/d37/MSThreads_8hh_source.html>`__
-  `PThreads.hh <../../d0/d6c/PThreads_8hh_source.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `threading <../../db/d10/namespacelog4tango_1_1threading.html>`__
-  `Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
