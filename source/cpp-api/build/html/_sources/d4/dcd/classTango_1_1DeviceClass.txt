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
members <../../d7/d8d/classTango_1_1DeviceClass-members.html>`__

Tango::DeviceClass Class Referenceabstract

`Server classes <../../da/d64/group__Server.html>`__

Base class for all TANGO device-class class.
`More... <../../d4/dcd/classTango_1_1DeviceClass.html#details>`__

Collaboration diagram for Tango::DeviceClass:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Destructor

Only one desctructor is defined for this class

virtual 

`~DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html#ae3f6389d6cd5f8d9a4a0d503b1b39859>`__
()

 

| The device destructor.
`More... <#ae3f6389d6cd5f8d9a4a0d503b1b39859>`__

 

Miscellaneous methods

CORBA::Any \* 

`command\_handler <../../d4/dcd/classTango_1_1DeviceClass.html#ac69ec5233cd47d4e73bcc51ac280a9d2>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*device,
string &command, const CORBA::Any &in\_any)

 

| Execute a command. `More... <#ac69ec5233cd47d4e73bcc51ac280a9d2>`__

 

virtual void 

`command\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#ac86eef5f7d53b5291a034f7bb6fd289a>`__
()=0

 

| Create command objects for all command supported by this class of
device. `More... <#ac86eef5f7d53b5291a034f7bb6fd289a>`__

 

virtual void 

`attribute\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__
(vector< `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \* > &)

 

| Create all the attributes name supported by this class of device.
`More... <#a0ea1a3848a3d59f55a6734772859c4ec>`__

 

virtual void 

`pipe\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a09321e4257b799709d77f40ace03242a>`__
()

 

| Create all the pipes supported by this class of device.
`More... <#a09321e4257b799709d77f40ace03242a>`__

 

virtual void 

`device\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#afe62dc15b693afaabae6ccab09e759b1>`__
(const Tango::DevVarStringArray \*dev\_list)=0

 

| Create device(s). `More... <#afe62dc15b693afaabae6ccab09e759b1>`__

 

virtual void 

`device\_name\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a2596f49733e5dc80d52d8d240f4f83cd>`__
(vector< string > &list)

 

| Create device(s) name list (for no database device server).
`More... <#a2596f49733e5dc80d52d8d240f4f83cd>`__

 

void 

`device\_destroyer <../../d4/dcd/classTango_1_1DeviceClass.html#af8a87e707a19e473b0f959b7203c1c5d>`__
(const string &dev\_name)

 

| Delete device. `More... <#af8a87e707a19e473b0f959b7203c1c5d>`__

 

void 

`device\_destroyer <../../d4/dcd/classTango_1_1DeviceClass.html#adfd9b083e3d9a923ef44fc67d71e103c>`__
(const char \*dev\_name)

 

| Delete device. `More... <#adfd9b083e3d9a923ef44fc67d71e103c>`__

 

Get/Set object members.

These methods allows the external world to get/set
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ instance
data members

string & 

`get\_name <../../d4/dcd/classTango_1_1DeviceClass.html#a0577ce350035604373496d5d1fceee39>`__
()

 

| Get the TANGO device class name.
`More... <#a0577ce350035604373496d5d1fceee39>`__

 

string & 

`get\_doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a66c9909cee0aba6e337d4b80ff1396c0>`__
()

 

| Get the TANGO device class documentation URL.
`More... <#a66c9909cee0aba6e337d4b80ff1396c0>`__

 

string & 

`get\_type <../../d4/dcd/classTango_1_1DeviceClass.html#aca6317feaf809a2f18d0c28a6ae9df53>`__
()

 

| Get the TANGO device type name.
`More... <#aca6317feaf809a2f18d0c28a6ae9df53>`__

 

vector< `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \* >
& 

`get\_device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ad6359a7f1e9677b65102224b84d0cb98>`__
()

 

| Get the device object vector.
`More... <#ad6359a7f1e9677b65102224b84d0cb98>`__

 

vector< `Command <../../d2/d1d/classTango_1_1Command.html>`__ \* > & 

`get\_command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a9e37d56d78b31cbc5c767f65c1b2117f>`__
()

 

| Get the command object vector.
`More... <#a9e37d56d78b31cbc5c767f65c1b2117f>`__

 

