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
members <../../d1/d88/classTango_1_1GroupReplyList-members.html>`__

Tango::GroupReplyList Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Group Client
classes <../../db/dc1/group__Grp.html>`__

`Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a
write\_attribute execution.
`More... <../../dc/d11/classTango_1_1GroupReplyList.html#details>`__

Inheritance diagram for Tango::GroupReplyList:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::GroupReplyList:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

bool 

`has\_failed <../../dc/d11/classTango_1_1GroupReplyList.html#a7221a5debe8d58e6679ac2e234b3384d>`__
() const

 

| Check if an error has occured.
`More... <#a7221a5debe8d58e6679ac2e234b3384d>`__

 

void 

`reset <../../dc/d11/classTango_1_1GroupReplyList.html#afe1cb42828f48dd701a0e8d250470e93>`__
()

 

| Reset the object. `More... <#afe1cb42828f48dd701a0e8d250470e93>`__

 

Friends
-------

class 

`Group <../../dc/d11/classTango_1_1GroupReplyList.html#a2697825715974a353728f0d4d5658112>`__

 

Detailed Description
--------------------

`Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a
write\_attribute execution.

This class inherits from **vector<GroupReply>** and therefore, each
device in the group heierarchy has his own
`GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ object which
can be retrieved with the classical vector [] operator

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+---------+ |                                      |
| | bool Tango::GroupReplyList::has\_f |                                      |
| ailed   | (   |    | )   | const   | |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+---------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an error has occured.

Returns a boolean set to true if the write\_attribute executed on the
group has failed for any device member of the hierarchy. Otherwise,
returns false

Returns
    The error flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+----+-----+----+            |                                      |
| | void Tango::GroupReplyList::reset  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
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
-  `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d5/de6/classTango_1_1GroupReplyList__inherit__graph.png
.. |Collaboration graph| image:: ../../dc/d22/classTango_1_1GroupReplyList__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
