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

event.h

`Go to the documentation of this file. <../../dd/d20/event_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : event.h

4 //

5 // description : C++ include file for implementing the TANGO event
server and client singleton classes -

6 // EventSupplier and EventConsumer.

7 // These classes are used to send events from the server to the
notification service and to receive

8 // events from the notification service.

9 //

10 // author(s) : A.Gotz (goetz@esrf.fr)

11 //

12 // Copyright (C) :
2003,2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

13 // European Synchrotron Radiation Facility

14 // BP 220, Grenoble 38043

15 // FRANCE

16 //

17 // This file is part of Tango.

18 //

19 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

20 // License as published by the Free Software Foundation, either
version 3 of the License, or

21 // (at your option) any later version.

22 //

23 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

24 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

25 // GNU Lesser General Public License for more details.

26 //

27 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

28 // If not, see <http://www.gnu.org/licenses/>.

29 //

30 // $Revision$

31 //

32 //===================================================================================================================

33 

34 #ifndef \_EVENTAPI\_H

35 #define \_EVENTAPI\_H

36 

37 #include
<`tango/server/attribute.h <../../d3/d7c/attribute_8h.html>`__\ >

38 #include <`tango/server/except.h <../../dc/d65/except_8h.html>`__\ >

39 #include
<`tango/server/tango\_const.h <../../d4/d13/tango__const_8h.html>`__\ >

40 

41 #include <zmq.hpp>

42 

43 namespace `Tango <../../de/ddf/namespaceTango.html>`__

44 {

45 

46 #ifndef \_USRDLL

47 extern "C"

48 {

49 #endif

50 void
`leavefunc <../../de/ddf/namespaceTango.html#a6d32a888f539065eae8dd0dec4c32b63>`__\ ();

51 #ifndef \_USRDLL

52 }

53 #endif

54 

55 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

56  \* \*

57  \* EventData class \*

58  \* \*

59 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

60 

`73 <../../d7/d5f/classTango_1_1EventData.html>`__ class
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__

74 {

75 public :

77  `EventData <../../d7/d5f/classTango_1_1EventData.html>`__\ () {}

78 
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,string &nam,string
&evt,\ `Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr\_value\_in,DevErrorList &errors\_in);

79 

80  ~\ `EventData <../../d7/d5f/classTango_1_1EventData.html>`__\ ();

81  `EventData <../../d7/d5f/classTango_1_1EventData.html>`__\ (const
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ &);

82  `EventData <../../d7/d5f/classTango_1_1EventData.html>`__ &
operator=(const
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ &);

86  Tango::TimeVal reception\_date;

87  Tango::TimeVal &get\_date() {return reception\_date;}

88 

`90 <../../d7/d5f/classTango_1_1EventData.html#ae56b5ea4399a060a10cba21884fc7a40>`__ 
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../d7/d5f/classTango_1_1EventData.html#ae56b5ea4399a060a10cba21884fc7a40>`__;

`91 <../../d7/d5f/classTango_1_1EventData.html#a0bd1e69e134e164209b86a4630357934>`__ 
string
`attr\_name <../../d7/d5f/classTango_1_1EventData.html#a0bd1e69e134e164209b86a4630357934>`__;

`92 <../../d7/d5f/classTango_1_1EventData.html#a346675d2a32c917164b53fa653af173c>`__ 
string
`event <../../d7/d5f/classTango_1_1EventData.html#a346675d2a32c917164b53fa653af173c>`__;

`93 <../../d7/d5f/classTango_1_1EventData.html#a5c709e4322db6f5129abf5063044c4a7>`__ 
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*\ `attr\_value <../../d7/d5f/classTango_1_1EventData.html#a5c709e4322db6f5129abf5063044c4a7>`__;

`94 <../../d7/d5f/classTango_1_1EventData.html#a415f9374bb792e3a638447c66af32523>`__ 
bool
`err <../../d7/d5f/classTango_1_1EventData.html#a415f9374bb792e3a638447c66af32523>`__;

`95 <../../d7/d5f/classTango_1_1EventData.html#abbb35ed304e18a77b63d8b49210329e6>`__ 
DevErrorList
`errors <../../d7/d5f/classTango_1_1EventData.html#abbb35ed304e18a77b63d8b49210329e6>`__;

96 

97 private:

98  void set\_time();

99 };

100 

`101 <../../d0/d71/classTango_1_1FwdEventData.html>`__ class
`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html>`__: public
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__

102 {

103 public:

104 
`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ac40ba97b20f3b6e560a49645f490d0dc>`__\ ();

105 
`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ac40ba97b20f3b6e560a49645f490d0dc>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,string &,string
&,\ `Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*,DevErrorList &);

106 
`FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ac40ba97b20f3b6e560a49645f490d0dc>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,string &,string
&,\ `Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*,DevErrorList &,zmq::message\_t \*);

107 

`108 <../../d0/d71/classTango_1_1FwdEventData.html#a07b8a8e405b306fd9092ace7de53401d>`__ 
void
`set\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a07b8a8e405b306fd9092ace7de53401d>`__\ (const
AttributeValue\_5 \*\_p) {av\_5 = \_p;}

`109 <../../d0/d71/classTango_1_1FwdEventData.html#a619ea982fd645f27cab11c4c66de586b>`__ 
const AttributeValue\_5
\*\ `get\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a619ea982fd645f27cab11c4c66de586b>`__\ ()
{return av\_5;}