vector< `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ \* > & 

`get\_pipe\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a88e327ee5c4220a0b46fb69546fbec85>`__
(const string &dev\_name)

 

| Get the pipe object vector.
`More... <#a88e327ee5c4220a0b46fb69546fbec85>`__

 

`Command <../../d2/d1d/classTango_1_1Command.html>`__ & 

`get\_cmd\_by\_name <../../d4/dcd/classTango_1_1DeviceClass.html#ab5bd55dc59ca01c0de65150ebac12829>`__
(const string &)

 

| Get a reference to a command object.
`More... <#ab5bd55dc59ca01c0de65150ebac12829>`__

 

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ & 

`get\_pipe\_by\_name <../../d4/dcd/classTango_1_1DeviceClass.html#af22a059467b590ec821873c9271eca76>`__
(const string &pipe\_name, const string &dev\_name)

 

| Get a reference to a pipe object.
`More... <#af22a059467b590ec821873c9271eca76>`__

 

`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ \* 

`get\_db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a0782567b9fa64959d5a3e41cdc893a6a>`__
()

 

| Get a pointer to the associated
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ object.
`More... <#a0782567b9fa64959d5a3e41cdc893a6a>`__

 

MultiClassAttribute \* 

`get\_class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a82ce643e9668e99ab16c56f484e6284b>`__
()

 

| Get a pointer to the class attributes object.
`More... <#a82ce643e9668e99ab16c56f484e6284b>`__

 

MultiClassPipe \* 

`get\_class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#a2a9c1c29d9d4dbf07d44630a5f729ee7>`__
()

 

| Get a pointer to the class pipes object.
`More... <#a2a9c1c29d9d4dbf07d44630a5f729ee7>`__

 

void 

`set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#ac51857831a8313233a91ec7baa91aff1>`__
(string &dev\_type)

 

| Set the TANGO device type name.
`More... <#ac51857831a8313233a91ec7baa91aff1>`__

 

void 

`set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#af84e5725fbc6e5d97219c3cdc9169ed9>`__
(const char \*dev\_type)

 

| Set the TANGO device type name.
`More... <#af84e5725fbc6e5d97219c3cdc9169ed9>`__

 

Signal related methods

These methods allow a signal management at device level

void 

`register\_signal <../../d4/dcd/classTango_1_1DeviceClass.html#acbcd3e21052bd117ec2ef7aa0ccccb3e>`__
(long signo, bool own\_handler=false)

 

| Register a signal. `More... <#acbcd3e21052bd117ec2ef7aa0ccccb3e>`__

 

void 

`unregister\_signal <../../d4/dcd/classTango_1_1DeviceClass.html#aa3ea36c4bc496245b84592f424043df7>`__
(long signo)

 

| Unregister a signal. `More... <#aa3ea36c4bc496245b84592f424043df7>`__

 

virtual void 

`signal\_handler <../../d4/dcd/classTango_1_1DeviceClass.html#a18b1c69d52e63e73cf6a844ee348da4a>`__
(long signo)

 

| Signal handler. `More... <#a18b1c69d52e63e73cf6a844ee348da4a>`__

 

Protected Member Functions
--------------------------

Constructor

Only one constructot for this class which is a singleton

 

`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html#a053d5cd241d3c4e16aab72547c79c86f>`__
(string &s)

 

| Construct a newly allocated
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ object.
`More... <#a053d5cd241d3c4e16aab72547c79c86f>`__

 

Miscellaneous protected methods

void 

`export\_device <../../d4/dcd/classTango_1_1DeviceClass.html#a80c2d408c01346850d29b45541c7f740>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const char \*corba\_dev\_name="Unused")

 

| Export a device. `More... <#a80c2d408c01346850d29b45541c7f740>`__

 

void 

`set\_default\_command <../../d4/dcd/classTango_1_1DeviceClass.html#abffecec6eb34eebaa56e8297e2999204>`__
(`Command <../../d2/d1d/classTango_1_1Command.html>`__ \*cmd)

 

| Set a `Tango <../../de/ddf/namespaceTango.html>`__ classs default
command. `More... <#abffecec6eb34eebaa56e8297e2999204>`__

 

Protected Attributes
--------------------

Class data members

string 

`name <../../d4/dcd/classTango_1_1DeviceClass.html#a17e2d247caf604ac2f2ab8f69ec4261c>`__

 

