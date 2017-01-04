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
members <../../d0/d54/classTango_1_1DeviceData-members.html>`__

Tango::DeviceData Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for sending and receiving data from device commands.
`More... <../../df/d22/classTango_1_1DeviceData.html#details>`__

Inheritance diagram for Tango::DeviceData:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

 

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
()

 

| Create a `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
object. `More... <#a2227d87b07be33fda5a23639f79022ad>`__

 

Inserters and Extractors

void 

`operator<< <../../df/d22/classTango_1_1DeviceData.html#a441796301b708d97386ea636104889d4>`__
(bool datum)

 

| The insert operators. `More... <#a441796301b708d97386ea636104889d4>`__

 

void 

`insert <../../df/d22/classTango_1_1DeviceData.html#aea8f74e6b21fb831185258575e3b95f5>`__
(vector< DevLong > &vl, vector< string > &vs)

 

| Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type.
`More... <#aea8f74e6b21fb831185258575e3b95f5>`__

 

void 

`insert <../../df/d22/classTango_1_1DeviceData.html#a3ea03dbacd66ba3639e937fd08a41a7e>`__
(vector< double > &vd, vector< string > &vs)

 

| Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type.
`More... <#a3ea03dbacd66ba3639e937fd08a41a7e>`__

 

void 

`insert <../../df/d22/classTango_1_1DeviceData.html#ae39feb712c913f445653d7b1e4136e1b>`__
(const string &str, vector< unsigned char > &buffer)

 

| Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevEncoded data type. `More... <#ae39feb712c913f445653d7b1e4136e1b>`__

 

bool 

`operator>> <../../df/d22/classTango_1_1DeviceData.html#a2b6646e364f813aa50c9bae5b0ffea8f>`__
(bool &datum)

 

| The extract operators.
`More... <#a2b6646e364f813aa50c9bae5b0ffea8f>`__

 

bool 

`extract <../../df/d22/classTango_1_1DeviceData.html#a996cb6f093c40bc7d2aecbdaf927ba27>`__
(vector< DevLong > &vl, vector< string > &vs)

 

| Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type.
`More... <#a996cb6f093c40bc7d2aecbdaf927ba27>`__

 

bool 

`extract <../../df/d22/classTango_1_1DeviceData.html#ab0ed8579ce26b2b834a70dc6473a86ed>`__
(vector< double > &vd, vector< string > &vs)

 

| Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type.
`More... <#ab0ed8579ce26b2b834a70dc6473a86ed>`__

 

bool 

`extract <../../df/d22/classTango_1_1DeviceData.html#a08829111582a93ec4a29680081dfbc96>`__
(const char \*&str, const unsigned char \*&data, unsigned int &length)

 

| Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevEncoded data type. `More... <#a08829111582a93ec4a29680081dfbc96>`__

 

Exception and error related methods methods

void 

`exceptions <../../df/d22/classTango_1_1DeviceData.html#a955d63845f806ed9268b5d4b74f6a5d2>`__
(bitset< numFlags > fl)

 

| Set exception flag. `More... <#a955d63845f806ed9268b5d4b74f6a5d2>`__

 

bitset< numFlags > 

`exceptions <../../df/d22/classTango_1_1DeviceData.html#a1f43b8fa4cc2c1c371b471f4a49b9ddb>`__
()

 

| Get exception flag. `More... <#a1f43b8fa4cc2c1c371b471f4a49b9ddb>`__

 

void 

`reset\_exceptions <../../df/d22/classTango_1_1DeviceData.html#afc018476b633193426ba5e02451ff70b>`__
(except\_flags fl)

 

| Reset one exception flag.
`More... <#afc018476b633193426ba5e02451ff70b>`__

 

void 

`set\_exceptions <../../df/d22/classTango_1_1DeviceData.html#a051aa282fb9606529f1cf6819eabc2e9>`__
(except\_flags fl)

 

| Set one exception flag.
`More... <#a051aa282fb9606529f1cf6819eabc2e9>`__

 

bitset< numFlags > 

`state <../../df/d22/classTango_1_1DeviceData.html#ab0b8c5024dbc3e0e200313a3d91b9c95>`__
()

 

| Get instance extraction state.
`More... <#ab0b8c5024dbc3e0e200313a3d91b9c95>`__

 

miscellaneous methods

bool 

