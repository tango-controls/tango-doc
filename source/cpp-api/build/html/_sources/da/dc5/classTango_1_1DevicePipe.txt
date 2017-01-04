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

`Classes <#nested-classes>`__ \| `Friends <#friends>`__ \| `List of all
members <../../d9/d09/classTango_1_1DevicePipe-members.html>`__

Tango::DevicePipe Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for sending/receiving data from device pipes.
`More... <../../da/dc5/classTango_1_1DevicePipe.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a22601f9beee583d33c2d17a9cff58c71>`__
()

 

| Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object. `More... <#a22601f9beee583d33c2d17a9cff58c71>`__

 

 

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a747b3e03295bc6ec45f87c25bef1d377>`__
(const string &pipe\_name)

 

| Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object with name. `More... <#a747b3e03295bc6ec45f87c25bef1d377>`__

 

 

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a95863583fd8ff5bff2f16fb8d98cd932>`__
(const string &pipe\_name, const string &root\_blob\_name)

 

| Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object with name and root blob name.
`More... <#a95863583fd8ff5bff2f16fb8d98cd932>`__

 

Get/Set methods

void 

`set\_name <../../da/dc5/classTango_1_1DevicePipe.html#a12dc55a63df0edd0fa2f858dce39ad25>`__
(const string &pipe\_name)

 

| Set pipe name. `More... <#a12dc55a63df0edd0fa2f858dce39ad25>`__

 

const string & 

`get\_name <../../da/dc5/classTango_1_1DevicePipe.html#a54feab342fbb8f55dc95904bf3e6e5f5>`__
()

 

| Get pipe name. `More... <#a54feab342fbb8f55dc95904bf3e6e5f5>`__

 

void 

`set\_root\_blob\_name <../../da/dc5/classTango_1_1DevicePipe.html#a7394bfd9106027f25e1b8c0d3bd7d29c>`__
(const string &root\_blob\_name)

 

| Set root blob name. `More... <#a7394bfd9106027f25e1b8c0d3bd7d29c>`__

 

const string & 

`get\_root\_blob\_name <../../da/dc5/classTango_1_1DevicePipe.html#a39aea23db45f1a51c3b59351147dfdba>`__
()

 

| Get root blob name. `More... <#a39aea23db45f1a51c3b59351147dfdba>`__

 

Inserting data into a DevicePipe

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ & 

`operator<< <../../da/dc5/classTango_1_1DevicePipe.html#acc6ca5348b5297a522f1bbc397842e20>`__
(short &datum)

 

| Insert data into a device pipe.
`More... <#acc6ca5348b5297a522f1bbc397842e20>`__

 

void 

`set\_data\_elt\_nb <../../da/dc5/classTango_1_1DevicePipe.html#ad989caa7a3c2a43296f17ba8602e0fef>`__
(size\_t nb)

 

| Set blob data element number.
`More... <#ad989caa7a3c2a43296f17ba8602e0fef>`__

 

void 

`set\_data\_elt\_names <../../da/dc5/classTango_1_1DevicePipe.html#adfe7a29d49a733829216ec36bd705a49>`__
(vector< string > &names)

 

| Set blob data element number and names.
`More... <#adfe7a29d49a733829216ec36bd705a49>`__

 

Extracting data from a DevicePipe

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ & 

`operator>> <../../da/dc5/classTango_1_1DevicePipe.html#a3f573423b7d0b61af5f2d8bbbb773d98>`__
(short &datum)

 

| Extract data from a device pipe.
`More... <#a3f573423b7d0b61af5f2d8bbbb773d98>`__

 

size\_t 

`get\_data\_elt\_nb <../../da/dc5/classTango_1_1DevicePipe.html#a00c05c84ecb64e225d735a0a2fc4e546>`__
()

 

| Get root blob data element number.
`More... <#a00c05c84ecb64e225d735a0a2fc4e546>`__

 

vector< string > 

`get\_data\_elt\_names <../../da/dc5/classTango_1_1DevicePipe.html#a1c49f10b17cda1734a1b3f3134bdb8c7>`__
()

 

| Get root blob data elements name.
`More... <#a1c49f10b17cda1734a1b3f3134bdb8c7>`__

 

string 

`get\_data\_elt\_name <../../da/dc5/classTango_1_1DevicePipe.html#a242f6981b33c372833459baee14315fe>`__
(size\_t ind)

 

| Get root blob data element name.
`More... <#a242f6981b33c372833459baee14315fe>`__

 

int 

