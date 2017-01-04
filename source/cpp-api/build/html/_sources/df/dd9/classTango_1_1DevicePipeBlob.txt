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
members <../../da/d98/classTango_1_1DevicePipeBlob-members.html>`__

Tango::DevicePipeBlob Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

A device pipe blob.
`More... <../../df/dd9/classTango_1_1DevicePipeBlob.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
()

 

| Create a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
object. `More... <#a5bfde9fdf42756efc933898124e64c1a>`__

 

 

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad93b7bf767381d3883a1460cad4ff381>`__
(const string &blob\_name)

 

| Create a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
object with name. `More... <#ad93b7bf767381d3883a1460cad4ff381>`__

 

Get/Set methods

void 

`set\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__
(const string &blob\_name)

 

| Set blob name. `More... <#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__

 

const string & 

`get\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__
()

 

| Get blob name. `More... <#a5271acce39f4b6d3ddc5e91775ff8039>`__

 

Inserting data into a DevicePipeBlob

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ & 

`operator<< <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae1bf63d8a01b7710ae051e53a082548f>`__
(short &datum)

 

| Insert data into a data blob.
`More... <#ae1bf63d8a01b7710ae051e53a082548f>`__

 

void 

`set\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#aaca17726578d592076c6bad76a98e59c>`__
(size\_t nb)

 

| Set blob data element number.
`More... <#aaca17726578d592076c6bad76a98e59c>`__

 

void 

`set\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6c90f89d110cd3f7e7368346f4ae9e7>`__
(vector< string > &names)

 

| Set blob data element number and names.
`More... <#ae6c90f89d110cd3f7e7368346f4ae9e7>`__

 

Extracting data from a DevicePipeBlob

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ & 

`operator>> <../../df/dd9/classTango_1_1DevicePipeBlob.html#a8a560fa9f94789d0913099f119054e18>`__
(short &datum)

 

| Extract data from a data blob.
`More... <#a8a560fa9f94789d0913099f119054e18>`__

 

size\_t 

`get\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__
()

 

| Get blob data element number.
`More... <#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__

 

vector< string > 

`get\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#a2becdbba06b82cf962423f937d54b608>`__
()

 

| Get blob data elements name.
`More... <#a2becdbba06b82cf962423f937d54b608>`__

 

string 

`get\_data\_elt\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a73058a3dbe75fa859caad08c56b9e83f>`__
(size\_t ind)

 

| Get blob data element name.
`More... <#a73058a3dbe75fa859caad08c56b9e83f>`__

 

int 

`get\_data\_elt\_type <../../df/dd9/classTango_1_1DevicePipeBlob.html#abe84aab96cd9150adceee9f653dea59f>`__
(size\_t ind)

 

| Get blob data element value type.
`More... <#abe84aab96cd9150adceee9f653dea59f>`__

 

Exception and error related methods methods

void 

`exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__
(bitset< numFlags > fl)

 

| Set exception flag. `More... <#ac1573563218260fa5211c66c367d85df>`__

 

bitset< numFlags > 

`exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#aebf99ce7518695ef361549f729f8b305>`__
()

 

| Get exception flag. `More... <#aebf99ce7518695ef361549f729f8b305>`__

 

void 

`reset\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ab54466d1b593e8e464957f19ef685ae2>`__
(except\_flags fl)

 

| Reset one exception flag.
`More... <#ab54466d1b593e8e464957f19ef685ae2>`__

 

void 

`set\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6d904cd958cb22382ceefef4a4c8593>`__
(except\_flags fl)

 

| Set one exception flag.
`More... <#ae6d904cd958cb22382ceefef4a4c8593>`__

 

bool 

`has\_failed <../../df/dd9/classTango_1_1DevicePipeBlob.html#aefce9c5e97eb7a80197d1590a13c4f50>`__
()

 

| Check insertion/extraction success.
`More... <#aefce9c5e97eb7a80197d1590a13c4f50>`__

 

bitset< numFlags > 

`state <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__
()

 

| Get instance insertion/extraction state.
`More... <#ad0ef655afc8a1d0a59a44091892b017f>`__

 

Detailed Description
--------------------

A device pipe blob.

