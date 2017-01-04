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
members <../../db/d6b/classTango_1_1WPipe-members.html>`__

Tango::WPipe Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a class representing a writable pipe in the TANGO device
server pattern.
`More... <../../d2/de5/classTango_1_1WPipe.html#details>`__

Inheritance diagram for Tango::WPipe:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::WPipe:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`WPipe <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__
()

 

| Constructs a newly allocated
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ object.
`More... <#a55a5cb58749f6c67f8f40680ef51271e>`__

 

 

`WPipe <../../d2/de5/classTango_1_1WPipe.html#aa9fe1ddc4d121fa3201088dae345d6ee>`__
(const string &na, const Tango::DispLevel level)

 

| Constructs a newly allocated
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ object from its name,
its description, its label and its display level.
`More... <#aa9fe1ddc4d121fa3201088dae345d6ee>`__

 

Destructor

Only one desctructor is defined for this class

virtual 

`~WPipe <../../d2/de5/classTango_1_1WPipe.html#ab90cc0267c8765c2db3c2c0a41a291c2>`__
()

 

| The object desctructor.
`More... <#ab90cc0267c8765c2db3c2c0a41a291c2>`__

 

Get/Set methods.

Methods to get the value of the data blob transported by the pipe

string 

`get\_root\_blob\_name <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__
()

 

| Get root blob name. `More... <#afdae25b4ab3382578c2ada89da569698>`__

 

Extracting data from a WPipe

`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ & 

`operator>> <../../d2/de5/classTango_1_1WPipe.html#a8373577b75416aea0045dab9d6a0e79f>`__
(short &datum)

 

| Extract data from a device pipe.
`More... <#a8373577b75416aea0045dab9d6a0e79f>`__

 

size\_t 

`get\_data\_elt\_nb <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__
()

 

| Get root blob data element number.
`More... <#a490dc17dc154629d22e09356bba2160e>`__

 

vector< string > 

`get\_data\_elt\_names <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__
()

 

| Get root blob data elements name.
`More... <#a6a13a4ae4253177e1b19c5921a61066b>`__

 

string 

`get\_data\_elt\_name <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__
(size\_t ind)

 

| Get root blob data element name.
`More... <#aefa6c951693649873f76f93729ba58b0>`__

 

int 

`get\_data\_elt\_type <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__
(size\_t ind)

 

| Get root blob data element value type.
`More... <#a921bd7f37da698a6a39247756a873a68>`__

 

|-| Public Member Functions inherited from
`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

 

`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__
()

 

| Constructs a newly allocated
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object.
`More... <#a48f8fa0e8e169fd8f278407b771dc27d>`__

 

 