`is\_empty <../../df/d22/classTango_1_1DeviceData.html#a6a46f83cfabcd66a51e1a879a2b8aca5>`__
()

 

| Check if the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ instance is
empty. `More... <#a6a46f83cfabcd66a51e1a879a2b8aca5>`__

 

int 

`get\_type <../../df/d22/classTango_1_1DeviceData.html#a435d573580962abb03ce5041ad0fff67>`__
()

 

| Get `Tango <../../de/ddf/namespaceTango.html>`__ data type of the
included data. `More... <#a435d573580962abb03ce5041ad0fff67>`__

 

Friends
-------

ostream & 

`operator<< <../../df/d22/classTango_1_1DeviceData.html#afc7fbe364eb1961ae0e0da203568736e>`__
(ostream &str,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &dd)

 

| Print a `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
instance. `More... <#afc7fbe364eb1961ae0e0da203568736e>`__

 

Detailed Description
--------------------

Fundamental type for sending and receiving data from device commands.

This is the fundamental type for sending and receiving data from device
commands. The values can be inserted and extracted using the operators
<< and >> respectively and
`insert() <../../df/d22/classTango_1_1DeviceData.html#aea8f74e6b21fb831185258575e3b95f5>`__
for mixed data types. A status flag indicates if there is data in the
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object or not. An
additional flag allows the user to activate exceptions.

**Insertion by pointers takes full ownership of the pointed to memory.
The insertion copy the data in the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object and
delete the pointed to memory. Therefore, the memory is not more usable
after the insertion.
 When using extraction by pointers, the pointed to memory is inside the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object and
its lifetime is the same than the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object
lifetime.**

Author
    taurel

Revision
    1

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------+-----+----+-----+----+
| Tango::DeviceData::DeviceData   | (   |    | )   |    |
+---------------------------------+-----+----+-----+----+

Create a `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
object.

Default constructor. The instance is empty

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+-----------------------+-- |                                      |
| ------+-----+----+                   |                                      |
| | void Tango::DeviceData::exceptions |                                      |
|    | (   | bitset< numFlags >    | * |                                      |
| fl*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ---+-----+-----------------------+-- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

It's a method which allows the user to switch on/off exception throwing
when trying to extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object. The
following flags are supported :

-  **isempty\_flag** - throw a Empty
   `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ exception
   (reason = API\_EmptyDeviceData) if user tries to extract data from an
   empty `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
   object. By default, this flag is set
-  **wrongtype\_flag** - throw a WrongData exception (reason =
   API\_IncompatibleArgumentType) if user tries to extract data with a
   type different than the type used for insertion. By default, this
   flag is not set

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

Referenced by
`Tango::GroupCmdReply::operator>>() <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | bitset<numFlags> Tango::DeviceData |                                      |
| ::exceptions   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
dd;

bitset<DeviceData::numFlags> bs = dd.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

da.set\_exceptions(DeviceData::wrongtype\_flag);

bs = dd.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

+-----------------------------------+-----+------------------------+---------+
| bool Tango::DeviceData::extract   | (   | vector< DevLong > &    | *vl*,   |
+-----------------------------------+-----+------------------------+---------+
|                                   |     | vector< string > &     | *vs*    |
+-----------------------------------+-----+------------------------+---------+
|                                   | )   |                        |         |
+-----------------------------------+-----+------------------------+---------+

Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type.

Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type

Parameters
    +---------+------+-------------------------------------------+
    | [out]   | vl   | The long vector which will be inialized   |
    +---------+------+-------------------------------------------+
    | [out]   | vs   | The string vector to be initialized       |
    +---------+------+-------------------------------------------+

Returns
    Boolean set to false if the extraction failed

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-----------------------------------+-----+-----------------------+---------+
| bool Tango::DeviceData::extract   | (   | vector< double > &    | *vd*,   |
+-----------------------------------+-----+-----------------------+---------+
|                                   |     | vector< string > &    | *vs*    |
+-----------------------------------+-----+-----------------------+---------+
|                                   | )   |                       |         |
+-----------------------------------+-----+-----------------------+---------+

Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type.

Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type

Parameters
    +---------+------+---------------------------------------+
    | [out]   | vd   | The double vector to be initialized   |
    +---------+------+---------------------------------------+
    | [out]   | vs   | The string vector to be initialized   |
    +---------+------+---------------------------------------+

