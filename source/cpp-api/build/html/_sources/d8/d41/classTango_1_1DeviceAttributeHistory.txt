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

`Classes <#nested-classes>`__ \| `Public Member
Functions <#pub-methods>`__ \| `Friends <#friends>`__ \| `List of all
members <../../dc/d45/classTango_1_1DeviceAttributeHistory-members.html>`__

Tango::DeviceAttributeHistory Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for receiving data from device attribute polling
buffers.
`More... <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#details>`__

Inheritance diagram for Tango::DeviceAttributeHistory:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DeviceAttributeHistory:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

bool 

`has\_failed <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#a29502710f173c46c03a6334f0498899e>`__
()

 

| Check if the record was a failure.
`More... <#a29502710f173c46c03a6334f0498899e>`__

 

|-| Public Member Functions inherited from
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

 

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

`operator<< <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#a641d6e2a068adc24811acc267e13486a>`__
(ostream &str,
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&dah)

 

| Print a
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
instance. `More... <#a641d6e2a068adc24811acc267e13486a>`__

 

Detailed Description
--------------------

Fundamental type for receiving data from device attribute polling
buffers.

This is the fundamental type for receiving data from device attribute
polling buffers. This class inherits from the
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
class. One instance of this class is created for each attribute result
history. Within this class, you find the attribute result data or the
exception parameters and a flag indicating if the attribute has failed
when it was invoked by the device server polling thread. For history
calls, it is not possible to returns attribute error as exception. See
chapter on Advanced Features in the `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding device polling.

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | bool Tango::DeviceAttributeHistory |                                      |
| ::has\_failed   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the record was a failure.

Returns a boolean set to true if the record in the polling buffer was a
failure

Returns
    A boolean set to true if the record was a failure

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------+-----+----- | friend                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+----------+            |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &                                |                                      |
|                                      |                                      |
|              | *str*,   |            |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+----------+            |                                      |
| |                       |     | `Dev |                                      |
| iceAttributeHistory <../../d8/d41/cl |                                      |
| assTango_1_1DeviceAttributeHistory.h |                                      |
| tml>`__ &    | *dah*    |            |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+----------+            |                                      |
| |                       | )   |      |                                      |
|                                      |                                      |
|                                      |                                      |
|              |          |            |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+----------+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Print a
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
instance.

Is an utility function to easily print the contents of a
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
object. This function knows all types which could be inserted in a
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
object and print them accordingly. It also in case the attribute
returned an error.

DeviceProxy \*dev = new DeviceProxy(“...”);

int hist\_depth = 4;

vector<DeviceAttributeHistory> \*hist;

hist = dev->attribute\_history(“MyAttribute”,hist\_depth);

for (int i = 0;i < hist\_depth;i++)

{

cout << (\*hist)[i] <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+-------+------------------------------+
    | [in]   | str   | The printing stream          |
    +--------+-------+------------------------------+
    | [in]   | dah   | The instance to be printed   |
    +--------+-------+------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/d9c/classTango_1_1DeviceAttributeHistory__inherit__graph.png
.. |Collaboration graph| image:: ../../dc/d16/classTango_1_1DeviceAttributeHistory__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
