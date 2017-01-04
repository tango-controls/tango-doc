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

devapi.h

`Go to the documentation of this file. <../../d9/ddc/devapi_8h.html>`__

1 //=====================================================================================================================

2 //

3 // devapi.h - include file for TANGO device api

4 //

5 //

6 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

7 // European Synchrotron Radiation Facility

8 // BP 220, Grenoble 38043

9 // FRANCE

10 //

11 // This file is part of Tango.

12 //

13 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

14 // License as published by the Free Software Foundation, either
version 3 of the License, or

15 // (at your option) any later version.

16 //

17 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

18 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

19 // GNU Lesser General Public License for more details.

20 //

21 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

22 // If not, see <http://www.gnu.org/licenses/>.

23 //

24 // $Revision$

25 //

26 //====================================================================================================================

27 

28 #ifndef \_DEVAPI\_H

29 #define \_DEVAPI\_H

`30 <../../d9/ddc/devapi_8h.html>`__ 

31 #include <tango.h>

`32 <../../d9/ddc/devapi_8h.html>`__ #include
<`tango/server/tango\_const.h <../../d4/d13/tango__const_8h.html>`__\ >

`33 <../../d9/ddc/devapi_8h.html>`__ #include
<`tango/client/apiexcept.h <../../d3/d7a/apiexcept_8h.html>`__\ >

34 #include <tango/client/cbthread.h>

35 #include <tango/client/lockthread.h>

36 #include <tango/server/readers\_writers\_lock.h>

37 

38 #include <bitset>

39 

40 using namespace `std <../../d8/dcc/namespacestd.html>`__;

41 

42 namespace `Tango <../../de/ddf/namespaceTango.html>`__

43 {

44 

47 //

48 // forward declarations

49 //

50 

51 class DeviceData;

52 class DeviceAttribute;

53 class DbDevice;

54 class DbAttribute;

`55 <../../d7/d2a/classTango_1_1ApiUtil.html>`__ class
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__;

`56 <../../d9/d83/classTango_1_1DeviceProxy.html>`__ class
`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__;

57 class `Database <../../d6/dc5/classTango_1_1Database.html>`__;

`58 <../../d3/d4b/classTango_1_1AttributeProxy.html>`__ class
`AsynReq <../../d4/d49/classTango_1_1AsynReq.html>`__;

59 class NotifdEventConsumer;

60 class ZmqEventConsumer;

61 class `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__;

62 class
`AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__;

63 class TangoMonitor;

`64 <../../df/d22/classTango_1_1DeviceData.html>`__ 

65 //

66 // Some typedef

67 //

68 

69 typedef vector<DbDatum>
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__;

70 

`71 <../../d7/d2a/classTango_1_1ApiUtil.html#a6edde9186c939355ab52dc2cffa82e8c>`__ typedef
union

72 {

`73 <../../d8/d7f/unionTango_1_1LockerId.html#a9b563ab895bb99554f04e46618290ff1>`__ 
TangoSys\_Pid
`LockerPid <../../d8/d7f/unionTango_1_1LockerId.html#a9b563ab895bb99554f04e46618290ff1>`__;

`74 <../../d8/d7f/unionTango_1_1LockerId.html#ad648fc376844a4bc06479a5c37149e22>`__ 
unsigned long UUID[4];

75 }`LockerId <../../d8/d7f/unionTango_1_1LockerId.html>`__;

`76 <../../d0/d0c/structTango_1_1DataElement.html#a9991e976d3509e95b2251727640c7282>`__ 

`77 <../../d0/d0c/structTango_1_1DataElement.html#a0b593af779503f27457d6c44ea6bff27>`__ struct
`LockerInfo <../../dd/d39/structTango_1_1LockerInfo.html>`__

78 {

`79 <../../dd/d39/structTango_1_1LockerInfo.html#a7a15276bc7ce4c7dd2ff59f8aa67f185>`__ 
LockerLanguage
`ll <../../dd/d39/structTango_1_1LockerInfo.html#a7a15276bc7ce4c7dd2ff59f8aa67f185>`__;

`80 <../../dd/d39/structTango_1_1LockerInfo.html#ac19a902ad6cc0fe15e74485cc09d3f5a>`__ 
`LockerId <../../d8/d7f/unionTango_1_1LockerId.html>`__
`li <../../dd/d39/structTango_1_1LockerInfo.html#ac19a902ad6cc0fe15e74485cc09d3f5a>`__;

`81 <../../dd/d39/structTango_1_1LockerInfo.html#ad357dac7c976f8336baeadcf8abafe81>`__ 
string
`locker\_host <../../dd/d39/structTango_1_1LockerInfo.html#ad357dac7c976f8336baeadcf8abafe81>`__;

`82 <../../dd/d39/structTango_1_1LockerInfo.html#a024019267de036847a9f7e30b2c3fe1a>`__ 
string
`locker\_class <../../dd/d39/structTango_1_1LockerInfo.html#a024019267de036847a9f7e30b2c3fe1a>`__;

83 };

84 

`85 <../../d0/d41/structTango_1_1LockingThread.html>`__ struct
`LockingThread <../../d0/d41/structTango_1_1LockingThread.html>`__

`86 <../../d0/d0c/structTango_1_1DataElement.html#af5a5d4272dde06c89b12a490a34935b0>`__ {

`87 <../../d0/d41/structTango_1_1LockingThread.html#ae8e7851b01b8c8a9a34c8044cb9ca3a9>`__ 
TangoMonitor
\*\ `mon <../../d0/d41/structTango_1_1LockingThread.html#ae8e7851b01b8c8a9a34c8044cb9ca3a9>`__;

`88 <../../d0/d41/structTango_1_1LockingThread.html#a3a3fe5fd038680368a3f32e2d190bc80>`__ 
LockThCmd
\*\ `shared <../../d0/d41/structTango_1_1LockingThread.html#a3a3fe5fd038680368a3f32e2d190bc80>`__;

`89 <../../d0/d41/structTango_1_1LockingThread.html#a98fd861b6d8fcddf32da3be51fc1ac4b>`__ 
LockThread
\*\ `l\_thread <../../d0/d41/structTango_1_1LockingThread.html#a98fd861b6d8fcddf32da3be51fc1ac4b>`__;

90 };

`91 <../../d0/d0c/structTango_1_1DataElement.html#acef99a390cec2bcd807a428992bcba81>`__ 

97 #ifdef GEN\_DOC

`98 <../../d9/d83/classTango_1_1DeviceProxy.html#af7e5f3e23d25e03f0f21824a5015c5bf>`__ typedef
struct
`DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

99 #else

100 typedef struct \_DevCommandInfo

101 #endif

102 {

`103 <../../d0/dfd/structTango_1_1DevCommandInfo.html#af0dbf63ccee65d2cb1d0f0d721a9881b>`__ 
string
`cmd\_name <../../d0/dfd/structTango_1_1DevCommandInfo.html#af0dbf63ccee65d2cb1d0f0d721a9881b>`__;

`104 <../../d0/dfd/structTango_1_1DevCommandInfo.html#ac010816c9134830bd21806807c76fda1>`__ 
long
`cmd\_tag <../../d0/dfd/structTango_1_1DevCommandInfo.html#ac010816c9134830bd21806807c76fda1>`__;

`105 <../../d0/dfd/structTango_1_1DevCommandInfo.html#ada0b412c05607021230d5780e4984eff>`__ 
long
`in\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#ada0b412c05607021230d5780e4984eff>`__;

`106 <../../d0/dfd/structTango_1_1DevCommandInfo.html#a6719a1b6a0396a2867b1b9fbd09cfe74>`__ 
long
`out\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#a6719a1b6a0396a2867b1b9fbd09cfe74>`__;

`107 <../../d0/dfd/structTango_1_1DevCommandInfo.html#ace0c93f7dfa9891f9e5845abbb8debaf>`__ 
string
`in\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#ace0c93f7dfa9891f9e5845abbb8debaf>`__;

`108 <../../d0/dfd/structTango_1_1DevCommandInfo.html#a21c04c4239a3c5657af2378aed451c1e>`__ 
string
`out\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#a21c04c4239a3c5657af2378aed451c1e>`__;

109 

111  bool operator==(const \_DevCommandInfo &);

`112 <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ }`DevCommandInfo <../../de/ddf/namespaceTango.html#ab853e559703141ec81b1c30a5c9d88d2>`__;

113 

114 

`115 <../../d7/d7a/structTango_1_1AttributeDimension.html>`__ struct
`AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__

116 {

`117 <../../d7/d7a/structTango_1_1AttributeDimension.html#a483a7f7db671828cb1fd467f34b30961>`__ 
long
`dim\_x <../../d7/d7a/structTango_1_1AttributeDimension.html#a483a7f7db671828cb1fd467f34b30961>`__;

`118 <../../d7/d7a/structTango_1_1AttributeDimension.html#aca8429fb212898c0367fcf5ab4c838a9>`__ 
long
`dim\_y <../../d7/d7a/structTango_1_1AttributeDimension.html#aca8429fb212898c0367fcf5ab4c838a9>`__;

119 };

120 

127 #ifdef GEN\_DOC

`128 <../../d3/d96/structTango_1_1CommandInfo.html>`__ typedef struct
`CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ : public
`DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

129 #else

130 typedef struct \_CommandInfo : public
`DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

131 #endif

132 {

`133 <../../d3/d96/structTango_1_1CommandInfo.html#a3750fb7df117913285dcf4db9a36b037>`__ 
Tango::DispLevel
`disp\_level <../../d3/d96/structTango_1_1CommandInfo.html#a3750fb7df117913285dcf4db9a36b037>`__;

`134 <../../d3/d4b/classTango_1_1AttributeProxy.html#a8cb7eb5b0f09011511a35a04a4d5851c>`__ 

`136 <../../d7/d2a/classTango_1_1ApiUtil.html#af7dd5dc2e904f8af4d12d56386165624>`__ 
friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&,\_CommandInfo &);

137  bool operator==(const \_CommandInfo &);

138 }`CommandInfo <../../d1/d45/group__Client.html#ga0e7b3d0d4f4606a890d79fdee1581f18>`__;

139 

`146 <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__ typedef
vector<CommandInfo>
`CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__;

147 

`148 <../../d2/d46/structTango_1_1__DeviceInfo.html>`__ struct
`\_DeviceInfo <../../d2/d46/structTango_1_1__DeviceInfo.html>`__