`110 <../../d0/d71/classTango_1_1FwdEventData.html#a44b315e19fbd41954b9174c4fe8b5efc>`__ 
zmq::message\_t
\*\ `get\_zmq\_mess\_ptr <../../d0/d71/classTango_1_1FwdEventData.html#a44b315e19fbd41954b9174c4fe8b5efc>`__\ ()
{return event\_data;}

111 

112 private:

113  const AttributeValue\_5 \*av\_5;

114  zmq::message\_t \*event\_data;

115 };

116 

117 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

118  \* \*

119  \* EventDataList class \*

120  \* \*

121 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

`122 <../../d3/d57/classTango_1_1EventDataList.html>`__ class
`EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__:public
vector<EventData \*>

123 {

124 public:

`125 <../../d3/d57/classTango_1_1EventDataList.html#ac1d92a0c7d7056b40d504f70ed3b13c5>`__ 
`EventDataList <../../d3/d57/classTango_1_1EventDataList.html#ac1d92a0c7d7056b40d504f70ed3b13c5>`__\ ():
vector<\ `EventData <../../d7/d5f/classTango_1_1EventData.html>`__
\*>(0) {};

`126 <../../d3/d57/classTango_1_1EventDataList.html#a5fa9bd471834abf508f4dbf79de09d5e>`__ 
`~EventDataList <../../d3/d57/classTango_1_1EventDataList.html#a5fa9bd471834abf508f4dbf79de09d5e>`__\ ()

127  {

128  if (size() > 0)

129  {

130  EventDataList::iterator vpos;

131  for (vpos=begin(); vpos!=end(); ++vpos)

132  {

133  delete (\*vpos);

134  }

135  }

136  }

`137 <../../d3/d57/classTango_1_1EventDataList.html#afc697e717c9f28a44a32fb7065f8589d>`__ 
void
`clear <../../d3/d57/classTango_1_1EventDataList.html#afc697e717c9f28a44a32fb7065f8589d>`__\ ()

138  {

139  if (size() > 0)

140  {

141  EventDataList::iterator vpos;

142  for (vpos=begin(); vpos!=end(); ++vpos)

143  {

144  delete (\*vpos);

145  }

146 

147  this->vector<EventData \*>::clear();

148  }

149  }

150 };

151 

152 

153 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

154  \* \*

155  \* AttrConfEventData class \*

156  \* \*

157 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

158 

`172 <../../d9/da1/classTango_1_1AttrConfEventData.html>`__ class
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

173 {

174 public :

176 
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__\ ()
{}

177 
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,string &nam,string &evt,

178 
`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
\*attr\_conf\_in,

179  DevErrorList &errors\_in);

180 
~\ `AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__\ ();

181 
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__\ (const
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
&);

182 
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
& operator=(const
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
&);

186  Tango::TimeVal reception\_date;

187  Tango::TimeVal &get\_date() {return reception\_date;}

188 

`190 <../../d9/da1/classTango_1_1AttrConfEventData.html#a6da04a13ce41eff0ddcf63417f001c13>`__ 
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../d9/da1/classTango_1_1AttrConfEventData.html#a6da04a13ce41eff0ddcf63417f001c13>`__;

`191 <../../d9/da1/classTango_1_1AttrConfEventData.html#a950448309e5b62a4387d94fd38ce0d75>`__ 
string
`attr\_name <../../d9/da1/classTango_1_1AttrConfEventData.html#a950448309e5b62a4387d94fd38ce0d75>`__;

`192 <../../d9/da1/classTango_1_1AttrConfEventData.html#a70a8c86b121849afab88c952c6cc8bde>`__ 
string
`event <../../d9/da1/classTango_1_1AttrConfEventData.html#a70a8c86b121849afab88c952c6cc8bde>`__;

`193 <../../d9/da1/classTango_1_1AttrConfEventData.html#af84272ced68dde94791aa090fc80bd24>`__ 
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
\*\ `attr\_conf <../../d9/da1/classTango_1_1AttrConfEventData.html#af84272ced68dde94791aa090fc80bd24>`__;

`194 <../../d9/da1/classTango_1_1AttrConfEventData.html#a2e3fb06bc98bb156e254ebeb6a1c222e>`__ 
bool
`err <../../d9/da1/classTango_1_1AttrConfEventData.html#a2e3fb06bc98bb156e254ebeb6a1c222e>`__;

`195 <../../d9/da1/classTango_1_1AttrConfEventData.html#adb1f2a3796ba28cfa8a6de522b1596a8>`__ 
DevErrorList
`errors <../../d9/da1/classTango_1_1AttrConfEventData.html#adb1f2a3796ba28cfa8a6de522b1596a8>`__;

196 

197 private:

198  void set\_time();

199 };

200 

201 

`202 <../../d1/d08/classTango_1_1FwdAttrConfEventData.html>`__ class
`FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html>`__:
public
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

203 {

204 public:

205 
`FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a65b41bd462ee1a1bea3ea0f7a8d62a37>`__\ ();

206 
`FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a65b41bd462ee1a1bea3ea0f7a8d62a37>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,string &,string
&,\ `Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
\*,DevErrorList &);

207 

