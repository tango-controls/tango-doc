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
members <../../d9/db5/classTango_1_1GroupCmdReply-members.html>`__

Tango::GroupCmdReply Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Group Client
classes <../../db/dc1/group__Grp.html>`__

Single element group reply for a command execution.
`More... <../../d9/d33/classTango_1_1GroupCmdReply.html#details>`__

Inheritance diagram for Tango::GroupCmdReply:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::GroupCmdReply:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

bool 

`extract <../../d9/d33/classTango_1_1GroupCmdReply.html#a4beaeb6d71fa2cd825828718d36d20a4>`__
(std::vector< DevLong > &vl, std::vector< std::string > &vs)

 

| Get command data and extract them (DevVarLongStringArray)
`More... <#a4beaeb6d71fa2cd825828718d36d20a4>`__

 

bool 

`extract <../../d9/d33/classTango_1_1GroupCmdReply.html#a26604a69a810a3c5f221c648ec523204>`__
(std::vector< double > &vd, std::vector< std::string > &vs)

 

| Get command data and extract them (DevVarDoubleStringArray)
`More... <#a26604a69a810a3c5f221c648ec523204>`__

 

`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ & 

`get\_data <../../d9/d33/classTango_1_1GroupCmdReply.html#ab753e25a85ec8ca6b96f61d4d3a2c0fd>`__
()

 

| Get command data. `More... <#ab753e25a85ec8ca6b96f61d4d3a2c0fd>`__

 

template<typename T >

bool 

`operator>> <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__
(T &dest)

 

| Get command data and extract them.
`More... <#a54b600d46c948acd7d1943f6d9738943>`__

 

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

Single element group reply for a command execution.

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+-----+---------------------------------+---------+
| bool Tango::GroupCmdReply::extract   | (   | std::vector< DevLong > &        | *vl*,   |
+--------------------------------------+-----+---------------------------------+---------+
|                                      |     | std::vector< std::string > &    | *vs*    |
+--------------------------------------+-----+---------------------------------+---------+
|                                      | )   |                                 |         |
+--------------------------------------+-----+---------------------------------+---------+

Get command data and extract them (DevVarLongStringArray)

Get command result for a device member of a group hierarchy and extract
them in the provided variable in case the command returns a data of the
DevVarLongStringArray type

Parameters
    +---------+------+--------------------------------------------------------------+
    | [out]   | vl   | The array of DevLong part of the DevVarLongStringArray       |
    +---------+------+--------------------------------------------------------------+
    | [out]   | vs   | The array of string part of the DevVarLongStringArray data   |
    +---------+------+--------------------------------------------------------------+

Returns
    Flag set to true if the extraction succeeds

+--------------------------------------+-----+---------------------------------+---------+
| bool Tango::GroupCmdReply::extract   | (   | std::vector< double > &         | *vd*,   |
+--------------------------------------+-----+---------------------------------+---------+
|                                      |     | std::vector< std::string > &    | *vs*    |
+--------------------------------------+-----+---------------------------------+---------+
|                                      | )   |                                 |         |
+--------------------------------------+-----+---------------------------------+---------+

Get command data and extract them (DevVarDoubleStringArray)

Get command result for a device member of a group hierarchy and extract
them in the provided variable in case the command returns a data of the
DevVarDoubleStringArray type

Parameters
    +---------+------+----------------------------------------------------------------+
    | [out]   | vd   | The array of DevDouble part of the DevVarDoubleStringArray     |
    +---------+------+----------------------------------------------------------------+
    | [out]   | vs   | The array of string part of the DevVarDoubleStringArray data   |
    +---------+------+----------------------------------------------------------------+

Returns
    Flag set to true if the extraction succeeds

+--------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & Tango::GroupCmdReply::get\_data   | (   |    | )   |    |
+--------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get command data.

Get command result for a device member of a group hierarchy

Returns
    The command data

template<typename T >

+-----------------------------------------+-----+--------+----------+-----+----+
| bool Tango::GroupCmdReply::operator>>   | (   | T &    | *dest*   | )   |    |
+-----------------------------------------+-----+--------+----------+-----+----+

Get command data and extract them.

Get command result for a device member of a group hierarchy and extract
them in the provided variable

Parameters
    +---------+--------+------------------------------------------------------+
    | [out]   | dest   | The variable in which the data should be extracted   |
    +---------+--------+------------------------------------------------------+

Returns
    Flag set to true if the extraction succeeds

References
`Tango::DeviceData::exceptions() <../../df/d22/classTango_1_1DeviceData.html#a955d63845f806ed9268b5d4b74f6a5d2>`__,
and
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d7/d24/classTango_1_1GroupCmdReply__inherit__graph.png
.. |Collaboration graph| image:: ../../d1/da7/classTango_1_1GroupCmdReply__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
