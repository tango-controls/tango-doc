+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `File List <../../files.html>`__
-  `File Members <../../globals.html>`__

`Classes <#nested-classes>`__ \| `Namespaces <#namespaces>`__ \|
`Macros <#define-members>`__ \| `Typedefs <#typedef-members>`__ \|
`Enumerations <#enum-members>`__ \| `Functions <#func-members>`__

devapi.h File Reference

| ``#include <tango.h>``
|  ``#include <tango/server/tango_const.h>``
|  ``#include <tango/client/apiexcept.h>``
|  ``#include <tango/client/cbthread.h>``
|  ``#include <tango/client/lockthread.h>``
|  ``#include <tango/server/readers_writers_lock.h>``
|  ``#include <bitset>``
|  ``#include "ApiUtil.h"``
|  ``#include "DeviceData.h"``
|  ``#include "DevicePipe.h"``
|  ``#include "DeviceAttribute.h"``
|  ``#include "Connection.h"``
|  ``#include "DeviceProxy.h"``
|  ``#include "AttributeProxy.h"``

Include dependency graph for devapi.h:

|image1|

This graph shows which files directly or indirectly include this file:

|image2|

`Go to the source code of this
file. <../../d9/ddc/devapi_8h_source.html>`__

Classes
-------

struct  

`Tango::\_DeviceInfo <../../d2/d46/structTango_1_1__DeviceInfo.html>`__

 

class  

`Tango::\_KillProc\_ <../../d5/d70/classTango_1_1__KillProc__.html>`__

 

class  

`Tango::ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__

 

| Miscellaneous utility methods usefull in a
`Tango <../../de/ddf/namespaceTango.html>`__ client.
`More... <../../d7/d2a/classTango_1_1ApiUtil.html#details>`__

 

struct  

`Tango::ArchiveEventInfo <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ archive
event configuration.
`More... <../../d1/d29/structTango_1_1ArchiveEventInfo.html#details>`__

 

struct  

`Tango::AttributeAlarmInfo <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ alarms
configuration.
`More... <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#details>`__

 

struct  

`Tango::AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__

 

struct  

`Tango::AttributeEventInfo <../../da/dce/structTango_1_1AttributeEventInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ event
configuration.
`More... <../../da/dce/structTango_1_1AttributeEventInfo.html#details>`__

 

struct  

`Tango::AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
configuration data extension.
`More... <../../df/dab/structTango_1_1AttributeInfo.html#details>`__

 

struct  

`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__

 

| Extended attribute configuration data.
`More... <../../d3/d71/structTango_1_1AttributeInfoEx.html#details>`__

 

class  

`Tango::AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__

 

| Easy to use interface to `Tango <../../de/ddf/namespaceTango.html>`__
device attribute.
`More... <../../d3/d4b/classTango_1_1AttributeProxy.html#details>`__

 

class  

`Tango::AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html>`__

 

Small utility classes
---------------------

| `More... <../../df/db5/classTango_1_1AutoConnectTimeout.html#details>`__

 

struct  

`Tango::ChangeEventInfo <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ change event
configuration.
`More... <../../d9/d49/structTango_1_1ChangeEventInfo.html#details>`__

 

struct  

`Tango::CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__

 

| `Command <../../d2/d1d/classTango_1_1Command.html>`__ information data
extension.
`More... <../../d3/d96/structTango_1_1CommandInfo.html#details>`__

 

class  

`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

 

| Base class for `Tango <../../de/ddf/namespaceTango.html>`__ device
access. `More... <../../d7/de8/classTango_1_1Connection.html#details>`__

 

struct  

`Tango::DataElement< T
> <../../d0/d0c/structTango_1_1DataElement.html>`__

 

| Fundamental type for extracting data from a device pipe blob.
`More... <../../d0/d0c/structTango_1_1DataElement.html#details>`__

 

struct  

`Tango::DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

 

| Base structure for command information.
`More... <../../d0/dfd/structTango_1_1DevCommandInfo.html#details>`__

 

class  

`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

 

| Fundamental type for sending an dreceiving data to and from device
attributes.
`More... <../../d7/dca/classTango_1_1DeviceAttribute.html#details>`__

 

