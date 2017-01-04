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

`Public Member Functions <#pub-methods>`__ \| `Friends <#friends>`__ \|
`List of all
members <../../d4/d4e/classTango_1_1GroupCmdReplyList-members.html>`__

Tango::GroupCmdReplyList Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Group Client
classes <../../db/dc1/group__Grp.html>`__

`Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a command
execution.
`More... <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#details>`__

Inheritance diagram for Tango::GroupCmdReplyList:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::GroupCmdReplyList:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

bool 

`has\_failed <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a453e217deecfd463162892d471f181d6>`__
() const

 

| Check if an error has occured.
`More... <#a453e217deecfd463162892d471f181d6>`__

 

void 

`reset <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a30946c9b34cf1275f3e4b442652935e2>`__
()

 

| Reset the object. `More... <#a30946c9b34cf1275f3e4b442652935e2>`__

 

Friends
-------

class 

`Group <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a2697825715974a353728f0d4d5658112>`__

 

Detailed Description
--------------------

`Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a command
execution.

This class inherits from **vector<GroupCmdReply>** and therefore, each
device in the group heierarchy has his own
`GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__ object
which can be retrieved with the classical vector [] operator

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+------- |                                      |
| --+                                  |                                      |
| | bool Tango::GroupCmdReplyList::has |                                      |
| \_failed   | (   |    | )   | const  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an error has occured.

Returns a boolean set to true if the command executed on the group has
failed for any device member of the hierarchy. Otherwise, returns false

Returns
    The error flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+----+-----+----+         |                                      |
| | void Tango::GroupCmdReplyList::res |                                      |
| et   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset the object.

This methods empty the inherited vector and reset the error flag

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| -------------------------------+     |                                      |
| | friend class `Group <../../d4/d6d/ |                                      |
| classTango_1_1Group.html>`__   |     |                                      |
| +----------------------------------- |                                      |
| -------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d7/dd4/classTango_1_1GroupCmdReplyList__inherit__graph.png
.. |Collaboration graph| image:: ../../d7/dbd/classTango_1_1GroupCmdReplyList__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
