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

devasyn.h

`Go to the documentation of this file. <../../db/d02/devasyn_8h.html>`__

1 //

2 // devsyn.h - include file for TANGO api device asynchronous calls

3 //

4 //

5 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

6 // European Synchrotron Radiation Facility

7 // BP 220, Grenoble 38043

8 // FRANCE

9 //

10 // This file is part of Tango.

11 //

12 // Tango is free software: you can redistribute it and/or modify

13 // it under the terms of the GNU Lesser General Public License as
published by

14 // the Free Software Foundation, either version 3 of the License, or

15 // (at your option) any later version.

16 //

17 // Tango is distributed in the hope that it will be useful,

18 // but WITHOUT ANY WARRANTY; without even the implied warranty of

19 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

20 // GNU Lesser General Public License for more details.

21 //

22 // You should have received a copy of the GNU Lesser General Public
License

23 // along with Tango. If not, see <http://www.gnu.org/licenses/>.

24 

25 

26 #ifndef \_DEVASYN\_H

27 #define \_DEVASYN\_H

28 

29 #include <tango.h>

30 

31 #include <map>

32 

33 using namespace `std <../../d8/dcc/namespacestd.html>`__;

34 

35 namespace `Tango <../../de/ddf/namespaceTango.html>`__ {

36 

37 

38 //------------------------------------------------------------------------------

39 

40 class DeviceProxy;

41 class Connection;

42 class DeviceData;

43 class DeviceAttribute;

44 class NamedDevFailedList;

45 class EventData;

46 class AttrConfEventData;

47 class DataReadyEventData;

48 class DevIntrChangeEventData;

49 class PipeEventData;

50 class EventDataList;

51 class AttrConfEventDataList;

52 class DataReadyEventDataList;

53 class DevIntrChangeEventDataList;

54 class PipeEventDataList;

55 class EventConsumer;

56 class EventConsumerKeepAliveThread;

57 

58 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

59  \* \*

60  \* CmdDoneEvent class \*

61  \* \*

62 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

63 

`76 <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__ class
`CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__

77 {

78 public:

80 
`CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,

81  string &cmd,

82  `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &arg,

83  DevErrorList &err\_in):device(dev),

84  cmd\_name(cmd),

85  argout(arg),

86  errors(err\_in)

87  {if (errors.length()==0) err=false;else err=true;}

88 

`90 <../../dc/d43/classTango_1_1CmdDoneEvent.html#a4815622ebc52bc227f481e2d488cc7c1>`__ 
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../dc/d43/classTango_1_1CmdDoneEvent.html#a4815622ebc52bc227f481e2d488cc7c1>`__;

`91 <../../dc/d43/classTango_1_1CmdDoneEvent.html#a9b3ff5a65147c469b19d5deafecf600a>`__ 
string
&\ `cmd\_name <../../dc/d43/classTango_1_1CmdDoneEvent.html#a9b3ff5a65147c469b19d5deafecf600a>`__;

`92 <../../dc/d43/classTango_1_1CmdDoneEvent.html#a5bfb13a2fa90db07a6bd6092188dd96b>`__ 
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
&\ `argout <../../dc/d43/classTango_1_1CmdDoneEvent.html#a5bfb13a2fa90db07a6bd6092188dd96b>`__;

`93 <../../dc/d43/classTango_1_1CmdDoneEvent.html#aa65c091b8483025114f5825760cb994a>`__ 
bool
`err <../../dc/d43/classTango_1_1CmdDoneEvent.html#aa65c091b8483025114f5825760cb994a>`__;

`94 <../../dc/d43/classTango_1_1CmdDoneEvent.html#ad6842cac8f28ad790a3a19bd4818390e>`__ 
DevErrorList
&\ `errors <../../dc/d43/classTango_1_1CmdDoneEvent.html#ad6842cac8f28ad790a3a19bd4818390e>`__;

95 

96 private:

97  class CmdDoneEventExt

98  {

99  public:

100  CmdDoneEventExt() {};

101  };

102 

103 #ifdef HAS\_UNIQUE\_PTR

104  unique\_ptr<CmdDoneEventExt> ext;

105 #else

106  CmdDoneEventExt \*ext;

107 #endif

108 };

109 

110 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

111  \* \*

112  \* AttrReadEvent class \*

113  \* \*

114 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

115 

`129 <../../dc/d42/classTango_1_1AttrReadEvent.html>`__ class
`AttrReadEvent <../../dc/d42/classTango_1_1AttrReadEvent.html>`__