struct  

`Tango::DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__

 

| Base structure for
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration.
`More... <../../db/d74/structTango_1_1DeviceAttributeConfig.html#details>`__

 

class  

`Tango::DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__

 

| Fundamental type for receiving data from device attribute polling
buffers.
`More... <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#details>`__

 

class  

`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

 

| Fundamental type for sending and receiving data from device commands.
`More... <../../df/d22/classTango_1_1DeviceData.html#details>`__

 

class  

`Tango::DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__

 

| Fundamental type for receiving data from device command polling
buffers.
`More... <../../d8/dc0/classTango_1_1DeviceDataHistory.html#details>`__

 

class  

`Tango::DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__

 

| Fundamental type for sending/receiving data from device pipes.
`More... <../../da/dc5/classTango_1_1DevicePipe.html#details>`__

 

class  

`Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__

 

| A device pipe blob.
`More... <../../df/dd9/classTango_1_1DevicePipeBlob.html#details>`__

 

class  

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

 

| High level class which provides the client with an easy-to-use
interface to TANGO devices.
`More... <../../d9/d83/classTango_1_1DeviceProxy.html#details>`__

 

class  

`Tango::DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html>`__

 

union  

`Tango::LockerId <../../d8/d7f/unionTango_1_1LockerId.html>`__

 

struct  

`Tango::LockerInfo <../../dd/d39/structTango_1_1LockerInfo.html>`__

 

struct  

`Tango::LockingThread <../../d0/d41/structTango_1_1LockingThread.html>`__

 

struct  

`Tango::PeriodicEventInfo <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ periodic
event configuration.
`More... <../../d6/d55/structTango_1_1PeriodicEventInfo.html#details>`__

 

struct  

`Tango::PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__

 

| Base structure for pipe information.
`More... <../../d8/d04/structTango_1_1PipeInfo.html#details>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`CONNECTION\_NOTOK <../../d9/ddc/devapi_8h.html#ad5fa52feb9025532cea9d330e28d51aa>`__   0

 

#define 

`CONNECTION\_OK <../../d9/ddc/devapi_8h.html#a63df0a7f4d69d411be47d312a0f28ebf>`__   1

 

#define 

`COPY\_ALARM\_CONFIG <../../d9/ddc/devapi_8h.html#aba49d44855cac4267f984f3da452ef18>`__\ (A,
B)

 

#define 

`COPY\_BASE\_CONFIG <../../d9/ddc/devapi_8h.html#a212fe5b444c8a877f2e51baeb2436921>`__\ (A,
B)

 

#define 

`COPY\_EVENT\_CONFIG <../../d9/ddc/devapi_8h.html#ab5f7c287c880797594b14f91b6115c11>`__\ (A,
B)

 

#define 

`DBASE\_NO <../../d9/ddc/devapi_8h.html#a947f7b71bf3b735ec5f985b98e8408af>`__   "dbase=no"

 

#define 

`DBASE\_YES <../../d9/ddc/devapi_8h.html#a5357c09cf268a3b18c52a1381d5840c6>`__   "dbase=yes"

 

#define 

`DEV\_NAME\_FIELD\_SEP <../../d9/ddc/devapi_8h.html#a76a0ee5e0ec87fb1c3b7312018ad4255>`__   '/'

 

#define 

`DEVICE\_SEP <../../d9/ddc/devapi_8h.html#ae42ac97d0f548932d9a1da8f2bd9844f>`__   '/'

 

#define 

`FROM\_IOR <../../d9/ddc/devapi_8h.html#a26bc7754535586390fbe30623760e254>`__   "IOR"

 

#define 

`HOST\_SEP <../../d9/ddc/devapi_8h.html#a069365e28330f206f735a1e4843ef313>`__   ':'

 

#define 

`MODIFIER <../../d9/ddc/devapi_8h.html#ab915b57fc77348add935a3aff8b547a1>`__   '#'

 

#define 

`MODIFIER\_DBASE\_NO <../../d9/ddc/devapi_8h.html#a809ec615c48b8d104b92904520826201>`__   "#dbase=no"

 

#define 

