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
members <../../d8/d16/classTango_1_1CmdHistoryStack-members.html>`__

Tango::CmdHistoryStack< T > Class Template Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a used to pass a command result history when the user
directly fills the command polling buffer.
`More... <../../dc/d8f/classTango_1_1CmdHistoryStack.html#details>`__

Public Member Functions
-----------------------

void 

`clear <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ae4ac3a6bb53c0661656a3a885a56347c>`__
()

 

| Clear the stack. `More... <#ae4ac3a6bb53c0661656a3a885a56347c>`__

 

vector<
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T > >
& 

`get\_data <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a60e2fac55007f4697ca68bc35a2a7fdc>`__
()

 

| Get stack data. `More... <#a60e2fac55007f4697ca68bc35a2a7fdc>`__

 

size\_t 

`length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a21c635342bfae43ae1db2e4e721b4b4f>`__
()

 

| Get stack depth. `More... <#a21c635342bfae43ae1db2e4e721b4b4f>`__

 

void 

`length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ab9d2cfc6b3d8fca2a11ad3e7d2a47495>`__
(long nb)

 

| Reserve memory for stack elements.
`More... <#ab9d2cfc6b3d8fca2a11ad3e7d2a47495>`__

 

void 

`push <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a355ba8abdd8a382b3c0aa09def8a57ca>`__
(`Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ <
T > const &elt)

 

| Store a new element in the stack.
`More... <#a355ba8abdd8a382b3c0aa09def8a57ca>`__

 

Detailed Description
--------------------

template<typename T>
 class Tango::CmdHistoryStack< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This class is a used to pass a command result history when the user
directly fills the command polling buffer.

Each element in this stack will be used to store one element of the
command polling buffer

$Author$ $Revision$

Member Function Documentation
-----------------------------

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
| | void `Tango::CmdHistoryStack <../. |                                      |
| ./dc/d8f/classTango_1_1CmdHistorySta |                                      |
| ck.html>`__\ < T >::clear   | (   |  |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Clear the stack.

template<typename T>

+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| vector<\ `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ <T> >& `Tango::CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__\ < T >::get\_data   | (   |    | )   |    |
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get stack data.

Returns
    The stack itself

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
| | size\_t `Tango::CmdHistoryStack <. |                                      |
| ./../dc/d8f/classTango_1_1CmdHistory |                                      |
| Stack.html>`__\ < T >::length   | (  |                                      |
|   |    | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get stack depth.

Returns
    The stack depth

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+--------+-----+----+       |                                      |
| | void `Tango::CmdHistoryStack <../. |                                      |
| ./dc/d8f/classTango_1_1CmdHistorySta |                                      |
| ck.html>`__\ < T >::length   | (   | |                                      |
|  long    | *nb*   | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+--------+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reserve memory for stack elements.

Parameters
    +------+----------------------------+
    | nb   | The stack element number   |
    +------+----------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------+---------+-----+----+
| void `Tango::CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__\ < T >::push   | (   | `Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T > const &    | *elt*   | )   |    |
+--------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------+---------+-----+----+

Store a new element in the stack.

This method stores a new element in the stack

Parameters
    +-------+-------------------+
    | elt   | The new element   |
    +-------+-------------------+

--------------

The documentation for this class was generated from the following file:

-  `pollext.h <../../db/d17/pollext_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