`208 <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a8954f696a706ec4aa1f7390e974de017>`__ 
void
`set\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a8954f696a706ec4aa1f7390e974de017>`__\ (const
AttributeConfig\_5 \*\_p) {fwd\_attr\_conf = \_p;}

`209 <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#ade61194ca130c87b018f3222d6970264>`__ 
const AttributeConfig\_5
\*\ `get\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#ade61194ca130c87b018f3222d6970264>`__\ ()
{return fwd\_attr\_conf;}

210 

211 private:

212  const AttributeConfig\_5 \*fwd\_attr\_conf;

213 };

214 

215 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

216  \* \*

217  \* AttrConfEventDataList class \*

218  \* \*

219 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

`220 <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__ class
`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__:public
vector<AttrConfEventData \*>

221 {

222 public:

`223 <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a4f05996e7c728cbe81a3d9c7537681b9>`__ 
`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a4f05996e7c728cbe81a3d9c7537681b9>`__\ ():
vector<\ `AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*>(0) {};

`224 <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#aded16cd8d6444b0eeafebdb718c34d90>`__ 
`~AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#aded16cd8d6444b0eeafebdb718c34d90>`__\ ()

225  {

226  if (size() > 0)

227  {

228  AttrConfEventDataList::iterator vpos;

229  for (vpos=begin(); vpos!=end(); ++vpos)

230  {

231  delete (\*vpos);

232  }

233  }

234  }

`235 <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a2bdc684a5056ac4c891e904e088c520e>`__ 
void
`clear <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a2bdc684a5056ac4c891e904e088c520e>`__\ ()

236  {

237  if (size() > 0)

238  {

239  AttrConfEventDataList::iterator vpos;

240  for (vpos=begin(); vpos!=end(); ++vpos)

241  {

242  delete (\*vpos);

243  }

244 

245  this->vector<AttrConfEventData \*>::clear();

246  }

247  }

248 };

249 

250 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

251  \* \*

252  \* DataReadyEventData class \*

253  \* \*

254 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

255 

`268 <../../df/d39/classTango_1_1DataReadyEventData.html>`__ class
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__

269 {

270 public :

272 
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__\ ()
{}

273 
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,AttDataReady \*,string &evt,DevErrorList &);

274 
~\ `DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__\ ()
{};

275 
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__\ (const
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
&);

276 
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
& operator=(const
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
&);

280  Tango::TimeVal reception\_date;

281  Tango::TimeVal &get\_date() {return reception\_date;}

282 

`284 <../../df/d39/classTango_1_1DataReadyEventData.html#a7df862854af7b80913dcb9dd1d330a64>`__ 
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../df/d39/classTango_1_1DataReadyEventData.html#a7df862854af7b80913dcb9dd1d330a64>`__;

`285 <../../df/d39/classTango_1_1DataReadyEventData.html#a2cd31366088f9fee0d06364c2a81796f>`__ 
string
`attr\_name <../../df/d39/classTango_1_1DataReadyEventData.html#a2cd31366088f9fee0d06364c2a81796f>`__;

`286 <../../df/d39/classTango_1_1DataReadyEventData.html#a90279b05b0751e18e8f348c0a41848fa>`__ 
string
`event <../../df/d39/classTango_1_1DataReadyEventData.html#a90279b05b0751e18e8f348c0a41848fa>`__;

`287 <../../df/d39/classTango_1_1DataReadyEventData.html#abc2542d1f11b9d8faff06e524793aa69>`__ 
int
`attr\_data\_type <../../df/d39/classTango_1_1DataReadyEventData.html#abc2542d1f11b9d8faff06e524793aa69>`__;

`288 <../../df/d39/classTango_1_1DataReadyEventData.html#a68d3c729f0f7aa64540f30c65b2b690f>`__ 
int
`ctr <../../df/d39/classTango_1_1DataReadyEventData.html#a68d3c729f0f7aa64540f30c65b2b690f>`__;

289 

`290 <../../df/d39/classTango_1_1DataReadyEventData.html#afc55fe4eee219eea959e8ad53d34f310>`__ 
bool
`err <../../df/d39/classTango_1_1DataReadyEventData.html#afc55fe4eee219eea959e8ad53d34f310>`__;

`291 <../../df/d39/classTango_1_1DataReadyEventData.html#acc8ce497a9b75d7db6878472ae471995>`__ 
DevErrorList
`errors <../../df/d39/classTango_1_1DataReadyEventData.html#acc8ce497a9b75d7db6878472ae471995>`__;

292 

293 private:

294  void set\_time();

295 };

296 

297 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

298  \* \*

299  \* DataReadyEventDataList class \*

300  \* \*

301 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

302 

`303 <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__ class
`DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__:public
vector<DataReadyEventData \*>

