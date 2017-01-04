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
members <../../d4/d96/classTango_1_1DeviceAttribute-members.html>`__

Tango::DeviceAttribute Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for sending an dreceiving data to and from device
attributes.
`More... <../../d7/dca/classTango_1_1DeviceAttribute.html#details>`__

Inheritance diagram for Tango::DeviceAttribute:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

 

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
()

 

| Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. `More... <#acc1b9939f279cefb9d517458312be3ef>`__

 

 

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#a67d52e21a5029a03601c3756445e318e>`__
(string &name, short val)

 

| Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for scalar attribute.
`More... <#a67d52e21a5029a03601c3756445e318e>`__

 

 

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#a72d6ce5f1e5c090014a6feba02948c76>`__
(string &name, vector< short > &val)

 

| Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for spectrum attribute.
`More... <#a72d6ce5f1e5c090014a6feba02948c76>`__

 

 

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#aba7c0a8dfee681451efc32a97a3f8471>`__
(string &name, vector< short > &val, int dim\_x, int dim\_y)

 

| Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for image attribute.
`More... <#aba7c0a8dfee681451efc32a97a3f8471>`__

 

Inserters and Extractors

void 

`operator<< <../../d7/dca/classTango_1_1DeviceAttribute.html#a39d8445992f45faabe7210065a49c1db>`__
(short val)

 

| Insert attribute data.
`More... <#a39d8445992f45faabe7210065a49c1db>`__

 

void 

`insert <../../d7/dca/classTango_1_1DeviceAttribute.html#ad0a4bef751ff1052eb25e3a151390a96>`__
(const char \*str, unsigned char \*data, unsigned int length)

 

| Insert attribute data for DevEncoded attribute.
`More... <#ad0a4bef751ff1052eb25e3a151390a96>`__

 

void 

`insert <../../d7/dca/classTango_1_1DeviceAttribute.html#a51fc5ea06b681f0b0751c5accb7d008f>`__
(vector< short > &datum, int dim\_x, int dim\_y)

 

| Insert attribute data for image attribute (from C++ vector)
`More... <#a51fc5ea06b681f0b0751c5accb7d008f>`__

 

void 

`insert <../../d7/dca/classTango_1_1DeviceAttribute.html#ae4cb9149719cbb5747e5c7c364946cd6>`__
(const DevVarShortArray &datum, int dim\_x, int dim\_y)

 

| Insert attribute data for image attribute (from CORBA sequence by
reference) `More... <#ae4cb9149719cbb5747e5c7c364946cd6>`__

 

void 

`insert <../../d7/dca/classTango_1_1DeviceAttribute.html#abe572db6bfe6f7b426268da83d02aefa>`__
(DevVarShortArray \*datum, int dim\_x, int dim\_y)

 

| Insert attribute data for image attribute (from CORBA sequence by
pointer) `More... <#abe572db6bfe6f7b426268da83d02aefa>`__

 

bool 

`operator>> <../../d7/dca/classTango_1_1DeviceAttribute.html#a76dcb00f710fd52a8d2038dc95f66b07>`__
(short &data)

 

| Extract attribute data.
`More... <#a76dcb00f710fd52a8d2038dc95f66b07>`__

 

bool 

`extract <../../d7/dca/classTango_1_1DeviceAttribute.html#ad70f7601d11c6a8f7b6dff85c45e2fa3>`__
(const char \*&str, unsigned char \*&data, unsigned int &length)

 

| Extract attribute data for DevEncoded attribute.
`More... <#ad70f7601d11c6a8f7b6dff85c45e2fa3>`__

 

bool 

`extract\_read <../../d7/dca/classTango_1_1DeviceAttribute.html#abab196e07e204f0708cd5bbc7f50142b>`__
(vector< string > &data)

 

| Extract only read part of attribute data.
`More... <#abab196e07e204f0708cd5bbc7f50142b>`__

 

bool 

`extract\_set <../../d7/dca/classTango_1_1DeviceAttribute.html#a286075b484aacfc6101ad9653ae2451b>`__
(vector< string > &data)

 

| Extract only written part of attribute data.
`More... <#a286075b484aacfc6101ad9653ae2451b>`__

 

Exception and error related methods

void 

`exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#a3927b11e5bd052f81c77f8a04621d0a5>`__
(bitset< numFlags > fl)

 

| Set exception flag. `More... <#a3927b11e5bd052f81c77f8a04621d0a5>`__

 

bitset< numFlags > 

`exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#a3f9f8c8594eca47c15d14a428e1ce449>`__
()

 

| Get exception flag. `More... <#a3f9f8c8594eca47c15d14a428e1ce449>`__

 

void 

`reset\_exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#aadacbabadd2fb9533f47c2e401c2bf9c>`__
(except\_flags fl)

 

| Reset one exception flag.
`More... <#aadacbabadd2fb9533f47c2e401c2bf9c>`__

 

void 

`set\_exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#a4dfe60e076172a05f332a35c5412e182>`__
(except\_flags fl)

 

| Set one exception flag.
`More... <#a4dfe60e076172a05f332a35c5412e182>`__

 

bitset< numFlags > 

`state <../../d7/dca/classTango_1_1DeviceAttribute.html#acd36c145050e5e3bf3bd4a172a0249c7>`__
()

 

| Get instance extraction state.
`More... <#acd36c145050e5e3bf3bd4a172a0249c7>`__

 

bool 

`has\_failed <../../d7/dca/classTango_1_1DeviceAttribute.html#af42816e6e7d4274f551eec3d9dacf233>`__
()

 

| Check if the call failed.
`More... <#af42816e6e7d4274f551eec3d9dacf233>`__

 

const DevErrorList & 

`get\_err\_stack <../../d7/dca/classTango_1_1DeviceAttribute.html#afd3add4643c535b3dac9a13c6ce811f9>`__
()

 

| Get the error stack. `More... <#afd3add4643c535b3dac9a13c6ce811f9>`__

 

Miscellaneous methods

bool 

