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

`Public Member Functions <#pub-methods>`__ \| `List of all
members <../../dc/d3a/classTango_1_1DummyDeviceProxy-members.html>`__

Tango::DummyDeviceProxy Class Reference

``#include "devapi.h"``

Inheritance diagram for Tango::DummyDeviceProxy:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DummyDeviceProxy:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a208e369e11d5e1d945b123ec217dc16d>`__
()

 

virtual string 

`build\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#af1b4aeeda9976c31d43bf0629c0c2e87>`__
()

 

virtual string 

`dev\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a95f30faa9de8e4fb82f65b6689da1a08>`__
()

 

virtual string 

`get\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ae1aeac6ff92474063cc58a531b2c6d09>`__
(bool)

 

int 

`get\_env\_var <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ad6fb4f3237b716ee6e53417317a2984a>`__
(const char \*cc, string &str\_ref)

 

virtual int 

`get\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a2901b3e72b2928c0c0fb0bd2674990e4>`__
()

 

virtual void 

`set\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a06125348959666fb0774765b8d49f15d>`__
(int)

 

|-| Public Member Functions inherited from
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

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

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | Tango::DummyDeviceProxy::DummyDevi |                                      |
| ceProxy   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
| | virtual string Tango::DummyDeviceP |                                      |
| roxy::build\_corba\_name   | (   |   |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | virtual string Tango::DummyDeviceP |                                      |
| roxy::dev\_name   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| -----+----+-----+----+               |                                      |
| | virtual string Tango::DummyDeviceP |                                      |
| roxy::get\_corba\_name   | (   | boo |                                      |
| l    |    | )   |    |               |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| -----+----+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+------------------ |                                      |
| +---------------+                    |                                      |
| | int Tango::DummyDeviceProxy::get\_ |                                      |
| env\_var   | (   | const char \*     |                                      |
| | *cc*,         |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| +---------------+                    |                                      |
| |                                    |                                      |
|            |     | string &          |                                      |
| | *str\_ref*    |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| +---------------+                    |                                      |
| |                                    |                                      |
|            | )   |                   |                                      |
| |               |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| +---------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | virtual int Tango::DummyDeviceProx |                                      |
| y::get\_lock\_ctr   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------+-----+-------- |                                      |
| +----+-----+----+                    |                                      |
| | virtual void Tango::DummyDevicePro |                                      |
| xy::set\_lock\_ctr   | (   | int     |                                      |
| |    | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| +----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../da/df5/classTango_1_1DummyDeviceProxy__inherit__graph.png
.. |Collaboration graph| image:: ../../d1/d9a/classTango_1_1DummyDeviceProxy__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
