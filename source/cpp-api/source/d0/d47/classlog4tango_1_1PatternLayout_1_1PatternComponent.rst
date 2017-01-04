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
members <../../df/d23/classlog4tango_1_1PatternLayout_1_1PatternComponent-members.html>`__

log4tango::PatternLayout::PatternComponent Class Referenceabstract

``#include "PatternLayout.hh"``

Inheritance diagram for log4tango::PatternLayout::PatternComponent:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual 

`~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__
()

 

virtual void 

`append <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__
(`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__
&out, const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)=0

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
| | virtual log4tango::PatternLayout:: |                                      |
| PatternComponent::~PatternComponent  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| --------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| | virtual void log4tango::PatternLay |                                      |
| out::PatternComponent::append   | (  |                                      |
|   | `std::ostringstream <../../d7/d2 |                                      |
| 4/classstd_1_1ostringstream.html>`__ |                                      |
|  &          | *out*,     |           |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| |                                    |                                      |
|                                 |    |                                      |
|   | const `LoggingEvent <../../d8/df |                                      |
| 2/structlog4tango_1_1LoggingEvent.ht |                                      |
| ml>`__ &    | *event*    |           |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| |                                    |                                      |
|                                 | )  |                                      |
|   |                                  |                                      |
|                                      |                                      |
|             |            |           |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implemented in
`log4tango::FormatModifierComponent <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#a329cbcce277ab538adef53348659d6ea>`__,
`log4tango::MillisSinceEpochComponent <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html#aa27fd154cf9ab295aaa7f4b81f60a182>`__,
`log4tango::SecondsSinceEpochComponent <../../d9/d60/structlog4tango_1_1SecondsSinceEpochComponent.html#a46c1589b9cdf01c52ad6c06b1582da3d>`__,
`log4tango::TimeStampComponent <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#ab2f54131358eda0f2d767b8994152e8e>`__,
`log4tango::ProcessorTimeComponent <../../d2/d11/structlog4tango_1_1ProcessorTimeComponent.html#a9000959b4f9cdd03d70fbc209ec93834>`__,
`log4tango::ThreadIdComponent <../../d6/dc1/structlog4tango_1_1ThreadIdComponent.html#a0192fdb9edfe7f75c19a4858a2591f14>`__,
`log4tango::ThreadNameComponent <../../d5/d69/structlog4tango_1_1ThreadNameComponent.html#af32e54b0c20fea4f78e3e4c1c236bac0>`__,
`log4tango::LevelComponent <../../d4/d71/structlog4tango_1_1LevelComponent.html#a66b5059085fd0f76a3f68d8add4a2a3a>`__,
`log4tango::MessageComponent <../../d0/d7e/structlog4tango_1_1MessageComponent.html#adf2fe22be864a42f228d64d0a5ac003b>`__,
`log4tango::LoggerNameComponent <../../de/d8d/structlog4tango_1_1LoggerNameComponent.html#a301d9825a65b8c88bdc2e2f00d73698a>`__,
and
`log4tango::StringLiteralComponent <../../d2/db7/structlog4tango_1_1StringLiteralComponent.html#a155b6ef4d8cb820c28a916c7f73cf9bb>`__.

Referenced by
`log4tango::FormatModifierComponent::append() <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html#a329cbcce277ab538adef53348659d6ea>`__.

--------------

The documentation for this class was generated from the following file:

-  `PatternLayout.hh <../../df/d8c/PatternLayout_8hh_source.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__
-  `PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d8/db7/classlog4tango_1_1PatternLayout_1_1PatternComponent__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
