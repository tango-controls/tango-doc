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

`Classes <#nested-classes>`__ \| `Protected Attributes <#pro-attribs>`__
\| `Friends <#friends>`__ \| `List of all
members <../../df/d59/classTango_1_1Pipe-members.html>`__

Tango::Pipe Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a class representing a pipe in the TANGO device server
pattern. `More... <../../d8/d14/classTango_1_1Pipe.html#details>`__

Inheritance diagram for Tango::Pipe:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::Pipe:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

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

 

Destructor

Only one destructor is defined for this class

virtual 

`~Pipe <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__
()

 

| The object desctructor.
`More... <#a4b23ac2255767c1effe26d4a3bd26cab>`__

 

Get/Set object members.

These methods allows the external world to get/set
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ instance data members

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

 

Inserting data into a DevicePipe

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

 

Exception and error related methods methods

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

 

Protected Attributes
--------------------

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ 

`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__

 

Class data members

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

 

Friends
-------

class 

`EventSupplier <../../d8/d14/classTango_1_1Pipe.html#a113a5beda9b94ad235073dd9cfd3504a>`__

 

class 

`ZmqEventSupplier <../../d8/d14/classTango_1_1Pipe.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__

 

Detailed Description
--------------------

This class is a class representing a pipe in the TANGO device server
pattern.

It is an abstract class. It is the root class for all pipe related
classes.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +---------------------+-----+----+-- | inline                               |
| ---+----+                            |                                      |
| | Tango::Pipe::Pipe   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +---------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object.

The default constructor

+---------------------+-----+---------------------------+--------------------------+
| Tango::Pipe::Pipe   | (   | const string &            | *name*,                  |
+---------------------+-----+---------------------------+--------------------------+
|                     |     | const Tango::DispLevel    | *level*,                 |
+---------------------+-----+---------------------------+--------------------------+
|                     |     | const PipeWriteType       | *pwt* = ``PIPE_READ``    |
+---------------------+-----+---------------------------+--------------------------+
|                     | )   |                           |                          |
+---------------------+-----+---------------------------+--------------------------+

Constructs a newly allocated
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object from its name and
its display level.

Parameters
    +---------+---------------------------------------+
    | name    | The pipe name                         |
    +---------+---------------------------------------+
    | level   | The pipe display level                |
    +---------+---------------------------------------+
    | pwt     | The pipe R/W type (default to READ)   |
    +---------+---------------------------------------+

+--------------------------------------+--------------------------------------+
| +------------------------------+---- | inlinevirtual                        |
| -+----+-----+----+                   |                                      |
| | virtual Tango::Pipe::~Pipe   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The object desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +--------------------------------+-- | inline                               |
| ---+-------------------------------- |                                      |
| -------+--------+-----+----+         |                                      |
| | void Tango::Pipe::exceptions   | ( |                                      |
|    | bitset< DevicePipeBlob::numFlag |                                      |
| s >    | *fl*   | )   |    |         |                                      |
| +--------------------------------+-- |                                      |
| ---+-------------------------------- |                                      |
| -------+--------+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

It's a method which allows the user to switch on/off exception throwing
when trying to insert/extract data from a
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object. The following
flags are supported :

-  **isempty\_flag** - throw a WrongData exception (reason =
   API\_EmptyDataElement) if user tries to extract data from one empty
   blob data element. By default, this flag is set
-  **wrongtype\_flag** - throw a WrongData exception (reason =
   API\_IncompatibleArgumentType) if user tries to extract data with a
   type different than the type used for insertion. By default, this
   flag is set
-  **notenoughde\_flag** - throw a WrongData exception (reason =
   API\_PipeWrongArg) if user tries to extract data from a
   `DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
   for a data element which does not exist. By default, this flag is set
-  **blobdenamenotset\_flag** - Throw a WrongData exception (reason =
   API\_PipeNoDataElement) if user tries to insert data into the blob
   while the name or number of data element has not been set with
   methods
   `set\_data\_elt\_nb() <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__
   or
   `set\_data\_elt\_names() <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__
-  **mixing\_flag** - Throw a WrongData exception (reason =
   API\_NotSupportedFeature) if user tries to mix insertion/extraction
   method (<< or >>) with operator[]

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

