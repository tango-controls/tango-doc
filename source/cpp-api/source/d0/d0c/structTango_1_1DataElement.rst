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
members <../../db/d70/structTango_1_1DataElement-members.html>`__

Tango::DataElement< T > Struct Template Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for extracting data from a device pipe blob.
`More... <../../d0/d0c/structTango_1_1DataElement.html#details>`__

Public Member Functions
-----------------------

 

`DataElement <../../d0/d0c/structTango_1_1DataElement.html#a1f3706c2c32f6953182cfde2798dc18f>`__
(const string
&\ `name <../../d0/d0c/structTango_1_1DataElement.html#a9991e976d3509e95b2251727640c7282>`__,
T
`value <../../d0/d0c/structTango_1_1DataElement.html#a0b593af779503f27457d6c44ea6bff27>`__)

 

| Create a
`DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__ object.
`More... <#a1f3706c2c32f6953182cfde2798dc18f>`__

 

 

`DataElement <../../d0/d0c/structTango_1_1DataElement.html#af5a5d4272dde06c89b12a490a34935b0>`__
(const string
&\ `name <../../d0/d0c/structTango_1_1DataElement.html#a9991e976d3509e95b2251727640c7282>`__)

 

| Create a
`DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__ object.
`More... <#af5a5d4272dde06c89b12a490a34935b0>`__

 

 

`DataElement <../../d0/d0c/structTango_1_1DataElement.html#acef99a390cec2bcd807a428992bcba81>`__
(T
`value <../../d0/d0c/structTango_1_1DataElement.html#a0b593af779503f27457d6c44ea6bff27>`__)

 

| Create a
`DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__ object.
`More... <#acef99a390cec2bcd807a428992bcba81>`__

 

 

`DataElement <../../d0/d0c/structTango_1_1DataElement.html#a050373c873fc54c47afb8319ff1d05de>`__
()

 

Public Attributes
-----------------

string 

`name <../../d0/d0c/structTango_1_1DataElement.html#a9991e976d3509e95b2251727640c7282>`__

 

| The data element name.
`More... <#a9991e976d3509e95b2251727640c7282>`__

 

T 

`value <../../d0/d0c/structTango_1_1DataElement.html#a0b593af779503f27457d6c44ea6bff27>`__

 

| The data element value.
`More... <#a0b593af779503f27457d6c44ea6bff27>`__

 

Detailed Description
--------------------

template<typename T>
 struct Tango::DataElement< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Fundamental type for extracting data from a device pipe blob.

This is the fundamental type for extracting data from a device pipe blob

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

template<typename T >

+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------+
| `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::\ `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__   | (   | const string &    | *name*,    |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------+
|                                                                                                                                                  |     | T                 | *value*    |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------+
|                                                                                                                                                  | )   |                   |            |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------+

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object.

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object for device pipe blob extraction

Parameters
    +--------+---------+--------------------------+
    | [in]   | name    | The data element name    |
    +--------+---------+--------------------------+
    | [in]   | value   | The data element value   |
    +--------+---------+--------------------------+

template<typename T >

+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+----------+-----+----+
| `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::\ `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__   | (   | const string &    | *name*   | )   |    |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+----------+-----+----+

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object.

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object for device pipe blob extraction

Parameters
    +--------+--------+-------------------------+
    | [in]   | name   | The data element name   |
    +--------+--------+-------------------------+

template<typename T >

+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+------+-----------+-----+----+
| `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::\ `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__   | (   | T    | *value*   | )   |    |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+------+-----------+-----+----+

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object.

Create a `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
object for device pipe blob extraction. Usefull for extraction into
TANGO CORBA sequence. See
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
extraction method

Parameters
    +--------+---------+--------------------------+
    | [in]   | value   | The data element value   |
    +--------+---------+--------------------------+

template<typename T >

+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::\ `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__   | (   |    | )   |    |
+--------------------------------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Member Data Documentation
-------------------------

template<typename T >

+---------------------------------------------------------------------------------------------+
| string `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::name   |
+---------------------------------------------------------------------------------------------+

The data element name.

template<typename T >

+-----------------------------------------------------------------------------------------+
| T `Tango::DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__\ < T >::value   |
+-----------------------------------------------------------------------------------------+

The data element value.

--------------

The documentation for this struct was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DataElement <../../d0/d0c/structTango_1_1DataElement.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