`is\_empty <../../d7/dca/classTango_1_1DeviceAttribute.html#a627233903abcb7f81d9e4ae21a5a9bc0>`__
()

 

| Check is the instance is empty.
`More... <#a627233903abcb7f81d9e4ae21a5a9bc0>`__

 

string & 

`get\_name <../../d7/dca/classTango_1_1DeviceAttribute.html#a7aaf689b2d429bdd2d5918fbe911cdd2>`__
()

 

| Returns the name of the attribute.
`More... <#a7aaf689b2d429bdd2d5918fbe911cdd2>`__

 

void 

`set\_name <../../d7/dca/classTango_1_1DeviceAttribute.html#a27d3d7390efc00791f22712c3c4e7bf6>`__
(string &na)

 

| Set attribute name. `More... <#a27d3d7390efc00791f22712c3c4e7bf6>`__

 

void 

`set\_name <../../d7/dca/classTango_1_1DeviceAttribute.html#a9de0a2ea08ba57ff0cab25c33c9af15f>`__
(const char \*na)

 

| Set attribute name. `More... <#a9de0a2ea08ba57ff0cab25c33c9af15f>`__

 

int 

`get\_dim\_x <../../d7/dca/classTango_1_1DeviceAttribute.html#af47332e2d71089e5f3635630ed68bcad>`__
()

 

| Get attribute X dimension.
`More... <#af47332e2d71089e5f3635630ed68bcad>`__

 

int 

`get\_dim\_y <../../d7/dca/classTango_1_1DeviceAttribute.html#a13681c5b9d3915620c1017d2b27a9a58>`__
()

 

| Get attribute Y dimension.
`More... <#a13681c5b9d3915620c1017d2b27a9a58>`__

 

int 

`get\_written\_dim\_x <../../d7/dca/classTango_1_1DeviceAttribute.html#ac145bfd1747bde8fcc65c84ccc247448>`__
()

 

| Get the attribute write X dimension.
`More... <#ac145bfd1747bde8fcc65c84ccc247448>`__

 

int 

`get\_written\_dim\_y <../../d7/dca/classTango_1_1DeviceAttribute.html#a2425639e58b4c8741eb3ffdf6e352070>`__
()

 

| Get the attribute write Y dimension.
`More... <#a2425639e58b4c8741eb3ffdf6e352070>`__

 

`AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__ 

`get\_r\_dimension <../../d7/dca/classTango_1_1DeviceAttribute.html#aa2d81c2936fd31476db4d72b6a764f30>`__
()

 

| Get the attribute read dimensions.
`More... <#aa2d81c2936fd31476db4d72b6a764f30>`__

 

`AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__ 

`get\_w\_dimension <../../d7/dca/classTango_1_1DeviceAttribute.html#a1fd58414c11a60ff0c90c2d26abff569>`__
()

 

| Get the attribute write dimensions.
`More... <#a1fd58414c11a60ff0c90c2d26abff569>`__

 

long 

`get\_nb\_read <../../d7/dca/classTango_1_1DeviceAttribute.html#a3a88881c9ab18e4607148899465caa3b>`__
()

 

| Get the number of read value.
`More... <#a3a88881c9ab18e4607148899465caa3b>`__

 

long 

`get\_nb\_written <../../d7/dca/classTango_1_1DeviceAttribute.html#a611725524b3ad89d9bf5d99c8c81c51f>`__
()

 

| Get the number of written value.
`More... <#a611725524b3ad89d9bf5d99c8c81c51f>`__

 

AttrQuality & 

`get\_quality <../../d7/dca/classTango_1_1DeviceAttribute.html#ae54fa0c84a878d2b290cf6cedb36a1a4>`__
()

 

| Get attribute quality factor.
`More... <#ae54fa0c84a878d2b290cf6cedb36a1a4>`__

 

int 

`get\_type <../../d7/dca/classTango_1_1DeviceAttribute.html#afaa832f0876261339e33137f918960df>`__
()

 

| Get attribute data type.
`More... <#afaa832f0876261339e33137f918960df>`__

 

AttrDataFormat 

`get\_data\_format <../../d7/dca/classTango_1_1DeviceAttribute.html#ab49fd00e385a8b4418fd54fa97452a28>`__
()

 

| Get attribute data format.
`More... <#ab49fd00e385a8b4418fd54fa97452a28>`__

 

TimeVal & 

`get\_date <../../d7/dca/classTango_1_1DeviceAttribute.html#ab93ad5582fcc70581677ba7bb36a19e9>`__
()

 

| Get attribute read date.
`More... <#ab93ad5582fcc70581677ba7bb36a19e9>`__

 

Friends
-------

ostream & 

`operator<< <../../d7/dca/classTango_1_1DeviceAttribute.html#a340f165359228abcbbce32efceb040c4>`__
(ostream &,
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ &)

 

Detailed Description
--------------------

Fundamental type for sending an dreceiving data to and from device
attributes.

This is the fundamental type for sending and receiving data to and from
device attributes. The values can be inserted and extracted using the
operators << and >> respectively and insert() for mixed data types.
There are two ways to check if the extraction operator succeed :

-  1. By testing the extractor operators return value. All the
   extractors operator returns a boolean value set to false in case of
   problem.
-  2. By asking the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object to throw exception in case of problem. By default,
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   throws exception :

   #. When the user try to extract data and the server reported an error
      when the attribute was read.
   #. When the user try to extract data from an empty
      `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

**For insertion into
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance from TANGO CORBA sequence pointers, the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object takes ownership of the pointed to memory. This means that the
pointed to memory will be freed when the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object is destroyed or when another data is inserted into it. The
insertion into
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance from TANGO CORBA sequence reference copy the data into the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object.
 For extraction into TANGO CORBA sequence types, the extraction method
consumes the memory allocated to store the data and it is the caller
responsibility to delete this memory.**

Author
    taurel

Revision
    1

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------------------+-----+----+-----+----+
| Tango::DeviceAttribute::DeviceAttribute   | (   |    | )   |    |
+-------------------------------------------+-----+----+-----+----+

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object.

Default constructor. The instance is empty

+-------------------------------------------+-----+-------------+-----------+
| Tango::DeviceAttribute::DeviceAttribute   | (   | string &    | *name*,   |
+-------------------------------------------+-----+-------------+-----------+
|                                           |     | short       | *val*     |
+-------------------------------------------+-----+-------------+-----------+
|                                           | )   |             |           |
+-------------------------------------------+-----+-------------+-----------+

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for scalar attribute.

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for **scalar** attribute. These
constructors exists for the following data type:

-  DeviceAttribute(string &, bool);
-  `DeviceAttribute(string &,
   short) <../../d7/dca/classTango_1_1DeviceAttribute.html#a67d52e21a5029a03601c3756445e318e>`__;
