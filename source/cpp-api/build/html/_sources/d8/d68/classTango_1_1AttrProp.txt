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

`Classes <#nested-classes>`__ \| `List of all
members <../../d5/d2e/classTango_1_1AttrProp-members.html>`__

Tango::AttrProp< T > Class Template Reference

`Server classes <../../da/d64/group__Server.html>`__

This class represents a `Tango <../../de/ddf/namespaceTango.html>`__
attribute property.
`More... <../../d8/d68/classTango_1_1AttrProp.html#details>`__

Inheritance diagram for Tango::AttrProp< T >:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a464a13c1dcecb483dff1aa8b29b183fd>`__
()

 

| Default constructor. `More... <#a464a13c1dcecb483dff1aa8b29b183fd>`__

 

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a509fe17d8f539d8a8734dfa852bd9f4e>`__
(const T &value)

 

| Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object. `More... <#a509fe17d8f539d8a8734dfa852bd9f4e>`__

 

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a96b27aee3ff878547fc5860f87f08ca2>`__
(const char \*value\_str)

 

| Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object. `More... <#a96b27aee3ff878547fc5860f87f08ca2>`__

 

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#abc19d1718a15994e87ac3c9979c48b59>`__
(const string &value\_str)

 

| Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object. `More... <#abc19d1718a15994e87ac3c9979c48b59>`__

 

Assignment operators

These operators allow to assign the value of the property by providing
the value or its string representation.

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ & 

`operator= <../../d8/d68/classTango_1_1AttrProp.html#a8c0c499c402739fd7449aa798b1609f5>`__
(const T &value)

 

| Assign the value of the attribute property.
`More... <#a8c0c499c402739fd7449aa798b1609f5>`__

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ & 

`operator= <../../d8/d68/classTango_1_1AttrProp.html#a4412614f38098403a1872488c1a10a21>`__
(const char \*value\_str)

 

| Assign the string representation of the attribute property value.
`More... <#a4412614f38098403a1872488c1a10a21>`__

 

`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ & 

`operator= <../../d8/d68/classTango_1_1AttrProp.html#ab3099f7d395a5bee1bff018dd37dc8f7>`__
(const string &value\_str)

 

| Assign the string representation of the attribute property value.
`More... <#ab3099f7d395a5bee1bff018dd37dc8f7>`__

 

Get/Set object members.

These methods allow the external world to get/set
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ instance data
members

T 

`get\_val <../../d8/d68/classTango_1_1AttrProp.html#a0c80445d1ce52c04813778057ee1bc22>`__
()

 

| Get the attribute property value.
`More... <#a0c80445d1ce52c04813778057ee1bc22>`__

 

string & 

`get\_str <../../d8/d68/classTango_1_1AttrProp.html#a265af5bc3684e8e88be9c027d4f095db>`__
()

 

| Get string representation of the attribute property value.
`More... <#a265af5bc3684e8e88be9c027d4f095db>`__

 

void 

`set\_val <../../d8/d68/classTango_1_1AttrProp.html#a275eeb284b55ce66cefdc06b5436a784>`__
(const T &value)

 

| Set the attribute property value.
`More... <#a275eeb284b55ce66cefdc06b5436a784>`__

 

void 

`set\_str <../../d8/d68/classTango_1_1AttrProp.html#a089ac8d3f4a88385be4c41b69fa31ae1>`__
(const char \*value\_str)

 

| Set string representation of the attribute property value.
`More... <#a089ac8d3f4a88385be4c41b69fa31ae1>`__

 

void 

`set\_str <../../d8/d68/classTango_1_1AttrProp.html#ab08e7d7ba473008754b457a74a7fde87>`__
(const string &value\_str)

 

| Set string representation of the attribute property value.
`More... <#ab08e7d7ba473008754b457a74a7fde87>`__

 

Check method

A method returning a boolean flag set to true if the attribute property
value has been assigned.

bool 

`is\_val <../../d8/d68/classTango_1_1AttrProp.html#a558a0456d0591c428f438e86e0afb2e4>`__
()

 

| Check if the attribute property value has been assigned.
`More... <#a558a0456d0591c428f438e86e0afb2e4>`__

 

Detailed Description
--------------------

template<typename T>
 class Tango::AttrProp< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~

This class represents a `Tango <../../de/ddf/namespaceTango.html>`__
attribute property.

Author
    trogucki

Revision
    19431

