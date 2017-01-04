+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

`Functions <#func-members>`__

Easy printing operator overloading functions

Overloading of the << operator between C++ ostream and some
`Tango <../../de/ddf/namespaceTango.html>`__ types.
`More... <#details>`__

Functions
---------

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga213256d883d58b4b92b68ad4206aa7f7>`__
(ostream &lval, const DevVarCharArray &rval)

 

| Print a DevVarCharArray.
`More... <#ga213256d883d58b4b92b68ad4206aa7f7>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga0634c13c03f416bc6ed40eb9a0e3aa61>`__
(ostream &lval, const DevVarShortArray &rval)

 

| Print a DevVarShortArray.
`More... <#ga0634c13c03f416bc6ed40eb9a0e3aa61>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga526a3b02fee65f31055a344ae05c253f>`__
(ostream &lval, const DevVarLongArray &rval)

 

| Print a DevVarLongArray.
`More... <#ga526a3b02fee65f31055a344ae05c253f>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga2cb69bb8fa47ffeeea6faaa5e54573d7>`__
(ostream &lval, const DevVarLong64Array &rval)

 

| Print a DevVarLong64Array.
`More... <#ga2cb69bb8fa47ffeeea6faaa5e54573d7>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#gab83d969cc0c817f26f238606131fd148>`__
(ostream &lval, const DevVarFloatArray &rval)

 

| Print a DevVarFloatArray.
`More... <#gab83d969cc0c817f26f238606131fd148>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga631fd756fea5395eb31839fd6bb7f2da>`__
(ostream &lval, const DevVarDoubleArray &rval)

 

| Print a DevVarDoubleArray.
`More... <#ga631fd756fea5395eb31839fd6bb7f2da>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga27f592e1a0289f21e241c34a238f1520>`__
(ostream &lval, const DevVarBooleanArray &rval)

 

| Print a DevVarBooleanArray.
`More... <#ga27f592e1a0289f21e241c34a238f1520>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga3a28058540000f30efe42a7b6988b2cd>`__
(ostream &lval, const DevVarUShortArray &rval)

 

| Print a DevVarUShortArray.
`More... <#ga3a28058540000f30efe42a7b6988b2cd>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#gaaf5d2a8d0926a629c8ffe5d8814e933f>`__
(ostream &lval, const DevVarULongArray &rval)

 

| Print a DevVarULongArray.
`More... <#gaaf5d2a8d0926a629c8ffe5d8814e933f>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga2bf34aa1481440d055ec63beee55076c>`__
(ostream &lval, const DevVarULong64Array &rval)

 

| Print a DevVarULong64Array.
`More... <#ga2bf34aa1481440d055ec63beee55076c>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#ga0b8be84caf7997aeb9fbe51fc0a781f7>`__
(ostream &lval, const DevVarStringArray &rval)

 

| Print a DevVarStringArray.
`More... <#ga0b8be84caf7997aeb9fbe51fc0a781f7>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#gacf5f7184cbe21f4e68cd235343ed63a3>`__
(ostream &lval, const DevVarStateArray &rval)

 

| Print a DevVarStateArray.
`More... <#gacf5f7184cbe21f4e68cd235343ed63a3>`__

 

ostream & 

`Tango::operator<< <../../d1/d56/group__Eas.html#gade367a22d3a0c1b38afbf2339dc6b5e6>`__
(ostream &lval, const DevVarEncodedArray &rval)

 

| Print a DevVarEncodedArray.
`More... <#gade367a22d3a0c1b38afbf2339dc6b5e6>`__

 

Detailed Description
--------------------

Overloading of the << operator between C++ ostream and some
`Tango <../../de/ddf/namespaceTango.html>`__ types.

Function Documentation
----------------------

+------------------------------+-----+----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                  | *lval*,   |
+------------------------------+-----+----------------------------+-----------+
|                              |     | const DevVarCharArray &    | *rval*    |
+------------------------------+-----+----------------------------+-----------+
|                              | )   |                            |           |
+------------------------------+-----+----------------------------+-----------+

