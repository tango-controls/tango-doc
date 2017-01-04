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

`Public Member Functions <#pub-methods>`__ \| `Protected
Attributes <#pro-attribs>`__ \| `List of all
members <../../d2/d5e/classlog4tango_1_1threading_1_1RecursiveMutex-members.html>`__

log4tango::threading::RecursiveMutex Class Reference

``#include "MSThreads.hh"``

Public Member Functions
-----------------------

 

`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(void)

 

 

`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(void)

 

 

`~RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__
(void)

 

 

`~RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__
(void)

 

int 

`lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__
(long timeout\_=0)

 

int 

`lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__
(long timeout\_=0)

 

void 

`unlock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__
(void)

 

void 

`unlock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__
(void)

 

void 

`unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__
(void)

 

void 

`unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__
(void)

 

Protected Attributes
--------------------

pthread\_mutex\_t 

`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a84a463cd8c14c629e9449a1ab16aecfb>`__

 

CRITICAL\_SECTION 

`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__

 

pthread\_cond\_t 

`mutex\_available\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#abafc328ab69204599821730c657c3cba>`__

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------+-----+-------- |                                      |
| -+----+-----+----+                   |                                      |
| | log4tango::threading::RecursiveMut |                                      |
| ex::RecursiveMutex   | (   | void    |                                      |
|  |    | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------+-----+------- |                                      |
| --+----+-----+----+                  |                                      |
| | log4tango::threading::RecursiveMut |                                      |
| ex::~RecursiveMutex   | (   | void   |                                      |
|   |    | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+------- |                                      |
| --+----+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__.

+--------------------------------------------------------+-----+---------+----+-----+----+
| log4tango::threading::RecursiveMutex::RecursiveMutex   | (   | void    |    | )   |    |
+--------------------------------------------------------+-----+---------+----+-----+----+

+---------------------------------------------------------+-----+---------+----+-----+----+
| log4tango::threading::RecursiveMutex::~RecursiveMutex   | (   | void    |    | )   |    |
+---------------------------------------------------------+-----+---------+----+-----+----+

Member Function Documentation
-----------------------------

+--------------------------------------------------+-----+---------+-----------------------+-----+----+
| int log4tango::threading::RecursiveMutex::lock   | (   | long    | *timeout\_* = ``0``   | )   |    |
+--------------------------------------------------+-----+---------+-----------------------+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+---------+---- |                                      |
| -------------------+-----+----+      |                                      |
| | int log4tango::threading::Recursiv |                                      |
| eMutex::lock   | (   | long    | *ti |                                      |
| meout\_* = ``0``   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+---------+---- |                                      |
| -------------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__.

Referenced by
`log4tango::LogStream::operator<<() <../../d7/dff/classlog4tango_1_1LogStream.html#a63227c36b86838d90f78b6afeacff5a1>`__.

+-----------------------------------------------------+-----+---------+----+-----+----+
| void log4tango::threading::RecursiveMutex::unlock   | (   | void    |    | )   |    |
+-----------------------------------------------------+-----+---------+----+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+---------+- |                                      |
| ---+-----+----+                      |                                      |
| | void log4tango::threading::Recursi |                                      |
| veMutex::unlock   | (   | void    |  |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+---------+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__.

+------------------------------------------------------+-----+---------+----+-----+----+
| void log4tango::threading::RecursiveMutex::unlockn   | (   | void    |    | )   |    |
+------------------------------------------------------+-----+---------+----+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+---------+ |                                      |
| ----+-----+----+                     |                                      |
| | void log4tango::threading::Recursi |                                      |
| veMutex::unlockn   | (   | void    | |                                      |
|     | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------+ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__.

Referenced by
`log4tango::LogStream::operator<<() <../../d7/dff/classlog4tango_1_1LogStream.html#ab46b78902a2d887f039c79239a4d4e43>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------------------------+    |                                      |
| | pthread\_mutex\_t log4tango::threa |                                      |
| ding::RecursiveMutex::guard\_   |    |                                      |
| +----------------------------------- |                                      |
| --------------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------------------------+    |                                      |
| | CRITICAL\_SECTION log4tango::threa |                                      |
| ding::RecursiveMutex::guard\_   |    |                                      |
| +----------------------------------- |                                      |
| --------------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`lock() <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__,
`RecursiveMutex() <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__,
`unlock() <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__,
`unlockn() <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__,
and
`~RecursiveMutex() <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------+                              |                                      |
| | pthread\_cond\_t log4tango::thread |                                      |
| ing::RecursiveMutex::mutex\_availabl |                                      |
| e\_   |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following files:

-  `MSThreads.hh <../../db/d37/MSThreads_8hh_source.html>`__
-  `PThreads.hh <../../d0/d6c/PThreads_8hh_source.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `threading <../../db/d10/namespacelog4tango_1_1threading.html>`__
-  `RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
