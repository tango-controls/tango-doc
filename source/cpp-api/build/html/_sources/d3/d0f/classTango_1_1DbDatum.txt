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
members <../../d2/db9/classTango_1_1DbDatum-members.html>`__

Tango::DbDatum Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Database Client
classes <../../d3/d48/group__DBase.html>`__

A database value.
`More... <../../d3/d0f/classTango_1_1DbDatum.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html#aeff53e61f2fa3a42ac930113af6b9f0c>`__
(string name)

 

| Create a `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object.
`More... <#aeff53e61f2fa3a42ac930113af6b9f0c>`__

 

 

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html#af66b0aadb93b23168cb56d81d61baf48>`__
(const char \*name)

 

| Create a `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object.
`More... <#af66b0aadb93b23168cb56d81d61baf48>`__

 

Operators overloading

void 

`operator<< <../../d3/d0f/classTango_1_1DbDatum.html#a66304a562149bdb6d89858cbca65729e>`__
(bool val)

 

| Inserters operators. `More... <#a66304a562149bdb6d89858cbca65729e>`__

 

bool 

`operator>> <../../d3/d0f/classTango_1_1DbDatum.html#afd6ed9a2e6b129bcc9ae26e16ae4ef0b>`__
(bool &val)

 

| Extractors operators. `More... <#afd6ed9a2e6b129bcc9ae26e16ae4ef0b>`__

 

Exception related methods methods

void 

`exceptions <../../d3/d0f/classTango_1_1DbDatum.html#adce60a23dccf7f08f1fc7f81cbc783f0>`__
(bitset< DbDatum::numFlags > fl)

 

| Set exception flag. `More... <#adce60a23dccf7f08f1fc7f81cbc783f0>`__

 

bitset< DbDatum::numFlags > 

`exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a332a7e23267e200c786a5b8486916205>`__
()

 

| Get exception flag. `More... <#a332a7e23267e200c786a5b8486916205>`__

 

void 

`reset\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a6c4f542a1f33e2ff5e7f2e16aded5679>`__
(except\_flags fl)

 

| Reset one exception flag.
`More... <#a6c4f542a1f33e2ff5e7f2e16aded5679>`__

 

void 

`set\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#aff8fbe5d2dd3c816b1ff24c55fb1295a>`__
(except\_flags fl)

 

| Set one exception flag.
`More... <#aff8fbe5d2dd3c816b1ff24c55fb1295a>`__

 

Miscellaneous methods

bool 

`is\_empty <../../d3/d0f/classTango_1_1DbDatum.html#aead8e1ceb14215958af0c4202d973e54>`__
()

 

| Test if instance is empty.
`More... <#aead8e1ceb14215958af0c4202d973e54>`__

 

Detailed Description
--------------------

A database value.

A single database value which has a name, type, address and value and
methods for inserting and extracting C++ native types. This is the
fundamental type for specifying database properties. Every property has
a name and has one or more values associated with it. The values can be
inserted and extracted using the operators << and >> respectively. A
status flag indicates if there is data in the
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object or not. An
additional flag allows the user to activate exceptions.

Constructor & Destructor Documentation
--------------------------------------

+---------------------------+-----+-----------+----------+-----+----+
| Tango::DbDatum::DbDatum   | (   | string    | *name*   | )   |    |
+---------------------------+-----+-----------+----------+-----+----+

Create a `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object.

Create an instance of the
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ class with name
set to the specified parameter

Parameters
    +--------+--------+------------------------------------------------------------------+
    | [in]   | name   | The CORBA ORB pointer. Default value is fine for 99 % of cases   |
    +--------+--------+------------------------------------------------------------------+

+---------------------------+-----+------------------+----------+-----+----+
| Tango::DbDatum::DbDatum   | (   | const char \*    | *name*   | )   |    |
+---------------------------+-----+------------------+----------+-----+----+

Create a `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object.

Create an instance of the
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ class with name
set to the specified parameter

Parameters
    +--------+--------+------------------------------------------------------------------+
    | [in]   | name   | The CORBA ORB pointer. Default value is fine for 99 % of cases   |
    +--------+--------+------------------------------------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| +-----+----------------------------- |                                      |
