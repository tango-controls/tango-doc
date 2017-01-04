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

`Public Member Functions <#pub-methods>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `List of all
members <../../de/daa/classlog4tango_1_1Logger-members.html>`__

log4tango::Logger Class Reference

``#include "Logger.hh"``

Inheritance diagram for log4tango::Logger:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::Logger:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`Logger <../../d4/d1c/classlog4tango_1_1Logger.html#a26b45ebe00d0cbecda9d9f64f169922e>`__
(const std::string &name,
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level=\ `Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__)

 

| Constructor. `More... <#a26b45ebe00d0cbecda9d9f64f169922e>`__

 

virtual 

`~Logger <../../d4/d1c/classlog4tango_1_1Logger.html#a39fb5f0cb96762664150e4af657cd33a>`__
()

 

| Destructor. `More... <#a39fb5f0cb96762664150e4af657cd33a>`__

 

void 

`debug <../../d4/d1c/classlog4tango_1_1Logger.html#a86870349be1352d8c529e713acf51a0b>`__
(const char \*string\_format,...)

 

| Log a message with debug level.
`More... <#a86870349be1352d8c529e713acf51a0b>`__

 

void 

`debug <../../d4/d1c/classlog4tango_1_1Logger.html#acdeaf9ecda4f2fd1b6ac845e188b34d6>`__
(const std::string &message)

 

| Log a message with debug level.
`More... <#acdeaf9ecda4f2fd1b6ac845e188b34d6>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`debug\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a652427a4aed5322eb189f7409498cd18>`__
(void)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level DEBUG. `More... <#a652427a4aed5322eb189f7409498cd18>`__

 

void 

`error <../../d4/d1c/classlog4tango_1_1Logger.html#ac9c2f129c56991f6bf7148ce5b7f1518>`__
(const char \*string\_format,...)

 

| Log a message with error level.
`More... <#ac9c2f129c56991f6bf7148ce5b7f1518>`__

 

void 

`error <../../d4/d1c/classlog4tango_1_1Logger.html#a7d587fb218937b9c525f5c48e5f0e230>`__
(const std::string &message)

 

| Log a message with error level.
`More... <#a7d587fb218937b9c525f5c48e5f0e230>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`error\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a09c866cc0bfb1de324c676617234f4fd>`__
(void)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level ERROR. `More... <#a09c866cc0bfb1de324c676617234f4fd>`__

 

void 

`fatal <../../d4/d1c/classlog4tango_1_1Logger.html#a4c8832412bde8329c5a69acd88e08b8c>`__
(const char \*string\_format,...)

 

| Log a message with fatal level.
`More... <#a4c8832412bde8329c5a69acd88e08b8c>`__

 

void 

`fatal <../../d4/d1c/classlog4tango_1_1Logger.html#a56287e6a0a500f74d9fd7bc09f612111>`__
(const std::string &message)

 

| Log a message with fatal level.
`More... <#a56287e6a0a500f74d9fd7bc09f612111>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`fatal\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#ae734bcc83b3b3687a073edaacd5c74f0>`__
(void)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level FATAL. `More... <#ae734bcc83b3b3687a073edaacd5c74f0>`__

 

`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ 

`get\_level <../../d4/d1c/classlog4tango_1_1Logger.html#a0bfd7a54498aba29263cfb0dae55faff>`__
() const

 

| Returns the assigned
`Level <../../d8/d0e/classlog4tango_1_1Level.html>`__, if any, for this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.
`More... <#a0bfd7a54498aba29263cfb0dae55faff>`__

 

const std::string & 

`get\_name <../../d4/d1c/classlog4tango_1_1Logger.html#abfe1c32b01e64c5f58f52812f898f170>`__
() const

 

| Return the logger name.
`More... <#abfe1c32b01e64c5f58f52812f898f170>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`get\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a34b294678a690630721e8824f16020de>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, bool filter=true)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
given `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__.
`More... <#a34b294678a690630721e8824f16020de>`__

 

void 

`info <../../d4/d1c/classlog4tango_1_1Logger.html#adaba6152f4a39580d48bae035ac30778>`__
(const char \*string\_format,...)

 

| Log a message with info level.
`More... <#adaba6152f4a39580d48bae035ac30778>`__

 

void 

`info <../../d4/d1c/classlog4tango_1_1Logger.html#a987565b18e6ea9a2524d64c80759c2eb>`__
(const std::string &message)

 