130 {

131 public:

133 
`AttrReadEvent <../../dc/d42/classTango_1_1AttrReadEvent.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,

134  vector<string> &att\_names,

135  vector<DeviceAttribute> \*arg,

136  DevErrorList &err\_in):device(dev),

137  attr\_names(att\_names),

138  argout(arg),

139  errors(err\_in)

140  {if (errors.length()==0) err=false;else err=true;}

141 

`143 <../../dc/d42/classTango_1_1AttrReadEvent.html#acf3b676448255116ba14ee7c7bc4e062>`__ 
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../dc/d42/classTango_1_1AttrReadEvent.html#acf3b676448255116ba14ee7c7bc4e062>`__;

`144 <../../dc/d42/classTango_1_1AttrReadEvent.html#aba1abaa8dd0c0513945d73297d6f31e2>`__ 
vector<string>
&\ `attr\_names <../../dc/d42/classTango_1_1AttrReadEvent.html#aba1abaa8dd0c0513945d73297d6f31e2>`__;

`145 <../../dc/d42/classTango_1_1AttrReadEvent.html#afb3a4d42905139147b8f3badae37f509>`__ 
vector<DeviceAttribute>
\*\ `argout <../../dc/d42/classTango_1_1AttrReadEvent.html#afb3a4d42905139147b8f3badae37f509>`__;

`146 <../../dc/d42/classTango_1_1AttrReadEvent.html#a81fa0b8b572d1dd3328afb21c747b34a>`__ 
bool
`err <../../dc/d42/classTango_1_1AttrReadEvent.html#a81fa0b8b572d1dd3328afb21c747b34a>`__;

`147 <../../dc/d42/classTango_1_1AttrReadEvent.html#ac15cd8804bb7185316d718a7fca674ff>`__ 
DevErrorList
&\ `errors <../../dc/d42/classTango_1_1AttrReadEvent.html#ac15cd8804bb7185316d718a7fca674ff>`__;

148 

149 private:

150  class AttrReadEventExt

151  {

152  public:

153  AttrReadEventExt() {};

154  };

155 

156 #ifdef HAS\_UNIQUE\_PTR

157  unique\_ptr<AttrReadEventExt> ext;

158 #else

159  AttrReadEventExt \*ext;

160 #endif

161 };

162 

163 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

164  \* \*

165  \* AttrWrittenEvent class \*

166  \* \*

167 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

168 

`182 <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__ class
`AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__

