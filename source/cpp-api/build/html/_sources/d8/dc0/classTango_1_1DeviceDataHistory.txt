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
members <../../df/d62/classTango_1_1DeviceDataHistory-members.html>`__

Tango::DeviceDataHistory Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Fundamental type for receiving data from device command polling buffers.
`More... <../../d8/dc0/classTango_1_1DeviceDataHistory.html#details>`__

Inheritance diagram for Tango::DeviceDataHistory:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DeviceDataHistory:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

TimeVal & 

`get\_date <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a29a818b5c86b2208ed6aee8700849945>`__
()

 

| Get record polling date.
`More... <#a29a818b5c86b2208ed6aee8700849945>`__

 

const DevErrorList & 

`get\_err\_stack <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a661631cafdd62b484736e92d8d700829>`__
()

 

| Get record error stack.
`More... <#a661631cafdd62b484736e92d8d700829>`__

 

bool 

`has\_failed <../../d8/dc0/classTango_1_1DeviceDataHistory.html#aa30b768579c6ac8083cc4c577a6a7885>`__
()

 

| Check if the record was a failure.
`More... <#aa30b768579c6ac8083cc4c577a6a7885>`__

 

|-| Public Member Functions inherited from
`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

 

`DeviceData <../../df/d22/classTango_1_1DeviceData.html#a2227d87b07be33fda5a23639f79022ad>`__
()

 

| Create a `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
object. `More... <#a2227d87b07be33fda5a23639f79022ad>`__

 

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

`operator<< <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a0376c92a5c91d8c35c8b7717634d8a6e>`__
(ostream &str,
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&ddh)

 

| Print a
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
instance. `More... <#a0376c92a5c91d8c35c8b7717634d8a6e>`__

 

Detailed Description
--------------------

Fundamental type for receiving data from device command polling buffers.

This is the fundamental type for receiving data from device command
polling buffers. This class inherits from the
`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
class. One instance of this class is created for each command result
history. Within this class, you find the command result data or the
exception parameters, a flag indicating if the command has failed when
it was invoked by the device server polling thread and the date when the
command was executed. For history calls, it is not possible to returns
command error as exception. See chapter on Advanced Features in the
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding device polling.

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------+-----+----+-----+----+ |                                      |
| | TimeVal& Tango::DeviceDataHistory: |                                      |
| :get\_date   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get record polling date.

Returns the date when the device server polling thread has executed the
command.

Returns
    The record polling date

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
| | const DevErrorList& Tango::DeviceD |                                      |
| ataHistory::get\_err\_stack   | (    |                                      |
| |    | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get record error stack.

Return the error stack recorded by the device server polling thread in
case of the command failed when it was invoked.

Returns
    The record error stack

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+----+   |                                      |
| | bool Tango::DeviceDataHistory::has |                                      |
| \_failed   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
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
| ---+----------+                      |                                      |
| | ostream& operator<<   | (   | ostr |                                      |
| eam &                                |                                      |
|                                      |                                      |
|    | *str*,   |                      |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------+                      |                                      |
| |                       |     | `Dev |                                      |
| iceDataHistory <../../d8/dc0/classTa |                                      |
| ngo_1_1DeviceDataHistory.html>`__ &  |                                      |
|    | *ddh*    |                      |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------+                      |                                      |
| |                       | )   |      |                                      |
|                                      |                                      |
|                                      |                                      |
|    |          |                      |                                      |
| +-----------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Print a
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
instance.

Is an utility function to easily print the contents of a
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
object. This function knows all types which could be inserted in a
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
object and print them accordingly. It also prints date and error stack
in case the command returned an error.

DeviceProxy \*dev = new DeviceProxy(“...”);

int hist\_depth = 4;

vector<DeviceDataHistory> \*hist;

hist = dev->command\_history(“MyCommand”,hist\_depth);

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
    | [in]   | ddh   | The instance to be printed   |
    +--------+-------+------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d4/d82/classTango_1_1DeviceDataHistory__inherit__graph.png
.. |Collaboration graph| image:: ../../d1/d6e/classTango_1_1DeviceDataHistory__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
