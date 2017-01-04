+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Namespace List <../../namespaces.html>`__
-  `Namespace Members <../../namespacemembers.html>`__

`Classes <#nested-classes>`__ \| `Typedefs <#typedef-members>`__ \|
`Functions <#func-members>`__

log4tango::threading Namespace Reference

Classes
-------

class  

`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__

 

class  

`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__

 

class  

`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__

 

Typedefs
--------

typedef int 

`Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__

 

typedef int 

`ScopedLock <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__

 

Functions
---------

std::string 

`get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__
(void)

 

long 

`thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__
(void)

 

Typedef Documentation
---------------------

+--------------------------------------------------------------------------------------------------------+
| typedef int `log4tango::threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__   |
+--------------------------------------------------------------------------------------------------------+

+------------------------------------------------------------------------------------------------------------------+
| typedef int `log4tango::threading::ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__   |
+------------------------------------------------------------------------------------------------------------------+

Function Documentation
----------------------

+-----------------------------------------------------+-----+---------+----+-----+----+
| std::string log4tango::threading::get\_thread\_id   | (   | void    |    | )   |    |
+-----------------------------------------------------+-----+---------+----+-----+----+

Referenced by
`log4tango::XMLLayout::format() <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__.

+-----------------------------------------+-----+---------+----+-----+----+
| long log4tango::threading::thread\_id   | (   | void    |    | )   |    |
+-----------------------------------------+-----+---------+----+-----+----+

Referenced by
`log4tango::LoggingEvent::LoggingEvent() <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a5508a7ec66fe15b218370660fbe80523>`__.

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `threading <../../db/d10/namespacelog4tango_1_1threading.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