Print a DevVarCharArray.

One line is printed for each sequence element.

Parameters
    +--------+----------------------------------------------+
    | lval   | The C++ stream used for printing             |
    +--------+----------------------------------------------+
    | rval   | The DevVarCharArray sequence to be printed   |
    +--------+----------------------------------------------+

+------------------------------+-----+-----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                   | *lval*,   |
+------------------------------+-----+-----------------------------+-----------+
|                              |     | const DevVarShortArray &    | *rval*    |
+------------------------------+-----+-----------------------------+-----------+
|                              | )   |                             |           |
+------------------------------+-----+-----------------------------+-----------+

Print a DevVarShortArray.

One line is printed for each sequence element.

Parameters
    +--------+-----------------------------------------------+
    | lval   | The C++ stream used for printing              |
    +--------+-----------------------------------------------+
    | rval   | The DevVarShortArray sequence to be printed   |
    +--------+-----------------------------------------------+

+------------------------------+-----+----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                  | *lval*,   |
+------------------------------+-----+----------------------------+-----------+
|                              |     | const DevVarLongArray &    | *rval*    |
+------------------------------+-----+----------------------------+-----------+
|                              | )   |                            |           |
+------------------------------+-----+----------------------------+-----------+

Print a DevVarLongArray.

One line is printed for each sequence element.

Parameters
    +--------+----------------------------------------------+
    | lval   | The C++ stream used for printing             |
    +--------+----------------------------------------------+
    | rval   | The DevVarLongArray sequence to be printed   |
    +--------+----------------------------------------------+

+------------------------------+-----+------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                    | *lval*,   |
+------------------------------+-----+------------------------------+-----------+
|                              |     | const DevVarLong64Array &    | *rval*    |
+------------------------------+-----+------------------------------+-----------+
|                              | )   |                              |           |
+------------------------------+-----+------------------------------+-----------+

Print a DevVarLong64Array.

One line is printed for each sequence element.

Parameters
    +--------+------------------------------------------------+
    | lval   | The C++ stream used for printing               |
    +--------+------------------------------------------------+
    | rval   | The DevVarLong64Array sequence to be printed   |
    +--------+------------------------------------------------+

+------------------------------+-----+-----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                   | *lval*,   |
+------------------------------+-----+-----------------------------+-----------+
|                              |     | const DevVarFloatArray &    | *rval*    |
+------------------------------+-----+-----------------------------+-----------+
|                              | )   |                             |           |
+------------------------------+-----+-----------------------------+-----------+

Print a DevVarFloatArray.

One line is printed for each sequence element.

Parameters
    +--------+-----------------------------------------------+
    | lval   | The C++ stream used for printing              |
    +--------+-----------------------------------------------+
    | rval   | The DevVarFloatArray sequence to be printed   |
    +--------+-----------------------------------------------+

+------------------------------+-----+------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                    | *lval*,   |
+------------------------------+-----+------------------------------+-----------+
|                              |     | const DevVarDoubleArray &    | *rval*    |
+------------------------------+-----+------------------------------+-----------+
|                              | )   |                              |           |
+------------------------------+-----+------------------------------+-----------+

Print a DevVarDoubleArray.

One line is printed for each sequence element.

Parameters
    +--------+------------------------------------------------+
    | lval   | The C++ stream used for printing               |
    +--------+------------------------------------------------+
    | rval   | The DevVarDoubleArray sequence to be printed   |
    +--------+------------------------------------------------+

+------------------------------+-----+-------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                     | *lval*,   |
+------------------------------+-----+-------------------------------+-----------+
|                              |     | const DevVarBooleanArray &    | *rval*    |
+------------------------------+-----+-------------------------------+-----------+
|                              | )   |                               |           |
+------------------------------+-----+-------------------------------+-----------+

Print a DevVarBooleanArray.

One line is printed for each sequence element.