`get\_data\_elt\_type <../../da/dc5/classTango_1_1DevicePipe.html#a3cc8834e05ef939588b5954d1bb875ff>`__
(size\_t ind)

 

| Get root blob data element value type.
`More... <#a3cc8834e05ef939588b5954d1bb875ff>`__

 

Exception and error related methods methods

void 

`exceptions <../../da/dc5/classTango_1_1DevicePipe.html#ac1c4293904eef63747aac2aa3f376099>`__
(bitset< DevicePipeBlob::numFlags > fl)

 

| Set exception flag. `More... <#ac1c4293904eef63747aac2aa3f376099>`__

 

bitset< DevicePipeBlob::numFlags > 

`exceptions <../../da/dc5/classTango_1_1DevicePipe.html#a4184d1888504aed76579e702ec6c0bb7>`__
()

 

| Get exception flag. `More... <#a4184d1888504aed76579e702ec6c0bb7>`__

 

void 

`reset\_exceptions <../../da/dc5/classTango_1_1DevicePipe.html#a1af9cfab27802edd6fba645e14759162>`__
(DevicePipeBlob::except\_flags fl)

 

| Reset one exception flag.
`More... <#a1af9cfab27802edd6fba645e14759162>`__

 

void 

`set\_exceptions <../../da/dc5/classTango_1_1DevicePipe.html#a5ba1952dfba4b2a76f53854505fe8462>`__
(DevicePipeBlob::except\_flags fl)

 

| Set one exception flag.
`More... <#a5ba1952dfba4b2a76f53854505fe8462>`__

 

bool 

`has\_failed <../../da/dc5/classTango_1_1DevicePipe.html#a1ad65ce09364209327fa9485ef30f8ff>`__
()

 

| Check insertion/extraction success.
`More... <#a1ad65ce09364209327fa9485ef30f8ff>`__

 

bitset< DevicePipeBlob::numFlags > 

`state <../../da/dc5/classTango_1_1DevicePipe.html#a1f00cacf4141ab47e7f1c1a4bbb4bbdb>`__
()

 

| Get instance insertion/extraction state.
`More... <#a1f00cacf4141ab47e7f1c1a4bbb4bbdb>`__

 

Friends
-------

ostream & 

`operator<< <../../da/dc5/classTango_1_1DevicePipe.html#ad473d21ba17ef443f316431523c07abf>`__
(ostream &str,
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ &dd)

 

| Print a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
instance. `More... <#ad473d21ba17ef443f316431523c07abf>`__

 

Detailed Description
--------------------

Fundamental type for sending/receiving data from device pipes.

This is the fundamental type for sending/receiving data to/from device
pipe.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------+-----+----+-----+----+
| Tango::DevicePipe::DevicePipe   | (   |    | )   |    |
+---------------------------------+-----+----+-----+----+

Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object.

Default constructor. The instance is empty

+---------------------------------+-----+-------------------+----------------+-----+----+
| Tango::DevicePipe::DevicePipe   | (   | const string &    | *pipe\_name*   | )   |    |
+---------------------------------+-----+-------------------+----------------+-----+----+

Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object with name.

Create one instance of the
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ class and
set its name

Parameters
    +--------+--------------+-----------------+
    | [in]   | pipe\_name   | The pipe name   |
    +--------+--------------+-----------------+

+---------------------------------+-----+-------------------+-----------------------+
| Tango::DevicePipe::DevicePipe   | (   | const string &    | *pipe\_name*,         |
+---------------------------------+-----+-------------------+-----------------------+
|                                 |     | const string &    | *root\_blob\_name*    |
+---------------------------------+-----+-------------------+-----------------------+
|                                 | )   |                   |                       |
+---------------------------------+-----+-------------------+-----------------------+

Create a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
object with name and root blob name.

Create one instance of the
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ class and
set its name and its root blob name

Parameters
    +--------+--------------------+----------------------+
    | [in]   | pipe\_name         | The pipe name        |
    +--------+--------------------+----------------------+
    | [in]   | root\_blob\_name   | The root blob name   |
    +--------+--------------------+----------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+-------------------------- |                                      |