Returns
    Boolean set to false if the extraction failed

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-----------------------------------+-----+----------------------------+-------------+
| bool Tango::DeviceData::extract   | (   | const char \*&             | *str*,      |
+-----------------------------------+-----+----------------------------+-------------+
|                                   |     | const unsigned char \*&    | *data*,     |
+-----------------------------------+-----+----------------------------+-------------+
|                                   |     | unsigned int &             | *length*    |
+-----------------------------------+-----+----------------------------+-------------+
|                                   | )   |                            |             |
+-----------------------------------+-----+----------------------------+-------------+

Extract data from a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevEncoded data type.

Extract command data when the command data type is DevEncoded Similar
method with following signature also exist

-  **extract(string &str,vector<unsigned char> &data);**

Parameters
    +---------+----------+-------------------------------+
    | [out]   | str      | The DevEncoded string         |
    +---------+----------+-------------------------------+
    | [out]   | data     | The DevEncoded data pointer   |
    +---------+----------+-------------------------------+
    | [out]   | length   | The DevEncoded data length    |
    +---------+----------+-------------------------------+

Returns
    Boolean set to false if the extraction failed

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+------------------------------------+-----+----+-----+----+
| int Tango::DeviceData::get\_type   | (   |    | )   |    |
+------------------------------------+-----+----+-----+----+

Get `Tango <../../de/ddf/namespaceTango.html>`__ data type of the
included data.

This method returns the `Tango <../../de/ddf/namespaceTango.html>`__
data type of the data inside the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object

Returns
    The data type

+----------------------------------+-----+------------------------+---------+
| void Tango::DeviceData::insert   | (   | vector< DevLong > &    | *vl*,   |
+----------------------------------+-----+------------------------+---------+
|                                  |     | vector< string > &     | *vs*    |
+----------------------------------+-----+------------------------+---------+
|                                  | )   |                        |         |
+----------------------------------+-----+------------------------+---------+

Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type.

Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarLongStringArray data type

Parameters
    +--------+------+------------------------------------+
    | [in]   | vl   | The long vector to be inserted     |
    +--------+------+------------------------------------+
    | [in]   | vs   | The string vector to be inserted   |
    +--------+------+------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+----------------------------------+-----+-----------------------+---------+
| void Tango::DeviceData::insert   | (   | vector< double > &    | *vd*,   |
+----------------------------------+-----+-----------------------+---------+
|                                  |     | vector< string > &    | *vs*    |
+----------------------------------+-----+-----------------------+---------+
|                                  | )   |                       |         |
+----------------------------------+-----+-----------------------+---------+

Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type.

Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevVarDoubleStringArray data type

Parameters
    +--------+------+------------------------------------+
    | [in]   | vd   | The double vector to be inserted   |
    +--------+------+------------------------------------+
    | [in]   | vs   | The string vector to be inserted   |
    +--------+------+------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+----------------------------------+-----+------------------------------+-------------+
| void Tango::DeviceData::insert   | (   | const string &               | *str*,      |
+----------------------------------+-----+------------------------------+-------------+
|                                  |     | vector< unsigned char > &    | *buffer*    |
+----------------------------------+-----+------------------------------+-------------+
|                                  | )   |                              |             |
+----------------------------------+-----+------------------------------+-------------+

Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevEncoded data type.

| Insert data into a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ for the
DevEncoded data type
|  Similar methods with different parameters data type exist for
inserting data for a DevEncoded data type

-  **void insert(const char \*str, DevVarCharArray \*data);**
-  **void insert(const char \*str, unsigned char \*data,unsigned int
   length);**

These three methods do not take ownership of the memory used for the
data buffer.

Parameters
    +--------+----------+----------------------------------------------+
    | [in]   | str      | The string part of the DevEncoded instance   |
    +--------+----------+----------------------------------------------+
    | [in]   | buffer   | The data part of the DevEncoded instance     |
    +--------+----------+----------------------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-------------------------------------+-----+----+-----+----+
| bool Tango::DeviceData::is\_empty   | (   |    | )   |    |
+-------------------------------------+-----+----+-----+----+

Check if the `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
instance is empty.

`is\_empty() <../../df/d22/classTango_1_1DeviceData.html#a6a46f83cfabcd66a51e1a879a2b8aca5>`__
is a boolean method which returns true or false depending on whether the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object
contains data or not. It can be used to test whether the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ has been
initialized or not but you have first to disable exception throwing in
case of empty object e.g.

