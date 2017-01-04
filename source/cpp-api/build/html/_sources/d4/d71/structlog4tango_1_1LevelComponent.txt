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
members <../../d3/df2/structlog4tango_1_1LevelComponent-members.html>`__

log4tango::LevelComponent Struct Reference

Inheritance diagram for log4tango::LevelComponent:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::LevelComponent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual void 

`append <../../d4/d71/structlog4tango_1_1LevelComponent.html#a66b5059085fd0f76a3f68d8add4a2a3a>`__
(`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__
&out, const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

|-| Public Member Functions inherited from
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__

virtual 

`~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__
()

 

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| --------+                            |                                      |
| | virtual void log4tango::LevelCompo |                                      |
| nent::append   | (   | `std::ostring |                                      |
| stream <../../d7/d24/classstd_1_1ost |                                      |
| ringstream.html>`__ &          | *ou |                                      |
| t*,     |                            |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|                |     | const `Loggin |                                      |
| gEvent <../../d8/df2/structlog4tango |                                      |
| _1_1LoggingEvent.html>`__ &    | *ev |                                      |
| ent*    |                            |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|                | )   |               |                                      |
|                                      |                                      |
|                                |     |                                      |
|         |                            |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__.

References
`log4tango::Level::get\_name() <../../d8/d0e/classlog4tango_1_1Level.html#a613426ab63e991eed00912c0dfd870c0>`__,
and
`log4tango::LoggingEvent::level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__.

--------------

The documentation for this struct was generated from the following file:

-  `PatternLayout.cpp <../../d6/d13/PatternLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `LevelComponent <../../d4/d71/structlog4tango_1_1LevelComponent.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d2/d8d/structlog4tango_1_1LevelComponent__inherit__graph.png
.. |Collaboration graph| image:: ../../dd/d49/structlog4tango_1_1LevelComponent__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