| -------------+--------+-----+----+   |                                      |
| | void Tango::DevicePipe::exceptions |                                      |
|    | (   | bitset< DevicePipeBlob::n |                                      |
| umFlags >    | *fl*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ---+-----+-------------------------- |                                      |
| -------------+--------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

It's a method which allows the user to switch on/off exception throwing
when trying to insert/extract data from a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ object. The
following flags are supported :

-  **isempty\_flag** - throw a WrongData exception (reason =
   API\_EmptyDataElement) if user tries to extract data from one empty
   pipe data element. By default, this flag is set
-  **wrongtype\_flag** - throw a WrongData exception (reason =
   API\_IncompatibleArgumentType) if user tries to extract data with a
   type different than the type used for insertion. By default, this
   flag is set
-  **notenoughde\_flag** - throw a WrongData exception (reason =
   API\_PipeWrongArg) if user tries to extract data from a
   `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ for a
   data element which does not exist. By default, this flag is set
-  **blobdenamenotset\_flag** - Throw a WrongData exception (reason =
   API\_PipeNoDataElement) if user tries to insert data into the blob
   while the name or number of data element has not been set with
   methods
   `set\_data\_elt\_nb() <../../da/dc5/classTango_1_1DevicePipe.html#ad989caa7a3c2a43296f17ba8602e0fef>`__
   or
   `set\_data\_elt\_names() <../../da/dc5/classTango_1_1DevicePipe.html#adfe7a29d49a733829216ec36bd705a49>`__
-  **mixing\_flag** - Throw a WrongData exception (reason =
   API\_NotSupportedFeature) if user tries to mix insertion/extraction
   method (<< or >>) with operator[]

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
| | bitset<DevicePipeBlob::numFlags> T |                                      |
| ango::DevicePipe::exceptions   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a22601f9beee583d33c2d17a9cff58c71>`__
dp;

bitset<DevicePipeBlob::numFlags> bs = dp.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

dp.set\_exceptions(DevicePipeBlob::wrongtype\_flag);

bs = dp.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+------------+- |                                      |
| --------+-----+----+                 |                                      |
| | string Tango::DevicePipe::get\_dat |                                      |
| a\_elt\_name   | (   | size\_t    |  |                                      |
| *ind*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+------------+- |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element name.

Get root blob data element name for a single data element

Parameters
    +--------+-------+-----------------------------------------------+
    | [in]   | ind   | The data element index within the root blob   |
    +--------+-------+-----------------------------------------------+

Returns
    The root blob data element name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
| | vector<string> Tango::DevicePipe:: |                                      |
| get\_data\_elt\_names   | (   |    | |                                      |
|  )   |    |                          |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data elements name.

Get the root blob data elements name

Returns
    The root blob data elements name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | size\_t Tango::DevicePipe::get\_da |                                      |
| ta\_elt\_nb   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element number.

Get the root blob data element number

Returns
    The root blob data element number

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+------------+---- |                                      |
| -----+-----+----+                    |                                      |
| | int Tango::DevicePipe::get\_data\_ |                                      |
| elt\_type   | (   | size\_t    | *in |                                      |
| d*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+------------+---- |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob data element value type.

Get root blob data element value type for a single data element

Parameters
    +--------+-------+-----------------------------------------------+
    | [in]   | ind   | The data element index within the root blob   |
    +--------+-------+-----------------------------------------------+

Returns
    The root blob data element value type

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+----+   |                                      |
| | const string& Tango::DevicePipe::g |                                      |
| et\_name   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pipe name.

Set the device pipe name

Returns
    The pipe name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------------+-----+----+- |                                      |
| ----+----+                           |                                      |
| | const string& Tango::DevicePipe::g |                                      |
| et\_root\_blob\_name   | (   |    |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+----+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get root blob name.

Get the root blob name

Returns
    The root blob name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | bool Tango::DevicePipe::has\_faile |                                      |
| d   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check insertion/extraction success.

Allow the user to check if insertion/extraction into/from
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ instance was
successfull. This method has to be used when exceptions are disabled.

Returns
    True if insertion/extraction has failed

+------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__\ & Tango::DevicePipe::operator<<   | (   | short &    | *datum*   | )   |    |
+------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Insert data into a device pipe.

Inserting data into a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ instance is
simlar to inserting data into a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class instance. See doc of
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class insertion methods
(`DevicePipeBlob::operator<< <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae1bf63d8a01b7710ae051e53a082548f>`__)
to get a complete documentation on how to insert data into a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__

Parameters
    +--------+---------+------------------------------------------------------------------------------------------------+
    | [in]   | datum   | The data to be inserted into the `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__   |
    +--------+---------+------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__\ & Tango::DevicePipe::operator>>   | (   | short &    | *datum*   | )   |    |
+------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Extract data from a device pipe.

Extracting data from a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ instance is
simlar to extracting data from a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class instance. See doc of
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class extraction methods
(`DevicePipeBlob::operator>> <../../df/dd9/classTango_1_1DevicePipeBlob.html#a8a560fa9f94789d0913099f119054e18>`__)
to get a complete documentation on how to extract data from a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__

Parameters
    +--------+---------+-----------------+
    | [in]   | datum   | The pipe data   |
    +--------+---------+-----------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---------------+--------+-----+----+ |                                      |
| | void Tango::DevicePipe::reset\_exc |                                      |
| eptions   | (   | DevicePipeBlob::ex |                                      |
| cept\_flags    | *fl*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---------------+--------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+--------------- |                                      |
| --------+-----------+-----+----+     |                                      |
| | void Tango::DevicePipe::set\_data\ |                                      |
| _elt\_names   | (   | vector< string |                                      |
|  > &    | *names*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| --------+-----------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set blob data element number and names.

Set the blob data element number and names. The data element number is
the number of names in the input parameter.

Parameters
    +--------+---------+-------------------------------+
    | [in]   | names   | The blob data element names   |
    +--------+---------+-------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+------------+----- |                                      |
| ---+-----+----+                      |                                      |
| | void Tango::DevicePipe::set\_data\ |                                      |
| _elt\_nb   | (   | size\_t    | *nb* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------+----- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set blob data element number.

Set the blob data element number

Parameters
    +--------+------+--------------------------------+
    | [in]   | nb   | The blob data element number   |
    +--------+------+--------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+--------------------- |                                      |
| -------------+--------+-----+----+   |                                      |
| | void Tango::DevicePipe::set\_excep |                                      |
| tions   | (   | DevicePipeBlob::exce |                                      |
| pt\_flags    | *fl*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| -------------+--------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. See
`DevicePipe::exceptions() <../../da/dc5/classTango_1_1DevicePipe.html#a4184d1888504aed76579e702ec6c0bb7>`__
for a usage example.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+-------------------+------- |                                      |
| ---------+-----+----+                |                                      |
| | void Tango::DevicePipe::set\_name  |                                      |
|   | (   | const string &    | *pipe\ |                                      |
| _name*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| --+-----+-------------------+------- |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set pipe name.

Set the device pipe name

Parameters
    +--------+--------------+-----------------+
    | [in]   | pipe\_name   | The pipe name   |
    +--------+--------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+--------------- |                                      |
| ----+----------------------+-----+-- |                                      |
| --+                                  |                                      |
| | void Tango::DevicePipe::set\_root\ |                                      |
| _blob\_name   | (   | const string & |                                      |
|     | *root\_blob\_name*   | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ----+----------------------+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set root blob name.

Set the root blob name

Parameters
    +--------+--------------------+----------------------+
    | [in]   | root\_blob\_name   | The root blob name   |
    +--------+--------------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | bitset<DevicePipeBlob::numFlags> T |                                      |
| ango::DevicePipe::state   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get instance insertion/extraction state.

Allow the user to find out what was the reason of insertion/extraction
into/from `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
failure. This method has to be used when exceptions are disabled. Here
is an example of how methods
`has\_failed() <../../da/dc5/classTango_1_1DevicePipe.html#a1ad65ce09364209327fa9485ef30f8ff>`__
and
`state() <../../da/dc5/classTango_1_1DevicePipe.html#a1f00cacf4141ab47e7f1c1a4bbb4bbdb>`__
could be used

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a22601f9beee583d33c2d17a9cff58c71>`__
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

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----- | friend                               |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &                                |                                      |
|                          | *str*,    |                                      |
| |                                    |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| |                       |     | `Dev |                                      |
| icePipe <../../da/dc5/classTango_1_1 |                                      |
| DevicePipe.html>`__ &    | *dd*      |                                      |
| |                                    |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
| |                       | )   |      |                                      |
|                                      |                                      |
|                          |           |                                      |
| |                                    |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -------------------------+---------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Print a `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
instance.

Is an utility function to easily print the contents of a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ object. This
function knows all types which could be inserted in a
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ object and
print them accordingly. A special string is printed if the
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ object is
empty

DeviceProxy \*dev = new DeviceProxy(“...”);

`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html#a22601f9beee583d33c2d17a9cff58c71>`__
out;

out = dev->read\_pipe(“MyPipe”);

cout << “Pipe content: ” << out <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Parameters
    +--------+-------+------------------------------+
    | [in]   | str   | The printing stream          |
    +--------+-------+------------------------------+
    | [in]   | dd    | The instance to be printed   |
    +--------+-------+------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