`NOT\_USED <../../d9/ddc/devapi_8h.html#af19bd6c1a125bbcb95028adc2aaddfb1>`__   "Unused"

 

#define 

`PORT\_SEP <../../d9/ddc/devapi_8h.html#a82e4983f9ea1c5d1a262dcdb58f7b805>`__   '/'

 

#define 

`PROT\_SEP <../../d9/ddc/devapi_8h.html#ad30310d84397f2d7d9d25cebb6bd7c86>`__   "://"

 

#define 

`READ\_ATT\_EXCEPT <../../d9/ddc/devapi_8h.html#a5b2352705b0926360e354673fc237148>`__\ (NAME\_CHAR,
OBJ)

 

Some macros
-----------

| `More... <#a5b2352705b0926360e354673fc237148>`__

 

#define 

`RES\_SEP <../../d9/ddc/devapi_8h.html#af26fc406280186045444fa1c6c314ea1>`__   "->"

 

#define 

`TACO\_PROTOCOL <../../d9/ddc/devapi_8h.html#afdf7c4231304a360aefbf69ac8cf4739>`__   "taco"

 

#define 

`TANGO\_PROTOCOL <../../d9/ddc/devapi_8h.html#a20a67da887c3cabf0f41bede062fff6d>`__   "tango"

 

Typedefs
--------

| typedef struct
| 
`Tango::ArchiveEventInfo <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__ 

`Tango::ArchiveEventInfo <../../d1/d45/group__Client.html#ga9a2aca65efc6caf661f33f5886695dcc>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ archive
event configuration.
`More... <../../d1/d45/group__Client.html#ga9a2aca65efc6caf661f33f5886695dcc>`__

 

| typedef struct
| 
`Tango::AttributeAlarmInfo <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__ 

`Tango::AttributeAlarmInfo <../../d1/d45/group__Client.html#ga05d242f249708dcd595c8f022917de27>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ alarms
configuration.
`More... <../../d1/d45/group__Client.html#ga05d242f249708dcd595c8f022917de27>`__

 

| typedef struct
| 
`Tango::AttributeEventInfo <../../da/dce/structTango_1_1AttributeEventInfo.html>`__ 

`Tango::AttributeEventInfo <../../d1/d45/group__Client.html#gafbe27a305aed98cb963bacb178c78859>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ event
configuration.
`More... <../../d1/d45/group__Client.html#gafbe27a305aed98cb963bacb178c78859>`__

 

typedef
`Tango::AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__ 

`Tango::AttributeInfo <../../d1/d45/group__Client.html#gad3bc51cab7995f9e00f253b183924ae9>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
configuration data extension.
`More... <../../d1/d45/group__Client.html#gad3bc51cab7995f9e00f253b183924ae9>`__

 

typedef
`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ 

`Tango::AttributeInfoEx <../../d1/d45/group__Client.html#ga09323cc9a29673f93f38e5e0190c6be6>`__

 

| Extended attribute configuration data.
`More... <../../d1/d45/group__Client.html#ga09323cc9a29673f93f38e5e0190c6be6>`__

 

typedef vector< AttributeInfo > 

`Tango::AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__

 

typedef vector< AttributeInfoEx > 

`Tango::AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__

 

| vector of
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
structure
`More... <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__

 

| typedef enum
| 
`Tango::\_AttrMemorizedType <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__ 

`Tango::AttrMemorizedType <../../d1/d45/group__Client.html#gae59d9d9726e3916b6a49bda9de1bff2c>`__

 

| Possible memorized attribute type.
`More... <../../d1/d45/group__Client.html#gae59d9d9726e3916b6a49bda9de1bff2c>`__

 

| typedef struct
| 
`Tango::ChangeEventInfo <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__ 

`Tango::ChangeEventInfo <../../d1/d45/group__Client.html#gad6df317aebc920b1e9489cc83d80f2c0>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ change event
configuration.
`More... <../../d1/d45/group__Client.html#gad6df317aebc920b1e9489cc83d80f2c0>`__

 

typedef
`Tango::CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ 

`Tango::CommandInfo <../../d1/d45/group__Client.html#ga0e7b3d0d4f4606a890d79fdee1581f18>`__

 

