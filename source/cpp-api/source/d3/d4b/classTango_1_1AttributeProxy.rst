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
members <../../dd/d68/classTango_1_1AttributeProxy-members.html>`__

Tango::AttributeProxy Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Easy to use interface to `Tango <../../de/ddf/namespaceTango.html>`__
device attribute.
`More... <../../d3/d4b/classTango_1_1AttributeProxy.html#details>`__

Public Member Functions
-----------------------

Constructors

 

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
(string
&\ `name <../../d3/d4b/classTango_1_1AttributeProxy.html#a8cb7eb5b0f09011511a35a04a4d5851c>`__)

 

| Create a
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
object. `More... <#af54cba1f887abb8ef36db5a5a477b5d9>`__

 

 

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#ab8a6da05eb30b76b144557c8e20c5e81>`__
(const char
\*\ `name <../../d3/d4b/classTango_1_1AttributeProxy.html#a8cb7eb5b0f09011511a35a04a4d5851c>`__)

 

| Create a
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
object. `More... <#ab8a6da05eb30b76b144557c8e20c5e81>`__

 

Miscellaneous methods

virtual string 

`name <../../d3/d4b/classTango_1_1AttributeProxy.html#a8cb7eb5b0f09011511a35a04a4d5851c>`__
()

 

| Get attribute name. `More... <#a8cb7eb5b0f09011511a35a04a4d5851c>`__

 

virtual `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\* 

`get\_device\_proxy <../../d3/d4b/classTango_1_1AttributeProxy.html#ae52a9e07a42cf0479aea39f158e957f2>`__
()

 

| Get associated
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance.
`More... <#ae52a9e07a42cf0479aea39f158e957f2>`__

 

virtual string 

`status <../../d3/d4b/classTango_1_1AttributeProxy.html#a35c1411340ef0947044930bd794c78c8>`__
()

 

| Get device status. `More... <#a35c1411340ef0947044930bd794c78c8>`__

 

virtual DevState 

`state <../../d3/d4b/classTango_1_1AttributeProxy.html#a7b6e44665cbe3795fdf51c1bdfcc3455>`__
()

 

| Get device state. `More... <#a7b6e44665cbe3795fdf51c1bdfcc3455>`__

 

virtual int 

`ping <../../d3/d4b/classTango_1_1AttributeProxy.html#a25983273509110295635516dc154129c>`__
()

 

| Ping the device. `More... <#a25983273509110295635516dc154129c>`__

 

Synchronous methods

virtual
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ 

`get\_config <../../d3/d4b/classTango_1_1AttributeProxy.html#aa226b2ffd4e1919880e8a14f52851a79>`__
()

 

| Get attribute configuration.
`More... <#aa226b2ffd4e1919880e8a14f52851a79>`__

 

virtual void 

