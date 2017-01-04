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
members <../../d3/d7e/classlog4tango_1_1XMLLayout-members.html>`__

log4tango::XMLLayout Class Reference

`XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ is a
simple fixed format
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ implementation.
`More... <../../d2/d7c/classlog4tango_1_1XMLLayout.html#details>`__

``#include "XmlLayout.hh"``

Inheritance diagram for log4tango::XMLLayout:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::XMLLayout:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a27faf76c0e6a9c82b18e50fdb305421d>`__
()

 

| Ctor. `More... <#a27faf76c0e6a9c82b18e50fdb305421d>`__

 

virtual 

`~XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a89c2134f5e03dc2e62b16f490bd38ede>`__
()

 

| Dtor. `More... <#a89c2134f5e03dc2e62b16f490bd38ede>`__

 

virtual std::string 

`format <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Formats the
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ in
XML. `More... <#a0f455c8af4768383dc989923eddc72f3>`__

 

|-| Public Member Functions inherited from
`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

 

`Layout <../../d7/da6/classlog4tango_1_1Layout.html#a053084d0c22a45a3304a75f7b0c5de39>`__
()

 

| Constructor for
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__.
`More... <#a053084d0c22a45a3304a75f7b0c5de39>`__

 

virtual 

`~Layout <../../d7/da6/classlog4tango_1_1Layout.html#ae3298877b40a255b5723a6cfa58e00ea>`__
()

 

| Destructor for
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__.
`More... <#ae3298877b40a255b5723a6cfa58e00ea>`__

 

Detailed Description
--------------------

`XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ is a
simple fixed format
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ implementation.

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------+-----+----+-----+----+
| log4tango::XMLLayout::XMLLayout   | (   |    | )   |    |
+-----------------------------------+-----+----+-----+----+

Ctor.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -+-----+----+-----+----+             |                                      |
| | log4tango::XMLLayout::~XMLLayout   |                                      |
|  | (   |    | )   |    |             |                                      |
| +----------------------------------- |                                      |
| -+-----+----+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Dtor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| -+-----+----+                        |                                      |
| | std::string log4tango::XMLLayout:: |                                      |
| format   | (   | const `LoggingEvent |                                      |
|  <../../d8/df2/structlog4tango_1_1Lo |                                      |
| ggingEvent.html>`__ &    | *event*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Formats the
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ in
XML.

Reimplemented from
`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html#a0ade719b2ab1ce512aca5699f136eb8b>`__.

References
`log4tango::Level::get\_name() <../../d8/d0e/classlog4tango_1_1Level.html#a613426ab63e991eed00912c0dfd870c0>`__,
`log4tango::threading::get\_thread\_id() <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__,
`log4tango::LoggingEvent::level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__,
`log4tango::LoggingEvent::logger\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#af3e2d7c25fb876601d7a009cfef40905>`__,
and
`log4tango::LoggingEvent::message <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__.

--------------

The documentation for this class was generated from the following files:

-  `XmlLayout.hh <../../d3/d7f/XmlLayout_8hh_source.html>`__
-  `XmlLayout.cpp <../../d4/d66/XmlLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../da/da7/classlog4tango_1_1XMLLayout__inherit__graph.png
.. |Collaboration graph| image:: ../../d2/de4/classlog4tango_1_1XMLLayout__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