304 {

305 public:

`306 <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a0777dbe24e4e7a121b66a3162b816647>`__ 
`DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a0777dbe24e4e7a121b66a3162b816647>`__\ ():
vector<\ `DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
\*>(0) {};

`307 <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a8f1c43c6f88edbcf56fa991a35f34d77>`__ 
`~DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a8f1c43c6f88edbcf56fa991a35f34d77>`__\ ()

308  {

309  if (size() > 0)

310  {

311  DataReadyEventDataList::iterator vpos;

312  for (vpos=begin(); vpos!=end(); ++vpos)

313  {

314  delete (\*vpos);

315  }

316  }

317  }

`318 <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a3acc594e72f1ae67e29797a0b66aac19>`__ 
void
`clear <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a3acc594e72f1ae67e29797a0b66aac19>`__\ ()

319  {

320  if (size() > 0)

321  {

322  DataReadyEventDataList::iterator vpos;

323  for (vpos=begin(); vpos!=end(); ++vpos)

324  {

325  delete (\*vpos);

326  }

327 

328  this->vector<DataReadyEventData \*>::clear();

329  }

330  }

331 }

332 ;

333 

334 

335 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

336  \* \*

337  \* DevIntrChangeEventData class \*

338  \* \*

339 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

340 

`353 <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__ class
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__

354 {

355 public :

357 
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__\ ()
{}

358 
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,string &,string &,DevCmdInfoList\_2 \*,AttributeConfigList\_5
\*,bool,DevErrorList &);

359 
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*,string &,string
&,\ `CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__
\*,\ `AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__
\*,bool,DevErrorList &);

360 
~\ `DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__\ ()
{};

361 
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__\ (const
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
&);

362 
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
& operator=(const
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
&);

366  Tango::TimeVal reception\_date;

367  Tango::TimeVal &get\_date() {return reception\_date;}

368 

`370 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#aa23d2843deae51a30852fb1d49d51c91>`__ 
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../db/d47/classTango_1_1DevIntrChangeEventData.html#aa23d2843deae51a30852fb1d49d51c91>`__;

`371 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a9d4af2556b9cda47da2210546419f3ca>`__ 
string
`event <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a9d4af2556b9cda47da2210546419f3ca>`__;

`372 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#acc8d3960c808ddbcd750224ba1d9f417>`__ 
string
`device\_name <../../db/d47/classTango_1_1DevIntrChangeEventData.html#acc8d3960c808ddbcd750224ba1d9f417>`__;

`373 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#ab75f7e002dd7df09755b26e513231dc2>`__ 
`CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__
`cmd\_list <../../db/d47/classTango_1_1DevIntrChangeEventData.html#ab75f7e002dd7df09755b26e513231dc2>`__;

`374 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a89db4537a1e2634d03b6f3836469a5e0>`__ 
`AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__
`att\_list <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a89db4537a1e2634d03b6f3836469a5e0>`__;

`375 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#adbf8cb3b33018c236a5fa1440edb3588>`__ 
bool
`dev\_started <../../db/d47/classTango_1_1DevIntrChangeEventData.html#adbf8cb3b33018c236a5fa1440edb3588>`__;

376 

`378 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a52384944b2b92cbd9ecf66b21c4a9fdc>`__ 
bool
`err <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a52384944b2b92cbd9ecf66b21c4a9fdc>`__;

`379 <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a33be40ed8e49d251e5ba18e87a6468ef>`__ 
DevErrorList
`errors <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a33be40ed8e49d251e5ba18e87a6468ef>`__;

380 

381 private:

382  void set\_time();

383 };

384 

385 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

386  \* \*

387  \* DevIntrChangeEventDataList class \*

388  \* \*

389 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

390 

`391 <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__ class
`DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__:public
vector<DevIntrChangeEventData \*>

392 {

393 public:

`394 <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a872f6e8647f117e686bc55632184d058>`__ 
`DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a872f6e8647f117e686bc55632184d058>`__\ ():
vector<\ `DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
\*>(0) {};

`395 <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#adf7441209e03b2d0e3d3ff49eca9ca16>`__ 
`~DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#adf7441209e03b2d0e3d3ff49eca9ca16>`__\ ()

396  {

397  if (size() > 0)

398  {

399  DevIntrChangeEventDataList::iterator vpos;

400  for (vpos=begin(); vpos!=end(); ++vpos)

401  {

402  delete (\*vpos);

403  }

404  }

405  }

`406 <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a9d5faf3b858a7f140599260aee1bb9fa>`__ 
void
`clear <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a9d5faf3b858a7f140599260aee1bb9fa>`__\ ()

407  {

408  if (size() > 0)

409  {

410  DevIntrChangeEventDataList::iterator vpos;

411  for (vpos=begin(); vpos!=end(); ++vpos)

412  {

413  delete (\*vpos);

414  }

415 

416  this->vector<DevIntrChangeEventData \*>::clear();

417  }

418  }

419 };

420 

421 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

422  \* \*

423  \* PipeEventData class \*

424  \* \*

425 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

426 

`439 <../../d8/d0d/classTango_1_1PipeEventData.html>`__ class
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__