string string\_read;

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
sl\_read = my\_device->command\_inout(“ReadLine”);

sl\_read.reset\_exceptions(DeviceData::isempty\_flag);

if (! sl\_read.is\_empty())

{

sl\_read >> string\_read;

}

else

{

cout << “ no data read from serial line !” <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

Returns
    Boolean set to true is the instance is empty

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+---------+-----------+---- |                                      |
| -+----+                              |                                      |
| | void Tango::DeviceData::operator<< |                                      |
|    | (   | bool    | *datum*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ---+-----+---------+-----------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The insert operators.

The insert operators are specified for the following C++ types :

-  bool
-  short
-  unsigned short
-  DevLong
-  DevULong
-  DevLong64
-  DevULong64
-  DevState
-  DevEncoded
-  float
-  double
-  string
-  char\* (insert only)
-  const char \*
-  vector<unsigned char>
-  vector<string>
-  vector<short>
-  vector<unsigned short>
-  vector<DevLong>
-  vector<DevULong>
-  vector<DevLong64>
-  vector<DevULong64>
-  vector<float>
-  vector<double>

Operators exist for inserting the native TANGO CORBA sequence types.
These can be useful for programmers who want to use the TANGO api
internally in their device servers and do not want to convert from CORBA
to C++ types. Insert and extract operators exist for the following types
:

-  DevVarUCharArray \*
-  DevVarShortArray \*
-  DevVarUShortArray \*
-  DevVarLongArray \*
-  DevVarULongArray \*
-  DevVarLong64Array \*
-  DevVarULong64Array \*
-  DevVarFloatArray \*
-  DevVarDoubleArray \*
-  DevVarStringArray \*
-  DevVarLongStringArray \*
-  DevVarDoubleStringArray \*

**Insertion by pointers takes full ownership of the pointed to memory.
The insertion copy the data in the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object and
delete the pointed to memory. Therefore, the memory is not more usable
after the insertion.**

Operators also exist for inserting TANGO CORBA sequence type by
reference. The insertion copy the data into the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object.
Insert operator exist for the following types :

-  DevVarUCharArray &
-  DevVarShortArray &
-  DevVarUShortArray &
-  DevVarLongArray &
-  DevVarULongArray &
-  DevVarLong64Array&
-  DevVarULong64Array&
-  DevVarFloatArray &
-  DevVarDoubleArray &
-  DevVarStringArray &
-  DevVarLongStringArray&
-  DevVarDoubleStringArray&

Special care has been taken to avoid memory copy between the network
layer and the user application. Nevertheless, C++ vector types are not
the CORBA native type and one copy is unavoidable when using vectors.
Using the native TANGO CORBA sequence types avoid any copy. When using
these TANGO CORBA sequence types, insertion into the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object
consumes the memory pointed to by the pointer. After the insertion, it
is not necessary to delete the memory. It will be done by the
destruction of the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object. For
extraction, the pointer used for the extraction points into memory
inside the `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
object and you should not delete it Here is an example of creating,
inserting and extracting some data type from/into
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object :

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
my\_short, my\_long, my\_string;

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
my\_float\_vector, my\_double\_vector;

string a\_string;

short a\_short;

DevLong a\_long;

vector<float> a\_float\_vector;

vector<double> a\_double\_vector;

my\_short << 100; // insert a short

my\_short >> a\_short; // extract a short

my\_long << 1000; // insert a long

my\_long >> a\_long; // extract a long

my\_string << string(“estas lista a bailar el tango ?”); // insert a
string

my\_string >> a\_string; // extract a string

my\_float\_vector << a\_float\_vector // insert a vector of floats

my\_float\_vector >> a\_float\_vector; // extract a vector of floats

my\_double\_vector << a\_double\_vector; // insert a vector of doubles

my\_double\_vector >> a\_double\_vector; // extract a vector of doubles

//

// Example of memory management with TANGO sequence types without memory
leaks

//

for (int i = 0;i < 10;i++)

{

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
din,dout;

DevVarLongArray \*in = new DevVarLongArray();

in->length(2);

(\*in)[0] = 2;

(\*in)[1] = 4;

din << in;

try

{

dout = device->command\_inout(“Cmd”,din);

}

catch(DevFailed &e)

{

....

}

const DevVarLongArray \*out;

dout >> out;

cout << “Received value = “ << (\*out)[0];

}

Parameters
    +--------+---------+---------------------------+
    | [in]   | datum   | The data to be inserted   |
    +--------+---------+---------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+-----+-----------+-----------+-----+----+
| bool Tango::DeviceData::operator>>   | (   | bool &    | *datum*   | )   |    |
+--------------------------------------+-----+-----------+-----------+-----+----+

The extract operators.

The extract operators are specified for the following C++ types :

-  bool
-  short
-  unsigned short
-  DevLong
-  DevULong
-  DevLong64
-  DevULong64
-  float
-  double
-  string
-  char\* (insert only)
-  const char \*
-  DevEncoded
-  DevState
-  vector<unsigned char>
-  vector<string>
-  vector<short>
-  vector<unsigned short>
-  vector<DevLong>
-  vector<DevULong>
-  vector<DevLong64>
-  vector<DevULong64>
-  vector<float>
-  vector<double>

Operators exist for extracting the native TANGO CORBA sequence types.
These can be useful for programmers who want to use the TANGO api
internally in their device servers and do not want to convert from CORBA
to C++ types. Insert and extract operators exist for the following types
:

-  const DevVarUCharArray \*
-  const DevVarShortArray \*
-  const DevVarUShortArray \*
-  const DevVarLongArray \*
-  const DevVarULongArray \*
-  const DevVarLong64Array \*
-  const DevVarULong64Array \*
-  const DevVarFloatArray \*
-  const DevVarDoubleArray \*
-  const DevVarStringArray \*
-  const DevVarLongStringArray \*
-  const DevVarDoubleStringArray \*

**Note that when using extraction by pointers, the pointed to memory is
inside the `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
object and its lifetime is the same than the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object
lifetime.**

Special care has been taken to avoid memory copy between the network
layer and the user application. Nevertheless, C++ vector types are not
the CORBA native type and one copy is unavoidable when using vectors.
Using the native TANGO CORBA sequence types avoid any copy. When using
these TANGO CORBA sequence types, for extraction, the pointer used for
the extraction points into memory inside the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object and
you should not delete it See
`DeviceData::operator<< <../../df/d22/classTango_1_1DeviceData.html#a441796301b708d97386ea636104889d4>`__
for inserters and extractors usage example

Parameters
    +---------+---------+-----------------------------------------+
    | [out]   | datum   | The variable which will be initalized   |
    +---------+---------+-----------------------------------------+

Returns
    Boolean set to false if the extraction failed

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------+ |                                      |
| --------+-----+----+                 |                                      |
| | void Tango::DeviceData::reset\_exc |                                      |
| eptions   | (   | except\_flags    | |                                      |
|  *fl*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------+ |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+------------------+-- |                                      |
| ------+-----+----+                   |                                      |
| | void Tango::DeviceData::set\_excep |                                      |
| tions   | (   | except\_flags    | * |                                      |
| fl*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| --------+-----+------------------+-- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. See
`DeviceData::exceptions() <../../df/d22/classTango_1_1DeviceData.html#a1f43b8fa4cc2c1c371b471f4a49b9ddb>`__
for a usage example.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | bitset<numFlags> Tango::DeviceData |                                      |
| ::state   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get instance extraction state.

Allow the user to find out what was the reason of extraction from
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ failure.
This method has to be used when exceptions are disabled. Here is an
example of how method
`state() <../../df/d22/classTango_1_1DeviceData.html#ab0b8c5024dbc3e0e200313a3d91b9c95>`__
could be used

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
dd = ....

bitset<DeviceData::numFlags> bs;

da.exceptions(bs);

DevLong dl;

if ((da >> dl) == false)

{

bitset<DeviceData::numFlags> bs\_err = da.state();

if (bs\_err.test(DeviceData::isempty\_flag) == true)

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
| iceData <../../df/d22/classTango_1_1 |                                      |
| DeviceData.html>`__ &    | *dd*      |                                      |
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

Print a `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
instance.

Is an utility function to easily print the contents of a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object. This
function knows all types which could be inserted in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object and
print them accordingly. A special string is printed if the
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object is
empty

DeviceProxy \*dev = new DeviceProxy(“...”);

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
out;

out = dev->command\_inout(“MyCommand”);

cout << “Command returned: ” << out <<
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
-  `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../df/d6a/classTango_1_1DeviceData__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
