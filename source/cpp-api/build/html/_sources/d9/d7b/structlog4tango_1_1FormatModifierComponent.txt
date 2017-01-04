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
members <../../da/da6/structlog4tango_1_1FormatModifierComponent-members.html>`__

log4tango::FormatModifierComponent Struct Reference

Inheritance diagram for log4tango::FormatModifierComponent:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::FormatModifierComponent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`FormatModifierComponent <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#aedc2d692777fb6371bd70aff1a6c5c84>`__
(`PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__
\*component, int minWidth, int maxWidth)

 

virtual 

`~FormatModifierComponent <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#ae37a1f9a1a7ac6c7d5b11ec578a1bb16>`__
()

 

virtual void 

`append <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#a329cbcce277ab538adef53348659d6ea>`__
(`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__
&out, const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

|-| Public Member Functions inherited from
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__

virtual 

`~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__
()

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------------+-----+- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| | log4tango::FormatModifierComponent |                                      |
| ::FormatModifierComponent   | (   |  |                                      |
| `PatternLayout::PatternComponent <.. |                                      |
| /../d0/d47/classlog4tango_1_1Pattern |                                      |
| Layout_1_1PatternComponent.html>`__  |                                      |
| \*    | *component*,   |             |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                             |     |  |                                      |
| int                                  |                                      |
|                                      |                                      |
|                                      |                                      |
|       | *minWidth*,    |             |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                             |     |  |                                      |
| int                                  |                                      |
|                                      |                                      |
|                                      |                                      |
|       | *maxWidth*     |             |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                             | )   |  |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|       |                |             |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| -+-----+----+-----+----+             |                                      |
| | virtual log4tango::FormatModifierC |                                      |
| omponent::~FormatModifierComponent   |                                      |
|  | (   |    | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -+-----+----+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+------------+                   |                                      |
| | virtual void log4tango::FormatModi |                                      |
| fierComponent::append   | (   | `std |                                      |
| ::ostringstream <../../d7/d24/classs |                                      |
| td_1_1ostringstream.html>`__ &       |                                      |
|     | *out*,     |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+------------+                   |                                      |
| |                                    |                                      |
|                         |     | cons |                                      |
| t `LoggingEvent <../../d8/df2/struct |                                      |
| log4tango_1_1LoggingEvent.html>`__ & |                                      |
|     | *event*    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+------------+                   |                                      |
| |                                    |                                      |
|                         | )   |      |                                      |
|                                      |                                      |
|                                      |                                      |
|     |            |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+------------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__.

References
`log4tango::PatternLayout::PatternComponent::append() <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__,
and
`std::ostringstream::str() <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__.

--------------

The documentation for this struct was generated from the following file:

-  `PatternLayout.cpp <../../d6/d13/PatternLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `FormatModifierComponent <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d2/d76/structlog4tango_1_1FormatModifierComponent__inherit__graph.png
.. |Collaboration graph| image:: ../../d5/d09/structlog4tango_1_1FormatModifierComponent__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