440 {

441 public :

443 
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__\ () {}

444 
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__\ (`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dev,string &nam,string
&evt,\ `Tango::DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
\*pipe\_value\_in,DevErrorList &errors\_in);

445 

446 
~\ `PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__\ ();

447 
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__\ (const
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__ &);

448  `PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__ &
operator=(const
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__ &);

452  Tango::TimeVal reception\_date;

453  Tango::TimeVal &get\_date() {return reception\_date;}

454 

`456 <../../d8/d0d/classTango_1_1PipeEventData.html#ad858aeea852abd28dd5fbfd7193fc463>`__ 
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*\ `device <../../d8/d0d/classTango_1_1PipeEventData.html#ad858aeea852abd28dd5fbfd7193fc463>`__;

`457 <../../d8/d0d/classTango_1_1PipeEventData.html#a13fb52ff7d823781399a34d4f8aa9e0f>`__ 
string
`pipe\_name <../../d8/d0d/classTango_1_1PipeEventData.html#a13fb52ff7d823781399a34d4f8aa9e0f>`__;

`458 <../../d8/d0d/classTango_1_1PipeEventData.html#a4920be1cb5e2d932f68962a4dcb7fb71>`__ 
string
`event <../../d8/d0d/classTango_1_1PipeEventData.html#a4920be1cb5e2d932f68962a4dcb7fb71>`__;

`459 <../../d8/d0d/classTango_1_1PipeEventData.html#a742f0f346a553510d3f6d1560d78ba2a>`__ 
`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
\*\ `pipe\_value <../../d8/d0d/classTango_1_1PipeEventData.html#a742f0f346a553510d3f6d1560d78ba2a>`__;

`460 <../../d8/d0d/classTango_1_1PipeEventData.html#a85b367c351c624ef0cb36f877b47980a>`__ 
bool
`err <../../d8/d0d/classTango_1_1PipeEventData.html#a85b367c351c624ef0cb36f877b47980a>`__;

`461 <../../d8/d0d/classTango_1_1PipeEventData.html#aefe334e6f2283326ff11f0ec3a46a2ec>`__ 
DevErrorList
`errors <../../d8/d0d/classTango_1_1PipeEventData.html#aefe334e6f2283326ff11f0ec3a46a2ec>`__;

462 

463 private:

464  void set\_time();

465 };

466 

467 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

468  \* \*

469  \* PipeEventDataList class \*

470  \* \*

471 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

472 

`473 <../../d1/d12/classTango_1_1PipeEventDataList.html>`__ class
`PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__:public
vector<PipeEventData \*>

474 {

475 public:

`476 <../../d1/d12/classTango_1_1PipeEventDataList.html#a993c95943d47907b18b1c7f7b0fd6f16>`__ 
`PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html#a993c95943d47907b18b1c7f7b0fd6f16>`__\ ():
vector<\ `PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
\*>(0) {};

`477 <../../d1/d12/classTango_1_1PipeEventDataList.html#aba1ed1818cbccb3e07ee2da584e40e85>`__ 
`~PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html#aba1ed1818cbccb3e07ee2da584e40e85>`__\ ()

478  {

479  if (size() > 0)

480  {

481  PipeEventDataList::iterator vpos;

482  for (vpos=begin(); vpos!=end(); ++vpos)

483  {

484  delete (\*vpos);

485  }

486  }

487  }

`488 <../../d1/d12/classTango_1_1PipeEventDataList.html#aca52a643f45df5ecf81036332a874e76>`__ 
void
`clear <../../d1/d12/classTango_1_1PipeEventDataList.html#aca52a643f45df5ecf81036332a874e76>`__\ ()

489  {

490  if (size() > 0)

491  {

492  PipeEventDataList::iterator vpos;

493  for (vpos=begin(); vpos!=end(); ++vpos)

494  {

495  delete (\*vpos);

496  }

497 

498  this->vector<PipeEventData \*>::clear();

499  }

500  }

501 };

502 

503 

504 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

505  \* \*

506  \* EventQueue class \*

507  \* \*

508 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

`509 <../../d1/d2f/classTango_1_1EventQueue.html>`__ class
`EventQueue <../../d1/d2f/classTango_1_1EventQueue.html>`__

510 {

511 public:

512 
`EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#aff28e8d8ab5c02d96623653e3fc58655>`__\ ();

513 
`EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#aff28e8d8ab5c02d96623653e3fc58655>`__\ (long
max\_size);

514 
`~EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#a3a80d06ad50ff07a6f6222f10492904c>`__\ ();

515 

516  void
`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__\ (`EventData <../../d7/d5f/classTango_1_1EventData.html>`__
\*new\_event);

517  void
`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__\ (`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*new\_event);

518  void
`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__\ (`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
\*new\_event);

519  void
`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__\ (`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
\*new\_event);

520  void
`insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__\ (`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
\*new\_event);

521 

522  int
`size <../../d1/d2f/classTango_1_1EventQueue.html#a0ab7cfe0b9b255a9928478eddd8f955c>`__\ ();

523  TimeVal
`get\_last\_event\_date <../../d1/d2f/classTango_1_1EventQueue.html#a505546a336dc7cccbb0b2a9427446d93>`__\ ();

`524 <../../d1/d2f/classTango_1_1EventQueue.html#ac1823d42d92c9b4faf6317a0a08be94e>`__ 
bool
`is\_empty <../../d1/d2f/classTango_1_1EventQueue.html#ac1823d42d92c9b4faf6317a0a08be94e>`__\ ()
{if (event\_buffer.empty() == true) return true;else return false;}

525 

526  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__
&event\_list);

527  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__
&event\_list);

528  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__
&event\_list);

529  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__
&event\_list);

530  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__
&event\_list);

531  void
`get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__\ (`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*cb);

532 

533 private:

534  void inc\_indexes();

535 

536  vector<EventData \*> event\_buffer;

537  vector<AttrConfEventData \*> conf\_event\_buffer;

538  vector<DataReadyEventData \*> ready\_event\_buffer;