`Pipe <../../d8/d14/classTango_1_1Pipe.html#af29e5ee12dae6e4ea121718d407cf75d>`__
(const string
&\ `name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__,
const Tango::DispLevel level, const PipeWriteType pwt=PIPE\_READ)

 

| Constructs a newly allocated
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object from its name and
its display level. `More... <#af29e5ee12dae6e4ea121718d407cf75d>`__

 

virtual 

`~Pipe <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__
()

 

| The object desctructor.
`More... <#a4b23ac2255767c1effe26d4a3bd26cab>`__

 

string & 

`get\_name <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__
()

 

| Return the pipe name. `More... <#a00bb2112e4e81c63ff5e55ffa046c9d7>`__

 

void 

`set\_name <../../d8/d14/classTango_1_1Pipe.html#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__
(string &new\_name)

 

| Set the pipe name. `More... <#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__

 

void 

`set\_default\_properties <../../d8/d14/classTango_1_1Pipe.html#acf20d48edb9f74cf8268cc6cd5e0e4fa>`__
(`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
&prop)

 

| Set default attribute properties.
`More... <#acf20d48edb9f74cf8268cc6cd5e0e4fa>`__

 

string & 

`get\_lower\_name <../../d8/d14/classTango_1_1Pipe.html#af3201b786412b40011bbc4343e995ebe>`__
()

 

| Return the pipe name in lower case letters.
`More... <#af3201b786412b40011bbc4343e995ebe>`__

 

const string & 

`get\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__
()

 

| Return the root data blob name.
`More... <#a03818186cd3b89c123db978ec735174b>`__

 

void 

`set\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__
(const string
&\ `name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__)

 

| Set the root data blob name.
`More... <#afc0f382d5d6c6d03abb2e25ceb4456e6>`__

 

string & 

`get\_desc <../../d8/d14/classTango_1_1Pipe.html#a21c57287d00cae3a66f6cb9626f6324d>`__
()

 

| Return the pipe description.
`More... <#a21c57287d00cae3a66f6cb9626f6324d>`__

 

string & 

`get\_label <../../d8/d14/classTango_1_1Pipe.html#ae66635efe0978d51fd62e73b34b24e5c>`__
()

 

| Return the pipe label.
`More... <#ae66635efe0978d51fd62e73b34b24e5c>`__

 

Tango::DispLevel 

`get\_disp\_level <../../d8/d14/classTango_1_1Pipe.html#a6b6e9b53474dc7121ff7fb38942c1250>`__
()

 

| Return the pipe display level.
`More... <#a6b6e9b53474dc7121ff7fb38942c1250>`__

 

Tango::PipeWriteType 

`get\_writable <../../d8/d14/classTango_1_1Pipe.html#ad4981873f1e6f3d5e294f66d3b01b848>`__
()

 

| Get the pipe writable type (RO/RW).
`More... <#ad4981873f1e6f3d5e294f66d3b01b848>`__

 

void 

`set\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a77c6b9c413099b205da176541100659d>`__
(`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__
ser\_model)

 

| Set pipe serialization model.
`More... <#a77c6b9c413099b205da176541100659d>`__

 

`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__ 

`get\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a131457c57f76313b0784d02228e423dd>`__
()

 

| Get pipe serialization model.
`More... <#a131457c57f76313b0784d02228e423dd>`__

 

void 

`set\_user\_pipe\_mutex <../../d8/d14/classTango_1_1Pipe.html#acbe28a16686f044af10708792fddf245>`__
(omni\_mutex \*mut\_ptr)

 

| Set pipe user mutex. `More... <#acbe28a16686f044af10708792fddf245>`__

 

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ & 

`operator<< <../../d8/d14/classTango_1_1Pipe.html#ac67072c3bf8d26e547ea92aac9b7e260>`__
(short &datum)

 

| Insert data into a device pipe.
`More... <#ac67072c3bf8d26e547ea92aac9b7e260>`__

 

void 

`set\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__
(size\_t nb)

 

| Set blob data element number.
`More... <#a9e73adb9661dd91811af627d701d8832>`__

 

void 

`set\_data\_elt\_names <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__
(vector< string > &names)

 

| Set blob data element number and names.
`More... <#a90537af700f9c8f7bbbe4540e0b9542b>`__

 

size\_t 

`get\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__
()

 

| Get blob data element number.
`More... <#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__

 

void 

`exceptions <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__
(bitset< DevicePipeBlob::numFlags > fl)

 

| Set exception flag. `More... <#abd430c1ee08d7d19ebbf469974c62dc4>`__

 

bitset< DevicePipeBlob::numFlags > 

`exceptions <../../d8/d14/classTango_1_1Pipe.html#a4fb5132f87eba2ccd54a392b0612a1fa>`__
()

 

| Get exception flag. `More... <#a4fb5132f87eba2ccd54a392b0612a1fa>`__

 

void 

`reset\_exceptions <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__
(DevicePipeBlob::except\_flags fl)

 

| Reset one exception flag.
`More... <#ad0961a4c770ff42b0b672907268b6c14>`__

 

void 

`set\_exceptions <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__
(DevicePipeBlob::except\_flags fl)

 

| Set one exception flag.
`More... <#a6362521002ff86cf970661a7699b5c54>`__

 

bool 

`has\_failed <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__
()

 

| Check insertion/extraction success.
`More... <#a5de39890365fd35d887d66ef8fe5bae7>`__

 

bitset< DevicePipeBlob::numFlags > 

`state <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__
()

 

| Get instance insertion/extraction state.
`More... <#a124f05b1125ea60be231ded98f27d303>`__

 

Additional Inherited Members
----------------------------

|-| Protected Attributes inherited from
`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ 

`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__

 

string 

`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__

 

| The pipe name. `More... <#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__

 

string 

`lower\_name <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__

 

| The pipe name in lower case.
`More... <#af7c22f717b75210fcb5328a38be95e7c>`__

 

string 

`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__

 

| The pipe description. `More... <#a317ab27c21563fc4d279007991c8080b>`__

 

string 

`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__

 

| The pipe label. `More... <#a139a571b46d6f4911fae84269d0beff6>`__

 

Tango::DispLevel 

`disp\_level <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__

 

| The pipe display level.
`More... <#a58da366eded254dd357432105a5fd645>`__

 

Tango::PipeWriteType 

`writable <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__

 

| The pipe R/W type. `More... <#afaec591f0261e13cb7df7277c9f09ece>`__

 

Detailed Description
--------------------

This class is a class representing a writable pipe in the TANGO device
server pattern.

It is an base class. It is the a root class for pipe related classes.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----+ | inline                               |
| -----+----+                          |                                      |
| | Tango::WPipe::WPipe   | (   |    | |                                      |
|  )   |    |                          |                                      |
| +-----------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ object.

The default constructor

+-----------------------+-----+---------------------------+------------+
| Tango::WPipe::WPipe   | (   | const string &            | *na*,      |
+-----------------------+-----+---------------------------+------------+
|                       |     | const Tango::DispLevel    | *level*    |
+-----------------------+-----+---------------------------+------------+
|                       | )   |                           |            |
+-----------------------+-----+---------------------------+------------+

Constructs a newly allocated
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ object from its name,
its description, its label and its display level.

Parameters
    +---------+--------------------------+
    | na      | The pipe name            |
    +---------+--------------------------+
    | level   | The pipe display level   |
    +---------+--------------------------+

+--------------------------------------+--------------------------------------+
| +--------------------------------+-- | inlinevirtual                        |
| ---+----+-----+----+                 |                                      |
| | virtual Tango::WPipe::~WPipe   | ( |                                      |
|    |    | )   |    |                 |                                      |
| +--------------------------------+-- |                                      |
| ---+----+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The object desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------+------ |                                      |
| ---+-----+----+                      |                                      |
| | string Tango::WPipe::get\_data\_el |                                      |
| t\_name   | (   | size\_t    | *ind* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------+------ |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element name.

Get the root blob data element name for a single data element

Parameters
    +--------+-------+-----------------------------------------------+
    | [in]   | ind   | The data element index within the root blob   |
    +--------+-------+-----------------------------------------------+

Returns
    The root blob data element name

References
`Tango::DevicePipeBlob::get\_data\_elt\_name() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a73058a3dbe75fa859caad08c56b9e83f>`__,
and
`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | vector<string> Tango::WPipe::get\_ |                                      |
| data\_elt\_names   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data elements name.

Get the root blob data elements name

Returns
    The root blob data elements name

References
`Tango::DevicePipeBlob::get\_data\_elt\_names() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a2becdbba06b82cf962423f937d54b608>`__,
and
`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | size\_t Tango::WPipe::get\_data\_e |                                      |
| lt\_nb   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element number.

Get the root blob data element number

Returns
    The root blob data element number

References
`Tango::DevicePipeBlob::get\_data\_elt\_nb() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__,
and
`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+------------+--------- |                                      |
| +-----+----+                         |                                      |
| | int Tango::WPipe::get\_data\_elt\_ |                                      |
| type   | (   | size\_t    | *ind*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -------+-----+------------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element value type.

Get the root blob data element value type for a single data element

Parameters
    +--------+-------+-----------------------------------------------+
    | [in]   | ind   | The data element index within the root blob   |
    +--------+-------+-----------------------------------------------+

Returns
    The blob data element value type

References
`Tango::DevicePipeBlob::get\_data\_elt\_type() <../../df/dd9/classTango_1_1DevicePipeBlob.html#abe84aab96cd9150adceee9f653dea59f>`__,
and
`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+----+   |                                      |
| | string Tango::WPipe::get\_root\_bl |                                      |
| ob\_name   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob name.

Get the root blob name

Returns
    The root blob name

References
`Tango::DevicePipeBlob::get\_name() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__,
and
`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+---------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `WPipe <../../d2/de5/classTango_1_1WPipe.html>`__\ & Tango::WPipe::operator>>   | (   | short &    | *datum*   | )   |    |
+---------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Extract data from a device pipe.

Extracting data from a `WPipe <../../d2/de5/classTango_1_1WPipe.html>`__
instance is simlar to extracting data from a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class instance. See doc of
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class extraction methods
(`DevicePipeBlob::operator>> <../../df/dd9/classTango_1_1DevicePipeBlob.html#a8a560fa9f94789d0913099f119054e18>`__)
to get a complete documentation on how to extract data from a
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__

Parameters
    +--------+---------+-----------------+
    | [in]   | datum   | The pipe data   |
    +--------+---------+-----------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

--------------

The documentation for this class was generated from the following file:

-  `w\_pipe.h <../../de/d22/w__pipe_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `WPipe <../../d2/de5/classTango_1_1WPipe.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../da/dbe/classTango_1_1WPipe__inherit__graph.png
.. |Collaboration graph| image:: ../../d9/d93/classTango_1_1WPipe__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