| `Command <../../d2/d1d/classTango_1_1Command.html>`__ information data
extension.
`More... <../../d1/d45/group__Client.html#ga0e7b3d0d4f4606a890d79fdee1581f18>`__

 

typedef vector< CommandInfo > 

`Tango::CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__

 

| A vector of
`CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__
structure.
`More... <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__

 

| typedef struct
| 
`Tango::DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__ 

`Tango::DevCommandInfo <../../de/ddf/namespaceTango.html#ab853e559703141ec81b1c30a5c9d88d2>`__

 

| Base structure for command information.
`More... <#ab853e559703141ec81b1c30a5c9d88d2>`__

 

| typedef struct
| 
`Tango::DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__ 

`Tango::DeviceAttributeConfig <../../de/ddf/namespaceTango.html#a2926592cba03eca7ecf3ab28587f19f0>`__

 

| Base structure for
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration.
`More... <#a2926592cba03eca7ecf3ab28587f19f0>`__

 

typedef vector< DeviceDataHistory > 

`Tango::DeviceDataHistoryList <../../de/ddf/namespaceTango.html#aa64a337e34f9bfb5207ba07aa7cd51f9>`__

 

typedef \_DeviceInfo 

`Tango::DeviceInfo <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__

 

| typedef struct
| 
`Tango::PeriodicEventInfo <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__ 

`Tango::PeriodicEventInfo <../../d1/d45/group__Client.html#ga6795ae3557967c7d684ea7fc2c2ae470>`__

 

| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ periodic
event configuration.
`More... <../../d1/d45/group__Client.html#ga6795ae3557967c7d684ea7fc2c2ae470>`__

 

typedef struct
`Tango::PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__ 

`Tango::PipeInfo <../../de/ddf/namespaceTango.html#ad35a82291acaf683a0c33416db790f0f>`__

 

| Base structure for pipe information.
`More... <#ad35a82291acaf683a0c33416db790f0f>`__

 

typedef vector< PipeInfo > 

`Tango::PipeInfoList <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__

 

Enumerations
------------

enum  

| `Tango::\_AttrMemorizedType <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__
{
| 
  `Tango::NOT\_KNOWN <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124abf2e9bbaf87fc8c3446b88b7422c86b7>`__,
| 
  `Tango::NONE <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a77d085684a448679e0729b6b444b2639>`__,
| 
  `Tango::MEMORIZED <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a1c81faba262469013aee0d8dd975f378>`__,
| 
  `Tango::MEMORIZED\_WRITE\_INIT <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a12c0889f5b2cd005995da692bbc1e3ae>`__
|  }

 

| Possible memorized attribute type.
`More... <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__

 

enum  

| `Tango::asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__
{
| 
  `Tango::POLLING <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0c8c20bdddc6ba94c2c8465da593e80c>`__,
| 
  `Tango::CALL\_BACK <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0d735acd8a950dd8379589f3b3a392c1>`__,
| 
  `Tango::ALL\_ASYNCH <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a5f52f099a007030f3d4bca03801df6e7>`__
|  }

 

| Possible asynchronous request type.
`More... <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__

 

enum  

| `Tango::cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__
{
| 
  `Tango::PUSH\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca776212fa9631a1e9b40990653ea37f87>`__,
| 
  `Tango::PULL\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca3542fc1395bd94ac0429ee11ea9e1275>`__
|  }

 

| Possible callback mode.
`More... <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__

 

Functions
---------

template<typename T >

ostream & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#af1449c9b63da19c13c76969f773fe421>`__
(ostream &, DataElement< T > &)

 

template<typename T >

ostream & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a4f8c241fa20a48f90eca3cbb508fcc31>`__
(ostream &, DataElement< vector< T > > &)

 

template<typename T >

ostream & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#ac851bc165cd495d19fb72e0452645a5a>`__
(ostream &, DataElement< T \* > &)

 

template<typename T >

DevicePipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a699cda57d7cf82b6a6de56f9cd26a4ab>`__
(DevicePipe &, T &)

 

template<typename T >

DevicePipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a30d67e212be8216ceeaa0e8bbb25a0fa>`__
(DevicePipe &, T \*)

 

