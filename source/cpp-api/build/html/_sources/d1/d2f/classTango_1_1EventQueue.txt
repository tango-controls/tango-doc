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
members <../../d1/d60/classTango_1_1EventQueue-members.html>`__

Tango::EventQueue Class Reference

``#include "event.h"``

Public Member Functions
-----------------------

 

`EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#aff28e8d8ab5c02d96623653e3fc58655>`__
()

 

 

`EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#ae211fc963322443c42177491f3fc683e>`__
(long max\_size)

 

 

`~EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#a3a80d06ad50ff07a6f6222f10492904c>`__
()

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__
(`EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__
&event\_list)

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#a5ddc5a7c99857240c0409b58a01fa8e8>`__
(`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__
&event\_list)

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#ae725ae4162089ffd103d723aa8f43f63>`__
(`DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__
&event\_list)

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#aa3a13d020e48d38efc3cba8343d74fcd>`__
(`DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__
&event\_list)

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#a7eee85961e8b24b17a6d38c9383b7e17>`__
(`PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__
&event\_list)

 

void 

`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#a5bb7d32d1ebbbd187b2c9f0cc6291ca9>`__
(`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb)

 

TimeVal 

`get\_last\_event\_date <../../d1/d2f/classTango_1_1EventQueue.html#a505546a336dc7cccbb0b2a9427446d93>`__
()

 

void 

`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__
(`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ \*new\_event)

 

void 

`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a0fcc98a018ca2d373e243ecdcd2c3daf>`__
(`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*new\_event)

 

void 

`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a0c495ad7768218dabf49a9e89ccc3865>`__
(`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
\*new\_event)

 

void 

`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#ab83393ffa3c91ff21a56a6ee15f730f0>`__
(`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
\*new\_event)

 

void 

`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#add6e7ebf477c757e9f5abc3d747cb174>`__
(`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
\*new\_event)

 

bool 

`is\_empty <../../d1/d2f/classTango_1_1EventQueue.html#ac1823d42d92c9b4faf6317a0a08be94e>`__
()

 

int 

`size <../../d1/d2f/classTango_1_1EventQueue.html#a0ab7cfe0b9b255a9928478eddd8f955c>`__
()

 

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------+-----+----+-----+----+
| Tango::EventQueue::EventQueue   | (   |    | )   |    |
+---------------------------------+-----+----+-----+----+

+---------------------------------+-----+---------+---------------+-----+----+
| Tango::EventQueue::EventQueue   | (   | long    | *max\_size*   | )   |    |
+---------------------------------+-----+---------+---------------+-----+----+

+----------------------------------+-----+----+-----+----+
| Tango::EventQueue::~EventQueue   | (   |    | )   |    |
+----------------------------------+-----+----+-----+----+

Member Function Documentation
-----------------------------

+---------------------------------------+-----+------------------------------------------------------------------------+-----------------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__ &    | *event\_list*   | )   |    |
+---------------------------------------+-----+------------------------------------------------------------------------+-----------------+-----+----+

+---------------------------------------+-----+----------------------------------------------------------------------------------------+-----------------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__ &    | *event\_list*   | )   |    |
+---------------------------------------+-----+----------------------------------------------------------------------------------------+-----------------+-----+----+

+---------------------------------------+-----+------------------------------------------------------------------------------------------+-----------------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__ &    | *event\_list*   | )   |    |
+---------------------------------------+-----+------------------------------------------------------------------------------------------+-----------------+-----+----+

+---------------------------------------+-----+--------------------------------------------------------------------------------------------------+-----------------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__ &    | *event\_list*   | )   |    |
+---------------------------------------+-----+--------------------------------------------------------------------------------------------------+-----------------+-----+----+

+---------------------------------------+-----+--------------------------------------------------------------------------------+-----------------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__ &    | *event\_list*   | )   |    |
+---------------------------------------+-----+--------------------------------------------------------------------------------+-----------------+-----+----+

+---------------------------------------+-----+---------------------------------------------------------------+--------+-----+----+
| void Tango::EventQueue::get\_events   | (   | `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*    | *cb*   | )   |    |
+---------------------------------------+-----+---------------------------------------------------------------+--------+-----+----+

+-----------------------------------------------------+-----+----+-----+----+
| TimeVal Tango::EventQueue::get\_last\_event\_date   | (   |    | )   |    |
+-----------------------------------------------------+-----+----+-----+----+

+-----------------------------------------+-----+-----------------------------------------------------------------+----------------+-----+----+
| void Tango::EventQueue::insert\_event   | (   | `EventData <../../d7/d5f/classTango_1_1EventData.html>`__ \*    | *new\_event*   | )   |    |
+-----------------------------------------+-----+-----------------------------------------------------------------+----------------+-----+----+

+-----------------------------------------+-----+---------------------------------------------------------------------------------+----------------+-----+----+
| void Tango::EventQueue::insert\_event   | (   | `AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__ \*    | *new\_event*   | )   |    |
+-----------------------------------------+-----+---------------------------------------------------------------------------------+----------------+-----+----+

+-----------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+-----+----+
| void Tango::EventQueue::insert\_event   | (   | `DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__ \*    | *new\_event*   | )   |    |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------+----------------+-----+----+

+-----------------------------------------+-----+-------------------------------------------------------------------------------------------+----------------+-----+----+
| void Tango::EventQueue::insert\_event   | (   | `DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__ \*    | *new\_event*   | )   |    |
+-----------------------------------------+-----+-------------------------------------------------------------------------------------------+----------------+-----+----+

+-----------------------------------------+-----+-------------------------------------------------------------------------+----------------+-----+----+
| void Tango::EventQueue::insert\_event   | (   | `PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__ \*    | *new\_event*   | )   |    |
+-----------------------------------------+-----+-------------------------------------------------------------------------+----------------+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+----+-----+----+            |                                      |
| | bool Tango::EventQueue::is\_empty  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+-------------------------------+-----+----+-----+----+
| int Tango::EventQueue::size   | (   |    | )   |    |
+-------------------------------+-----+----+-----+----+

--------------

The documentation for this class was generated from the following file:

-  `event.h <../../dd/d20/event_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `EventQueue <../../d1/d2f/classTango_1_1EventQueue.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