-  DeviceAttribute(string &, DevLong);
-  DeviceAttribute(string &, DevLong64);
-  DeviceAttribute(string &, float);
-  DeviceAttribute(string &, double);
-  DeviceAttribute(string &, unsigned char);
-  DeviceAttribute(string &, unsigned short);
-  DeviceAttribute(string &, DevULong);
-  DeviceAttribute(string &, DevULong64);
-  DeviceAttribute(string &, string &);
-  DeviceAttribute(string &, DevState);
-  DeviceAttribute(string &, DevEncoded &);
-  DeviceAttribute(const char \*, bool);
-  DeviceAttribute(const char \*, short);
-  DeviceAttribute(const char \*, DevLong);
-  DeviceAttribute(const char \*, DevLong64);
-  DeviceAttribute(const char \*, float);
-  DeviceAttribute(const char \*, double);
-  DeviceAttribute(const char \*, unsigned char);
-  DeviceAttribute(const char \*, unsigned short);
-  DeviceAttribute(const char \*, DevULong);
-  DeviceAttribute(const char \*, DevULong64);
-  DeviceAttribute(const char \*, string &);
-  DeviceAttribute(const char \*, DevState);
-  DeviceAttribute(const char \*,DevEncoded &);

Parameters
    +--------+--------+-----------------------+
    | [in]   | name   | The attribute name    |
    +--------+--------+-----------------------+
    | [in]   | val    | The attribute value   |
    +--------+--------+-----------------------+

+-------------------------------------------+-----+----------------------+-----------+
| Tango::DeviceAttribute::DeviceAttribute   | (   | string &             | *name*,   |
+-------------------------------------------+-----+----------------------+-----------+
|                                           |     | vector< short > &    | *val*     |
+-------------------------------------------+-----+----------------------+-----------+
|                                           | )   |                      |           |
+-------------------------------------------+-----+----------------------+-----------+

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for spectrum attribute.

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for **spectrum** attribute. These
constructors exists for the following data type:

-  DeviceAttribute(string &, vector<bool> &);
-  `DeviceAttribute(string &, vector<short>
   &) <../../d7/dca/classTango_1_1DeviceAttribute.html#a72d6ce5f1e5c090014a6feba02948c76>`__;
-  DeviceAttribute(string &, vector<DevLong> &);
-  DeviceAttribute(string &, vector<DevLong64>&);
-  DeviceAttribute(string &, vector<float> &);
-  DeviceAttribute(string &, vector<double> &);
-  DeviceAttribute(string &, vector<unsigned char> &);
-  DeviceAttribute(string &, vector<unsigned short> &);
-  DeviceAttribute(string &, vector<DevULong> &);
-  DeviceAttribute(string &, vector<DevULong64>&);
-  DeviceAttribute(string &, vector<string> & );
-  DeviceAttribute(string &, vector<DevState> &);
-  DeviceAttribute(const char \*, vector<bool> &);
-  DeviceAttribute(const char \*, vector<short> &);
-  DeviceAttribute(const char \*, vector<DevLong> &);
-  DeviceAttribute(const char \*, vector<DevLong64>&);
-  DeviceAttribute(const char \*, vector<float> &);
-  DeviceAttribute(const char \*, vector<double> &);
-  DeviceAttribute(const char \*, vector<unsigned char> &);
-  DeviceAttribute(const char \*, vector<unsigned short> &);
-  DeviceAttribute(const char \*, vector<DevULong> &);
-  DeviceAttribute(const char \*, vector<DevULong64>&);
-  DeviceAttribute(const char \*, vector<string> & );
-  DeviceAttribute(const char \*, vector<DevState> &);

Parameters
    +--------+--------+-----------------------+
    | [in]   | name   | The attribute name    |
    +--------+--------+-----------------------+
    | [in]   | val    | The attribute value   |
    +--------+--------+-----------------------+

+-------------------------------------------+-----+----------------------+-------------+
| Tango::DeviceAttribute::DeviceAttribute   | (   | string &             | *name*,     |
+-------------------------------------------+-----+----------------------+-------------+
|                                           |     | vector< short > &    | *val*,      |
+-------------------------------------------+-----+----------------------+-------------+
|                                           |     | int                  | *dim\_x*,   |
+-------------------------------------------+-----+----------------------+-------------+
|                                           |     | int                  | *dim\_y*    |
+-------------------------------------------+-----+----------------------+-------------+
|                                           | )   |                      |             |
+-------------------------------------------+-----+----------------------+-------------+

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for image attribute.

Create a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object from attribute name and value for **image** attribute. These
constructors have two more parameters allowing the user to define the x
and y image dimensions. These constructors exists for the following data
type:

-  DeviceAttribute(string &, vector<bool> &, int, int);
-  `DeviceAttribute(string &, vector<short> &, int,
   int) <../../d7/dca/classTango_1_1DeviceAttribute.html#aba7c0a8dfee681451efc32a97a3f8471>`__;