149 {

`150 <../../d2/d46/structTango_1_1__DeviceInfo.html#adeee0b4e5ba2ea180afbf2e22211d3b2>`__ 
string
`dev\_class <../../d2/d46/structTango_1_1__DeviceInfo.html#adeee0b4e5ba2ea180afbf2e22211d3b2>`__;

`151 <../../d2/d46/structTango_1_1__DeviceInfo.html#a2e7d98036dafa968ebef16982f49677b>`__ 
string
`server\_id <../../d2/d46/structTango_1_1__DeviceInfo.html#a2e7d98036dafa968ebef16982f49677b>`__;

`152 <../../d2/d46/structTango_1_1__DeviceInfo.html#a161e8a72fc4ee3812548f95ef9f1c209>`__ 
string
`server\_host <../../d2/d46/structTango_1_1__DeviceInfo.html#a161e8a72fc4ee3812548f95ef9f1c209>`__;

`153 <../../d2/d46/structTango_1_1__DeviceInfo.html#a45899619243d8a7e3a91fe46a6db12b3>`__ 
long
`server\_version <../../d2/d46/structTango_1_1__DeviceInfo.html#a45899619243d8a7e3a91fe46a6db12b3>`__;

`154 <../../d2/d46/structTango_1_1__DeviceInfo.html#a437472a3c6a1dbbbf7125180577e3e88>`__ 
string
`doc\_url <../../d2/d46/structTango_1_1__DeviceInfo.html#a437472a3c6a1dbbbf7125180577e3e88>`__;

`155 <../../d2/d46/structTango_1_1__DeviceInfo.html#a24c77497253a5b2c35e976de5680f05d>`__ 
string
`dev\_type <../../d2/d46/structTango_1_1__DeviceInfo.html#a24c77497253a5b2c35e976de5680f05d>`__;

`156 <../../df/dd9/classTango_1_1DevicePipeBlob.html#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__ };

157 

`158 <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__ typedef
`\_DeviceInfo <../../d2/d46/structTango_1_1__DeviceInfo.html>`__
`DeviceInfo <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__;

159 

165 #ifdef GEN\_DOC

`166 <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__ typedef
struct
`DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__

167 #else

168 typedef struct \_DeviceAttributeConfig

169 #endif

170 {

`171 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa986f46571ce7f48ac88d005034b16be>`__ 
string
`name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa986f46571ce7f48ac88d005034b16be>`__;

`172 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a5f02c5c4d857bd6eec495a746dfaf646>`__ 
AttrWriteType
`writable <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a5f02c5c4d857bd6eec495a746dfaf646>`__;

`173 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a10e944fe3cc1e6dce24ebfd2f474c294>`__ 
AttrDataFormat
`data\_format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a10e944fe3cc1e6dce24ebfd2f474c294>`__;

`174 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a2e2c5a17bc577057f9db3fec6fc5002c>`__ 
int
`data\_type <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a2e2c5a17bc577057f9db3fec6fc5002c>`__;

`175 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a1194d38c18b4aaeba0989b14d912f17f>`__ 
int
`max\_dim\_x <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a1194d38c18b4aaeba0989b14d912f17f>`__;

`176 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a519d30179f56a9d0405a2b16fbd762eb>`__ 
int
`max\_dim\_y <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a519d30179f56a9d0405a2b16fbd762eb>`__;

`177 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a3ee3ca0543af398a2ee69901ab2086ea>`__ 
string
`description <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a3ee3ca0543af398a2ee69901ab2086ea>`__;

`178 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a4ec80e8421b9f1f3e250b047771a4a17>`__ 
string
`label <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a4ec80e8421b9f1f3e250b047771a4a17>`__;

`179 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#abbfe98ae17bfc21368b6347b9611e4f8>`__ 
string
`unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#abbfe98ae17bfc21368b6347b9611e4f8>`__;

`180 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a6e39a2bd02dff03ba378d42e0f0892e8>`__ 
string
`standard\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a6e39a2bd02dff03ba378d42e0f0892e8>`__;

`181 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae7ec9432c308d2080bff8390bf86e9dc>`__ 
string
`display\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae7ec9432c308d2080bff8390bf86e9dc>`__;

`182 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ad3ec3ee2584e54354a9ad398432b7e63>`__ 
string
`format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ad3ec3ee2584e54354a9ad398432b7e63>`__;

`183 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa647cb22659434ffe9833adbfecb11ab>`__ 
string
`min\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa647cb22659434ffe9833adbfecb11ab>`__;

`184 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a84c6e32024eb2ab01a03cb1016f2acbd>`__ 
string
`max\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a84c6e32024eb2ab01a03cb1016f2acbd>`__;

`185 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a265cd1f58f040fbb4fdebb8a5eb13718>`__ 
string
`min\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a265cd1f58f040fbb4fdebb8a5eb13718>`__;

`186 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ac2be6304818d741aa970abcb3ff91105>`__ 
string
`max\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ac2be6304818d741aa970abcb3ff91105>`__;

`187 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a7c86de3d725f10a4ca07b086d04ce043>`__ 
string
`writable\_attr\_name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a7c86de3d725f10a4ca07b086d04ce043>`__;

`188 <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae77d336e762e1c6e1e8fcea17d6b107f>`__ 
vector<string>
`extensions <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae77d336e762e1c6e1e8fcea17d6b107f>`__;

189 

191  bool operator==(const \_DeviceAttributeConfig &);

192 }`DeviceAttributeConfig <../../de/ddf/namespaceTango.html#a2926592cba03eca7ecf3ab28587f19f0>`__;

193 

200 #ifdef GEN\_DOC

`201 <../../df/dab/structTango_1_1AttributeInfo.html>`__ typedef struct
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__ :
public
`DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__

`202 <../../d7/de8/classTango_1_1Connection.html#af1fa8c85c338781be7d16a99581cf383>`__ #else

203 typedef struct \_AttributeInfo : public
`DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__

204 #endif

205 {

`206 <../../df/dab/structTango_1_1AttributeInfo.html#aa958466c57a8cb39cb5aac4d451e13e2>`__ 
Tango::DispLevel
`disp\_level <../../df/dab/structTango_1_1AttributeInfo.html#aa958466c57a8cb39cb5aac4d451e13e2>`__;

207 

209  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&,\_AttributeInfo &);

210  bool operator==(const \_AttributeInfo &);

`211 <../../d7/de8/classTango_1_1Connection.html#ab9dad67ef6e9ba3268ac9d5627f70ea0>`__ }`AttributeInfo <../../d1/d45/group__Client.html#gad3bc51cab7995f9e00f253b183924ae9>`__;

212 

219 #ifdef GEN\_DOC

`220 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__ typedef
struct
`AttributeAlarmInfo <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__

221 #else

222 typedef struct \_AttributeAlarmInfo

223 #endif

224 {

`225 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a75ab6140f065a841206c4c8a812bffea>`__ 
string
`min\_alarm <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a75ab6140f065a841206c4c8a812bffea>`__;

`226 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#aac90fcaa709d3614ac9d838f3af2f41a>`__ 
string
`max\_alarm <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#aac90fcaa709d3614ac9d838f3af2f41a>`__;

`227 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#af47fd458db3938f4242350cca362d473>`__ 
string
`min\_warning <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#af47fd458db3938f4242350cca362d473>`__;

`228 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#ab89ae378c905d41c580b922f16f55ffa>`__ 
string
`max\_warning <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#ab89ae378c905d41c580b922f16f55ffa>`__;

`229 <../../df/d22/classTango_1_1DeviceData.html#a441796301b708d97386ea636104889d4>`__ 
string delta\_t;

`230 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a5e6d8bd051731bf5730ef92d89dc9810>`__ 
string
`delta\_val <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a5e6d8bd051731bf5730ef92d89dc9810>`__;

`231 <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a41217de305a07f3aac512190bf802436>`__ 
vector<string>
`extensions <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a41217de305a07f3aac512190bf802436>`__;

232 

234  bool operator==(const \_AttributeAlarmInfo &);

`235 <../../d7/de8/classTango_1_1Connection.html#affa1c0fff97f714eddf69ebdb17c6665>`__ }`AttributeAlarmInfo <../../d1/d45/group__Client.html#ga05d242f249708dcd595c8f022917de27>`__;

236 

243 #ifdef GEN\_DOC

`244 <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__ typedef
struct
`ChangeEventInfo <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__

245 #else

246 typedef struct \_ChangeEventInfo

247 #endif

248 {

`249 <../../d9/d49/structTango_1_1ChangeEventInfo.html#a4d5e1f716c77065751e457ae2c9521e9>`__ 
string
`rel\_change <../../d9/d49/structTango_1_1ChangeEventInfo.html#a4d5e1f716c77065751e457ae2c9521e9>`__;

`250 <../../d9/d49/structTango_1_1ChangeEventInfo.html#af8803ddcc0f31b3c524225f9a05eb899>`__ 
string
`abs\_change <../../d9/d49/structTango_1_1ChangeEventInfo.html#af8803ddcc0f31b3c524225f9a05eb899>`__;

`251 <../../d9/d49/structTango_1_1ChangeEventInfo.html#a355cf98af8fe7a780f9e1a3b6ed131f9>`__ 
vector<string>
`extensions <../../d9/d49/structTango_1_1ChangeEventInfo.html#a355cf98af8fe7a780f9e1a3b6ed131f9>`__;

252 }`ChangeEventInfo <../../d1/d45/group__Client.html#gad6df317aebc920b1e9489cc83d80f2c0>`__;

253 

`260 <../../d5/d70/classTango_1_1__KillProc__.html>`__ #ifdef GEN\_DOC

`261 <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__ typedef
struct
`PeriodicEventInfo <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__

262 #else

`263 <../../d5/d70/classTango_1_1__KillProc__.html#aff4f5d7d3e86e1ef444f39e39fa08b8d>`__ typedef
struct \_PeriodicEventInfo

264 #endif

265 {

`266 <../../d6/d55/structTango_1_1PeriodicEventInfo.html#ad5384dc1bb57e6d1e7b566d4d1947edc>`__ 
string
`period <../../d6/d55/structTango_1_1PeriodicEventInfo.html#ad5384dc1bb57e6d1e7b566d4d1947edc>`__;

`267 <../../d6/d55/structTango_1_1PeriodicEventInfo.html#af22ec2f765f0a23dcba8389924e5bdbd>`__ 
vector<string>
`extensions <../../d6/d55/structTango_1_1PeriodicEventInfo.html#af22ec2f765f0a23dcba8389924e5bdbd>`__;

268 }`PeriodicEventInfo <../../d1/d45/group__Client.html#ga6795ae3557967c7d684ea7fc2c2ae470>`__;

269 

276 #ifdef GEN\_DOC

`277 <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__ typedef
struct
`ArchiveEventInfo <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__

278 #else

279 typedef struct \_ArchiveEventInfo

280 #endif

