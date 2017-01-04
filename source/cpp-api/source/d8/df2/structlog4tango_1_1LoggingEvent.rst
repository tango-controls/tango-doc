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

`Public Member Functions <#pub-methods>`__ \| `Public
Attributes <#pub-attribs>`__ \| `List of all
members <../../d2/d40/structlog4tango_1_1LoggingEvent-members.html>`__

log4tango::LoggingEvent Struct Reference

The internal representation of logging events.
`More... <../../d8/df2/structlog4tango_1_1LoggingEvent.html#details>`__

``#include "LoggingEvent.hh"``

Collaboration diagram for log4tango::LoggingEvent:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a5508a7ec66fe15b218370660fbe80523>`__
(const std::string &logger, const std::string
&\ `message <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__,
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
`level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__)

 

| Instantiate a
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
from the supplied parameters.
`More... <#a5508a7ec66fe15b218370660fbe80523>`__

 

 

`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a9b414a63d12f72ea848423ee0a44b583>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Copy constructor. `More... <#a9b414a63d12f72ea848423ee0a44b583>`__

 

Public Attributes
-----------------

`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ 

`level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__

 

| `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__ of logging
event. `More... <#a669d5dbcaf34dff9ad9ec7578856a550>`__

 

const std::string 

`logger\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#af3e2d7c25fb876601d7a009cfef40905>`__

 

| The logger name. `More... <#af3e2d7c25fb876601d7a009cfef40905>`__

 

const std::string 

`message <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__

 

| The application supplied message of logging event.
`More... <#ab2a64b1de2ffe194eb4050840bbb7e90>`__

 

long 

`thread\_id <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ad811ff7b6b12fcefce201d91a95f6c75>`__

 

| id of thread in which this logging event was generated
`More... <#ad811ff7b6b12fcefce201d91a95f6c75>`__

 

std::string 

`thread\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a6819a2b7cfcdc27390f2cbaa0ff4dcd1>`__

 

| Name of thread in which this logging event was generated.
`More... <#a6819a2b7cfcdc27390f2cbaa0ff4dcd1>`__

 

`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ 

`timestamp <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a69f17c639dea4fdca9db9a05f7cf810b>`__

 

| The number of seconds elapsed since the epoch (1/1/1970 00:00:00 UTC)
until logging event was created.
`More... <#a69f17c639dea4fdca9db9a05f7cf810b>`__

 

Detailed Description
--------------------

The internal representation of logging events.

When a affirmative logging decision is made a ``LoggingEvent`` instance
is created. This instance is passed around the different
`log4tango <../../d4/db0/namespacelog4tango.html>`__ components.

This class is of concern to those wishing to extend
`log4tango <../../d4/db0/namespacelog4tango.html>`__.

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
| log4tango::LoggingEvent::LoggingEvent   | (   | const std::string &                                                                               | *logger*,    |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
|                                         |     | const std::string &                                                                               | *message*,   |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
|                                         |     | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*      |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
|                                         | )   |                                                                                                   |              |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+

Instantiate a
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
from the supplied parameters.

Except ``timeStamp`` all the other fields of ``LoggingEvent`` are filled
when actually needed.

Parameters
    +-----------+------------------------------+
    | logger    | The logger of this event.    |
    +-----------+------------------------------+
    | message   | The message of this event.   |
    +-----------+------------------------------+
    | level     | The level of this event.     |
    +-----------+------------------------------+

References
`log4tango::threading::thread\_id() <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__,
and
`thread\_id <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ad811ff7b6b12fcefce201d91a95f6c75>`__.

+-----------------------------------------+-----+---------------------------------------------------------------------------------+-----------+-----+----+
| log4tango::LoggingEvent::LoggingEvent   | (   | const `LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ &    | *event*   | )   |    |
+-----------------------------------------+-----+---------------------------------------------------------------------------------+-----------+-----+----+

Copy constructor.

Member Data Documentation
-------------------------

+---------------------------------------------------------------------------------------------------------------------------------+
| `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ log4tango::LoggingEvent::level   |
+---------------------------------------------------------------------------------------------------------------------------------+

`Level <../../d8/d0e/classlog4tango_1_1Level.html>`__ of logging event.

Referenced by
`log4tango::LevelComponent::append() <../../d4/d71/structlog4tango_1_1LevelComponent.html#a66b5059085fd0f76a3f68d8add4a2a3a>`__,
`log4tango::XMLLayout::format() <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__,
and
`log4tango::Layout::format() <../../d7/da6/classlog4tango_1_1Layout.html#a0ade719b2ab1ce512aca5699f136eb8b>`__.

+-----------------------------------------------------------+
| const std::string log4tango::LoggingEvent::logger\_name   |
+-----------------------------------------------------------+

The logger name.

Referenced by
`log4tango::XMLLayout::format() <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__.

+------------------------------------------------------+
| const std::string log4tango::LoggingEvent::message   |
+------------------------------------------------------+

The application supplied message of logging event.

Referenced by
`log4tango::XMLLayout::format() <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__.

+--------------------------------------------+
| long log4tango::LoggingEvent::thread\_id   |
+--------------------------------------------+

id of thread in which this logging event was generated

Referenced by
`LoggingEvent() <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a5508a7ec66fe15b218370660fbe80523>`__.

+-----------------------------------------------------+
| std::string log4tango::LoggingEvent::thread\_name   |
+-----------------------------------------------------+

Name of thread in which this logging event was generated.

+----------------------------------------------------------------------------------------------------+
| `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ log4tango::LoggingEvent::timestamp   |
+----------------------------------------------------------------------------------------------------+

The number of seconds elapsed since the epoch (1/1/1970 00:00:00 UTC)
until logging event was created.

--------------

The documentation for this struct was generated from the following
files:

-  `LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh_source.html>`__
-  `LoggingEvent.cpp <../../dc/d69/LoggingEvent_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../d7/d06/structlog4tango_1_1LoggingEvent__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
