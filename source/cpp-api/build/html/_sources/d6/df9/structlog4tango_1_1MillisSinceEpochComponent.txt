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
members <../../d4/d8e/structlog4tango_1_1MillisSinceEpochComponent-members.html>`__

log4tango::MillisSinceEpochComponent Struct Reference

Inheritance diagram for log4tango::MillisSinceEpochComponent:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::MillisSinceEpochComponent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual void 

`append <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html#aa27fd154cf9ab295aaa7f4b81f60a182>`__
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
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| | virtual void log4tango::MillisSinc |                                      |
| eEpochComponent::append   | (   | `s |                                      |
| td::ostringstream <../../d7/d24/clas |                                      |
| sstd_1_1ostringstream.html>`__ &     |                                      |
|       | *out*,     |                 |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| |                                    |                                      |
|                           |     | co |                                      |
| nst `LoggingEvent <../../d8/df2/stru |                                      |
| ctlog4tango_1_1LoggingEvent.html>`__ |                                      |
|  &    | *event*    |                 |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| |                                    |                                      |
|                           | )   |    |                                      |
|                                      |                                      |
|                                      |                                      |
|       |            |                 |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__.

References
`log4tango::TimeStamp::get\_milliseconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__,
`log4tango::TimeStamp::get\_seconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a94972a4ed5baac6f19536289ad12a890>`__,
and
`log4tango::TimeStamp::get\_start\_time() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a8aff592396c6987d1b0008fd7308346a>`__.

--------------

The documentation for this struct was generated from the following file:

-  `PatternLayout.cpp <../../d6/d13/PatternLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `MillisSinceEpochComponent <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d9/dac/structlog4tango_1_1MillisSinceEpochComponent__inherit__graph.png
.. |Collaboration graph| image:: ../../d9/d38/structlog4tango_1_1MillisSinceEpochComponent__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