183 {

184 public:

186 
`AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,

187  vector<string> &att\_names,

188 
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__
&err\_in):device(dev),

189  attr\_names(att\_names),

190  errors(err\_in)

191  {err = errors.call\_failed();}

192 

`194 <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a23c2655b23415d44475c2ecfe5eeb782>`__ 
`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a23c2655b23415d44475c2ecfe5eeb782>`__;

`195 <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a5ffa7a0ee56495141515b939d64df365>`__ 
vector<string>
&\ `attr\_names <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a5ffa7a0ee56495141515b939d64df365>`__;

`196 <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ac81796b8acd485a713c00695bf53d5a8>`__ 
bool
`err <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ac81796b8acd485a713c00695bf53d5a8>`__;

`197 <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ab66070e56148e1aed6c9e5125af2c8dd>`__ 
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__
&\ `errors <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ab66070e56148e1aed6c9e5125af2c8dd>`__;

198 

199 private:

200  class AttrWrittenEventExt

201  {

202  public:

203  AttrWrittenEventExt() {};

204  };

205 

206 #ifdef HAS\_UNIQUE\_PTR

207  unique\_ptr<AttrWrittenEventExt> ext;

208 #else

209  AttrWrittenEventExt \*ext;

210 #endif

211 };

212 

213 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

214  \* \*

215  \* CallBack class \*

216  \* \*

217 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

218 

`234 <../../d4/ded/classTango_1_1CallBack.html>`__ class
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__

235 {

236 

`237 <../../d4/ded/classTango_1_1CallBack.html#a1267d53ae947792829a0db311573ae18>`__ friend
class EventConsumer;

`238 <../../d4/ded/classTango_1_1CallBack.html#aa6907ff9f96d034b806902f0627d9dcb>`__ friend
class EventConsumerKeepAliveThread;

239 

240 public:

241 #ifdef GEN\_DOC

242 

`251 <../../d4/ded/classTango_1_1CallBack.html#a9a39818975ee8f46755209a62ffed5f7>`__ 
virtual void
`cmd\_ended <../../d4/ded/classTango_1_1CallBack.html#a9a39818975ee8f46755209a62ffed5f7>`__\ (`CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__
\*cde) {};

`261 <../../d4/ded/classTango_1_1CallBack.html#a47a4fc0fca26863bd7b31e6f1e978f72>`__ 
virtual void
`attr\_read <../../d4/ded/classTango_1_1CallBack.html#a47a4fc0fca26863bd7b31e6f1e978f72>`__\ (`AttrReadEvent <../../dc/d42/classTango_1_1AttrReadEvent.html>`__
\*are) {};

`271 <../../d4/ded/classTango_1_1CallBack.html#a352e653238bb6ecb134fa36d4adb44bc>`__ 
virtual void
`attr\_written <../../d4/ded/classTango_1_1CallBack.html#a352e653238bb6ecb134fa36d4adb44bc>`__\ (`AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__
\*awe) {};

`280 <../../d4/ded/classTango_1_1CallBack.html#a6a794901a14f08b1cda918e1d18acce9>`__ 
virtual void
`push\_event <../../d4/ded/classTango_1_1CallBack.html#a6a794901a14f08b1cda918e1d18acce9>`__\ (`EventData <../../d7/d5f/classTango_1_1EventData.html>`__
\*ed) {};

`290 <../../d4/ded/classTango_1_1CallBack.html#a5d1dc656f3a7f50df6860f01fac4f32e>`__ 
virtual void
`push\_event <../../d4/ded/classTango_1_1CallBack.html#a5d1dc656f3a7f50df6860f01fac4f32e>`__\ (`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*ace) {};

`299 <../../d4/ded/classTango_1_1CallBack.html#abab8a359a1e492e12a21b3dab7b93501>`__ 
virtual void
`push\_event <../../d4/ded/classTango_1_1CallBack.html#abab8a359a1e492e12a21b3dab7b93501>`__\ (`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
\*dre) {};

`308 <../../d4/ded/classTango_1_1CallBack.html#acf0ff8451e6fd851f8724237d4fad4a8>`__ 
virtual void
`push\_event <../../d4/ded/classTango_1_1CallBack.html#acf0ff8451e6fd851f8724237d4fad4a8>`__\ (`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
\*dic) {};

`317 <../../d4/ded/classTango_1_1CallBack.html#aac4aa49f209d8db18ce415f2a1a5d13d>`__ 
virtual void
`push\_event <../../d4/ded/classTango_1_1CallBack.html#aac4aa49f209d8db18ce415f2a1a5d13d>`__\ (`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
\*ped) {};

318 #else

319  virtual void
cmd\_ended(\ `CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__
\*) {};

320  virtual void attr\_read(AttrReadEvent \*) {};

321  virtual void attr\_written(AttrWrittenEvent \*) {};

322  virtual void push\_event(EventData \*) {};

323  virtual void push\_event(AttrConfEventData \*) {};

324  virtual void push\_event(DataReadyEventData \*) {};

325  virtual void push\_event(DevIntrChangeEventData \*) {};

326  virtual void push\_event(PipeEventData \*) {};

327 #endif

328 

330  virtual ~CallBack() {};

331 

332 private:

333  class CallBackExt

334  {

335  public:

336  CallBackExt() {};

337  };

338 

339 #ifdef HAS\_UNIQUE\_PTR

340  unique\_ptr<CallBackExt> ext;

341 #else

342  CallBackExt \*ext;

343 #endif

344 };

345 

346 //------------------------------------------------------------------------------

347 

`348 <../../d5/dad/classTango_1_1UniqIdent.html>`__ class
`UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html>`__: public
omni\_mutex

349 {

350 public:

`351 <../../d5/dad/classTango_1_1UniqIdent.html#af52963f388bed708e8725889a9139fab>`__ 
`UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html#af52963f388bed708e8725889a9139fab>`__\ ()
{omni\_mutex\_lock sync(\*this);ctr = 0;}

`352 <../../d5/dad/classTango_1_1UniqIdent.html#aafd90488ed0f2161d8f705886008ba46>`__ 
long
`get\_ident <../../d5/dad/classTango_1_1UniqIdent.html#aafd90488ed0f2161d8f705886008ba46>`__\ ()
{omni\_mutex\_lock sync(\*this);return ++ctr;}

353 

`354 <../../d5/dad/classTango_1_1UniqIdent.html#a5e162225e409d439ebb8d92976511651>`__ 
long
`ctr <../../d5/dad/classTango_1_1UniqIdent.html#a5e162225e409d439ebb8d92976511651>`__;

355 };

356 

`357 <../../db/d68/classTango_1_1TgRequest.html>`__ class
`TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__

358 {

359 public:

`360 <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__ 
enum
`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__

361  {

`362 <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a04e80a438e091149063679db1a10ddb9>`__ 
`CMD\_INOUT <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a04e80a438e091149063679db1a10ddb9>`__,

`363 <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a3466c21a6337f0cd76a5bbd90a566172>`__ 
`READ\_ATTR <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a3466c21a6337f0cd76a5bbd90a566172>`__,

`364 <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343aa7268c071129d7da5e811bf37b8f2fcb>`__ 
`WRITE\_ATTR\_SINGLE <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343aa7268c071129d7da5e811bf37b8f2fcb>`__,

`365 <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a82796f46c21ca154dc78089e2983de65>`__ 
WRITE\_ATTR

366  };

367 

`368 <../../db/d68/classTango_1_1TgRequest.html#aaff69a8c4221e4ac48febff3f9c6e3b6>`__ 
`TgRequest <../../db/d68/classTango_1_1TgRequest.html#aaff69a8c4221e4ac48febff3f9c6e3b6>`__\ (CORBA::Request\_ptr
re,\ `ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty):request(re),req\_type(ty),cb\_ptr(NULL),

369  arrived(false),dev(NULL)

370  {};

371 

`372 <../../db/d68/classTango_1_1TgRequest.html#ad17a7ebe95dc9bd2ed9e55409ada8059>`__ 
`TgRequest <../../db/d68/classTango_1_1TgRequest.html#ad17a7ebe95dc9bd2ed9e55409ada8059>`__\ (CORBA::Request\_ptr
re,\ `ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty,\ `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*cb):request(re),req\_type(ty),cb\_ptr(cb),

373  arrived(false),dev(NULL)

374  {};

375 

`376 <../../db/d68/classTango_1_1TgRequest.html#a3a6abdbc73d075711e9573909fbd0dba>`__ 
`TgRequest <../../db/d68/classTango_1_1TgRequest.html#a3a6abdbc73d075711e9573909fbd0dba>`__\ (`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*con,\ `ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
ty,\ `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*cb):request(NULL),req\_type(ty),cb\_ptr(cb),

377  arrived(false),dev(con)

`378 <../../db/d68/classTango_1_1TgRequest.html#ac67ab29d677879fb006e4bbd434fef00>`__ 
{};

379 

380  CORBA::Request\_ptr request;

`381 <../../db/d68/classTango_1_1TgRequest.html#a17cf8b3659ac680ae34ab0d801daa163>`__ 
`ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__
`req\_type <../../db/d68/classTango_1_1TgRequest.html#a17cf8b3659ac680ae34ab0d801daa163>`__;

`382 <../../db/d68/classTango_1_1TgRequest.html#afa65b05a864aed9174755a819d8193a0>`__ 
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*\ `cb\_ptr <../../db/d68/classTango_1_1TgRequest.html#afa65b05a864aed9174755a819d8193a0>`__;

`383 <../../db/d68/classTango_1_1TgRequest.html#ab6edfb4b709db11d6863eaf6b3d963fb>`__ 
bool
`arrived <../../db/d68/classTango_1_1TgRequest.html#ab6edfb4b709db11d6863eaf6b3d963fb>`__;

`384 <../../db/d68/classTango_1_1TgRequest.html#a6600b476fa5be339ff010fe4f60d593b>`__ 
`Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*\ `dev <../../db/d68/classTango_1_1TgRequest.html#a6600b476fa5be339ff010fe4f60d593b>`__;

385 };

386 

`387 <../../d4/d49/classTango_1_1AsynReq.html>`__ class
`AsynReq <../../d4/d49/classTango_1_1AsynReq.html>`__: public
omni\_mutex

388 {

389 public:

`390 <../../d4/d49/classTango_1_1AsynReq.html#aaf398fa29d8dd69b8a3e8140bc064ac4>`__ 
`AsynReq <../../d4/d49/classTango_1_1AsynReq.html#aaf398fa29d8dd69b8a3e8140bc064ac4>`__\ (`UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html>`__
\*ptr):ui\_ptr(ptr),cond(this) {};

`391 <../../d4/d49/classTango_1_1AsynReq.html#a561d72b073445ffa393fa2b488cdb102>`__ 
`~AsynReq <../../d4/d49/classTango_1_1AsynReq.html#a561d72b073445ffa393fa2b488cdb102>`__\ ()
{delete ui\_ptr;}

392 

393  `TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__
&get\_request(long);

394  `TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__
&get\_request(CORBA::Request\_ptr);

395  `TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__
\*get\_request(\ `Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*);

396 

397  long
store\_request(CORBA::Request\_ptr,\ `TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__);

398  void
store\_request(CORBA::Request\_ptr,\ `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*,\ `Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*,\ `TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__);

399 

400  void remove\_request(long);

401  void
remove\_request(\ `Connection <../../d7/de8/classTango_1_1Connection.html>`__
\*,CORBA::Request\_ptr);

402 

`403 <../../d4/d49/classTango_1_1AsynReq.html#ab2cd39f7e22d7379c3ec231f1a4f8996>`__ 
size\_t
`get\_request\_nb <../../d4/d49/classTango_1_1AsynReq.html#ab2cd39f7e22d7379c3ec231f1a4f8996>`__\ ()
{omni\_mutex\_lock sync(\*this);return asyn\_poll\_req\_table.size();}

`404 <../../d4/d49/classTango_1_1AsynReq.html#a2382aa029446ce932fc1806d27a79c86>`__ 
size\_t
`get\_cb\_request\_nb <../../d4/d49/classTango_1_1AsynReq.html#a2382aa029446ce932fc1806d27a79c86>`__\ ()
{omni\_mutex\_lock sync(\*this);return cb\_req\_table.size();}

`405 <../../d4/d49/classTango_1_1AsynReq.html#a64026d73695274edd8dbac838eb5a7ee>`__ 
size\_t
`get\_cb\_request\_nb\_i <../../d4/d49/classTango_1_1AsynReq.html#a64026d73695274edd8dbac838eb5a7ee>`__\ ()
{return cb\_req\_table.size();}

406 

407  void mark\_as\_arrived(CORBA::Request\_ptr req);

`408 <../../d4/d49/classTango_1_1AsynReq.html#a0ee69f2ee61f7c3cb9832b5d65ba175a>`__ 
multimap<Connection \*,TgRequest>
&\ `get\_cb\_dev\_table <../../d4/d49/classTango_1_1AsynReq.html#a0ee69f2ee61f7c3cb9832b5d65ba175a>`__\ ()
{return cb\_dev\_table;}

409 

410  void mark\_as\_cancelled(long);

411  void mark\_all\_polling\_as\_cancelled();

`412 <../../d4/d49/classTango_1_1AsynReq.html#ad7570fa623931b56985d6bcd69c4a564>`__ 
void
`wait <../../d4/d49/classTango_1_1AsynReq.html#ad7570fa623931b56985d6bcd69c4a564>`__\ ()
{cond.wait();}

`413 <../../d4/d49/classTango_1_1AsynReq.html#add4662104ae067eb6a30cd4227d49798>`__ 
void
`signal <../../d4/d49/classTango_1_1AsynReq.html#add4662104ae067eb6a30cd4227d49798>`__\ ()
{omni\_mutex\_lock sync(\*this);cond.signal();}

414 

415 protected:

`416 <../../d4/d49/classTango_1_1AsynReq.html#abf576e773e62e7f20b3972b2478458fa>`__ 
map<long,TgRequest>
`asyn\_poll\_req\_table <../../d4/d49/classTango_1_1AsynReq.html#abf576e773e62e7f20b3972b2478458fa>`__;

`417 <../../d4/d49/classTango_1_1AsynReq.html#af5c541f5c4b03e3a693a97716fb6f40e>`__ 
`UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html>`__
\*\ `ui\_ptr <../../d4/d49/classTango_1_1AsynReq.html#af5c541f5c4b03e3a693a97716fb6f40e>`__;

418 

`419 <../../d4/d49/classTango_1_1AsynReq.html#a12999a86b535765b5e0c1da4c29eefb2>`__ 
multimap<Connection \*,TgRequest>
`cb\_dev\_table <../../d4/d49/classTango_1_1AsynReq.html#a12999a86b535765b5e0c1da4c29eefb2>`__;

`420 <../../d4/d49/classTango_1_1AsynReq.html#ae3bcdf7be7d8fb5e17b0e2a00a23206d>`__ 
map<CORBA::Request\_ptr,TgRequest>
`cb\_req\_table <../../d4/d49/classTango_1_1AsynReq.html#ae3bcdf7be7d8fb5e17b0e2a00a23206d>`__;

421 

`422 <../../d4/d49/classTango_1_1AsynReq.html#acde2d2aba10f49ff4fe5fad1ab508370>`__ 
vector<long>
`cancelled\_request <../../d4/d49/classTango_1_1AsynReq.html#acde2d2aba10f49ff4fe5fad1ab508370>`__;

423 

424 private:

425  omni\_condition cond;

426  bool remove\_cancelled\_request(long);

427 };

428 

429 } // End of Tango namespace

430 

431 #endif /\* \_DEVASYN\_H \*/

`Tango::TgRequest <../../db/d68/classTango_1_1TgRequest.html>`__

**Definition:** devasyn.h:357

`Tango::AttrReadEvent::errors <../../dc/d42/classTango_1_1AttrReadEvent.html#ac15cd8804bb7185316d718a7fca674ff>`__

DevErrorList & errors

The error stack.

**Definition:** devasyn.h:147

`Tango::DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__

Device interface change event callback execution data.

**Definition:** event.h:353

`Tango::AsynReq::get\_request\_nb <../../d4/d49/classTango_1_1AsynReq.html#ab2cd39f7e22d7379c3ec231f1a4f8996>`__

size\_t get\_request\_nb()

**Definition:** devasyn.h:403

`Tango::AttrWrittenEvent::device <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a23c2655b23415d44475c2ecfe5eeb782>`__

Tango::DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** devasyn.h:194

`Tango::AsynReq <../../d4/d49/classTango_1_1AsynReq.html>`__

**Definition:** devasyn.h:387

`Tango::UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html>`__

**Definition:** devasyn.h:348

`Tango::CallBack::push\_event <../../d4/ded/classTango_1_1CallBack.html#a5d1dc656f3a7f50df6860f01fac4f32e>`__

virtual void push\_event(AttrConfEventData \*ace)

attribute configuration change event callback method

**Definition:** devasyn.h:290

`Tango::AttrReadEvent::device <../../dc/d42/classTango_1_1AttrReadEvent.html#acf3b676448255116ba14ee7c7bc4e062>`__

Tango::DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** devasyn.h:143

`Tango::AttrReadEvent::argout <../../dc/d42/classTango_1_1AttrReadEvent.html#afb3a4d42905139147b8f3badae37f509>`__

vector< DeviceAttribute > \* argout

The attribute data.

**Definition:** devasyn.h:145

`Tango::AsynReq::signal <../../d4/d49/classTango_1_1AsynReq.html#add4662104ae067eb6a30cd4227d49798>`__

void signal()

**Definition:** devasyn.h:413

`Tango::PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__

Pipe event callback execution data.

**Definition:** event.h:439

`Tango::AsynReq::ui\_ptr <../../d4/d49/classTango_1_1AsynReq.html#af5c541f5c4b03e3a693a97716fb6f40e>`__

UniqIdent \* ui\_ptr

**Definition:** devasyn.h:417

`Tango::TgRequest::TgRequest <../../db/d68/classTango_1_1TgRequest.html#ad17a7ebe95dc9bd2ed9e55409ada8059>`__

TgRequest(CORBA::Request\_ptr re, ReqType ty, CallBack \*cb)

**Definition:** devasyn.h:372

`Tango::AsynReq::get\_cb\_request\_nb <../../d4/d49/classTango_1_1AsynReq.html#a2382aa029446ce932fc1806d27a79c86>`__

size\_t get\_cb\_request\_nb()

**Definition:** devasyn.h:404

`Tango::AsynReq::wait <../../d4/d49/classTango_1_1AsynReq.html#ad7570fa623931b56985d6bcd69c4a564>`__

void wait()

**Definition:** devasyn.h:412

`Tango::TgRequest::arrived <../../db/d68/classTango_1_1TgRequest.html#ab6edfb4b709db11d6863eaf6b3d963fb>`__

bool arrived

**Definition:** devasyn.h:383

`Tango::CmdDoneEvent::errors <../../dc/d43/classTango_1_1CmdDoneEvent.html#ad6842cac8f28ad790a3a19bd4818390e>`__

DevErrorList & errors

The error stack.

**Definition:** devasyn.h:94

`Tango::AttrWrittenEvent::attr\_names <../../da/d7f/classTango_1_1AttrWrittenEvent.html#a5ffa7a0ee56495141515b939d64df365>`__

vector< string > & attr\_names

The attribute name list.

**Definition:** devasyn.h:195

`Tango::CallBack::cmd\_ended <../../d4/ded/classTango_1_1CallBack.html#a9a39818975ee8f46755209a62ffed5f7>`__

virtual void cmd\_ended(CmdDoneEvent \*cde)

Asynchronous command execution callback method.

**Definition:** devasyn.h:251

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Tango::TgRequest::req\_type <../../db/d68/classTango_1_1TgRequest.html#a17cf8b3659ac680ae34ab0d801daa163>`__

ReqType req\_type

**Definition:** devasyn.h:381

`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__

Event and asynchronous (callback model) calls base class.

**Definition:** devasyn.h:234

`Tango::TgRequest::ReqType <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343>`__

ReqType

**Definition:** devasyn.h:360

`Tango::AsynReq::get\_cb\_request\_nb\_i <../../d4/d49/classTango_1_1AsynReq.html#a64026d73695274edd8dbac838eb5a7ee>`__

size\_t get\_cb\_request\_nb\_i()

**Definition:** devasyn.h:405

`Tango::NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__

An exception class.

**Definition:** apiexcept.h:79

`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

Fundamental type for sending and receiving data from device commands.

**Definition:** devapi.h:64

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::TgRequest::cb\_ptr <../../db/d68/classTango_1_1TgRequest.html#afa65b05a864aed9174755a819d8193a0>`__

CallBack \* cb\_ptr

**Definition:** devasyn.h:382

`Tango::AsynReq::~AsynReq <../../d4/d49/classTango_1_1AsynReq.html#a561d72b073445ffa393fa2b488cdb102>`__

~AsynReq()

**Definition:** devasyn.h:391

`Tango::DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__

Data ready event callback execution data.

**Definition:** event.h:268

`Tango::AttrWrittenEvent <../../da/d7f/classTango_1_1AttrWrittenEvent.html>`__

Asynchronous write attribute execution callback data.

**Definition:** devasyn.h:182

`Tango::AsynReq::cb\_dev\_table <../../d4/d49/classTango_1_1AsynReq.html#a12999a86b535765b5e0c1da4c29eefb2>`__

multimap< Connection \*, TgRequest > cb\_dev\_table

**Definition:** devasyn.h:419

`Tango::CmdDoneEvent::argout <../../dc/d43/classTango_1_1CmdDoneEvent.html#a5bfb13a2fa90db07a6bd6092188dd96b>`__

DeviceData & argout

The command argout.

**Definition:** devasyn.h:92

`Tango::TgRequest::TgRequest <../../db/d68/classTango_1_1TgRequest.html#a3a6abdbc73d075711e9573909fbd0dba>`__

TgRequest(Tango::Connection \*con, ReqType ty, CallBack \*cb)

**Definition:** devasyn.h:376

`Tango::CallBack::push\_event <../../d4/ded/classTango_1_1CallBack.html#a6a794901a14f08b1cda918e1d18acce9>`__

virtual void push\_event(EventData \*ed)

Event callback method.

**Definition:** devasyn.h:280

`Tango::CallBack::push\_event <../../d4/ded/classTango_1_1CallBack.html#acf0ff8451e6fd851f8724237d4fad4a8>`__

virtual void push\_event(DevIntrChangeEventData \*dic)

Device interface change event callback method.

**Definition:** devasyn.h:308

`Tango::AttrWrittenEvent::err <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ac81796b8acd485a713c00695bf53d5a8>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** devasyn.h:196

`Tango::TgRequest::CMD\_INOUT <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a04e80a438e091149063679db1a10ddb9>`__

**Definition:** devasyn.h:362

`Tango::CallBack::attr\_written <../../d4/ded/classTango_1_1CallBack.html#a352e653238bb6ecb134fa36d4adb44bc>`__

virtual void attr\_written(AttrWrittenEvent \*awe)

Asynchronous write attribute execution callback method.

**Definition:** devasyn.h:271

`Tango::EventData <../../d7/d5f/classTango_1_1EventData.html>`__

Event callback execution data.

**Definition:** event.h:73

`Tango::UniqIdent::UniqIdent <../../d5/dad/classTango_1_1UniqIdent.html#af52963f388bed708e8725889a9139fab>`__

UniqIdent()

**Definition:** devasyn.h:351

`Tango::TgRequest::TgRequest <../../db/d68/classTango_1_1TgRequest.html#aaff69a8c4221e4ac48febff3f9c6e3b6>`__

TgRequest(CORBA::Request\_ptr re, ReqType ty)

**Definition:** devasyn.h:368

`Tango::CallBack::attr\_read <../../d4/ded/classTango_1_1CallBack.html#a47a4fc0fca26863bd7b31e6f1e978f72>`__

virtual void attr\_read(AttrReadEvent \*are)

Asynchronous read attribute execution callback method.

**Definition:** devasyn.h:261

`Tango::TgRequest::WRITE\_ATTR\_SINGLE <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343aa7268c071129d7da5e811bf37b8f2fcb>`__

**Definition:** devasyn.h:364

`Tango::AttrReadEvent::attr\_names <../../dc/d42/classTango_1_1AttrReadEvent.html#aba1abaa8dd0c0513945d73297d6f31e2>`__

vector< string > & attr\_names

The attribute name list.

**Definition:** devasyn.h:144

`Tango::AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

Attribute configuration change event callback execution data.

**Definition:** event.h:172

`Tango::TgRequest::dev <../../db/d68/classTango_1_1TgRequest.html#a6600b476fa5be339ff010fe4f60d593b>`__

Connection \* dev

**Definition:** devasyn.h:384

`Tango::CallBack::push\_event <../../d4/ded/classTango_1_1CallBack.html#abab8a359a1e492e12a21b3dab7b93501>`__

virtual void push\_event(DataReadyEventData \*dre)

Data ready event callback method.

**Definition:** devasyn.h:299

`Tango::AttrReadEvent::err <../../dc/d42/classTango_1_1AttrReadEvent.html#a81fa0b8b572d1dd3328afb21c747b34a>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** devasyn.h:146

`Tango::AsynReq::asyn\_poll\_req\_table <../../d4/d49/classTango_1_1AsynReq.html#abf576e773e62e7f20b3972b2478458fa>`__

map< long, TgRequest > asyn\_poll\_req\_table

**Definition:** devasyn.h:416

`Tango::CmdDoneEvent::device <../../dc/d43/classTango_1_1CmdDoneEvent.html#a4815622ebc52bc227f481e2d488cc7c1>`__

Tango::DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** devasyn.h:90

`Tango::UniqIdent::get\_ident <../../d5/dad/classTango_1_1UniqIdent.html#aafd90488ed0f2161d8f705886008ba46>`__

long get\_ident()

**Definition:** devasyn.h:352

`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

Base class for Tango device access.

**Definition:** devapi.h:56

`Tango::CmdDoneEvent::err <../../dc/d43/classTango_1_1CmdDoneEvent.html#aa65c091b8483025114f5825760cb994a>`__

bool err

A boolean flag set to true if the command failed. False otherwise.

**Definition:** devasyn.h:93

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

High level class which provides the client with an easy-to-use interface
to TANGO devices...

**Definition:** devapi.h:56

`Tango::AsynReq::cb\_req\_table <../../d4/d49/classTango_1_1AsynReq.html#ae3bcdf7be7d8fb5e17b0e2a00a23206d>`__

map< CORBA::Request\_ptr, TgRequest > cb\_req\_table

**Definition:** devasyn.h:420

`Tango::AsynReq::get\_cb\_dev\_table <../../d4/d49/classTango_1_1AsynReq.html#a0ee69f2ee61f7c3cb9832b5d65ba175a>`__

multimap< Connection \*, TgRequest > & get\_cb\_dev\_table()

**Definition:** devasyn.h:408

`Tango::TgRequest::READ\_ATTR <../../db/d68/classTango_1_1TgRequest.html#a6ae144d0765e704695987f8b20255343a3466c21a6337f0cd76a5bbd90a566172>`__

**Definition:** devasyn.h:363

`Tango::AsynReq::cancelled\_request <../../d4/d49/classTango_1_1AsynReq.html#acde2d2aba10f49ff4fe5fad1ab508370>`__

vector< long > cancelled\_request

**Definition:** devasyn.h:422

`Tango::AttrWrittenEvent::errors <../../da/d7f/classTango_1_1AttrWrittenEvent.html#ab66070e56148e1aed6c9e5125af2c8dd>`__

NamedDevFailedList & errors

The error stack.

**Definition:** devasyn.h:197

`Tango::CallBack::push\_event <../../d4/ded/classTango_1_1CallBack.html#aac4aa49f209d8db18ce415f2a1a5d13d>`__

virtual void push\_event(PipeEventData \*ped)

Pipe event callback method.

**Definition:** devasyn.h:317

`Tango::CmdDoneEvent <../../dc/d43/classTango_1_1CmdDoneEvent.html>`__

Asynchronous command execution callback data.

**Definition:** devasyn.h:76

`Tango::AsynReq::AsynReq <../../d4/d49/classTango_1_1AsynReq.html#aaf398fa29d8dd69b8a3e8140bc064ac4>`__

AsynReq(UniqIdent \*ptr)

**Definition:** devasyn.h:390

`Tango::CmdDoneEvent::cmd\_name <../../dc/d43/classTango_1_1CmdDoneEvent.html#a9b3ff5a65147c469b19d5deafecf600a>`__

string & cmd\_name

The command name.

**Definition:** devasyn.h:91

`Tango::UniqIdent::ctr <../../d5/dad/classTango_1_1UniqIdent.html#a5e162225e409d439ebb8d92976511651>`__

long ctr

**Definition:** devasyn.h:354

`Tango::AttrReadEvent <../../dc/d42/classTango_1_1AttrReadEvent.html>`__

Asynchronous read attribute execution callback data.

**Definition:** devasyn.h:129

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `devasyn.h <../../db/d02/devasyn_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