| Log a message with info level.
`More... <#a987565b18e6ea9a2524d64c80759c2eb>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`info\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a22a2fd4d13e70e352a5f47dd02d33342>`__
(void)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level INFO. `More... <#a22a2fd4d13e70e352a5f47dd02d33342>`__

 

bool 

`is\_debug\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a6ce8b32ab06c6b77f8aac562dabf9c1f>`__
(void) const

 

| Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level DEBUG.
`More... <#a6ce8b32ab06c6b77f8aac562dabf9c1f>`__

 

bool 

`is\_error\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ab2ec2debd2d3024293a0d873af8e86b3>`__
(void) const

 

| Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level ERROR.
`More... <#ab2ec2debd2d3024293a0d873af8e86b3>`__

 

bool 

`is\_fatal\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a16213b0ab5912487ad2eb62c4337900b>`__
(void) const

 

| Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level FATAL.
`More... <#a16213b0ab5912487ad2eb62c4337900b>`__

 

bool 

`is\_info\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#af73279505009e650e615294711fe75fe>`__
(void) const

 

| Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level INFO.
`More... <#af73279505009e650e615294711fe75fe>`__

 

bool 

`is\_level\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level) const

 

| Returns true if the level of the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ is equal to or
higher than given level.
`More... <#a393cade41cee1267e49018f5b4f8fa67>`__

 

bool 

`is\_warn\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ac48da8e8705775526b0d94f974dd158d>`__
(void) const

 

| Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level WARN.
`More... <#ac48da8e8705775526b0d94f974dd158d>`__

 

void 

`log <../../d4/d1c/classlog4tango_1_1Logger.html#aebe7a33e64c1dd47d908d5a1eec18545>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, const char \*string\_format,...)

 

| Log a message with the specified level.
`More... <#aebe7a33e64c1dd47d908d5a1eec18545>`__

 

void 

`log <../../d4/d1c/classlog4tango_1_1Logger.html#afab624480348ae2bae502c72efeaf38e>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, const std::string &message)

 

| Log a message with the specified level.
`More... <#afab624480348ae2bae502c72efeaf38e>`__

 

void 

`log\_unconditionally <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, const char \*string\_format,...)

 

| Log a message with the specified level without level checking.
`More... <#adc92f13df7647dbeac96120bbda218f4>`__

 

void 

`log\_unconditionally <../../d4/d1c/classlog4tango_1_1Logger.html#a8ee921e0f61dea06224b7b249e820470>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, const std::string &message)

 

| Log a message with the specified level without level checking.
`More... <#a8ee921e0f61dea06224b7b249e820470>`__

 

void 

`set\_level <../../d4/d1c/classlog4tango_1_1Logger.html#aee3ae63ec9ebc6f2a2eb72c0ff3d2b34>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level)

 

| Set the level of this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ (silently
ignores invalid values) `More... <#aee3ae63ec9ebc6f2a2eb72c0ff3d2b34>`__

 

void 

`warn <../../d4/d1c/classlog4tango_1_1Logger.html#ab7a7dfad91aa2196ed91a607808f1061>`__
(const char \*string\_format,...)

 

| Log a message with warn level.
`More... <#ab7a7dfad91aa2196ed91a607808f1061>`__

 

void 

`warn <../../d4/d1c/classlog4tango_1_1Logger.html#a22646b15ebc33254f734e23280868345>`__
(const std::string &message)

 

| Log a message with warn level.
`More... <#a22646b15ebc33254f734e23280868345>`__

 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ 

`warn\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a223a0d6d82a1e054d07474e87b207bba>`__
(void)

 

| Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level WARN. `More... <#a223a0d6d82a1e054d07474e87b207bba>`__

 

|-| Public Member Functions inherited from
`log4tango::AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a5b2a99851f2aa46162c9d51433887e18>`__
()

 

| Constructor. `More... <#a5b2a99851f2aa46162c9d51433887e18>`__

 

virtual 

`~AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a5af097d444408db567e0c2202b10a158>`__
()

 

| Destructor. `More... <#a5af097d444408db567e0c2202b10a158>`__

 

void 

`add\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a04b4e410672579c6d8f698872f26866d>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Adds an `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.
`More... <#a04b4e410672579c6d8f698872f26866d>`__

 

`AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__ 

`get\_all\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ac09cfee8ed24912f751c1b46502b91c3>`__
(void)

 

| Get all previously added appenders as a vector.
`More... <#ac09cfee8ed24912f751c1b46502b91c3>`__

 