Constructor & Destructor Documentation
--------------------------------------

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
| | `Tango::AttrProp <../../d8/d68/cla |                                      |
| ssTango_1_1AttrProp.html>`__\ < T >: |                                      |
| :\ `AttrProp <../../d8/d68/classTang |                                      |
| o_1_1AttrProp.html>`__   | (   |     |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Default constructor.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| ----------+-----------+-----+----+   |                                      |
| | `Tango::AttrProp <../../d8/d68/cla |                                      |
| ssTango_1_1AttrProp.html>`__\ < T >: |                                      |
| :\ `AttrProp <../../d8/d68/classTang |                                      |
| o_1_1AttrProp.html>`__   | (   | con |                                      |
| st T &    | *value*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| ----------+-----------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object.

Parameters
    +---------+---------------------------------+
    | value   | The attribute property value.   |
    +---------+---------------------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
| | `Tango::AttrProp <../../d8/d68/cla |                                      |
| ssTango_1_1AttrProp.html>`__\ < T >: |                                      |
| :\ `AttrProp <../../d8/d68/classTang |                                      |
| o_1_1AttrProp.html>`__   | (   | con |                                      |
| st char \*    | *value\_str*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object.

Parameters
    +--------------+--------------------------------------------------------+
    | value\_str   | The 'C string' representation of attribute property.   |
    +--------------+--------------------------------------------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| ---------------+----------------+--- |                                      |
| --+----+                             |                                      |
| | `Tango::AttrProp <../../d8/d68/cla |                                      |
| ssTango_1_1AttrProp.html>`__\ < T >: |                                      |
| :\ `AttrProp <../../d8/d68/classTang |                                      |
| o_1_1AttrProp.html>`__   | (   | con |                                      |
| st string &    | *value\_str*   | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| ---------------+----------------+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a new `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
object.

Parameters
    +--------------+----------------------------------------------------------+
    | value\_str   | The string representation of attribute property value.   |
    +--------------+----------------------------------------------------------+

Member Function Documentation
-----------------------------

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | string& `Tango::AttrProp <../../d8 |                                      |
| /d68/classTango_1_1AttrProp.html>`__ |                                      |
| \ < T >::get\_str   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get string representation of the attribute property value.

Returns
    The string representation of the attribute property value.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | T `Tango::AttrProp <../../d8/d68/c |                                      |
| lassTango_1_1AttrProp.html>`__\ < T  |                                      |
| >::get\_val   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the attribute property value.

Returns
    The attribute property value.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | bool `Tango::AttrProp <../../d8/d6 |                                      |
| 8/classTango_1_1AttrProp.html>`__\ < |                                      |
|  T >::is\_val   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute property value has been assigned.

This method returns a boolean set to true if the attribute property
value has been assigned.

Returns
    A boolean set to true if the attribute property value has been
    assigned

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+--------------+-----------+-- |                                      |
| ---+----+                            |                                      |
| | `AttrProp <../../d8/d68/classTango |                                      |
| _1_1AttrProp.html>`__\ & `Tango::Att |                                      |
| rProp <../../d8/d68/classTango_1_1At |                                      |
| trProp.html>`__\ < T >::operator=    |                                      |
| | (   | const T &    | *value*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+--------------+-----------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Assign the value of the attribute property.

Parameters
    +---------+--------------------------------------+
    | value   | A value of the attribute property.   |
    +---------+--------------------------------------+

Returns
    `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ object with
    both value and its string representation set.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+------------------+---------- |                                      |
| ------+-----+----+                   |                                      |
| | `AttrProp <../../d8/d68/classTango |                                      |
| _1_1AttrProp.html>`__\ & `Tango::Att |                                      |
| rProp <../../d8/d68/classTango_1_1At |                                      |
| trProp.html>`__\ < T >::operator=    |                                      |
| | (   | const char \*    | *value\_s |                                      |
| tr*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+------------------+---------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Assign the string representation of the attribute property value.

Parameters
    +--------------+----------------------------------------------------------------+
    | value\_str   | A 'C string' representation of the attribute property value.   |
    +--------------+----------------------------------------------------------------+

Returns
    `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ object with
    the string representation of its value set.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+-------------------+--------- |                                      |
| -------+-----+----+                  |                                      |
| | `AttrProp <../../d8/d68/classTango |                                      |
| _1_1AttrProp.html>`__\ & `Tango::Att |                                      |
| rProp <../../d8/d68/classTango_1_1At |                                      |
| trProp.html>`__\ < T >::operator=    |                                      |
| | (   | const string &    | *value\_ |                                      |
| str*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+-------------------+--------- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Assign the string representation of the attribute property value.

Parameters
    +--------------+------------------------------------------------------------+
    | value\_str   | A string representation of the attribute property value.   |
    +--------------+------------------------------------------------------------+

Returns
    `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__ object with
    the string representation of its value set.

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| ------+----------------+-----+----+  |                                      |
| | void `Tango::AttrProp <../../d8/d6 |                                      |
| 8/classTango_1_1AttrProp.html>`__\ < |                                      |
|  T >::set\_str   | (   | const char  |                                      |
| \*    | *value\_str*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| ------+----------------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set string representation of the attribute property value.

Parameters
    +--------------+----------------------------------------------------------------------+
    | value\_str   | The the 'C string' representation of the attribute property value.   |
    +--------------+----------------------------------------------------------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| -------+----------------+-----+----+ |                                      |
| | void `Tango::AttrProp <../../d8/d6 |                                      |
| 8/classTango_1_1AttrProp.html>`__\ < |                                      |
|  T >::set\_str   | (   | const strin |                                      |
| g &    | *value\_str*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| -------+----------------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set string representation of the attribute property value.

Parameters
    +--------------+------------------------------------------------------------------+
    | value\_str   | The the string representation of the attribute property value.   |
    +--------------+------------------------------------------------------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| --+-----------+-----+----+           |                                      |
| | void `Tango::AttrProp <../../d8/d6 |                                      |
| 8/classTango_1_1AttrProp.html>`__\ < |                                      |
|  T >::set\_val   | (   | const T &   |                                      |
|   | *value*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| --+-----------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the attribute property value.

The value is automatically converted to its string representation.

Parameters
    +---------+----------------------------------------+
    | value   | The value of the attribute property.   |
    +---------+----------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `attrprop.h <../../d2/d19/attrprop_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d9/da6/classTango_1_1AttrProp__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