281 {

`282 <../../d1/d29/structTango_1_1ArchiveEventInfo.html#afecffe46830ac832cee719a7614a4030>`__ 
string
`archive\_rel\_change <../../d1/d29/structTango_1_1ArchiveEventInfo.html#afecffe46830ac832cee719a7614a4030>`__;

`283 <../../d1/d29/structTango_1_1ArchiveEventInfo.html#ac3f5f5d04b5780fa72fb70e79548e7b1>`__ 
string
`archive\_abs\_change <../../d1/d29/structTango_1_1ArchiveEventInfo.html#ac3f5f5d04b5780fa72fb70e79548e7b1>`__;

`284 <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a8eab759c5b4d6913ecfb73ee7b7ad08e>`__ 
string
`archive\_period <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a8eab759c5b4d6913ecfb73ee7b7ad08e>`__;

`285 <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a4104ec8d3d324941d0275200365d9d02>`__ 
vector<string>
`extensions <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a4104ec8d3d324941d0275200365d9d02>`__;

286 }`ArchiveEventInfo <../../d1/d45/group__Client.html#ga9a2aca65efc6caf661f33f5886695dcc>`__;

287 

294 #ifdef GEN\_DOC

`295 <../../da/dce/structTango_1_1AttributeEventInfo.html>`__ typedef
struct
`AttributeEventInfo <../../da/dce/structTango_1_1AttributeEventInfo.html>`__

296 #else

297 typedef struct \_AttributeEventInfo

298 #endif

299 {

`300 <../../da/dce/structTango_1_1AttributeEventInfo.html#a1af98248c881a274162b3542577ca21f>`__ 
`ChangeEventInfo <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__
`ch\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#a1af98248c881a274162b3542577ca21f>`__;

`301 <../../da/dce/structTango_1_1AttributeEventInfo.html#a10e613e8f4809b162492eb74c5906a89>`__ 
`PeriodicEventInfo <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__
`per\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#a10e613e8f4809b162492eb74c5906a89>`__;

`302 <../../da/dce/structTango_1_1AttributeEventInfo.html#aac8d39bbcab8839baf68267da64d850b>`__ 
`ArchiveEventInfo <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__
`arch\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#aac8d39bbcab8839baf68267da64d850b>`__;

303 

305  bool operator==(const \_AttributeEventInfo &);

`306 <../../d3/d4b/classTango_1_1AttributeProxy.html#a5dcb9de15ebbcb991bc372e7ade13b93>`__ }`AttributeEventInfo <../../d1/d45/group__Client.html#gafbe27a305aed98cb963bacb178c78859>`__;

307 

`314 <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__ typedef
enum
`\_AttrMemorizedType <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__

315 {

`316 <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124abf2e9bbaf87fc8c3446b88b7422c86b7>`__ 
`NOT\_KNOWN <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124abf2e9bbaf87fc8c3446b88b7422c86b7>`__,

`317 <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a77d085684a448679e0729b6b444b2639>`__ 
`NONE <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a77d085684a448679e0729b6b444b2639>`__,

`318 <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a1c81faba262469013aee0d8dd975f378>`__ 
`MEMORIZED <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a1c81faba262469013aee0d8dd975f378>`__,

`319 <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a12c0889f5b2cd005995da692bbc1e3ae>`__ 
`MEMORIZED\_WRITE\_INIT <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a12c0889f5b2cd005995da692bbc1e3ae>`__

320 }`AttrMemorizedType <../../d1/d45/group__Client.html#gae59d9d9726e3916b6a49bda9de1bff2c>`__;

321 

322 

329 #ifdef GEN\_DOC

`330 <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ typedef
struct
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__:
public
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__

331 #else

332 typedef struct \_AttributeInfoEx : public
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__

333 #endif

334 {

`335 <../../d3/d71/structTango_1_1AttributeInfoEx.html#a9b125948c23b7a7747ad16165625ab66>`__ 
string
`root\_attr\_name <../../d3/d71/structTango_1_1AttributeInfoEx.html#a9b125948c23b7a7747ad16165625ab66>`__;

`336 <../../d3/d71/structTango_1_1AttributeInfoEx.html#a60e3af52cd117f6c05f3408124caa4ce>`__ 
`AttrMemorizedType <../../d1/d45/group__Client.html#gae59d9d9726e3916b6a49bda9de1bff2c>`__
`memorized <../../d3/d71/structTango_1_1AttributeInfoEx.html#a60e3af52cd117f6c05f3408124caa4ce>`__;

`337 <../../d3/d71/structTango_1_1AttributeInfoEx.html#a4b0ef35e29ace8d9ea557ad142018185>`__ 
vector<string>
`enum\_labels <../../d3/d71/structTango_1_1AttributeInfoEx.html#a4b0ef35e29ace8d9ea557ad142018185>`__;

`338 <../../d3/d71/structTango_1_1AttributeInfoEx.html#aaf01f87192831893661acfa4b926d0c8>`__ 
`AttributeAlarmInfo <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__
`alarms <../../d3/d71/structTango_1_1AttributeInfoEx.html#aaf01f87192831893661acfa4b926d0c8>`__;

`339 <../../d3/d71/structTango_1_1AttributeInfoEx.html#a57d8d88a07dac398a91ad4180d7cb6c8>`__ 
`AttributeEventInfo <../../da/dce/structTango_1_1AttributeEventInfo.html>`__
`events <../../d3/d71/structTango_1_1AttributeInfoEx.html#a57d8d88a07dac398a91ad4180d7cb6c8>`__;

`340 <../../d3/d71/structTango_1_1AttributeInfoEx.html#afdf808e107b2d36d75eb8e07d798d7b4>`__ 
vector<string>
`sys\_extensions <../../d3/d71/structTango_1_1AttributeInfoEx.html#afdf808e107b2d36d75eb8e07d798d7b4>`__;

341 

`343 <../../d3/d4b/classTango_1_1AttributeProxy.html#af375564aa69d17d8797974ba96e35800>`__ 
\_AttributeInfoEx & operator=(const AttributeConfig\_2 \*);

344  \_AttributeInfoEx & operator=(const AttributeConfig\_3 \*);

345  \_AttributeInfoEx & operator=(const AttributeConfig\_5 \*);

346 

347  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&,\_AttributeInfoEx &);

348  bool operator==(const \_AttributeInfoEx &);

349 }`AttributeInfoEx <../../d1/d45/group__Client.html#ga09323cc9a29673f93f38e5e0190c6be6>`__;

350 

`351 <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__ typedef
vector<AttributeInfo>
`AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__;

352 

`359 <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__ typedef
vector<AttributeInfoEx>
`AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__;

360 

366 #ifdef GEN\_DOC

`367 <../../d8/d04/structTango_1_1PipeInfo.html>`__ typedef struct
`PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__

`368 <../../d3/d4b/classTango_1_1AttributeProxy.html#a372f8ccd607388b0d83276fbb2f65c6d>`__ #else

369 typedef struct \_PipeInfo

370 #endif

371 {

`372 <../../d8/d04/structTango_1_1PipeInfo.html#aac516bafc197363c2631c05d28442407>`__ 
string
`name <../../d8/d04/structTango_1_1PipeInfo.html#aac516bafc197363c2631c05d28442407>`__;

`373 <../../d8/d04/structTango_1_1PipeInfo.html#a5aaaf10e1d4adb9da8fb317bb1d965e5>`__ 
string
`description <../../d8/d04/structTango_1_1PipeInfo.html#a5aaaf10e1d4adb9da8fb317bb1d965e5>`__;

`374 <../../d8/d04/structTango_1_1PipeInfo.html#a80e59d16eddbac22bb4386dc065413b8>`__ 
string
`label <../../d8/d04/structTango_1_1PipeInfo.html#a80e59d16eddbac22bb4386dc065413b8>`__;

`375 <../../d8/d04/structTango_1_1PipeInfo.html#a82393be90b61b52fd490c5ee98bba7f6>`__ 
Tango::DispLevel
`disp\_level <../../d8/d04/structTango_1_1PipeInfo.html#a82393be90b61b52fd490c5ee98bba7f6>`__;

`376 <../../d8/d04/structTango_1_1PipeInfo.html#ae0c6e057b77c1e3b1c8db29759817916>`__ 
Tango::PipeWriteType
`writable <../../d8/d04/structTango_1_1PipeInfo.html#ae0c6e057b77c1e3b1c8db29759817916>`__;

`377 <../../d8/d04/structTango_1_1PipeInfo.html#aee2c6ec24ba43f8a91e29ea5d0b5c4f4>`__ 
vector<string>
`extensions <../../d8/d04/structTango_1_1PipeInfo.html#aee2c6ec24ba43f8a91e29ea5d0b5c4f4>`__;

378 

380  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&,\_PipeInfo &);

381 // bool operator==(const \_PipeInfo &);

`382 <../../d3/d4b/classTango_1_1AttributeProxy.html#a49230d67f6d95ecc595df8603702f487>`__ }`PipeInfo <../../de/ddf/namespaceTango.html#ad35a82291acaf683a0c33416db790f0f>`__;

383 

384 // TODO: Pipe -> Change the type for writable to replace PIPE\_READ,
PIPE\_READ\_WRITE by READ, READ\_WRITE (IDL limitation)

385 

`386 <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__ typedef
vector<PipeInfo>
`PipeInfoList <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__;

387 

388 //

389 // Can't use CALLBACK (without \_) in the following enum because
it's a

390 // pre-defined type on Windows....

391 //

392 

`399 <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__ enum
`asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__

400 {

`401 <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0c8c20bdddc6ba94c2c8465da593e80c>`__ 
`POLLING <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0c8c20bdddc6ba94c2c8465da593e80c>`__,

`402 <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0d735acd8a950dd8379589f3b3a392c1>`__ 
`CALL\_BACK <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0d735acd8a950dd8379589f3b3a392c1>`__,

`403 <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a5f52f099a007030f3d4bca03801df6e7>`__ 
`ALL\_ASYNCH <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a5f52f099a007030f3d4bca03801df6e7>`__

404 };

`405 <../../d3/d4b/classTango_1_1AttributeProxy.html#ae6ed266f3a4e48a3fc7232aded5d2127>`__ 

`412 <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__ enum
`cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__

413 {

`414 <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca776212fa9631a1e9b40990653ea37f87>`__ 
`PUSH\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca776212fa9631a1e9b40990653ea37f87>`__,

`415 <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca3542fc1395bd94ac0429ee11ea9e1275>`__ 
`PULL\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca3542fc1395bd94ac0429ee11ea9e1275>`__

416 };

417 

418 //

419 // Some define

420 //

421 

`422 <../../d9/ddc/devapi_8h.html#a63df0a7f4d69d411be47d312a0f28ebf>`__ #define
CONNECTION\_OK 1

`423 <../../d9/ddc/devapi_8h.html#ad5fa52feb9025532cea9d330e28d51aa>`__ #define
CONNECTION\_NOTOK 0

424 

`425 <../../d9/ddc/devapi_8h.html#ad30310d84397f2d7d9d25cebb6bd7c86>`__ #define
PROT\_SEP "://"

`426 <../../d9/ddc/devapi_8h.html#afdf7c4231304a360aefbf69ac8cf4739>`__ #define
TACO\_PROTOCOL "taco"