| The TANGO device class name.
`More... <#a17e2d247caf604ac2f2ab8f69ec4261c>`__

 

string 

`doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a19e2e40c4a095e6f002fc8367d98cdff>`__

 

| The TANGO device class documentation URL.
`More... <#a19e2e40c4a095e6f002fc8367d98cdff>`__

 

string 

`type <../../d4/dcd/classTango_1_1DeviceClass.html#a04a29a0cd699e1100f9d69e7b6202039>`__

 

| The TANGO device type name.
`More... <#a04a29a0cd699e1100f9d69e7b6202039>`__

 

vector< `Command <../../d2/d1d/classTango_1_1Command.html>`__ \* > 

`command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ac7c054f57761e8fdf84660008d1070b5>`__

 

| The command(s) list. `More... <#ac7c054f57761e8fdf84660008d1070b5>`__

 

vector< `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*
> 

`device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#add35f135439357ce2815140a6e5ebb89>`__

 

| The device(s) list. `More... <#add35f135439357ce2815140a6e5ebb89>`__

 

`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ \* 

`db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a94b87afbec24955aca456718488485ed>`__

 

| The associated `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
object. `More... <#a94b87afbec24955aca456718488485ed>`__

 

MultiClassAttribute \* 

`class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a4430e4458d46045ebd5a19ed472e2c59>`__

 

| Pointer to the class multi attribute object.
`More... <#a4430e4458d46045ebd5a19ed472e2c59>`__

 

MultiClassPipe \* 

`class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#ab664e50fbdb4a0843f11477011e962f8>`__

 

| Pointer to the class multi pipe object.
`More... <#ab664e50fbdb4a0843f11477011e962f8>`__

 

vector< `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ \* > 

`pipe\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a2626f63ac4db19102480950a815fb549>`__

 

| The pipe(s) list. `More... <#a2626f63ac4db19102480950a815fb549>`__

 

Friends
-------

class 

`Tango::AutoTangoMonitor <../../d4/dcd/classTango_1_1DeviceClass.html#aa90445f0324fbdea288f7b41aa4a6790>`__

 

Detailed Description
--------------------

Base class for all TANGO device-class class.

