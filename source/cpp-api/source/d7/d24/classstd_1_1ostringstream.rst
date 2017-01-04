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
members <../../d5/d01/classstd_1_1ostringstream-members.html>`__

std::ostringstream Class Reference

``#include "Portability.hh"``

Inheritance diagram for std::ostringstream:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for std::ostringstream:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

std::string 

`str <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__
()

 

void 

`str <../../d7/d24/classstd_1_1ostringstream.html#a4f56312d6490032bc9b6aa73d53df0af>`__
(const char \*)

 

Member Function Documentation
-----------------------------

+---------------------------------------+-----+----+-----+----+
| std::string std::ostringstream::str   | (   |    | )   |    |
+---------------------------------------+-----+----+-----+----+

Referenced by
`log4tango::TimeStampComponent::append() <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#ab2f54131358eda0f2d767b8994152e8e>`__,
`log4tango::FormatModifierComponent::append() <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#a329cbcce277ab538adef53348659d6ea>`__,
`log4tango::LoggerStream::flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__,
`log4tango::Layout::format() <../../d7/da6/classlog4tango_1_1Layout.html#a0ade719b2ab1ce512aca5699f136eb8b>`__,
`log4tango::PatternLayout::format() <../../db/d60/classlog4tango_1_1PatternLayout.html#a127f7708ad24a3290d3c6cbe29257020>`__,
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__,
and
`log4tango::PatternLayout::set\_conversion\_pattern() <../../db/d60/classlog4tango_1_1PatternLayout.html#a0a893fc5d34dad85771c45cd081c932b>`__.

+--------------------------------+-----+------------------+-------+-----+----+
| void std::ostringstream::str   | (   | const char \*    | *s*   | )   |    |
+--------------------------------+-----+------------------+-------+-----+----+

--------------

The documentation for this class was generated from the following files:

-  `Portability.hh <../../da/dd8/Portability_8hh_source.html>`__
-  `PortabilityImpl.cpp <../../db/df6/PortabilityImpl_8cpp.html>`__

-  `std <../../d8/dcc/namespacestd.html>`__
-  `ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../da/da4/classstd_1_1ostringstream__inherit__graph.png
.. |Collaboration graph| image:: ../../d9/d30/classstd_1_1ostringstream__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
