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
members <../../d8/d7c/classTango_1_1CallBack-members.html>`__

Tango::CallBack Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Event and asynchronous (callback model) calls base class.
`More... <../../d4/ded/classTango_1_1CallBack.html#details>`__

Public Member Functions
-----------------------

virtual void 

`attr\_read <../../d4/ded/classTango_1_1CallBack.html#a47a4fc0fca26863bd7b31e6f1e978f72>`__
(`AttrReadEvent <../../dc/d42/classTango_1_1AttrReadEvent.html>`__
\*are)

 

| Asynchronous read attribute execution callback method.
`More... <#a47a4fc0fca26863bd7b31e6f1e978f72>`__

 

virtual void 

`attr\_written <../../d4/ded/classTango_1_1CallBack.html#a352e653238bb6ecb134fa36d4adb44bc>`__
(`AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__
\*awe)

 

| Asynchronous write attribute execution callback method.
`More... <#a352e653238bb6ecb134fa36d4adb44bc>`__

 

virtual void 

`cmd\_ended <../../d4/ded/classTango_1_1CallBack.html#a9a39818975ee8f46755209a62ffed5f7>`__
(`CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__ \*cde)

 

| Asynchronous command execution callback method.
`More... <#a9a39818975ee8f46755209a62ffed5f7>`__

 

virtual void 

`push\_event <../../d4/ded/classTango_1_1CallBack.html#a6a794901a14f08b1cda918e1d18acce9>`__
(`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ \*ed)

 

| Event callback method.
`More... <#a6a794901a14f08b1cda918e1d18acce9>`__

 

virtual void 

`push\_event <../../d4/ded/classTango_1_1CallBack.html#a5d1dc656f3a7f50df6860f01fac4f32e>`__
(`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*ace)

 

| attribute configuration change event callback method
`More... <#a5d1dc656f3a7f50df6860f01fac4f32e>`__

 

virtual void 

`push\_event <../../d4/ded/classTango_1_1CallBack.html#abab8a359a1e492e12a21b3dab7b93501>`__
(`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
\*dre)

 

| Data ready event callback method.
`More... <#abab8a359a1e492e12a21b3dab7b93501>`__

 

virtual void 

`push\_event <../../d4/ded/classTango_1_1CallBack.html#acf0ff8451e6fd851f8724237d4fad4a8>`__
(`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
\*dic)

 

| Device interface change event callback method.
`More... <#acf0ff8451e6fd851f8724237d4fad4a8>`__

 

virtual void 

`push\_event <../../d4/ded/classTango_1_1CallBack.html#aac4aa49f209d8db18ce415f2a1a5d13d>`__
(`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
\*ped)

 

| `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ event callback method.
`More... <#aac4aa49f209d8db18ce415f2a1a5d13d>`__

 

Friends
-------

class 

`EventConsumer <../../d4/ded/classTango_1_1CallBack.html#a1267d53ae947792829a0db311573ae18>`__

 

class 

`EventConsumerKeepAliveThread <../../d4/ded/classTango_1_1CallBack.html#aa6907ff9f96d034b806902f0627d9dcb>`__

 

Detailed Description
--------------------

Event and asynchronous (callback model) calls base class.

When using the event push model (callback automatically executed), there
are some cases (same callback used for events coming from different
devices hosted in device server process running on different hosts)
where the callback method could be executed concurently by different
threads started by the ORB. The user has to code his callback method in
a thread safe manner.

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+---------+-----+-- |                                      |
| --+                                  |                                      |
| | virtual void Tango::CallBack::attr |                                      |
| \_read   | (   | `AttrReadEvent <../ |                                      |
| ../dc/d42/classTango_1_1AttrReadEven |                                      |
| t.html>`__ \*    | *are*   | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------+---------+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Asynchronous read attribute execution callback method.

This method is defined as being empty and must be overloaded by the user
when the asynchronous callback model is used. This is the method which
will be executed when the server reply from a read\_attribute(s) is
received in both push and pull sub-mode.

Parameters
    +-------+---------------------------+
    | are   | The read attribute data   |
    +-------+---------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------+-----+----------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
| | virtual void Tango::CallBack::attr |                                      |
| \_written   | (   | `AttrWrittenEven |                                      |
| t <../../da/d7f/classTango_1_1AttrWr |                                      |
| ittenEvent.html>`__ \*    | *awe*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Asynchronous write attribute execution callback method.

This method is defined as being empty and must be overloaded by the user
when the asynchronous callback model is used. This is the method which
will be executed when the server reply from a write\_attribute(s) is
received in both push and pull sub-mode.

Parameters
    +-------+----------------------------+
    | awe   | The write attribute data   |
    +-------+----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------+-----+---- |                                      |
| +                                    |                                      |
| | virtual void Tango::CallBack::cmd\ |                                      |
| _ended   | (   | `CmdDoneEvent <../. |                                      |
| ./dc/d43/classTango_1_1CmdDoneEvent. |                                      |
| html>`__ \*    | *cde*   | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Asynchronous command execution callback method.

This method is defined as being empty and must be overloaded by the user
when the asynchronous callback model is used. This is the method which
will be executed when the server reply from a command\_inout is received
in both push and pull sub-mode.

Parameters
    +-------+--------------------+
    | cde   | The command data   |
    +-------+--------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+--------+-----+----+      |                                      |
| | virtual void Tango::CallBack::push |                                      |
| \_event   | (   | `EventData <../../ |                                      |
| d7/d5f/classTango_1_1EventData.html> |                                      |
| `__ \*    | *ed*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ----------+--------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Event callback method.

This method is defined as being empty and must be overloaded by the user
when events are used. This is the method which will be executed when the
server send event(s) to the client.

Parameters
    +------+------------------+
    | ed   | The event data   |
    +------+------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
| | virtual void Tango::CallBack::push |                                      |
| \_event   | (   | `AttrConfEventData |                                      |
|  <../../d9/da1/classTango_1_1AttrCon |                                      |
| fEventData.html>`__ \*    | *ace*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

attribute configuration change event callback method

This method is defined as being empty and must be overloaded by the user
when events are used. This is the method which will be executed when the
server send attribute configuration change event(s) to the client.

Parameters
    +-------+-------------------------------------------------+
    | ace   | The attribute configuration change event data   |
    +-------+-------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| --+-----+----+                       |                                      |
| | virtual void Tango::CallBack::push |                                      |
| \_event   | (   | `DataReadyEventDat |                                      |
| a <../../df/d39/classTango_1_1DataRe |                                      |
| adyEventData.html>`__ \*    | *dre*  |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Data ready event callback method.

This method is defined as being empty and must be overloaded by the user
when events are used. This is the method which will be executed when the
server send attribute data ready event(s) to the client.

Parameters
    +-------+-----------------------------+
    | dre   | The data ready event data   |
    +-------+-----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +---------+-----+----+               |                                      |
| | virtual void Tango::CallBack::push |                                      |
| \_event   | (   | `DevIntrChangeEven |                                      |
| tData <../../db/d47/classTango_1_1De |                                      |
| vIntrChangeEventData.html>`__ \*     |                                      |
| | *dic*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +---------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Device interface change event callback method.

This method is defined as being empty and must be overloaded by the user
when events are used. This is the method which will be executed when the
server send device interface change event(s) to the client.

Parameters
    +-------+------------------------------------------+
    | dic   | The device interface change event data   |
    +-------+------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------+---------+-----+- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::CallBack::push |                                      |
| \_event   | (   | `PipeEventData <.. |                                      |
| /../d8/d0d/classTango_1_1PipeEventDa |                                      |
| ta.html>`__ \*    | *ped*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------+---------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ event callback method.

This method is defined as being empty and must be overloaded by the user
when events are used. This is the method which will be executed when the
server send pipe event(s) to the client.

Parameters
    +-------+-----------------------+
    | ped   | The pipe event data   |
    +-------+-----------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +------------------------------+     | friend                               |
| | friend class EventConsumer   |     |                                      |
| +------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ----------+                          |                                      |
| | friend class EventConsumerKeepAliv |                                      |
| eThread   |                          |                                      |
| +----------------------------------- |                                      |
| ----------+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devasyn.h <../../db/d02/devasyn_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