| ---+--------+-----+----+             |                                      |
| | void Tango::DbDatum::exceptions    |                                      |
| | (   | bitset< DbDatum::numFlags >  |                                      |
|    | *fl*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| +-----+----------------------------- |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set exception flag.

Is a method which allows the user to switch on/off exception throwing
for trying to extract data from an empty
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object. The
default is to not throw exception. The following flags are supported :

-  **isempty\_flag** - throw a WrongData exception (reason =
   API\_EmptyDbDatum) if user tries to extract data from an empty
   `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object
-  **wrongtype\_flag** - throw a WrongData exception (reason =
   API\_IncompatibleArgumentType) if user tries to extract data with a
   type different than the type used for insertion

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | bitset<DbDatum::numFlags> Tango::D |                                      |
| bDatum::exceptions   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get exception flag.

Returns the whole exception flags. The following is an example of how to
use these exceptions related methods

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html#aeff53e61f2fa3a42ac930113af6b9f0c>`__
da;

bitset<DbDatum::numFlags> bs = da.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

da.set\_exceptions(DbDatum::wrongtype\_flag);

bs = da.exceptions();

cout << "bs = " << bs <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The exception flag

+----------------------------------+-----+----+-----+----+
| bool Tango::DbDatum::is\_empty   | (   |    | )   |    |
+----------------------------------+-----+----+-----+----+

Test if instance is empty.

`is\_empty() <../../d3/d0f/classTango_1_1DbDatum.html#aead8e1ceb14215958af0c4202d973e54>`__
is a boolean method which returns true or false depending on whether the
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ object contains
data or not. It can be used to test whether a property is defined in the
database or not e.g.

sl\_props.push\_back(parity\_prop);

dbase->get\_device\_property(device\_name, sl\_props);

if (! parity\_prop.is\_empty())

{

parity\_prop >> parity;

}

else

{

cout << device\_name << " has no parity defined in database !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

Returns
    True if DdDatum instance is empty

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-----------------------------------+-----+---------+---------+-----+----+
| void Tango::DbDatum::operator<<   | (   | bool    | *val*   | )   |    |
+-----------------------------------+-----+---------+---------+-----+----+

Inserters operators.

The insert and extract operators are specified for the following C++
types :

-  bool
-  unsigned char
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
-  vector<string>
-  vector<short>
-  vector<unsigned short>
-  vector<DevLong>
-  vector<DevULong>
-  vector<DevLong64>
-  vector<DevULong64>
-  vector<float>
-  vector<double>

Here is an example of creating, inserting and extracting some
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ types :

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html#aeff53e61f2fa3a42ac930113af6b9f0c>`__
my\_short("my\_short"), my\_long(“my\_long”), my\_string("my\_string");

`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html#aeff53e61f2fa3a42ac930113af6b9f0c>`__
my\_float\_vector("my\_float\_vector"),
my\_double\_vector("my\_double\_vector");

string a\_string;

short a\_short;

DevLong a\_long;

vector<float> a\_float\_vector;

vector<double> a\_double\_vector;

my\_short << 100; // insert a short

my\_short >> a\_short; // extract a short

my\_long << 1000; // insert a DevLong

my\_long >> a\_long; // extract a long

my\_string << string("estas lista a bailar el tango ?"); // insert a
string

my\_string >> a\_string; // extract a string

my\_float\_vector << a\_float\_vector // insert a vector of floats

my\_float\_vector >> a\_float\_vector; // extract a vector of floats

my\_double\_vector << a\_double\_vector; // insert a vector of doubles

my\_double\_vector >> a\_double\_vector; // extract a vector of doubles

Parameters
    +--------+-------+-----------------------+
    | [in]   | val   | Data to be inserted   |
    +--------+-------+-----------------------+

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+-----------------------------------+-----+-----------+---------+-----+----+
| bool Tango::DbDatum::operator>>   | (   | bool &    | *val*   | )   |    |
+-----------------------------------+-----+-----------+---------+-----+----+

Extractors operators.

See documentation of the
`DbDatum::operator<< <../../d3/d0f/classTango_1_1DbDatum.html#a66304a562149bdb6d89858cbca65729e>`__
for details

Parameters
    +---------+-------+---------------------------------------------+
    | [out]   | val   | Data to be initalized with database value   |
    +---------+-------+---------------------------------------------+

Returns
    A boolean set to true if the extraction succeeds

Exceptions
    +-------------+----------------+
    | WrongData   | if requested   |
    +-------------+----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+------------------+--- |                                      |
| -----+-----+----+                    |                                      |
| | void Tango::DbDatum::reset\_except |                                      |
| ions   | (   | except\_flags    | *f |                                      |
| l*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| -------+-----+------------------+--- |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reset one exception flag.

Resets one exception flag

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------------+----- |                                      |
| ---+-----+----+                      |                                      |
| | void Tango::DbDatum::set\_exceptio |                                      |
| ns   | (   | except\_flags    | *fl* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------------+----- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set one exception flag.

Sets one exception flag. See
`DbDatum::exceptions() <../../d3/d0f/classTango_1_1DbDatum.html#a332a7e23267e200c786a5b8486916205>`__
for a usage example

Parameters
    +--------+------+----------------------+
    | [in]   | fl   | The exception flag   |
    +--------+------+----------------------+

--------------

The documentation for this class was generated from the following file:

-  `dbapi.h <../../dc/df8/dbapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