`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \* 

`get\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#aef280962681b6de83bf759dee678f9ad>`__
(const std::string &name)

 

| Get an appender by name.
`More... <#aef280962681b6de83bf759dee678f9ad>`__

 

bool 

`is\_attached <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ad453ee78f746f781cdac768c57b8bd74>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Returns true if the specified appender is in list of attached
appanders, false otherwise.
`More... <#ad453ee78f746f781cdac768c57b8bd74>`__

 

void 

`remove\_all\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a53e072db4ea8496e1fe68b0fa20b6f3b>`__
()

 

| Removes all appenders for this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.
`More... <#a53e072db4ea8496e1fe68b0fa20b6f3b>`__

 

void 

`remove\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a17009480a695669ed8e1611db6320ba9>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Remove the appender passed as parameter from the list of appenders.
`More... <#a17009480a695669ed8e1611db6320ba9>`__

 

void 

`remove\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#af662639b70264c826f88387c99294ba4>`__
(const std::string &name)

 

| Remove the appender with the name passed as parameter from the list of
appenders. `More... <#af662639b70264c826f88387c99294ba4>`__

 

Protected Member Functions
--------------------------

void 

`call\_appenders <../../d4/d1c/classlog4tango_1_1Logger.html#a44d8fa395ad922427bf417aee9c3ed79>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Call the appenders. `More... <#a44d8fa395ad922427bf417aee9c3ed79>`__

 

|-| Protected Member Functions inherited from
`log4tango::AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a74532446063d73d710678566a5b3fc57>`__
(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
&other)

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
& 

`operator= <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a4cbf4bf5552db661c8f41c430db0e953>`__
(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
&other)

 

Additional Inherited Members
----------------------------

|-| Protected Attributes inherited from
`log4tango::AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

`AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__ 

`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__

 

| Appenders repository. `More... <#a1956c7e554f262cfecfc1a9de9145289>`__

 

`threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__ 

`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__

 

| A mutex to protect the repository against race conditions.
`More... <#a9390c8fc80202c4296f7ef10f08d13a5>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------+-----+---------------------------------------------------------------------------------------------------+-----------------------------+
| log4tango::Logger::Logger   | (   | const std::string &                                                                               | *name*,                     |
+-----------------------------+-----+---------------------------------------------------------------------------------------------------+-----------------------------+
|                             |     | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level* = ``Level::OFF``    |
+-----------------------------+-----+---------------------------------------------------------------------------------------------------+-----------------------------+
|                             | )   |                                                                                                   |                             |
+-----------------------------+-----+---------------------------------------------------------------------------------------------------+-----------------------------+

Constructor.

Parameters
    +---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | name    | the fully qualified name of this `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__                                                                                                                                |
    +---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | level   | the level for this `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__. Defaults to `Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__   |
    +---------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

References
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__,
`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__,
`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__,
`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__,
and
`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__.

