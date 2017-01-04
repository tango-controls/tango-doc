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
members <../../d4/d11/classTango_1_1GroupAttrReply-members.html>`__

Tango::GroupAttrReply Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Group Client
classes <../../db/dc1/group__Grp.html>`__

Single element group reply for a read attribute execution.
`More... <../../d5/dae/classTango_1_1GroupAttrReply.html#details>`__

Inheritance diagram for Tango::GroupAttrReply:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::GroupAttrReply:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ & 

`get\_data <../../d5/dae/classTango_1_1GroupAttrReply.html#adac0b677ce81ec7e66f3c53872adea86>`__
()

 

| Get attribute data. `More... <#adac0b677ce81ec7e66f3c53872adea86>`__

 

template<typename T >

bool 

`operator>> <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__
(T &dest)

 

| Get attribute data and extract them.
`More... <#a421f7a196fc46f20b76a2124da30de95>`__

 

|-| Public Member Functions inherited from
`Tango::GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

const std::string & 

`dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__
() const

 

| Get device name. `More... <#a4fe578ba1fcd03239b7dc589ffc1af77>`__

 

const DevErrorList & 

`get\_err\_stack <../../de/deb/classTango_1_1GroupReply.html#a47419919cad3f689140757bd09eae457>`__
() const

 

| Get error stack. `More... <#a47419919cad3f689140757bd09eae457>`__

 

bool 

`has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__
() const

 

| Check if an error has occured.
`More... <#aec0def5a9df786134dc9cb8c66c21cb8>`__

 

const std::string & 

`obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__
() const

 

| Get object name. `More... <#a13564b3e6df04a5257b2592b94a07d88>`__

 

Additional Inherited Members
----------------------------

|-| Static Public Member Functions inherited from
`Tango::GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

static bool 

`enable\_exception <../../de/deb/classTango_1_1GroupReply.html#a4250fb27cfce0de073029a1b778b06b8>`__
(bool exception\_mode=true)

 

| Enable/Disable exception.
`More... <#a4250fb27cfce0de073029a1b778b06b8>`__

 

Detailed Description
--------------------

Single element group reply for a read attribute execution.

$Author$ $Revision$

Member Function Documentation
-----------------------------

+-------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ & Tango::GroupAttrReply::get\_data   | (   |    | )   |    |
+-------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get attribute data.

Get attribute data for a device member of a group hierarchy

Returns
    The attribute data

template<typename T >

+------------------------------------------+-----+--------+----------+-----+----+
| bool Tango::GroupAttrReply::operator>>   | (   | T &    | *dest*   | )   |    |
+------------------------------------------+-----+--------+----------+-----+----+

Get attribute data and extract them.

Get attribute data for a device member of a group hierarchy and extract
them in the provided variable

Parameters
    +---------+--------+------------------------------------------------------+
    | [out]   | dest   | The variable in which the data should be extracted   |
    +---------+--------+------------------------------------------------------+

Returns
    Flag set to true if the extraction succeeds

References
`Tango::DeviceAttribute::exceptions() <../../d7/dca/classTango_1_1DeviceAttribute.html#a3927b11e5bd052f81c77f8a04621d0a5>`__,
and
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../df/dc0/classTango_1_1GroupAttrReply__inherit__graph.png
.. |Collaboration graph| image:: ../../d1/d11/classTango_1_1GroupAttrReply__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