A TANGO device-class class is a class where is stored all data/method
common to all devices of a TANGO device class

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------+-----+----+-----+----+     |                                      |
| | virtual Tango::DeviceClass::~Devic |                                      |
| eClass   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device destructor.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +-----+-------------+-------+-----+- |                                      |
| ---+                                 |                                      |
| | Tango::DeviceClass::DeviceClass    |                                      |
| | (   | string &    | *s*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| +-----+-------------+-------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Construct a newly allocated
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ object.

Parameters
    +-----+----------------------------------------------------------------------+
    | s   | The `Tango <../../de/ddf/namespaceTango.html>`__ device class name   |
    +-----+----------------------------------------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ----------------------+----+-----+-- |                                      |
| --+                                  |                                      |
| | virtual void Tango::DeviceClass::a |                                      |
| ttribute\_factory   | (   | vector<  |                                      |
| `Attr <../../d5/dcd/classTango_1_1At |                                      |
| tr.html>`__ \* > &    |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ----------------------+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create all the attributes name supported by this class of device.

In the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
class, this method does nothing and must be re-defined in sub-class if
the sub-class supports attributes. Its rule is to create and store the
supported attributes in a vector.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | virtual void Tango::DeviceClass::c |                                      |
| ommand\_factory   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create command objects for all command supported by this class of
device.

In the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
class, this method is pure abstract and must be defined in sub-class.
Its rule is to create the command object and to store them in a vector
of command objects

+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+
| CORBA::Any\* Tango::DeviceClass::command\_handler   | (   | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*    | *device*,    |
+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+
|                                                     |     | string &                                                          | *command*,   |
+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+
|                                                     |     | const CORBA::Any &                                                | *in\_any*    |
+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+
|                                                     | )   |                                                                   |              |
+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+

Execute a command.

It looks for the correct command object in the command object vector. If
the command is found, it invoke the *always\_executed\_hook* method.
Check if the command is allowed by invoking the *is\_allowed* method If
the command is allowed, invokes the *execute* method.

Parameters
    +-----------+-------------------------------------------------------------+
    | device    | The device on which the command must be executed            |
    +-----------+-------------------------------------------------------------+
    | command   | The command name                                            |
    +-----------+-------------------------------------------------------------+
    | in\_any   | The command input data still packed in a CORBA Any object   |
    +-----------+-------------------------------------------------------------+

Returns
    A CORBA Any object with the output data packed in

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the command is not found, if the command is not allowed in the actual device state and re-throws of all the exception thrown by the *always\_executed\_hook*, *is\_alloed* and *execute* methods. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------+-----+-------------------+---------------+-----+----+
| void Tango::DeviceClass::device\_destroyer   | (   | const string &    | *dev\_name*   | )   |    |
+----------------------------------------------+-----+-------------------+---------------+-----+----+

Delete device.

The rule of this method is to delete a device from the running server
belonging to the `Tango <../../de/ddf/namespaceTango.html>`__ class. It
does change anything in the database

Parameters
    +-------------+--------------------------------+
    | dev\_name   | Reference to the device name   |
    +-------------+--------------------------------+

+----------------------------------------------+-----+------------------+---------------+-----+----+
| void Tango::DeviceClass::device\_destroyer   | (   | const char \*    | *dev\_name*   | )   |    |
+----------------------------------------------+-----+------------------+---------------+-----+----+

Delete device.

The rule of this method is to delete a device from the running device
belonging to the `Tango <../../de/ddf/namespaceTango.html>`__ class. It
does change anything in the database

Parameters
    +-------------+--------------------------------+
    | dev\_name   | Reference to the device name   |
    +-------------+--------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -----------------+-----+------------ |                                      |
| --------------------------+--------- |                                      |
| ------+-----+----+                   |                                      |
| | virtual void Tango::DeviceClass::d |                                      |
| evice\_factory   | (   | const Tango |                                      |
| ::DevVarStringArray \*    | *dev\_li |                                      |
| st*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| --------------------------+--------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create device(s).

In the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
class, this method is pure abstract and must be defined in sub-class.
Its rule is to create all the class devices and to store them in a
vector of device

Parameters
    +-------------+------------------------+
    | dev\_list   | The device name list   |
    +-------------+------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| -----------------+----------+-----+- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::DeviceClass::d |                                      |
| evice\_name\_factory   | (   | vecto |                                      |
| r< string > &    | *list*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -----------------+----------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create device(s) name list (for no database device server).

This method can be re-defined in
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ sub-class
for device server started without database. Its rule is to initialise
class device name. The default method does nothing.

Parameters
    +--------+-------------------------------------+
    | list   | Reference to the device name list   |
    +--------+-------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+------------------------- |                                      |
| -------------+                       |                                      |
| | void Tango::DeviceClass::export\_d |                                      |
| evice   | (   | `DeviceImpl <../../d |                                      |
| 3/d62/classTango_1_1DeviceImpl.html> |                                      |
| `__ \*    | *dev*,                   |                                      |
|              |                       |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+------------------------- |                                      |
| -------------+                       |                                      |
| |                                    |                                      |
|         |     | const char \*        |                                      |
|                                      |                                      |
|           | *corba\_dev\_name* = ``" |                                      |
| Unused"``    |                       |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+------------------------- |                                      |
| -------------+                       |                                      |
| |                                    |                                      |
|         | )   |                      |                                      |
|                                      |                                      |
|           |                          |                                      |
|              |                       |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+------------------------- |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Export a device.

Associate the servant to a CORBA object and send device network
parameter to TANGO database. The main parameter sent to database is the
CORBA object stringified device IOR.

Parameters
    +--------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev                | The device to be exported (CORBA servant)                                                                                                                                                             |
    +--------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | corba\_dev\_name   | The name to be used in the CORBA object key. This parameter does not need to be set in most of cases and has a default value. It is used for special device server like the database device server.   |
    +--------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the command sent to the database failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
| | MultiClassAttribute\* Tango::Devic |                                      |
| eClass::get\_class\_attr   | (   |   |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a pointer to the class attributes object.

Returns
    A pointer to the instance of the MultiClassAttribute

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
| | MultiClassPipe\* Tango::DeviceClas |                                      |
| s::get\_class\_pipe   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a pointer to the class pipes object.

Returns
    A pointer to the instance of the MultiClassPipe

+---------------------------------------------------------------------------------------------------+-----+-------------------+----+-----+----+
| `Command <../../d2/d1d/classTango_1_1Command.html>`__\ & Tango::DeviceClass::get\_cmd\_by\_name   | (   | const string &    |    | )   |    |
+---------------------------------------------------------------------------------------------------+-----+-------------------+----+-----+----+

Get a reference to a command object.

Returns
    A reference to the command object

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+----+-----+----+           |                                      |
| | vector<\ `Command <../../d2/d1d/cl |                                      |
| assTango_1_1Command.html>`__ \*>& Ta |                                      |
| ngo::DeviceClass::get\_command\_list |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the command object vector.

Returns
    A reference to the command vector

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
| | `DbClass <../../dc/d38/classTango_ |                                      |
| 1_1DbClass.html>`__\ \* Tango::Devic |                                      |
| eClass::get\_db\_class   | (   |     |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a pointer to the associated
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__ object.

Returns
    Pointer to the DbClas object

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+----+-----+----+      |                                      |
| | vector<\ `DeviceImpl <../../d3/d62 |                                      |
| /classTango_1_1DeviceImpl.html>`__ \ |                                      |
| *>& Tango::DeviceClass::get\_device\ |                                      |
| _list   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device object vector.

Returns
    A reference to the device vector

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | string& Tango::DeviceClass::get\_d |                                      |
| oc\_url   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the TANGO device class documentation URL.

Returns
    The TANGO device class documentation

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | string& Tango::DeviceClass::get\_n |                                      |
| ame   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the TANGO device class name.

Returns
    The TANGO device class name

+----------------------------------------------------------------------------------------------+-----+-------------------+-----------------+
| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__\ & Tango::DeviceClass::get\_pipe\_by\_name   | (   | const string &    | *pipe\_name*,   |
+----------------------------------------------------------------------------------------------+-----+-------------------+-----------------+
|                                                                                              |     | const string &    | *dev\_name*     |
+----------------------------------------------------------------------------------------------+-----+-------------------+-----------------+
|                                                                                              | )   |                   |                 |
+----------------------------------------------------------------------------------------------+-----+-------------------+-----------------+

Get a reference to a pipe object.

Parameters
    +--------------+-------------------+
    | pipe\_name   | The pipe name     |
    +--------------+-------------------+
    | dev\_name    | The device name   |
    +--------------+-------------------+

Returns
    A reference to the pipe object

+-----------------------------------------------------------------------------------------------------+-----+-------------------+---------------+-----+----+
| vector<\ `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ \*>& Tango::DeviceClass::get\_pipe\_list   | (   | const string &    | *dev\_name*   | )   |    |
+-----------------------------------------------------------------------------------------------------+-----+-------------------+---------------+-----+----+

Get the pipe object vector.

Parameters
    +-------------+-------------------+
    | dev\_name   | The device name   |
    +-------------+-------------------+

Returns
    A reference to the pipe vector containing all device pipes

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | string& Tango::DeviceClass::get\_t |                                      |
| ype   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the TANGO device type name.

Returns
    The TANGO device type name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual void Tango::DeviceClass::p |                                      |
| ipe\_factory   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create all the pipes supported by this class of device.

In the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
class, this method does nothing and must be re-defined in sub-class if
the sub-class supports pipes. Its rule is to create and store the
supported pipes in a vector.

+---------------------------------------------+-----+---------+-------------------------------+
| void Tango::DeviceClass::register\_signal   | (   | long    | *signo*,                      |
+---------------------------------------------+-----+---------+-------------------------------+
|                                             |     | bool    | *own\_handler* = ``false``    |
+---------------------------------------------+-----+---------+-------------------------------+
|                                             | )   |         |                               |
+---------------------------------------------+-----+---------+-------------------------------+

Register a signal.

Register this class as class to be informed when signal signo is sent to
to the device server process. This method is available only under Linux.

Parameters
    +----------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | signo          | The signal number                                                                                                                                                                                                                                                          |
    +----------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | own\_handler   | A boolean set to true if you want the device signal handler to be executed in its own handler instead of being executed by the signal thread. If this parameter is set to true, care should be taken on how the handler is written. A default false value is provided \*   |
    +----------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the signal number is out of range or if the operating system failed to register a signal for the process. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlineprotected                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::DeviceClass::set\_defa |                                      |
| ult\_command   | (   | `Command <../ |                                      |
| ../d2/d1d/classTango_1_1Command.html |                                      |
| >`__ \*    | *cmd*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a `Tango <../../de/ddf/namespaceTango.html>`__ classs default
command.

Define one command to be the
`Tango <../../de/ddf/namespaceTango.html>`__ class default command The
default command is the command which will be exceuted when an unknown
command is sent to one of the
`Tango <../../de/ddf/namespaceTango.html>`__ class device By default,
there is no default class

Parameters
    +-------+----------------------+
    | cmd   | The command object   |
    +-------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+-------------+------------ |                                      |
| ---+-----+----+                      |                                      |
| | void Tango::DeviceClass::set\_type |                                      |
|    | (   | string &    | *dev\_type* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ---+-----+-------------+------------ |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the TANGO device type name.

Parameters
    +-------------+----------------------------------+
    | dev\_type   | The new TANGO device type name   |
    +-------------+----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+------------------+------- |                                      |
| --------+-----+----+                 |                                      |
| | void Tango::DeviceClass::set\_type |                                      |
|    | (   | const char \*    | *dev\_ |                                      |
| type*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ---+-----+------------------+------- |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the TANGO device type name.

Parameters
    +-------------+----------------------------------+
    | dev\_type   | The new TANGO device type name   |
    +-------------+----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------+-----+---------+-- |                                      |
| ---------+-----+----+                |                                      |
| | virtual void Tango::DeviceClass::s |                                      |
| ignal\_handler   | (   | long    | * |                                      |
| signo*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+---------+-- |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Signal handler.

The method executed when the signal arrived in the device server
process. This method is defined as virtual and then, can be redefined
following device class needs.

Parameters
    +---------+---------------------+
    | signo   | The signal number   |
    +---------+---------------------+

+-----------------------------------------------+-----+---------+-----------+-----+----+
| void Tango::DeviceClass::unregister\_signal   | (   | long    | *signo*   | )   |    |
+-----------------------------------------------+-----+---------+-----------+-----+----+

Unregister a signal.

Unregister this class as class to be informed when signal signo is sent
to to the device server process

Parameters
    +---------+---------------------+
    | signo   | The signal number   |
    +---------+---------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the signal number is out of range or if the operating system failed to unregister a signal for the process. Unregister a device for a signal number for a device not previously registered is not an error. This simply will do nothing. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| -----+                               |                                      |
| | friend class Tango::AutoTangoMonit |                                      |
| or   |                               |                                      |
| +----------------------------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----------------------+              |                                      |
| | MultiClassAttribute\* Tango::Devic |                                      |
| eClass::class\_attr   |              |                                      |
| +----------------------------------- |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Pointer to the class multi attribute object.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------------+                   |                                      |
| | MultiClassPipe\* Tango::DeviceClas |                                      |
| s::class\_pipe   |                   |                                      |
| +----------------------------------- |                                      |
| -----------------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Pointer to the class multi pipe object.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ---------------------------------+   |                                      |
| | vector<\ `Command <../../d2/d1d/cl |                                      |
| assTango_1_1Command.html>`__ \*> Tan |                                      |
| go::DeviceClass::command\_list   |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command(s) list.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `DbClass <../../dc/d38/classTango_ |                                      |
| 1_1DbClass.html>`__\ \* Tango::Devic |                                      |
| eClass::db\_class   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The associated `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
object.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+                                  |                                      |
| | vector<\ `DeviceImpl <../../d3/d62 |                                      |
| /classTango_1_1DeviceImpl.html>`__ \ |                                      |
| *> Tango::DeviceClass::device\_list  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device(s) list.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----+                                |                                      |
| | string Tango::DeviceClass::doc\_ur |                                      |
| l   |                                |                                      |
| +----------------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The TANGO device class documentation URL.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | string Tango::DeviceClass::name    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The TANGO device class name.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------+            |                                      |
| | vector<\ `Pipe <../../d8/d14/class |                                      |
| Tango_1_1Pipe.html>`__ \*> Tango::De |                                      |
| viceClass::pipe\_list   |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The pipe(s) list.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | string Tango::DeviceClass::type    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The TANGO device type name.

--------------

The documentation for this class was generated from the following file:

-  `deviceclass.h <../../d7/dfc/deviceclass_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../df/d8c/classTango_1_1DeviceClass__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