539  vector<DevIntrChangeEventData \*> dev\_inter\_event\_buffer;

540  vector<PipeEventData \*> pipe\_event\_buffer;

541 

542  long max\_elt;

543  long insert\_elt;

544  long nb\_elt;

545 

546  omni\_mutex modification\_mutex;

547 };

548 

549 

550 } // End of namespace

551 

552 

553 #endif // \_EVENTAPI\_H

`Tango::PipeEventData::errors <../../d8/d0d/classTango_1_1PipeEventData.html#aefe334e6f2283326ff11f0ec3a46a2ec>`__

DevErrorList errors

The error stack.

**Definition:** event.h:461

`Tango::DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__

Device interface change event callback execution data.

**Definition:** event.h:353

`Tango::AttrConfEventData::attr\_conf <../../d9/da1/classTango_1_1AttrConfEventData.html#af84272ced68dde94791aa090fc80bd24>`__

AttributeInfoEx \* attr\_conf

The attribute configuration.

**Definition:** event.h:193

`except.h <../../dc/d65/except_8h.html>`__

`Tango::DevIntrChangeEventData::event <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a9d4af2556b9cda47da2210546419f3ca>`__

string event

The event name.

**Definition:** event.h:371

`Tango::DataReadyEventData::errors <../../df/d39/classTango_1_1DataReadyEventData.html#acc8ce497a9b75d7db6878472ae471995>`__

DevErrorList errors

The error stack.

**Definition:** event.h:291

`Tango::AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__

Extended attribute configuration data.

**Definition:** devapi.h:330

`Tango::DevIntrChangeEventData::att\_list <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a89db4537a1e2634d03b6f3836469a5e0>`__

AttributeInfoListEx att\_list

Device attribute list info.

**Definition:** event.h:374

`Tango::AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__

**Definition:** event.h:220

`Tango::PipeEventDataList::PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html#a993c95943d47907b18b1c7f7b0fd6f16>`__

PipeEventDataList()

**Definition:** event.h:476

`Tango::PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__

Pipe event callback execution data.

**Definition:** event.h:439

`Tango::DataReadyEventData::event <../../df/d39/classTango_1_1DataReadyEventData.html#a90279b05b0751e18e8f348c0a41848fa>`__

string event

The event name.

**Definition:** event.h:286

`Tango::DevIntrChangeEventData::device\_name <../../db/d47/classTango_1_1DevIntrChangeEventData.html#acc8d3960c808ddbcd750224ba1d9f417>`__

string device\_name

The device name.

**Definition:** event.h:372

`Tango::PipeEventData::device <../../d8/d0d/classTango_1_1PipeEventData.html#ad858aeea852abd28dd5fbfd7193fc463>`__

DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** event.h:456

`Tango::FwdEventData::get\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a619ea982fd645f27cab11c4c66de586b>`__

const AttributeValue\_5 \* get\_av\_5()

**Definition:** event.h:109

`Tango::FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html>`__

**Definition:** event.h:101

`Tango::AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__

vector< AttributeInfoEx > AttributeInfoListEx

vector of AttributeInfoEx structure

**Definition:** devapi.h:359

`Tango::AttrConfEventData::attr\_name <../../d9/da1/classTango_1_1AttrConfEventData.html#a950448309e5b62a4387d94fd38ce0d75>`__

string attr\_name

The attribute name.

**Definition:** event.h:191

`Tango::AttrConfEventDataList::~AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#aded16cd8d6444b0eeafebdb718c34d90>`__

~AttrConfEventDataList()

**Definition:** event.h:224

`Tango::DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__

Fundamental type for sending/receiving data from device pipes.

**Definition:** devapi.h:811

`Tango::EventData::err <../../d7/d5f/classTango_1_1EventData.html#a415f9374bb792e3a638447c66af32523>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** event.h:94

`Tango::DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__

**Definition:** event.h:303

`Tango::DataReadyEventData::attr\_name <../../df/d39/classTango_1_1DataReadyEventData.html#a2cd31366088f9fee0d06364c2a81796f>`__

string attr\_name

The attribute name.

**Definition:** event.h:285

`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__

Event and asynchronous (callback model) calls base class.

**Definition:** devasyn.h:234

`Tango::EventQueue::insert\_event <../../d1/d2f/classTango_1_1EventQueue.html#a6d482a1f15ffe9542e3d020be37d0d66>`__

void insert\_event(EventData \*new\_event)

`Tango::EventQueue::get\_last\_event\_date <../../d1/d2f/classTango_1_1EventQueue.html#a505546a336dc7cccbb0b2a9427446d93>`__

TimeVal get\_last\_event\_date()

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::PipeEventDataList::~PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html#aba1ed1818cbccb3e07ee2da584e40e85>`__

~PipeEventDataList()

**Definition:** event.h:477

`Tango::DevIntrChangeEventData::dev\_started <../../db/d47/classTango_1_1DevIntrChangeEventData.html#adbf8cb3b33018c236a5fa1440edb3588>`__

bool dev\_started