template<typename T >

DevicePipe & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a055454e21313a73c486b09e9d9b5006c>`__
(DevicePipe &, DataElement< T > &)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#ae4a9f51e3f4bdcfb77f530777e63ef5d>`__
(DevicePipeBlob &, T &)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#a0cf48f433f5631d9530ae67ea3d58215>`__
(DevicePipeBlob &, T \*)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__
(DevicePipeBlob &, DataElement< T > &)

 

DevicePipe & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#a4f698a3767095fb832edfa13ff42d9bb>`__
(DevicePipe &\_dp, char \*&datum)

 

template<typename T >

DevicePipe & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#aac87d3be80e5030b41f56e8945d6986f>`__
(DevicePipe &, T &)

 

template<typename T >

DevicePipe & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#a1ed235d423468731853c7cf4527ab1c1>`__
(DevicePipe &, T \*)

 

template<typename T >

DevicePipe & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#a5d03574e7ee687a69b01ee953e7b86e6>`__
(DevicePipe &, DataElement< T > &)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#a8ca3bdd2e5aa06cce63a49a812c6677f>`__
(DevicePipeBlob &, T &)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#a98b35cbb876726fbeb5f5443ff8a77f9>`__
(DevicePipeBlob &, T \*)

 

template<typename T >

DevicePipeBlob & 

`Tango::operator>> <../../de/ddf/namespaceTango.html#accfe1a561bb9dc0cacf995ebc7fd3176>`__
(DevicePipeBlob &, DataElement< T > &)

 

Macro Definition Documentation
------------------------------

+---------------------------------+
| #define CONNECTION\_NOTOK   0   |
+---------------------------------+

+------------------------------+
| #define CONNECTION\_OK   1   |
+------------------------------+

+-------------------------------+-----+-----+------+
| #define COPY\_ALARM\_CONFIG   | (   |     | A,   |
+-------------------------------+-----+-----+------+
|                               |     |     | B    |
+-------------------------------+-----+-----+------+
|                               | )   |     |      |
+-------------------------------+-----+-----+------+

**Value:**

A[i].alarms.min\_alarm = B[i].att\_alarm.min\_alarm; \\

A[i].alarms.max\_alarm = B[i].att\_alarm.max\_alarm; \\

A[i].alarms.min\_warning = B[i].att\_alarm.min\_warning; \\

A[i].alarms.max\_warning = B[i].att\_alarm.max\_warning; \\

A[i].alarms.delta\_t = B[i].att\_alarm.delta\_t; \\

A[i].alarms.delta\_val = B[i].att\_alarm.delta\_val; \\

A[i].alarms.extensions.resize(B[i].att\_alarm.extensions.length()); \\

for (size\_t j=0; j<B[i].att\_alarm.extensions.length(); j++) \\

{ \\

A[i].alarms.extensions[j] = B[i].att\_alarm.extensions[j]; \\

}

+------------------------------+-----+-----+------+
| #define COPY\_BASE\_CONFIG   | (   |     | A,   |
+------------------------------+-----+-----+------+
|                              |     |     | B    |
+------------------------------+-----+-----+------+
|                              | )   |     |      |
+------------------------------+-----+-----+------+

**Value:**

A[i].name = B[i].name; \\

A[i].writable = B[i].writable; \\

A[i].data\_format = B[i].data\_format; \\

A[i].data\_type = B[i].data\_type; \\

A[i].max\_dim\_x = B[i].max\_dim\_x; \\

A[i].max\_dim\_y = B[i].max\_dim\_y; \\

A[i].description = B[i].description; \\

A[i].label = B[i].label; \\

A[i].unit = B[i].unit; \\

A[i].standard\_unit = B[i].standard\_unit; \\

A[i].display\_unit = B[i].display\_unit; \\

A[i].format = B[i].format; \\

A[i].min\_value = B[i].min\_value; \\

A[i].max\_value = B[i].max\_value; \\

A[i].writable\_attr\_name = B[i].writable\_attr\_name; \\

A[i].extensions.resize(B[i].extensions.length()); \\

