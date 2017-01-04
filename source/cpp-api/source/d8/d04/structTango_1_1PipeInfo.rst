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

`Public Attributes <#pub-attribs>`__ \| `Friends <#friends>`__ \| `List
of all members <../../df/dd8/structTango_1_1PipeInfo-members.html>`__

Tango::PipeInfo Struct Reference

Base structure for pipe information.
`More... <../../d8/d04/structTango_1_1PipeInfo.html#details>`__

Public Attributes
-----------------

string 

`description <../../d8/d04/structTango_1_1PipeInfo.html#a5aaaf10e1d4adb9da8fb317bb1d965e5>`__

 

| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ description.
`More... <#a5aaaf10e1d4adb9da8fb317bb1d965e5>`__

 

Tango::DispLevel 

`disp\_level <../../d8/d04/structTango_1_1PipeInfo.html#a82393be90b61b52fd490c5ee98bba7f6>`__

 

| Display level. `More... <#a82393be90b61b52fd490c5ee98bba7f6>`__

 

vector< string > 

`extensions <../../d8/d04/structTango_1_1PipeInfo.html#aee2c6ec24ba43f8a91e29ea5d0b5c4f4>`__

 

| For future extensions.
`More... <#aee2c6ec24ba43f8a91e29ea5d0b5c4f4>`__

 

string 

`label <../../d8/d04/structTango_1_1PipeInfo.html#a80e59d16eddbac22bb4386dc065413b8>`__

 

| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ label.
`More... <#a80e59d16eddbac22bb4386dc065413b8>`__

 

string 

`name <../../d8/d04/structTango_1_1PipeInfo.html#aac516bafc197363c2631c05d28442407>`__

 

| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ name.
`More... <#aac516bafc197363c2631c05d28442407>`__

 

Tango::PipeWriteType 

`writable <../../d8/d04/structTango_1_1PipeInfo.html#ae0c6e057b77c1e3b1c8db29759817916>`__

 

| Writable type (Read, Read-Write)
`More... <#ae0c6e057b77c1e3b1c8db29759817916>`__

 

Friends
-------

ostream & 

`operator<< <../../d8/d04/structTango_1_1PipeInfo.html#a012d8b694c90bc5cf455041d3878e6bd>`__
(ostream &, \_PipeInfo &)

 

Detailed Description
--------------------

Base structure for pipe information.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----- | friend                               |
| ------------+-----+                  |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &       | ,   |                  |                                      |
| +-----------------------+-----+----- |                                      |
| ------------+-----+                  |                                      |
| |                       |     | \_Pi |                                      |
| peInfo &    |     |                  |                                      |
| +-----------------------+-----+----- |                                      |
| ------------+-----+                  |                                      |
| |                       | )   |      |                                      |
|             |     |                  |                                      |
| +-----------------------+-----+----- |                                      |
| ------------+-----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+---------------------------------------+
| string Tango::PipeInfo::description   |
+---------------------------------------+

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ description.

+-------------------------------------------------+
| Tango::DispLevel Tango::PipeInfo::disp\_level   |
+-------------------------------------------------+

Display level.

+----------------------------------------------+
| vector<string> Tango::PipeInfo::extensions   |
+----------------------------------------------+

For future extensions.

+---------------------------------+
| string Tango::PipeInfo::label   |
+---------------------------------+

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ label.

+--------------------------------+
| string Tango::PipeInfo::name   |
+--------------------------------+

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ name.

+--------------------------------------------------+
| Tango::PipeWriteType Tango::PipeInfo::writable   |
+--------------------------------------------------+

Writable type (Read, Read-Write)

--------------

The documentation for this struct was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
