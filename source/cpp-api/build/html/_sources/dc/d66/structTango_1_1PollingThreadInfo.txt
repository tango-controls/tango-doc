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

`Public Member Functions <#pub-methods>`__ \| `Public
Attributes <#pub-attribs>`__ \| `List of all
members <../../d2/d16/structTango_1_1PollingThreadInfo-members.html>`__

Tango::PollingThreadInfo Struct Reference

``#include "utils.h"``

Public Member Functions
-----------------------

 

`PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html#af876c42e90deca5c9d47fe7987366c2e>`__
()

 

Public Attributes
-----------------

int 

`nb\_polled\_objects <../../dc/d66/structTango_1_1PollingThreadInfo.html#a263e8adedff07f0b831780e349a9a7d0>`__

 

TangoMonitor 

`poll\_mon <../../dc/d66/structTango_1_1PollingThreadInfo.html#a37f783d36e383cf347ccacab3387aa51>`__

 

PollThread \* 

`poll\_th <../../dc/d66/structTango_1_1PollingThreadInfo.html#a32ce4856c38b4bbc52564f24e61c7321>`__

 

vector< string > 

`polled\_devices <../../dc/d66/structTango_1_1PollingThreadInfo.html#aba7953103780bcc5f3e93ad265b61ea1>`__

 

PollThCmd 

`shared\_data <../../dc/d66/structTango_1_1PollingThreadInfo.html#a34ac72f11342fa6246db3ff04c8dc032>`__

 

int 

`smallest\_upd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a04264b5d754e7559ad8ad67fff69a110>`__

 

int 

`thread\_id <../../dc/d66/structTango_1_1PollingThreadInfo.html#a0ed194258705e10b4b4b8b132e4687dd>`__

 

vector< DevVarLongStringArray \* > 

`v\_poll\_cmd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a8b8d1a40cf642511070d7fb097f74a28>`__

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----+-----+----+  |                                      |
| | Tango::PollingThreadInfo::PollingT |                                      |
| hreadInfo   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+-----------------------------------------------------+
| int Tango::PollingThreadInfo::nb\_polled\_objects   |
+-----------------------------------------------------+

+----------------------------------------------------+
| TangoMonitor Tango::PollingThreadInfo::poll\_mon   |
+----------------------------------------------------+

+---------------------------------------------------+
| PollThread\* Tango::PollingThreadInfo::poll\_th   |
+---------------------------------------------------+

+------------------------------------------------------------+
| vector<string> Tango::PollingThreadInfo::polled\_devices   |
+------------------------------------------------------------+

+----------------------------------------------------+
| PollThCmd Tango::PollingThreadInfo::shared\_data   |
+----------------------------------------------------+

+-----------------------------------------------+
| int Tango::PollingThreadInfo::smallest\_upd   |
+-----------------------------------------------+

+--------------------------------------------+
| int Tango::PollingThreadInfo::thread\_id   |
+--------------------------------------------+

+---------------------------------------------------------------------------+
| vector<DevVarLongStringArray \*> Tango::PollingThreadInfo::v\_poll\_cmd   |
+---------------------------------------------------------------------------+

--------------

The documentation for this struct was generated from the following file:

-  `utils.h <../../d5/d60/utils_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