-  DeviceAttribute(string &, vector<DevLong> &, int, int);
-  DeviceAttribute(string &, vector<DevLong64>&, int, int);
-  DeviceAttribute(string &, vector<float> &, int, int);
-  DeviceAttribute(string &, vector<double> &, int, int);
-  DeviceAttribute(string &, vector<unsigned char> &, int, int);
-  DeviceAttribute(string &, vector<unsigned short> &, int, int);
-  DeviceAttribute(string &, vector<DevULong> &, int, int);
-  DeviceAttribute(string &, vector<DevULong64>&, int, int);
-  DeviceAttribute(string &, vector<string> &, int, int );
-  DeviceAttribute(string &, vector<DevState> &, int, int);
    DeviceAttribute(const char \*, vector<bool> &, int, int);
-  DeviceAttribute(const char \*, vector<short> &, int, int);
-  DeviceAttribute(const char \*, vector<DevLong> &, int, int);
-  DeviceAttribute(const char \*, vector<DevLong64>&, int, int);
-  DeviceAttribute(const char \*, vector<float> &, int, int);
-  DeviceAttribute(const char \*, vector<double> &, int, int);
-  DeviceAttribute(const char \*, vector<unsigned char> &, int, int);
-  DeviceAttribute(const char \*, vector<unsigned short> &, int, int);
-  DeviceAttribute(const char \*, vector<DevULong> &, int, int);
-  DeviceAttribute(const char \*, vector<DevULong64>&, int, int);
-  DeviceAttribute(const char \*, vector<string> & , int, int);
-  DeviceAttribute(const char \*, vector<DevState) &, int, int);

Parameters
    +--------+----------+-----------------------------+
    | [in]   | name     | The attribute name          |
    +--------+----------+-----------------------------+
    | [in]   | val      | The attribute value         |
    +--------+----------+-----------------------------+
    | [in]   | dim\_x   | The attribute X dimension   |
    +--------+----------+-----------------------------+
    | [in]   | dim\_y   | The attribute Y dimension   |
    +--------+----------+-----------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+--------------------- |                                      |
| --+--------+-----+----+              |                                      |
| | void Tango::DeviceAttribute::excep |                                      |
| tions   | (   | bitset< numFlags >   |                                      |
|   | *fl*   | )   |    |              |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| --+--------+-----+----+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

Is a method which allows the user to switch on/off exception throwing
when trying to extract data from a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. The following flags are supported :

-  **isempty\_flag** - throw a WrongData exception (reason =
   API\_EmptyDbDatum) if user tries to extract data from an empty
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object. By default, this flag is set
-  **wrongtype\_flag** - throw a WrongData exception (reason =
   API\_IncompatibleArgumentType) if user tries to extract data with a
   type different than the type used for insertion. By default, this
   flag is not set
-  **failed\_flag** - throw an exception when the user try to extract
   data from the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object and an error was reported by the server when the user try to
   read the attribute. The type of the exception thrown is the type of
   the error reported by the server. By default, this flag is set.
-  **unknown\_format\_flag** - throw an exception when the user try to
   get the attribute data format from the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object when this information is not yet available. This information
   is available only after the read\_attribute call has been sucessfully
   executed. The type of the exception thrown is WrongData exception
   (reason = API\_EmptyDeviceAttribute). By default, this flag is not
   set.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

Referenced by
`Tango::GroupAttrReply::operator>>() <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | bitset<numFlags> Tango::DeviceAttr |                                      |
| ibute::exceptions   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

bitset<DeviceAttribute::numFlags> bs = da.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

da.set\_exceptions(DeviceAttribute::wrongtype\_flag);

bs = da.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

+----------------------------------------+-----+----------------------+-------------+
| bool Tango::DeviceAttribute::extract   | (   | const char \*&       | *str*,      |
+----------------------------------------+-----+----------------------+-------------+
|                                        |     | unsigned char \*&    | *data*,     |
+----------------------------------------+-----+----------------------+-------------+
|                                        |     | unsigned int &       | *length*    |
+----------------------------------------+-----+----------------------+-------------+
|                                        | )   |                      |             |
+----------------------------------------+-----+----------------------+-------------+

Extract attribute data for DevEncoded attribute.

| Extract attribute data when the attribute data type is DevEncoded It's
the user responsability to release the memory pointed to by the two
pointers method parameter.
|  Similar method with following signature also exist **extract(string
&,vector<unsigned char> &)**;
|  See DeviceAttribute::operator<< for example of inserting and
extracting data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +---------+----------+-------------------------------+
    | [out]   | str      | The DevEncoded string         |
    +---------+----------+-------------------------------+
    | [out]   | data     | The DevEncoded data pointer   |
    +---------+----------+-------------------------------+
    | [out]   | length   | The DevEncoded data length    |
    +---------+----------+-------------------------------+

Exceptions
    +-------------+---------------------------------------+
    | WrongData   | if requested, DevFailed from device   |
    +-------------+---------------------------------------+

+----------------------------------------------+-----+-----------------------+----------+-----+----+
| bool Tango::DeviceAttribute::extract\_read   | (   | vector< string > &    | *data*   | )   |    |
+----------------------------------------------+-----+-----------------------+----------+-----+----+

Extract only read part of attribute data.

Extract methods to extract only the read value of an attribute into a
C++ vector. The dimension of the read value can be read by using the
methods
`get\_dim\_x() <../../d7/dca/classTango_1_1DeviceAttribute.html#af47332e2d71089e5f3635630ed68bcad>`__
and
`get\_dim\_y() <../../d7/dca/classTango_1_1DeviceAttribute.html#a13681c5b9d3915620c1017d2b27a9a58>`__
or
`get\_r\_dimension() <../../d7/dca/classTango_1_1DeviceAttribute.html#aa2d81c2936fd31476db4d72b6a764f30>`__.
The methods use the same return values as the extraction operators with
exceptions triggered by the exception flags. This method exist for the
following data type:

-  bool DeviceAttribute::extract\_read (vector<bool>&);
-  bool DeviceAttribute::extract\_read (vector<short>&);
-  bool DeviceAttribute::extract\_read (vector<DevLong>&);
-  bool DeviceAttribute::extract\_read (vector<DevLong64>&);
-  bool DeviceAttribute::extract\_read (vector<float>&);
-  bool DeviceAttribute::extract\_read (vector<double>&);
-  bool DeviceAttribute::extract\_read (vector<unsigned char>&);
-  bool DeviceAttribute::extract\_read (vector<unsigned short>&);
-  bool DeviceAttribute::extract\_read (vector<DevULong>&);
-  bool DeviceAttribute::extract\_read (vector<DevULong64>&);
-  bool DeviceAttribute::extract\_read (vector<string>&);
-  bool DeviceAttribute::extract\_read (vector<DevState>&);
-  bool DeviceAttribute::extract\_read(string&, vector<unsigned char>
   &);

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +---------+--------+----------------------+
    | [out]   | data   | The attribute data   |
    +---------+--------+----------------------+

Exceptions
    +-------------+---------------------------------------+
    | WrongData   | if requested, DevFailed from device   |
    +-------------+---------------------------------------+

+---------------------------------------------+-----+-----------------------+----------+-----+----+
| bool Tango::DeviceAttribute::extract\_set   | (   | vector< string > &    | *data*   | )   |    |
+---------------------------------------------+-----+-----------------------+----------+-----+----+

Extract only written part of attribute data.

Extract methods to extract only the set value of an attribute into a C++
vector. The dimension of the set value can be read by using the methods
`get\_written\_dim\_x() <../../d7/dca/classTango_1_1DeviceAttribute.html#ac145bfd1747bde8fcc65c84ccc247448>`__
and
`get\_written\_dim\_y() <../../d7/dca/classTango_1_1DeviceAttribute.html#a2425639e58b4c8741eb3ffdf6e352070>`__
or
`get\_w\_dimension() <../../d7/dca/classTango_1_1DeviceAttribute.html#a1fd58414c11a60ff0c90c2d26abff569>`__.
The methods use the same return values as the extraction operators with
exceptions triggered by the exception flags. This method exist for the
following data type:

-  bool DeviceAttribute::extract\_set (vector<bool>&);
-  bool DeviceAttribute::extract\_set (vector<short>&);
-  bool DeviceAttribute::extract\_set (vector<DevLong>&);
-  bool DeviceAttribute::extract\_set (vector<DevLong64>&);
-  bool DeviceAttribute::extract\_set (vector<float>&);
-  bool DeviceAttribute::extract\_set (vector<double>&);
-  bool DeviceAttribute::extract\_set (vector<unsigned char>&);
-  bool DeviceAttribute::extract\_set (vector<unsigned short>&);
-  bool DeviceAttribute::extract\_set (vector<DevULong>&);
-  bool DeviceAttribute::extract\_set (vector<DevULong64>&);
-  bool DeviceAttribute::extract\_set (vector<string>&);
-  bool DeviceAttribute::extract\_set (vector<DevState>&);
-  bool DeviceAttribute::extract\_set(string &, vector<unsigned char>
   &);

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +---------+--------+----------------------+
    | [out]   | data   | The attribute data   |
    +---------+--------+----------------------+

Exceptions
    +-------------+---------------------------------------+
    | WrongData   | if requested, DevFailed from device   |
    +-------------+---------------------------------------+

+------------------------------------------------------------+-----+----+-----+----+
| AttrDataFormat Tango::DeviceAttribute::get\_data\_format   | (   |    | )   |    |
+------------------------------------------------------------+-----+----+-----+----+

Get attribute data format.

Returns the attribute data format. Note that this information is valid
only after the call to the device has been executed. Otherwise the
FMT\_UNKNOWN value of the AttrDataFormat enumeration is returned or an
exception is thrown according to the object exception flags.

Returns
    The attribute data format

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+----+   |                                      |
| | TimeVal& Tango::DeviceAttribute::g |                                      |
| et\_date   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute read date.

Returns a reference to the time when the attribute was read in server

Returns
    The attribute read date

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | int Tango::DeviceAttribute::get\_d |                                      |
| im\_x   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute X dimension.

Returns the attribute read x dimension

Returns
    The attribute X dimension

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | int Tango::DeviceAttribute::get\_d |                                      |
| im\_y   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute Y dimension.

Returns the attribute read y dimension

