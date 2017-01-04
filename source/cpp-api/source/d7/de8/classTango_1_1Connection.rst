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
members <../../d4/dc8/classTango_1_1Connection-members.html>`__

Tango::Connection Class Referenceabstract

`Client classes <../../d1/d45/group__Client.html>`__

Base class for `Tango <../../de/ddf/namespaceTango.html>`__ device
access. `More... <../../d7/de8/classTango_1_1Connection.html#details>`__

Inheritance diagram for Tango::Connection:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Miscellaneous methods

virtual void 

`set\_timeout\_millis <../../d7/de8/classTango_1_1Connection.html#a0a05fa878281ae0665274d481ed1bfe4>`__
(int timeout)

 

| Set device timeout. `More... <#a0a05fa878281ae0665274d481ed1bfe4>`__

 

virtual int 

`get\_timeout\_millis <../../d7/de8/classTango_1_1Connection.html#af911bbab02b415ebd3dc8faeb7d687a7>`__
()

 

| Get device timeout. `More... <#af911bbab02b415ebd3dc8faeb7d687a7>`__

 

int 

`get\_idl\_version <../../d7/de8/classTango_1_1Connection.html#a5d1843ba0973d0845939a4f106dbad28>`__
()

 

| Get device IDL version.
`More... <#a5d1843ba0973d0845939a4f106dbad28>`__

 

virtual Tango::DevSource 

`get\_source <../../d7/de8/classTango_1_1Connection.html#afcaee3ed7d1a75a21749ad64fbee8700>`__
()

 

| Get device source. `More... <#afcaee3ed7d1a75a21749ad64fbee8700>`__

 

virtual void 

`set\_source <../../d7/de8/classTango_1_1Connection.html#adaeaaf890490018e714dc1a92516b76f>`__
(Tango::DevSource sou)

 

| Set device source. `More... <#adaeaaf890490018e714dc1a92516b76f>`__

 

virtual void 

`set\_transparency\_reconnection <../../d7/de8/classTango_1_1Connection.html#af1fa8c85c338781be7d16a99581cf383>`__
(bool val)

 

| Set device transparency (reconnection) mode.
`More... <#af1fa8c85c338781be7d16a99581cf383>`__

 

virtual bool 

`get\_transparency\_reconnection <../../d7/de8/classTango_1_1Connection.html#ab9dad67ef6e9ba3268ac9d5627f70ea0>`__
()

 

| Get device transparency (reconnection) mode.
`More... <#ab9dad67ef6e9ba3268ac9d5627f70ea0>`__

 

Synchronous command oriented methods

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#ad878054e953c5288ac0bc137c6307347>`__
(string &cmd\_name)

 

| Execute a command (without input data)
`More... <#ad878054e953c5288ac0bc137c6307347>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#affa1c0fff97f714eddf69ebdb17c6665>`__
(const char \*cmd\_name)

 

| Execute a command (without input data)
`More... <#affa1c0fff97f714eddf69ebdb17c6665>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#af5d9faa2fff08068c579202d29404df5>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d\_in)

 

| Execute a command (with input data)
`More... <#af5d9faa2fff08068c579202d29404df5>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#a484969b4553471d1f15d873cc638cc1d>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d\_in)

 

| Execute a command (with input data)
`More... <#a484969b4553471d1f15d873cc638cc1d>`__

 

Aynchronous command oriented methods

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a253afbec47129a1f235e5642648fb9ae>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin, bool
forget=false)

 

| Execute a command asynchronously (with input argument)
`More... <#a253afbec47129a1f235e5642648fb9ae>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a05d55e0b38d0af49f77cbf1ccb3fbe56>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin, bool
forget=false)

 

| Execute a command asynchronously (with input argument)
`More... <#a05d55e0b38d0af49f77cbf1ccb3fbe56>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a13709d9e18276ce038e358e9ef7e54e0>`__
(const char \*cmd\_name, bool forget=false)

 

| Execute a command asynchronously.
`More... <#a13709d9e18276ce038e358e9ef7e54e0>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a3ac6eaa4960de354249d9d9fa6c09b32>`__
(string &cmd\_name, bool forget=false)

 

