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

`Classes <#nested-classes>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `Friends <#friends>`__ \| `List of all
members <../../dc/d74/classTango_1_1Util-members.html>`__

Tango::Util Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a used to store TANGO device server process data and to
provide the user with a set of utilities method.
`More... <../../d4/deb/classTango_1_1Util.html#details>`__

Public Member Functions
-----------------------

Destructor

Only one destructor is defined for this class

 

`~Util <../../d4/deb/classTango_1_1Util.html#a9f4928ff121e0c7e25c23457fcdde12a>`__
()

 

| The class destructor. `More... <#a9f4928ff121e0c7e25c23457fcdde12a>`__

 

Get/Set instance data

CORBA::ORB\_ptr 

`get\_orb <../../d4/deb/classTango_1_1Util.html#ad439b7b797d20280db7558d3e0ca97b2>`__
()

 

| Get a reference to the CORBA ORB.
`More... <#ad439b7b797d20280db7558d3e0ca97b2>`__

 

PortableServer::POA\_ptr 

`get\_poa <../../d4/deb/classTango_1_1Util.html#a9c2ea6e24a2e83cd09a1dbdc7218bbee>`__
()

 

| Get a reference to the CORBA Portable Object Adapter (POA)
`More... <#a9c2ea6e24a2e83cd09a1dbdc7218bbee>`__

 

void 

`set\_trace\_level <../../d4/deb/classTango_1_1Util.html#abf6c91c64e226fae5ed1639cd28071ce>`__
(int level)

 

| Set the process trace level.
`More... <#abf6c91c64e226fae5ed1639cd28071ce>`__

 

int 

`get\_trace\_level <../../d4/deb/classTango_1_1Util.html#a49822fbfc1d15e017397230127ce33ee>`__
()

 

| Get the process trace level.
`More... <#a49822fbfc1d15e017397230127ce33ee>`__

 

string & 

`get\_ds\_inst\_name <../../d4/deb/classTango_1_1Util.html#ae8f35a5ab069649e607be6097c8b1fd8>`__
()

 

| Get the device server instance name.
`More... <#ae8f35a5ab069649e607be6097c8b1fd8>`__

 

string & 

`get\_ds\_exec\_name <../../d4/deb/classTango_1_1Util.html#a23221e64a028a7ddd7a03b9064322ddd>`__
()

 

| Get the device server executable name.
`More... <#a23221e64a028a7ddd7a03b9064322ddd>`__

 

string & 

`get\_ds\_name <../../d4/deb/classTango_1_1Util.html#aab15cb9f574c44c37b0d2dcce3531b3a>`__
()

 

| Get the device server name.
`More... <#aab15cb9f574c44c37b0d2dcce3531b3a>`__

 

string & 

`get\_host\_name <../../d4/deb/classTango_1_1Util.html#a54e78ffcf1f76cd8d8d03022921ea0f3>`__
()

 

| Get the host name where the device server process is running.
`More... <#a54e78ffcf1f76cd8d8d03022921ea0f3>`__

 

string & 

`get\_pid\_str <../../d4/deb/classTango_1_1Util.html#aff3a13d613a5c362c4c32e3946081a8f>`__
()

 

| Get the device server process identifier as a String.
`More... <#aff3a13d613a5c362c4c32e3946081a8f>`__

 

TangoSys\_Pid 

`get\_pid <../../d4/deb/classTango_1_1Util.html#aff871862b632defb0006e95404b3089a>`__
()

 

| Get the device server process identifier.
`More... <#aff871862b632defb0006e95404b3089a>`__

 

long 

`get\_tango\_lib\_release <../../d4/deb/classTango_1_1Util.html#a10b07c18428bf23e1bc2cb3ac917ff6a>`__
()

 

| Get the TANGO library version number.
`More... <#a10b07c18428bf23e1bc2cb3ac917ff6a>`__

 

string & 

`get\_version\_str <../../d4/deb/classTango_1_1Util.html#a1f604cdabca2b7efd2a54287a04d567d>`__
()

 

| Get the IDL TANGO version.
`More... <#a1f604cdabca2b7efd2a54287a04d567d>`__

 

string & 

`get\_server\_version <../../d4/deb/classTango_1_1Util.html#a19ed2067f664f4e7d98ac0876fcc7fd5>`__
()

 

| Get the device server version.
`More... <#a19ed2067f664f4e7d98ac0876fcc7fd5>`__

 

void 

`set\_server\_version <../../d4/deb/classTango_1_1Util.html#abb2c6dbbb85e9c0d73c7304dec83b8a2>`__
(const char \*vers)

 

| Set the device server version.
`More... <#abb2c6dbbb85e9c0d73c7304dec83b8a2>`__

 

void 

