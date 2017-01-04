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
members <../../d7/d90/classlog4tango_1_1threading_1_1ScopedLock-members.html>`__

log4tango::threading::ScopedLock Class Reference

``#include "MSThreads.hh"``

Public Member Functions
-----------------------

 

`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#a3c6e5abbb0fada2b3ea6432bd19862dd>`__
(`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__ &m)

 

 

`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__
(`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__
&mutex)

 

 

`~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__
()

 

 

`~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__
()

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----------+-- |                                      |
| ---+----+                            |                                      |
| | log4tango::threading::ScopedLock:: |                                      |
| ScopedLock   | (   | `Mutex <../../d |                                      |
| 8/d70/classlog4tango_1_1threading_1_ |                                      |
| 1Mutex.html>`__ &    | *mutex*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`log4tango::threading::Mutex::get\_critical\_section() <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | log4tango::threading::ScopedLock:: |                                      |
| ~ScopedLock   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+-------+-----+ |                                      |
| ----+                                |                                      |
| | log4tango::threading::ScopedLock:: |                                      |
| ScopedLock   | (   | `Mutex <../../d |                                      |
| 8/d70/classlog4tango_1_1threading_1_ |                                      |
| 1Mutex.html>`__ &    | *m*   | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+-------+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | log4tango::threading::ScopedLock:: |                                      |
| ~ScopedLock   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following files:

-  `MSThreads.hh <../../db/d37/MSThreads_8hh_source.html>`__
-  `PThreads.hh <../../d0/d6c/PThreads_8hh_source.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `threading <../../db/d10/namespacelog4tango_1_1threading.html>`__
-  `ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