Returns
    The attribute Y dimension

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
| | const DevErrorList& Tango::DeviceA |                                      |
| ttribute::get\_err\_stack   | (   |  |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the error stack.

Returns the error stack reported by the server when the attribute was
read. The following is an example of the three available ways to get
data out of a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

vector<short> attr\_data;

try

{

da = device->read\_attribute("Attr");

da >> attr\_data;

}

catch (DevFailed &e)

{

....

}

------------------------------------------------------------------------

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

vector<short> attr\_data;

da.reset\_exceptions(DeviceAttribute::failed\_flag);

try

{

da = device->read\_attribute("Attr");

}

catch (DevFailed &e)

{

.....

}

if (!(da >> attr\_data))

{

DevErrorList &err = da.get\_err\_stack();

.....

}

else

{

.....

}

----------------------------------------------------------------------

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

vector<short> attr\_data;

try

{

da = device->read\_attribute("Attr");

}

catch (DevFailed &e)

{

......

}

if (da.has\_failed())

{

DevErrorList &err = da.get\_err\_stack();

....

}

else

{

da >> attr\_data;

}

The first way uses the default behaviour of the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object which is to throw an exception when the user try to extract data
when the server reports an error when the attribute was read. In the
second way, the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object now does not throw "DevFailed" exception any more and the return
value of the extractor operator is checked. IN the last case, the
attribute data validity is checked before trying to extract them.

Returns
    The error stack

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | string& Tango::DeviceAttribute::ge |                                      |
| t\_name   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the name of the attribute.

Returns the name of the attribute

Returns
    The attribute name

+----------------------------------------------+-----+----+-----+----+
| long Tango::DeviceAttribute::get\_nb\_read   | (   |    | )   |    |
+----------------------------------------------+-----+----+-----+----+

Get the number of read value.

Returns the number of read values

Returns
    The read value number

+-------------------------------------------------+-----+----+-----+----+
| long Tango::DeviceAttribute::get\_nb\_written   | (   |    | )   |    |
+-------------------------------------------------+-----+----+-----+----+

Get the number of written value.

Returns the number of written values. Here is an example of these last
methods usage.

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

vector<short> attr\_data;

try

{

da = device->read\_attribute("Attr");

da >> attr\_data;

}

catch (DevFailed &e)

{

....

}

long read = da.get\_nb\_read();

long written = da.get\_nb\_written();

for (long i = 0;i < read;i++)

cout << "Read value " << i+1 << " = " << attr\_data[i] << endl;

for (long j = 0; j < written;j++)

cout << "Last written value " << j+1 << " = " << attr\_data[j + read] <<
endl;

Returns
    The read value number

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | AttrQuality& Tango::DeviceAttribut |                                      |
| e::get\_quality   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute quality factor.

Returns the quality of the attribute: an enumerate type which can be one
of:

-  ATTR\_VALID
-  ATTR\_INVALID
-  ATTR\_ALARM
-  ATTR\_CHANGING
-  ATTR\_WARNING

Returns
    The attribute quality

+--------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__ Tango::DeviceAttribute::get\_r\_dimension   | (   |    | )   |    |
+--------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get the attribute read dimensions.

Returns the attribute read dimensions

Returns
    The attribute read dimensions

+-----------------------------------------+-----+----+-----+----+
| int Tango::DeviceAttribute::get\_type   | (   |    | )   |    |
+-----------------------------------------+-----+----+-----+----+

Get attribute data type.

Returns the type of the attribute data.

Returns
    The attribute data type

+--------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+
| `AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__ Tango::DeviceAttribute::get\_w\_dimension   | (   |    | )   |    |
+--------------------------------------------------------------------------------------------------------------------------+-----+----+-----+----+

Get the attribute write dimensions.

Returns the attribute write dimensions

Returns
    The attribute write dimensions

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
| | int Tango::DeviceAttribute::get\_w |                                      |
| ritten\_dim\_x   | (   |    | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the attribute write X dimension.

Returns the attribute write x dimension

Returns
    The attribute write X dimension

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
| | int Tango::DeviceAttribute::get\_w |                                      |
| ritten\_dim\_y   | (   |    | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the attribute write Y dimension.

Returns the attribute write y dimension

Returns
    The attribute write Y dimension

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | bool Tango::DeviceAttribute::has\_ |                                      |
| failed   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the call failed.

Returns a boolean set to true if the server report an error when the
attribute was read.

Returns
    A boolean set to true if the call failed

+---------------------------------------+-----+---------------------+-------------+
| void Tango::DeviceAttribute::insert   | (   | const char \*       | *str*,      |
+---------------------------------------+-----+---------------------+-------------+
|                                       |     | unsigned char \*    | *data*,     |
+---------------------------------------+-----+---------------------+-------------+
|                                       |     | unsigned int        | *length*    |
+---------------------------------------+-----+---------------------+-------------+
|                                       | )   |                     |             |
+---------------------------------------+-----+---------------------+-------------+

Insert attribute data for DevEncoded attribute.

| Insert attribute data when the attribute data type is DevEncoded
|  Similar methods with following signature also exist

-  **insert(const string &str, vector<unsigned char> &data);**
-  **insert(const char \*str, DevVarCharArray \*data);**

| These three methods do not take ownership of the memory used for the
data buffer.
|  See DeviceAttribute::operator<< for example of inserting and
extracting data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +--------+----------+-------------------------------+
    | [in]   | str      | The DevEncoded string         |
    +--------+----------+-------------------------------+
    | [in]   | data     | The DevEncoded data pointer   |
    +--------+----------+-------------------------------+
    | [in]   | length   | The DevEncoded data length    |
    +--------+----------+-------------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+---------------------------------------+-----+----------------------+-------------+
| void Tango::DeviceAttribute::insert   | (   | vector< short > &    | *datum*,    |
+---------------------------------------+-----+----------------------+-------------+
|                                       |     | int                  | *dim\_x*,   |
+---------------------------------------+-----+----------------------+-------------+
|                                       |     | int                  | *dim\_y*    |
+---------------------------------------+-----+----------------------+-------------+
|                                       | )   |                      |             |
+---------------------------------------+-----+----------------------+-------------+

Insert attribute data for image attribute (from C++ vector)

Insert methods for the following C++ vector types for image attributes
allowing the specification of the x and y image dimensions :

-  insert(vector<bool> &,int, int)
-  `insert(vector<short> &,int,
   int) <../../d7/dca/classTango_1_1DeviceAttribute.html#a51fc5ea06b681f0b0751c5accb7d008f>`__
-  insert(vector<DevLong>&,int, int)
-  insert(vector<DevLong64>&,int, int)
-  insert(vector<float> &,int, int)
-  insert(vector<double> &,int, int)
-  insert(vector<unsigned char> &,int, int)
-  insert(vector<unsigned short> &,int, int)
-  insert(vector<DevULong>&,int, int)
-  insert(vector<DevULong64>&,int, int)
-  insert(vector<string> &,int, int)
-  insert(vector<DevState> &,int, int)

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +--------+----------+-----------------------------+
    | [in]   | datum    | The attribute data          |
    +--------+----------+-----------------------------+
    | [in]   | dim\_x   | The attribute X dimension   |
    +--------+----------+-----------------------------+
    | [in]   | dim\_y   | The attribute Y dimension   |
    +--------+----------+-----------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+---------------------------------------+-----+-----------------------------+-------------+
| void Tango::DeviceAttribute::insert   | (   | const DevVarShortArray &    | *datum*,    |
+---------------------------------------+-----+-----------------------------+-------------+
|                                       |     | int                         | *dim\_x*,   |
+---------------------------------------+-----+-----------------------------+-------------+
|                                       |     | int                         | *dim\_y*    |
+---------------------------------------+-----+-----------------------------+-------------+
|                                       | )   |                             |             |
+---------------------------------------+-----+-----------------------------+-------------+

Insert attribute data for image attribute (from CORBA sequence by
reference)

Insert methods for **image** attribute and for the following types by
reference. These method allow the programmer to define the x and y image
dimensions. The following methods are defined :

-  insert(const DevVarBooleanArray &,int, int)
-  `insert(const DevVarShortArray &,int,
   int) <../../d7/dca/classTango_1_1DeviceAttribute.html#ae4cb9149719cbb5747e5c7c364946cd6>`__
-  insert(const DevVarLongArray &,int, int)
-  insert(const DevVarLong64Array&,int, int)
-  insert(const DevVarFloatArray &,int, int)
-  insert(const DevVarDoubleArray &,int, int)
-  insert(const DevVarUCharArray &,int, int)
-  insert(const DevVarUShortArray &,int, int)
-  insert(const DevVarULongArray &,int, int)
-  insert(const DevVarULong64Array&,int, int)
-  insert(const DevVarStringArray &,int, int)
-  insert(const DevVarStateArray &,int, int)

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +--------+----------+-----------------------------+
    | [in]   | datum    | The attribute data          |
    +--------+----------+-----------------------------+
    | [in]   | dim\_x   | The attribute X dimension   |
    +--------+----------+-----------------------------+
    | [in]   | dim\_y   | The attribute Y dimension   |
    +--------+----------+-----------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+---------------------------------------+-----+------------------------+-------------+
| void Tango::DeviceAttribute::insert   | (   | DevVarShortArray \*    | *datum*,    |
+---------------------------------------+-----+------------------------+-------------+
|                                       |     | int                    | *dim\_x*,   |
+---------------------------------------+-----+------------------------+-------------+
|                                       |     | int                    | *dim\_y*    |
+---------------------------------------+-----+------------------------+-------------+
|                                       | )   |                        |             |
+---------------------------------------+-----+------------------------+-------------+

Insert attribute data for image attribute (from CORBA sequence by
pointer)

Insert methods for **image** attribute and pointers. The
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object takes ownership of the given memory. These method allow the
programmer to define the x and y image dimensions. The following methods
are defined :

-  insert(DevVarBooleanArray \*, int , int )
-  `insert(DevVarShortArray \*, int , int
   ) <../../d7/dca/classTango_1_1DeviceAttribute.html#abe572db6bfe6f7b426268da83d02aefa>`__
-  insert(DevVarLongArray \*, int , int )
-  insert(DevVarLong64Array \*, int, int )
-  insert(DevVarFloatArray \*, int , int )
-  insert(DevVarDoubleArray \*, int , int )
-  insert(DevVarUCharArray \*, int , int )
-  insert(DevVarUShortArray \*, int , int )
-  insert(DevVarULongArray \*, int , int )
-  insert(DevVarULong64Array \*, int, int )
-  insert(DevVarStringArray \*, int , int )
-  insert(DevVarStateArray \*, int, int)

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +--------+----------+-----------------------------+
    | [in]   | datum    | The attribute data          |
    +--------+----------+-----------------------------+
    | [in]   | dim\_x   | The attribute X dimension   |
    +--------+----------+-----------------------------+
    | [in]   | dim\_y   | The attribute Y dimension   |
    +--------+----------+-----------------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+------------------------------------------+-----+----+-----+----+
| bool Tango::DeviceAttribute::is\_empty   | (   |    | )   |    |
+------------------------------------------+-----+----+-----+----+

Check is the instance is empty.

`is\_empty() <../../d7/dca/classTango_1_1DeviceAttribute.html#a627233903abcb7f81d9e4ae21a5a9bc0>`__
is a boolean method which returns true or false depending on whether the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object contains data or not. Note that by default, a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object throws exception if it is empty (See
`DeviceAttribute::exceptions() <../../d7/dca/classTango_1_1DeviceAttribute.html#a3f9f8c8594eca47c15d14a428e1ce449>`__
method). If you want to use this method, you have to change this default
behavior. It can be used to test whether the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
has been initialized or not e.g.

string parity;

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
sl\_parity = my\_device->read\_attribute("parity");

sl\_parity.reset\_exceptions(DeviceAttribute::isempty\_flag);

if (! sl\_parity.is\_empty())

{

sl\_parity >> parity;

}

else

{

cout << " no parity attribute defined for serial line !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

Returns
    Boolean set to true if the instance is empty

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-------------------------------------------+-----+----------+---------+-----+----+
| void Tango::DeviceAttribute::operator<<   | (   | short    | *val*   | )   |    |
+-------------------------------------------+-----+----------+---------+-----+----+

Insert attribute data.

Special care has been taken to avoid memory copy between the network
layer and the user application. Nevertheless, C++ vector types are not
the CORBA native type and one copy is unavoidable when using vectors.
Using the native TANGO CORBA sequence types in most cases avoid any copy
but needs some more care about memory usage.

-  **For insertion into
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   instance from TANGO CORBA sequence pointers, the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object takes ownership of the pointed to memory. This means that the
   pointed to memory will be freed when the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object is destroyed or when another data is inserted into it.**
-  **The insertion into
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   instance from TANGO CORBA sequence reference copy the data into the
   `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
   object.**

Insert operators for the following scalar C++ types

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
-  DevString
-  const char \*

Insert operators for the following C++ vector types for **spectrum**
attributes :

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

Insert operators for **spectrum** attribute and for the following types
by pointer (with memory ownership transfert) :

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

Insert operators for **spectrum** attribute and for the following types
by reference :

-  const DevVarBooleanArray &
-  const DevVarShortArray &
-  const DevVarLongArray &
-  const DevVarLong64Array&
-  const DevVarFloatArray &
-  const DevVarDoubleArray &
-  const DevVarUCharArray &
-  const DevVarUShortArray &
-  const DevVarULongArray &
-  const DevVarULong64Array&
-  const DevVarStringArray &
-  const DevVarStateArray &

Here is an example of creating, inserting and extracting some
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
types :

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
my\_short, my\_long, my\_string;

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
my\_float\_vector, my\_double\_vector;

string a\_string;

short a\_short;

DevLong a\_long;

vector<float> a\_float\_vector;

vector<double> a\_double\_vector;

my\_short << 100; // insert a short

my\_short >> a\_short; // extract a short

my\_long << 1000; // insert a long

my\_long >> a\_long; // extract a DevLong

my\_string << string("estas lista a bailar el tango ?"); // insert a
string

my\_string >> a\_string; // extract a string

my\_float\_vector << a\_float\_vector // insert a vector of floats

my\_float\_vector >> a\_float\_vector; // extract a vector of floats

my\_double\_vector << a\_double\_vector; // insert a vector of doubles

my\_double\_vector >> a\_double\_vector; // extract a vector of doubles

//

// Extract read and set value of an attribute separately

// and get their dimensions

//

vector<float> r\_float\_vector, w\_float\_vector;

my\_float\_vector.extract\_read (r\_float\_vector) // extract read
values

int dim\_x = my\_float\_vector.get\_dim\_x(); // get x dimension

int dim\_y = my\_float\_vector.get\_dim\_y(); // get y dimension

my\_float\_vector.extract\_set (w\_float\_vector) // extract set values

int w\_dim\_x = my\_float\_vector.get\_written\_dim\_x(); // get x
dimension

int W\_dim\_y = my\_float\_vector.get\_written\_dim\_y(); // get y
dimension

//

// Example of memory management with TANGO sequence types without memory
leaks

//

for (int i = 0;i < 10;i++)

{

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da;

DevVarLongArray \*out;

try

{

da = device->read\_attribute("Attr");

da >> out;

}

catch(DevFailed &e)

{

....

}

cout << "Received value = " << (\*out)[0];

delete out;

}

Parameters
    +--------+-------+-----------------------+
    | [in]   | val   | The attribute value   |
    +--------+-------+-----------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-------------------------------------------+-----+------------+----------+-----+----+
| bool Tango::DeviceAttribute::operator>>   | (   | short &    | *data*   | )   |    |
+-------------------------------------------+-----+------------+----------+-----+----+

Extract attribute data.

Special care has been taken to avoid memory copy between the network
layer and the user application. Nevertheless, C++ vector types are not
the CORBA native type and one copy is unavoidable when using vectors.
Using the native TANGO CORBA sequence types in most cases avoid any copy
but needs some more care about memory usage.

-  **For extraction into TANGO CORBA sequence types, the extraction
   method consumes the memory allocated to store the data and it is the
   caller responsibility to delete this memory.**

Extract operators for the following scalar C++ types

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

Extract operators for the following C++ vector types for **spectrum**
and **image** attributes :

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
consumption** :

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
-  DevVarEncodedArray \*

See DeviceAttribute::operator<< for example of inserting and extracting
data to/from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
instance

Parameters
    +---------+--------+----------------------+
    | [out]   | data   | The attribute data   |
    +---------+--------+----------------------+

Exceptions
    +-------------+---------------------------------------+
    | WrongData   | if requested, DevFailed from device   |
    +-------------+---------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+-------------- |                                      |
| ----+--------+-----+----+            |                                      |
| | void Tango::DeviceAttribute::reset |                                      |
| \_exceptions   | (   | except\_flags |                                      |
|     | *fl*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ----+--------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------+-----+---------------- |                                      |
| --+--------+-----+----+              |                                      |
| | void Tango::DeviceAttribute::set\_ |                                      |
| exceptions   | (   | except\_flags   |                                      |
|   | *fl*   | )   |    |              |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| --+--------+-----+----+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. The following is an example of how to use this
exceptions related methods

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da = dev.read\_attribute("MyAttr");

da.set\_exceptions(DeviceAttribute::wrongtype\_flag);

DevLong dl;

try

{

da >> dl;

}

catch (DevFailed &e)

{

....

There is another usage example in the
`DeviceAttribute::exceptions() <../../d7/dca/classTango_1_1DeviceAttribute.html#a3f9f8c8594eca47c15d14a428e1ce449>`__
method documentation.

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+-------------+-------- |                                      |
| +-----+----+                         |                                      |
| | void Tango::DeviceAttribute::set\_ |                                      |
| name   | (   | string &    | *na*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -------+-----+-------------+-------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute name.

Set attribute name

Parameters
    +------+----------------------+
    | na   | The attribute name   |
    +------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+------------------+--- |                                      |
| -----+-----+----+                    |                                      |
| | void Tango::DeviceAttribute::set\_ |                                      |
| name   | (   | const char \*    | *n |                                      |
| a*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| -------+-----+------------------+--- |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute name.

Set attribute name

Parameters
    +------+----------------------+
    | na   | The attribute name   |
    +------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | bitset<numFlags> Tango::DeviceAttr |                                      |
| ibute::state   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get instance extraction state.

Allow the user to find out what was the reason of extraction from
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
failure. This method has to be used when exceptions are disabled. Here
is an example of how method
`state() <../../d7/dca/classTango_1_1DeviceAttribute.html#acd36c145050e5e3bf3bd4a172a0249c7>`__
could be used

`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html#acc1b9939f279cefb9d517458312be3ef>`__
da = ....

bitset<DeviceAttribute::numFlags> bs;

da.exceptions(bs);

DevLong dl;

if ((da >> dl) == false)

{

bitset<DeviceAttribute::numFlags> bs\_err = da.state();

if (bs\_err.test(DeviceAttribute::isempty\_flag) == true)

.....

}

Returns
    The error bit set.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----- | friend                               |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+                               |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &                                |                                      |
|                                    | |                                      |
|  ,   |                               |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+                               |                                      |
| |                       |     | `Dev |                                      |
| iceAttribute <../../d7/dca/classTang |                                      |
| o_1_1DeviceAttribute.html>`__ &    | |                                      |
|      |                               |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+                               |                                      |
| |                       | )   |      |                                      |
|                                      |                                      |
|                                    | |                                      |
|      |                               |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d7/d28/classTango_1_1DeviceAttribute__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
