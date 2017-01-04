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

`Public Types <#pub-types>`__ \| `Static Public Member
Functions <#pub-static-methods>`__ \| `List of all
members <../../d8/d2d/classlog4tango_1_1Level-members.html>`__

log4tango::Level Class Reference

``#include "Level.hh"``

Public Types
------------

enum  

| `LevelLevel <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461>`__
{
| 
  `OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__
= 100,
| 
  `FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__
= 200,
| 
  `ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__
= 300,
| 
  `WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__
= 400,
| 
  `INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__
= 500,
| 
  `DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__
= 600
|  }

 

| Levels of Priorities.
`More... <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461>`__

 

typedef int 

`Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

 

| The type of `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__
Values. `More... <#aa708c09b6a19a8cc8a3b19631561ca99>`__

 

Static Public Member Functions
------------------------------

static const std::string & 

`get\_name <../../d8/d0e/classlog4tango_1_1Level.html#a613426ab63e991eed00912c0dfd870c0>`__
(`Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level)

 

| Returns the name of the given level value.
`More... <#a613426ab63e991eed00912c0dfd870c0>`__

 

static
`Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ 

`get\_value <../../d8/d0e/classlog4tango_1_1Level.html#acb4420eb3aa2761f405a08c5f6a00ae1>`__
(const std::string &level\_name) throw (std::invalid\_argument)

 

| Returns the value of the given level name.
`More... <#acb4420eb3aa2761f405a08c5f6a00ae1>`__

 

Member Typedef Documentation
----------------------------

+-------------------------------------------------------------------------------------------------------------------------+
| typedef int `log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__   |
+-------------------------------------------------------------------------------------------------------------------------+

The type of `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__
Values.

Member Enumeration Documentation
--------------------------------

+-----------------------------------------------------------------------------------------------------------------------+
| enum `log4tango::Level::LevelLevel <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461>`__   |
+-----------------------------------------------------------------------------------------------------------------------+

Levels of Priorities.

Enumerator

OFF 

FATAL 

ERROR 

WARN 

INFO 

DEBUG 

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----------+-----+----+      |                                      |
| | const std::string & log4tango::Lev |                                      |
| el::get\_name   | (   | `Value <../. |                                      |
| ./d8/d0e/classlog4tango_1_1Level.htm |                                      |
| l#aa708c09b6a19a8cc8a3b19631561ca99> |                                      |
| `__    | *level*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the name of the given level value.

Currently, if the value is not one of the LevelLevel values, the method
returns the name of the largest level smaller the given value.

Parameters
    +---------+-----------------------------------+
    | level   | the numeric value of the level.   |
    +---------+-----------------------------------+

Returns
    a string representing the name of the level.

References
`NUM\_LEVELS <../../de/db3/Level_8cpp.html#ab122432988c73c06becf1ce34077e43b>`__.

Referenced by
`log4tango::LevelComponent::append() <../../d4/d71/structlog4tango_1_1LevelComponent.html#a66b5059085fd0f76a3f68d8add4a2a3a>`__,
`log4tango::XMLLayout::format() <../../d2/d7c/classlog4tango_1_1XMLLayout.html#a0f455c8af4768383dc989923eddc72f3>`__,
and
`log4tango::Layout::format() <../../d7/da6/classlog4tango_1_1Layout.html#a0ade719b2ab1ce512aca5699f136eb8b>`__.

`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
log4tango::Level::get\_value

(

const std::string & 

*level\_name*

)

throw

(

std::invalid\_argument

)

static

Returns the value of the given level name.

This can be either one of "OFF", "ERRROR", ... or a decimal string
representation of the value, e.g. '500' for DEBUG.

Parameters
    +---------------+----------------------------------------------+
    | level\_name   | the string containing the the of the level   |
    +---------------+----------------------------------------------+

Returns
    the value corresponding with the level name

Exceptions
    +--------------------------+------------------------------------------------------------------------------------------------------------------------------+
    | std::invalid\_argument   | if the level\_name does not correspond with a known `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__ name or a number   |
    +--------------------------+------------------------------------------------------------------------------------------------------------------------------+

References
`NUM\_LEVELS <../../de/db3/Level_8cpp.html#ab122432988c73c06becf1ce34077e43b>`__.

--------------

The documentation for this class was generated from the following files:

-  `Level.hh <../../d2/d33/Level_8hh_source.html>`__
-  `Level.cpp <../../de/db3/Level_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `Level <../../d8/d0e/classlog4tango_1_1Level.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
