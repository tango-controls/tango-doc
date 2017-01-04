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

`List of all members <../../de/d09/classTango_1_1Group-members.html>`__

Tango::Group Class Reference

`Client classes <../../d1/d45/group__Client.html>`__ » `Group Client
classes <../../db/dc1/group__Grp.html>`__

High level class allowing the user to handle
`Tango <../../de/ddf/namespaceTango.html>`__ group.
`More... <../../d4/d6d/classTango_1_1Group.html#details>`__

Inheritance diagram for Tango::Group:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::Group:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructor and destructor

 

`Group <../../d4/d6d/classTango_1_1Group.html#aa1bcfe79af9522faa65449efb128fc3e>`__
(const std::string &name)

 

| Create a `Group <../../d4/d6d/classTango_1_1Group.html>`__ instance.
`More... <#aa1bcfe79af9522faa65449efb128fc3e>`__

 

virtual 

`~Group <../../d4/d6d/classTango_1_1Group.html#acd7a0b40d37852923131e9bce68dd9ff>`__
()

 

| Create a `Group <../../d4/d6d/classTango_1_1Group.html>`__ instance.
`More... <#acd7a0b40d37852923131e9bce68dd9ff>`__

 

Group management related methods

virtual void 

`add <../../d4/d6d/classTango_1_1Group.html#a2cbaa3bf6cecdb6fb33a387c79556e58>`__
(`Group <../../d4/d6d/classTango_1_1Group.html>`__ \*group, int
tmo\_ms=-1)

 

| Attaches a (sub) group.
`More... <#a2cbaa3bf6cecdb6fb33a387c79556e58>`__

 

virtual void 

`add <../../d4/d6d/classTango_1_1Group.html#ad0cae4533d2ab5f218d6b65748f8374f>`__
(const std::string &pattern, int tmo\_ms=-1)

 

| Attaches any device which name matches the specified pattern.
`More... <#ad0cae4533d2ab5f218d6b65748f8374f>`__

 

virtual void 

`add <../../d4/d6d/classTango_1_1Group.html#a633d0ced915368b8b084adb3a215cca5>`__
(const std::vector< std::string > &patterns, int tmo\_ms=-1)

 

| Attaches any device which name matches one of the specified pattern.
`More... <#a633d0ced915368b8b084adb3a215cca5>`__

 

virtual void 

`remove <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
(const std::string &pattern, bool fwd=true)

 

| Removes any group or device which name matches the specified pattern.
`More... <#acd7763925b6e27ccf237b13fa7f98009>`__

 

virtual void 

`remove <../../d4/d6d/classTango_1_1Group.html#a2561673c34638016106a6fba3c0b95ee>`__
(const std::vector< std::string > &patterns, bool fwd=true)

 

| Removes any group or device which name matches any of the specified
patterns. `More... <#a2561673c34638016106a6fba3c0b95ee>`__

 

virtual void 

`remove\_all <../../d4/d6d/classTango_1_1Group.html#a12404b76c3e64df47467a1260591e7df>`__
()

 

| Removes all elements in the group.
`More... <#a12404b76c3e64df47467a1260591e7df>`__

 

virtual bool 

`contains <../../d4/d6d/classTango_1_1Group.html#a2885b00242d3a2d199836e48186dd71e>`__
(const std::string &pattern, bool fwd=true)

 

| Check if the hierarchy contains groups and/or devices which name
matches the specified pattern.
`More... <#a2885b00242d3a2d199836e48186dd71e>`__

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__
(const std::string &device\_name)

 

| Returns a reference to the specified device.
`More... <#adc7d5db7e814e378bf30f940865885b8>`__

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device <../../d4/d6d/classTango_1_1Group.html#a29685f1ad173310c2cf695390cedd362>`__
(long idx)

 

| Returns a reference to the "idx-th" device in the hierarchy.
`More... <#a29685f1ad173310c2cf695390cedd362>`__

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`operator[] <../../d4/d6d/classTango_1_1Group.html#aea3b781cd10d28770cb584c55c065534>`__
(long idx)

 

| Returns a reference to the "idx-th" device in the hierarchy.
`More... <#aea3b781cd10d28770cb584c55c065534>`__

 

virtual `Group <../../d4/d6d/classTango_1_1Group.html>`__ \* 

`get\_group <../../d4/d6d/classTango_1_1Group.html#a75ddf85f5805e6e99656cbe554ecf96e>`__
(const std::string &group\_name)

 

| Returns a reference to the specified group.
`More... <#a75ddf85f5805e6e99656cbe554ecf96e>`__

 

long 

`get\_size <../../d4/d6d/classTango_1_1Group.html#a1afb6e934e20fb757538b873fef265e5>`__
(bool fwd=true)

 

| Return the number of devices in the hierarchy.
`More... <#a1afb6e934e20fb757538b873fef265e5>`__

 

std::vector< std::string > 

`get\_device\_list <../../d4/d6d/classTango_1_1Group.html#a35a3426e304c3d87607997261aff1d22>`__
(bool fwd=true)

 

| Returns the list of devices currently in the hierarchy.
`More... <#a35a3426e304c3d87607997261aff1d22>`__

 

|-| Public Member Functions inherited from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

void 

`disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__
()

 

void 

`enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__
()

 

const std::string 

`get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__
() const

 

const std::string & 

`get\_name <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__
() const

 

virtual bool 

`is\_connected <../../df/d46/classTango_1_1GroupElement.html#a5ca539735117e31e002587883e508ca5>`__
()

 

bool 

`is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__
() const

 

bool 

`name\_equals <../../df/d46/classTango_1_1GroupElement.html#ac38ec8a0666000aaeb0be72a538555f6>`__
(const std::string &n)

 

bool 

`name\_matches <../../df/d46/classTango_1_1GroupElement.html#ac59fc656076f55359d8d3b000d0940e9>`__
(const std::string &n)

 

a la Deviceproxy interface
--------------------------

virtual bool 

`ping <../../d4/d6d/classTango_1_1Group.html#aa7cd5c6f1be1a85c244c7a4ec99081ec>`__
(bool fwd=true)

 

| Ping all devices in a group.
`More... <#aa7cd5c6f1be1a85c244c7a4ec99081ec>`__

 

virtual void 

`set\_timeout\_millis <../../d4/d6d/classTango_1_1Group.html#a92242b89511557c3296480ee19b790b2>`__
(int tmo\_ms)

 

| Set client side timeout for all devices in the group.
`More... <#a92242b89511557c3296480ee19b790b2>`__

 

`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ 

`command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string &c, bool fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on a
group. `More... <#a8511861bcd0723b9e726e2bfaac6de3a>`__

 