`set\_class\_list <../../d4/deb/classTango_1_1Util.html#a55f6da618ced3d2c73b4b4650f41a781>`__
(vector< `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\* > \*list)

 

| Set the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
list pointer. `More... <#a55f6da618ced3d2c73b4b4650f41a781>`__

 

void 

`add\_class\_to\_list <../../d4/deb/classTango_1_1Util.html#a5129fe98f63d85e72d35ed4619d14b5d>`__
(`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*cl)

 

| Add a `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ to
the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ list
pointer. `More... <#a5129fe98f63d85e72d35ed4619d14b5d>`__

 

const vector<
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \* > \* 

`get\_class\_list <../../d4/deb/classTango_1_1Util.html#a0d18e9c85522737eb4fb4bfff15af44c>`__
()

 

| Get the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
list pointer. `More... <#a0d18e9c85522737eb4fb4bfff15af44c>`__

 

void 

`set\_serial\_model <../../d4/deb/classTango_1_1Util.html#a84851a5fba97e3b553e5a567446f59c0>`__
(`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
ser)

 

| Set the serialization model.
`More... <#a84851a5fba97e3b553e5a567446f59c0>`__

 

`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__ 

`get\_serial\_model <../../d4/deb/classTango_1_1Util.html#ab045a913f25a49e2bb2a1b1895324b87>`__
()

 

| Get the serialization model.
`More... <#ab045a913f25a49e2bb2a1b1895324b87>`__

 

NotifdEventSupplier \* 

`get\_notifd\_event\_supplier <../../d4/deb/classTango_1_1Util.html#ae8106bcba73bdaf045057e1dc16b0637>`__
()

 

| Get a reference to the notifd TANGO EventSupplier object.
`More... <#ae8106bcba73bdaf045057e1dc16b0637>`__

 

ZmqEventSupplier \* 

`get\_zmq\_event\_supplier <../../d4/deb/classTango_1_1Util.html#adef106a678ba16179069e1f5b0b14de2>`__
()

 

| Get a reference to the ZMQ TANGO EventSupplier object.
`More... <#adef106a678ba16179069e1f5b0b14de2>`__

 

void 

`set\_ds\_event\_buffer\_hwm <../../d4/deb/classTango_1_1Util.html#ae085bbb2bd407369c62a126971f12f7d>`__
(DevLong val)

 

| Set device server process event buffer high water mark (HWM)
`More... <#ae085bbb2bd407369c62a126971f12f7d>`__

 

Polling related methods

void 

`trigger\_cmd\_polling <../../d4/deb/classTango_1_1Util.html#aa5f6adfd5e1b7f03fdbd7eadeffb3fb7>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const string &name)

 

| Trigger polling for polled command.
`More... <#aa5f6adfd5e1b7f03fdbd7eadeffb3fb7>`__

 

void 

`trigger\_attr\_polling <../../d4/deb/classTango_1_1Util.html#a9cb37786d6f990990c7905b39b889d27>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const string &name)

 

| Trigger polling for polled attribute.
`More... <#a9cb37786d6f990990c7905b39b889d27>`__

 

template<typename T >

void 

`fill\_attr\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#aa9e35fe725db9e490dbd2bf561e5bbe5>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
string &att\_name,
`AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__\ <
T > &data)

 

| Fill polling buffer for polled attribute.
`More... <#aa9e35fe725db9e490dbd2bf561e5bbe5>`__

 

template<typename T >

void 

`fill\_cmd\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#a797a10d317dc6aab6ef2948fc94b90cf>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
string &cmd\_name,
`CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__\ <
T > &data)

 

| Fill polling buffer for polled command.
`More... <#a797a10d317dc6aab6ef2948fc94b90cf>`__

 

void 

`set\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#a27485b14ec5334576704e31b65e2d03c>`__
(unsigned long thread\_nb)

 

| Set the polling threads pool size.
`More... <#a27485b14ec5334576704e31b65e2d03c>`__

 

unsigned long 

`get\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#af6aee977b3c8f5de4f135fca9b024ddf>`__
()

 

| Get the polling threads pool size.
`More... <#af6aee977b3c8f5de4f135fca9b024ddf>`__

 

void 

`set\_polling\_before\_9 <../../d4/deb/classTango_1_1Util.html#ae1df5b54896147fc95d689efc2936cc4>`__
(bool val)

 

| Set the polling thread algorithm to the algorithum used before
`Tango <../../de/ddf/namespaceTango.html>`__ 9.
`More... <#ae1df5b54896147fc95d689efc2936cc4>`__

 

Miscellaneous methods

bool 

`is\_svr\_starting <../../d4/deb/classTango_1_1Util.html#a8b5d14831423f0f2dafab927fa4e64ed>`__
()

 

| Check if the device server process is in its starting phase.
`More... <#a8b5d14831423f0f2dafab927fa4e64ed>`__

 

bool 

`is\_svr\_shutting\_down <../../d4/deb/classTango_1_1Util.html#a7e5a56fe3a14633ffafc01c63698f45f>`__
()

 

| Check if the device server process is in its shutting down sequence.
`More... <#a7e5a56fe3a14633ffafc01c63698f45f>`__

 

bool 

`is\_device\_restarting <../../d4/deb/classTango_1_1Util.html#a5ed4c18bfe81f1983d9ddc542491ca65>`__
(string &d\_name)

 

| Check if the device is actually restarted by the device server process
admin device with its DevRestart command.
`More... <#a5ed4c18bfe81f1983d9ddc542491ca65>`__

 

Database related methods

void 

`connect\_db <../../d4/deb/classTango_1_1Util.html#aa44378b4c63d0c2d86060b364f6b5639>`__
()

 

| Connect the process to the TANGO database.
`More... <#aa44378b4c63d0c2d86060b364f6b5639>`__

 

void 

`reset\_filedatabase <../../d4/deb/classTango_1_1Util.html#a6e221145196c95c02be5474dcd9520c0>`__
()

 

| Reread the file database.
`More... <#a6e221145196c95c02be5474dcd9520c0>`__

 

`Database <../../d6/dc5/classTango_1_1Database.html>`__ \* 

`get\_database <../../d4/deb/classTango_1_1Util.html#a7db09207aa90d9515115a296c057f789>`__
()

 

| Get a reference to the TANGO database object.
`More... <#a7db09207aa90d9515115a296c057f789>`__

 

void 

`unregister\_server <../../d4/deb/classTango_1_1Util.html#a48cc2bfa8af581f5b56ff7b72de4c2ff>`__
()

 

| Unregister a device server process from the TANGO database.
`More... <#a48cc2bfa8af581f5b56ff7b72de4c2ff>`__

 

Device reference related methods

vector< `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \* >
& 

`get\_device\_list\_by\_class <../../d4/deb/classTango_1_1Util.html#a4458c86fc6af2862f08d292912a6d430>`__
(const string &class\_name)

 

| Get the list of device references for a given TANGO class.
`More... <#a4458c86fc6af2862f08d292912a6d430>`__

 

vector< `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \* >
& 

`get\_device\_list\_by\_class <../../d4/deb/classTango_1_1Util.html#abf276bb846ae72361fe4087b6817a430>`__
(const char \*class\_name)

 

| Get the list of device references for a given TANGO class.
`More... <#abf276bb846ae72361fe4087b6817a430>`__

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \* 

`get\_device\_by\_name <../../d4/deb/classTango_1_1Util.html#a6ff7a35d328ee87b5dca4a04ea8b12c8>`__
(const string &dev\_name)

 

| Get a device reference from its name.
`More... <#a6ff7a35d328ee87b5dca4a04ea8b12c8>`__

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \* 

`get\_device\_by\_name <../../d4/deb/classTango_1_1Util.html#aaa87b8289e8861a4b2b3e4a6ea9fbc65>`__
(const char \*dev\_name)

 

| Get a device reference from its name.
`More... <#aaa87b8289e8861a4b2b3e4a6ea9fbc65>`__

 

DServer \* 

`get\_dserver\_device <../../d4/deb/classTango_1_1Util.html#a8d86b4bcf0c279aaadb9d476f9c261fd>`__
()

 

| Get a reference to the dserver device attached to the device server
process. `More... <#a8d86b4bcf0c279aaadb9d476f9c261fd>`__

 

vector< `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*
> 

`get\_device\_list <../../d4/deb/classTango_1_1Util.html#ae201024b8f84c08743097a43e2551540>`__
(const string &name)

 

| Get DeviceList from name.
`More... <#ae201024b8f84c08743097a43e2551540>`__

 

Device pattern related methods

void 

`server\_init <../../d4/deb/classTango_1_1Util.html#a3fddd272b3d6f6e3990a8d98ee64cb7d>`__
(bool with\_window=false)

 

| Initialise all the device server pattern(s) embedded in a device
server process. `More... <#a3fddd272b3d6f6e3990a8d98ee64cb7d>`__

 

void 

`server\_run <../../d4/deb/classTango_1_1Util.html#a6299b8c885918b5a0cbfe74d1563501b>`__
()

 

| Run the CORBA event loop.
`More... <#a6299b8c885918b5a0cbfe74d1563501b>`__

 

void 

`server\_cleanup <../../d4/deb/classTango_1_1Util.html#ad1ff436c06ef8b7cba2c96c09f6176ae>`__
()

 

| Cleanup a `Tango <../../de/ddf/namespaceTango.html>`__ device server
process before exit. `More... <#ad1ff436c06ef8b7cba2c96c09f6176ae>`__

 

void 

`server\_set\_event\_loop <../../d4/deb/classTango_1_1Util.html#a578233d769fc2fff627930f9b38e7ecd>`__
(bool(\*f\_ptr)())

 

| Set the server event loop.
`More... <#a578233d769fc2fff627930f9b38e7ecd>`__

 

Static Public Member Functions
------------------------------

Singleton related methods

These methods follow the singleton design pattern (only one instance of
a class)

static `Util <../../d4/deb/classTango_1_1Util.html>`__ \* 

`init <../../d4/deb/classTango_1_1Util.html#a79b69d3b0376e45516410fe35a7c499c>`__
(int argc, char \*argv[])

 

| Create and get the singleton object reference.
`More... <#a79b69d3b0376e45516410fe35a7c499c>`__

 

static TANGO\_IMP\_EXP `Util <../../d4/deb/classTango_1_1Util.html>`__
\* 

`instance <../../d4/deb/classTango_1_1Util.html#a577119e32b43b1344d6f9ef37f587472>`__
(bool exit=true)

 

| Get the singleton object reference.
`More... <#a577119e32b43b1344d6f9ef37f587472>`__

 

Static Public Attributes
------------------------

Class data members

static int 

`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__

 

| The process trace level.
`More... <#ac618c4a4d49ce20ae605ecded0ffe61c>`__

 

static TANGO\_IMP bool 

`\_UseDb <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__

 

| The database use flag (Use with extreme care).
`More... <#a194cd965fd1aebe1800adbe076558742>`__

 

static TANGO\_IMP bool 

`\_daemon <../../d4/deb/classTango_1_1Util.html#a92f38f300de79ece0538b691c806e4a6>`__

 

| A daemon process flag.
`More... <#a92f38f300de79ece0538b691c806e4a6>`__

 

static TANGO\_IMP long 

`\_sleep\_between\_connect <../../d4/deb/classTango_1_1Util.html#aadfaa555e0b480fa2cb63e820f390e11>`__

 

| The loop sleeping time in case of the \_daemon flag set to true.
`More... <#aadfaa555e0b480fa2cb63e820f390e11>`__

 

Protected Member Functions
--------------------------

 

`Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__
(int argc, char \*argv[])

 

| Constructs a newly allocated
`Util <../../d4/deb/classTango_1_1Util.html>`__ object.
`More... <#ae8cb0ef44d4f03250ab33b603a1dfee2>`__

 

Friends
-------

class 

`Tango::ApiUtil <../../d4/deb/classTango_1_1Util.html#a8b820dd210d17c25d7da4ba8379ee41e>`__

 

class 

`Tango::AutoTangoMonitor <../../d4/deb/classTango_1_1Util.html#aa90445f0324fbdea288f7b41aa4a6790>`__

 

Detailed Description
--------------------

This class is a used to store TANGO device server process data and to
provide the user with a set of utilities method.

This class is implemented using the singleton design pattern. Therefore
a device server process can have only one instance of this class and its
constructor is not public.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+----------------------+-----+----+-----+----+
| Tango::Util::~Util   | (   |    | )   |    |
+----------------------+-----+----+-----+----+

The class destructor.

+--------------------------------------+--------------------------------------+
| +---------------------+-----+------- | protected                            |
| -----+---------------+               |                                      |
| | Tango::Util::Util   | (   | int    |                                      |
|      | *argc*,       |               |                                      |
| +---------------------+-----+------- |                                      |
| -----+---------------+               |                                      |
| |                     |     | char \ |                                      |
| *    | *argv*\ []    |               |                                      |
| +---------------------+-----+------- |                                      |
| -----+---------------+               |                                      |
| |                     | )   |        |                                      |
|      |               |               |                                      |
| +---------------------+-----+------- |                                      |
| -----+---------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`Util <../../d4/deb/classTango_1_1Util.html>`__ object.

This constructor is protected following the singleton pattern

Parameters
    +--------+--------------------------------------------+
    | argc   | The process command line argument number   |
    +--------+--------------------------------------------+
    | argv   | The process commandline arguments          |
    +--------+--------------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------+-----+----+     |                                      |
| | void Tango::Util::add\_class\_to\_ |                                      |
| list   | (   | `DeviceClass <../../d |                                      |
| 4/dcd/classTango_1_1DeviceClass.html |                                      |
| >`__ \*    | *cl*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Add a `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ to
the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ list
pointer.

Parameters
    +------+-------------------------------------------------------------------------+
    | cl   | The `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ ptr   |
    +------+-------------------------------------------------------------------------+

+---------------------------------+-----+----+-----+----+
| void Tango::Util::connect\_db   | (   |    | )   |    |
+---------------------------------+-----+----+-----+----+

Connect the process to the TANGO database.

If the connection to the database failed, a message is displayed on the
screen and the process is aborted

template<typename T >

+-------------------------------------------------+-----+-------------------------------------------------------------------------------------+----------------+
| void Tango::Util::fill\_attr\_polling\_buffer   | (   | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*                      | *dev*,         |
+-------------------------------------------------+-----+-------------------------------------------------------------------------------------+----------------+
|                                                 |     | string &                                                                            | *att\_name*,   |
+-------------------------------------------------+-----+-------------------------------------------------------------------------------------+----------------+
|                                                 |     | `AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__\ < T > &    | *data*         |
+-------------------------------------------------+-----+-------------------------------------------------------------------------------------+----------------+
|                                                 | )   |                                                                                     |                |
+-------------------------------------------------+-----+-------------------------------------------------------------------------------------+----------------+

Fill polling buffer for polled attribute.

This method fills the polling buffer for one polled attribute registered
with an update period defined as "externally triggerred" (polling period
set to 0)

Parameters
    +-------------+------------------------------------------------------------+
    | dev         | The TANGO device                                           |
    +-------------+------------------------------------------------------------+
    | att\_name   | The attribute name which must be polled                    |
    +-------------+------------------------------------------------------------+
    | data        | The data stack with one element for each history element   |
    +-------------+------------------------------------------------------------+

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the call failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+

template<typename T >

+------------------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+
| void Tango::Util::fill\_cmd\_polling\_buffer   | (   | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*                    | *dev*,         |
+------------------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+
|                                                |     | string &                                                                          | *cmd\_name*,   |
+------------------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+
|                                                |     | `CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__\ < T > &    | *data*         |
+------------------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+
|                                                | )   |                                                                                   |                |
+------------------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+

Fill polling buffer for polled command.

This method fills the polling buffer for one polled command registered
with an update period defined as "externally triggerred" (polling period
set to 0)

Parameters
    +-------------+------------------------------------------------------------+
    | dev         | The TANGO device                                           |
    +-------------+------------------------------------------------------------+
    | cmd\_name   | The command name which must be polled                      |
    +-------------+------------------------------------------------------------+
    | data        | The data stack with one element for each history element   |
    +-------------+------------------------------------------------------------+

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the call failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+----+-----+----+     |                                      |
| | const vector<\ `DeviceClass <../.. |                                      |
| /d4/dcd/classTango_1_1DeviceClass.ht |                                      |
| ml>`__ \*>\* Tango::Util::get\_class |                                      |
| \_list   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
list pointer.

Returns
    The `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
    ptr vector address

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | `Database <../../d6/dc5/classTango |                                      |
| _1_1Database.html>`__\ \* Tango::Uti |                                      |
| l::get\_database   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a reference to the TANGO database object.

Returns
    The database object

+------------------------------------------------------------------------------------------------------+-----+-------------------+---------------+-----+----+
| `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__\ \* Tango::Util::get\_device\_by\_name   | (   | const string &    | *dev\_name*   | )   |    |
+------------------------------------------------------------------------------------------------------+-----+-------------------+---------------+-----+----+

Get a device reference from its name.

Parameters
    +-------------+-------------------------+
    | dev\_name   | The TANGO device name   |
    +-------------+-------------------------+

Returns
    The device reference

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If in the device is not served by one device pattern implemented in this process. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------------------------------------------------------------+-----+------------------+---------------+-----+----+
| `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__\ \* Tango::Util::get\_device\_by\_name   | (   | const char \*    | *dev\_name*   | )   |    |
+------------------------------------------------------------------------------------------------------+-----+------------------+---------------+-----+----+

Get a device reference from its name.

Parameters
    +-------------+-------------------------+
    | dev\_name   | The TANGO device name   |
    +-------------+-------------------------+

Returns
    The device reference

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If in the device is not served by one device pattern implemented in this process. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------------------------------------------------------------------+-----+-------------------+----------+-----+----+
| vector<\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*> Tango::Util::get\_device\_list   | (   | const string &    | *name*   | )   |    |
+-----------------------------------------------------------------------------------------------------------+-----+-------------------+----------+-----+----+

Get DeviceList from name.

It is possible to use a wild card ('\*') in the name parameter (e.g.
"\*", "/tango/tangotest/n\*", ...)

Parameters
    +--------+-------------------+
    | name   | The device name   |
    +--------+-------------------+

Returns
    The `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
    ptr vector address

+-----------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------------+-----+----+
| vector<\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*>& Tango::Util::get\_device\_list\_by\_class   | (   | const string &    | *class\_name*   | )   |    |
+-----------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------------+-----+----+

Get the list of device references for a given TANGO class.

Return the list of references for all devices served by one
implementation of the TANGO device pattern implemented in the process

Parameters
    +---------------+-------------------------------+
    | class\_name   | The TANGO device class name   |
    +---------------+-------------------------------+

Returns
    The device reference list

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If in the device server process there is no TANGO device pattern implemented the TANGO device class given as parameter Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------------------------------------------------------------------------------+-----+------------------+-----------------+-----+----+
| vector<\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*>& Tango::Util::get\_device\_list\_by\_class   | (   | const char \*    | *class\_name*   | )   |    |
+-----------------------------------------------------------------------------------------------------------------------+-----+------------------+-----------------+-----+----+

Get the list of device references for a given TANGO class.

Return the list of references for all devices served by one
implementation of the TANGO device pattern implemented in the process

Parameters
    +---------------+-------------------------------+
    | class\_name   | The TANGO device class name   |
    +---------------+-------------------------------+

Returns
    The device reference list

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If in the device server process there is no TANGO device pattern implemented the TANGO device class given as parameter Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | string& Tango::Util::get\_ds\_exec |                                      |
| \_name   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server executable name.

Returns
    The device server executable name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | string& Tango::Util::get\_ds\_inst |                                      |
| \_name   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server instance name.

Returns
    The device server instance name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+----+-----+----+           |                                      |
| | string& Tango::Util::get\_ds\_name |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server name.

The device server name is the device server executable name/the device
server instance name

Returns
    The device server name

+-----------------------------------------------+-----+----+-----+----+
| DServer\* Tango::Util::get\_dserver\_device   | (   |    | )   |    |
+-----------------------------------------------+-----+----+-----+----+

Get a reference to the dserver device attached to the device server
process.

Returns
    A reference to the dserver device

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+----+-----+----+         |                                      |
| | string& Tango::Util::get\_host\_na |                                      |
| me   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the host name where the device server process is running.

Returns
    The host name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
| | NotifdEventSupplier\* Tango::Util: |                                      |
| :get\_notifd\_event\_supplier   | (  |                                      |
|   |    | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a reference to the notifd TANGO EventSupplier object.

Returns
    The notifd EventSupplier object

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | CORBA::ORB\_ptr Tango::Util::get\_ |                                      |
| orb   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a reference to the CORBA ORB.

This is a CORBA \_duplicate of the original reference

Returns
    The CORBA ORB

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | TangoSys\_Pid Tango::Util::get\_pi |                                      |
| d   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server process identifier.

Returns
    The device server process identifier

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+----+-----+----+           |                                      |
| | string& Tango::Util::get\_pid\_str |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server process identifier as a String.

Returns
    The device server process identifier as a string

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | PortableServer::POA\_ptr Tango::Ut |                                      |
| il::get\_poa   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a reference to the CORBA Portable Object Adapter (POA)

This is a CORBA \_dupilcate of the original reference to the object POA.
For classical device server, thisis the root POA. For no database device
server, this is a specific POA with the USER\_ID policy.

Returns
    The CORBA root POA

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
| | unsigned long Tango::Util::get\_po |                                      |
| lling\_threads\_pool\_size   | (   | |                                      |
|     | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the polling threads pool size.

Returns
    The maximun number of threads in the polling threads pool

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+----+-----+----+ |                                      |
| | `SerialModel <../../de/ddf/namespa |                                      |
| ceTango.html#a0d80a625ea3e8339d930b2 |                                      |
| 49624ed0b6>`__ Tango::Util::get\_ser |                                      |
| ial\_model   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the serialization model.

Returns
    The serialization model. This serialization model is one of
    BY\_DEVICE, BY\_CLASS, BY\_PROCESS or NO\_SYNC

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | string& Tango::Util::get\_server\_ |                                      |
| version   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the device server version.

Returns
    The device server version

+----------------------------------------------+-----+----+-----+----+
| long Tango::Util::get\_tango\_lib\_release   | (   |    | )   |    |
+----------------------------------------------+-----+----+-----+----+

Get the TANGO library version number.

Returns
    The `Tango <../../de/ddf/namespaceTango.html>`__ library release
    number coded in 3 digits (for instance 550,551,552,600,....)

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+----+-----+----+           |                                      |
| | int Tango::Util::get\_trace\_level |                                      |
|    | (   |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---+-----+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the process trace level.

Returns
    The process trace level

References
`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | string& Tango::Util::get\_version\ |                                      |
| _str   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the IDL TANGO version.

Returns
    The device server version

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | ZmqEventSupplier\* Tango::Util::ge |                                      |
| t\_zmq\_event\_supplier   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a reference to the ZMQ TANGO EventSupplier object.

Returns
    The zmq EventSupplier object

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| ---------+-----+------------+------- |                                      |
| --------+                            |                                      |
| | static `Util <../../d4/deb/classTa |                                      |
| ngo_1_1Util.html>`__\ \* Tango::Util |                                      |
| ::init   | (   | int        | *argc* |                                      |
| ,       |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-----+------------+------- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|                                      |                                      |
|          |     | char \*    | *argv* |                                      |
| \ []    |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-----+------------+------- |                                      |
| --------+                            |                                      |
| |                                    |                                      |
|                                      |                                      |
|          | )   |            |        |                                      |
|         |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-----+------------+------- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create and get the singleton object reference.

This method returns a reference to the object of the
`Util <../../d4/deb/classTango_1_1Util.html>`__ class. If the class
singleton object has not been created, it will be instanciated

Parameters
    +--------+--------------------------------------------+
    | argc   | The process command line argument number   |
    +--------+--------------------------------------------+
    | argv   | The process commandline arguments          |
    +--------+--------------------------------------------+

Returns
    The `Util <../../d4/deb/classTango_1_1Util.html>`__ object reference

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+---------------------+---- |                                      |
| -+----+                              |                                      |
| | static TANGO\_IMP\_EXP `Util <../. |                                      |
| ./d4/deb/classTango_1_1Util.html>`__ |                                      |
| \ \* Tango::Util::instance   | (   | |                                      |
|  bool    | *exit* = ``true``   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+---------------------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the singleton object reference.

This method returns a reference to the object of the
`Util <../../d4/deb/classTango_1_1Util.html>`__ class. If the class has
not been initialised with it's init method, this method print a message
and abort the device server process

Returns
    The `Util <../../d4/deb/classTango_1_1Util.html>`__ object reference

Referenced by
`Tango::PyData::PyData() <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+-------------+------ |                                      |
| -------+-----+----+                  |                                      |
| | bool Tango::Util::is\_device\_rest |                                      |
| arting   | (   | string &    | *d\_n |                                      |
| ame*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------+------ |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the device is actually restarted by the device server process
admin device with its DevRestart command.

Returns
    A boolean set to true if the device is restarting.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | bool Tango::Util::is\_svr\_shuttin |                                      |
| g\_down   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the device server process is in its shutting down sequence.

Returns
    A boolean set to true if the server is in its shutting down phase.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | bool Tango::Util::is\_svr\_startin |                                      |
| g   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the device server process is in its starting phase.

Returns
    A boolean set to true if the server is in its starting phase.

+-----------------------------------------+-----+----+-----+----+
| void Tango::Util::reset\_filedatabase   | (   |    | )   |    |
+-----------------------------------------+-----+----+-----+----+

Reread the file database.

+-------------------------------------+-----+----+-----+----+
| void Tango::Util::server\_cleanup   | (   |    | )   |    |
+-------------------------------------+-----+----+-----+----+

Cleanup a `Tango <../../de/ddf/namespaceTango.html>`__ device server
process before exit.

This method cleanup a `Tango <../../de/ddf/namespaceTango.html>`__
device server and relinquish all computer resources before the process
exit

+----------------------------------+-----+---------+------------------------------+-----+----+
| void Tango::Util::server\_init   | (   | bool    | *with\_window* = ``false``   | )   |    |
+----------------------------------+-----+---------+------------------------------+-----+----+

Initialise all the device server pattern(s) embedded in a device server
process.

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the device pattern initialisation failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------+-----+----+-----+----+
| void Tango::Util::server\_run   | (   |    | )   |    |
+---------------------------------+-----+----+-----+----+

Run the CORBA event loop.

This method runs the CORBA event loop. For UNIX or Linux operating
system, this method does not return. For Windows in a non-console mode,
this method start a thread which enter the CORBA event loop.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+---------------+-- |                                      |
| ----------+-----+----+               |                                      |
| | void Tango::Util::server\_set\_eve |                                      |
| nt\_loop   | (   | bool(\*)()    | * |                                      |
| f\_ptr*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------------+-- |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the server event loop.

This method registers an event loop function in a
`Tango <../../de/ddf/namespaceTango.html>`__ server. This function will
be called by the process main thread in an infinite loop The process
will not use the classical ORB blocking event loop. It is the user
responsability to code this function in a way that it implements some
kind of blocking in order not to load the computer CPU

Parameters
    +----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | f\_ptr   | The event loop function pointer. This function will not receive any argument. It returns a boolean value. If this boolean is set to true, the device server process exit.   |
    +----------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+-------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+----------+---- |                                      |
| -+----+                              |                                      |
| | void Tango::Util::set\_class\_list |                                      |
|    | (   | vector< `DeviceClass <../ |                                      |
| ../d4/dcd/classTango_1_1DeviceClass. |                                      |
| html>`__ \* > \*    | *list*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ---+-----+-------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+----------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
list pointer.

Parameters
    +--------+----------------------------------------------------------------------------------------+
    | list   | The `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ ptr vector address   |
    +--------+----------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+------------+-- |                                      |
| -------+-----+----+                  |                                      |
| | void Tango::Util::set\_ds\_event\_ |                                      |
| buffer\_hwm   | (   | DevLong    | * |                                      |
| val*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| --------------+-----+------------+-- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device server process event buffer high water mark (HWM)

Parameters
    +-------+------------------------------------------------------------+
    | val   | The new event buffer high water mark in number of events   |
    +-------+------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+--------- |                                      |
| +-----+----+                         |                                      |
| | void Tango::Util::set\_polling\_be |                                      |
| fore\_9   | (   | bool    | *val*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the polling thread algorithm to the algorithum used before
`Tango <../../de/ddf/namespaceTango.html>`__ 9.

Parameters
    +-------+--------------------------+
    | val   | Polling algorithm flag   |
    +-------+--------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------+-----+--------- |                                      |
| ---------+----------------+-----+--- |                                      |
| -+                                   |                                      |
| | void Tango::Util::set\_polling\_th |                                      |
| reads\_pool\_size   | (   | unsigned |                                      |
|  long    | *thread\_nb*   | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ---------+----------------+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the polling threads pool size.

Parameters
    +--------------+-------------------------------------------------------------+
    | thread\_nb   | The maximun number of threads in the polling threads pool   |
    +--------------+-------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+-----+----+                      |                                      |
| | void Tango::Util::set\_serial\_mod |                                      |
| el   | (   | `SerialModel <../../de/ |                                      |
| ddf/namespaceTango.html#a0d80a625ea3 |                                      |
| e8339d930b249624ed0b6>`__    | *ser* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the serialization model.

Parameters
    +-------+----------------------------------------------------------------------------------------------------------------------+
    | ser   | The new serialization model. The serialization model must be one of BY\_DEVICE, BY\_CLASS, BY\_PROCESS or NO\_SYNC   |
    +-------+----------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+------------------+--- |                                      |
| -------+-----+----+                  |                                      |
| | void Tango::Util::set\_server\_ver |                                      |
| sion   | (   | const char \*    | *v |                                      |
| ers*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| -------+-----+------------------+--- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the device server version.

Parameters
    +--------+-----------------------------+
    | vers   | The device server version   |
    +--------+-----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+--------+-----------+---- |                                      |
| -+----+                              |                                      |
| | void Tango::Util::set\_trace\_leve |                                      |
| l   | (   | int    | *level*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ----+-----+--------+-----------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the process trace level.

Parameters
    +---------+-------------------------+
    | level   | The new process level   |
    +---------+-------------------------+

References
`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__.

+--------------------------------------------+-----+-------------------------------------------------------------------+-----------+
| void Tango::Util::trigger\_attr\_polling   | (   | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*    | *dev*,    |
+--------------------------------------------+-----+-------------------------------------------------------------------+-----------+
|                                            |     | const string &                                                    | *name*    |
+--------------------------------------------+-----+-------------------------------------------------------------------+-----------+
|                                            | )   |                                                                   |           |
+--------------------------------------------+-----+-------------------------------------------------------------------+-----------+

Trigger polling for polled attribute.

This method send the order to the polling thread to poll one object
registered with an update period defined as "externally triggerred"

Parameters
    +--------+-------------------------------------------+
    | dev    | The TANGO device                          |
    +--------+-------------------------------------------+
    | name   | The attribute name which must be polled   |
    +--------+-------------------------------------------+

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the call failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------------+-----+-------------------------------------------------------------------+-----------+
| void Tango::Util::trigger\_cmd\_polling   | (   | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*    | *dev*,    |
+-------------------------------------------+-----+-------------------------------------------------------------------+-----------+
|                                           |     | const string &                                                    | *name*    |
+-------------------------------------------+-----+-------------------------------------------------------------------+-----------+
|                                           | )   |                                                                   |           |
+-------------------------------------------+-----+-------------------------------------------------------------------+-----------+

Trigger polling for polled command.

This method send the order to the polling thread to poll one object
registered with an update period defined as "externally triggerred"

Parameters
    +--------+-----------------------------------------+
    | dev    | The TANGO device                        |
    +--------+-----------------------------------------+
    | name   | The command name which must be polled   |
    +--------+-----------------------------------------+

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the call failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------+-----+----+-----+----+
| void Tango::Util::unregister\_server   | (   |    | )   |    |
+----------------------------------------+-----+----+-----+----+

Unregister a device server process from the TANGO database.

If the database call fails, a message is displayed on the screen and the
process is aborted

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------------------------------ |                                      |
| ------+                              |                                      |
| | friend class `Tango::ApiUtil <../. |                                      |
| ./d7/d2a/classTango_1_1ApiUtil.html> |                                      |
| `__   |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

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
| +----------------------------------- | static                               |
| ------+                              |                                      |
| | TANGO\_IMP bool Tango::Util::\_dae |                                      |
| mon   |                              |                                      |
| +----------------------------------- |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

A daemon process flag.

If this flag is set to true, the server process will not exit if it not
able to connect to the database. Instead, it will loop until the
connection suceeds. The default value is false.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| -----------------------+             |                                      |
| | TANGO\_IMP long Tango::Util::\_sle |                                      |
| ep\_between\_connect   |             |                                      |
| +----------------------------------- |                                      |
| -----------------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The loop sleeping time in case of the \_daemon flag set to true.

This sleeping time is the number of seconds the process will sleep
before it tries again to connect to the database. The default value is
60 seconds.

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | static                               |
| | int Tango::Util::\_tracelevel   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The process trace level.

Referenced by
`get\_trace\_level() <../../d4/deb/classTango_1_1Util.html#a49822fbfc1d15e017397230127ce33ee>`__,
and
`set\_trace\_level() <../../d4/deb/classTango_1_1Util.html#abf6c91c64e226fae5ed1639cd28071ce>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| -----+                               |                                      |
| | TANGO\_IMP bool Tango::Util::\_Use |                                      |
| Db   |                               |                                      |
| +----------------------------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The database use flag (Use with extreme care).

Implemented for device server started without database usage.

Referenced by
`Tango::DeviceImpl::get\_db\_device() <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__.

--------------

The documentation for this class was generated from the following file:

-  `utils.h <../../d5/d60/utils_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Util <../../d4/deb/classTango_1_1Util.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
