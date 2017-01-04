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

`Public Member Functions <#pub-methods>`__ \| `Static Public
Attributes <#pub-static-attribs>`__ \| `List of all
members <../../d8/dba/structlog4tango_1_1TimeStampComponent-members.html>`__

log4tango::TimeStampComponent Struct Reference

Inheritance diagram for log4tango::TimeStampComponent:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::TimeStampComponent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`TimeStampComponent <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a165f177f73788eaa319cf3f61cdb6516>`__
(std::string timeFormat)

 

virtual void 

`append <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#ab2f54131358eda0f2d767b8994152e8e>`__
(`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__
&out, const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

|-| Public Member Functions inherited from
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__

virtual 

`~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__
()

 

Static Public Attributes
------------------------

static const char \*const 

`FORMAT\_ABSOLUTE <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a0317edb0f793205fc7c39e6609fc1279>`__
= "%H:%M:%S,%l"

 

static const char \*const 

`FORMAT\_DATE <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#afae617926ec5bc952e25c2b4968f1fcf>`__
= "%d %b %Y %H:%M:%S,%l"

 

static const char \*const 

`FORMAT\_ISO8601 <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a1c5e53d1bd2ddf4b8212fc8d5ca45d5d>`__
= "%Y-%m-%d %H:%M:%S,%l"

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----------- |                                      |
| -----+----------------+-----+----+   |                                      |
| | log4tango::TimeStampComponent::Tim |                                      |
| eStampComponent   | (   | std::strin |                                      |
| g    | *timeFormat*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| -----+----------------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`FORMAT\_ABSOLUTE <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a0317edb0f793205fc7c39e6609fc1279>`__,
`FORMAT\_DATE <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#afae617926ec5bc952e25c2b4968f1fcf>`__,
and
`FORMAT\_ISO8601 <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a1c5e53d1bd2ddf4b8212fc8d5ca45d5d>`__.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| ------------+                        |                                      |
| | virtual void log4tango::TimeStampC |                                      |
| omponent::append   | (   | `std::ost |                                      |
| ringstream <../../d7/d24/classstd_1_ |                                      |
| 1ostringstream.html>`__ &          | |                                      |
|  *out*,     |                        |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|                    |     | const `Lo |                                      |
| ggingEvent <../../d8/df2/structlog4t |                                      |
| ango_1_1LoggingEvent.html>`__ &    | |                                      |
|  *event*    |                        |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|                    | )   |           |                                      |
|                                      |                                      |
|                                    | |                                      |
|             |                        |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#afb25822922b51144361faff5d6cdeaa8>`__.

References
`std::ostringstream::str() <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| ---------------+                     |                                      |
| | const char \*const log4tango::Time |                                      |
| StampComponent::FORMAT\_ABSOLUTE = " |                                      |
| %H:%M:%S,%l"   |                     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`TimeStampComponent() <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a165f177f73788eaa319cf3f61cdb6516>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | const char \*const log4tango::Time |                                      |
| StampComponent::FORMAT\_DATE = "%d % |                                      |
| b %Y %H:%M:%S,%l"   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`TimeStampComponent() <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a165f177f73788eaa319cf3f61cdb6516>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
| | const char \*const log4tango::Time |                                      |
| StampComponent::FORMAT\_ISO8601 = "% |                                      |
| Y-%m-%d %H:%M:%S,%l"   |             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`TimeStampComponent() <../../db/ddd/structlog4tango_1_1TimeStampComponent.html#a165f177f73788eaa319cf3f61cdb6516>`__.

--------------

The documentation for this struct was generated from the following file:

-  `PatternLayout.cpp <../../d6/d13/PatternLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `TimeStampComponent <../../db/ddd/structlog4tango_1_1TimeStampComponent.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d1/d65/structlog4tango_1_1TimeStampComponent__inherit__graph.png
.. |Collaboration graph| image:: ../../d7/d9b/structlog4tango_1_1TimeStampComponent__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