`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ 

`command\_inout <../../d4/d6d/classTango_1_1Group.html#ab02f116ab2fcaed5850b0301dd8095a7>`__
(const std::string &c, const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d, bool
fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
the same input data on a group.
`More... <#ab02f116ab2fcaed5850b0301dd8095a7>`__

 

`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ 

`command\_inout <../../d4/d6d/classTango_1_1Group.html#ae50c9d4d35e13d374dfc22afb6f6ab01>`__
(const std::string &c, const std::vector<
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ > &d, bool
fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
the different input data on a group (Using
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ class
instances) `More... <#ae50c9d4d35e13d374dfc22afb6f6ab01>`__

 

template<typename T >

`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ 

`command\_inout <../../d4/d6d/classTango_1_1Group.html#ad54f51f9f9bbac8ad686199245274bbf>`__
(const std::string &c, const std::vector< T > &d, bool fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
the different input data on a group.
`More... <#ad54f51f9f9bbac8ad686199245274bbf>`__

 

long 

`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string &c, bool fgt=false, bool fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on
each device in the group asynchronously.
`More... <#a53d95994ae0c6e3836e33f8acef6a038>`__

 

long 

`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a2bd15b110efd88ffa47233ba4244a273>`__
(const std::string &c, const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d, bool
fgt=false, bool fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
same input data on each device in the group asynchronously.
`More... <#a2bd15b110efd88ffa47233ba4244a273>`__

 

long 

`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a592a4fbe47296a6b27a142a38bbde6e8>`__
(const std::string &c, const std::vector<
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ > &d, bool
fgt=false, bool fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
different input data (using
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object) on
each device in the group asynchronously.
`More... <#a592a4fbe47296a6b27a142a38bbde6e8>`__

 

template<typename T >

long 

`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a17b53cb8fb55e3b96d056cb9971aaab4>`__
(const std::string &c, const std::vector< T > &d, bool fgt=false, bool
fwd=true)

 

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
different input data on each device in the group asynchronously.
`More... <#a17b53cb8fb55e3b96d056cb9971aaab4>`__

 

`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ 

`command\_inout\_reply <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
(long req\_id, long tmo\_ms=0)

 

| Returns the results of an asynchronous command.
`More... <#abed06d2a84d479a13c2e98781af748e8>`__

 

`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ 

`read\_attribute <../../d4/d6d/classTango_1_1Group.html#a3c584b30ee4e69eed2de59cb548c4134>`__
(const std::string &a, bool fwd=true)

 

| Reads an attribute on each device in the group.
`More... <#a3c584b30ee4e69eed2de59cb548c4134>`__

 

`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ 

`read\_attributes <../../d4/d6d/classTango_1_1Group.html#ab4088df9970f1f1c7d6ae8c29563369f>`__
(const std::vector< std::string > &al, bool fwd=true)

 

| Reads several attributes on each device in the group.
`More... <#ab4088df9970f1f1c7d6ae8c29563369f>`__

 

long 

`read\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a08fa50b55ebad69d6fd819f658703997>`__
(const std::string &a, bool fwd=true)

 

| Reads an attribute on each device in the group asynchronously.
`More... <#a08fa50b55ebad69d6fd819f658703997>`__

 

long 

`read\_attributes\_asynch <../../d4/d6d/classTango_1_1Group.html#a9431b4c0673e3824c31b00028e894d31>`__
(const std::vector< std::string > &al, bool fwd=true)

 

| Reads several attributes on each device in the group asynchronously.
`More... <#a9431b4c0673e3824c31b00028e894d31>`__

 

`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ 

`read\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#a9c580ba756e84843f29e126efb8c1986>`__
(long req\_id, long tmo\_ms=0)

 

| Returns the results of an asynchronous attribute reading.
`More... <#a9c580ba756e84843f29e126efb8c1986>`__

 

`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ 

`read\_attributes\_reply <../../d4/d6d/classTango_1_1Group.html#ab1a83261058e5c52803e502c01380b79>`__
(long req\_id, long tmo\_ms=0)

 

| Returns the results of an asynchronous attributes reading.
`More... <#ab1a83261058e5c52803e502c01380b79>`__

 

`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ 

`write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__
(const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&d, bool fwd=true)

 

| Writes an attribute on each device in the group.
`More... <#a64da6f972d7dca15b192c66226e3d4c7>`__

 

`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ 

`write\_attribute <../../d4/d6d/classTango_1_1Group.html#ac05e427721de6903871b6c2dc505dec7>`__
(const std::vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&d, bool fwd=true)

 

| Writes several attributes on each device in the group (using
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__)
`More... <#ac05e427721de6903871b6c2dc505dec7>`__

 

template<typename T >

`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ 

`write\_attribute <../../d4/d6d/classTango_1_1Group.html#a5b513a1564a1a4f9e5482dfcef528d0c>`__
(const std::string &n, const std::vector< T > &d, bool fwd=true)

 

| Writes one attributes on each device in the group with specific value
per device. `More... <#a5b513a1564a1a4f9e5482dfcef528d0c>`__

 

long 

`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__
(const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&d, bool fwd=true)

 

| Writes an attribute on each device in the group asynchronously.
`More... <#a2ead1c134a086855da1e809aa8f13d03>`__

 

long 

`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2edbe29d80b0c686840c01bac7304197>`__
(const std::vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&d, bool fwd=true)

 

| Writes several attributes on each device in the group asynchronously.
`More... <#a2edbe29d80b0c686840c01bac7304197>`__

 

template<typename T >

long 

`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a187f0b29e02bf82b74f21b55c4252d62>`__
(const std::string &a, const std::vector< T > &d, bool fwd=true)

 

| Writes an attribute on each device in the group asynchronously
(Without
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
data) `More... <#a187f0b29e02bf82b74f21b55c4252d62>`__

 

`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ 

`write\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__
(long req\_id, long tmo\_ms=0)

 

| Returns the acknowledgements of an asynchronous attribute writing.
`More... <#aa300f78715baea10d390b7e7489e0506>`__

 

Additional Inherited Members
----------------------------

|-| Protected Member Functions inherited from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

 

`GroupElement <../../df/d46/classTango_1_1GroupElement.html#a5f9e25c3711969c3fc5fe50202a22bb9>`__
(const std::string &name,
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
\*parent=0)

 

virtual 

`~GroupElement <../../df/d46/classTango_1_1GroupElement.html#a9e4421b2ad2ad0c72dfa587b6912c811>`__
()

 

Detailed Description
--------------------

High level class allowing the user to handle
`Tango <../../de/ddf/namespaceTango.html>`__ group.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+-----------------------+-----+------------------------+----------+-----+----+
| Tango::Group::Group   | (   | const std::string &    | *name*   | )   |    |
+-----------------------+-----+------------------------+----------+-----+----+

Create a `Group <../../d4/d6d/classTango_1_1Group.html>`__ instance.

Instanciate an empty group. The group name allows retrieving a sub-group
in the hierarchy.

Parameters
    +--------+------------------+
    | name   | The group name   |
    +--------+------------------+

+--------------------------------------+--------------------------------------+
| +--------------------------------+-- | virtual                              |
| ---+----+-----+----+                 |                                      |
| | virtual Tango::Group::~Group   | ( |                                      |
|    |    | )   |    |                 |                                      |
| +--------------------------------+-- |                                      |
| ---+----+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a `Group <../../d4/d6d/classTango_1_1Group.html>`__ instance.

Delete a group and all its elements. Be aware that a group always gets
the ownership of its children and deletes themwhen it is itself deleted.
Therefore, never try to delete a
`Group <../../d4/d6d/classTango_1_1Group.html>`__ (respectively a
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__) returned
by a call to
*`Tango::Group::get\_group() <../../d4/d6d/classTango_1_1Group.html#a75ddf85f5805e6e99656cbe554ecf96e>`__*
(respectively to
*`Tango::Group::get\_device() <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__*).
Use the
*`Tango::Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__*
method instead.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | virtual                              |
| -----+------------------------------ |                                      |
| ---------------------------+-------- |                                      |
| ---------------+                     |                                      |
| | virtual void Tango::Group::add   | |                                      |
|  (   | `Group <../../d4/d6d/classTan |                                      |
| go_1_1Group.html>`__ \*    | *group* |                                      |
| ,              |                     |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------------------------+-------- |                                      |
| ---------------+                     |                                      |
| |                                  | |                                      |
|      | int                           |                                      |
|                            | *tmo\_m |                                      |
| s* = ``-1``    |                     |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------------------------+-------- |                                      |
| ---------------+                     |                                      |
| |                                  | |                                      |
|  )   |                               |                                      |
|                            |         |                                      |
|                |                     |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------------------------+-------- |                                      |
| ---------------+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Attaches a (sub) group.

Be aware that a group always gets the ownership of its children and
deletes them when it is itself deleted. Therefore, never try to delete a
`Group <../../d4/d6d/classTango_1_1Group.html>`__ attached to a
`Group <../../d4/d6d/classTango_1_1Group.html>`__. Use the
`Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
method instead. If timeout\_ms parameter is different from -1, the
client side timeout associated to each device composing the group added
is set to timeout\_ms milliseconds. If timeout\_ms is -1, timeouts are
not changed. This method does nothing if the specified group is already
attached (i.e. it is silently ignored) and timeout\_ms = -1. If the
specified group is already attached and timeout\_ms is different from
-1, the client side timeout of each device composing the group given in
parameter is set to timeout\_ms milliseconds.

Parameters
    +--------+-----------+----------------------------+
    | [in]   | group     | The group to be attached   |
    +--------+-----------+----------------------------+
    | [in]   | tmo\_ms   | The timeout value          |
    +--------+-----------+----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | virtual                              |
| -----+------------------------+----- |                                      |
| ------------------+                  |                                      |
| | virtual void Tango::Group::add   | |                                      |
|  (   | const std::string &    | *pat |                                      |
| tern*,            |                  |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------+----- |                                      |
| ------------------+                  |                                      |
| |                                  | |                                      |
|      | int                    | *tmo |                                      |
| \_ms* = ``-1``    |                  |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------+----- |                                      |
| ------------------+                  |                                      |
| |                                  | |                                      |
|  )   |                        |      |                                      |
|                   |                  |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------+----- |                                      |
| ------------------+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Attaches any device which name matches the specified pattern.

The pattern parameter can be a simple device name or a device name
pattern (e.g. domain\_\* / family/ member\_\*). This method first asks
to the `Tango <../../de/ddf/namespaceTango.html>`__ database the list of
device names matching the pattern. Devices are then attached to the
group in the order in which they are returned by the database. Any
device already present in the hierarchy (i.e. a device belonging to the
group or to one of its subgroups) is silently ignored but its client
side timeout is set to timeout\_ms milliseconds if timeout\_ms is
different from -1. Set the client side timeout of each device matching
the specified pattern to timeout\_ms milliseconds if timeout\_ms is
different from -1.

Parameters
    +--------+-----------+--------------------------------+
    | [in]   | pattern   | The device selection pattern   |
    +--------+-----------+--------------------------------+
    | [in]   | tmo\_ms   | The timeout value              |
    +--------+-----------+--------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | virtual                              |
| -----+------------------------------ |                                      |
| ---------+-----------------------+   |                                      |
| | virtual void Tango::Group::add   | |                                      |
|  (   | const std::vector< std::strin |                                      |
| g > &    | *patterns*,           |   |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------+-----------------------+   |                                      |
| |                                  | |                                      |
|      | int                           |                                      |
|          | *tmo\_ms* = ``-1``    |   |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------+-----------------------+   |                                      |
| |                                  | |                                      |
|  )   |                               |                                      |
|          |                       |   |                                      |
| +----------------------------------+ |                                      |
| -----+------------------------------ |                                      |
| ---------+-----------------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Attaches any device which name matches one of the specified pattern.

The patterns parameter can be an array of device names and/or device
name patterns. Thismethod first asks to the
`Tango <../../de/ddf/namespaceTango.html>`__ database the list of device
namesmatching one the patterns. Devices are then attached to the group
in the order in which they are returned by the database. Any device
already present in the hierarchy (i.e. a device belonging to the group
or to one of its subgroups), is silently ignored but its client side
timeout is set to timeout\_ms milliseconds if timeout\_ms is different
from -1. If timeout\_ms is different from -1, the client side timeouts
of all devices matching the specified patterns are set to timeout\_ms
milliseconds.

Parameters
    +--------+------------+-------------------------------------+
    | [in]   | patterns   | The device selection pattern list   |
    +--------+------------+-------------------------------------+
    | [in]   | tmo\_ms    | The timeout value                   |
    +--------+------------+-------------------------------------+

+----------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
| `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ Tango::Group::command\_inout   | (   | const std::string &    | *c*,                |
+----------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
|                                                                                                          |     | bool                   | *fwd* = ``true``    |
+----------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
|                                                                                                          | )   |                        |                     |
+----------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on a
group.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on a
group. This method is synchronous and does not return until replies are
obtained or timeouts occurred. The parameter c is the name of the
command. If fwd is set to true (the default), the request is also
forwarded to subgroups. Otherwise, it is only applied to the local set
of devices. `Command <../../d2/d1d/classTango_1_1Command.html>`__
results are returned in a
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__.
See Obtaining command result for details (Chapter 4.7.3.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__).
See also Case 1 of executing a command (Chapter 4.7.3.2 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------+
    | [in]   | c     | The command name   |
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    The group command result

+----------------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------+---------------------+
| `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ Tango::Group::command\_inout   | (   | const std::string &                                                    | *c*,                |
+----------------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------+---------------------+
|                                                                                                          |     | const `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &    | *d*,                |
+----------------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------+---------------------+
|                                                                                                          |     | bool                                                                   | *fwd* = ``true``    |
+----------------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------+---------------------+
|                                                                                                          | )   |                                                                        |                     |
+----------------------------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------+---------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with the
same input data on a group.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group. This method is synchronous and does not return
until replies are obtained or timeouts occurred. The parameter c is the
name of the command. The second parameter d is a
`Tango <../../de/ddf/namespaceTango.html>`__ generic container for
command carrying the command argument. See the
`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
documentation. If fwd is set to true (the default), the request is also
forwarded to subgroups. Otherwise, it is only applied to the local set
of devices. `Command <../../d2/d1d/classTango_1_1Command.html>`__
results are returned in a
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__.
See Obtaining command results (Chapter 4.7.3.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 2 of executing a command (Chapter 4.7.3.4 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------+
    | [in]   | c     | The command name   |
    +--------+-------+--------------------+
    | [in]   | d     | The command data   |
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    The group command result

+----------------------------------------------------------------------------------------------------------+-----+---------------------------------------------------------------------------------------+---------------------+
| `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ Tango::Group::command\_inout   | (   | const std::string &                                                                   | *c*,                |
+----------------------------------------------------------------------------------------------------------+-----+---------------------------------------------------------------------------------------+---------------------+
|                                                                                                          |     | const std::vector< `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ > &    | *d*,                |
+----------------------------------------------------------------------------------------------------------+-----+---------------------------------------------------------------------------------------+---------------------+
|                                                                                                          |     | bool                                                                                  | *fwd* = ``true``    |
+----------------------------------------------------------------------------------------------------------+-----+---------------------------------------------------------------------------------------+---------------------+
|                                                                                                          | )   |                                                                                       |                     |
+----------------------------------------------------------------------------------------------------------+-----+---------------------------------------------------------------------------------------+---------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with the
different input data on a group (Using
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ class
instances)

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on
each device in the group. This method is synchronous and does not return
until replies are obtained or timeouts occurred. This implementation of
command\_inout allows passing a specific input argument to each device
in the group. In order to use this form of command\_inout, the user must
have an "a priori" and "perfect" knowledge of the devices order in the
group.
|  The parameter c is the name of the command. The std::vector d
contains a specific argument value for each device in the group. Its
size must equal Group::get\_size(fwd). Otherwise, an exception is
thrown. The order of the argument values must follows the order of the
devices in the group (d[0] => 1st device, d[1] => 2nd device and so on).
If fwd is set to true (the default), the request is also forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
`Command <../../d2/d1d/classTango_1_1Command.html>`__ results are
returned in a
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__.
See Obtaining command results (Chpater 4.7.3.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 3 of executing a command (Chapter 4.7.3.5 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example of this special form of command\_inout.

Parameters
    +--------+-------+--------------------+
    | [in]   | c     | The command name   |
    +--------+-------+--------------------+
    | [in]   | d     | The command data   |
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    The group command result

template<typename T >

+----------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
| `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ Tango::Group::command\_inout   | (   | const std::string &         | *c*,                |
+----------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                          |     | const std::vector< T > &    | *d*,                |
+----------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                          |     | bool                        | *fwd* = ``true``    |
+----------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                          | )   |                             |                     |
+----------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with the
different input data on a group.

| Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on
each device in the group. This method is synchronous and does not return
until replies are obtained or timeouts occurred. This implementation of
command\_inout allows passing a specific input argument to each device
in the group. In order to use this form of command\_inout, the user must
have an "a priori" and "perfect" knowledge of the devices order in the
group.
|  The parameter c is the name of the command. The std::vector d
contains a specific argument value for each device in the group. Since
this method is a template, d is able to contain any
`Tango <../../de/ddf/namespaceTango.html>`__ command argument type. Its
size must equal Group::get\_size(fwd). Otherwise, an exception is
thrown. The order of the argument values must follows the order of the
devices in the group (d[0] => 1st device, d[1] => 2nd device and so on).
If fwd is set to true (the default), the request is also forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
`Command <../../d2/d1d/classTango_1_1Command.html>`__ results are
returned in a
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__.
See Obtaining command results (Chpater 4.7.3.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 3 of executing a command (Chapter 4.7.3.5 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example of this special form of command\_inout.

Template Parameters
    +-----+-------------------------------+
    | T   | The command input data type   |
    +-----+-------------------------------+

Parameters
    +--------+-------+--------------------+
    | [in]   | c     | The command name   |
    +--------+-------+--------------------+
    | [in]   | d     | The command data   |
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    The group command result

+---------------------------------------------+-----+------------------------+----------------------+
| long Tango::Group::command\_inout\_asynch   | (   | const std::string &    | *c*,                 |
+---------------------------------------------+-----+------------------------+----------------------+
|                                             |     | bool                   | *fgt* = ``false``,   |
+---------------------------------------------+-----+------------------------+----------------------+
|                                             |     | bool                   | *fwd* = ``true``     |
+---------------------------------------------+-----+------------------------+----------------------+
|                                             | )   |                        |                      |
+---------------------------------------------+-----+------------------------+----------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group asynchronously.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group asynchronously. The method sends the request to all
devices and returns immediately. Pass the returned request id to
`Group::command\_inout\_reply() <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
to obtain the results. The parameter c is the name of the command. The
parameter fgt is a fire and forget flag. If set to true, it means that
no reply is expected (i.e. the caller does not care about it and will
not even try to get it). A false default value is provided. If the
parameter fwd is set to true (the default) request is forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
See Case 1 of Executing a command (Chapter 4.7.3.2 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------+
    | [in]   | c     | The command name   |
    +--------+-------+--------------------+
    | [in]   | fgt   | The command data   |
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    The call identifier

+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+
| long Tango::Group::command\_inout\_asynch   | (   | const std::string &                                                    | *c*,                 |
+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+
|                                             |     | const `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &    | *d*,                 |
+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+
|                                             |     | bool                                                                   | *fgt* = ``false``,   |
+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+
|                                             |     | bool                                                                   | *fwd* = ``true``     |
+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+
|                                             | )   |                                                                        |                      |
+---------------------------------------------+-----+------------------------------------------------------------------------+----------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
same input data on each device in the group asynchronously.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group asynchronously. The method sends the request to all
devices and returns immediately. Pass the returned request id to
`Group::command\_inout\_reply() <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
to obtain the results. The parameter c is the name of the command. The
second parameter d is a `Tango <../../de/ddf/namespaceTango.html>`__
generic container for command carrying the command argument. See the
`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
documentation for details. The parameter fgt is a fire and forget flag.
If set to true, it means that no reply is expected (i.e. the caller does
not care about it and will not even try to get it). A false default
value is provided. If the parameter fwd is set to true (the default)
request is forwarded to subgroups. Otherwise, it is only applied to the
local set of devices. See Case 2 of Executing a command (Chapter 4.7.3.4
in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------------+
    | [in]   | c     | The command name         |
    +--------+-------+--------------------------+
    | [in]   | d     | The command input data   |
    +--------+-------+--------------------------+
    | [in]   | fgt   | The command data         |
    +--------+-------+--------------------------+
    | [in]   | fwd   | The forward flag         |
    +--------+-------+--------------------------+

Returns
    The call identifier

+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+
| long Tango::Group::command\_inout\_asynch   | (   | const std::string &                                                                   | *c*,                 |
+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+
|                                             |     | const std::vector< `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ > &    | *d*,                 |
+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+
|                                             |     | bool                                                                                  | *fgt* = ``false``,   |
+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+
|                                             |     | bool                                                                                  | *fwd* = ``true``     |
+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+
|                                             | )   |                                                                                       |                      |
+---------------------------------------------+-----+---------------------------------------------------------------------------------------+----------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
different input data (using
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object) on
each device in the group asynchronously.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group asynchronously. The method send the request to all
devices and return immediately. Pass the returned request id to
`Group::command\_inout\_reply <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
to obtain the results. This implementation of command\_inout allows
passing a specific input argument to each device in the group. In order
to use this form of command\_inout\_asynch, the user must have an "a
priori" and "perfect" knowledge of the devices order in the group. The
parameter c is the name of the command. The std::vector d contains a
specific argument value for each device in the group. Its size must
equal Group::get\_size(fwd). Otherwise, an exception is thrown. The
order of the argument values must follows the order of the devices in
the group (d[0] => 1st device, d[1] => 2nd device and so on). The
parameter fgt is a fire and forget flag. If set to true, it means that
no reply is expected (i.e. the caller does not care about it and will
not even try to get it). A false default value is provided. If fwd is
set to true (the default), the request is also forwarded to subgroups.
Otherwise, it is only applied to the local set of devices. See Case 3 of
Executing a command (Chapter 4.7.3.5 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example of this special form of command\_inout.

Parameters
    +--------+-------+--------------------------+
    | [in]   | c     | The command name         |
    +--------+-------+--------------------------+
    | [in]   | d     | The command input data   |
    +--------+-------+--------------------------+
    | [in]   | fgt   | The command data         |
    +--------+-------+--------------------------+
    | [in]   | fwd   | The forward flag         |
    +--------+-------+--------------------------+

Returns
    The call identifier

template<typename T >

+---------------------------------------------+-----+-----------------------------+----------------------+
| long Tango::Group::command\_inout\_asynch   | (   | const std::string &         | *c*,                 |
+---------------------------------------------+-----+-----------------------------+----------------------+
|                                             |     | const std::vector< T > &    | *d*,                 |
+---------------------------------------------+-----+-----------------------------+----------------------+
|                                             |     | bool                        | *fgt* = ``false``,   |
+---------------------------------------------+-----+-----------------------------+----------------------+
|                                             |     | bool                        | *fwd* = ``true``     |
+---------------------------------------------+-----+-----------------------------+----------------------+
|                                             | )   |                             |                      |
+---------------------------------------------+-----+-----------------------------+----------------------+

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command with
different input data on each device in the group asynchronously.

Executes a `Tango <../../de/ddf/namespaceTango.html>`__ command on each
device in the group asynchronously. The method send the request to all
devices and return immediately. Pass the returned request id to
`Group::command\_inout\_reply <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
to obtain the results. This implementation of command\_inout allows
passing a specific input argument to each device in the group. In order
to use this form of command\_inout\_asynch, the user must have an "a
priori" and "perfect" knowledge of the devices order in the group. The
parameter c is the name of the command. The std::vector d contains a
specific argument value for each device in the group. Since it's a
template data type, d is able to contain any
`Tango <../../de/ddf/namespaceTango.html>`__ command argument type. Its
size must equal Group::get\_size(fwd). Otherwise, an exception is
thrown. The order of the argument values must follows the order of the
devices in the group (d[0] => 1st device, d[1] => 2nd device and so on).
The parameter fgt is a fire and forget flag. If set to true, it means
that no reply is expected (i.e. the caller does not care about it and
will not even try to get it). A false default value is provided. If fwd
is set to true (the default), the request is also forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
See Case 3 of Executing a command (Chapter 4.7.3.5 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example of this special form of command\_inout.

Template Parameters
    +-----+-------------------------------+
    | T   | The command input data type   |
    +-----+-------------------------------+

Parameters
    +--------+-------+--------------------------+
    | [in]   | c     | The command name         |
    +--------+-------+--------------------------+
    | [in]   | d     | The command input data   |
    +--------+-------+--------------------------+
    | [in]   | fgt   | The command data         |
    +--------+-------+--------------------------+
    | [in]   | fwd   | The forward flag         |
    +--------+-------+--------------------------+

Returns
    The call identifier

+-----------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
| `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ Tango::Group::command\_inout\_reply   | (   | long    | *req\_id*,           |
+-----------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                 |     | long    | *tmo\_ms* = ``0``    |
+-----------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                 | )   |         |                      |
+-----------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+

Returns the results of an asynchronous command.

Returns the results of an asynchronous command. The first parameter
req\_id is a request identifier previously returned by one of the
command\_inout\_asynch methods. For each device in the hierarchy, if the
command result is not yet available, command\_inout\_replywait
timeout\_ms milliseconds before throwing an exception. This exception
will be part of the global reply. If timeout\_ms is set to 0,
command\_inout\_reply waits "indefinitely".
`Command <../../d2/d1d/classTango_1_1Command.html>`__ results are
returned in a
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__.
See Obtaining command results (Chapter 4.7.3.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details.

Parameters
    +--------+-----------+--------------------------+
    | [in]   | req\_id   | The request identifier   |
    +--------+-----------+--------------------------+
    | [in]   | tmo\_ms   | The timeout value        |
    +--------+-----------+--------------------------+

Returns
    The group command result

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----+-----+------------------------+ |                                      |
| ---------------------+               |                                      |
| | virtual bool Tango::Group::contain |                                      |
| s   | (   | const std::string &    | |                                      |
|  *pattern*,          |               |                                      |
| +----------------------------------- |                                      |
| ----+-----+------------------------+ |                                      |
| ---------------------+               |                                      |
| |                                    |                                      |
|     |     | bool                   | |                                      |
|  *fwd* = ``true``    |               |                                      |
| +----------------------------------- |                                      |
| ----+-----+------------------------+ |                                      |
| ---------------------+               |                                      |
| |                                    |                                      |
|     | )   |                        | |                                      |
|                      |               |                                      |
| +----------------------------------- |                                      |
| ----+-----+------------------------+ |                                      |
| ---------------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the hierarchy contains groups and/or devices which name matches
the specified pattern.

Returns true if the hierarchy contains groups and/or devices which name
matches the specified pattern. Returns false otherwise. The pattern can
be a fully qualified or simple group name, a device name or a device
name pattern. If fwd is set to true (the default), the request is also
forwarded to subgroups. Otherwise, it is only applied to the local set
of elements.

Parameters
    +--------+-----------+--------------------------------+
    | [in]   | pattern   | The device selection pattern   |
    +--------+-----------+--------------------------------+
    | [in]   | fwd       | The forward flag               |
    +--------+-----------+--------------------------------+

Returns
    True if the hierarchy contains the element

Reimplemented from
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#a64f031e079125a08bdab73d21c906c86>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+------------------------+-------- |                                      |
| ----------+-----+----+               |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::Group::get\_device   | (  |                                      |
|   | const std::string &    | *device |                                      |
| \_name*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+------------------------+-------- |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a reference to the specified device.

Returns a reference to the specified device or NULL if there is no
device by that name in the group. This method may throw an exception in
case the specified device belongs to the group but can’t be reached (not
registered, down...). See example below. See also the
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
class documentation for details.

try

{

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dp = g->get\_device("my/device/01");

if (dp == 0)

{

// my/device/01 does not belongs to the group

}

}

catch (const Tango::DevFailed &df)

{

// my/device/01 belongs to the group but can’t be reached

}

The request is systematically forwarded to subgroups (i.e. if no device
named device\_name could be found in the local set of devices, the
request is forwarded to subgroups). Be aware that a group always gets
the ownership of its children and deletes them when it is itself
deleted. Therefore, never try to delete a
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ returned
by the
`Group::get\_device() <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__\ method.
Use the
`Tango::Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
method instead.

Parameters
    +--------+----------------+-------------------+
    | [in]   | device\_name   | The device name   |
    +--------+----------------+-------------------+

Returns
    True if the hierarchy contains the element

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+---------+-----+----+   |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::Group::get\_device   | (  |                                      |
|   | long    | *idx*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+---------+---------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a reference to the "idx-th" device in the hierarchy.

Returns a reference to the "idx-th" device in the hierarchy or NULL if
the hierarchy contains less than "idx" devices. This method may throw an
exception in case the specified device belongs to the group but can’t be
reached (not registered, down...). See previous example. See also the
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
class documentation for details. The request is systematically forwarded
to subgroups (i.e. if the local set of devices contains less than "idx"
devices, the request is forwarded to subgroups). Be aware that a group
always gets the ownership of its children and deletes them when it is
itself deleted. Therefore, never try to delete a
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ returned
by the
`Group::get\_device() <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__\ method.
Use the
`Tango::Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
method instead.

Parameters
    +--------+-------+-------------------+
    | [in]   | idx   | The device name   |
    +--------+-------+-------------------+

Returns
    device reference

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#ab40d45bdf475f9e4ea51ab855e38bf91>`__.

+------------------------------------------------------------+-----+---------+--------------------+-----+----+
| std::vector<std::string> Tango::Group::get\_device\_list   | (   | bool    | *fwd* = ``true``   | )   |    |
+------------------------------------------------------------+-----+---------+--------------------+-----+----+

Returns the list of devices currently in the hierarchy.

Returns the list of devices currently in the hierarchy. If fwd is set to
true (the default) the request is forwarded to subgroups. Otherwise, it
is only applied to the local set of devices. Considering the following
hierarchy:

g2->add("my/device/04"); g2->add("my/device/05");

g4->add("my/device/08"); g4->add("my/device/09");

g3->add("my/device/06");

g3->addg(g4);

g3->add("my/device/07");

g1->add("my/device/01");

g1->add(g2);

g1->add("my/device/03");

g1->add(g3);

g1->add("my/device/02");

The returned vector content depends on the value of the forward option.
If set to true, the results will be organized as follows:

std::vector<std::string> dl = g1->get\_device\_list(true);

| dl[0] contains "my/device/01" which belongs to g1
|  dl[1] contains "my/device/04" which belongs to g1.g2
|  dl[2] contains "my/device/05" which belongs to g1.g2
|  dl[3] contains "my/device/03" which belongs to g1
|  dl[4] contains "my/device/06" which belongs to g1.g3
|  dl[5] contains "my/device/08" which belongs to g1.g3.g4
|  dl[6] contains "my/device/09" which belongs to g1.g3.g4
|  dl[7] contains "my/device/07" which belongs to g1.g3
|  dl[8] contains "my/device/02" which belongs to g1
| 
|  If the forward option is set to false, the results are:

std::vector<std::string> dl = g1->get\_device\_list(false);

| dl[0] contains "my/device/01" which belongs to g1
|  dl[1] contains "my/device/03" which belongs to g1
|  dl[2] contains "my/device/02" which belongs to g1

Parameters
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    group size

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| -------------------+-----+---------- |                                      |
| --------------+-----------------+--- |                                      |
| --+----+                             |                                      |
| | virtual `Group <../../d4/d6d/class |                                      |
| Tango_1_1Group.html>`__\ \* Tango::G |                                      |
| roup::get\_group   | (   | const std |                                      |
| ::string &    | *group\_name*   | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------+-----+---------- |                                      |
| --------------+-----------------+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a reference to the specified group.

Returns a reference to the specified group or NULL if there is no group
by that name. The group\_name can be a fully qualified name. Considering
the following group:

.. code:: fragment

    -> gauges
       | -> cell-01
       |     | -> penning
       |     |     | -> ...
       |     | -> pirani
       |     |     | -> ...
       | -> cell-02
       |     | -> penning
       |     |     | -> ...
       |     | -> pirani
       |     |     | -> ...
       | -> cell-03
       |     | -> ...

A call to gauges->get\_group("penning") returns the first group named
"penning" in the hierarchy (i.e. gauges.cell-01.penning)while
gauges->get\_group("gauges.cell-02.penning”) returns the specified
group. The request is systematically forwarded to subgroups (i.e. if no
group named group\_name could be found in the local set of elements, the
request is forwarded to subgroups). Be aware that a group always gets
the ownership of its children and deletes them when it is itself
deleted. Therefore, never try to delete a
`Group <../../d4/d6d/classTango_1_1Group.html>`__ returned by the
`Group::get\_group() <../../d4/d6d/classTango_1_1Group.html#a75ddf85f5805e6e99656cbe554ecf96e>`__
method. Use the
`Tango::Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
method instead.

Parameters
    +--------+---------------+------------------+
    | [in]   | group\_name   | The group name   |
    +--------+---------------+------------------+

Returns
    group pointer

+--------------------------------+-----+---------+--------------------+-----+----+
| long Tango::Group::get\_size   | (   | bool    | *fwd* = ``true``   | )   |    |
+--------------------------------+-----+---------+--------------------+-----+----+

Return the number of devices in the hierarchy.

Return the number of devices in the hierarchy (respectively the number
of device in the group) if the forward option is set to true
(respectively set to false)

Parameters
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    group size

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------+---------+-----+----+    |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::Group::operator[]   | (   |                                      |
|  | long    | *idx*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+---------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a reference to the "idx-th" device in the hierarchy.

Returns a reference to the "idx-th" device in the hierarchy or NULL if
the hierarchy contains less than "idx" devices. See the
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
class documentation for details. The request is systematically forwarded
to subgroups (i.e. if the local set of devices contains less than "idx"
devices, the request is forwarded to subgroups). Be aware that a group
always gets the ownership of its children and deletes them when it is
itself deleted. Therefore, never try to delete a
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ returned
by the
`Group::get\_device() <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__\ method.
Use the
`Tango::Group::remove() <../../d4/d6d/classTango_1_1Group.html#acd7763925b6e27ccf237b13fa7f98009>`__
method instead.

Parameters
    +--------+-------+-------------------+
    | [in]   | idx   | The device name   |
    +--------+-------+-------------------+

Returns
    device reference

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#aef54618c81a0042334be5c13d0326346>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| +-----+---------+------------------- |                                      |
| -+-----+----+                        |                                      |
| | virtual bool Tango::Group::ping    |                                      |
| | (   | bool    | *fwd* = ``true``   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| +-----+---------+------------------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Ping all devices in a group.

Ping all devices in a group. This method returns true if all devices in
the group are alive, false otherwise. If fwd is set to true (the
default), the request is also forwarded to subgroups. Otherwise, it is
only applied to the local set of devices.

Parameters
    +--------+-------+--------------------+
    | [in]   | fwd   | The forward flag   |
    +--------+-------+--------------------+

Returns
    True if all devices are alive

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#ab004b0e82f6a7cd7db714ca42b3b1d8a>`__.

+-------------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
| `GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ Tango::Group::read\_attribute   | (   | const std::string &    | *a*,                |
+-------------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
|                                                                                                             |     | bool                   | *fwd* = ``true``    |
+-------------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+
|                                                                                                             | )   |                        |                     |
+-------------------------------------------------------------------------------------------------------------+-----+------------------------+---------------------+

Reads an attribute on each device in the group.

Reads an attribute on each device in the group. This method is
synchronous and does not return until replies are obtained or timeouts
occurred. The parameter a is the name of the attribute to read. If fwd
is set to true (the default) request is forwarded to subgroups.
Otherwise, it is only applied to the local set of devices.
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ values are
returned in a
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__.
See Obtaining attribute values (Chapter 4.7.4.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Reading an attribute (Chapter 4.7.4 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+----------------------+
    | [in]   | a     | The attribute name   |
    +--------+-------+----------------------+
    | [in]   | fwd   | The forward flag     |
    +--------+-------+----------------------+

Returns
    The group attribute data

+----------------------------------------------+-----+------------------------+---------------------+
| long Tango::Group::read\_attribute\_asynch   | (   | const std::string &    | *a*,                |
+----------------------------------------------+-----+------------------------+---------------------+
|                                              |     | bool                   | *fwd* = ``true``    |
+----------------------------------------------+-----+------------------------+---------------------+
|                                              | )   |                        |                     |
+----------------------------------------------+-----+------------------------+---------------------+

Reads an attribute on each device in the group asynchronously.

Reads an attribute on each device in the group asynchronously. The
method sends the request to all devices and returns immediately. Pass
the returned request id to
`Group::read\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#a9c580ba756e84843f29e126efb8c1986>`__
to obtain the results. The parameter a is the name of the attribute to
read. If fwd is set to true (the default) request is forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
The last parameter (rsv) is reserved for internal purpose and should not
be modify. It may disappear in a near future. See Reading an attribute
(Chapter 4.7.4 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+----------------------+
    | [in]   | a     | The attribute name   |
    +--------+-------+----------------------+
    | [in]   | fwd   | The forward flag     |
    +--------+-------+----------------------+

Returns
    The call identifier

+--------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
| `GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ Tango::Group::read\_attribute\_reply   | (   | long    | *req\_id*,           |
+--------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                    |     | long    | *tmo\_ms* = ``0``    |
+--------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                    | )   |         |                      |
+--------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+

Returns the results of an asynchronous attribute reading.

Returns the results of an asynchronous attribute reading. The first
parameter req\_id is a request identifier previously returned by
read\_attribute\_asynch. For each device in the hierarchy, if the
attribute value is not yet available, read\_attribute\_reply wait
timeout\_ms milliseconds before throwing an exception. This exception
will be part of the global reply. If timeout\_ms is set to 0,
read\_attribute\_reply waits "indefinitely". Replies are returned in a
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__.
See Obtaining attribute values (Chapter 4.7.4.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details

Parameters
    +--------+-----------+---------------------------+
    | [in]   | req\_id   | The attribute name list   |
    +--------+-----------+---------------------------+
    | [in]   | tmo\_ms   | The timeout value         |
    +--------+-----------+---------------------------+

Returns
    The group attribute data

+--------------------------------------------------------------------------------------------------------------+-----+---------------------------------------+---------------------+
| `GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ Tango::Group::read\_attributes   | (   | const std::vector< std::string > &    | *al*,               |
+--------------------------------------------------------------------------------------------------------------+-----+---------------------------------------+---------------------+
|                                                                                                              |     | bool                                  | *fwd* = ``true``    |
+--------------------------------------------------------------------------------------------------------------+-----+---------------------------------------+---------------------+
|                                                                                                              | )   |                                       |                     |
+--------------------------------------------------------------------------------------------------------------+-----+---------------------------------------+---------------------+

Reads several attributes on each device in the group.

Reads several attributes on each device in the group. This method is
synchronous and does not return until replies are obtained or timeouts
occurred. The parameter al is the list of attributes to be read. If fwd
is set to true (the default) request is forwarded to subgroups.
Otherwise, it is only applied to the local set of devices.
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ values are
returned in a
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__.
See Obtaining attribute values (Chapter 4.7.4.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Reading an attribute (Chapter 4.7.4 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+---------------------------+
    | [in]   | al    | The attribute name list   |
    +--------+-------+---------------------------+
    | [in]   | fwd   | The forward flag          |
    +--------+-------+---------------------------+

Returns
    The group attribute data

+-----------------------------------------------+-----+---------------------------------------+---------------------+
| long Tango::Group::read\_attributes\_asynch   | (   | const std::vector< std::string > &    | *al*,               |
+-----------------------------------------------+-----+---------------------------------------+---------------------+
|                                               |     | bool                                  | *fwd* = ``true``    |
+-----------------------------------------------+-----+---------------------------------------+---------------------+
|                                               | )   |                                       |                     |
+-----------------------------------------------+-----+---------------------------------------+---------------------+

Reads several attributes on each device in the group asynchronously.

Reads several attribute on each device in the group asynchronously. The
method sends the request to all devices and returns immediately. Pass
the returned request id to
`Group::read\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#a9c580ba756e84843f29e126efb8c1986>`__
to obtain the results. The parameter a is the name of the attribute to
read. If fwd is set to true (the default) request is forwarded to
subgroups. Otherwise, it is only applied to the local set of devices.
The last parameter (rsv) is reserved for internal purpose and should not
be modify. It may disappear in a near future. See Reading an attribute
(Chapter 4.7.4 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+---------------------------+
    | [in]   | al    | The attribute name list   |
    +--------+-------+---------------------------+
    | [in]   | fwd   | The forward flag          |
    +--------+-------+---------------------------+

Returns
    The call identifier

+---------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
| `GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ Tango::Group::read\_attributes\_reply   | (   | long    | *req\_id*,           |
+---------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                     |     | long    | *tmo\_ms* = ``0``    |
+---------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                                     | )   |         |                      |
+---------------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+

Returns the results of an asynchronous attributes reading.

Returns the results of an asynchronous attributes reading. The first
parameter req\_id is a request identifier previously returned by
read\_attribute\_asynch. For each device in the hierarchy, if the
attribute value is not yet available, read\_attribute\_reply wait
timeout\_ms milliseconds before throwing an exception. This exception
will be part of the global reply. If timeout\_ms is set to 0,
read\_attribute\_reply waits "indefinitely". Replies are returned in a
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__.
See Obtaining attribute values (Chapter 4.7.4.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details

Parameters
    +--------+-----------+---------------------------+
    | [in]   | req\_id   | The attribute name list   |
    +--------+-----------+---------------------------+
    | [in]   | tmo\_ms   | The timeout value         |
    +--------+-----------+---------------------------+

Returns
    The group attribute data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --+-----+------------------------+-- |                                      |
| -------------------+                 |                                      |
| | virtual void Tango::Group::remove  |                                      |
|   | (   | const std::string &    | * |                                      |
| pattern*,          |                 |                                      |
| +----------------------------------- |                                      |
| --+-----+------------------------+-- |                                      |
| -------------------+                 |                                      |
| |                                    |                                      |
|   |     | bool                   | * |                                      |
| fwd* = ``true``    |                 |                                      |
| +----------------------------------- |                                      |
| --+-----+------------------------+-- |                                      |
| -------------------+                 |                                      |
| |                                    |                                      |
|   | )   |                        |   |                                      |
|                    |                 |                                      |
| +----------------------------------- |                                      |
| --+-----+------------------------+-- |                                      |
| -------------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Removes any group or device which name matches the specified pattern.

The pattern parameter can be a group name, a device name or a device
name pattern (e.g domain\_\* /family/member\_\*). Since we can have
groups with the same name in the hierarchy, a group name can be fully
qualified to specify which group should be removed. Considering the
following group:

.. code:: fragment

     -> gauges
        | -> cell-01
        |     | -> penning
        |     |     | -> ...
        |     | -> pirani
        |     |     | -> ...
        | -> cell-02
        |     | -> penning
        |     |     | -> ...
        |     | -> pirani
        |     |     | -> ...
        | -> cell-03
        |     | -> ...

A call to gauges->remove("penning") will remove any group named
"penning" in the hierarchy while
gauges->remove("gauges.cell-02.penning") will only remove the specified
group. If fwd is set to true (the default), the remove request is also
forwarded to subgroups. Otherwise, it is only applied to the local set
of elements. For instance, the following code remove any stepper motor
in the hierarchy:

root\_group->remove("\*/stepper\_motor/\*");

\*

Parameters
    +--------+-----------+--------------------------------+
    | [in]   | pattern   | The device selection pattern   |
    +--------+-----------+--------------------------------+
    | [in]   | fwd       | The forward flag               |
    +--------+-----------+--------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --+-----+--------------------------- |                                      |
| ------------+---------------------+  |                                      |
| | virtual void Tango::Group::remove  |                                      |
|   | (   | const std::vector< std::st |                                      |
| ring > &    | *patterns*,         |  |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------+---------------------+  |                                      |
| |                                    |                                      |
|   |     | bool                       |                                      |
|             | *fwd* = ``true``    |  |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------+---------------------+  |                                      |
| |                                    |                                      |
|   | )   |                            |                                      |
|             |                     |  |                                      |
| +----------------------------------- |                                      |
| --+-----+--------------------------- |                                      |
| ------------+---------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Removes any group or device which name matches any of the specified
patterns.

The patterns parameter can be an array of group names and/or device
names and/or device name patterns. Since we can have groups with the
same name in the hierarchy, a group name can be fully qualified to
specify which group should be removed. See previous method for details.
If fwd is set to true (the default), the remove request is also
forwarded to subgroups. Otherwise, it is only applied to the local set
of elements.

Parameters
    +--------+------------+---------------------------------+
    | [in]   | patterns   | The device selection patterns   |
    +--------+------------+---------------------------------+
    | [in]   | fwd        | The forward flag                |
    +--------+------------+---------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------+-----+----+-----+----+       |                                      |
| | virtual void Tango::Group::remove\ |                                      |
| _all   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Removes all elements in the group.

Removes all elements in the group. After such a call, the group is
empty.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------+-----+--------+---- |                                      |
| ---------+-----+----+                |                                      |
| | virtual void Tango::Group::set\_ti |                                      |
| meout\_millis   | (   | int    | *tm |                                      |
| o\_ms*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+--------+---- |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set client side timeout for all devices in the group.

Set client side timeout for all devices composing the group in
milliseconds. Any method which takes longer than this time to execute
will throw an exception.

Parameters
    +--------+-----------+---------------------+
    | [in]   | tmo\_ms   | The timeout value   |
    +--------+-----------+---------------------+

Implements
`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html#aa4ed03d3347901cecadbeff4c9b465a3>`__.

+------------------------------------------------------------------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
| `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ Tango::Group::write\_attribute   | (   | const `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ &    | *d*,                |
+------------------------------------------------------------------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
|                                                                                                      |     | bool                                                                             | *fwd* = ``true``    |
+------------------------------------------------------------------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
|                                                                                                      | )   |                                                                                  |                     |
+------------------------------------------------------------------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+

Writes an attribute on each device in the group.

Writes an attribute on each device in the group. This method is
synchronous and does not return until acknowledgements are obtained or
timeouts occurred. The first parameter d is a
`Tango <../../de/ddf/namespaceTango.html>`__ generic container for
attribute carrying both the attribute name and the value. See the
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
documentation for details. If fwd is set to true (the default) request
is forwarded to subgroups. Otherwise, it is only applied to the local
set of devices. Acknowledgements are returned in a
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__. See
Obtaining acknowledgements (Chapter 4.7.5.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 1 of Writing an attribute (Chapter 4.7.5.2 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------------------+
    | [in]   | d     | The attribute name and value   |
    +--------+-------+--------------------------------+
    | [in]   | fwd   | The forward flag               |
    +--------+-------+--------------------------------+

Returns
    The group reply

+------------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
| `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ Tango::Group::write\_attribute   | (   | const std::vector< `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ > &    | *d*,                |
+------------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
|                                                                                                      |     | bool                                                                                            | *fwd* = ``true``    |
+------------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
|                                                                                                      | )   |                                                                                                 |                     |
+------------------------------------------------------------------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+

Writes several attributes on each device in the group (using
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__)

Writes several attributes on each device in the group. This method is
synchronous and does not return until acknowledgements are obtained or
timeouts occurred. The first parameter d is a vector of
`Tango <../../de/ddf/namespaceTango.html>`__ generic container for
attribute carrying both the attribute name and the value. See the
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
documentation for details. If fwd is set to true (the default) request
is forwarded to subgroups. Otherwise, it is only applied to the local
set of devices. Acknowledgements are returned in a
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__. See
Obtaining acknowledgements (Chapter 4.7.5.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 2 of Writing an attribute (Chapter 4.7.5.3 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+----------------------------------+
    | [in]   | d     | The attribute names and values   |
    +--------+-------+----------------------------------+
    | [in]   | fwd   | The forward flag                 |
    +--------+-------+----------------------------------+

Returns
    The group reply

template<typename T >

+------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
| `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ Tango::Group::write\_attribute   | (   | const std::string &         | *n*,                |
+------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                      |     | const std::vector< T > &    | *d*,                |
+------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                      |     | bool                        | *fwd* = ``true``    |
+------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+
|                                                                                                      | )   |                             |                     |
+------------------------------------------------------------------------------------------------------+-----+-----------------------------+---------------------+

Writes one attributes on each device in the group with specific value
per device.

Writes an attribute on each device in the group. This method is
synchronous and does not return until replies are obtained or timeouts
occurred. This implementation of write\_attribute allows writing a
specific value to each device in the group. In order to use this form of
write\_attribute, the user must have an "a priori" and "perfect"
knowledge of the devices order in the group. The parameter a is the name
of the attribute. The std::vector d contains a specific value for each
device in the group. Since this method is a template, d is able to
contain any `Tango <../../de/ddf/namespaceTango.html>`__ attribute type.
Its size must equal Group::get\_size(fwd). Otherwise, an exception is
thrown. The order of the attribute values must follows the order of the
devices in the group (d[0] => 1st device, d[1] => 2nd device and so on).
If fwd is set to true (the default) request is forwarded to subgroups.
Otherwise, it is only applied to the local set of devices.
Acknowledgements are returned in a
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__. See
Obtaining acknowledgements (Chapter 4.7.5.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details. See also Case 2 of Writing an attribute (Chapter 4.7.5.3 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Template Parameters
    +-----+---------------------------+
    | T   | The attribute data type   |
    +-----+---------------------------+

Parameters
    +--------+-------+----------------------------------+
    | [in]   | n     | The attribute name               |
    +--------+-------+----------------------------------+
    | [in]   | d     | The attribute names and values   |
    +--------+-------+----------------------------------+
    | [in]   | fwd   | The forward flag                 |
    +--------+-------+----------------------------------+

Returns
    The group reply

References
`write\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__.

+-----------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
| long Tango::Group::write\_attribute\_asynch   | (   | const `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ &    | *d*,                |
+-----------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
|                                               |     | bool                                                                             | *fwd* = ``true``    |
+-----------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+
|                                               | )   |                                                                                  |                     |
+-----------------------------------------------+-----+----------------------------------------------------------------------------------+---------------------+

Writes an attribute on each device in the group asynchronously.

Write an attribute on each device in the group asynchronously. The
method sends the request to all devices and returns immediately. Pass
the returned request id to
`Group::write\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__
to obtain the acknowledgements. The first parameter d is a
`Tango <../../de/ddf/namespaceTango.html>`__ generic container for
attribute carrying both the attribute name and the value. See the
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
documentation for details. If fwd is set to true (the default) request
is forwarded to subgroups. Otherwise, it is only applied to the local
set of devices. See Case 1 of Writing an attribute (Chapter 4.7.5.2 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------------------+
    | [in]   | d     | The attribute name and value   |
    +--------+-------+--------------------------------+
    | [in]   | fwd   | The forward flag               |
    +--------+-------+--------------------------------+

Returns
    The call identifier

+-----------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
| long Tango::Group::write\_attribute\_asynch   | (   | const std::vector< `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ > &    | *d*,                |
+-----------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
|                                               |     | bool                                                                                            | *fwd* = ``true``    |
+-----------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+
|                                               | )   |                                                                                                 |                     |
+-----------------------------------------------+-----+-------------------------------------------------------------------------------------------------+---------------------+

Writes several attributes on each device in the group asynchronously.

Write several attributes on each device in the group asynchronously. The
method sends the request to all devices and returns immediately. Pass
the returned request id to
`Group::write\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__
to obtain the acknowledgements. The first parameter d is a vector of
`Tango <../../de/ddf/namespaceTango.html>`__ generic container for
attribute carrying both the attribute name and the value. See the
`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
documentation for details. If fwd is set to true (the default) request
is forwarded to subgroups. Otherwise, it is only applied to the local
set of devices. See Case 1 of Writing an attribute (Chapter 4.7.5.2 in
`Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Parameters
    +--------+-------+--------------------------------+
    | [in]   | d     | The attribute name and value   |
    +--------+-------+--------------------------------+
    | [in]   | fwd   | The forward flag               |
    +--------+-------+--------------------------------+

Returns
    The call identifier

template<typename T >

+-----------------------------------------------+-----+-----------------------------+---------------------+
| long Tango::Group::write\_attribute\_asynch   | (   | const std::string &         | *a*,                |
+-----------------------------------------------+-----+-----------------------------+---------------------+
|                                               |     | const std::vector< T > &    | *d*,                |
+-----------------------------------------------+-----+-----------------------------+---------------------+
|                                               |     | bool                        | *fwd* = ``true``    |
+-----------------------------------------------+-----+-----------------------------+---------------------+
|                                               | )   |                             |                     |
+-----------------------------------------------+-----+-----------------------------+---------------------+

Writes an attribute on each device in the group asynchronously (Without
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
data)

Writes an attribute on each device in the group asynchronously. The
method sends the request to all devices and returns immediately. Pass
the returned request id to
`Group::write\_attribute\_reply() <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__
to obtain the acknowledgements. This implementation of
write\_attribute\_asynch allows writing a specific value to each device
in the group. In order to use this form of write\_attribute\_asynch, the
user must have an "a priori" and "perfect" knowledge of the devices
order in the group. The parameter a is the name of the attribute. The
std::vector d contains a specific value for each device in the group.
Since this method is a template, d is able to contain any
`Tango <../../de/ddf/namespaceTango.html>`__ attribute type. Its size
must equal Group::get\_size(fwd). Otherwise, an exception is thrown. The
order of the attribute values must follows the order of the devices in
the group (d[0] => 1st device, d[1] => 2nd device and so on). If fwd is
set to true (the default) request is forwarded to subgroups. Otherwise,
it is only applied to the local set of devices. See Case2 of Writing an
attribute (Chapter 4.7.5.3 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for an example.

Template Parameters
    +-----+---------------------------+
    | T   | The attribute data type   |
    +-----+---------------------------+

Parameters
    +--------+-------+--------------------------+
    | [in]   | a     | The attribute name       |
    +--------+-------+--------------------------+
    | [in]   | d     | The attribute value(s)   |
    +--------+-------+--------------------------+
    | [in]   | fwd   | The forward flag         |
    +--------+-------+--------------------------+

Returns
    The call identifier

+-------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
| `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ Tango::Group::write\_attribute\_reply   | (   | long    | *req\_id*,           |
+-------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                             |     | long    | *tmo\_ms* = ``0``    |
+-------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+
|                                                                                                             | )   |         |                      |
+-------------------------------------------------------------------------------------------------------------+-----+---------+----------------------+

Returns the acknowledgements of an asynchronous attribute writing.

Returns the acknowledgements of an asynchronous attribute writing. The
first parameter req\_id is a request identifier previously returned by
one of the write\_attribute\_asynch implementation. For each device in
the hierarchy, if the acknowledgement is not yet available,
write\_attribute\_replywait timeout\_ms milliseconds before throwing an
exception. This exception will be part of the global reply. If
timeout\_ms is set to 0, write\_attribute\_reply waits "indefinitely".
Acknowledgements are returned in a
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__. See
Obtaining acknowledgements (Chapter 4.7.5.1 in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__)
for details.

Parameters
    +--------+-----------+--------------------------+
    | [in]   | req\_id   | The request identifier   |
    +--------+-----------+--------------------------+
    | [in]   | tmo\_ms   | The timeout value        |
    +--------+-----------+--------------------------+

Returns
    The attribute writing acknowledgements

Referenced by
`write\_attribute() <../../d4/d6d/classTango_1_1Group.html#a5b513a1564a1a4f9e5482dfcef528d0c>`__.

--------------

The documentation for this class was generated from the following file:

-  `group.h <../../d9/dd1/group_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Group <../../d4/d6d/classTango_1_1Group.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/db2/classTango_1_1Group__inherit__graph.png
.. |Collaboration graph| image:: ../../d7/d74/classTango_1_1Group__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
