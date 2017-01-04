+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Namespace List <../../namespaces.html>`__
-  `Namespace Members <../../namespacemembers.html>`__

`Namespaces <#namespaces>`__ \| `Classes <#nested-classes>`__ \|
`Typedefs <#typedef-members>`__ \| `Functions <#func-members>`__ \|
`Variables <#var-members>`__

log4tango Namespace Reference

Namespaces
----------

 

`threading <../../db/d10/namespacelog4tango_1_1threading.html>`__

 

Classes
-------

class  

`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

 

class  

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

 

class  

`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__

 

struct  

`FormatModifierComponent <../../d9/d7b/structlog4tango_1_1FormatModifierComponent.html>`__

 

class  

`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

 

class  

`LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

 

class  

`Level <../../d8/d0e/classlog4tango_1_1Level.html>`__

 

struct  

`LevelComponent <../../d4/d71/structlog4tango_1_1LevelComponent.html>`__

 

class  

`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__

 

struct  

`LoggerNameComponent <../../de/d8d/structlog4tango_1_1LoggerNameComponent.html>`__

 

class  

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__

 

struct  

`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

 

| The internal representation of logging events.
`More... <../../d8/df2/structlog4tango_1_1LoggingEvent.html#details>`__

 

class  

`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__

 

class  

`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__

 

class  

`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__

 

class  

`LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__

 

struct  

`MessageComponent <../../d0/d7e/structlog4tango_1_1MessageComponent.html>`__

 

struct  

`MillisSinceEpochComponent <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html>`__

 

class  

`OstreamAppender <../../df/d37/classlog4tango_1_1OstreamAppender.html>`__

 

class  

`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__

 

struct  

`ProcessorTimeComponent <../../d2/d11/structlog4tango_1_1ProcessorTimeComponent.html>`__

 

class  

`RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html>`__

 

struct  

`SecondsSinceEpochComponent <../../d9/d60/structlog4tango_1_1SecondsSinceEpochComponent.html>`__

 

struct  

`StringLiteralComponent <../../d2/db7/structlog4tango_1_1StringLiteralComponent.html>`__

 

class  

`StringUtil <../../d4/d04/classlog4tango_1_1StringUtil.html>`__

 

struct  

`ThreadIdComponent <../../d6/dc1/structlog4tango_1_1ThreadIdComponent.html>`__

 

struct  

`ThreadNameComponent <../../d5/d69/structlog4tango_1_1ThreadNameComponent.html>`__

 

class  

`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__

 

struct  

`TimeStampComponent <../../db/ddd/structlog4tango_1_1TimeStampComponent.html>`__

 

class  

`XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__

 

| `XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ is a
simple fixed format
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ implementation.
`More... <../../d2/d7c/classlog4tango_1_1XMLLayout.html#details>`__

 

Typedefs
--------

typedef std::vector<
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \* > 

`AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__

 

| Define what is a list of appenders.
`More... <#a8fa9a70e20bab57912e721dd4d7dc917>`__

 

| typedef std::map< std::string,
|  `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \* > 

`AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__

 

| A map of appenders. `More... <#aaff7d7baaf61e3681dda76a0b72ef516>`__

 

typedef AppenderMap::iterator 

`AppenderMapIterator <../../d4/db0/namespacelog4tango.html#a40603d6f5fc476a8515fe9dafe0d828a>`__

 

| A map of appenders iterator.
`More... <#a40603d6f5fc476a8515fe9dafe0d828a>`__

 

typedef AppenderMap::value\_type 

`AppenderMapValue <../../d4/db0/namespacelog4tango.html#a9b27f3b1ae4b36c5828996a03ee89300>`__

 

typedef
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
&(\* 

`ls\_terminator <../../d4/db0/namespacelog4tango.html#ac25f18a9841eab936214ef50cdb08432>`__
)(\ `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
&)

 

typedef unsigned short 

`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__

 

typedef class std::ios\_base &(\* 

`StdIosFlag <../../d4/db0/namespacelog4tango.html#a84630cb1e3eb8ecf59cd78fe4b250806>`__
)(class std::ios\_base &)

 

Functions
---------

std::ostream & 

`operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__
(std::ostream &o\_str,
`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__ &)

 

Variables
---------

class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__ 

`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__

 

Typedef Documentation
---------------------

+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| typedef std::vector<\ `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*> `log4tango::AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__   |
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Define what is a list of appenders.

+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| typedef std::map<std::string, `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*> `log4tango::AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__   |
+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

A map of appenders.

+---------------------------------------------------------------------------------------------------------------------------------------------+
| typedef AppenderMap::iterator `log4tango::AppenderMapIterator <../../d4/db0/namespacelog4tango.html#a40603d6f5fc476a8515fe9dafe0d828a>`__   |
+---------------------------------------------------------------------------------------------------------------------------------------------+

A map of appenders iterator.

+---------------------------------------------------------------------------------------------------------------------------------------------+
| typedef AppenderMap::value\_type `log4tango::AppenderMapValue <../../d4/db0/namespacelog4tango.html#a9b27f3b1ae4b36c5828996a03ee89300>`__   |
+---------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| typedef `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &(\* log4tango::ls\_terminator)(\ `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ &)   |
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------------------------------------------------------------------------------------------+
| typedef unsigned short `log4tango::mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__   |
+--------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------------------------------------------+
| typedef class std::ios\_base&(\* log4tango::StdIosFlag)(class std::ios\_base &)   |
+-----------------------------------------------------------------------------------+

Function Documentation
----------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+-------------------+----- |                                      |
| --------+                            |                                      |
| | std::ostream& log4tango::operator< |                                      |
| <   | (   | std::ostream &    | *o\_ |                                      |
| str*,   |                            |                                      |
| +----------------------------------- |                                      |
| ----+-----+-------------------+----- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|     |     | LogSeparator &    |      |                                      |
|         |                            |                                      |
| +----------------------------------- |                                      |
| ----+-----+-------------------+----- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|     | )   |                   |      |                                      |
|         |                            |                                      |
| +----------------------------------- |                                      |
| ----+-----+-------------------+----- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Variable Documentation
----------------------

+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| class `LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__ `log4tango::Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__   |
+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