A device pipe blob. A blob is used to pack data to be sent through
device pipe

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+----+-----+----+
| Tango::DevicePipeBlob::DevicePipeBlob   | (   |    | )   |    |
+-----------------------------------------+-----+----+-----+----+

Create a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
object.

Default constructor.

+-----------------------------------------+-----+-------------------+----------------+-----+----+
| Tango::DevicePipeBlob::DevicePipeBlob   | (   | const string &    | *blob\_name*   | )   |    |
+-----------------------------------------+-----+-------------------+----------------+-----+----+

Create a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
object with name.

Create one instance of the
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
class and set its name

Parameters
    +--------+--------------+-----------------+
    | [in]   | blob\_name   | The blob name   |
    +--------+--------------+-----------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------------------- |                                      |
| -+--------+-----+----+               |                                      |
| | void Tango::DevicePipeBlob::except |                                      |
| ions   | (   | bitset< numFlags >    |                                      |
|  | *fl*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------------------- |                                      |
| -+--------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

It's a method which allows the user to switch on/off exception throwing
when trying to extract data from a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
object. The following flags are supported :

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
   `set\_data\_elt\_nb() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aaca17726578d592076c6bad76a98e59c>`__
   or
   `set\_data\_elt\_names() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6c90f89d110cd3f7e7368346f4ae9e7>`__
-  **mixing\_flag** - Throw a WrongData exception (reason =
   API\_NotSupportedFeature) if user tries to mix insertion/extraction
   method (<< or >>) with operator[]

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

Referenced by
`Tango::Pipe::exceptions() <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | bitset<numFlags> Tango::DevicePipe |                                      |
| Blob::exceptions   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb;

bitset<DevicePipeBlob::numFlags> bs = dpb.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

dpb.set\_exceptions(DevicePipeBlob::wrongtype\_flag);

bs = dpb.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

+------------------------------------------------------+-----+------------+---------+-----+----+
| string Tango::DevicePipeBlob::get\_data\_elt\_name   | (   | size\_t    | *ind*   | )   |    |
+------------------------------------------------------+-----+------------+---------+-----+----+

Get blob data element name.

Get the blob data element name for a single data element

Parameters
    +--------+-------+------------------------------------------+
    | [in]   | ind   | The data element index within the blob   |
    +--------+-------+------------------------------------------+

Returns
    The blob data element name

Referenced by
`Tango::WPipe::get\_data\_elt\_name() <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__.

+---------------------------------------------------------------+-----+----+-----+----+
| vector<string> Tango::DevicePipeBlob::get\_data\_elt\_names   | (   |    | )   |    |
+---------------------------------------------------------------+-----+----+-----+----+

Get blob data elements name.

Get the blob data elements name

Returns
    The blob data elements name

Referenced by
`Tango::WPipe::get\_data\_elt\_names() <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__.

+-----------------------------------------------------+-----+----+-----+----+
| size\_t Tango::DevicePipeBlob::get\_data\_elt\_nb   | (   |    | )   |    |
+-----------------------------------------------------+-----+----+-----+----+

Get blob data element number.

Get the blob data element number

Returns
    The blob data element number

Referenced by
`Tango::WPipe::get\_data\_elt\_nb() <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__,
and
`Tango::Pipe::get\_data\_elt\_nb() <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__.

+---------------------------------------------------+-----+------------+---------+-----+----+
| int Tango::DevicePipeBlob::get\_data\_elt\_type   | (   | size\_t    | *ind*   | )   |    |
+---------------------------------------------------+-----+------------+---------+-----+----+

Get blob data element value type.

Get the blob data element value type for a single data element

Parameters
    +--------+-------+------------------------------------------+
    | [in]   | ind   | The data element index within the blob   |
    +--------+-------+------------------------------------------+

Returns
    The blob data element value type

Referenced by
`Tango::WPipe::get\_data\_elt\_type() <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | const string& Tango::DevicePipeBlo |                                      |
| b::get\_name   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get blob name.

Get the blob name

Returns
    The blob name

Referenced by
`Tango::WPipe::get\_root\_blob\_name() <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__,
and
`Tango::Pipe::get\_root\_blob\_name() <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__.

+-------------------------------------------+-----+----+-----+----+
| bool Tango::DevicePipeBlob::has\_failed   | (   |    | )   |    |
+-------------------------------------------+-----+----+-----+----+

Check insertion/extraction success.

Allow the user to check if insertion/extraction into/from
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
instance was successfull. This method has to be used when exceptions are
disabled.

Returns
    True if insertion/extraction has failed

Referenced by
`Tango::Pipe::has\_failed() <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__.

+------------------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__\ & Tango::DevicePipeBlob::operator<<   | (   | short &    | *datum*   | )   |    |
+------------------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Insert data into a data blob.

According to the data to be inserted into the blob data element, several
kinds of insetor methods have been implemented. You can insert data
from:

-  Scalar data type
-  vector
-  TANGO CORBA sequence types (by reference)
-  TANGO CORBA sequence types (by pointer)
-  DataElement<T> with T being scalar data type
-  DataElement<T> with T being vector
-  DataElement<T> with T being TANGO CORBA sequence type (by reference)
-  DataElement<T> with T being TANGO CORBA sequence type (by pointer)

When inserting data using a DataElement<T> instance, the data element
name is also set. **For insertion from TANGO CORBA sequence type
pointer, the insertion method consumes the memory allocated to store the
data and it will be freed by the
`Tango <../../de/ddf/namespaceTango.html>`__ layer.**

Insert operators for the following scalar C++ types (and DataElement<T>)

-  bool
-  short
-  DevLong
-  DevLong64
-  float
-  double
-  unsigned char
-  unsigned short
-  DevULong
-  DevULong64
-  DevString
-  string
-  DevState
-  DevEncoded

Insert operators for the following C++ vector types (and DataElement<T>)

-  vector<bool>
-  vector<short>
-  vector<DevLong>
-  vector<DevLong64>
-  vector<float>
-  vector<double>
-  vector<unsigned char>
-  vector<unsigned short>
-  vector<DevULong>
-  vector<DevULong64>
-  vector<DevSstring>
-  vector<string>
-  vector<DevState>

Insert operators for the following CORBA sequence types (and
DataElement<T>):

-  DevVarBooleanArray &
-  DevVarShortArray &
-  DevVarLongArray &
-  DevVarLong64Array &
-  DevVarFloatArray &
-  DevVarDoubleArray &
-  DevVarUCharArray &
-  DevVarUShortArray &
-  DevVarULongArray &
-  DevVarULong64Array &
-  DevVarStringArray &
-  DevVarStateArray &

Insert operators for the following CORBA sequence types **with memory
consumption** (and DataElement<T>):

-  DevVarBooleanArray \*
-  DevVarShortArray \*
-  DevVarLongArray \*
-  DevVarLong64Array \*
-  DevVarFloatArray \*
-  DevVarDoubleArray \*
-  DevVarUCharArray \*
-  DevVarUShortArray \*
-  DevVarULongArray \*
-  DevVarULong64Array \*
-  DevVarStringArray \*
-  DevVarStateArray \*

Here is an example of inserting data into a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
instance. We insert 3 data element into the pipe blob with a DevLong, a
vector of doubles and finally an array of 100 unsigned short

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb("MyBlob");

vector<string> de\_names = {"FirstDE","SecondDE","ThirdDE"};

dpb.set\_data\_elt\_names(de\_names);

DevLong dl = 666;

vector<double> v\_db = {1.11,2.22};

unsigned short \*array = new unsigned short [100]; // The array is
populated by a way or another

DevVarUShortArray \*dvush = create\_DevVarUShortArray(array,100);

try

{

dpb << dl << v\_db << dvush;

}

catch (DevFailed &e)

{

cout << "DevicePipeBlob insertion failed" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

....

}

The same example of inserting data into a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
instance when we want to set the data element name.

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb("MyBlob");

DataElement<DevLong> de\_dl("FirstDE",666);

vector<double> v\_db = {1.11,2.22};

DataElement<vector<double> > de\_v\_db("SecondDE",v\_db);

unsigned short \*array = new unsigned short [100]; // The array is
populated by a way or another

DevVarUShortArray \*dvush = create\_DevVarUShortArray(array,100);

DataElement<DevVarUShortArray \*> de\_dvush("ThirdDE",array);

try

{

dpb << de\_dl << de\_v\_db << de\_dvush;

}

catch (DevFailed &e)

{

cout << "DevicePipeBlob insertion failed" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

....

}

...

It is also possible to do the insertion in a third way

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb("MyBlob");

vector<string> de\_names{"FirstDE","SecondDE","ThirdDE"};

dpb.set\_data\_elt\_names(de\_names);

DevLong dl = 666;

vector<double> v\_db = {1.11,2.22};

unsigned short \*array = new unsigned short [100]; // The array is
populated by a way or another

DevVarUShortArray \*dvush = create\_DevVarUShortArray(array,100);

dpb["FirstDE"] << dl;

dpb["SecondDE"] << v\_db;

dpb["ThirdDE"] << dvush;

Parameters
    +--------+---------+--------------------------------------------------------------------------------------------------------+
    | [in]   | datum   | The data to be inserted into the `DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__   |
    +--------+---------+--------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+------------------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+
| `DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__\ & Tango::DevicePipeBlob::operator>>   | (   | short &    | *datum*   | )   |    |
+------------------------------------------------------------------------------------------------------------+-----+------------+-----------+-----+----+

Extract data from a data blob.

According to the data inside blob data element, several kinds of
extractor methods have been implemented. You can extract data into:

-  Scalar data type
-  vector
-  TANGO CORBA sequence types
-  DataElement<T> with T being scalar data type
-  DataElement<T> with T being vector
-  DataElement<T> with T being TANGO CORBA sequence type

When extracting data using a DataElement<T> instance, the data element
name is also returned. **For extraction into C++ vector, data are copied
into the vector. It is not the case for extraction into TANGO CORBA
sequence type. For extraction into TANGO CORBA sequence types, the
extraction method consumes the memory allocated to store the data and it
is the caller responsibility to delete this memory.**

Extract operators for the following scalar C++ types (and
DataElement<T>)

-  bool
-  short
-  DevLong
-  DevLong64
-  float
-  double
-  unsigned char
-  unsigned short
-  DevULong
-  DevULong64
-  string
-  DevState
-  DevEncoded

Extract operators for the following C++ vector types (and
DataElement<T>)

-  vector<bool>
-  vector<short>
-  vector<DevLong>
-  vector<DevLong64>
-  vector<float>
-  vector<double>
-  vector<unsigned char>
-  vector<unsigned short>
-  vector<DevULong>
-  vector<DevULong64>
-  vector<string>
-  vector<DevState>

Extract operators for the following CORBA sequence types **with memory
consumption** (and DataElement<T>):

-  DevVarBooleanArray \*
-  DevVarShortArray \*
-  DevVarLongArray \*
-  DevVarLong64Array \*
-  DevVarFloatArray \*
-  DevVarDoubleArray \*
-  DevVarUCharArray \*
-  DevVarUShortArray \*
-  DevVarULongArray \*
-  DevVarULong64Array \*
-  DevVarStringArray \*
-  DevVarStateArray \*

Here is an example of extracting data from a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
instance. We know that the
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
contains 3 data element with a DevLong, an array of doubles and finally
an array of unsigned short

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb = .....

DevLong dl;

vector<double> v\_db;

DevVarUShortArray \*dvush = new DevVarUShortArray();

try

{

dpb >> dl >> v\_db >> dvush;

}

catch (DevFailed &e)

{

cout << "DevicePipeBlob extraction failed" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

....

}

delete dvush;

The same example of extracting data from a
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
instance when we want to retrieve the data element name.

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb = .....

DataElement<DevLong> de\_dl;

DataElement<vector<double> > de\_v\_db;

DataElement<DevVarUShortArray \*> de\_dvush(new DevVarUShortArray());

try

{

dpb >> de\_dl >> de\_v\_db >> de\_dvush;

}

catch (DevFailed &e)

{

cout << "DevicePipeBlob extraction failed" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

....

}

cout << "Data element name = " << de\_dl.name << " - Value = " <<
de\_dl.value <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

...

delete de\_dvush.value;

It is also possible to do the extraction in a generic way

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb = .....

size\_t nb\_de = dpb.get\_data\_elt\_nb();

for (size\_t loop = 0;loop < nb;loop++)

{

int data\_type = dpb.get\_data\_elt\_type(loop);

string de\_name = dpb.get\_data\_elt\_name(loop);

switch(data\_type)

{

case
`DEV\_LONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6b94ef795dea2bcc6af9a2be4241a28b>`__:

{

DevLong lg;

dpb >> lg;

}

break;

case
`DEVVAR\_DOUBLEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aec3cf6f38917b8a9736dfaeccda26e26>`__:

{

vector<double> v\_db;

dpb >> v\_db;

}

break;

....

}

...

}

Note that instead of using DevLong and vector<double> data, the
extraction can be done using DataElement<T> instances. In this case, the
call to the
`get\_data\_elt\_name() <../../df/dd9/classTango_1_1DevicePipeBlob.html#a73058a3dbe75fa859caad08c56b9e83f>`__
method becomes useless.

Parameters
    +---------+---------+-----------------+
    | [out]   | datum   | The blob data   |
    +---------+---------+-----------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+--------------- |                                      |
| ---+--------+-----+----+             |                                      |
| | void Tango::DevicePipeBlob::reset\ |                                      |
| _exceptions   | (   | except\_flags  |                                      |
|    | *fl*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

Referenced by
`Tango::Pipe::reset\_exceptions() <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__.

+-----------------------------------------------------+-----+-----------------------+-----------+-----+----+
| void Tango::DevicePipeBlob::set\_data\_elt\_names   | (   | vector< string > &    | *names*   | )   |    |
+-----------------------------------------------------+-----+-----------------------+-----------+-----+----+

Set blob data element number and names.

Set the blob data element number and names. The data element number is
the number of names in the input parameter.

Parameters
    +--------+---------+-------------------------------+
    | [in]   | names   | The blob data element names   |
    +--------+---------+-------------------------------+

Referenced by
`Tango::Pipe::set\_data\_elt\_names() <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__.

+--------------------------------------------------+-----+------------+--------+-----+----+
| void Tango::DevicePipeBlob::set\_data\_elt\_nb   | (   | size\_t    | *nb*   | )   |    |
+--------------------------------------------------+-----+------------+--------+-----+----+

Set blob data element number.

Set the blob data element number

Parameters
    +--------+------+--------------------------------+
    | [in]   | nb   | The blob data element number   |
    +--------+------+--------------------------------+

Referenced by
`Tango::Pipe::set\_data\_elt\_nb() <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----------------- |                                      |
| -+--------+-----+----+               |                                      |
| | void Tango::DevicePipeBlob::set\_e |                                      |
| xceptions   | (   | except\_flags    |                                      |
|  | *fl*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| -+--------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. See
`DevicePipeBlob::exceptions() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aebf99ce7518695ef361549f729f8b305>`__
for a usage example.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

Referenced by
`Tango::Pipe::set\_exceptions() <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+-------------------+--- |                                      |
| -------------+-----+----+            |                                      |
| | void Tango::DevicePipeBlob::set\_n |                                      |
| ame   | (   | const string &    | *b |                                      |
| lob\_name*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------+-----+-------------------+--- |                                      |
| -------------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set blob name.

Set the blob name

Parameters
    +--------+--------------+-----------------+
    | [in]   | blob\_name   | The blob name   |
    +--------+--------------+-----------------+

Referenced by
`Tango::Pipe::set\_root\_blob\_name() <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | bitset<numFlags> Tango::DevicePipe |                                      |
| Blob::state   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get instance insertion/extraction state.

Allow the user to find out what was the reason of insertion/extraction
into/from
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
failure. This method has to be used when exceptions are disabled. Here
is an example of how methods
`has\_failed() <../../df/dd9/classTango_1_1DevicePipeBlob.html#aefce9c5e97eb7a80197d1590a13c4f50>`__
and
`state() <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__
could be used

`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5bfde9fdf42756efc933898124e64c1a>`__
dpb = ....

bitset<DevicePipeBlob::numFlags> bs;

bs.reset();

dpb.exceptions(bs);

DevLong dl;

dpb >> dl;

if (dpb.has\_failed() == true)

{

bitset<DevicePipeBlob::numFlags> bs\_err = dpb.state();

if (bs\_err.test(DevicePipeBlob::isempty\_flag) == true)

.....

}

Returns
    The error bit set.

Referenced by
`Tango::Pipe::state() <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__.

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
