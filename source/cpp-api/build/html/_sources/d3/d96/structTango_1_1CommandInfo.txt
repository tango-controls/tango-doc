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
of all members <../../d4/d79/structTango_1_1CommandInfo-members.html>`__

Tango::CommandInfo Struct Reference

`Client classes <../../d1/d45/group__Client.html>`__

`Command <../../d2/d1d/classTango_1_1Command.html>`__ information data
extension.
`More... <../../d3/d96/structTango_1_1CommandInfo.html#details>`__

Inheritance diagram for Tango::CommandInfo:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::CommandInfo:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

Tango::DispLevel 

`disp\_level <../../d3/d96/structTango_1_1CommandInfo.html#a3750fb7df117913285dcf4db9a36b037>`__

 

| The command display level.
`More... <#a3750fb7df117913285dcf4db9a36b037>`__

 

|-| Public Attributes inherited from
`Tango::DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

string 

`cmd\_name <../../d0/dfd/structTango_1_1DevCommandInfo.html#af0dbf63ccee65d2cb1d0f0d721a9881b>`__

 

| The command name. `More... <#af0dbf63ccee65d2cb1d0f0d721a9881b>`__

 

long 

`cmd\_tag <../../d0/dfd/structTango_1_1DevCommandInfo.html#ac010816c9134830bd21806807c76fda1>`__

 

| The command tag. `More... <#ac010816c9134830bd21806807c76fda1>`__

 

long 

`in\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#ada0b412c05607021230d5780e4984eff>`__

 

| Input parameter data type.
`More... <#ada0b412c05607021230d5780e4984eff>`__

 

string 

`in\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#ace0c93f7dfa9891f9e5845abbb8debaf>`__

 

| Input parameter description.
`More... <#ace0c93f7dfa9891f9e5845abbb8debaf>`__

 

long 

`out\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#a6719a1b6a0396a2867b1b9fbd09cfe74>`__

 

| Output parameter data type.
`More... <#a6719a1b6a0396a2867b1b9fbd09cfe74>`__

 

string 

`out\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#a21c04c4239a3c5657af2378aed451c1e>`__

 

| Ouptput parameter description.
`More... <#a21c04c4239a3c5657af2378aed451c1e>`__

 

Friends
-------

ostream & 

`operator<< <../../d3/d96/structTango_1_1CommandInfo.html#a76213513e51706eba65a8f9dc6f9b215>`__
(ostream &, \_CommandInfo &)

 

Detailed Description
--------------------

`Command <../../d2/d1d/classTango_1_1Command.html>`__ information data
extension.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----- | friend                               |
| ---------------+-----+               |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &          | ,   |               |                                      |
| +-----------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
| |                       |     | \_Co |                                      |
| mmandInfo &    |     |               |                                      |
| +-----------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
| |                       | )   |      |                                      |
|                |     |               |                                      |
| +-----------------------+-----+----- |                                      |
| ---------------+-----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+----------------------------------------------------+
| Tango::DispLevel Tango::CommandInfo::disp\_level   |
+----------------------------------------------------+

The command display level.

--------------

The documentation for this struct was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/df6/structTango_1_1CommandInfo__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/d7e/structTango_1_1CommandInfo__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