for (size\_t j=0; j<B[i].extensions.length(); j++) \\

{ \\

A[i].extensions[j] = B[i].extensions[j]; \\

}

+-------------------------------+-----+-----+------+
| #define COPY\_EVENT\_CONFIG   | (   |     | A,   |
+-------------------------------+-----+-----+------+
|                               |     |     | B    |
+-------------------------------+-----+-----+------+
|                               | )   |     |      |
+-------------------------------+-----+-----+------+

**Value:**

A[i].events.ch\_event.rel\_change =
B[i].event\_prop.ch\_event.rel\_change; \\

A[i].events.ch\_event.abs\_change =
B[i].event\_prop.ch\_event.abs\_change; \\

A[i].events.ch\_event.extensions.resize(B[i].event\_prop.ch\_event.extensions.length());
\\

for (size\_t j=0; j<B[i].event\_prop.ch\_event.extensions.length(); j++)
\\

{ \\

A[i].events.ch\_event.extensions[j] =
B[i].event\_prop.ch\_event.extensions[j]; \\

} \\

\\

A[i].events.per\_event.period = B[i].event\_prop.per\_event.period; \\

A[i].events.per\_event.extensions.resize(B[i].event\_prop.per\_event.extensions.length());
\\

for (size\_t j=0; j<B[i].event\_prop.per\_event.extensions.length();
j++) \\

{ \\

A[i].events.per\_event.extensions[j] =
B[i].event\_prop.per\_event.extensions[j]; \\

} \\

\\

A[i].events.arch\_event.archive\_rel\_change =
B[i].event\_prop.arch\_event.rel\_change; \\

A[i].events.arch\_event.archive\_abs\_change =
B[i].event\_prop.arch\_event.abs\_change; \\

A[i].events.arch\_event.archive\_period =
B[i].event\_prop.arch\_event.period; \\

A[i].events.arch\_event.extensions.resize(B[i].event\_prop.arch\_event.extensions.length());
\\

for (size\_t j=0; j<B[i].event\_prop.arch\_event.extensions.length();
j++) \\

{ \\

A[i].events.arch\_event.extensions[j] =
B[i].event\_prop.arch\_event.extensions[j]; \\

}

+----------------------------------+
| #define DBASE\_NO   "dbase=no"   |
+----------------------------------+

+------------------------------------+
| #define DBASE\_YES   "dbase=yes"   |
+------------------------------------+

+---------------------------------------+
| #define DEV\_NAME\_FIELD\_SEP   '/'   |
+---------------------------------------+

+-----------------------------+
| #define DEVICE\_SEP   '/'   |
+-----------------------------+

+-----------------------------+
| #define FROM\_IOR   "IOR"   |
+-----------------------------+

+---------------------------+
| #define HOST\_SEP   ':'   |
+---------------------------+

+--------------------------+
| #define MODIFIER   '#'   |
+--------------------------+

+---------------------------------------------+
| #define MODIFIER\_DBASE\_NO   "#dbase=no"   |
+---------------------------------------------+

+--------------------------------+
| #define NOT\_USED   "Unused"   |
+--------------------------------+

+---------------------------+
| #define PORT\_SEP   '/'   |
+---------------------------+

+-----------------------------+
| #define PROT\_SEP   "://"   |
+-----------------------------+

+-----------------------------+-----+-----+---------------+
| #define READ\_ATT\_EXCEPT   | (   |     | NAME\_CHAR,   |
+-----------------------------+-----+-----+---------------+
|                             |     |     | OBJ           |
+-----------------------------+-----+-----+---------------+
|                             | )   |     |               |
+-----------------------------+-----+-----+---------------+

Some macros
-----------

+---------------------------+
| #define RES\_SEP   "->"   |
+---------------------------+

+-----------------------------------+
| #define TACO\_PROTOCOL   "taco"   |
+-----------------------------------+

+-------------------------------------+
| #define TANGO\_PROTOCOL   "tango"   |
+-------------------------------------+

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `devapi.h <../../d9/ddc/devapi_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d5/d5b/devapi_8h__incl.png
.. |image2| image:: ../../d7/d22/devapi_8h__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
