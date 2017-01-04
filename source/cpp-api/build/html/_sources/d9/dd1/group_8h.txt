+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `File List <../../files.html>`__
-  `File Members <../../globals.html>`__

`Classes <#nested-classes>`__ \| `Namespaces <#namespaces>`__ \|
`Macros <#define-members>`__ \| `Typedefs <#typedef-members>`__

group.h File Reference

| ``#include <tango.h>``

Include dependency graph for group.h:

|image1|

`Go to the source code of this
file. <../../d9/dd1/group_8h_source.html>`__

Classes
-------

class  

`Tango::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html>`__

 

class  

`Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__

 

| High level class allowing the user to handle
`Tango <../../de/ddf/namespaceTango.html>`__ group.
`More... <../../d4/d6d/classTango_1_1Group.html#details>`__

 

class  

`Tango::GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__

 

| Single element group reply for a read attribute execution.
`More... <../../d5/dae/classTango_1_1GroupAttrReply.html#details>`__

 

class  

`Tango::GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__

 

| `Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a
read\_attribute execution.
`More... <../../db/daa/classTango_1_1GroupAttrReplyList.html#details>`__

 

class  

`Tango::GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__

 

| Single element group reply for a command execution.
`More... <../../d9/d33/classTango_1_1GroupCmdReply.html#details>`__

 

class  

`Tango::GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__

 

| `Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a command
execution.
`More... <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#details>`__

 

class  

`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__

 

class  

`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

 

class  

`Tango::GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__

 

class  

`Tango::GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

 

| Base class for `Group <../../d4/d6d/classTango_1_1Group.html>`__
reply. `More... <../../de/deb/classTango_1_1GroupReply.html#details>`__

 

class  

`Tango::GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__

 

| `Group <../../d4/d6d/classTango_1_1Group.html>`__ reply for a
write\_attribute execution.
`More... <../../dc/d11/classTango_1_1GroupReplyList.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL <../../d9/dd1/group_8h.html#aae3df4223c20c408ab2cf8a45fb39f3a>`__   1

 

Typedefs
--------

| typedef std::map< long,
|  AsynchRequest > 

`Tango::AsynchRequestRep <../../de/ddf/namespaceTango.html#a168c199249350bb009e168211ed97747>`__

 

typedef AsynchRequestRep::iterator 

`Tango::AsynchRequestRepIterator <../../de/ddf/namespaceTango.html#a0277f25b3f85ec78c024b252ad16b79c>`__

 

| typedef
|  AsynchRequestRep::value\_type 

`Tango::AsynchRequestRepValue <../../de/ddf/namespaceTango.html#a38e09c4b89ec97d44f1019f903918c04>`__

 

| typedef std::vector
|  < GroupElement \* > 

`Tango::GroupElements <../../de/ddf/namespaceTango.html#ab9ef33527260f0bc7f0bf168143f55a0>`__

 

typedef GroupElements::iterator 

`Tango::GroupElementsIterator <../../de/ddf/namespaceTango.html#a5c81b7d42455c6c7aafff46edbd2bf4b>`__

 

typedef std::vector< std::string > 

`Tango::TokenList <../../de/ddf/namespaceTango.html#ad1538aefe5a40c681e41341d087cc7c9>`__

 

Macro Definition Documentation
------------------------------

+-----------------------------------------------------+
| #define TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL   1   |
+-----------------------------------------------------+

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `group.h <../../d9/dd1/group_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../dd/d21/group_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