References
`Tango::DevicePipeBlob::exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
| | bitset<DevicePipeBlob::numFlags> T |                                      |
| ango::Pipe::exceptions   | (   |     |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__
pi;

bitset<DevicePipeBlob::numFlags> bs = pi.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

pi.set\_exceptions(DevicePipeBlob::wrongtype\_flag);

bs = pi.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

References
`Tango::DevicePipeBlob::exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | size\_t Tango::Pipe::get\_data\_el |                                      |
| t\_nb   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get blob data element number.

Get the blob data element number

Returns
    The blob data element number

References
`Tango::DevicePipeBlob::get\_data\_elt\_nb() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | inline                               |
| -----+----+-----+----+               |                                      |
| | string& Tango::Pipe::get\_desc   | |                                      |
|  (   |    | )   |    |               |                                      |
| +----------------------------------+ |                                      |
| -----+----+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the pipe description.

Returns
    The pipe description

References
`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | Tango::DispLevel Tango::Pipe::get\ |                                      |
| _disp\_level   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the pipe display level.

Returns
    The pipe display level

References
`disp\_level <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| +-----+----+-----+----+              |                                      |
| | string& Tango::Pipe::get\_label    |                                      |
| | (   |    | )   |    |              |                                      |
| +----------------------------------- |                                      |
| +-----+----+-----+----+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the pipe label.

Returns
    The pipe label

References
`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | string& Tango::Pipe::get\_lower\_n |                                      |
| ame   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the pipe name in lower case letters.

Returns
    The pipe name