+--------------------------------------+--------------------------------------+
| +------------------------------+---- | virtual                              |
| -+----+-----+----+                   |                                      |
| | log4tango::Logger::~Logger   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Destructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| +-----+----+                         |                                      |
| | void log4tango::Logger::call\_appe |                                      |
| nders   | (   | const `LoggingEvent  |                                      |
| <../../d8/df2/structlog4tango_1_1Log |                                      |
| gingEvent.html>`__ &    | *event*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Call the appenders.

Parameters
    +---------+---------------------------+
    | event   | the LogginEvent to log.   |
    +---------+---------------------------+

References
`log4tango::AppenderAttachable::\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
`log4tango::AppenderAttachable::\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__,
and
`log4tango::AppenderAttachable::remove\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a17009480a695669ed8e1611db6320ba9>`__.

Referenced by
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#a8ee921e0f61dea06224b7b249e820470>`__.

+---------------------------------+-----+------------------+---------------------+
| void log4tango::Logger::debug   | (   | const char \*    | *string\_format*,   |
+---------------------------------+-----+------------------+---------------------+
|                                 |     |                  | *...*               |
+---------------------------------+-----+------------------+---------------------+
|                                 | )   |                  |                     |
+---------------------------------+-----+------------------+---------------------+

Log a message with debug level.

Parameters
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log.      |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__,
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
| | void log4tango::Logger::debug   |  |                                      |
| (   | const std::string &    | *mess |                                      |
| age*   | )   |    |                  |                                      |
| +---------------------------------+- |                                      |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with debug level.

Parameters
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::debug\_stream   | ( |                                      |
|    | void    |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level DEBUG.

Returns
    The
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

References
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__.

+---------------------------------+-----+------------------+---------------------+
| void log4tango::Logger::error   | (   | const char \*    | *string\_format*,   |
+---------------------------------+-----+------------------+---------------------+
|                                 |     |                  | *...*               |
+---------------------------------+-----+------------------+---------------------+
|                                 | )   |                  |                     |
+---------------------------------+-----+------------------+---------------------+

Log a message with error level.

Parameters
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log.      |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__,
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
| | void log4tango::Logger::error   |  |                                      |
| (   | const std::string &    | *mess |                                      |
| age*   | )   |    |                  |                                      |
| +---------------------------------+- |                                      |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with error level.

Parameters
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::error\_stream   | ( |                                      |
|    | void    |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level ERROR.

Returns
    The
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

References
`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__.

+---------------------------------+-----+------------------+---------------------+
| void log4tango::Logger::fatal   | (   | const char \*    | *string\_format*,   |
+---------------------------------+-----+------------------+---------------------+
|                                 |     |                  | *...*               |
+---------------------------------+-----+------------------+---------------------+
|                                 | )   |                  |                     |
+---------------------------------+-----+------------------+---------------------+

Log a message with fatal level.

Parameters
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log.      |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__,
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
| | void log4tango::Logger::fatal   |  |                                      |
| (   | const std::string &    | *mess |                                      |
| age*   | )   |    |                  |                                      |
| +---------------------------------+- |                                      |
| ----+------------------------+------ |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with fatal level.

Parameters
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::fatal\_stream   | ( |                                      |
|    | void    |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------------------+-- |                                      |
| ---+---------+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level FATAL.

Returns
    The
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

References
`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+----+--- |                                      |
| --+---------+                        |                                      |
| | `Level::Value <../../d8/d0e/classl |                                      |
| og4tango_1_1Level.html#aa708c09b6a19 |                                      |
| a8cc8a3b19631561ca99>`__ log4tango:: |                                      |
| Logger::get\_level   | (   |    | )  |                                      |
|   | const   |                        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+----+--- |                                      |
| --+---------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the assigned
`Level <../../d8/d0e/classlog4tango_1_1Level.html>`__, if any, for this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.

Returns
    `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__ - the assigned
    `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__, can be
    Level::NOTSET

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------+-----+---------+--- |                                      |
| -+-----+---------+                   |                                      |
| | const std::string& log4tango::Logg |                                      |
| er::get\_name   | (   | void    |    |                                      |
|  | )   | const   |                   |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+---------+--- |                                      |
| -+-----+---------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the logger name.

Returns
    The logger name.

Referenced by
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#a8ee921e0f61dea06224b7b249e820470>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ------------------+                  |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::get\_stream   | (   |                                      |
|  | `Level::Value <../../d8/d0e/class |                                      |
| log4tango_1_1Level.html#aa708c09b6a1 |                                      |
| 9a8cc8a3b19631561ca99>`__    | *leve |                                      |
| l*,               |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ------------------+                  |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                |     |                                      |
|  | bool                              |                                      |
|                                      |                                      |
|                              | *filt |                                      |
| er* = ``true``    |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ------------------+                  |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                | )   |                                      |
|  |                                   |                                      |
|                                      |                                      |
|                              |       |                                      |
|                   |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ------------------+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
given `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__.

Parameters
    +----------+-----------------------------------------------------------------------------------------------------------------------------------------+
    | level    | The `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__ of the `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.   |
    +----------+-----------------------------------------------------------------------------------------------------------------------------------------+
    | filter   | The filter flag                                                                                                                         |
    +----------+-----------------------------------------------------------------------------------------------------------------------------------------+

Returns
    The requested
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

+--------------------------------+-----+------------------+---------------------+
| void log4tango::Logger::info   | (   | const char \*    | *string\_format*,   |
+--------------------------------+-----+------------------+---------------------+
|                                |     |                  | *...*               |
+--------------------------------+-----+------------------+---------------------+
|                                | )   |                  |                     |
+--------------------------------+-----+------------------+---------------------+

Log a message with info level.

Parameters
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log.      |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__,
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

+--------------------------------------+--------------------------------------+
| +--------------------------------+-- | inline                               |
| ---+------------------------+------- |                                      |
| ------+-----+----+                   |                                      |
| | void log4tango::Logger::info   | ( |                                      |
|    | const std::string &    | *messa |                                      |
| ge*   | )   |    |                   |                                      |
| +--------------------------------+-- |                                      |
| ---+------------------------+------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with info level.

Parameters
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::info\_stream   | (  |                                      |
|   | void    |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level INFO.

Returns
    The
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

References
`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
| | bool log4tango::Logger::is\_debug\ |                                      |
| _enabled   | (   | void    |    | )  |                                      |
|   | const   |                        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level DEBUG.

Returns
    Whether the `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
    will log.

References
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
| | bool log4tango::Logger::is\_error\ |                                      |
| _enabled   | (   | void    |    | )  |                                      |
|   | const   |                        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level ERROR.

Returns
    Whether the `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
    will log.

References
`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
| | bool log4tango::Logger::is\_fatal\ |                                      |
| _enabled   | (   | void    |    | )  |                                      |
|   | const   |                        |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+----+--- |                                      |
| --+---------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level FATAL.

Returns
    Whether the `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
    will log.

References
`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
| | bool log4tango::Logger::is\_info\_ |                                      |
| enabled   | (   | void    |    | )   |                                      |
|  | const   |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level INFO.

Returns
    Whether the `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
    will log.

References
`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----------+-----+-------- |                                      |
| -+                                   |                                      |
| | bool log4tango::Logger::is\_level\ |                                      |
| _enabled   | (   | `Level::Value <.. |                                      |
| /../d8/d0e/classlog4tango_1_1Level.h |                                      |
| tml#aa708c09b6a19a8cc8a3b19631561ca9 |                                      |
| 9>`__    | *level*   | )   | const   |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----------+-----+-------- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns true if the level of the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ is equal to or
higher than given level.

Parameters
    +---------+------------------------------+
    | level   | The level to compare with.   |
    +---------+------------------------------+

Returns
    whether logging is enable for this level.

Referenced by
`debug() <../../d4/d1c/classlog4tango_1_1Logger.html#a86870349be1352d8c529e713acf51a0b>`__,
`error() <../../d4/d1c/classlog4tango_1_1Logger.html#ac9c2f129c56991f6bf7148ce5b7f1518>`__,
`fatal() <../../d4/d1c/classlog4tango_1_1Logger.html#a4c8832412bde8329c5a69acd88e08b8c>`__,
`info() <../../d4/d1c/classlog4tango_1_1Logger.html#adaba6152f4a39580d48bae035ac30778>`__,
`log() <../../d4/d1c/classlog4tango_1_1Logger.html#aebe7a33e64c1dd47d908d5a1eec18545>`__,
and
`warn() <../../d4/d1c/classlog4tango_1_1Logger.html#ab7a7dfad91aa2196ed91a607808f1061>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
| | bool log4tango::Logger::is\_warn\_ |                                      |
| enabled   | (   | void    |    | )   |                                      |
|  | const   |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return true if the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ will log
messages with level WARN.

Returns
    Whether the `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
    will log.

References
`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__.

+-------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
| void log4tango::Logger::log   | (   | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*,            |
+-------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                               |     | const char \*                                                                                     | *string\_format*,   |
+-------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                               |     |                                                                                                   | *...*               |
+-------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                               | )   |                                                                                                   |                     |
+-------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+

Log a message with the specified level.

Parameters
    +------------------+------------------------------------+
    | level            | The level of this log message.     |
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log .     |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

Referenced by
`log4tango::LoggerStream::flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__.

+--------------------------------------+--------------------------------------+
| +-------------------------------+--- | inline                               |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| ---------+                           |                                      |
| | void log4tango::Logger::log   | (  |                                      |
|   | `Level::Value <../../d8/d0e/clas |                                      |
| slog4tango_1_1Level.html#aa708c09b6a |                                      |
| 19a8cc8a3b19631561ca99>`__    | *lev |                                      |
| el*,     |                           |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| ---------+                           |                                      |
| |                               |    |                                      |
|   | const std::string &              |                                      |
|                                      |                                      |
|                               | *mes |                                      |
| sage*    |                           |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| ---------+                           |                                      |
| |                               | )  |                                      |
|   |                                  |                                      |
|                                      |                                      |
|                               |      |                                      |
|          |                           |                                      |
| +-------------------------------+--- |                                      |
| --+--------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with the specified level.

Parameters
    +-----------+-----------------------------------+
    | level     | The level of this log message.    |
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
| void log4tango::Logger::log\_unconditionally   | (   | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*,            |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                                                |     | const char \*                                                                                     | *string\_format*,   |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                                                |     |                                                                                                   | *...*               |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+
|                                                | )   |                                                                                                   |                     |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+---------------------+

Log a message with the specified level without level checking.

Parameters
    +------------------+------------------------------------+
    | level            | The level of this log message.     |
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log .     |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__.

Referenced by
`debug() <../../d4/d1c/classlog4tango_1_1Logger.html#a86870349be1352d8c529e713acf51a0b>`__,
`error() <../../d4/d1c/classlog4tango_1_1Logger.html#ac9c2f129c56991f6bf7148ce5b7f1518>`__,
`fatal() <../../d4/d1c/classlog4tango_1_1Logger.html#a4c8832412bde8329c5a69acd88e08b8c>`__,
`log4tango::LoggerStream::flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__,
`info() <../../d4/d1c/classlog4tango_1_1Logger.html#adaba6152f4a39580d48bae035ac30778>`__,
`log() <../../d4/d1c/classlog4tango_1_1Logger.html#aebe7a33e64c1dd47d908d5a1eec18545>`__,
and
`warn() <../../d4/d1c/classlog4tango_1_1Logger.html#ab7a7dfad91aa2196ed91a607808f1061>`__.

+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
| void log4tango::Logger::log\_unconditionally   | (   | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*,     |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
|                                                |     | const std::string &                                                                               | *message*    |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+
|                                                | )   |                                                                                                   |              |
+------------------------------------------------+-----+---------------------------------------------------------------------------------------------------+--------------+

Log a message with the specified level without level checking.

Parameters
    +-----------+-----------------------------------+
    | level     | The level of this log message.    |
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`call\_appenders() <../../d4/d1c/classlog4tango_1_1Logger.html#a44d8fa395ad922427bf417aee9c3ed79>`__,
and
`get\_name() <../../d4/d1c/classlog4tango_1_1Logger.html#abfe1c32b01e64c5f58f52812f898f170>`__.

+--------------------------------------+-----+---------------------------------------------------------------------------------------------------+-----------+-----+----+
| void log4tango::Logger::set\_level   | (   | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*   | )   |    |
+--------------------------------------+-----+---------------------------------------------------------------------------------------------------+-----------+-----+----+

Set the level of this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ (silently
ignores invalid values)

Parameters
    +---------+---------------------+
    | level   | The level to set.   |
    +---------+---------------------+

References
`log4tango::AppenderAttachable::\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
`log4tango::AppenderAttachable::\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__,
`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__,
and
`log4tango::Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__.

+--------------------------------+-----+------------------+---------------------+
| void log4tango::Logger::warn   | (   | const char \*    | *string\_format*,   |
+--------------------------------+-----+------------------+---------------------+
|                                |     |                  | *...*               |
+--------------------------------+-----+------------------+---------------------+
|                                | )   |                  |                     |
+--------------------------------+-----+------------------+---------------------+

Log a message with warn level.

Parameters
    +------------------+------------------------------------+
    | string\_format   | Format specifier for the log.      |
    +------------------+------------------------------------+
    | ...              | The arguments for string\_format   |
    +------------------+------------------------------------+

References
`is\_level\_enabled() <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__,
`log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
`log4tango::StringUtil::vform() <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__,
and
`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__.

+--------------------------------------+--------------------------------------+
| +--------------------------------+-- | inline                               |
| ---+------------------------+------- |                                      |
| ------+-----+----+                   |                                      |
| | void log4tango::Logger::warn   | ( |                                      |
|    | const std::string &    | *messa |                                      |
| ge*   | )   |    |                   |                                      |
| +--------------------------------+-- |                                      |
| ---+------------------------+------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log a message with warn level.

Parameters
    +-----------+-----------------------------------+
    | message   | string to write in the log file   |
    +-----------+-----------------------------------+

References
`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__ lo |                                      |
| g4tango::Logger::warn\_stream   | (  |                                      |
|   | void    |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ with
level WARN.

Returns
    The
    `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__.

References
`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__.

--------------

The documentation for this class was generated from the following files:

-  `Logger.hh <../../d1/d13/Logger_8hh_source.html>`__
-  `Logger.cpp <../../d9/df5/Logger_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../dd/dc1/classlog4tango_1_1Logger__inherit__graph.png
.. |Collaboration graph| image:: ../../de/d0f/classlog4tango_1_1Logger__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