| Execute a command asynchronously.
`More... <#a3ac6eaa4960de354249d9d9fa6c09b32>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout\_reply <../../d7/de8/classTango_1_1Connection.html#afae0ebefc88ab77671fc717f30b53c8f>`__
(long id)

 

| Check an asynchronous command\_inout answer is arrived.
`More... <#afae0ebefc88ab77671fc717f30b53c8f>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout\_reply <../../d7/de8/classTango_1_1Connection.html#a02eedd172fbcb947d0a93f10d4f8def1>`__
(long id, long timeout)

 

| Check an asynchronous command\_inout answer is arrived with timeout.
`More... <#a02eedd172fbcb947d0a93f10d4f8def1>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#ab15806ba65762f244739c66e6a978fcc>`__
(string &cmd\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with callback.
`More... <#ab15806ba65762f244739c66e6a978fcc>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a1b7ee02774b5ce6263539bbc62c20966>`__
(const char \*cmd\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with callback.
`More... <#a1b7ee02774b5ce6263539bbc62c20966>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#af29ba99c37cb252ab1d386d192f2721f>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with input value and callback.
`More... <#af29ba99c37cb252ab1d386d192f2721f>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a0bb2ab58c99eb35b86f069a2a41c111c>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with input value and callback.
`More... <#a0bb2ab58c99eb35b86f069a2a41c111c>`__

 

Asynchronous attribute related methods

virtual void 

`get\_asynch\_replies <../../d7/de8/classTango_1_1Connection.html#aab2655c9b8626777ab54dc795a4f0738>`__
()

 

| Fire callback methods.
`More... <#aab2655c9b8626777ab54dc795a4f0738>`__

 

virtual void 

`get\_asynch\_replies <../../d7/de8/classTango_1_1Connection.html#a860bae40f4ad7866c78d4408bb76fa74>`__
(long timeout)

 

| Fire callback methds with timeout.
`More... <#a860bae40f4ad7866c78d4408bb76fa74>`__

 

virtual void 

`cancel\_asynch\_request <../../d7/de8/classTango_1_1Connection.html#aa340cda55c9be5ba4c87b92b6213f6f1>`__
(long id)

 

| Cancel a pending asynchronous request.
`More... <#aa340cda55c9be5ba4c87b92b6213f6f1>`__

 

virtual void 

`cancel\_all\_polling\_asynch\_request <../../d7/de8/classTango_1_1Connection.html#a7e596bb67ca070748f501ab990d5f880>`__
()

 

| Cancel all pending asynchronous request.
`More... <#a7e596bb67ca070748f501ab990d5f880>`__

 

Friends
-------

class 

`FwdAttribute <../../d7/de8/classTango_1_1Connection.html#afe656a6bbadb8bd0422eb74f87665405>`__

 

Detailed Description
--------------------

Base class for `Tango <../../de/ddf/namespaceTango.html>`__ device
access.

Base class for `Tango <../../de/ddf/namespaceTango.html>`__ device
access. This class is pure virtual and can be instanciated as is.

Author
    taurel

Revision
    1

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
| | virtual void Tango::Connection::ca |                                      |
| ncel\_all\_polling\_asynch\_request  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Cancel all pending asynchronous request.

Cancel all pending polling asynchronous requests. This is a call local
to the client. It simply allows the caller not to get the answers of the
asynchronous requests. It does not interrupt the call execution on the
remote devices.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------+-----+----- |                                      |
| ----+--------+-----+----+            |                                      |
| | virtual void Tango::Connection::ca |                                      |
| ncel\_asynch\_request   | (   | long |                                      |
|     | *id*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ----+--------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Cancel a pending asynchronous request.

Cancel a pending asynchronous request. id is the asynchronous call
identifier. This is a call local to the client. It simply allows the
caller not to get the answer of the asynchronous request. It does not
interrupt the call execution on the remote device.

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Exceptions
    +------------+----+
    | AsynCall   |    |
    +------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+-------------+---------------+- |                                      |
| ----+----+                           |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout   |  |                                      |
| (   | string &    | *cmd\_name*   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+-------------+---------------+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command (without input data)

Execute a command on a device which takes no input arguments (void). The
result is returned in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    The command result

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------+------------ |                                      |
| ---+-----+----+                      |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout   |  |                                      |
| (   | const char \*    | *cmd\_name* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------+------------ |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command (without input data)

Execute a command on a device which takes no input arguments (void). The
result is returned in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    The command result

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout   |  |                                      |
| (   | string &                       |                                      |
|                                    | |                                      |
|  *cmd\_name*,   |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                   |  |                                      |
|     | `DeviceData <../../df/d22/clas |                                      |
| sTango_1_1DeviceData.html>`__ &    | |                                      |
|  *d\_in*        |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                   |  |                                      |
| )   |                                |                                      |
|                                    | |                                      |
|                 |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command (with input data)

Execute a command on a device. Input arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object,
output is returned as a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object.

Parameters
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | cmd\_name   | The command name                                                   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | d\_in       | `Command <../../d2/d1d/classTango_1_1Command.html>`__ input data   |
    +--------+-------------+--------------------------------------------------------------------+

Returns
    The command result

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout   |  |                                      |
| (   | const char \*                  |                                      |
|                                    | |                                      |
|  *cmd\_name*,   |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                   |  |                                      |
|     | `DeviceData <../../df/d22/clas |                                      |
| sTango_1_1DeviceData.html>`__ &    | |                                      |
|  *d\_in*        |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                   |  |                                      |
| )   |                                |                                      |
|                                    | |                                      |
|                 |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------------+- |                                      |
| ----+------------------------------- |                                      |
| -----------------------------------+ |                                      |
| ----------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command (with input data)

Execute a command on a device. Input arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object,
output is returned as a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object.

Parameters
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | cmd\_name   | The command name                                                   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | d\_in       | `Command <../../d2/d1d/classTango_1_1Command.html>`__ input data   |
    +--------+-------------+--------------------------------------------------------------------+

Returns
    The command result

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| | virtual long Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | const |                                      |
|  char \*                             |                                      |
|                         | *cmd\_name |                                      |
| *,            |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        |     | `Devi |                                      |
| ceData <../../df/d22/classTango_1_1D |                                      |
| eviceData.html>`__ &    | *argin*,   |                                      |
|               |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        |     | bool  |                                      |
|                                      |                                      |
|                         | *forget* = |                                      |
|  ``false``    |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                         |            |                                      |
|               |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously (with input argument)

Execute asynchronously (polling model) a command on a device. Input
arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object (see
following chapters on how to insert data into
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object). The
last argument is a fire and forget flag. If this flag is set to true,
this means that the client does not care at all about the server answer
and will even not try to get it. A false default value is provided.
Please, note that device re-connection will not take place (in case it
is needed) if the fire and forget mode is used. Therefore, an
application using only fire and forget requests is not able to
automatically re-connnect to device. This call returns an asynchronous
call identifier which is needed to get the command result.

Parameters
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | cmd\_name   | The command name                                                   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | argin       | `Command <../../d2/d1d/classTango_1_1Command.html>`__ input data   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | forget      | Fire and forget flag                                               |
    +--------+-------------+--------------------------------------------------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| | virtual long Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | strin |                                      |
| g &                                  |                                      |
|                         | *cmd\_name |                                      |
| *,            |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        |     | `Devi |                                      |
| ceData <../../df/d22/classTango_1_1D |                                      |
| eviceData.html>`__ &    | *argin*,   |                                      |
|               |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        |     | bool  |                                      |
|                                      |                                      |
|                         | *forget* = |                                      |
|  ``false``    |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                         |            |                                      |
|               |                      |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| --------------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously (with input argument)

Execute asynchronously (polling model) a command on a device. Input
arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object (see
following chapters on how to insert data into
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object). The
last argument is a fire and forget flag. If this flag is set to true,
this means that the client does not care at all about the server answer
and will even not try to get it. A false default value is provided.
Please, note that device re-connection will not take place (in case it
is needed) if the fire and forget mode is used. Therefore, an
application using only fire and forget requests is not able to
automatically re-connnect to device. This call returns an asynchronous
call identifier which is needed to get the command result.

Parameters
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | cmd\_name   | The command name                                                   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | argin       | `Command <../../d2/d1d/classTango_1_1Command.html>`__ input data   |
    +--------+-------------+--------------------------------------------------------------------+
    | [in]   | forget      | Fire and forget flag                                               |
    +--------+-------------+--------------------------------------------------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------+----------------------- |                                      |
| --+                                  |                                      |
| | virtual long Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | const |                                      |
|  char \*    | *cmd\_name*,           |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------+----------------------- |                                      |
| --+                                  |                                      |
| |                                    |                                      |
|                        |     | bool  |                                      |
|             | *forget* = ``false``   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------+----------------------- |                                      |
| --+                                  |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|             |                        |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------+----------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously.

Execute asynchronously (polling model) a command on a device which takes
no input argument. The last argument is a fire and forget flag. If this
flag is set to true, this means that the client does not care at all
about the server answer and will even not try to get it. A false default
value is provided. Please, note that device re-connection will not take
place (in case it is needed) if the fire and forget mode is used.
Therefore, an application using only fire and forget requests is not
able to automatically re-connnect to device. This call returns an
asynchronous call identifier which is needed to get the command result.

Parameters
    +--------+-------------+------------------------+
    | [in]   | cmd\_name   | The command name       |
    +--------+-------------+------------------------+
    | [in]   | forget      | Fire and forget flag   |
    +--------+-------------+------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| -------+-------------------------+   |                                      |
| | virtual long Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | strin |                                      |
| g &    | *cmd\_name*,            |   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -------+-------------------------+   |                                      |
| |                                    |                                      |
|                        |     | bool  |                                      |
|        | *forget* = ``false``    |   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -------+-------------------------+   |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|        |                         |   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -------+-------------------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously.

Execute asynchronously (polling model) a command on a device which takes
no input argument. The last argument is a fire and forget flag. If this
flag is set to true, this means that the client does not care at all
about the server answer and will even not try to get it. A false default
value is provided. Please, note that device re-connection will not take
place (in case it is needed) if the fire and forget mode is used.
Therefore, an application using only fire and forget requests is not
able to automatically re-connnect to device. This call returns an
asynchronous call identifier which is needed to get the command result.

Parameters
    +--------+-------------+------------------------+
    | [in]   | cmd\_name   | The command name       |
    +--------+-------------+------------------------+
    | [in]   | forget      | Fire and forget flag   |
    +--------+-------------+------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| | virtual void Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | strin |                                      |
| g &                                  |                                      |
|                     | *cmd\_name*,   |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| |                                    |                                      |
|                        |     | `Call |                                      |
| Back <../../d4/ded/classTango_1_1Cal |                                      |
| lBack.html>`__ &    | *cb*           |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                     |                |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously with callback.

Execute asynchronously (callback model) a command on a device which
takes no input argument. The last argument is a reference to a callback
object. This callback object should be an instance of a user class
inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the cmd\_ended() method overloaded.

Parameters
    +--------+-------------+------------------------+
    | [in]   | cmd\_name   | The command name       |
    +--------+-------------+------------------------+
    | [in]   | cb          | The call-back object   |
    +--------+-------------+------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| | virtual void Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | const |                                      |
|  char \*                             |                                      |
|                     | *cmd\_name*,   |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| |                                    |                                      |
|                        |     | `Call |                                      |
| Back <../../d4/ded/classTango_1_1Cal |                                      |
| lBack.html>`__ &    | *cb*           |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                     |                |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously with callback.

Execute asynchronously (callback model) a command on a device which
takes no input argument. The last argument is a reference to a callback
object. This callback object should be an instance of a user class
inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the cmd\_ended() method overloaded.

Parameters
    +--------+-------------+------------------------+
    | [in]   | cmd\_name   | The command name       |
    +--------+-------------+------------------------+
    | [in]   | cb          | The call-back object   |
    +--------+-------------+------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| | virtual void Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | strin |                                      |
| g &                                  |                                      |
|                         | *cmd\_name |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        |     | `Devi |                                      |
| ceData <../../df/d22/classTango_1_1D |                                      |
| eviceData.html>`__ &    | *argin*,   |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        |     | `Call |                                      |
| Back <../../d4/ded/classTango_1_1Cal |                                      |
| lBack.html>`__ &        | *cb*       |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                         |            |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously with input value and callback.

Execute asynchronously (callback model) a command on a device. Input
arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object (see
following chapters on how to insert data into
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object). The
last argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the cmd\_ended() method overloaded.

Parameters
    +--------+-------------+--------------------------+
    | [in]   | cmd\_name   | The command name         |
    +--------+-------------+--------------------------+
    | [in]   | argin       | The command input data   |
    +--------+-------------+--------------------------+
    | [in]   | cb          | The call-back object     |
    +--------+-------------+--------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| | virtual void Tango::Connection::co |                                      |
| mmand\_inout\_asynch   | (   | const |                                      |
|  char \*                             |                                      |
|                         | *cmd\_name |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        |     | `Devi |                                      |
| ceData <../../df/d22/classTango_1_1D |                                      |
| eviceData.html>`__ &    | *argin*,   |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        |     | `Call |                                      |
| Back <../../d4/ded/classTango_1_1Cal |                                      |
| lBack.html>`__ &        | *cb*       |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                        | )   |       |                                      |
|                                      |                                      |
|                         |            |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------+----------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute a command asynchronously with input value and callback.

Execute asynchronously (callback model) a command on a device. Input
arguments are passed in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object (see
following chapters on how to insert data into
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object). The
last argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the cmd\_ended() method overloaded.

Parameters
    +--------+-------------+--------------------------+
    | [in]   | cmd\_name   | The command name         |
    +--------+-------------+--------------------------+
    | [in]   | argin       | The command input data   |
    +--------+-------------+--------------------------+
    | [in]   | cb          | The call-back object     |
    +--------+-------------+--------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+--------+----- |                                      |
| +----+                               |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout\_rep |                                      |
| ly   | (   | long    | *id*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+--------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check an asynchronous command\_inout answer is arrived.

Check if the answer of an asynchronous command\_inout is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object. If
the reply is an exception, it is re-thrown by this call. An exception is
also thrown in case of the reply is not yet arrived. Example :

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
dev("...");

long asyn\_id;

asyn\_id = dev.command\_inout\_asynch("MyCmd");

...

...

...

Tango::DeviceData arg;

try

{

arg = dev.command\_inout\_reply(asyn\_id);

}

catch(Tango::AsynReplyNotArrived)

{

cerr << "Command not arrived !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

catch (Tango::DevFailed &e)

{

`Tango::Except::print\_exception <../../df/d37/classTango_1_1Except.html#a649730652d055010916449aad7a9b5f3>`__\ (e);

}

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Returns
    The command result

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+-------------- |                                      |
| +                                    |                                      |
| | virtual `DeviceData <../../df/d22/ |                                      |
| classTango_1_1DeviceData.html>`__ Ta |                                      |
| ngo::Connection::command\_inout\_rep |                                      |
| ly   | (   | long    | *id*,         |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+-------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|      |     | long    | *timeout*     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+-------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|      | )   |         |               |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+---------+-------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check an asynchronous command\_inout answer is arrived with timeout.

Check if the answer of an asynchronous command\_inout is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ object. If
the reply is an exception, it is re-thrown by this call. If the reply is
not yet arrived, the call will wait (blocking the process) for the time
specified in timeout. If after timeout milliseconds, the reply is still
not there, an exception is thrown. If timeout is set to 0, the call
waits until the reply arrived.

Parameters
    +--------+-----------+-------------------------+
    | [in]   | id        | The call identifier 8   |
    +--------+-----------+-------------------------+
    | [in]   | timeout   | The timeout value       |
    +--------+-----------+-------------------------+

Returns
    The command result

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | virtual void Tango::Connection::ge |                                      |
| t\_asynch\_replies   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Fire callback methods.

Fire callback methods for device asynchronous requests with already
arrived replied. Returns immediately if there is no replies already
arrived or if there is no asynchronous request for the device. Example :

class MyCallBack:
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__

{

public:

MyCallback(double d):data(d) {};

virtual void
cmd\_ended(\ `Tango::CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__
\*);

private:

double data;

};

void
MyCallBack::cmd\_ended(\ `Tango <../../de/ddf/namespaceTango.html>`__
CmdDoneEvent \*cmd)

{

if (cmd->err == true)

`Tango::Except::print\_error\_stack <../../df/d37/classTango_1_1Except.html#aba359c6be26a171c1d9ebd143f7a9630>`__\ (cmd->errors);

else

{

short cmd\_result;

cmd->argout >> cmd\_result;

cout << "Command result = " << cmd\_result <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Callback personal data = " << data <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

}

int main(int argc, char \*argv[])

{

....

....

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
dev("...");

double my\_data = ...;

MyCallBack cb(my\_data);

...

dev.command\_inout\_asynch("MyCmd",cb);

...

...

...

dev.get\_asynch\_replies();

...

...

}

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| -+-------------+-----+----+          |                                      |
| | virtual void Tango::Connection::ge |                                      |
| t\_asynch\_replies   | (   | long    |                                      |
|  | *timeout*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -+-------------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Fire callback methds with timeout.

Fire callback methods for device asynchronous requests (command and
attributes) with already arrived replied. Wait and block the caller for
timeout milliseconds if they are some device asynchronous requests which
are not yet arrived. Returns immediately if there is no asynchronous
request for the device. If timeout is set to 0, the call waits until all
the asynchronous requests sent to the device has received a reply.

Parameters
    +--------+-----------+---------------------+
    | [in]   | timeout   | The timeout value   |
    +--------+-----------+---------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | int Tango::Connection::get\_idl\_v |                                      |
| ersion   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device IDL version.

Get the version of the `Tango <../../de/ddf/namespaceTango.html>`__
Device IDL interface implemented by the device

Returns
    The device IDL version

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
| | virtual Tango::DevSource Tango::Co |                                      |
| nnection::get\_source   | (   |    | |                                      |
|  )   |    |                          |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device source.

Get the device data source used by command\_inout or read\_attribute
methods. The DevSource is an enumerated type which can be one of {DEV,
CACHE, CACHE\_DEV}. See chapter on Advanced Feature in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding polling.

Returns
    The device source flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | virtual int Tango::Connection::get |                                      |
| \_timeout\_millis   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device timeout.

Get the client side timeout in milliseconds.

Returns
    The device timeout (in mS)

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
| | virtual bool Tango::Connection::ge |                                      |
| t\_transparency\_reconnection   | (  |                                      |
|   |    | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device transparency (reconnection) mode.

Returns the transparency reconnection flag. See recon for more details
on reconnection and exception

Returns
    The device transparency flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------+-----+----------------- |                                      |
| ----+---------+-----+----+           |                                      |
| | virtual void Tango::Connection::se |                                      |
| t\_source   | (   | Tango::DevSource |                                      |
|     | *sou*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ----+---------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device source.

Set the data source (device, polling buffer, polling buffer than device)
for command\_inout and read\_attribute methods. The DevSource is an
enumerated type which can be one of {DEV, CACHE, CACHE\_DEV}. The
default value is CACHE\_DEV. See chapter on Advanced Feature for all
details regarding polling

Parameters
    +--------+-------+---------------------+
    | [in]   | sou   | The device source   |
    +--------+-------+---------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| +-------------+-----+----+           |                                      |
| | virtual void Tango::Connection::se |                                      |
| t\_timeout\_millis   | (   | int     |                                      |
| | *timeout*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| +-------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device timeout.

Set client side timeout for device in milliseconds. Any method which
takes longer than this time to execute will throw an exception.

Parameters
    +--------+-----------+---------------------------+
    | [in]   | timeout   | The timeout value in mS   |
    +--------+-----------+---------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| --------------------------------+--- |                                      |
| --+---------+---------+-----+----+   |                                      |
| | virtual void Tango::Connection::se |                                      |
| t\_transparency\_reconnection   | (  |                                      |
|   | bool    | *val*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+---------+---------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device transparency (reconnection) mode.

If flag is true, no exception will be thrown in case of network
communication error between client and server. The API will try to
re-build the network connection between client and server as soon as an
error is detected. See recon for more details on reconnection and
exception

Parameters
    +--------+-------+--------------------------------+
    | [in]   | val   | The device transparency flag   |
    +--------+-------+--------------------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +-----------------------------+      | friend                               |
| | friend class FwdAttribute   |      |                                      |
| +-----------------------------+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Connection <../../d7/de8/classTango_1_1Connection.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d8/d6c/classTango_1_1Connection__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
