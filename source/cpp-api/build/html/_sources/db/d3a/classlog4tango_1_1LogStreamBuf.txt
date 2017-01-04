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

`Public Member Functions <#pub-methods>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `Friends <#friends>`__ \| `List of all
members <../../d6/ded/classlog4tango_1_1LogStreamBuf-members.html>`__

log4tango::LogStreamBuf Class Reference

``#include "LogStreambuf.hh"``

Inheritance diagram for log4tango::LogStreamBuf:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::LogStreamBuf:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#a3d3bf3a4ff2e95b8767ad2d49826ae47>`__
(`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ \*logger,
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, bool filter=true, size\_t
bsize=\ `kDEFAULT\_BUFFER\_SIZE <../../d7/dff/LogStreambuf_8hh.html#a17303732aa74827e074fb65d980902af>`__)

 

virtual 

`~LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#a818fd0a949e1cebc7f4f8217621e71c8>`__
()

 

Protected Member Functions
--------------------------

virtual int 

`sync <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#a82692bb5af1c37e3a73079de23f5308e>`__
(void)

 

virtual std::streamsize 

`xsputn <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#a24ee38a6bb7e46f4cfe1b23ee4893f80>`__
(const char \*, std::streamsize)

 

Friends
-------

class 

`LogStream <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#aabe1238b9c317325110868340635ff1f>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+
| log4tango::LogStreamBuf::LogStreamBuf   | (   | `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ \*                                        | *logger*,                             |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+
|                                         |     | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*,                              |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+
|                                         |     | bool                                                                                              | *filter* = ``true``,                  |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+
|                                         |     | size\_t                                                                                           | *bsize* = ``kDEFAULT_BUFFER_SIZE``    |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+
|                                         | )   |                                                                                                   |                                       |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual log4tango::LogStreamBuf::~ |                                      |
| LogStreamBuf   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedvirtual                     |
| ----------+-----+---------+----+---- |                                      |
| -+----+                              |                                      |
| | virtual int log4tango::LogStreamBu |                                      |
| f::sync   | (   | void    |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedvirtual                     |
| ------------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
| | virtual std::streamsize log4tango: |                                      |
| :LogStreamBuf::xsputn   | (   | cons |                                      |
| t char \*      | ,   |               |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
| |                                    |                                      |
|                         |     | std: |                                      |
| :streamsize    |     |               |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
| |                                    |                                      |
|                         | )   |      |                                      |
|                |     |               |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------------------------------ |                                      |
| -------+                             |                                      |
| | friend class `LogStream <../../d7/ |                                      |
| dff/classlog4tango_1_1LogStream.html |                                      |
| >`__   |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `LogStreambuf.hh <../../d7/dff/LogStreambuf_8hh_source.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d4/d10/classlog4tango_1_1LogStreamBuf__inherit__graph.png
.. |Collaboration graph| image:: ../../d3/db6/classlog4tango_1_1LogStreamBuf__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
