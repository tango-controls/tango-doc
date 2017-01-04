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
members <../../d6/d5c/classTango_1_1AttrHistoryStack-members.html>`__

Tango::AttrHistoryStack< T > Class Template Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a used to pass an attribute value history when the user
directly fills the attribute polling buffer.
`More... <../../d0/dcb/classTango_1_1AttrHistoryStack.html#details>`__

Public Member Functions
-----------------------

void 

`clear <../../d0/dcb/classTango_1_1AttrHistoryStack.html#aac60d22a112badcb3c27fb0b6c22eecd>`__
()

 

| Clear the stack. `More... <#aac60d22a112badcb3c27fb0b6c22eecd>`__

 

vector<
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >
> & 

`get\_data <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a73318d3db023c337bdbeae5fc743b3fd>`__
()

 

| Get stack data. `More... <#a73318d3db023c337bdbeae5fc743b3fd>`__

 

size\_t 

`length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a078798e0c374f134f0cfb315a515f028>`__
()

 

| Get stack depth. `More... <#a078798e0c374f134f0cfb315a515f028>`__

 

void 

`length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#afcf19d9e75e02341bb8533cc7c61df5e>`__
(long nb)

 

| Reserve memory for stack elements.
`More... <#afcf19d9e75e02341bb8533cc7c61df5e>`__

 

void 

`push <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a6356c9fc9d4dd06b941b8e4a36de1f90>`__
(`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T
> const &elt)

 

| Store a new element in the stack.
`More... <#a6356c9fc9d4dd06b941b8e4a36de1f90>`__

 

Detailed Description
--------------------

template<typename T>
 class Tango::AttrHistoryStack< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This class is a used to pass an attribute value history when the user
directly fills the attribute polling buffer.

Each element in this stack will be used to store one element of the
attribute polling buffer

$Author$ $Revision$

Member Function Documentation
-----------------------------

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
| | void `Tango::AttrHistoryStack <../ |                                      |
| ../d0/dcb/classTango_1_1AttrHistoryS |                                      |
| tack.html>`__\ < T >::clear   | (    |                                      |
| |    | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Clear the stack.

template<typename T>

+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| vector<\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ <T> >& `Tango::AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__\ < T >::get\_data   | (   |    | )   |    |
+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get stack data.

Returns
    The stack itself

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
| | size\_t `Tango::AttrHistoryStack < |                                      |
| ../../d0/dcb/classTango_1_1AttrHisto |                                      |
| ryStack.html>`__\ < T >::length   |  |                                      |
| (   |    | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get stack depth.

Returns
    The stack depth

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------+--------+-----+----+     |                                      |
| | void `Tango::AttrHistoryStack <../ |                                      |
| ../d0/dcb/classTango_1_1AttrHistoryS |                                      |
| tack.html>`__\ < T >::length   | (   |                                      |
|  | long    | *nb*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------+--------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reserve memory for stack elements.

Parameters
    +------+----------------------------+
    | nb   | The stack element number   |
    +------+----------------------------+

template<typename T>

+----------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------+---------+-----+----+
| void `Tango::AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__\ < T >::push   | (   | `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T > const &    | *elt*   | )   |    |
+----------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------+---------+-----+----+

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
-  `AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
