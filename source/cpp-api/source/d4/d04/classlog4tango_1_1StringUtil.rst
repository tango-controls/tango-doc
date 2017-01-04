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

`Static Public Member Functions <#pub-static-methods>`__ \| `List of all
members <../../dd/d55/classlog4tango_1_1StringUtil-members.html>`__

log4tango::StringUtil Class Reference

``#include "StringUtil.hh"``

Static Public Member Functions
------------------------------

static unsigned int 

`split <../../d4/d04/classlog4tango_1_1StringUtil.html#a0cbc8f98a127ba0cb36df3845e16405c>`__
(std::vector< std::string > &v, const std::string &s, char delimiter,
unsigned int maxSegments=INT\_MAX)

 

| splits a string into a vector of string segments based on the given
delimiter. `More... <#a0cbc8f98a127ba0cb36df3845e16405c>`__

 

template<typename T >

static unsigned int 

`split <../../d4/d04/classlog4tango_1_1StringUtil.html#aaefb28c23a501416d11eb8a0c41b5fd2>`__
(T &output, const std::string &s, char delimiter, unsigned int
maxSegments=INT\_MAX)

 

| splits a string into string segments based on the given delimiter and
assigns the segments through an output\_iterator.
`More... <#aaefb28c23a501416d11eb8a0c41b5fd2>`__

 

static std::string 

`trim <../../d4/d04/classlog4tango_1_1StringUtil.html#a5b1f1af63d4ac9d16150d08f2af6ebbc>`__
(const std::string &s)

 

| Returns a string identical to the given string but without leading or
trailing HTABs or spaces.
`More... <#a5b1f1af63d4ac9d16150d08f2af6ebbc>`__

 

static std::string 

`vform <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__
(const char \*format, va\_list args)

 

| Returns a string contructed from the a format specifier and a va\_list
of arguments, analogously to vprintf(3).
`More... <#a1588cfe00d2951f175025f949793f866>`__

 

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
| | unsigned int log4tango::StringUtil |                                      |
| ::split   | (   | std::vector< std:: |                                      |
| string > &    | *v*,                 |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|           |     | const std::string  |                                      |
| &             | *s*,                 |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|           |     | char               |                                      |
|               | *delimiter*,         |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|           |     | unsigned int       |                                      |
|               | *maxSegments* = ``IN |                                      |
| T_MAX``    |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|           | )   |                    |                                      |
|               |                      |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --------------+--------------------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

splits a string into a vector of string segments based on the given
delimiter.

Parameters
    +---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | v             | The vector in which the segments will be stored. The vector will be emptied before storing the segments                                                                                        |
    +---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | s             | The string to split into segments.                                                                                                                                                             |
    +---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | delimiter     | The delimiter character                                                                                                                                                                        |
    +---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | maxSegments   | the maximum number of segments. Upon return v.size() <= maxSegments. The string is scanned from left to right so v[maxSegments - 1] may contain a string containing the delimiter character.   |
    +---------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Returns
    The actual number of segments (limited by maxSegments).

template<typename T >

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
| | static unsigned int log4tango::Str |                                      |
| ingUtil::split   | (   | T &         |                                      |
|             | *output*,              |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                  |     | const std:: |                                      |
| string &    | *s*,                   |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                  |     | char        |                                      |
|             | *delimiter*,           |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                  |     | unsigned in |                                      |
| t           | *maxSegments* = ``INT_ |                                      |
| MAX``    |                           |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                  | )   |             |                                      |
|             |                        |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------+----------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

splits a string into string segments based on the given delimiter and
assigns the segments through an output\_iterator.

Parameters
    +---------------+-------------------------------------------------------------------------------------------------------------------------+
    | output        | The output\_iterator through which to assign the string segments. Typically this will be a back\_insertion\_iterator.   |
    +---------------+-------------------------------------------------------------------------------------------------------------------------+
    | s             | The string to split into segments.                                                                                      |
    +---------------+-------------------------------------------------------------------------------------------------------------------------+
    | delimiter     | The delimiter character                                                                                                 |
    +---------------+-------------------------------------------------------------------------------------------------------------------------+
    | maxSegments   | The maximum number of segments.                                                                                         |
    +---------------+-------------------------------------------------------------------------------------------------------------------------+

Returns
    The actual number of segments (limited by maxSegments).

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| --------+-----+--------------------- |                                      |
| ---+-------+-----+----+              |                                      |
| | std::string log4tango::StringUtil: |                                      |
| :trim   | (   | const std::string &  |                                      |
|    | *s*   | )   |    |              |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ---+-------+-----+----+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a string identical to the given string but without leading or
trailing HTABs or spaces.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ---------+-----+------------------+- |                                      |
| ------------+                        |                                      |
| | std::string log4tango::StringUtil: |                                      |
| :vform   | (   | const char \*    |  |                                      |
| *format*,   |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+------------------+- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | va\_list         |  |                                      |
| *args*      |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+------------------+- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          | )   |                  |  |                                      |
|             |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+------------------+- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a string contructed from the a format specifier and a va\_list
of arguments, analogously to vprintf(3).

Parameters
    +----------+------------------------------+
    | format   | the format specifier.        |
    +----------+------------------------------+
    | args     | the va\_list of arguments.   |
    +----------+------------------------------+

References
`VSNPRINTF <../../da/dfc/StringUtil_8cpp.html#ac2e4f48c3da557e8b268aee96009e135>`__.

Referenced by
`log4tango::Logger::debug() <../../d4/d1c/classlog4tango_1_1Logger.html#a86870349be1352d8c529e713acf51a0b>`__,
`log4tango::Logger::error() <../../d4/d1c/classlog4tango_1_1Logger.html#ac9c2f129c56991f6bf7148ce5b7f1518>`__,
`log4tango::Logger::fatal() <../../d4/d1c/classlog4tango_1_1Logger.html#a4c8832412bde8329c5a69acd88e08b8c>`__,
`log4tango::Logger::info() <../../d4/d1c/classlog4tango_1_1Logger.html#adaba6152f4a39580d48bae035ac30778>`__,
`log4tango::Logger::log() <../../d4/d1c/classlog4tango_1_1Logger.html#aebe7a33e64c1dd47d908d5a1eec18545>`__,
`log4tango::Logger::log\_unconditionally() <../../d4/d1c/classlog4tango_1_1Logger.html#adc92f13df7647dbeac96120bbda218f4>`__,
and
`log4tango::Logger::warn() <../../d4/d1c/classlog4tango_1_1Logger.html#ab7a7dfad91aa2196ed91a607808f1061>`__.

--------------

The documentation for this class was generated from the following files:

-  `StringUtil.hh <../../de/d24/StringUtil_8hh_source.html>`__
-  `StringUtil.cpp <../../da/dfc/StringUtil_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `StringUtil <../../d4/d04/classlog4tango_1_1StringUtil.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