`427 <../../d9/ddc/devapi_8h.html#a20a67da887c3cabf0f41bede062fff6d>`__ #define
TANGO\_PROTOCOL "tango"

428 

`429 <../../d9/ddc/devapi_8h.html#ab915b57fc77348add935a3aff8b547a1>`__ #define
MODIFIER '#'

`430 <../../d9/ddc/devapi_8h.html#a5357c09cf268a3b18c52a1381d5840c6>`__ #define
DBASE\_YES "dbase=yes"

`431 <../../d9/ddc/devapi_8h.html#a947f7b71bf3b735ec5f985b98e8408af>`__ #define
DBASE\_NO "dbase=no"

`432 <../../d9/ddc/devapi_8h.html#a809ec615c48b8d104b92904520826201>`__ #define
MODIFIER\_DBASE\_NO "#dbase=no"

433 

`434 <../../d9/ddc/devapi_8h.html#a069365e28330f206f735a1e4843ef313>`__ #define
HOST\_SEP ':'

`435 <../../d9/ddc/devapi_8h.html#a82e4983f9ea1c5d1a262dcdb58f7b805>`__ #define
PORT\_SEP '/'

`436 <../../d9/ddc/devapi_8h.html#a76a0ee5e0ec87fb1c3b7312018ad4255>`__ #define
DEV\_NAME\_FIELD\_SEP '/'

`437 <../../d9/ddc/devapi_8h.html#af26fc406280186045444fa1c6c314ea1>`__ #define
RES\_SEP "->"

`438 <../../d9/ddc/devapi_8h.html#ae42ac97d0f548932d9a1da8f2bd9844f>`__ #define
DEVICE\_SEP '/'

439 

`440 <../../d9/ddc/devapi_8h.html#a26bc7754535586390fbe30623760e254>`__ #define
FROM\_IOR "IOR"

`441 <../../d9/ddc/devapi_8h.html#af19bd6c1a125bbcb95028adc2aaddfb1>`__ #define
NOT\_USED "Unused"

442 

443 

444 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

445  \* \*

446  \* The ApiUtil class \*

447  \* ----------------- \*

448  \* \*

449 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

450 

451 #include "ApiUtil.h"

452 

453 

454 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

455  \* \*

456  \* The DeviceData class \*

457  \* -------------------- \*

458  \* \*

459 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

460 

461 

462 #include "DeviceData.h"

463 

464 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

465  \* \*

466  \* The DevicePipe class \*

467  \* -------------------- \*

468  \* \*

469 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

470 

471 

472 #include "DevicePipe.h"

473 

474 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

475  \* \*

476  \* The DeviceAttribute class \*

477  \* ------------------------- \*

478  \* \*

479 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

480 

481 

482 #include "DeviceAttribute.h"

483 

484 

`485 <../../d9/d83/classTango_1_1DeviceProxy.html#a5c362996e56c723d7d2959a974b9aacc>`__ /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

486  \* \*

487  \* The xxxDataHistory classes \*

488  \* -------------------------- \*

489  \* \*

490 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

491 

`510 <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__ class
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__:
public `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

