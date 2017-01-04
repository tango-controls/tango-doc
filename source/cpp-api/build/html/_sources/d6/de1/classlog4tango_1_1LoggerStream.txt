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
members <../../d2/d35/classlog4tango_1_1LoggerStream-members.html>`__

log4tango::LoggerStream Class Reference

``#include "LoggerStream.hh"``

Public Member Functions
-----------------------

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__ 

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a4bb2fa44f562c0398b6706ce241dbf81>`__
(`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ &logger,
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, bool filter=true)

 

| Construct a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ for
given `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ with given
level. `More... <#a4bb2fa44f562c0398b6706ce241dbf81>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__ 

`~LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a03bd5a5f9b171ac3e192f4e56c00d079>`__
()

 

| Destructor for
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &)
`More... <#a03bd5a5f9b171ac3e192f4e56c00d079>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
void 

`flush <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__
(void)

 

| Flush the contents of the stream buffer to the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ and empties the
buffer. `More... <#a87e12557f4851fcbb9f4077e9a4d0d59>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ 

`get\_level <../../d6/de1/classlog4tango_1_1LoggerStream.html#ad1e16a5bcc3e33dab57644ffc6141d5d>`__
(void) const

 

| Returns the level for this stream.
`More... <#ad1e16a5bcc3e33dab57644ffc6141d5d>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ & 

`get\_logger <../../d6/de1/classlog4tango_1_1LoggerStream.html#a0da2fad226c741bad936a1c260ecc780>`__
(void) const

 

| Returns the destination
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ for this stream.
`More... <#a0da2fad226c741bad936a1c260ecc780>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ & 

`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__
(`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__
&i))

 

| Streams in a Initiator.
`More... <#a70c248b1dd5d54626b4588d949bbd2fe>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ & 

`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#ae7da2af43a07d6aff594f733a137b630>`__
(`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__
&s))

 

| Streams in a Separator.Sends the contents of the stream buffer to the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ with set level
and empties the buffer. `More... <#ae7da2af43a07d6aff594f733a137b630>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ & 

`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#aa1d278ed6fc807a75e7f83daac063391>`__
(`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`ls\_terminator <../../d4/db0/namespacelog4tango.html#ac25f18a9841eab936214ef50cdb08432>`__
endoflog))

 

| Streams in a ls\_manipulator.
`More... <#aa1d278ed6fc807a75e7f83daac063391>`__

 

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ & 

`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#af3dc8e4d367c118c86dc698b980fc0b2>`__
(std::ios\_base &(\*\_F)(std::ios\_base &))

 

| Streams in a std stream manipulator.
`More... <#af3dc8e4d367c118c86dc698b980fc0b2>`__

 

template<typename T >

`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ & 

`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a3aa83b092637a7f0e87c96cc87e655cd>`__
(const T &t)

 

| Stream in arbitrary types and objects.
`More... <#a3aa83b092637a7f0e87c96cc87e655cd>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+------------------------+
| log4tango::LoggerStream::LoggerStream   | (   | `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ &                                         | *logger*,              |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+------------------------+
|                                         |     | `Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__    | *level*,               |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+------------------------+
|                                         |     | bool                                                                                              | *filter* = ``true``    |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+------------------------+
|                                         | )   |                                                                                                   |                        |
+-----------------------------------------+-----+---------------------------------------------------------------------------------------------------+------------------------+

Construct a
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ for
given `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ with given
level.

Parameters
    +----------+------------------------------------------------------------------------------------------------------+
    | logger   | The logger this stream will send log messages to.                                                    |
    +----------+------------------------------------------------------------------------------------------------------+
    | level    | The level the log messages will get or Level::NOTSET to silently discard any streamed in messages.   |
    +----------+------------------------------------------------------------------------------------------------------+
    | filter   | The filter flag                                                                                      |
    +----------+------------------------------------------------------------------------------------------------------+

+------------------------------------------+-----+----+-----+----+
| log4tango::LoggerStream::~LoggerStream   | (   |    | )   |    |
+------------------------------------------+-----+----+-----+----+

Destructor for
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &)

References
`flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__.

Member Function Documentation
-----------------------------

+---------------------------------------+-----+---------+----+-----+----+
| void log4tango::LoggerStream::flush   | (   | void    |    | )   |    |
+---------------------------------------+-----+---------+----+-----+----+

Flush the contents of the stream buffer to the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ and empties the
buffer.

References
`log4tango::Logger::log() <../../d4/d1c/classlog4tango_1_1Logger.html#aebe7a33e64c1dd47d908d5a1eec18545>`__,
`log4tango::Logger::log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`std::ostringstream::str() <../../d7/d24/classstd_1_1ostringstream.html#a8acec234b9393fb5ee0d9c8f7bbb6cb4>`__.

Referenced by
`operator<<() <../../d6/de1/classlog4tango_1_1LoggerStream.html#ae7da2af43a07d6aff594f733a137b630>`__,
and
`~LoggerStream() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a03bd5a5f9b171ac3e192f4e56c00d079>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+---------+----+-----+-- |                                      |
| -------+                             |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `Level::Value <../. |                                      |
| ./d8/d0e/classlog4tango_1_1Level.htm |                                      |
| l#aa708c09b6a19a8cc8a3b19631561ca99> |                                      |
| `__ log4tango::LoggerStream::get\_le |                                      |
| vel   | (   | void    |    | )   | c |                                      |
| onst   |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+---------+----+-----+-- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the level for this stream.

Returns
    The level.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----+---------+----+-----+- |                                      |
| --------+                            |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `Logger <../../d4/d |                                      |
| 1c/classlog4tango_1_1Logger.html>`__ |                                      |
| \ & log4tango::LoggerStream::get\_lo |                                      |
| gger   | (   | void    |    | )   |  |                                      |
| const   |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----+---------+----+-----+- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the destination
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ for this stream.

Returns
    The `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+----+-----+----+     |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `LoggerStream <../. |                                      |
| ./d6/de1/classlog4tango_1_1LoggerStr |                                      |
| eam.html>`__\ & log4tango::LoggerStr |                                      |
| eam::operator<<   | (   | `LOG4TANGO |                                      |
| \_UNUSED <../../da/dd8/Portability_8 |                                      |
| hh.html#a3e82719800a6abe2ae163e2da67 |                                      |
| 39661>`__\ (`LogInitiator <../../d3/ |                                      |
| dfe/classlog4tango_1_1LogInitiator.h |                                      |
| tml>`__ &i)    |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Streams in a Initiator.

Just a trick to return a ref to self.

Parameters
    +-----+---------------------+
    | i   | The log initiator   |
    +-----+---------------------+

Returns
    A reference to itself.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+----+-----+----+     |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `LoggerStream <../. |                                      |
| ./d6/de1/classlog4tango_1_1LoggerStr |                                      |
| eam.html>`__\ & log4tango::LoggerStr |                                      |
| eam::operator<<   | (   | `LOG4TANGO |                                      |
| \_UNUSED <../../da/dd8/Portability_8 |                                      |
| hh.html#a3e82719800a6abe2ae163e2da67 |                                      |
| 39661>`__\ (`LogSeparator <../../d0/ |                                      |
| d2f/classlog4tango_1_1LogSeparator.h |                                      |
| tml>`__ &s)    |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Streams in a Separator.Sends the contents of the stream buffer to the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ with set level
and empties the buffer.

Parameters
    +-----+---------------------+
    | s   | The log separator   |
    +-----+---------------------+

Returns
    A reference to itself.

References
`flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+----+-----+----+           |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `LoggerStream <../. |                                      |
| ./d6/de1/classlog4tango_1_1LoggerStr |                                      |
| eam.html>`__\ & log4tango::LoggerStr |                                      |
| eam::operator<<   | (   | `LOG4TANGO |                                      |
| \_UNUSED <../../da/dd8/Portability_8 |                                      |
| hh.html#a3e82719800a6abe2ae163e2da67 |                                      |
| 39661>`__\ (`ls\_terminator <../../d |                                      |
| 4/db0/namespacelog4tango.html#ac25f1 |                                      |
| 8a9841eab936214ef50cdb08432>`__ endo |                                      |
| flog)    |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Streams in a ls\_manipulator.

Sends the contents of the stream buffer to the
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ with set level
and empties the buffer.

Parameters
    +------------+----------------------+
    | endoflog   | The log terminator   |
    +------------+----------------------+

Returns
    A reference to itself.

References
`flush() <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| --------------------------------+--- |                                      |
| ------+-----+----+                   |                                      |
| | `LOG4TANGO\_EXPORT <../../df/d5d/E |                                      |
| xport_8hh.html#abb9e874b4244b6247ac9 |                                      |
| dbb62a2c7b8f>`__ `LoggerStream <../. |                                      |
| ./d6/de1/classlog4tango_1_1LoggerStr |                                      |
| eam.html>`__\ & log4tango::LoggerStr |                                      |
| eam::operator<<   | (   | std::ios\_ |                                      |
| base &(\*)(std::ios\_base &)    | *\ |                                      |
| _F*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| --------------------------------+--- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Streams in a std stream manipulator.

Parameters
    +-------+----------------------------+
    | \_F   | the manipulator function   |
    +-------+----------------------------+

Returns
    a reference to self.

template<typename T >

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+--------------+-------+--- |                                      |
| --+----+                             |                                      |
| | `LoggerStream <../../d6/de1/classl |                                      |
| og4tango_1_1LoggerStream.html>`__\ & |                                      |
|  log4tango::LoggerStream::operator<< |                                      |
|    | (   | const T &    | *t*   | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+--------------+-------+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stream in arbitrary types and objects.

Parameters
    +-----+-------------------------------------+
    | t   | The value or object to stream in.   |
    +-----+-------------------------------------+

Returns
    A reference to itself.

References
`log4tango::Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__.

--------------

The documentation for this class was generated from the following files:

-  `LoggerStream.hh <../../d2/de3/LoggerStream_8hh_source.html>`__
-  `LoggerStream.cpp <../../d4/d11/LoggerStream_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