`set\_config <../../d3/d4b/classTango_1_1AttributeProxy.html#ad9ccb65756c54f27a84a35d8bea654ae>`__
(`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__ &ai)

 

| Set attribute configuration.
`More... <#ad9ccb65756c54f27a84a35d8bea654ae>`__

 

virtual void 

`set\_config <../../d3/d4b/classTango_1_1AttributeProxy.html#a3dc74f8be387f704f4a44e14431b8adf>`__
(`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
&ai)

 

| Set extended attribute configuration.
`More... <#a3dc74f8be387f704f4a44e14431b8adf>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ 

`read <../../d3/d4b/classTango_1_1AttributeProxy.html#a75523bd6d6703569a1ad769f1020059b>`__
()

 

| Read attribute value. `More... <#a75523bd6d6703569a1ad769f1020059b>`__

 

virtual void 

`write <../../d3/d4b/classTango_1_1AttributeProxy.html#af0614580818b32ff4939b013341b754a>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&da)

 

| Write attribute value.
`More... <#af0614580818b32ff4939b013341b754a>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ 

`write\_read <../../d3/d4b/classTango_1_1AttributeProxy.html#a593a50120f54f4678764237f5214b9f9>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&da)

 

| Write the Read attribute value.
`More... <#a593a50120f54f4678764237f5214b9f9>`__

 

| virtual vector
|  <
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
> \* 

`history <../../d3/d4b/classTango_1_1AttributeProxy.html#abf8c234ac15a83f8f6699fcb6d963f94>`__
(int depth)

 

| Get attribute history from polling buffer.
`More... <#abf8c234ac15a83f8f6699fcb6d963f94>`__

 

Asynchronous methods

virtual long 

`read\_asynch <../../d3/d4b/classTango_1_1AttributeProxy.html#a5dcb9de15ebbcb991bc372e7ade13b93>`__
()

 

| Read attribute value asynchronously in polling model.
`More... <#a5dcb9de15ebbcb991bc372e7ade13b93>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\* 

`read\_reply <../../d3/d4b/classTango_1_1AttributeProxy.html#afd2e7b7eeb40986f62970448b7031c8d>`__
(long id)

 

| Get asynchronous read attribute call reply.
`More... <#afd2e7b7eeb40986f62970448b7031c8d>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\* 

`read\_reply <../../d3/d4b/classTango_1_1AttributeProxy.html#af375564aa69d17d8797974ba96e35800>`__
(long id, long to)

 

| Get asynchronous read attribute call reply with timeout.
`More... <#af375564aa69d17d8797974ba96e35800>`__

 

virtual long 

`write\_asynch <../../d3/d4b/classTango_1_1AttributeProxy.html#a68b5e779eab3bddad719e1037210625b>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&da)

 

| Write attribute value asynchrnously in polling model.
`More... <#a68b5e779eab3bddad719e1037210625b>`__

 

virtual void 

`write\_reply <../../d3/d4b/classTango_1_1AttributeProxy.html#a372f8ccd607388b0d83276fbb2f65c6d>`__
(long id)

 

| Get asynchronous write attribute call reply.
`More... <#a372f8ccd607388b0d83276fbb2f65c6d>`__

 

virtual void 

`write\_reply <../../d3/d4b/classTango_1_1AttributeProxy.html#a49230d67f6d95ecc595df8603702f487>`__
(long id, long to)

 

| Get asynchronous write attribute call reply with timeout.
`More... <#a49230d67f6d95ecc595df8603702f487>`__

 

virtual void 

`read\_asynch <../../d3/d4b/classTango_1_1AttributeProxy.html#a46974f7849cce49aa8c136f7b3268a35>`__
(`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Read attribute asynchronously in callback model.
`More... <#a46974f7849cce49aa8c136f7b3268a35>`__

 

virtual void 

`write\_asynch <../../d3/d4b/classTango_1_1AttributeProxy.html#ae6ed266f3a4e48a3fc7232aded5d2127>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&da, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Write attribute asynchronously in callback model.
`More... <#ae6ed266f3a4e48a3fc7232aded5d2127>`__

 

Polling related methods

virtual bool 

`is\_polled <../../d3/d4b/classTango_1_1AttributeProxy.html#a22e280c80b96332363b35d43e1c0813d>`__
()

 

| Check if the attribute is polled.
`More... <#a22e280c80b96332363b35d43e1c0813d>`__

 

virtual int 

`get\_poll\_period <../../d3/d4b/classTango_1_1AttributeProxy.html#a9d25e3cec680c7bac3c80f7f0b4dc340>`__
()

 

| Get attribute polling period.
`More... <#a9d25e3cec680c7bac3c80f7f0b4dc340>`__

 

virtual void 

`poll <../../d3/d4b/classTango_1_1AttributeProxy.html#a9fdd4897974bf3a0012d992c2a074bbe>`__
(int period)

 

| Set attribute polling period.
`More... <#a9fdd4897974bf3a0012d992c2a074bbe>`__

 

virtual void 

`stop\_poll <../../d3/d4b/classTango_1_1AttributeProxy.html#a7d37e8d470f459d11708d25e73c41504>`__
()

 

| Stop attribute polling.
`More... <#a7d37e8d470f459d11708d25e73c41504>`__

 

Event related methods

virtual int 

`subscribe\_event <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__
(`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb)

 

| Subscribe to attribute event.
`More... <#aec123c01ade81f0bb04d79a1c88235f6>`__

 

virtual int 

`subscribe\_event <../../d3/d4b/classTango_1_1AttributeProxy.html#a2a24802356f63dc5bc8b45671e7413aa>`__
(`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb,
bool stateless)

 

| Stateless subscription to attribute event.
`More... <#a2a24802356f63dc5bc8b45671e7413aa>`__

 

virtual int 

`subscribe\_event <../../d3/d4b/classTango_1_1AttributeProxy.html#a0ef45f45590ab6508afab0db55c00823>`__
(`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, int
`event\_queue\_size <../../d3/d4b/classTango_1_1AttributeProxy.html#a149cf6bb79d1e0a9c066395b7b286e4d>`__,
bool stateless=false)

 

| Stateless subscription to attribute event with event queue.
`More... <#a0ef45f45590ab6508afab0db55c00823>`__

 

virtual void 

`unsubscribe\_event <../../d3/d4b/classTango_1_1AttributeProxy.html#ae53bb772bd5c55030baa7be4abebe899>`__
(int ev\_id)

 

| Unsubsribe to attribute event.
`More... <#ae53bb772bd5c55030baa7be4abebe899>`__

 

virtual void 

`get\_events <../../d3/d4b/classTango_1_1AttributeProxy.html#ae318688c635207dc084b843726c9fdab>`__
(int event\_id, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*cb)

 

| Get events from event queue (pull model)
`More... <#ae318688c635207dc084b843726c9fdab>`__

 

virtual void 

`get\_events <../../d3/d4b/classTango_1_1AttributeProxy.html#aa02afc4bb9c01566c31927860568ffdd>`__
(int event\_id,
`EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__
&event\_list)

 

| Get events from event queue (pull model)
`More... <#aa02afc4bb9c01566c31927860568ffdd>`__

 

virtual void 

`get\_events <../../d3/d4b/classTango_1_1AttributeProxy.html#a557787a6f0f8dbfad3d3746cd00761ac>`__
(int event\_id,
`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__
&event\_list)

 

| Get events from event queue (pull model)
`More... <#a557787a6f0f8dbfad3d3746cd00761ac>`__

 

virtual int 

`event\_queue\_size <../../d3/d4b/classTango_1_1AttributeProxy.html#a149cf6bb79d1e0a9c066395b7b286e4d>`__
(int event\_id)

 

| Get events number in queue.
`More... <#a149cf6bb79d1e0a9c066395b7b286e4d>`__

 

virtual TimeVal 

`get\_last\_event\_date <../../d3/d4b/classTango_1_1AttributeProxy.html#a88b91e0189b350080975a60b3b90595c>`__
(int event\_id)

 

| Get last event date. `More... <#a88b91e0189b350080975a60b3b90595c>`__

 

virtual bool 

`is\_event\_queue\_empty <../../d3/d4b/classTango_1_1AttributeProxy.html#a8a058915ddab00f20210db286d92ba0b>`__
(int event\_id)

 

| Check if the event queue is empty.
`More... <#a8a058915ddab00f20210db286d92ba0b>`__

 

Property related methods

virtual void 

`get\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#ad6e69af1b3948d3d0941dd8940e3823c>`__
(string &prop\_name,
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get single attribute property.
`More... <#ad6e69af1b3948d3d0941dd8940e3823c>`__

 

virtual void 

`get\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#aca240e15843814bc1ea2afa2ddd818b6>`__
(vector< string > &prop\_names,
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get multiple attribute property.
`More... <#aca240e15843814bc1ea2afa2ddd818b6>`__

 

virtual void 

`get\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#ac1ad69efff76d9ef5cd69aa9d84b3520>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get attribute property(ies)
`More... <#ac1ad69efff76d9ef5cd69aa9d84b3520>`__

 

virtual void 

`put\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#a289096fa30a6f359fee3264135b18521>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Put attribute property(ies)
`More... <#a289096fa30a6f359fee3264135b18521>`__

 

virtual void 

`delete\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#ac6b4497b44f0668640c308e404d2eef7>`__
(string &prop\_name)

 

| Delete a single attribute property.
`More... <#ac6b4497b44f0668640c308e404d2eef7>`__

 

virtual void 

`delete\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#aef5a44a64e5d0c435a38f7163bbe2b98>`__
(vector< string > &prop\_names)

 

| Delete a list of attribute property.
`More... <#aef5a44a64e5d0c435a38f7163bbe2b98>`__

 

virtual void 

`delete\_property <../../d3/d4b/classTango_1_1AttributeProxy.html#a5c070a4ba0a3635b5556b0b169576719>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Delete attribute property(ies)
`More... <#a5c070a4ba0a3635b5556b0b169576719>`__

 

Detailed Description
--------------------

Easy to use interface to `Tango <../../de/ddf/namespaceTango.html>`__
device attribute.

The high level object which provides the client with an easy-to-use
interface to TANGO device attributes.
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__ is a
handle to the real attribute (hence the name Proxy) and is not the real
attribute (of course). The
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
manages timeouts, stateless connections (new
`AttributeProxy() <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
nearly always works), and reconnection if the device server is
restarted.

Author
    taurel

Revision
    1

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+-------------+----------+-----+----+
| Tango::AttributeProxy::AttributeProxy   | (   | string &    | *name*   | )   |    |
+-----------------------------------------+-----+-------------+----------+-----+----+

Create a
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
object.

Create an
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__ to
an attribute of the specified name. The constructor will connect to the
TANGO database, query for the device to which the attribute belongs to
network address and build a connection to this device. If the device to
which the attribute belongs to is defined in the TANGO database but the
device server is not running,
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__ will
try to build a connection every time the client tries to access the
attribute. If an alias name is defined for the attribute, this alias
name can be used to create the
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
instance. If a device name alias is defined for the device, it can be
used instead of the three fields device name. If the device to which the
attribute belongs to is not defined in the database, an exception is
thrown. Examples :

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
\*my\_attr = new
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__\ ("my/own/device/attr");

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
\*my\_attr\_bis = new
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__\ ("attr\_alias");

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
\*my\_attr\_ter = new
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__\ ("dev\_alias/attr");

Parameters
    +--------+--------+----------------------+
    | [in]   | name   | The attribute name   |
    +--------+--------+----------------------+

+-----------------------------------------+-----+------------------+----------+-----+----+
| Tango::AttributeProxy::AttributeProxy   | (   | const char \*    | *name*   | )   |    |
+-----------------------------------------+-----+------------------+----------+-----+----+

Create a
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
object.

Idem previous constructor

Parameters
    +--------+--------+----------------------+
    | [in]   | name   | The attribute name   |
    +--------+--------+----------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| -----+----------------+-----+----+   |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::delete\_property   | (   | string  |                                      |
| &    | *prop\_name*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -----+----------------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete a single attribute property.

Delete a single property for an attribute. The property to delete is
specified as a string. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`delete\_property() <../../d3/d4b/classTango_1_1AttributeProxy.html#ac6b4497b44f0668640c308e404d2eef7>`__
and DbData sections for details on the DbData type.

Parameters
    +--------+--------------+---------------------+
    | [in]   | prop\_name   | The property name   |
    +--------+--------------+---------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+-- |                                      |
| ---+----+                            |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::delete\_property   | (   | vector< |                                      |
|  string > &    | *prop\_names*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete a list of attribute property.

Delete a list of properties for an attribute. The properties to delete
are specified as a vector of strings. Refer to
`DbDevice::get\_property() <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
and DbData sections for details on the DbData type.

Parameters
    +--------+---------------+-----------------------+
    | [in]   | prop\_names   | The properties name   |
    +--------+---------------+-----------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+--------+-----+----+          |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::delete\_property   | (   | `DbData |                                      |
|  <../../de/ddf/namespaceTango.html#a |                                      |
| 99fa459235396b406532406b562984c0>`__ |                                      |
|  &    | *db*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+--------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete attribute property(ies)

Delete property(ies) for an attribute. Properties to delete are
specified using the DbData type. Refer to
`DbDevice::get\_property() <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
and DbData sections for details.

Parameters
    +--------+------+-----------------------+
    | [in]   | db   | The properties name   |
    +--------+------+-----------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------------+-----+------- |                                      |
| -+---------------+-----+----+        |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :event\_queue\_size   | (   | int    |                                      |
|  | *event\_id*   | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+------- |                                      |
| -+---------------+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get events number in queue.

Returns the number of stored events in the event reception buffer. After
every call to
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__:`get\_events() <../../d3/d4b/classTango_1_1AttributeProxy.html#ae318688c635207dc084b843726c9fdab>`__,
the event queue size is 0. During event subscription the client must
have chosen the pull model for this event. event\_id is the event
identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    The event number in the queue

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+----+-----+----+    |                                      |
| | virtual `AttributeInfoEx <../../d3 |                                      |
| /d71/structTango_1_1AttributeInfoEx. |                                      |
| html>`__ Tango::AttributeProxy::get\ |                                      |
| _config   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute configuration.

Return the attribute configuration

Returns
    The attribute configuration data

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
| | virtual `DeviceProxy <../../d9/d83 |                                      |
| /classTango_1_1DeviceProxy.html>`__\ |                                      |
|  \* Tango::AttributeProxy::get\_devi |                                      |
| ce\_proxy   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get associated
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance.

Returns the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance
used to communicate with the device to which the attributes belongs

Returns
    The underlying
    `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ object

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+     |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_events   | (   | int          |                                      |
|                                      |                                      |
|               | *event\_id*,   |     |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+     |                                      |
| |                                    |                                      |
|                 |     | `CallBack <. |                                      |
| ./../d4/ded/classTango_1_1CallBack.h |                                      |
| tml>`__ \*    | *cb*           |     |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+     |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|                                      |                                      |
|               |                |     |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get events from event queue (pull model)

The method extracts all waiting events from the event reception buffer
and executes the callback method cb for every event. During event
subscription the client must have chosen the pull model for this event.
event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+
    | [in]   | cb          | The event callback     |
    +--------+-------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| ------+                              |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_events   | (   | int          |                                      |
|                                      |                                      |
|                        | *event\_id* |                                      |
| ,     |                              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                 |     | `EventDataLi |                                      |
| st <../../d3/d57/classTango_1_1Event |                                      |
| DataList.html>`__ &    | *event\_lis |                                      |
| t*    |                              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|                                      |                                      |
|                        |             |                                      |
|       |                              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get events from event queue (pull model)

The method extracts all waiting events from the event reception buffer.
The returned event\_list is a vector of
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ pointers. The
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ object
contains the event information as for the callback methods. During event
subscription the client must have chosen the pull model for this event.
event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event list         |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_events   | (   | int          |                                      |
|                                      |                                      |
|                                      |                                      |
|    | *event\_id*,     |              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| |                                    |                                      |
|                 |     | `AttrConfEve |                                      |
| ntDataList <../../d5/d4a/classTango_ |                                      |
| 1_1AttrConfEventDataList.html>`__ &  |                                      |
|    | *event\_list*    |              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|                                      |                                      |
|                                      |                                      |
|    |                  |              |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get events from event queue (pull model)

The method extracts all waiting attribute configuration events from the
event reception buffer. The returned event\_list is a vector of
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
pointers. The
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
object contains the event information as for the callback methods.
During event subscription the client must have chosen the pull model for
this event. event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event list         |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------+----- |                                      |
| +--------+---------------+-----+---- |                                      |
| +                                    |                                      |
| | virtual TimeVal Tango::AttributePr |                                      |
| oxy::get\_last\_event\_date   | (    |                                      |
| | int    | *event\_id*   | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------+----- |                                      |
| +--------+---------------+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get last event date.

Returns the arrival time of the last event stored in the event reception
buffer. After every call to
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__:`get\_events() <../../d3/d4b/classTango_1_1AttributeProxy.html#ae318688c635207dc084b843726c9fdab>`__,
the event reception buffer is empty. In this case an exception will be
returned. During event subscription the client must have chosen the pull
model for this event. event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    The last event date

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :get\_poll\_period   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute polling period.

Returns the attribute polling period in mS. If the attribute is not
polled, it returns 0.

Returns
    The polling period

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----------------+               |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_property   | (   | string &   |                                      |
|                                      |                                      |
|                                      |                                      |
|    | *prop\_name*,   |               |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----------------+               |                                      |
| |                                    |                                      |
|                   |     | `DbData <. |                                      |
| ./../de/ddf/namespaceTango.html#a99f |                                      |
| a459235396b406532406b562984c0>`__ &  |                                      |
|    | *db*            |               |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----------------+               |                                      |
| |                                    |                                      |
|                   | )   |            |                                      |
|                                      |                                      |
|                                      |                                      |
|    |                 |               |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get single attribute property.

Get a single property for the attribute. The property to get is
specified as a string. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`get\_property() <../../d3/d4b/classTango_1_1AttributeProxy.html#ad6e69af1b3948d3d0941dd8940e3823c>`__
and DbData sections for details on the DbData type.

Parameters
    +---------+--------------+---------------------+
    | [in]    | prop\_name   | The property name   |
    +---------+--------------+---------------------+
    | [out]   | db           | Property value      |
    +---------+--------------+---------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_property   | (   | vector< st |                                      |
| ring > &                             |                                      |
|                                      |                                      |
|    | *prop\_names*,   |              |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| |                                    |                                      |
|                   |     | `DbData <. |                                      |
| ./../de/ddf/namespaceTango.html#a99f |                                      |
| a459235396b406532406b562984c0>`__ &  |                                      |
|    | *db*             |              |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
| |                                    |                                      |
|                   | )   |            |                                      |
|                                      |                                      |
|                                      |                                      |
|    |                  |              |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get multiple attribute property.

Get a list of properties for the attribute. The properties to get are
specified as a vector of strings. Refer to
`DbDevice::get\_property() <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
and DbData sections for details on the DbData type.

Parameters
    +---------+---------------+----------------------+
    | [in]    | prop\_names   | The property names   |
    +---------+---------------+----------------------+
    | [out]   | db            | Properties value     |
    +---------+---------------+----------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::get\_property   | (   | `DbData <. |                                      |
| ./../de/ddf/namespaceTango.html#a99f |                                      |
| a459235396b406532406b562984c0>`__ &  |                                      |
|    | *db*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute property(ies)

Get property(ies) for the attribute. Properties to get are specified
using the DbData type. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`get\_property() <../../d3/d4b/classTango_1_1AttributeProxy.html#ad6e69af1b3948d3d0941dd8940e3823c>`__
and DbData sections for details.

Parameters
    +------------+------+--------------------+
    | [in,out]   | db   | Properties value   |
    +------------+------+--------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+--------+-----------+-----+----+   |                                      |
| | virtual vector<`DeviceAttributeHis |                                      |
| tory <../../d8/d41/classTango_1_1Dev |                                      |
| iceAttributeHistory.html>`__\ >\* Ta |                                      |
| ngo::AttributeProxy::history   | (   |                                      |
|  | int    | *depth*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+--------+-----------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute history from polling buffer.

Retrieve attribute history from the attribute polling buffer. The
argument is the wanted history depth. This method returns a vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
types. This method allocates memory for the vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
returned to the caller. It is the caller responsibility to delete this
memory. See `Tango <../../de/ddf/namespaceTango.html>`__ book chapter on
Advanced Feature for all details regarding polling.

`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__
attr = new
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html#af54cba1f887abb8ef36db5a5a477b5d9>`__\ ("my/own/device/Current");

vector<DeviceAttributeHistory> \*hist;

hist = attr->history(5);

for (int i = 0;i < 5;i++)

{

bool fail = (\*hist)[i].has\_failed();

if (fail == false)

{

cout << "Attribute name = " << (\*hist)[i].get\_name() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Attribute quality factor = " << (\*hist)[i].get\_quality() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

long value;

(\*hist)[i] >> value;

cout << "Current = " << value <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

else

{

cout << "Attribute failed !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Error level 0 desc = " <<
((\*hist)[i].get\_err\_stack())[0].desc << endl;

}

cout << "Date = " << (\*hist)[i].get\_date().tv\_sec <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+---------+------------------------------+
    | [in]   | depth   | The required history depth   |
    +--------+---------+------------------------------+

Returns
    The attribute value history

Exceptions
    +-----------------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,NonSupportedFeature,DevFailed   | from device   |
    +-----------------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------------------+-----+- |                                      |
| -------+---------------+-----+----+  |                                      |
| | virtual bool Tango::AttributeProxy |                                      |
| ::is\_event\_queue\_empty   | (   |  |                                      |
| int    | *event\_id*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ----------------------------+-----+- |                                      |
| -------+---------------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the event queue is empty.

Returns true when the event reception buffer is empty. During event
subscription the client must have chosen the pull model for this event.
event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__\ method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    The event queue empty flag

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual bool Tango::AttributeProxy |                                      |
| ::is\_polled   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is polled.

Returns true if the attribute is polled. Otherwise, returns false.

Returns
    Boolean true id the attribute is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------+-----+----+-----+----+   |                                      |
| | virtual string Tango::AttributePro |                                      |
| xy::name   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute name.

Returns the attribute name

Returns
    The attribute name

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------+-----+----+-----+----+      |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :ping   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Ping the device.

A method which sends a ping to the device to which the attribute belongs
and returns the time elapsed in microseconds. Example :

cout << "device ping took " << my\_device->ping() << “ microseconds” <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    Time needed by the ping call

Exceptions
    +-----------------------------------------+----+
    | ConnectionFailed,CommunnicationFailed   |    |
    +-----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------+-----+--------+----------- |                                      |
| -+-----+----+                        |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::poll   | (   | int    | *period*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+--------+----------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute polling period.

Add the attribute to the list of polled attributes. The polling period
is specified by "period" (in mS). If the attribute is already polled,
this method will update the polling period according to "period".

Parameters
    +--------+----------+----------------------+
    | [in]   | period   | The polling period   |
    +--------+----------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::put\_property   | (   | `DbData <. |                                      |
| ./../de/ddf/namespaceTango.html#a99f |                                      |
| a459235396b406532406b562984c0>`__ &  |                                      |
|    | *db*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Put attribute property(ies)

Put property(ies) for an attribute. Properties to put are specified
using the DbData type. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`put\_property() <../../d3/d4b/classTango_1_1AttributeProxy.html#a289096fa30a6f359fee3264135b18521>`__
and DbData sections for details.

Parameters
    +------------+------+--------------------+
    | [in,out]   | db   | Properties value   |
    +------------+------+--------------------+

Exceptions
    +--------------------------------------------------------------+-----------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database   |
    +--------------------------------------------------------------+-----------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ Tango::AttributeProxy::read  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read attribute value.

Read the attribute. To extract the value you have to use the operator of
the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double
(this will return 0) you have to extract it as a short.

Returns
    The attribute value

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
| | virtual long Tango::AttributeProxy |                                      |
| ::read\_asynch   | (   |    | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read attribute value asynchronously in polling model.

Read the attribute asynchronously (polling model). This call returns an
asynchronous call identifier which is needed to get the attribute value.

Returns
    The asynchronous call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| --------------+--------+-----+----+  |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::read\_asynch   | (   | `CallBack < |                                      |
| ../../d4/ded/classTango_1_1CallBack. |                                      |
| html>`__ &    | *cb*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| --------------+--------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read attribute asynchronously in callback model.

Read the attribute asynchronously using the callback model. The argument
is a reference to a callback object. This callback object should be an
instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the attr\_read() method overloaded.

Parameters
    +--------+------+-----------------------+
    | [in]   | cb   | The callback object   |
    +--------+------+-----------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| --+-----+----+                       |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__\ \* Tango::AttributeProxy::r |                                      |
| ead\_reply   | (   | long    | *id*  |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get asynchronous read attribute call reply.

Check if the answer of an asynchronous read is arrived (polling model).
id is the asynchronous call identifier. If the reply is arrived and if
it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. If the reply is an exception, it is re-thrown by this call. An
exception is also thrown in case of the reply is not yet arrived. To
extract attribute value, you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+------+-------------------------------+
    | [in]   | id   | The asynchronous identifier   |
    +--------+------+-------------------------------+

Returns
    The attribute value

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| ---+                                 |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__\ \* Tango::AttributeProxy::r |                                      |
| ead\_reply   | (   | long    | *id*, |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|              |     | long    | *to*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|              | )   |         |       |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+------ |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get asynchronous read attribute call reply with timeout.

Check if the answer of an asynchronous read is arrived (polling model).
id is the asynchronous call identifier. If the reply is arrived and if
it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. If the reply is an exception, it is re-thrown by this call. If
the reply is not yet arrived, the call will wait (blocking the process)
for the time specified in timeout. If after timeout milliseconds, the
reply is still not there, an exception is thrown. If timeout is set to
0, the call waits until the reply arrived. To extract attribute value,
you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+------+-------------------------------+
    | [in]   | id   | The asynchronous identifier   |
    +--------+------+-------------------------------+
    | [in]   | to   | The timeout value             |
    +--------+------+-------------------------------+

Returns
    The attribute value

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------+--------+-- |                                      |
| ---+----+                            |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::set\_config   | (   | `AttributeIn |                                      |
| fo <../../df/dab/structTango_1_1Attr |                                      |
| ibuteInfo.html>`__ &    | *ai*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------+--------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute configuration.

Change the attribute configuration.

Parameters
    +--------+------+----------------------------------------+
    | [in]   | ai   | The new attribute configuration data   |
    +--------+------+----------------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

**`Deprecated: <../../da/d58/deprecated.html#_deprecated000003>`__**
    Use the
    `set\_config() <../../d3/d4b/classTango_1_1AttributeProxy.html#ad9ccb65756c54f27a84a35d8bea654ae>`__
    method with
    `AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
    parameter data type

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -+-----+----+                        |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::set\_config   | (   | `AttributeIn |                                      |
| foEx <../../d3/d71/structTango_1_1At |                                      |
| tributeInfoEx.html>`__ &    | *ai*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set extended attribute configuration.

Change the attribute configuration.

Parameters
    +--------+------+-------------------------------------------------+
    | [in]   | ai   | The new extended attribute configuration data   |
    +--------+------+-------------------------------------------------+

Exceptions
    +---------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevFailed   | from device   |
    +---------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | virtual DevState Tango::AttributeP |                                      |
| roxy::state   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device state.

A method which returns the state of the device to which the attribute
belongs to. This state is returned as a Tango::DevState type. Example :

dev\_state = my\_attr->state() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The underlying device state

Exceptions
    +-----------------------------------------+----+
    | ConnectionFailed,CommunnicationFailed   |    |
    +-----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+----+-----+----+ |                                      |
| | virtual string Tango::AttributePro |                                      |
| xy::status   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device status.

A method which return the status of the device to which the attribute
belongs to. The status is returned as a string. Example :

cout << "device status: " << my\_attr->status() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    The underlying device status

Exceptions
    +-----------------------------------------+----+
    | ConnectionFailed,CommunnicationFailed   |    |
    +-----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::stop\_poll   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop attribute polling.

Remove attribute from the list of polled attributes.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :subscribe\_event   | (   | `EventTy |                                      |
| pe <../../d1/d45/group__Client.html# |                                      |
| ga5366e2a8cedf5aab5be8835974f787c6>` |                                      |
| __    | *event*,   |                 |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| |                                    |                                      |
|                     |     | `CallBac |                                      |
| k <../../d4/ded/classTango_1_1CallBa |                                      |
| ck.html>`__ \*                       |                                      |
|       | *cb*       |                 |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
| |                                    |                                      |
|                     | )   |          |                                      |
|                                      |                                      |
|                                      |                                      |
|       |            |                 |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe to attribute event.

The client call to subscribe for event reception in the pushmodel. The
client implements a callbackmethod which is triggered when the event is
received either by polling or a dedicated thread. Filtering is done
based on the reason specified and the event type. For example when
reading the state and the reason specified is "change" the event will be
fired only when the state changes. Events consist of an attribute name
and the event reason. A standard set of reasons are implemented by the
system, additional device specific reasons an be implemented by device
servers programmers. cb is a pointer to a class inheriting fromthe
`Tango <../../de/ddf/namespaceTango.html>`__
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class and
implementing a push\_event() method. The
`subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__
call returns an event id which has to be specified when unsubscribing
from this event.

Parameters
    +--------+---------+---------------------------+
    | [in]   | event   | The event type (reason)   |
    +--------+---------+---------------------------+
    | [in]   | cb      | The event callback        |
    +--------+---------+---------------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :subscribe\_event   | (   | `EventTy |                                      |
| pe <../../d1/d45/group__Client.html# |                                      |
| ga5366e2a8cedf5aab5be8835974f787c6>` |                                      |
| __    | *event*,       |             |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                     |     | `CallBac |                                      |
| k <../../d4/ded/classTango_1_1CallBa |                                      |
| ck.html>`__ \*                       |                                      |
|       | *cb*,          |             |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                     |     | bool     |                                      |
|                                      |                                      |
|                                      |                                      |
|       | *stateless*    |             |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
| |                                    |                                      |
|                     | )   |          |                                      |
|                                      |                                      |
|                                      |                                      |
|       |                |             |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stateless subscription to attribute event.

This subscribe eventmethod has the same functionality as described in
the last section. It adds an additional flag called stateless. When the
stateless flag is set to false, an exception will be thrown when the
event subscription encounters a problem. With the stateless flag set to
true, the event subscription will always succeed, even if the
corresponding device server is not running. The keep alive thread will
try every 10 seconds to subscribe for the specified event. At every
subscription retry, a callback is executed which contains the
corresponding exception.

Parameters
    +--------+-------------+---------------------------+
    | [in]   | event       | The event type (reason)   |
    +--------+-------------+---------------------------+
    | [in]   | cb          | The event callback        |
    +--------+-------------+---------------------------+
    | [in]   | stateless   | The stateless flag        |
    +--------+-------------+---------------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------------------+ |                                      |
| | virtual int Tango::AttributeProxy: |                                      |
| :subscribe\_event   | (   | `EventTy |                                      |
| pe <../../d1/d45/group__Client.html# |                                      |
| ga5366e2a8cedf5aab5be8835974f787c6>` |                                      |
| __    | *event*,                   | |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------------------+ |                                      |
| |                                    |                                      |
|                     |     | int      |                                      |
|                                      |                                      |
|                                      |                                      |
|       | *event\_queue\_size*,      | |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------------------+ |                                      |
| |                                    |                                      |
|                     |     | bool     |                                      |
|                                      |                                      |
|                                      |                                      |
|       | *stateless* = ``false``    | |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------------------+ |                                      |
| |                                    |                                      |
|                     | )   |          |                                      |
|                                      |                                      |
|                                      |                                      |
|       |                            | |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+----------------------------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stateless subscription to attribute event with event queue.

The client call to subscribe for event reception in the pull model.
Instead of a callback method the client has to specify the size of the
event reception buffer. The event reception buffer is implemented as a
round robin buffer. This way the client can set-up different ways to
receive events.

-  Event reception buffer size = 1 : The client is interested only in
   the value of the last event received. All other events that have been
   received since the last reading are discarded.
-  Event reception buffer size > 1 : The client has chosen to keep an
   event history of a given size. When more events arrive since the last
   reading, older events will be discarded.
-  Event reception buffer size = ALL\_EVENTS : The client buffers all
   received events. The buffer size is unlimited and only restricted by
   the available memory for the client.

All other parameters are similar to the descriptions given in the last
two sections.

Parameters
    +--------+----------------------+---------------------------+
    | [in]   | event                | The event type (reason)   |
    +--------+----------------------+---------------------------+
    | [in]   | event\_queue\_size   | The event queue size      |
    +--------+----------------------+---------------------------+
    | [in]   | stateless            | The stateless flag        |
    +--------+----------------------+---------------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| --+------------+-----+----+          |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::unsubscribe\_event   | (   | int   |                                      |
|   | *ev\_id*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| --+------------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Unsubsribe to attribute event.

Unsubscribe a client from receiving the event specified by event\_id.
event\_id is the event identifier returned by the
`AttributeProxy::subscribe\_event() <../../d3/d4b/classTango_1_1AttributeProxy.html#aec123c01ade81f0bb04d79a1c88235f6>`__
method.

Parameters
    +--------+----------+------------------------+
    | [in]   | ev\_id   | The event identifier   |
    +--------+----------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+--------+----- |                                      |
| +----+                               |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::write   | (   | `DeviceAttribute < |                                      |
| ../../d7/dca/classTango_1_1DeviceAtt |                                      |
| ribute.html>`__ &    | *da*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------+--------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write attribute value.

Write the attribute. To insert the value to write you have to use the
operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.

Parameters
    +--------+------+---------------------------+
    | [in]   | da   | The new attribute value   |
    +--------+------+---------------------------+

Exceptions
    +---------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevUnlocked,DevFailed   | from device   |
    +---------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| --+-----+----+                       |                                      |
| | virtual long Tango::AttributeProxy |                                      |
| ::write\_asynch   | (   | `DeviceAtt |                                      |
| ribute <../../d7/dca/classTango_1_1D |                                      |
| eviceAttribute.html>`__ &    | *da*  |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write attribute value asynchrnously in polling model.

Write the attribute asynchronously (polling model). To insert the value
to write you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.
This call returns an asynchronous call identifier which is needed to get
the server reply.

Parameters
    +--------+------+-----------------------+
    | [in]   | da   | The attribute value   |
    +--------+------+-----------------------+

Returns
    The asynchrnous call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+                                 |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::write\_asynch   | (   | `DeviceAtt |                                      |
| ribute <../../d7/dca/classTango_1_1D |                                      |
| eviceAttribute.html>`__ &    | *da*, |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                   |     | `CallBack  |                                      |
| <../../d4/ded/classTango_1_1CallBack |                                      |
| .html>`__ &                  | *cb*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                   | )   |            |                                      |
|                                      |                                      |
|                              |       |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write attribute asynchronously in callback model.

Write the attribute asynchronously using the callback model. The
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the attr\_written() method overloaded.

Parameters
    +--------+------+---------------------------+
    | [in]   | da   | The new attribute value   |
    +--------+------+---------------------------+
    | [in]   | cb   | The callback object       |
    +--------+------+---------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------+-----+ |                                      |
| ----+                                |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ Tango::AttributeProxy::write |                                      |
| \_read   | (   | `DeviceAttribute <. |                                      |
| ./../d7/dca/classTango_1_1DeviceAttr |                                      |
| ibute.html>`__ &    | *da*   | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write the Read attribute value.

Write then read a single attribute in a single network call. By default
(serialisation by device), the execution of this call in the server
can’t be interrupted by other clients. To insert/extract the value to
write/read you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.

Parameters
    +--------+------+---------------------------+
    | [in]   | da   | The new attribute value   |
    +--------+------+---------------------------+

Returns
    The new attribute value

Exceptions
    +---------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunnicationFailed,DevUnlocked,DevFailed   | from device   |
    +---------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------+-----+---------+-- |                                      |
| ------+-----+----+                   |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::write\_reply   | (   | long    | * |                                      |
| id*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+---------+-- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get asynchronous write attribute call reply.

Check if the answer of an asynchronous write is arrived (polling model).
id is the asynchronous call identifier. If the reply is arrived and if
it is a valid reply, the call returned. If the reply is an exception, it
is re-thrown by this call. An exception is also thrown in case of the
reply is not yet arrived.

Parameters
    +--------+------+-------------------------------+
    | [in]   | id   | The asynchronous identifier   |
    +--------+------+-------------------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------+-----+---------+-- |                                      |
| -------+                             |                                      |
| | virtual void Tango::AttributeProxy |                                      |
| ::write\_reply   | (   | long    | * |                                      |
| id*,   |                             |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+---------+-- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                  |     | long    | * |                                      |
| to*    |                             |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+---------+-- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                  | )   |         |   |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+---------+-- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get asynchronous write attribute call reply with timeout.

Check if the answer of an asynchronous write is arrived (polling model).
id is the asynchronous call identifier. If the reply is arrived and if
it is a valid reply, the call returned. If the reply is an exception, it
is re-thrown by this call. If the reply is not yet arrived, the call
will wait (blocking the process) for the time specified in timeout. If
after timeout milliseconds, the reply is still not there, an exception
is thrown. If timeout is set to 0, the call waits until the reply
arrived.

Parameters
    +--------+------+-------------------------------+
    | [in]   | id   | The asynchronous identifier   |
    +--------+------+-------------------------------+
    | [in]   | to   | The timeout value             |
    +--------+------+-------------------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