Device started flag (true when event sent due to device being
(re)started and with only a possible bu...

**Definition:** event.h:375

`Tango::DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__

Data ready event callback execution data.

**Definition:** event.h:268

`Tango::DevIntrChangeEventData::device <../../db/d47/classTango_1_1DevIntrChangeEventData.html#aa23d2843deae51a30852fb1d49d51c91>`__

DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** event.h:370

`Tango::leavefunc <../../de/ddf/namespaceTango.html#a6d32a888f539065eae8dd0dec4c32b63>`__

void leavefunc()

`Tango::AttrConfEventDataList::clear <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a2bdc684a5056ac4c891e904e088c520e>`__

void clear()

**Definition:** event.h:235

`Tango::EventData::errors <../../d7/d5f/classTango_1_1EventData.html#abbb35ed304e18a77b63d8b49210329e6>`__

DevErrorList errors

The error stack.

**Definition:** event.h:95

`Tango::FwdEventData::FwdEventData <../../d0/d71/classTango_1_1FwdEventData.html#ac40ba97b20f3b6e560a49645f490d0dc>`__

FwdEventData()

`Tango::DataReadyEventData::attr\_data\_type <../../df/d39/classTango_1_1DataReadyEventData.html#abc2542d1f11b9d8faff06e524793aa69>`__

int attr\_data\_type

The attribute data type.

**Definition:** event.h:287

`Tango::DataReadyEventDataList::clear <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a3acc594e72f1ae67e29797a0b66aac19>`__

void clear()

**Definition:** event.h:318

`Tango::EventDataList::clear <../../d3/d57/classTango_1_1EventDataList.html#afc697e717c9f28a44a32fb7065f8589d>`__

void clear()

**Definition:** event.h:137

`Tango::DataReadyEventData::device <../../df/d39/classTango_1_1DataReadyEventData.html#a7df862854af7b80913dcb9dd1d330a64>`__

DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** event.h:284

`attribute.h <../../d3/d7c/attribute_8h.html>`__

`Tango::PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__

**Definition:** event.h:473

`Tango::PipeEventDataList::clear <../../d1/d12/classTango_1_1PipeEventDataList.html#aca52a643f45df5ecf81036332a874e76>`__

void clear()

**Definition:** event.h:488

`Tango::AttrConfEventData::device <../../d9/da1/classTango_1_1AttrConfEventData.html#a6da04a13ce41eff0ddcf63417f001c13>`__

DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** event.h:190

`Tango::FwdEventData::set\_av\_5 <../../d0/d71/classTango_1_1FwdEventData.html#a07b8a8e405b306fd9092ace7de53401d>`__

void set\_av\_5(const AttributeValue\_5 \*\_p)

**Definition:** event.h:108

`Tango::EventQueue::get\_events <../../d1/d2f/classTango_1_1EventQueue.html#af1a21b499b68ce9adbb44122548ac559>`__

void get\_events(EventDataList &event\_list)

`Tango::DevIntrChangeEventDataList::clear <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a9d5faf3b858a7f140599260aee1bb9fa>`__

void clear()

**Definition:** event.h:406

`Tango::EventData::device <../../d7/d5f/classTango_1_1EventData.html#ae56b5ea4399a060a10cba21884fc7a40>`__

DeviceProxy \* device

The DeviceProxy object on which the call was executed.

**Definition:** event.h:90

`Tango::EventData <../../d7/d5f/classTango_1_1EventData.html>`__

Event callback execution data.

**Definition:** event.h:73

`Tango::FwdAttrConfEventData::set\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a8954f696a706ec4aa1f7390e974de017>`__

void set\_fwd\_attr\_conf(const AttributeConfig\_5 \*\_p)

**Definition:** event.h:208

`Tango::PipeEventData::err <../../d8/d0d/classTango_1_1PipeEventData.html#a85b367c351c624ef0cb36f877b47980a>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** event.h:460

`Tango::DevIntrChangeEventDataList::DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#a872f6e8647f117e686bc55632184d058>`__

DevIntrChangeEventDataList()

**Definition:** event.h:394

`Tango::DevIntrChangeEventData::errors <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a33be40ed8e49d251e5ba18e87a6468ef>`__

DevErrorList errors

The error stack.

**Definition:** event.h:379

`Tango::EventData::attr\_value <../../d7/d5f/classTango_1_1EventData.html#a5c709e4322db6f5129abf5063044c4a7>`__

DeviceAttribute \* attr\_value

The attribute data.

**Definition:** event.h:93

`Tango::FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html>`__

**Definition:** event.h:202

`Tango::EventQueue::EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#aff28e8d8ab5c02d96623653e3fc58655>`__

EventQueue()

`Tango::EventQueue::size <../../d1/d2f/classTango_1_1EventQueue.html#a0ab7cfe0b9b255a9928478eddd8f955c>`__

int size()

`Tango::DataReadyEventData::err <../../df/d39/classTango_1_1DataReadyEventData.html#afc55fe4eee219eea959e8ad53d34f310>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** event.h:290

`Tango::DataReadyEventDataList::~DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a8f1c43c6f88edbcf56fa991a35f34d77>`__

~DataReadyEventDataList()

**Definition:** event.h:307

`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

Fundamental type for sending an dreceiving data to and from device
attributes.

**Definition:** devapi.h:73

`Tango::DevIntrChangeEventData::cmd\_list <../../db/d47/classTango_1_1DevIntrChangeEventData.html#ab75f7e002dd7df09755b26e513231dc2>`__

CommandInfoList cmd\_list

Device command list info.

**Definition:** event.h:373

`Tango::DataReadyEventData::ctr <../../df/d39/classTango_1_1DataReadyEventData.html#a68d3c729f0f7aa64540f30c65b2b690f>`__

int ctr

The user counter. Set to 0 if not defined when sent by the server.

**Definition:** event.h:288

`Tango::AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

Attribute configuration change event callback execution data.

**Definition:** event.h:172

`Tango::AttrConfEventData::errors <../../d9/da1/classTango_1_1AttrConfEventData.html#adb1f2a3796ba28cfa8a6de522b1596a8>`__

DevErrorList errors

The error stack.

**Definition:** event.h:195

`Tango::DevIntrChangeEventData::err <../../db/d47/classTango_1_1DevIntrChangeEventData.html#a52384944b2b92cbd9ecf66b21c4a9fdc>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** event.h:378

`Tango::EventDataList::EventDataList <../../d3/d57/classTango_1_1EventDataList.html#ac1d92a0c7d7056b40d504f70ed3b13c5>`__

EventDataList()

**Definition:** event.h:125

`Tango::EventQueue::~EventQueue <../../d1/d2f/classTango_1_1EventQueue.html#a3a80d06ad50ff07a6f6222f10492904c>`__

~EventQueue()

`Tango::CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__

vector< CommandInfo > CommandInfoList

A vector of CommandInfo structure.

**Definition:** devapi.h:146

`Tango::FwdEventData::get\_zmq\_mess\_ptr <../../d0/d71/classTango_1_1FwdEventData.html#a44b315e19fbd41954b9174c4fe8b5efc>`__

zmq::message\_t \* get\_zmq\_mess\_ptr()

**Definition:** event.h:110

`Tango::EventData::attr\_name <../../d7/d5f/classTango_1_1EventData.html#a0bd1e69e134e164209b86a4630357934>`__

string attr\_name

The attribute name.

**Definition:** event.h:91

`Tango::EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__

**Definition:** event.h:122

`Tango::PipeEventData::event <../../d8/d0d/classTango_1_1PipeEventData.html#a4920be1cb5e2d932f68962a4dcb7fb71>`__

string event

The event name.

**Definition:** event.h:458

`Tango::FwdAttrConfEventData::get\_fwd\_attr\_conf <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#ade61194ca130c87b018f3222d6970264>`__

const AttributeConfig\_5 \* get\_fwd\_attr\_conf()

**Definition:** event.h:209

`Tango::DevIntrChangeEventDataList::~DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html#adf7441209e03b2d0e3d3ff49eca9ca16>`__

~DevIntrChangeEventDataList()

**Definition:** event.h:395

`Tango::PipeEventData::pipe\_name <../../d8/d0d/classTango_1_1PipeEventData.html#a13fb52ff7d823781399a34d4f8aa9e0f>`__

string pipe\_name

The pipe name.

**Definition:** event.h:457

`Tango::AttrConfEventDataList::AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html#a4f05996e7c728cbe81a3d9c7537681b9>`__

AttrConfEventDataList()

**Definition:** event.h:223

`Tango::EventDataList::~EventDataList <../../d3/d57/classTango_1_1EventDataList.html#a5fa9bd471834abf508f4dbf79de09d5e>`__

~EventDataList()

**Definition:** event.h:126

`Tango::EventQueue <../../d1/d2f/classTango_1_1EventQueue.html>`__

**Definition:** event.h:509

`Tango::AttrConfEventData::err <../../d9/da1/classTango_1_1AttrConfEventData.html#a2e3fb06bc98bb156e254ebeb6a1c222e>`__

bool err

A boolean flag set to true if the request failed. False otherwise.

**Definition:** event.h:194

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

High level class which provides the client with an easy-to-use interface
to TANGO devices...

**Definition:** devapi.h:56

`Tango::PipeEventData::pipe\_value <../../d8/d0d/classTango_1_1PipeEventData.html#a742f0f346a553510d3f6d1560d78ba2a>`__

DevicePipe \* pipe\_value

The pipe data.

**Definition:** event.h:459

`Tango::AttrConfEventData::event <../../d9/da1/classTango_1_1AttrConfEventData.html#a70a8c86b121849afab88c952c6cc8bde>`__

string event

The event name.

**Definition:** event.h:192

`Tango::EventData::event <../../d7/d5f/classTango_1_1EventData.html#a346675d2a32c917164b53fa653af173c>`__

string event

The event name.

**Definition:** event.h:92

`Tango::DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__

**Definition:** event.h:391

`Tango::FwdAttrConfEventData::FwdAttrConfEventData <../../d1/d08/classTango_1_1FwdAttrConfEventData.html#a65b41bd462ee1a1bea3ea0f7a8d62a37>`__

FwdAttrConfEventData()

`tango\_const.h <../../d4/d13/tango__const_8h.html>`__

`Tango::EventQueue::is\_empty <../../d1/d2f/classTango_1_1EventQueue.html#ac1823d42d92c9b4faf6317a0a08be94e>`__

bool is\_empty()

**Definition:** event.h:524

`Tango::DataReadyEventDataList::DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html#a0777dbe24e4e7a121b66a3162b816647>`__

DataReadyEventDataList()

**Definition:** event.h:306

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `event.h <../../dd/d20/event_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