511 {

`512 <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__ 

`513 <../../d3/d4b/classTango_1_1AttributeProxy.html#ae53bb772bd5c55030baa7be4abebe899>`__ public
:

515 //

516 // constructor methods

517 //

518 

519 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__\ ();

`520 <../../df/d22/classTango_1_1DeviceData.html#a1f43b8fa4cc2c1c371b471f4a49b9ddb>`__ 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__\ (int,
int \*,DevCmdHistoryList \*);

521 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__\ (const
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&);

522 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
& operator=(const
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&);

523 #ifdef HAS\_RVALUE

524 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__\ (`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&&);

`525 <../../d3/d4b/classTango_1_1AttributeProxy.html#ae318688c635207dc084b843726c9fdab>`__ 
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&operator=(\ `DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&&);

526 #endif

527 

`528 <../../df/d22/classTango_1_1DeviceData.html#afc018476b633193426ba5e02451ff70b>`__ 
~\ `DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__\ ();

529 

531 

`538 <../../d8/dc0/classTango_1_1DeviceDataHistory.html#aa30b768579c6ac8083cc4c577a6a7885>`__ 
bool
`has\_failed <../../d8/dc0/classTango_1_1DeviceDataHistory.html#aa30b768579c6ac8083cc4c577a6a7885>`__\ ()
{return fail;}

`546 <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a29a818b5c86b2208ed6aee8700849945>`__ 
TimeVal
&\ `get\_date <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a29a818b5c86b2208ed6aee8700849945>`__\ ()
{return time;}

`555 <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a661631cafdd62b484736e92d8d700829>`__ 
const DevErrorList
&\ `get\_err\_stack <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a661631cafdd62b484736e92d8d700829>`__\ ()
{return err.in();}

`579 <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6d904cd958cb22382ceefef4a4c8593>`__ 
friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&str,\ `DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
&ddh);

580 

`582 <../../d3/d4b/classTango_1_1AttributeProxy.html#a88b91e0189b350080975a60b3b90595c>`__ //
Three following methods for compatibility with older release

583 

584  bool failed() {return fail;}

585  void failed(bool val) {fail = val;}

586  void set\_date(TimeVal &tv) {time = tv;}

587  TimeVal &date() {return time;}

588  const DevErrorList &errors() {return err.in();}

589  void errors(DevErrorList\_var &del) {err = del;}

590 

591 protected:

593  bool fail;

594  TimeVal time;

`595 <../../d3/d4b/classTango_1_1AttributeProxy.html#a8a058915ddab00f20210db286d92ba0b>`__ 
DevErrorList\_var err;

596 

597  DevCmdHistoryList \*seq\_ptr;

598  int \*ref\_ctr\_ptr;

599 

600 private:

601  class DeviceDataHistoryExt

602  {

603  public:

604  DeviceDataHistoryExt() {};

605  };

606 

607 #ifdef HAS\_UNIQUE\_PTR

608  unique\_ptr<DeviceDataHistoryExt> ext\_hist;

609 #else

610  DeviceDataHistoryExt \*ext\_hist; // Class extension

611 #endif

612 };

613 

`614 <../../de/ddf/namespaceTango.html#aa64a337e34f9bfb5207ba07aa7cd51f9>`__ typedef
vector<DeviceDataHistory>
`DeviceDataHistoryList <../../de/ddf/namespaceTango.html#aa64a337e34f9bfb5207ba07aa7cd51f9>`__;

`615 <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__ 

`633 <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__ class
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__:
public
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

634 {

635 

636 public :

638 //

639 // constructor methods

640 //

641 

642 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ ();

643 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ (int,
DevAttrHistoryList\_var &);

644 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ (int,
DevAttrHistoryList\_3\_var &);

645 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ (const
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&);

646 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
& operator=(const
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&);

647 #ifdef HAS\_RVALUE

648 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ (`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&&);

649 
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&operator=(\ `DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&&);

650 #endif

651 

652 
~\ `DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__\ ();

654 

`661 <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#a29502710f173c46c03a6334f0498899e>`__ 
bool
`has\_failed <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#a29502710f173c46c03a6334f0498899e>`__\ ()
{return fail;}

685  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__\ (ostream
&str,\ `DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
&dah);

686 

688 // Three following methods for compatibility with older release

689 

690  bool failed() {return fail;}

691  void failed(bool val) {fail = val;}

692  TimeVal &date() {return time;}

693 // const DevErrorList &errors() {return err;}

694 

695 protected:

697  bool fail;

698  char compatibility\_padding[16];

699 

700 private:

701  class DeviceAttributeHistoryExt

702  {

703  public:

704  DeviceAttributeHistoryExt() {};

705  };

706 

707 #ifdef HAS\_UNIQUE\_PTR

708  unique\_ptr<DeviceAttributeHistoryExt> ext\_hist;

709 #else

710  DeviceAttributeHistoryExt \*ext\_hist; // Class extension

711 #endif

712 };

713 

714 

715 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

716  \* \*

717  \* The Connection class \*

718  \* -------------------- \*

719  \* \*

720 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

721 

722 #include "Connection.h"

723 

724 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

725  \* \*

726  \* The DeviceProxy class \*

727  \* -------------------- \*

728  \* \*

729 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

730 

731 #include "DeviceProxy.h"

732 

733 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

734  \* \*

735  \* The AttributeProxy class \*

736  \* -------------------- \*

737  \* \*

738 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

739 

740 #include "AttributeProxy.h"

741 

742 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

743  \* \*

744  \* The DummyDeviceProxy class \*

745  \* -------------------- \*

746  \* \*

747 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

748 

`749 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html>`__ class
`DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html>`__:
public
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

750 {

751 public:

`752 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a208e369e11d5e1d945b123ec217dc16d>`__ 
`DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a208e369e11d5e1d945b123ec217dc16d>`__\ ():`Tango <../../de/ddf/namespaceTango.html>`__::`Connection <../../d7/de8/classTango_1_1Connection.html>`__\ (true)
{};

753 

`754 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ae1aeac6ff92474063cc58a531b2c6d09>`__ 
virtual string
`get\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ae1aeac6ff92474063cc58a531b2c6d09>`__\ (bool)
{string str;return str;}

`755 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#af1b4aeeda9976c31d43bf0629c0c2e87>`__ 
virtual string
`build\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#af1b4aeeda9976c31d43bf0629c0c2e87>`__\ ()
{string str;return str;}

`756 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a2901b3e72b2928c0c0fb0bd2674990e4>`__ 
virtual int
`get\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a2901b3e72b2928c0c0fb0bd2674990e4>`__\ ()
{return 0;}

`757 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a06125348959666fb0774765b8d49f15d>`__ 
virtual void
`set\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a06125348959666fb0774765b8d49f15d>`__\ (int)
{};

758 

`759 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a95f30faa9de8e4fb82f65b6689da1a08>`__ 
virtual string
`dev\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a95f30faa9de8e4fb82f65b6689da1a08>`__\ ()
{string str;return str;}

760 

`761 <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ad6fb4f3237b716ee6e53417317a2984a>`__ 
int
`get\_env\_var <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ad6fb4f3237b716ee6e53417317a2984a>`__\ (const
char \*cc,string &str\_ref) {return
Tango::Connection::get\_env\_var(cc,str\_ref);}

762 };

763 

764 

765 

770 

`771 <../../d7/d2a/classTango_1_1ApiUtil.html#afbc9fb1ffff7730689224dea5a3d9676>`__ inline
`ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
\*ApiUtil::instance()

772 {

773  omni\_mutex\_lock lo(inst\_mutex);

774 

775  if (\_instance == NULL)

776  \_instance = new
`ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__\ ();

777  return \_instance;

778 }

779 

780 inline long Connection::add\_asyn\_request(CORBA::Request\_ptr
req,\ `TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
req\_type)

781 {

782  omni\_mutex\_lock guard(asyn\_mutex);

783  long id =
ApiUtil::instance()->get\_pasyn\_table()->store\_request(req,req\_type);

784  pasyn\_ctr++;

785  return id;

786 }

787 

788 inline void Connection::remove\_asyn\_request(long id)

789 {

790  omni\_mutex\_lock guard(asyn\_mutex);

791 

792  ApiUtil::instance()->get\_pasyn\_table()->remove\_request(id);

793  pasyn\_ctr--;

794 }

795 

796 inline void Connection::add\_asyn\_cb\_request(CORBA::Request\_ptr
req,CallBack \*cb,Connection \*con,TgRequest::ReqType req\_type)

797 {

798  omni\_mutex\_lock guard(asyn\_mutex);

799 
ApiUtil::instance()->get\_pasyn\_table()->store\_request(req,cb,con,req\_type);

800  pasyn\_cb\_ctr++;

801 }

802 

803 inline void Connection::remove\_asyn\_cb\_request(Connection
\*con,CORBA::Request\_ptr req)

804 {

805  omni\_mutex\_lock guard(asyn\_mutex);

806  ApiUtil::instance()->get\_pasyn\_table()->remove\_request(con,req);

807  pasyn\_cb\_ctr--;

808 }

809 

810 inline long Connection::get\_pasyn\_cb\_ctr()

`811 <../../da/dc5/classTango_1_1DevicePipe.html>`__ {

812  long ret;

813  asyn\_mutex.lock();

814  ret = pasyn\_cb\_ctr;

815  asyn\_mutex.unlock();

816  return ret;

817 }

818 

819 inline void
Connection::dec\_asynch\_counter(\ `asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__
ty)

820 {

821  omni\_mutex\_lock guard(asyn\_mutex);

822  if
(ty==`POLLING <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0c8c20bdddc6ba94c2c8465da593e80c>`__)

823  pasyn\_ctr--;

824  else if
(ty==`CALL\_BACK <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0d735acd8a950dd8379589f3b3a392c1>`__)

`825 <../../d9/d83/classTango_1_1DeviceProxy.html#a50002daad4dc97b0651680e5f2b7a655>`__ 
pasyn\_cb\_ctr--;

826 }

827 

828 inline void DeviceProxy::check\_connect\_adm\_device()

829 {

830  omni\_mutex\_lock guard(adm\_dev\_mutex);

831  if (adm\_device == NULL)

832  connect\_to\_adm\_device();

833 }

834 

835 //

836 // For Tango 8 ZMQ event system

837 //

838 

`839 <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__ inline
int DeviceProxy::subscribe\_event (const string &attr\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*callback)

840 {

841  vector<string> filt;

842  return subscribe\_event (attr\_name,event,callback,filt,false);

843 }

844 

`845 <../../d9/d83/classTango_1_1DeviceProxy.html#a80c449b725a134b1e9aac6771b70ed5c>`__ inline
int DeviceProxy::subscribe\_event (const string &attr\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event,

846  `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*callback,bool stateless)

847 {

848  vector<string> filt;

849  return subscribe\_event(attr\_name,event,callback,filt,stateless);

850 }

851 

`852 <../../d9/d83/classTango_1_1DeviceProxy.html#a5fef157c74708fa54acde839749b9449>`__ inline
int DeviceProxy::subscribe\_event (const string &attr\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event,

853  int event\_queue\_size,bool stateless)

`854 <../../da/dc5/classTango_1_1DevicePipe.html#a12dc55a63df0edd0fa2f858dce39ad25>`__ {

855  vector<string> filt;

856  return
subscribe\_event(attr\_name,event,event\_queue\_size,filt,stateless);

857 }

858 

863 

`864 <../../d9/ddc/devapi_8h.html#a5b2352705b0926360e354673fc237148>`__ #define
READ\_ATT\_EXCEPT(NAME\_CHAR,OBJ) \\

865  catch (Tango::ConnectionFailed &e) \\

866  { \\

867  TangoSys\_OMemStream desc; \\

868  desc << "Failed to read\_attribute on device " << device\_name; \\

869  desc << ", attribute " << NAME\_CHAR << ends; \\

870  ApiConnExcept::re\_throw\_exception(e,(const
char\*)"API\_AttributeFailed", \\

`871 <../../da/dc5/classTango_1_1DevicePipe.html#a7394bfd9106027f25e1b8c0d3bd7d29c>`__ 
desc.str(), (const char\*)"DeviceProxy::read\_attribute()"); \\

872  } \\

873  catch (Tango::DevFailed &e) \\

874  { \\

875  TangoSys\_OMemStream desc; \\

876  desc << "Failed to read\_attribute on device " << device\_name; \\

877  desc << ", attribute " << NAME\_CHAR << ends; \\

878  Except::re\_throw\_exception(e,(const
char\*)"API\_AttributeFailed", \\

`879 <../../da/dc5/classTango_1_1DevicePipe.html#a39aea23db45f1a51c3b59351147dfdba>`__ 
desc.str(), (const char\*)"DeviceProxy::read\_attribute()"); \\

880  } \\

881  catch (CORBA::TRANSIENT &trans) \\

882  { \\

883 
TRANSIENT\_NOT\_EXIST\_EXCEPT(trans,"DeviceProxy","read\_attribute",OBJ);
\\

884  } \\

885  catch (CORBA::OBJECT\_NOT\_EXIST &one) \\

886  { \\

887  if (one.minor() == omni::OBJECT\_NOT\_EXIST\_NoMatch \|\|
one.minor() == 0) \\

888  { \\

889 
TRANSIENT\_NOT\_EXIST\_EXCEPT(one,"DeviceProxy","read\_attribute",OBJ);
\\

890  } \\

891  else \\

892  { \\

893  set\_connection\_state(CONNECTION\_NOTOK); \\

894  TangoSys\_OMemStream desc; \\

895  desc << "Failed to read\_attribute on device " << device\_name <<
ends; \\

896  ApiCommExcept::re\_throw\_exception(one, \\

897  (const char\*)"API\_CommunicationFailed", \\

898  desc.str(), \\

899  (const char\*)"DeviceProxy::read\_attribute()"); \\

900  } \\

901  } \\

902  catch (CORBA::COMM\_FAILURE &comm) \\

903  { \\

904  if (comm.minor() == omni::COMM\_FAILURE\_WaitingForReply) \\

`905 <../../da/dc5/classTango_1_1DevicePipe.html#ad989caa7a3c2a43296f17ba8602e0fef>`__ 
{ \\

906 
TRANSIENT\_NOT\_EXIST\_EXCEPT(comm,"DeviceProxy","read\_attribute",OBJ);
\\

907  } \\

908  else \\

909  { \\

910  set\_connection\_state(CONNECTION\_NOTOK); \\

911  TangoSys\_OMemStream desc; \\

912  desc << "Failed to read\_attribute on device " << device\_name <<
ends; \\

913  ApiCommExcept::re\_throw\_exception(comm, \\

`914 <../../da/dc5/classTango_1_1DevicePipe.html#adfe7a29d49a733829216ec36bd705a49>`__ 
(const char\*)"API\_CommunicationFailed", \\

915  desc.str(), \\

916  (const char\*)"DeviceProxy::read\_attribute()"); \\

917  } \\

918  } \\

919  catch (CORBA::SystemException &ce) \\

920  { \\

921  set\_connection\_state(CONNECTION\_NOTOK); \\

922  TangoSys\_OMemStream desc; \\

923  desc << "Failed to read\_attribute on device " << device\_name <<
ends; \\

924  ApiCommExcept::re\_throw\_exception(ce, \\

925  (const char\*)"API\_CommunicationFailed", \\

926  desc.str(), \\

`927 <../../d9/d83/classTango_1_1DeviceProxy.html#a2152d80457a5fc501be7a3d7f4127b90>`__ 
(const char\*)"DeviceProxy::read\_attribute()"); \\

928  }

929 

930 

`931 <../../d9/ddc/devapi_8h.html#a212fe5b444c8a877f2e51baeb2436921>`__ #define
COPY\_BASE\_CONFIG(A,B) \\

932  A[i].name = B[i].name; \\

933  A[i].writable = B[i].writable; \\

934  A[i].data\_format = B[i].data\_format; \\

935  A[i].data\_type = B[i].data\_type; \\

936  A[i].max\_dim\_x = B[i].max\_dim\_x; \\

937  A[i].max\_dim\_y = B[i].max\_dim\_y; \\

938  A[i].description = B[i].description; \\

939  A[i].label = B[i].label; \\

`940 <../../da/dc5/classTango_1_1DevicePipe.html#a00c05c84ecb64e225d735a0a2fc4e546>`__ 
A[i].unit = B[i].unit; \\

941  A[i].standard\_unit = B[i].standard\_unit; \\

942  A[i].display\_unit = B[i].display\_unit; \\

943  A[i].format = B[i].format; \\

944  A[i].min\_value = B[i].min\_value; \\

945  A[i].max\_value = B[i].max\_value; \\

946  A[i].writable\_attr\_name = B[i].writable\_attr\_name; \\

947  A[i].extensions.resize(B[i].extensions.length()); \\

`948 <../../da/dc5/classTango_1_1DevicePipe.html#a1c49f10b17cda1734a1b3f3134bdb8c7>`__ 
for (size\_t j=0; j<B[i].extensions.length(); j++) \\

949  { \\

950  A[i].extensions[j] = B[i].extensions[j]; \\

`951 <../../d7/dca/classTango_1_1DeviceAttribute.html#a3927b11e5bd052f81c77f8a04621d0a5>`__ 
}

952 

953 

`954 <../../d9/ddc/devapi_8h.html#aba49d44855cac4267f984f3da452ef18>`__ #define
COPY\_ALARM\_CONFIG(A,B) \\

955  A[i].alarms.min\_alarm = B[i].att\_alarm.min\_alarm; \\

956  A[i].alarms.max\_alarm = B[i].att\_alarm.max\_alarm; \\

`957 <../../da/dc5/classTango_1_1DevicePipe.html#a242f6981b33c372833459baee14315fe>`__ 
A[i].alarms.min\_warning = B[i].att\_alarm.min\_warning; \\

958  A[i].alarms.max\_warning = B[i].att\_alarm.max\_warning; \\

959  A[i].alarms.delta\_t = B[i].att\_alarm.delta\_t; \\

960  A[i].alarms.delta\_val = B[i].att\_alarm.delta\_val; \\

961  A[i].alarms.extensions.resize(B[i].att\_alarm.extensions.length());
\\

962  for (size\_t j=0; j<B[i].att\_alarm.extensions.length(); j++) \\

963  { \\

964  A[i].alarms.extensions[j] = B[i].att\_alarm.extensions[j]; \\

965  }

`966 <../../da/dc5/classTango_1_1DevicePipe.html#a3cc8834e05ef939588b5954d1bb875ff>`__ 

967 

`968 <../../d9/ddc/devapi_8h.html#ab5f7c287c880797594b14f91b6115c11>`__ #define
COPY\_EVENT\_CONFIG(A,B) \\

969  A[i].events.ch\_event.rel\_change =
B[i].event\_prop.ch\_event.rel\_change; \\

970  A[i].events.ch\_event.abs\_change =
B[i].event\_prop.ch\_event.abs\_change; \\

`971 <../../d7/dca/classTango_1_1DeviceAttribute.html#a3f9f8c8594eca47c15d14a428e1ce449>`__ 
A[i].events.ch\_event.extensions.resize(B[i].event\_prop.ch\_event.extensions.length());
\\

972  for (size\_t j=0; j<B[i].event\_prop.ch\_event.extensions.length();
j++) \\

973  { \\

974  A[i].events.ch\_event.extensions[j] =
B[i].event\_prop.ch\_event.extensions[j]; \\

975  } \\

976 \\

977  A[i].events.per\_event.period = B[i].event\_prop.per\_event.period;
\\

978 
A[i].events.per\_event.extensions.resize(B[i].event\_prop.per\_event.extensions.length());
\\

`979 <../../d7/dca/classTango_1_1DeviceAttribute.html#aadacbabadd2fb9533f47c2e401c2bf9c>`__ 
for (size\_t j=0; j<B[i].event\_prop.per\_event.extensions.length();
j++) \\

980  { \\

981  A[i].events.per\_event.extensions[j] =
B[i].event\_prop.per\_event.extensions[j]; \\

982  } \\

983 \\

984  A[i].events.arch\_event.archive\_rel\_change =
B[i].event\_prop.arch\_event.rel\_change; \\

985  A[i].events.arch\_event.archive\_abs\_change =
B[i].event\_prop.arch\_event.abs\_change; \\

986  A[i].events.arch\_event.archive\_period =
B[i].event\_prop.arch\_event.period; \\

987 
A[i].events.arch\_event.extensions.resize(B[i].event\_prop.arch\_event.extensions.length());
\\

988  for (size\_t j=0;
j<B[i].event\_prop.arch\_event.extensions.length(); j++) \\

989  { \\

990  A[i].events.arch\_event.extensions[j] =
B[i].event\_prop.arch\_event.extensions[j]; \\

991  }

992 

993 

997 

998 

`999 <../../df/db5/classTango_1_1AutoConnectTimeout.html>`__ class
`AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html>`__

1000 {

`1001 <../../d7/dca/classTango_1_1DeviceAttribute.html#a4dfe60e076172a05f332a35c5412e182>`__ public:

`1002 <../../df/db5/classTango_1_1AutoConnectTimeout.html#a1b74740f36e43fdb3b13df1decebced8>`__ 
`AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html#a1b74740f36e43fdb3b13df1decebced8>`__\ (unsigned
int to) {omniORB::setClientConnectTimeout((CORBA::ULong)to);}

`1003 <../../df/db5/classTango_1_1AutoConnectTimeout.html#a401679594dbe8613868c2e0c75924787>`__ 
`~AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html#a401679594dbe8613868c2e0c75924787>`__\ ()
{omniORB::setClientConnectTimeout(`NARROW\_CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__);}

1004 };

1005 

1006 } // End of Tango namespace

1007 

1008 #endif /\* \_DEVAPI\_H \*/

`Tango::POLLING <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0c8c20bdddc6ba94c2c8465da593e80c>`__

Polling mode request.

**Definition:** devapi.h:401

`Tango::ArchiveEventInfo::archive\_period <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a8eab759c5b4d6913ecfb73ee7b7ad08e>`__

string archive\_period

Archive event period.

**Definition:** devapi.h:284

`Tango::DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__

vector< DbDatum > DbData

**Definition:** dbapi.h:66

`apiexcept.h <../../d3/d7a/apiexcept_8h.html>`__

`Tango::AttributeDimension::dim\_x <../../d7/d7a/structTango_1_1AttributeDimension.html#a483a7f7db671828cb1fd467f34b30961>`__

long dim\_x

**Definition:** devapi.h:117

`Tango::AttributeAlarmInfo::max\_alarm <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#aac90fcaa709d3614ac9d838f3af2f41a>`__

string max\_alarm

max alarm level

**Definition:** devapi.h:226

`Tango::AsynReq <../../d4/d49/classTango_1_1AsynReq.html>`__

**Definition:** devasyn.h:387

`Tango::cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__

cb\_sub\_model

Possible callback mode.

**Definition:** devapi.h:412

`Tango::DeviceAttributeConfig::description <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a3ee3ca0543af398a2ee69901ab2086ea>`__

string description

Description.

**Definition:** devapi.h:177

`Tango::AttributeAlarmInfo::min\_alarm <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a75ab6140f065a841206c4c8a812bffea>`__

string min\_alarm

Min alarm level.

**Definition:** devapi.h:225

`Tango::DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__

Fundamental type for receiving data from device attribute polling
buffers.

**Definition:** devapi.h:633

`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__

Extended attribute configuration data.

**Definition:** devapi.h:330

`Tango::DeviceAttributeConfig::min\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a265cd1f58f040fbb4fdebb8a5eb13718>`__

string min\_alarm

Min alarm.

**Definition:** devapi.h:185

`Tango::AttrMemorizedType <../../d1/d45/group__Client.html#gae59d9d9726e3916b6a49bda9de1bff2c>`__

enum Tango::\_AttrMemorizedType AttrMemorizedType

Possible memorized attribute type.

`Tango::Database <../../d6/dc5/classTango_1_1Database.html>`__

A high level object which contains the link to the database.

**Definition:** dbapi.h:53

`Tango::PeriodicEventInfo::period <../../d6/d55/structTango_1_1PeriodicEventInfo.html#ad5384dc1bb57e6d1e7b566d4d1947edc>`__

string period

Event period.

**Definition:** devapi.h:266

`Tango::DeviceInfo <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__

\_DeviceInfo DeviceInfo

**Definition:** devapi.h:158

`Tango::DeviceDataHistory::get\_date <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a29a818b5c86b2208ed6aee8700849945>`__

TimeVal & get\_date()

Get record polling date.

**Definition:** devapi.h:546

`Tango::DeviceAttributeConfig::label <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a4ec80e8421b9f1f3e250b047771a4a17>`__

string label

Label.

**Definition:** devapi.h:178

`Tango::ArchiveEventInfo::archive\_abs\_change <../../d1/d29/structTango_1_1ArchiveEventInfo.html#ac3f5f5d04b5780fa72fb70e79548e7b1>`__

string archive\_abs\_change

Archive abosolute change threshold.

**Definition:** devapi.h:283

`Tango::ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__

Miscellaneous utility methods usefull in a Tango client.

**Definition:** devapi.h:55

`Tango::DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__

Base structure for Attribute configuration.

**Definition:** devapi.h:166

`Tango::ChangeEventInfo <../../d9/d49/structTango_1_1ChangeEventInfo.html>`__

Attribute change event configuration.

**Definition:** devapi.h:244

`Tango::DeviceDataHistory::get\_err\_stack <../../d8/dc0/classTango_1_1DeviceDataHistory.html#a661631cafdd62b484736e92d8d700829>`__

const DevErrorList & get\_err\_stack()

Get record error stack.

**Definition:** devapi.h:555

`Tango::LockerId::LockerPid <../../d8/d7f/unionTango_1_1LockerId.html#a9b563ab895bb99554f04e46618290ff1>`__

TangoSys\_Pid LockerPid

**Definition:** devapi.h:73

`Tango::AttributeInfoEx::enum\_labels <../../d3/d71/structTango_1_1AttributeInfoEx.html#a4b0ef35e29ace8d9ea557ad142018185>`__

vector< string > enum\_labels

Enumerated attribute labels.

**Definition:** devapi.h:337

`Tango::DeviceDataHistory::has\_failed <../../d8/dc0/classTango_1_1DeviceDataHistory.html#aa30b768579c6ac8083cc4c577a6a7885>`__

bool has\_failed()

Check if the record was a failure.

**Definition:** devapi.h:538

`Tango::\_DeviceInfo::server\_version <../../d2/d46/structTango_1_1__DeviceInfo.html#a45899619243d8a7e3a91fe46a6db12b3>`__

long server\_version

**Definition:** devapi.h:153

`Tango::DummyDeviceProxy::get\_env\_var <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ad6fb4f3237b716ee6e53417317a2984a>`__

int get\_env\_var(const char \*cc, string &str\_ref)

**Definition:** devapi.h:761

`Tango::AttributeAlarmInfo::extensions <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a41217de305a07f3aac512190bf802436>`__

vector< string > extensions

Future extensions.

**Definition:** devapi.h:231

`Tango::DummyDeviceProxy::dev\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a95f30faa9de8e4fb82f65b6689da1a08>`__

virtual string dev\_name()

**Definition:** devapi.h:759

`Tango::DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

Device import information from the database.

**Definition:** dbapi.h:815

`Tango::LockingThread::l\_thread <../../d0/d41/structTango_1_1LockingThread.html#a98fd861b6d8fcddf32da3be51fc1ac4b>`__

LockThread \* l\_thread

**Definition:** devapi.h:89

`Tango::AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__

vector< AttributeInfoEx > AttributeInfoListEx

vector of AttributeInfoEx structure

**Definition:** devapi.h:359

`Tango::AttributeEventInfo::per\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#a10e613e8f4809b162492eb74c5906a89>`__

PeriodicEventInfo per\_event

Attribute periodic event info.

**Definition:** devapi.h:301

`Tango::AttributeEventInfo <../../d1/d45/group__Client.html#gafbe27a305aed98cb963bacb178c78859>`__

struct Tango::AttributeEventInfo AttributeEventInfo

Attribute event configuration.

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Tango::DeviceAttributeConfig::data\_type <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a2e2c5a17bc577057f9db3fec6fc5002c>`__

int data\_type

Data type.

**Definition:** devapi.h:174

`Tango::ChangeEventInfo::abs\_change <../../d9/d49/structTango_1_1ChangeEventInfo.html#af8803ddcc0f31b3c524225f9a05eb899>`__

string abs\_change

Absolute change threshold.

**Definition:** devapi.h:250

`Tango::LockerId <../../d8/d7f/unionTango_1_1LockerId.html>`__

**Definition:** devapi.h:71

`Tango::ArchiveEventInfo <../../d1/d29/structTango_1_1ArchiveEventInfo.html>`__

Attribute archive event configuration.

**Definition:** devapi.h:277

`Tango::ArchiveEventInfo::archive\_rel\_change <../../d1/d29/structTango_1_1ArchiveEventInfo.html#afecffe46830ac832cee719a7614a4030>`__

string archive\_rel\_change

Archive relative change threshold.

**Definition:** devapi.h:282

`Tango::DeviceAttributeConfig::max\_dim\_y <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a519d30179f56a9d0405a2b16fbd762eb>`__

int max\_dim\_y

Max dim Y.

**Definition:** devapi.h:176

`Tango::AttributeAlarmInfo <../../d1/d45/group__Client.html#ga05d242f249708dcd595c8f022917de27>`__

struct Tango::AttributeAlarmInfo AttributeAlarmInfo

Attribute alarms configuration.

`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__

Event and asynchronous (callback model) calls base class.

**Definition:** devasyn.h:234

`Tango::TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__

ReqType

**Definition:** devasyn.h:360

`Tango::AttributeProxy <../../d3/d4b/classTango_1_1AttributeProxy.html>`__

Easy to use interface to Tango device attribute.

**Definition:** devapi.h:58

`Tango::\_DeviceInfo::server\_id <../../d2/d46/structTango_1_1__DeviceInfo.html#a2e7d98036dafa968ebef16982f49677b>`__

string server\_id

**Definition:** devapi.h:151

`Tango::EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__

EventType

Possible event type.

**Definition:** tango\_const.h:1089

`Tango::ArchiveEventInfo <../../d1/d45/group__Client.html#ga9a2aca65efc6caf661f33f5886695dcc>`__

struct Tango::ArchiveEventInfo ArchiveEventInfo

Attribute archive event configuration.

`Tango::AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html>`__

Small utility classes

**Definition:** devapi.h:999

`Tango::AttributeAlarmInfo::max\_warning <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#ab89ae378c905d41c580b922f16f55ffa>`__

string max\_warning

Max warning level.

**Definition:** devapi.h:228

`Tango::PipeInfo::name <../../d8/d04/structTango_1_1PipeInfo.html#aac516bafc197363c2631c05d28442407>`__

string name

Pipe name.

**Definition:** devapi.h:372

`Tango::AttributeInfo <../../d1/d45/group__Client.html#gad3bc51cab7995f9e00f253b183924ae9>`__

Tango::AttributeInfo AttributeInfo

Attribute configuration data extension.

`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

Fundamental type for sending and receiving data from device commands.

**Definition:** devapi.h:64

`Tango::DummyDeviceProxy::get\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a2901b3e72b2928c0c0fb0bd2674990e4>`__

virtual int get\_lock\_ctr()

**Definition:** devapi.h:756

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::AutoConnectTimeout::AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html#a1b74740f36e43fdb3b13df1decebced8>`__

AutoConnectTimeout(unsigned int to)

**Definition:** devapi.h:1002

`Tango::DeviceAttributeConfig::display\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae7ec9432c308d2080bff8390bf86e9dc>`__

string display\_unit

Display unit.

**Definition:** devapi.h:181

`Tango::PULL\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca3542fc1395bd94ac0429ee11ea9e1275>`__

Callback pull model.

**Definition:** devapi.h:415

`Tango::DeviceAttributeConfig::writable <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a5f02c5c4d857bd6eec495a746dfaf646>`__

AttrWriteType writable

Writable type (Read, Write,...)

**Definition:** devapi.h:172

`Tango::CALL\_BACK <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a0d735acd8a950dd8379589f3b3a392c1>`__

Callback mode request.

**Definition:** devapi.h:402

`Tango::AttributeAlarmInfo <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html>`__

Attribute alarms configuration.

**Definition:** devapi.h:220

`Tango::\_AttrMemorizedType <../../d1/d45/group__Client.html#ga76ad081a56687025de62cf1cbaf48124>`__

\_AttrMemorizedType

Possible memorized attribute type.

**Definition:** devapi.h:314

`Tango::PeriodicEventInfo <../../d6/d55/structTango_1_1PeriodicEventInfo.html>`__

Attribute periodic event configuration.

**Definition:** devapi.h:261

`Tango::DeviceAttributeConfig::name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa986f46571ce7f48ac88d005034b16be>`__

string name

Name.

**Definition:** devapi.h:171

`Tango::MEMORIZED <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a1c81faba262469013aee0d8dd975f378>`__

Memorized attribute.

**Definition:** devapi.h:318

`Tango::DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__

Fundamental type for receiving data from device command polling buffers.

**Definition:** devapi.h:510

`Tango::AttributeDimension <../../d7/d7a/structTango_1_1AttributeDimension.html>`__

**Definition:** devapi.h:115

`Tango::AttributeEventInfo::arch\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#aac8d39bbcab8839baf68267da64d850b>`__

ArchiveEventInfo arch\_event

Attribute archive event info.

**Definition:** devapi.h:302

`Tango::ChangeEventInfo <../../d1/d45/group__Client.html#gad6df317aebc920b1e9489cc83d80f2c0>`__

struct Tango::ChangeEventInfo ChangeEventInfo

Attribute change event configuration.

`Tango::MEMORIZED\_WRITE\_INIT <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a12c0889f5b2cd005995da692bbc1e3ae>`__

Memorized attribute with memorized value writen at initialization.

**Definition:** devapi.h:319

`Tango::PUSH\_CALLBACK <../../d1/d45/group__Client.html#gga3a5254b5c0c8de0c71c18bad2bd742bca776212fa9631a1e9b40990653ea37f87>`__

Callback push model.

**Definition:** devapi.h:414

`Tango::DeviceAttributeConfig::format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ad3ec3ee2584e54354a9ad398432b7e63>`__

string format

Format.

**Definition:** devapi.h:182

`Tango::AttributeInfoEx::memorized <../../d3/d71/structTango_1_1AttributeInfoEx.html#a60e3af52cd117f6c05f3408124caa4ce>`__

AttrMemorizedType memorized

The attribute memorization type.

**Definition:** devapi.h:336

`Tango::DevCommandInfo::in\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#ada0b412c05607021230d5780e4984eff>`__

long in\_type

Input parameter data type.

**Definition:** devapi.h:105

`Tango::DeviceAttributeConfig::writable\_attr\_name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a7c86de3d725f10a4ca07b086d04ce043>`__

string writable\_attr\_name

Writable att. name.

**Definition:** devapi.h:187

`Tango::DummyDeviceProxy::set\_lock\_ctr <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a06125348959666fb0774765b8d49f15d>`__

virtual void set\_lock\_ctr(int)

**Definition:** devapi.h:757

`Tango::NONE <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124a77d085684a448679e0729b6b444b2639>`__

The attribute is not memorized.

**Definition:** devapi.h:317

`Tango::LockingThread::shared <../../d0/d41/structTango_1_1LockingThread.html#a3a3fe5fd038680368a3f32e2d190bc80>`__

LockThCmd \* shared

**Definition:** devapi.h:88

`Tango::\_DeviceInfo::server\_host <../../d2/d46/structTango_1_1__DeviceInfo.html#a161e8a72fc4ee3812548f95ef9f1c209>`__

string server\_host

**Definition:** devapi.h:152

`Tango::ArchiveEventInfo::extensions <../../d1/d29/structTango_1_1ArchiveEventInfo.html#a4104ec8d3d324941d0275200365d9d02>`__

vector< string > extensions

Future exetnsions.

**Definition:** devapi.h:285

`Tango::CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__

Command information data extension.

**Definition:** devapi.h:128

`Tango::ChangeEventInfo::rel\_change <../../d9/d49/structTango_1_1ChangeEventInfo.html#a4d5e1f716c77065751e457ae2c9521e9>`__

string rel\_change

Relative change threshold.

**Definition:** devapi.h:249

`Tango::DevCommandInfo <../../de/ddf/namespaceTango.html#ab853e559703141ec81b1c30a5c9d88d2>`__

struct Tango::DevCommandInfo DevCommandInfo

Base structure for command information.

`Tango::\_DeviceInfo::dev\_type <../../d2/d46/structTango_1_1__DeviceInfo.html#a24c77497253a5b2c35e976de5680f05d>`__

string dev\_type

**Definition:** devapi.h:155

`Tango::DeviceDataHistoryList <../../de/ddf/namespaceTango.html#aa64a337e34f9bfb5207ba07aa7cd51f9>`__

vector< DeviceDataHistory > DeviceDataHistoryList

**Definition:** devapi.h:614

`Tango::\_DeviceInfo::dev\_class <../../d2/d46/structTango_1_1__DeviceInfo.html#adeee0b4e5ba2ea180afbf2e22211d3b2>`__

string dev\_class

**Definition:** devapi.h:150

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa44aae3bf7d5731b0dd44eaee68e9eb5>`__

DevicePipeBlob & operator<<(DevicePipeBlob &, DataElement< T > &)

`Tango::LockerInfo::locker\_class <../../dd/d39/structTango_1_1LockerInfo.html#a024019267de036847a9f7e30b2c3fe1a>`__

string locker\_class

**Definition:** devapi.h:82

`Tango::PipeInfo::extensions <../../d8/d04/structTango_1_1PipeInfo.html#aee2c6ec24ba43f8a91e29ea5d0b5c4f4>`__

vector< string > extensions

For future extensions.

**Definition:** devapi.h:377

`Tango::DeviceAttributeConfig::max\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a84c6e32024eb2ab01a03cb1016f2acbd>`__

string max\_value

Max value.

**Definition:** devapi.h:184

`Tango::ALL\_ASYNCH <../../d1/d45/group__Client.html#gga6c80e2130b95642d5c39ee8db7a25620a5f52f099a007030f3d4bca03801df6e7>`__

All request.

**Definition:** devapi.h:403

`Tango::PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__

Base structure for pipe information.

**Definition:** devapi.h:367

`Tango::DevCommandInfo::in\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#ace0c93f7dfa9891f9e5845abbb8debaf>`__

string in\_type\_desc

Input parameter description.

**Definition:** devapi.h:107

`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

Fundamental type for sending an dreceiving data to and from device
attributes.

**Definition:** devapi.h:73

`Tango::DeviceAttributeConfig <../../de/ddf/namespaceTango.html#a2926592cba03eca7ecf3ab28587f19f0>`__

struct Tango::DeviceAttributeConfig DeviceAttributeConfig

Base structure for Attribute configuration.

`Tango::CommandInfo <../../d1/d45/group__Client.html#ga0e7b3d0d4f4606a890d79fdee1581f18>`__

Tango::CommandInfo CommandInfo

Command information data extension.

`Tango::AttributeAlarmInfo::min\_warning <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#af47fd458db3938f4242350cca362d473>`__

string min\_warning

Min warning level.

**Definition:** devapi.h:227

`Tango::PipeInfo::label <../../d8/d04/structTango_1_1PipeInfo.html#a80e59d16eddbac22bb4386dc065413b8>`__

string label

Pipe label.

**Definition:** devapi.h:374

`Tango::LockerInfo::li <../../dd/d39/structTango_1_1LockerInfo.html#ac19a902ad6cc0fe15e74485cc09d3f5a>`__

LockerId li

**Definition:** devapi.h:80

`Tango::AttributeEventInfo <../../da/dce/structTango_1_1AttributeEventInfo.html>`__

Attribute event configuration.

**Definition:** devapi.h:295

`Tango::DeviceAttributeConfig::extensions <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae77d336e762e1c6e1e8fcea17d6b107f>`__

vector< string > extensions

For future extensions.

**Definition:** devapi.h:188

`Tango::DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html>`__

**Definition:** devapi.h:749

`Tango::DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__

A database value.

**Definition:** dbapi.h:443

`Tango::AutoConnectTimeout::~AutoConnectTimeout <../../df/db5/classTango_1_1AutoConnectTimeout.html#a401679594dbe8613868c2e0c75924787>`__

~AutoConnectTimeout()

**Definition:** devapi.h:1003

`Tango::CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__

vector< CommandInfo > CommandInfoList

A vector of CommandInfo structure.

**Definition:** devapi.h:146

`Tango::PipeInfoList <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__

vector< PipeInfo > PipeInfoList

**Definition:** devapi.h:386

`Tango::DeviceAttributeConfig::min\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa647cb22659434ffe9833adbfecb11ab>`__

string min\_value

Min value.

**Definition:** devapi.h:183

`Tango::AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__

Attribute configuration data extension.

**Definition:** devapi.h:201

`Tango::LockerInfo <../../dd/d39/structTango_1_1LockerInfo.html>`__

**Definition:** devapi.h:77

`Tango::DevCommandInfo::cmd\_tag <../../d0/dfd/structTango_1_1DevCommandInfo.html#ac010816c9134830bd21806807c76fda1>`__

long cmd\_tag

The command tag.

**Definition:** devapi.h:104

`Tango::DevCommandInfo::cmd\_name <../../d0/dfd/structTango_1_1DevCommandInfo.html#af0dbf63ccee65d2cb1d0f0d721a9881b>`__

string cmd\_name

The command name.

**Definition:** devapi.h:103

`Tango::asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__

asyn\_req\_type

Possible asynchronous request type.

**Definition:** devapi.h:399

`Tango::DevCommandInfo <../../d0/dfd/structTango_1_1DevCommandInfo.html>`__

Base structure for command information.

**Definition:** devapi.h:98

`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

Base class for Tango device access.

**Definition:** devapi.h:56

`Tango::DeviceAttributeConfig::max\_dim\_x <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a1194d38c18b4aaeba0989b14d912f17f>`__

int max\_dim\_x

Max dim X.

**Definition:** devapi.h:175

`Tango::DevCommandInfo::out\_type <../../d0/dfd/structTango_1_1DevCommandInfo.html#a6719a1b6a0396a2867b1b9fbd09cfe74>`__

long out\_type

Output parameter data type.

**Definition:** devapi.h:106

`Tango::AttributeAlarmInfo::delta\_val <../../d0/d4a/structTango_1_1AttributeAlarmInfo.html#a5e6d8bd051731bf5730ef92d89dc9810>`__

string delta\_val

Delta val RDS.

**Definition:** devapi.h:230

`Tango::NOT\_KNOWN <../../d1/d45/group__Client.html#gga76ad081a56687025de62cf1cbaf48124abf2e9bbaf87fc8c3446b88b7422c86b7>`__

Device too old to get this info.

**Definition:** devapi.h:316

`Tango::AttributeInfoEx::sys\_extensions <../../d3/d71/structTango_1_1AttributeInfoEx.html#afdf808e107b2d36d75eb8e07d798d7b4>`__

vector< string > sys\_extensions

Future extensions.

**Definition:** devapi.h:340

`Tango::PipeInfo::writable <../../d8/d04/structTango_1_1PipeInfo.html#ae0c6e057b77c1e3b1c8db29759817916>`__

Tango::PipeWriteType writable

Writable type (Read, Read-Write)

**Definition:** devapi.h:376

`Tango::DeviceAttributeConfig::max\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ac2be6304818d741aa970abcb3ff91105>`__

string max\_alarm

Max alarm.

**Definition:** devapi.h:186

`Tango::AttributeInfoEx <../../d1/d45/group__Client.html#ga09323cc9a29673f93f38e5e0190c6be6>`__

Tango::AttributeInfoEx AttributeInfoEx

Extended attribute configuration data.

`Tango::PeriodicEventInfo::extensions <../../d6/d55/structTango_1_1PeriodicEventInfo.html#af22ec2f765f0a23dcba8389924e5bdbd>`__

vector< string > extensions

Future extensions.

**Definition:** devapi.h:267

`Tango::\_DeviceInfo <../../d2/d46/structTango_1_1__DeviceInfo.html>`__

**Definition:** devapi.h:148

`Tango::DeviceAttributeHistory::has\_failed <../../d8/d41/classTango_1_1DeviceAttributeHistory.html#a29502710f173c46c03a6334f0498899e>`__

bool has\_failed()

Check if the record was a failure.

**Definition:** devapi.h:661

`Tango::AttributeDimension::dim\_y <../../d7/d7a/structTango_1_1AttributeDimension.html#aca8429fb212898c0367fcf5ab4c838a9>`__

long dim\_y

**Definition:** devapi.h:118

`Tango::AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__

vector< AttributeInfo > AttributeInfoList

**Definition:** devapi.h:351

`Tango::AttributeInfoEx::root\_attr\_name <../../d3/d71/structTango_1_1AttributeInfoEx.html#a9b125948c23b7a7747ad16165625ab66>`__

string root\_attr\_name

Root attribute name (in case of forwarded attribute)

**Definition:** devapi.h:335

`Tango::DevCommandInfo::out\_type\_desc <../../d0/dfd/structTango_1_1DevCommandInfo.html#a21c04c4239a3c5657af2378aed451c1e>`__

string out\_type\_desc

Ouptput parameter description.

**Definition:** devapi.h:108

`Tango::PeriodicEventInfo <../../d1/d45/group__Client.html#ga6795ae3557967c7d684ea7fc2c2ae470>`__

struct Tango::PeriodicEventInfo PeriodicEventInfo

Attribute periodic event configuration.

`Tango::\_DeviceInfo::doc\_url <../../d2/d46/structTango_1_1__DeviceInfo.html#a437472a3c6a1dbbbf7125180577e3e88>`__

string doc\_url

**Definition:** devapi.h:154

`Tango::AttributeInfo::disp\_level <../../df/dab/structTango_1_1AttributeInfo.html#aa958466c57a8cb39cb5aac4d451e13e2>`__

Tango::DispLevel disp\_level

Display level.

**Definition:** devapi.h:206

`Tango::PipeInfo::disp\_level <../../d8/d04/structTango_1_1PipeInfo.html#a82393be90b61b52fd490c5ee98bba7f6>`__

Tango::DispLevel disp\_level

Display level.

**Definition:** devapi.h:375

`Tango::DummyDeviceProxy::DummyDeviceProxy <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#a208e369e11d5e1d945b123ec217dc16d>`__

DummyDeviceProxy()

**Definition:** devapi.h:752

`Tango::ChangeEventInfo::extensions <../../d9/d49/structTango_1_1ChangeEventInfo.html#a355cf98af8fe7a780f9e1a3b6ed131f9>`__

vector< string > extensions

Future extensions.

**Definition:** devapi.h:251

`Tango::AttributeInfoEx::events <../../d3/d71/structTango_1_1AttributeInfoEx.html#a57d8d88a07dac398a91ad4180d7cb6c8>`__

AttributeEventInfo events

The attribute events configuration.

**Definition:** devapi.h:339

`Tango::DeviceAttributeConfig::standard\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a6e39a2bd02dff03ba378d42e0f0892e8>`__

string standard\_unit

Standard unit.

**Definition:** devapi.h:180

`Tango::PipeInfo::description <../../d8/d04/structTango_1_1PipeInfo.html#a5aaaf10e1d4adb9da8fb317bb1d965e5>`__

string description

Pipe description.

**Definition:** devapi.h:373

`Tango::LockingThread::mon <../../d0/d41/structTango_1_1LockingThread.html#ae8e7851b01b8c8a9a34c8044cb9ca3a9>`__

TangoMonitor \* mon

**Definition:** devapi.h:87

`Tango::CommandInfo::disp\_level <../../d3/d96/structTango_1_1CommandInfo.html#a3750fb7df117913285dcf4db9a36b037>`__

Tango::DispLevel disp\_level

The command display level.

**Definition:** devapi.h:133

`Tango::DeviceAttributeConfig::data\_format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a10e944fe3cc1e6dce24ebfd2f474c294>`__

AttrDataFormat data\_format

Data format (Scalar, Spectrum,...)

**Definition:** devapi.h:173

`Tango::DummyDeviceProxy::get\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#ae1aeac6ff92474063cc58a531b2c6d09>`__

virtual string get\_corba\_name(bool)

**Definition:** devapi.h:754

`Tango::DeviceAttributeConfig::unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#abbfe98ae17bfc21368b6347b9611e4f8>`__

string unit

Unit.

**Definition:** devapi.h:179

`Tango::LockingThread <../../d0/d41/structTango_1_1LockingThread.html>`__

**Definition:** devapi.h:85

`tango\_const.h <../../d4/d13/tango__const_8h.html>`__

`Tango::LockerInfo::locker\_host <../../dd/d39/structTango_1_1LockerInfo.html#ad357dac7c976f8336baeadcf8abafe81>`__

string locker\_host

**Definition:** devapi.h:81

`Tango::DummyDeviceProxy::build\_corba\_name <../../d9/dcb/classTango_1_1DummyDeviceProxy.html#af1b4aeeda9976c31d43bf0629c0c2e87>`__

virtual string build\_corba\_name()

**Definition:** devapi.h:755

`Tango::PipeInfo <../../de/ddf/namespaceTango.html#ad35a82291acaf683a0c33416db790f0f>`__

struct Tango::PipeInfo PipeInfo

Base structure for pipe information.

`Tango::LockerInfo::ll <../../dd/d39/structTango_1_1LockerInfo.html#a7a15276bc7ce4c7dd2ff59f8aa67f185>`__

LockerLanguage ll

**Definition:** devapi.h:79

`Tango::AttributeInfoEx::alarms <../../d3/d71/structTango_1_1AttributeInfoEx.html#aaf01f87192831893661acfa4b926d0c8>`__

AttributeAlarmInfo alarms

The attribute alarms.

**Definition:** devapi.h:338

`Tango::AttributeEventInfo::ch\_event <../../da/dce/structTango_1_1AttributeEventInfo.html#a1af98248c881a274162b3542577ca21f>`__

ChangeEventInfo ch\_event

Attribute change event info.

**Definition:** devapi.h:300

`Tango::NARROW\_CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__

const int NARROW\_CLNT\_TIMEOUT

**Definition:** tango\_const.h:170

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `devapi.h <../../d9/ddc/devapi_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