References
`lower\_name <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | inline                               |
| -----+----+-----+----+               |                                      |
| | string& Tango::Pipe::get\_name   | |                                      |
|  (   |    | )   |    |               |                                      |
| +----------------------------------+ |                                      |
| -----+----+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the pipe name.

Returns
    The pipe name

References
`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------+-----+----+- |                                      |
| ----+----+                           |                                      |
| | `PipeSerialModel <../../de/ddf/nam |                                      |
| espaceTango.html#a65f765a424afb13370 |                                      |
| 7cfba235633f98>`__ Tango::Pipe::get\ |                                      |
| _pipe\_serial\_model   | (   |    |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------+-----+----+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pipe serialization model.

Get the pipe serialization model

Returns
    The pipe serialization model

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
| | const string& Tango::Pipe::get\_ro |                                      |
| ot\_blob\_name   | (   |    | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the root data blob name.

Returns
    The data blob name

References
`Tango::DevicePipeBlob::get\_name() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | Tango::PipeWriteType Tango::Pipe:: |                                      |
| get\_writable   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the pipe writable type (RO/RW).

Returns
    The pipe write type.

References
`writable <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+----+-----+----+                |                                      |
| | bool Tango::Pipe::has\_failed   |  |                                      |
| (   |    | )   |    |                |                                      |
| +---------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check insertion/extraction success.

Allow the user to check if insertion/extraction into/from
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ instance was
successfull. This method has to be used when exceptions are disabled.

Returns
    True if insertion/extraction has failed

References
`Tango::DevicePipeBlob::has\_failed() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aefce9c5e97eb7a80197d1590a13c4f50>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__\ & Tango::Pipe::operator<<   | (   | short &    | *datum*   | )   |    |
+------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Insert data into a device pipe.

Inserting data into a `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__
instance is simlar to inserting data into a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class instance. See doc of
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class insertion methods
(`DevicePipeBlob::operator<< <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae1bf63d8a01b7710ae051e53a082548f>`__)
to get a complete documentation on how to insert data into a
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object

Parameters
    +--------+---------+-------------------------------------------------------------------------------------------+
    | [in]   | datum   | The data to be inserted into the `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ object   |
    +--------+---------+-------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+------------------------- |                                      |
| ---------+--------+-----+----+       |                                      |
| | void Tango::Pipe::reset\_exception |                                      |
| s   | (   | DevicePipeBlob::except\_ |                                      |
| flags    | *fl*   | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ----+-----+------------------------- |                                      |
| ---------+--------+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

References
`Tango::DevicePipeBlob::reset\_exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ab54466d1b593e8e464957f19ef685ae2>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+--------------------- |                                      |
| --+-----------+-----+----+           |                                      |
| | void Tango::Pipe::set\_data\_elt\_ |                                      |
| names   | (   | vector< string > &   |                                      |
|   | *names*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| --+-----------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set blob data element number and names.

Set the blob data element number and names. The data element number is
the number of names in the input parameter.

Parameters
    +--------+---------+-------------------------------+
    | [in]   | names   | The blob data element names   |
    +--------+---------+-------------------------------+

References
`Tango::DevicePipeBlob::set\_data\_elt\_names() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6c90f89d110cd3f7e7368346f4ae9e7>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------+--------+-- |                                      |
| ---+----+                            |                                      |
| | void Tango::Pipe::set\_data\_elt\_ |                                      |
| nb   | (   | size\_t    | *nb*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------+--------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set blob data element number.

Set the blob data element number

Parameters
    +--------+------+--------------------------------+
    | [in]   | nb   | The blob data element number   |
    +--------+------+--------------------------------+

References
`Tango::DevicePipeBlob::set\_data\_elt\_nb() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aaca17726578d592076c6bad76a98e59c>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+----------------------------------------------+-----+------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::Pipe::set\_default\_properties   | (   | `UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__ &    | *prop*   | )   |    |
+----------------------------------------------+-----+------------------------------------------------------------------------------------+----------+-----+----+

Set default attribute properties.

Parameters
    +--------+-----------------------------------+
    | prop   | The user default property class   |
    +--------+-----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+--------------------------- |                                      |
| -------+--------+-----+----+         |                                      |
| | void Tango::Pipe::set\_exceptions  |                                      |
|   | (   | DevicePipeBlob::except\_fl |                                      |
| ags    | *fl*   | )   |    |         |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| -------+--------+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. See
`DevicePipeBlob::exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aebf99ce7518695ef361549f729f8b305>`__
for a usage example.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

References
`Tango::DevicePipeBlob::set\_exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6d904cd958cb22382ceefef4a4c8593>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +-------------------------------+--- | inline                               |
| --+-------------+---------------+--- |                                      |
| --+----+                             |                                      |
| | void Tango::Pipe::set\_name   | (  |                                      |
|   | string &    | *new\_name*   | )  |                                      |
|   |    |                             |                                      |
| +-------------------------------+--- |                                      |
| --+-------------+---------------+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the pipe name.

Parameters
    +-------------+---------------------+
    | new\_name   | The new pipe name   |
    +-------------+---------------------+

References
`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__.

+----------------------------------------------+-----+---------------------------------------------------------------------------------------------+----------------+-----+----+
| void Tango::Pipe::set\_pipe\_serial\_model   | (   | `PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__    | *ser\_model*   | )   |    |
+----------------------------------------------+-----+---------------------------------------------------------------------------------------------+----------------+-----+----+

Set pipe serialization model.

This method allows the user to choose the pipe serialization model.

Parameters
    +--------+--------------+--------------------------------------------------------------------------------------------------------------------------+
    | [in]   | ser\_model   | The new serialisation model. The serialization model must be one of PIPE\_BY\_KERNEL, PIPE\_BY\_USER or PIPE\_NO\_SYNC   |
    +--------+--------------+--------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+-------------------+- |                                      |
| ---------+-----+----+                |                                      |
| | void Tango::Pipe::set\_root\_blob\ |                                      |
| _name   | (   | const string &    |  |                                      |
| *name*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| --------+-----+-------------------+- |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the root data blob name.

Parameters
    +--------+--------+---------------------------+
    | [in]   | name   | The root data blob name   |
    +--------+--------+---------------------------+

References
`Tango::DevicePipeBlob::set\_name() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+-------------------+ |                                      |
| --------------+-----+----+           |                                      |
| | void Tango::Pipe::set\_user\_pipe\ |                                      |
| _mutex   | (   | omni\_mutex \*    | |                                      |
|  *mut\_ptr*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------+ |                                      |
| --------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set pipe user mutex.

This method allows the user to give to the pipe object the pointer to
the omni\_mutex used to protect its buffer. The mutex has to be locked
when passed to this method. The
`Tango <../../de/ddf/namespaceTango.html>`__ kernel will unlock it when
the data will be transferred to the client.

Parameters
    +--------+------------+--------------------------+
    | [in]   | mut\_ptr   | The user mutex pointer   |
    +--------+------------+--------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | bitset<DevicePipeBlob::numFlags> T |                                      |
| ango::Pipe::state   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get instance insertion/extraction state.

Allow the user to find out what was the reason of insertion/extraction
into/from `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ failure. This
method has to be used when exceptions are disabled. Here is an example
of how methods
`has\_failed() <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__
and
`state() <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__
could be used

`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__
dpb = ....

bitset<DevicePipeBlob::numFlags> bs;

bs.reset();

dpb.exceptions(bs);

DevLong dl;

dpb >> dl;

if (dpb.has\_failed() == true)

{

bitset<DevicePipeBlob::numFlags> bs\_err = dpb.state();

if (dpb.test(DevicePipeBlob::isempty\_flag) == true)

.....

}

Returns
    The error bit set.

References
`Tango::DevicePipeBlob::state() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__,
and
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +------------------------------+     | friend                               |
| | friend class EventSupplier   |     |                                      |
| +------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | friend                               |
| | friend class ZmqEventSupplier   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------+       | protected                            |
| | string Tango::Pipe::desc   |       |                                      |
| +----------------------------+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe description.

Referenced by
`get\_desc() <../../d8/d14/classTango_1_1Pipe.html#a21c57287d00cae3a66f6cb9626f6324d>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----------+                          |                                      |
| | Tango::DispLevel Tango::Pipe::disp |                                      |
| \_level   |                          |                                      |
| +----------------------------------- |                                      |
| ----------+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe display level.

Referenced by
`get\_disp\_level() <../../d8/d14/classTango_1_1Pipe.html#a6b6e9b53474dc7121ff7fb38942c1250>`__.

+--------------------------------------+--------------------------------------+
| +-----------------------------+      | protected                            |
| | string Tango::Pipe::label   |      |                                      |
| +-----------------------------+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe label.

Referenced by
`get\_label() <../../d8/d14/classTango_1_1Pipe.html#ae66635efe0978d51fd62e73b34b24e5c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | string Tango::Pipe::lower\_name    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe name in lower case.

Referenced by
`get\_lower\_name() <../../d8/d14/classTango_1_1Pipe.html#af3201b786412b40011bbc4343e995ebe>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------+       | protected                            |
| | string Tango::Pipe::name   |       |                                      |
| +----------------------------+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe name.

Referenced by
`get\_name() <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__,
and
`set\_name() <../../d8/d14/classTango_1_1Pipe.html#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
| | `DevicePipeBlob <../../df/dd9/clas |                                      |
| sTango_1_1DevicePipeBlob.html>`__ Ta |                                      |
| ngo::Pipe::the\_blob   |             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`exceptions() <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__,
`Tango::WPipe::get\_data\_elt\_name() <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__,
`Tango::WPipe::get\_data\_elt\_names() <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__,
`Tango::WPipe::get\_data\_elt\_nb() <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__,
`get\_data\_elt\_nb() <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__,
`Tango::WPipe::get\_data\_elt\_type() <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__,
`Tango::WPipe::get\_root\_blob\_name() <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__,
`get\_root\_blob\_name() <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__,
`has\_failed() <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__,
`reset\_exceptions() <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__,
`set\_data\_elt\_names() <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__,
`set\_data\_elt\_nb() <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__,
`set\_exceptions() <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__,
`set\_root\_blob\_name() <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__,
and
`state() <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------+                         |                                      |
| | Tango::PipeWriteType Tango::Pipe:: |                                      |
| writable   |                         |                                      |
| +----------------------------------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe R/W type.

Referenced by
`get\_writable() <../../d8/d14/classTango_1_1Pipe.html#ad4981873f1e6f3d5e294f66d3b01b848>`__.

--------------

The documentation for this class was generated from the following file:

-  `pipe.h <../../da/d3e/pipe_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d3/d1a/classTango_1_1Pipe__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/df9/classTango_1_1Pipe__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
