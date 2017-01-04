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

`Classes <#nested-classes>`__ \| `Public Member
Functions <#pub-methods>`__ \| `Static Public
Attributes <#pub-static-attribs>`__ \| `List of all
members <../../db/dd0/classlog4tango_1_1PatternLayout-members.html>`__

log4tango::PatternLayout Class Reference

``#include "PatternLayout.hh"``

Inheritance diagram for log4tango::PatternLayout:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::PatternLayout:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Classes
-------

class  

`PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__

 

Public Member Functions
-----------------------

 

`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html#a16f0799306962ff3fc4eeda8ca4d7e2b>`__
()

 

virtual 

`~PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html#a6a7d2df88df11eba3b9d800cbcbaf8f4>`__
()

 

virtual void 

`clear\_conversion\_pattern <../../db/d60/classlog4tango_1_1PatternLayout.html#a668d59b015305affebfbefef0cedb4b9>`__
()

 

virtual std::string 

`format <../../db/d60/classlog4tango_1_1PatternLayout.html#a127f7708ad24a3290d3c6cbe29257020>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Formats the
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ in
the style set by the set\_conversion\_pattern call.
`More... <#a127f7708ad24a3290d3c6cbe29257020>`__

 

virtual std::string 

`get\_conversion\_pattern <../../db/d60/classlog4tango_1_1PatternLayout.html#ae99540a294a8d2e3c230f11bc6ed82bc>`__
() const

 

virtual int 

`set\_conversion\_pattern <../../db/d60/classlog4tango_1_1PatternLayout.html#a0a893fc5d34dad85771c45cd081c932b>`__
(const std::string &conversionPattern)

 

| Sets the format of log lines handled by this
`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__.
`More... <#a0a893fc5d34dad85771c45cd081c932b>`__

 

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

 

Static Public Attributes
------------------------

static const char \* 

`BASIC\_CONVERSION\_PATTERN <../../db/d60/classlog4tango_1_1PatternLayout.html#a8d601a7465e1e7c5b83fc87a1a68cd37>`__
= "%R %p %c %m%n"

 

| A conversion pattern equivalent to the BasicLayout.
`More... <#a8d601a7465e1e7c5b83fc87a1a68cd37>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------------------+-----+----+-----+----+
| log4tango::PatternLayout::PatternLayout   | (   |    | )   |    |
+-------------------------------------------+-----+----+-----+----+

References
`BASIC\_CONVERSION\_PATTERN <../../db/d60/classlog4tango_1_1PatternLayout.html#a8d601a7465e1e7c5b83fc87a1a68cd37>`__,
and
`set\_conversion\_pattern() <../../db/d60/classlog4tango_1_1PatternLayout.html#a0a893fc5d34dad85771c45cd081c932b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------+-----+----+-----+----+     |                                      |
| | log4tango::PatternLayout::~Pattern |                                      |
| Layout   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

References
`clear\_conversion\_pattern() <../../db/d60/classlog4tango_1_1PatternLayout.html#a668d59b015305affebfbefef0cedb4b9>`__.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | void log4tango::PatternLayout::cle |                                      |
| ar\_conversion\_pattern   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`set\_conversion\_pattern() <../../db/d60/classlog4tango_1_1PatternLayout.html#a0a893fc5d34dad85771c45cd081c932b>`__,
and
`~PatternLayout() <../../db/d60/classlog4tango_1_1PatternLayout.html#a6a7d2df88df11eba3b9d800cbcbaf8f4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| -----+-----+----+                    |                                      |
| | std::string log4tango::PatternLayo |                                      |
| ut::format   | (   | const `LoggingE |                                      |
| vent <../../d8/df2/structlog4tango_1 |                                      |
| _1LoggingEvent.html>`__ &    | *even |                                      |
| t*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Formats the
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ in
the style set by the set\_conversion\_pattern call.

By default, set to "%%m%%n"

Reimplemented from
`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html#a0ade719b2ab1ce512aca5699f136eb8b>`__.

References
`std::ostringstream::str() <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------------+---- |                                      |
| -+----+-----+---------+              |                                      |
| | std::string log4tango::PatternLayo |                                      |
| ut::get\_conversion\_pattern   | (   |                                      |
|  |    | )   | const   |              |                                      |
| +----------------------------------- |                                      |
| -------------------------------+---- |                                      |
| -+----+-----+---------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------+----------------- |                                      |
| ------+-----+----+                   |                                      |
| | int log4tango::PatternLayout::set\ |                                      |
| _conversion\_pattern   | (   | const |                                      |
|  std::string &    | *conversionPatte |                                      |
| rn*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------+----------------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Sets the format of log lines handled by this
`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__.

| By default, set to "%%m%%n".
|  Format characters are as follows:

-  **%%%%** - a single percent sign
-  **%c** - the logger
-  **%d** - the date
    Date format: The date format character may be followed by a date
   format specifier enclosed between braces. For example,
   %d{%H:%M:%S,%l} or %d{%d %m %Y %H:%M:%S,%l}. If no date format
   specifier is given then the following format is used: "Wed Jan 02
   02:03:55 1980". The date format specifier admits the same syntax as
   the ANSI C function strftime, with 1 addition. The addition is the
   specifier %l for milliseconds, padded with zeros to make 3 digits.
-  **%m** - the message
-  **%n** - the platform specific line separator
-  **%p** - the level
-  **%r** - milliseconds since this layout was created.
-  **%R** - seconds since Jan 1, 1970
-  **%u** - clock ticks since process start
-  **%x** - the NDC

Parameters
    +---------------------+--------------------------+
    | conversionPattern   | the conversion pattern   |
    +---------------------+--------------------------+

Exceptions
    +--------------------+-----------------------------+
    | ConfigureFailure   | if the pattern is invalid   |
    +--------------------+-----------------------------+

References
`clear\_conversion\_pattern() <../../db/d60/classlog4tango_1_1PatternLayout.html#a668d59b015305affebfbefef0cedb4b9>`__,
`std::endl() <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__,
and
`std::ostringstream::str() <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__.

Referenced by
`PatternLayout() <../../db/d60/classlog4tango_1_1PatternLayout.html#a16f0799306962ff3fc4eeda8ca4d7e2b>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| -----------------+                   |                                      |
| | const char \* log4tango::PatternLa |                                      |
| yout::BASIC\_CONVERSION\_PATTERN = " |                                      |
| %R %p %c %m%n"   |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

A conversion pattern equivalent to the BasicLayout.

Referenced by
`PatternLayout() <../../db/d60/classlog4tango_1_1PatternLayout.html#a16f0799306962ff3fc4eeda8ca4d7e2b>`__.

--------------

The documentation for this class was generated from the following files:

-  `PatternLayout.hh <../../df/d8c/PatternLayout_8hh_source.html>`__
-  `PatternLayout.cpp <../../d6/d13/PatternLayout_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../da/de6/classlog4tango_1_1PatternLayout__inherit__graph.png
.. |Collaboration graph| image:: ../../d0/d1d/classlog4tango_1_1PatternLayout__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