Parameters
    +--------+-------------------------------------------------+
    | lval   | The C++ stream used for printing                |
    +--------+-------------------------------------------------+
    | rval   | The DevVarBooleanArray sequence to be printed   |
    +--------+-------------------------------------------------+

+------------------------------+-----+------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                    | *lval*,   |
+------------------------------+-----+------------------------------+-----------+
|                              |     | const DevVarUShortArray &    | *rval*    |
+------------------------------+-----+------------------------------+-----------+
|                              | )   |                              |           |
+------------------------------+-----+------------------------------+-----------+

Print a DevVarUShortArray.

One line is printed for each sequence element.

Parameters
    +--------+------------------------------------------------+
    | lval   | The C++ stream used for printing               |
    +--------+------------------------------------------------+
    | rval   | The DevVarUShortArray sequence to be printed   |
    +--------+------------------------------------------------+

+------------------------------+-----+-----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                   | *lval*,   |
+------------------------------+-----+-----------------------------+-----------+
|                              |     | const DevVarULongArray &    | *rval*    |
+------------------------------+-----+-----------------------------+-----------+
|                              | )   |                             |           |
+------------------------------+-----+-----------------------------+-----------+

Print a DevVarULongArray.

One line is printed for each sequence element.

Parameters
    +--------+-----------------------------------------------+
    | lval   | The C++ stream used for printing              |
    +--------+-----------------------------------------------+
    | rval   | The DevVarULongArray sequence to be printed   |
    +--------+-----------------------------------------------+

+------------------------------+-----+-------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                     | *lval*,   |
+------------------------------+-----+-------------------------------+-----------+
|                              |     | const DevVarULong64Array &    | *rval*    |
+------------------------------+-----+-------------------------------+-----------+
|                              | )   |                               |           |
+------------------------------+-----+-------------------------------+-----------+

Print a DevVarULong64Array.

One line is printed for each sequence element.

Parameters
    +--------+-------------------------------------------------+
    | lval   | The C++ stream used for printing                |
    +--------+-------------------------------------------------+
    | rval   | The DevVarULong64Array sequence to be printed   |
    +--------+-------------------------------------------------+

+------------------------------+-----+------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                    | *lval*,   |
+------------------------------+-----+------------------------------+-----------+
|                              |     | const DevVarStringArray &    | *rval*    |
+------------------------------+-----+------------------------------+-----------+
|                              | )   |                              |           |
+------------------------------+-----+------------------------------+-----------+

Print a DevVarStringArray.

One line is printed for each sequence element.

Parameters
    +--------+------------------------------------------------+
    | lval   | The C++ stream used for printing               |
    +--------+------------------------------------------------+
    | rval   | The DevVarStringArray sequence to be printed   |
    +--------+------------------------------------------------+

+------------------------------+-----+-----------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                   | *lval*,   |
+------------------------------+-----+-----------------------------+-----------+
|                              |     | const DevVarStateArray &    | *rval*    |
+------------------------------+-----+-----------------------------+-----------+
|                              | )   |                             |           |
+------------------------------+-----+-----------------------------+-----------+

Print a DevVarStateArray.

One line is printed for each sequence element.

Parameters
    +--------+-----------------------------------------------+
    | lval   | The C++ stream used for printing              |
    +--------+-----------------------------------------------+
    | rval   | The DevVarStateArray sequence to be printed   |
    +--------+-----------------------------------------------+

+------------------------------+-----+-------------------------------+-----------+
| ostream& Tango::operator<<   | (   | ostream &                     | *lval*,   |
+------------------------------+-----+-------------------------------+-----------+
|                              |     | const DevVarEncodedArray &    | *rval*    |
+------------------------------+-----+-------------------------------+-----------+
|                              | )   |                               |           |
+------------------------------+-----+-------------------------------+-----------+

Print a DevVarEncodedArray.

One line is printed for each sequence element.

Parameters
    +--------+-------------------------------------------------+
    | lval   | The C++ stream used for printing                |
    +--------+-------------------------------------------------+
    | rval   | The DevVarEncodedArray sequence to be printed   |
    +--------+-------------------------------------------------+

-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
