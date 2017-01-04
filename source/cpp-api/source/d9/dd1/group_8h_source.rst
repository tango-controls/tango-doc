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

group.h

`Go to the documentation of this file. <../../d9/dd1/group_8h.html>`__

1 //=============================================================================

2 //

3 // file : group.h

4 //

5 // description : Include for Tango Group impl.

6 //

7 // project : TANGO

8 //

9 // author(s) : N.Leclercq

10 //

11 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

12 // European Synchrotron Radiation Facility

13 // BP 220, Grenoble 38043

14 // FRANCE

15 //

16 // This file is part of Tango.

17 //

18 // Tango is free software: you can redistribute it and/or modify

19 // it under the terms of the GNU Lesser General Public License as
published by

20 // the Free Software Foundation, either version 3 of the License, or

21 // (at your option) any later version.

22 //

23 // Tango is distributed in the hope that it will be useful,

24 // but WITHOUT ANY WARRANTY; without even the implied warranty of

25 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

26 // GNU Lesser General Public License for more details.

27 //

28 // You should have received a copy of the GNU Lesser General Public
License

29 // along with Tango. If not, see <http://www.gnu.org/licenses/>.

30 //

31 // $Revision$

32 //

33 //=============================================================================

34 

35 #ifndef \_GROUP\_H\_

36 #define \_GROUP\_H\_

37 

38 #include <tango.h>

39 

40 namespace `Tango <../../de/ddf/namespaceTango.html>`__ {

41 

45 //=============================================================================

46 // THREAD SAFE IMPL OPTION

47 //=============================================================================

`48 <../../d9/dd1/group_8h.html#aae3df4223c20c408ab2cf8a45fb39f3a>`__ #define
TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL 1

49 

50 //=============================================================================

51 // FORWARD DECLARATIONS

52 //=============================================================================

53 class Group;

`54 <../../de/ddf/namespaceTango.html#ab9ef33527260f0bc7f0bf168143f55a0>`__ class
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__;

55 

56 //=============================================================================

57 // Misc. Typedefs

58 //=============================================================================

59 //- group content (individual devices and/or sub-groups)

60 typedef std::vector<GroupElement\*>
`GroupElements <../../de/ddf/namespaceTango.html#ab9ef33527260f0bc7f0bf168143f55a0>`__;

61 //- group content iterator

`62 <../../de/ddf/namespaceTango.html#a5c81b7d42455c6c7aafff46edbd2bf4b>`__ typedef
GroupElements::iterator
`GroupElementsIterator <../../de/ddf/namespaceTango.html#a5c81b7d42455c6c7aafff46edbd2bf4b>`__;

63 //-----------------------------------------------------------------------------

64 //- define what is a list of token (for name pattern management)

`65 <../../de/ddf/namespaceTango.html#ad1538aefe5a40c681e41341d087cc7c9>`__ typedef
std::vector<std::string>
`TokenList <../../de/ddf/namespaceTango.html#ad1538aefe5a40c681e41341d087cc7c9>`__;

66 //=============================================================================

67 // class ExtRequestDesc : an asynch. request holder for groups

68 //-----------------------------------------------------------------------------

`69 <../../d2/d0d/classTango_1_1AsynchRequest.html>`__ class
`AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html>`__

70 {

71  //- An asynch. request repository is maintain by each
GroupDeviceElement

`72 <../../d2/d0d/classTango_1_1AsynchRequest.html#ac6facd8fbba95d830b9806ceffb3a5bd>`__ 
friend class
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__;

73 

74  public:

75  //- ctor

`76 <../../d2/d0d/classTango_1_1AsynchRequest.html#a3e7880f845044a536121f702b5521270>`__ 
`AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a3e7880f845044a536121f702b5521270>`__
(long \_rid, const std::string& \_obj\_name, bool ge\_enabled = true)

77  : rq\_id(\_rid), group\_element\_enabled\_m(ge\_enabled)

78  {

79  obj\_names.push\_back(\_obj\_name);

80  };

81  //- ctor

`82 <../../d2/d0d/classTango_1_1AsynchRequest.html#a383a9c0102ddd1126e7470840779bff1>`__ 
`AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a383a9c0102ddd1126e7470840779bff1>`__
(long \_rid, const std::vector<std::string>& \_obj\_names, bool
ge\_enabled = true)

83  : rq\_id(\_rid), group\_element\_enabled\_m(ge\_enabled)

84  {

85  obj\_names = \_obj\_names;

86  };

87  //- ctor

`88 <../../d2/d0d/classTango_1_1AsynchRequest.html#a26b3a914e0dfff3db69ab6d645358080>`__ 
`AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a26b3a914e0dfff3db69ab6d645358080>`__
(long \_rid, const std::string& \_obj\_name, const DevFailed& \_df)

89  : rq\_id(\_rid), rq\_ex(\_df), group\_element\_enabled\_m(true)

90  {

91  obj\_names.push\_back(\_obj\_name);

92  };

93  //- ctor

`94 <../../d2/d0d/classTango_1_1AsynchRequest.html#a802862507d2cbd9ff8d54a1d029a6d27>`__ 
`AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a802862507d2cbd9ff8d54a1d029a6d27>`__
(long \_rid, const std::vector<std::string>& \_obj\_names, const
DevFailed& \_df)

95  : rq\_id(\_rid), rq\_ex(\_df), group\_element\_enabled\_m(true)

96  {

97  obj\_names = \_obj\_names;

98  };

99  //- dtor

`100 <../../d2/d0d/classTango_1_1AsynchRequest.html#ae6f806d0204ff49ced628dca1e651acd>`__ 
virtual
`~AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#ae6f806d0204ff49ced628dca1e651acd>`__
() {

101  //-noop impl

102  };

103  //- group\_element\_enabled accessor

`104 <../../d2/d0d/classTango_1_1AsynchRequest.html#ac4de9d1f09f1fbdaddd2204c6e77506e>`__ 
inline bool
`group\_element\_enabled <../../d2/d0d/classTango_1_1AsynchRequest.html#ac4de9d1f09f1fbdaddd2204c6e77506e>`__
() const {

105  return group\_element\_enabled\_m;

106  }

107  private:

108  //- request ID

109  long rq\_id;

110  //- name of requested objects (command or attribute)

111  std::vector<std::string> obj\_names;

112  //- DevFailed containing potential error

113  DevFailed rq\_ex;

114  //- true is the associated group member is enabled, false otherwise

115  bool group\_element\_enabled\_m;

116 };

117 //-----------------------------------------------------------------------------

118 //- asynch. request repository

`119 <../../de/ddf/namespaceTango.html#a168c199249350bb009e168211ed97747>`__ typedef
std::map<long, AsynchRequest>
`AsynchRequestRep <../../de/ddf/namespaceTango.html#a168c199249350bb009e168211ed97747>`__;

120 //- asynch. request repository iterator

`121 <../../de/ddf/namespaceTango.html#a0277f25b3f85ec78c024b252ad16b79c>`__ typedef
AsynchRequestRep::iterator
`AsynchRequestRepIterator <../../de/ddf/namespaceTango.html#a0277f25b3f85ec78c024b252ad16b79c>`__;

122 //- asynch. request repository value

`123 <../../de/ddf/namespaceTango.html#a38e09c4b89ec97d44f1019f903918c04>`__ typedef
AsynchRequestRep::value\_type
`AsynchRequestRepValue <../../de/ddf/namespaceTango.html#a38e09c4b89ec97d44f1019f903918c04>`__;

124 //=============================================================================

125 

126 //=============================================================================

127 // class GroupReply : base class for group reply

128 //=============================================================================

129 

`140 <../../de/deb/classTango_1_1GroupReply.html>`__ class
`GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

141 {

142 public:

143 

145  //- default ctor

146  `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ ();

147  //- copy ctor

148  `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ (const
`GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__\ & src);

149  //- ctor

150  `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ (const
std::string&
`dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__,

151  const std::string&
`obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__,

152  bool group\_element\_enabled = true);

153  //- ctor

154  `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ (const
std::string& dev\_name,

155  const std::string& obj\_name,

156  const DevFailed& exception,

157  bool group\_element\_enabled = true);

158  //- dtor

159  virtual
~\ `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__ ();

160  //- group\_element\_enabled accessor

161  inline bool group\_element\_enabled () const {

162  return group\_element\_enabled\_m;

163  }

165  //- enable/disable exception - returns the previous mode

177  static bool
`enable\_exception <../../de/deb/classTango_1_1GroupReply.html#a4250fb27cfce0de073029a1b778b06b8>`__
(bool exception\_mode = true);

178  //- has\_failed accessor

`187 <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__ 
inline bool
`has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__
() const {

188  return has\_failed\_m;

189  }

190  //- device name accessor

`198 <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__ 
inline const std::string&
`dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__
() const {

199  return dev\_name\_m;

200  }

201 //- object (i.e. command or attribute) name accessor

`209 <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__ 
inline const std::string&
`obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__
() const {

210  return obj\_name\_m;

211  }

212  //- error stack accessor

`220 <../../de/deb/classTango_1_1GroupReply.html#a47419919cad3f689140757bd09eae457>`__ 
inline const DevErrorList&
`get\_err\_stack <../../de/deb/classTango_1_1GroupReply.html#a47419919cad3f689140757bd09eae457>`__
() const {

221  return exception\_m.errors;

222  }

223 protected:

225  //- exception flag (enable/disable)

226  static bool exception\_enabled;

227  //- the device name

228  std::string dev\_name\_m;

229  //- command or attribute name

230  std::string obj\_name\_m;

231  //- has\_failed\_m: true is an error occurred, false otherwise

232  bool has\_failed\_m;

233  //- group\_element\_enabled\_m : true is the associated group
member is enabled, false otherwise

234  bool group\_element\_enabled\_m;

235  //- exception: valid if has\_failed\_m set to true

236  DevFailed exception\_m;

237 };

238 

239 //=============================================================================

240 // class GroupCmdReply : reply to command executed on a group

241 //=============================================================================

`251 <../../d9/d33/classTango_1_1GroupCmdReply.html>`__ class
`GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__ :
public `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

252 {

253 public:

255  //- default ctor

256  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
();

257  //- copy ctor

258  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
(const
`GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__\ &
src);

259  //-

260  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
(const std::string&
`dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__,

261  const std::string&
`obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__,

262  const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & data);

263  //- ctor

264  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
(const std::string& dev\_name,

265  const std::string& obj\_name,

266  const DevFailed& exception);

267  //- ctor

268  `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__
(const std::string& dev\_name,

269  const std::string& obj\_name,

270  bool group\_element\_enabled);

271  //- dtor

272  virtual
~\ `GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__ ();

274  //- data accessor (may throw Tango::DevFailed)

282  `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ &
`get\_data <../../d9/d33/classTango_1_1GroupCmdReply.html#ab753e25a85ec8ca6b96f61d4d3a2c0fd>`__
();

283  //- template data exctractor method

293  template <typename T> bool
`operator>> <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__\ (T&
dest);

294  //- data exctractor method for DevVarLongStringArray

306  bool
`extract <../../d9/d33/classTango_1_1GroupCmdReply.html#a4beaeb6d71fa2cd825828718d36d20a4>`__
(std::vector<DevLong>& vl, std::vector<std::string>& vs);

307  //- data exctractor method for DevVarDoubleStringArray

319  bool
`extract <../../d9/d33/classTango_1_1GroupCmdReply.html#a4beaeb6d71fa2cd825828718d36d20a4>`__
(std::vector<double>& vd, std::vector<std::string>& vs);

320 private:

321  //- data: valid if GroupReply::has\_failed\_m set to false and

322  //- GroupReply::enabled\_m set to true

323  `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
data\_m;

324 };

325 

326 //=============================================================================

327 // class GroupAttrReply : reply to an attribute reading executed on
a group

328 //=============================================================================

`338 <../../d5/dae/classTango_1_1GroupAttrReply.html>`__ class
`GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__ :
public `GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

339 {

340 public:

342  //- ctor

343  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
();

344  //- copy ctor

345  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
(const
`GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__\ &
src);

346  //- ctor

347  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
(const std::string&
`dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__,

348  const std::string&
`obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__,

349  const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
data);

350  //- ctor

351  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
(const std::string& dev\_name,

352  const std::string& obj\_name,

353  const DevFailed& exception);

354  //- ctor

355  `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
(const std::string& dev\_name,

356  const std::string& obj\_name,

357  bool group\_element\_enabled);

358  //- dtor

359  virtual
~\ `GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__
();

361  //- data accessor (may throw Tango::DevFailed)

369 
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
`get\_data <../../d5/dae/classTango_1_1GroupAttrReply.html#adac0b677ce81ec7e66f3c53872adea86>`__
();

370  //- template data exctractor method

380  template <typename T> bool
`operator>> <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__\ (T&
dest);

381 private:

382  //- data: valid if GroupReply::has\_failed\_m set to false and

383  //- GroupReply::enabled\_m set to true

384 
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
data\_m;

385 };

386 

387 //=============================================================================

388 // class GroupReplyList : a simple list of GroupReply

389 //=============================================================================

`403 <../../dc/d11/classTango_1_1GroupReplyList.html>`__ class
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ :
public std::vector<GroupReply>

404 {

406  typedef std::vector<GroupReply> Inherited;

407 

`408 <../../dc/d11/classTango_1_1GroupReplyList.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

409 

410 public:

412  //- ctor

413 
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__\ ();

414  //- dtor

415  virtual
~\ `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__\ ();

417  //- has\_failed accessor

`426 <../../dc/d11/classTango_1_1GroupReplyList.html#a7221a5debe8d58e6679ac2e234b3384d>`__ 
bool
`has\_failed <../../dc/d11/classTango_1_1GroupReplyList.html#a7221a5debe8d58e6679ac2e234b3384d>`__
() const {

427  return has\_failed\_m;

428  }

429  //- reset the error list

`435 <../../dc/d11/classTango_1_1GroupReplyList.html#afe1cb42828f48dd701a0e8d250470e93>`__ 
inline void
`reset <../../dc/d11/classTango_1_1GroupReplyList.html#afe1cb42828f48dd701a0e8d250470e93>`__
() {

436  clear();

437  has\_failed\_m = false;

438  };

440  //- push\_back overload

441  void push\_back (const
`GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__\ & r) {

442  if
(r.\ `has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__\ ())
{

443  has\_failed\_m = true;

444  }

445  Inherited::push\_back(r);

446  }

447 private:

448  //- has\_failed\_m: true if at least one error occurred, false
otherwise

449  bool has\_failed\_m;

450 };

451 

452 //=============================================================================

453 // class GroupCmdReplyList : a simple list of GroupCmdReply

454 //=============================================================================

`469 <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__ class
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
: public std::vector<GroupCmdReply>

470 {

472  typedef std::vector<GroupCmdReply> Inherited;

473 

`474 <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

475 

476 public:

478  //- ctor

479 
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__\ ();

480  //- dtor

481  virtual
~\ `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__\ ();

483  //- has\_failed accessor method

`492 <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a453e217deecfd463162892d471f181d6>`__ 
bool
`has\_failed <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a453e217deecfd463162892d471f181d6>`__
() const {

493  return has\_failed\_m;

494  }

495  //- reset the error list

`501 <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a30946c9b34cf1275f3e4b442652935e2>`__ 
inline void
`reset <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a30946c9b34cf1275f3e4b442652935e2>`__
() {

502  clear();

503  has\_failed\_m = false;

504  };

506  //- push\_back overload

507  void push\_back (const
`GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__\ & cr)
{

508  if
(cr.\ `has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__\ ())
{

509  has\_failed\_m = true;

510  }

511  Inherited::push\_back(cr);

512  }

513 private:

514  //- has\_failed\_m: true if at least one error occurred, false
otherwise

515  bool has\_failed\_m;

516 };

517 

518 //=============================================================================

519 // class GroupAttrReplyList : a simple list of GroupAttrReply

520 //=============================================================================

`534 <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__ class
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
: public std::vector<GroupAttrReply>

535 {

537  typedef std::vector<GroupAttrReply> Inherited;

538 

`539 <../../db/daa/classTango_1_1GroupAttrReplyList.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

540 

541 public:

543  //- ctor

544 
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__\ ();

545  //- dtor

546  virtual
~\ `GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__\ ();

548  //- has\_failed accessor method

`557 <../../db/daa/classTango_1_1GroupAttrReplyList.html#a1737797b7a4585b948752ef80c915fb2>`__ 
bool
`has\_failed <../../db/daa/classTango_1_1GroupAttrReplyList.html#a1737797b7a4585b948752ef80c915fb2>`__
() const {

558  return has\_failed\_m;

559  }

560  //- reset the error list

`566 <../../db/daa/classTango_1_1GroupAttrReplyList.html#a27620a4010723a1649c0dd810b4e1367>`__ 
inline void
`reset <../../db/daa/classTango_1_1GroupAttrReplyList.html#a27620a4010723a1649c0dd810b4e1367>`__
() {

567  clear();

568  has\_failed\_m = false;

569  };

571  //- push\_back overload

572  void push\_back (const
`GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__\ &
ar) {

573  if
(ar.\ `has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__\ ())
{

574  has\_failed\_m = true;

575  }

576  Inherited::push\_back(ar);

577  }

578 private:

579  //- has\_failed\_m: true if at least one error occurred, false
otherwise

580  bool has\_failed\_m;

581 };

582 

583 //=============================================================================

584 // class GroupElementFactory : a GroupElement factory

585 //=============================================================================

`586 <../../da/da9/classTango_1_1GroupElementFactory.html>`__ class
`GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__

587 {

`588 <../../da/da9/classTango_1_1GroupElementFactory.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

589 

590  //- instanciatethe GroupElement which name matches the specified
pattern with the specified timeout

591  //- timeout = -1 => do not change the timeout

592  static GroupElements instanciate (const std::string& p, int tmo =
-1);

593 

594  static void parse\_name (const std::string& p, std::string
&db\_host, int &db\_port, std::string &dev\_pattern);

595 

596  //- forbidden methods

597 
`GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__\ ();

598 
~\ `GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__\ ();

599 
`GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__\ &
operator=(const
`GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__\ &
other);

600 };

601 

602 //=============================================================================

603 // class GroupElement: base class for all tango group element

604 //=============================================================================

`605 <../../df/d46/classTango_1_1GroupElement.html>`__ class
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

606 {

`607 <../../df/d46/classTango_1_1GroupElement.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

608 

609 public:

610  //---------------------------------------------

611  //- Group management methods

612  //---------------------------------------------

613  //-

614  virtual bool
`contains <../../df/d46/classTango_1_1GroupElement.html#a64f031e079125a08bdab73d21c906c86>`__
(const std::string& n, bool fwd = true);

615  //-

616  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__
(const std::string& n) = 0;

617  //-

618  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__
(long idx) = 0;

619  //-

620  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`operator[] <../../df/d46/classTango_1_1GroupElement.html#aef54618c81a0042334be5c13d0326346>`__\ (long
idx) = 0;

621 

622  //---------------------------------------------

623  //- a la DeviceProxy interface

624  //---------------------------------------------

625  //-

626  virtual bool
`ping <../../df/d46/classTango_1_1GroupElement.html#ab004b0e82f6a7cd7db714ca42b3b1d8a>`__
(bool fwd = true) = 0;

627  //-

628  virtual void
`set\_timeout\_millis <../../df/d46/classTango_1_1GroupElement.html#aa4ed03d3347901cecadbeff4c9b465a3>`__
(int tmo\_ms) = 0;

629 

630  //---------------------------------------------

631  //- Misc.

632  //---------------------------------------------

633  //-

`634 <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__ 
inline const std::string&
`get\_name <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__
() const {

635  return name;

636  };

637  //-

`638 <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__ 
inline const std::string
`get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__
() const {

639  if (parent) {

640  return
parent->\ `get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__\ ()
+ "." + name;

641  }

642  return name;

643  };

644  //-

`645 <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__ 
inline void
`enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__
() {

646  enabled = true;

647  };

648  //-

`649 <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__ 
inline void
`disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__
() {

650  enabled = false;

651  };

652  //-

`653 <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__ 
inline bool
`is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__
() const {

654  return enabled;

655  };

656  bool
`name\_equals <../../df/d46/classTango_1_1GroupElement.html#ac38ec8a0666000aaeb0be72a538555f6>`__
(const std::string& n);

657  //-

658  bool
`name\_matches <../../df/d46/classTango_1_1GroupElement.html#ac59fc656076f55359d8d3b000d0940e9>`__
(const std::string& n);

659  //-

660  virtual void
`dump <../../df/d46/classTango_1_1GroupElement.html#af8ebd6508a22f24c40886f97f879c54f>`__
(int indent\_level = 0) = 0;

661  //-

662  virtual void
`dump <../../df/d46/classTango_1_1GroupElement.html#af8ebd6508a22f24c40886f97f879c54f>`__
(TangoSys\_OMemStream& oms, int indent\_level = 0) = 0;

663  //-

664  virtual bool
`is\_connected <../../df/d46/classTango_1_1GroupElement.html#a5ca539735117e31e002587883e508ca5>`__\ ();

665 

666 protected:

667  //- ctor: creates an GroupElement named <name>

668  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
(const std::string& name,
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
parent = 0);

669  //- dtor

670  virtual
`~GroupElement <../../df/d46/classTango_1_1GroupElement.html#a9e4421b2ad2ad0c72dfa587b6912c811>`__\ ();

671 

672 private:

673  //- element name

674  std::string name;

675  //- parent element

676  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
parent;

677  //- enabled: true is this group member is enabled, false otherwise

678  bool enabled;

679 

680  //- forbidden methods

681  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__ ();

682  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__
(const
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ &);

683  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ &
operator=(const
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ &);

684 

685  //- element name tokenizer

686  TokenList tokenize\_i (const std::string& p);

687 

688  //- element name pattern matching

689  bool match\_i (const std::string& p, const TokenList& tokens);

690 

691  //- element identification

692  virtual bool is\_device\_i () = 0;

693  virtual bool is\_group\_i () = 0;

694 

695  //- group interface

696  virtual long get\_size\_i (bool fwd = true) = 0;

697 

698  //- element searching

699  virtual
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
find\_i (const std::string& n, bool fwd = true);

700 

701  //- private part of the asynch command exec. impl.

702  virtual long command\_inout\_asynch\_i (const std::string& c, bool
fgt, bool fwd , long ari) = 0;

703  virtual long command\_inout\_asynch\_i (const std::string& c, const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & d, bool
fgt, bool fwd, long ari) = 0;

704  virtual
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
command\_inout\_reply\_i (long req\_id, long tmo\_ms) = 0;

705 

706  //- private part of the asynch attribute(s) reading impl.

707  virtual long read\_attribute\_asynch\_i (const std::string& a, bool
fwd, long ari) = 0;

708  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attribute\_reply\_i (long req\_id, long tmo\_ms) = 0;

709  virtual long read\_attributes\_asynch\_i (const
std::vector<std::string>& al, bool fwd, long ari) = 0;

710  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attributes\_reply\_i (long req\_id, long tmo\_ms) = 0;

711 

712  //- private part of the asynch attribute writting impl.

713  virtual long write\_attribute\_asynch\_i (const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
d, bool fwd, long ari) = 0;

714  virtual
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
write\_attribute\_reply\_i (long req\_id, long tmo\_ms) = 0;

715 

716  //- set the parent element, returns previous parent or 0 (null) if
none

717  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
set\_parent
(`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
\_parent);

718 };

719 

720 //=============================================================================

721 // class Group: actual tango group implementation

722 //=============================================================================

723 

`734 <../../d4/d6d/classTango_1_1Group.html>`__ class
`Group <../../d4/d6d/classTango_1_1Group.html>`__ : public
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

735 {

736  typedef std::map<long, bool> AsynchRequestDesc;

737  typedef AsynchRequestDesc::iterator AsynchRequestDescIt;

738  typedef AsynchRequestDesc::value\_type AsynchRequestDescVal;

739 

740 public:

741 

742  //---------------------------------------------

743  //- Ctor & Dtor

744  //---------------------------------------------

754  `Group <../../d4/d6d/classTango_1_1Group.html>`__ (const
std::string& name);

763  virtual
`~Group <../../d4/d6d/classTango_1_1Group.html#acd7a0b40d37852923131e9bce68dd9ff>`__\ ();

765 

766  //---------------------------------------------

767  //- Group management methods

768  //---------------------------------------------

787  virtual void
`add <../../d4/d6d/classTango_1_1Group.html#a2cbaa3bf6cecdb6fb33a387c79556e58>`__
(`Group <../../d4/d6d/classTango_1_1Group.html>`__\ \* group, int
tmo\_ms = -1);

804  virtual void
`add <../../d4/d6d/classTango_1_1Group.html#a2cbaa3bf6cecdb6fb33a387c79556e58>`__
(const std::string& pattern, int tmo\_ms = -1);

820  virtual void
`add <../../d4/d6d/classTango_1_1Group.html#a2cbaa3bf6cecdb6fb33a387c79556e58>`__
(const std::vector<std::string>& patterns, int tmo\_ms = -1);

821 #ifdef GEN\_DOC

822 stepper\_motor/\*");

851  \* @endcode

852  \*

853  \* @param [in] pattern The device selection pattern

854  \* @param [in] fwd The forward flag

855  \*/

856 #endif

857  virtual void remove (const std::string& pattern, bool fwd = true);

870  virtual void remove (const std::vector<std::string>& patterns, bool
fwd = true);

876  virtual void
`remove\_all <../../d4/d6d/classTango_1_1Group.html#a12404b76c3e64df47467a1260591e7df>`__
();

890  virtual bool
`contains <../../d4/d6d/classTango_1_1Group.html#a2885b00242d3a2d199836e48186dd71e>`__
(const std::string& pattern, bool fwd = true);

920  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__
(const std::string& device\_name);

937  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__
(long idx);

952  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`operator[] <../../d4/d6d/classTango_1_1Group.html#aea3b781cd10d28770cb584c55c065534>`__\ (long
idx);

986  virtual `Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*
`get\_group <../../d4/d6d/classTango_1_1Group.html#a75ddf85f5805e6e99656cbe554ecf96e>`__
(const std::string& group\_name);

996  long
`get\_size <../../d4/d6d/classTango_1_1Group.html#a1afb6e934e20fb757538b873fef265e5>`__
(bool fwd = true);

1044  std::vector<std::string>
`get\_device\_list <../../d4/d6d/classTango_1_1Group.html#a35a3426e304c3d87607997261aff1d22>`__
(bool fwd = true);

1045  //-

1046 

1048  //-

1050  virtual `Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*
get\_parent () const;

1051  //-

1052  void
`enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__
(const std::string& device\_name, bool fwd = true);

1053  //-

1054  void
`disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__
(const std::string& device\_name, bool fwd = true);

1055  //-

1056  bool
`is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__
(const std::string& device\_name, bool fwd = true) {

1057  `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__ \*
ge = this->find\_i(device\_name, fwd);

1058  return ge ?
ge->\ `is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__\ ()
: false;

1059  };

1060  //-

1061  bool is\_root\_group () const;

1062 

1063  //---------------------------------------------

1064  //- a la DeviceProxy interface

1065  //---------------------------------------------

1068 

1069  //- misc.

1070  //---------------------------------------------

1081  virtual bool
`ping <../../d4/d6d/classTango_1_1Group.html#aa7cd5c6f1be1a85c244c7a4ec99081ec>`__
(bool fwd = true);

1090  virtual void
`set\_timeout\_millis <../../d4/d6d/classTango_1_1Group.html#a92242b89511557c3296480ee19b790b2>`__
(int tmo\_ms);

1091 

1092  //- command execution

1093  //---------------------------------------------

1110 
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string& c, bool fwd = true);

1131 
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string& c, const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & d, bool
fwd = true);

1157 
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string& c, const std::vector<DeviceData>& d, bool fwd =
true);

1185  template<typename T>
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string& c, const std::vector<T>& d, bool fwd = true);

1205  long
`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string& c, bool fgt = false, bool fwd = true);

1228  long
`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string& c, const
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & d, bool
fgt = false, bool fwd = true);

1255  long
`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string& c, const std::vector<DeviceData>& d, bool fgt =
false, bool fwd = true);

1284  template<typename T> long
`command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string& c, const std::vector<T>& d, bool fgt = false, bool
fwd = true);

1302 
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`command\_inout\_reply <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__
(long req\_id, long tmo\_ms = 0);

1303 

1304  //- attribute(s) reading

1305  //---------------------------------------------

1323 
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
`read\_attribute <../../d4/d6d/classTango_1_1Group.html#a3c584b30ee4e69eed2de59cb548c4134>`__
(const std::string& a, bool fwd = true);

1341 
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
`read\_attributes <../../d4/d6d/classTango_1_1Group.html#ab4088df9970f1f1c7d6ae8c29563369f>`__
(const std::vector<std::string>& al, bool fwd = true);

1358  long
`read\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a08fa50b55ebad69d6fd819f658703997>`__
(const std::string& a, bool fwd = true);

1375  long
`read\_attributes\_asynch <../../d4/d6d/classTango_1_1Group.html#a9431b4c0673e3824c31b00028e894d31>`__
(const std::vector<std::string>& al, bool fwd = true);

1391 
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
`read\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#a9c580ba756e84843f29e126efb8c1986>`__
(long req\_id, long tmo\_ms = 0);

1407 
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
`read\_attributes\_reply <../../d4/d6d/classTango_1_1Group.html#ab1a83261058e5c52803e502c01380b79>`__
(long req\_id, long tmo\_ms = 0);

1408 

1409  //- attribute writting

1410  //---------------------------------------------

1429 
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
`write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__
(const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
d, bool fwd = true);

1448 
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
`write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__
(const std::vector<DeviceAttribute>& d, bool fwd = true);

1475  template<typename T>
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
`write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__
(const std::string& n, const std::vector<T>& d, bool fwd = true);

1493  long
`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__
(const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
d, bool fwd = true);

1511  long
`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__
(const std::vector<DeviceAttribute>& d, bool fwd = true);

1536  template<typename T> long
`write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__
(const std::string &a, const std::vector<T> &d, bool fwd = true);

1554 
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
`write\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__
(long req\_id, long tmo\_ms = 0);

1555 

1557  //---------------------------------------------

1558  //- Misc.

1559  //---------------------------------------------

1560  //-

1561  virtual void dump (int indent\_level = 0);

1562  //-

1563  virtual void dump (TangoSys\_OMemStream& oms, int indent\_level =
0);

1565 

1566 private:

1567  //-

1568  long next\_asynch\_request\_id ();

1569  //-

1570  bool add\_i
(`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \* e,
bool fwd = true);

1571  //-

1572  void remove\_i (const std::string& p, bool fwd = true);

1573  //-

1574 
`GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__\ \*
find\_i (const std::string& n, bool fwd = true);

1575  //-

1576  GroupElements get\_hiearchy ();

1577  //-

1578  `Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*
get\_group\_i (const std::string& n);

1579  //-

1580  long get\_size\_i (bool fwd);

1581  //-

1582  void push\_async\_request (long rid, bool fwded);

1583  //-

1584  void pop\_async\_request (long rid);

1585  //-

1586  virtual bool is\_device\_i ();

1587  //-

1588  virtual bool is\_group\_i ();

1589 

1590 #ifdef TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL

1591  omni\_mutex elements\_mutex;

1592 #endif

1593  //- elements

1594  GroupElements elements;

1595  //- asynch request repository

1596  AsynchRequestDesc arp;

1597  //- pseudo asynch. req. id generator

1598  long asynch\_req\_id;

1599 

1600  //- forbidden methods

1601  `Group <../../d4/d6d/classTango_1_1Group.html>`__ ();

1602  `Group <../../d4/d6d/classTango_1_1Group.html>`__ (const
`Group <../../d4/d6d/classTango_1_1Group.html>`__\ &);

1603  `Group <../../d4/d6d/classTango_1_1Group.html>`__\ &
operator=(const `Group <../../d4/d6d/classTango_1_1Group.html>`__\ &);

1604 

1605  //- private part of the asynch impl

1606  virtual long command\_inout\_asynch\_i (const std::string& c, bool
fgt, bool fwd, long ari);

1607  virtual long command\_inout\_asynch\_i (const std::string& c,
const `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & d,
bool fgt, bool fwd, long ari);

1608  virtual long command\_inout\_asynch\_i (const std::string& c,
const std::vector<DeviceData>& d, bool fgt, bool fwd, long ari);

1609  template<typename T> long command\_inout\_asynch\_i (const
std::string& c, /\*const\*/ std::vector<T>& d, bool fgt, bool fwd, long
ari);

1610  virtual
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
command\_inout\_reply\_i (long req\_id, long tmo\_ms);

1611 

1612  virtual long read\_attribute\_asynch\_i (const std::string& a,
bool fwd, long ari);

1613  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attribute\_reply\_i (long req\_id, long tmo\_ms);

1614 

1615  virtual long read\_attributes\_asynch\_i (const
std::vector<std::string>& al, bool fwd, long ari);

1616  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attributes\_reply\_i (long req\_id, long tmo\_ms);

1617 

1618  virtual long write\_attribute\_asynch\_i (const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
d, bool fwd, long ari);

1619  virtual long write\_attribute\_asynch\_i (const
std::vector<DeviceAttribute>& d, bool fwd, long ari);

1620  template<typename T> long write\_attribute\_asynch\_i (const
std::string& a, /\*const\*/ std::vector<T>& d, bool fwd, long ari);

1621  virtual
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
write\_attribute\_reply\_i (long req\_id, long tmo\_ms);

1622 };

1623 

1624 //=============================================================================

1625 // class GroupDeviceElement: a device element

1626 //=============================================================================

`1627 <../../da/d18/classTango_1_1GroupDeviceElement.html>`__ class
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
: public `GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

1628 {

`1629 <../../da/d18/classTango_1_1GroupDeviceElement.html#a2697825715974a353728f0d4d5658112>`__ 
friend class `Group <../../d4/d6d/classTango_1_1Group.html>`__;

`1630 <../../da/d18/classTango_1_1GroupDeviceElement.html#acf9aa16af65e1d1aa7375bf81409d9f0>`__ 
friend class
`GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__;

1631 

1632 public:

1633 

1634  //---------------------------------------------

1635  //- Group management

1636  //---------------------------------------------

1637  //-

1638  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../da/d18/classTango_1_1GroupDeviceElement.html#a5abe1c9a7c93eb66bca1e756833fdadd>`__
(const std::string& n);

1639  //-

1640  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`get\_device <../../da/d18/classTango_1_1GroupDeviceElement.html#a5abe1c9a7c93eb66bca1e756833fdadd>`__
(long idx);

1641  //-

1642  virtual
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
`operator[] <../../da/d18/classTango_1_1GroupDeviceElement.html#a8230a10f49f459944de457deaf2d8915>`__\ (long
idx);

1643 

1644  //---------------------------------------------

1645  //- a la DeviceProxy interface

1646  //---------------------------------------------

1647  //-

1648  virtual bool
`ping <../../da/d18/classTango_1_1GroupDeviceElement.html#a326af717a2dde9c75f60ab0ed6b35c2f>`__
(bool fwd = true);

1649  //-

1650  virtual void
`set\_timeout\_millis <../../da/d18/classTango_1_1GroupDeviceElement.html#a7e318af767b4030e04d3104e318da0b5>`__
(int tmo\_ms);

1651 

1652  //---------------------------------------------

1653  //- Misc

1654  //---------------------------------------------

1655  //-

1656  virtual void
`dump <../../da/d18/classTango_1_1GroupDeviceElement.html#a14f1b125cf6cf5eae91c1a06cadc41a9>`__
(int indent\_level = 0);

1657  //-

1658  virtual void
`dump <../../da/d18/classTango_1_1GroupDeviceElement.html#a14f1b125cf6cf5eae91c1a06cadc41a9>`__
(TangoSys\_OMemStream& oms, int indent\_level = 0);

1659  //-

1660  virtual bool
`is\_connected <../../da/d18/classTango_1_1GroupDeviceElement.html#af229babcc705fac5bf51edd7715a3496>`__\ ();

1661 

1662 private:

1663  //- the device proxy

1664  `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
\*dp;

1665  //- asynch request repository

1666  AsynchRequestRep arp;

1667 

1668  //- forbidden methods

1669 
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
();

1670 
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
(const
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__\ &);

1671 
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__\ &
operator=(const
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__\ &);

1672 

1673  //- ctor: creates an GroupDeviceElement named <name>

1674 
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
(const std::string& name);

1675  //- ctor: creates a GroupDeviceElement named <name> with timeout
set to tmo\_ms milliseconds

1676 
`GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__
(const std::string& name, int tmo\_ms);

1677  //- dtor: release resources

1678  virtual
~\ `GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__\ ();

1679 

1680  //- build connection to the device (may throw DevFailed)

1681  `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ \*
connect ();

1682  //- close connection

1683  void disconnect ();

1684 

1685  //- a trick to get a valid device proxy or an exception

1686  inline
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__\ \*
dev\_proxy () {

1687  return dp ? dp : connect();

1688  }

1689 

1690  //- element identification

1691  virtual bool is\_device\_i ();

1692  virtual bool is\_group\_i ();

1693 

1694  //- size (group interface)

1695  virtual long get\_size\_i (bool fwd = true);

1696 

1697  //- private part of the asynch impl

1698  virtual long command\_inout\_asynch\_i (const std::string& c, bool
fgt, bool fwd, long ari);

1699  virtual long command\_inout\_asynch\_i (const std::string& c,
const `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__\ & d,
bool fgt, bool fwd, long ari);

1700  virtual
`GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
command\_inout\_reply\_i (long req\_id, long tmo\_ms);

1701 

1702  virtual long read\_attribute\_asynch\_i (const std::string& a,
bool fwd, long ari);

1703  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attribute\_reply\_i (long req\_id, long tmo\_ms);

1704 

1705  virtual long read\_attributes\_asynch\_i (const
std::vector<std::string>& al, bool fwd, long ari);

1706  virtual
`GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__
read\_attributes\_reply\_i (long req\_id, long tmo\_ms);

1707 

1708  virtual long write\_attribute\_asynch\_i (const
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__\ &
d, bool fwd, long ari);

1709  virtual
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
write\_attribute\_reply\_i (long req\_id, long tmo\_ms);

1710 };

1711 

1712 //=============================================================================

1713 // GroupCmdReply::operator>> template impl.

1714 //=============================================================================

1715 template <typename T>

`1716 <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__ bool
`GroupCmdReply::operator>> <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__\ (T&
dest)

1717 {

1718  bool result = true;

1719  if (GroupReply::group\_element\_enabled\_m == false)

1720  {

1721  if (exception\_enabled)

1722  {

1723  Tango::DevErrorList errors(1);

1724  errors.length(1);

1725  errors[0].severity = Tango::ERR;

1726  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("no
available data");

1727  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("no
data - group member is disabled");

1728  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("GroupCmdReply::operator>>");

1729  DevFailed df(errors);

1730  throw df;

1731  }

1732  result = false;

1733  }

1734  else if (GroupReply::has\_failed\_m == true)

1735  {

1736  if (exception\_enabled)

1737  throw GroupReply::exception\_m;

1738  result = false;

1739  }

1740  else

1741  {

1742  std::bitset<DeviceData::numFlags> bs;

1743 
data\_m.\ `exceptions <../../df/d22/classTango_1_1DeviceData.html#a955d63845f806ed9268b5d4b74f6a5d2>`__\ (exception\_enabled
? bs.set() : bs.reset());

1744  try

1745  {

1746  result = data\_m >> dest;

1747  }

1748  catch (const DevFailed& df)

1749  {

1750  GroupReply::exception\_m = df;

1751  if (exception\_enabled)

1752  throw GroupReply::exception\_m;

1753  result = false;

1754  }

1755  catch (...) {

1756  if (exception\_enabled)

1757  {

1758  Tango::DevErrorList errors(1);

1759  errors.length(1);

1760  errors[0].severity = Tango::ERR;

1761  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("unknown
exception caught");

1762  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("an
error occured while trying to extract data");

1763  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("GroupCmdReply::operator>>");

1764  DevFailed df(errors);

1765  GroupReply::exception\_m = df;

1766  throw GroupReply::exception\_m;

1767  }

1768  result = false;

1769  }

1770  }

1771  return result;

1772 }

1773 

1774 //=============================================================================

1775 // GroupAttrReply::operator>> template impl.

1776 //=============================================================================

1777 template <typename T>

`1778 <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__ bool
`GroupAttrReply::operator>> <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__\ (T&
dest)

1779 {

1780  bool result = true;

1781  if (GroupReply::group\_element\_enabled\_m == false)

1782  {

1783  if (exception\_enabled)

1784  {

1785  Tango::DevErrorList errors(1);

1786  errors.length(1);

1787  errors[0].severity = Tango::ERR;

1788  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("no
available data");

1789  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("no
data - group member is disabled");

1790  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("GroupAttrReply::operator>>");

1791  DevFailed df(errors);

1792  throw df;

1793  }

1794  result = false;

1795  }

1796  else if (GroupReply::has\_failed\_m == true)

1797  {

1798  if (exception\_enabled)

1799  throw GroupReply::exception\_m;

1800  result = false;

1801  }

1802  else

1803  {

1804  std::bitset<DeviceAttribute::numFlags> bs;

1805 
data\_m.\ `exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#a3927b11e5bd052f81c77f8a04621d0a5>`__\ (exception\_enabled
? bs.set() : bs.reset());

1806  try

1807  {

1808  result = data\_m >> dest;

1809  }

1810  catch (const DevFailed& df)

1811  {

1812  GroupReply::exception\_m = df;

1813  if (exception\_enabled)

1814  throw GroupReply::exception\_m;

1815  result = false;

1816  }

1817  catch (...)

1818  {

1819  if (exception\_enabled)

1820  {

1821  Tango::DevErrorList errors(1);

1822  errors.length(1);

1823  errors[0].severity = Tango::ERR;

1824  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("unknown
exception caught");

1825  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("an
error occured while trying to extract data");

1826  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ ("GroupAttrReply::operator>>");

1827  DevFailed df(errors);

1828  GroupReply::exception\_m = df;

1829  throw GroupReply::exception\_m;

1830  }

1831  result = false;

1832  }

1833  }

1834  return result;

1835 }

1836 

1837 //=============================================================================

1838 // Group::command\_inout template impl.

1839 //=============================================================================

1840 template<typename T>

`1841 <../../d4/d6d/classTango_1_1Group.html#ad54f51f9f9bbac8ad686199245274bbf>`__ `GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__
`Group::command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__
(const std::string& c, const std::vector<T>& d, bool fwd)

1842 {

1843  long id = command\_inout\_asynch\_i<T>(c,
const\_cast<std::vector<T>&>(d), false, fwd, -1);

1844  return command\_inout\_reply\_i(id, 0);

1845 }

1846 

1847 //=============================================================================

1848 // Group::command\_inout\_asynch template impl.

1849 //=============================================================================

1850 template<typename T>

`1851 <../../d4/d6d/classTango_1_1Group.html#a17b53cb8fb55e3b96d056cb9971aaab4>`__ long
`Group::command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__
(const std::string& c, const std::vector<T>& d, bool fgt, bool fwd)

1852 {

1853  return command\_inout\_asynch\_i<T>(c,
const\_cast<std::vector<T>&>(d), fgt, fwd, -1);

1854 }

1855 

1856 //=============================================================================

1857 // Group::command\_inout\_asynch template impl.

1858 //=============================================================================

1859 template<typename T>

1860 long Group::command\_inout\_asynch\_i (const std::string& c,
/\*const\*/ std::vector<T>& d, bool fgt, bool fwd, long ari)

1861 {

1862  #ifdef TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL

1863  omni\_mutex\_lock guard(elements\_mutex);

1864  #endif

1865 

1866  long gsize = get\_size\_i(fwd);

1867  if (gsize != static\_cast<long>(d.size()))

1868  {

1869  TangoSys\_OMemStream desc;

1870  desc << "the size of the input argument list must equal the number
of device in the group"

1871  << " [expected:"

1872  << gsize

1873  << " - got:"

1874  << d.size()

1875  << "]"

1876  << ends;

1877  ApiDataExcept::throw\_exception((const
char\*)\ `API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__,

1878  (const char\*)desc.str().c\_str(),

1879  (const char\*)"Group::command\_inout\_asynch");

1880  }

1881 

1882  if (ari == -1)

1883  ari = next\_asynch\_request\_id();

1884 

1885  for (unsigned int i = 0, j = 0; i < elements.size(); i++)

1886  {

1887  if (elements[i]->is\_device\_i())

1888  {

1889  `Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__
dd;

1890  dd << d[j++];

1891  elements[i]->command\_inout\_asynch\_i(c, dd, fgt, false, ari);

1892  }

1893  else if (fwd)

1894  {

1895  `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__ \* g =
reinterpret\_cast<\ `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*>(elements[i]);

1896  long gsize = g->get\_size\_i(fwd);

1897  std::vector<T> sub\_d(d.begin() + j, d.begin() + j + gsize);

1898 
reinterpret\_cast<\ `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*>(elements[i])->command\_inout\_asynch\_i<T>(c,
sub\_d, fgt, fwd, ari);

1899  j += gsize;

1900  }

1901  }

1902 

1903  if (fgt == false) {

1904  push\_async\_request(ari, fwd);

1905  }

1906 

1907  return ari;

1908 }

1909 

1910 //=============================================================================

1911 // Group::write\_attribute\_asynch template impl.

1912 //=============================================================================

1913 template<typename T>

`1914 <../../d4/d6d/classTango_1_1Group.html#a5b513a1564a1a4f9e5482dfcef528d0c>`__ `GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__
`Group::write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__
(const std::string& a, const std::vector<T>& d, bool fwd)

1915 {

1916  long id = write\_attribute\_asynch\_i<T>(a,
const\_cast<std::vector<T>&>(d), fwd, -1);

1917  return
`write\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__\ (id);

1918 }

1919 

1920 //=============================================================================

1921 // Group::write\_attribute\_asynch template impl.

1922 //=============================================================================

1923 template<typename T>

`1924 <../../d4/d6d/classTango_1_1Group.html#a187f0b29e02bf82b74f21b55c4252d62>`__ long
`Group::write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__
(const std::string& a, const std::vector<T>& d, bool fwd)

1925 {

1926  return write\_attribute\_asynch\_i<T>(a,
const\_cast<std::vector<T>&>(d), fwd, -1);

1927 }

1928 

1929 //=============================================================================

1930 // Group::write\_attribute\_asynch\_i template impl.

1931 //=============================================================================

1932 template<typename T>

1933 long Group::write\_attribute\_asynch\_i (const std::string& a,
/\*const\*/ std::vector<T>& d, bool fwd, long ari)

1934 {

1935 #ifdef TANGO\_GROUP\_HAS\_THREAD\_SAFE\_IMPL

1936  omni\_mutex\_lock guard(elements\_mutex);

1937 #endif

1938 

1939 
`GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__ rl;

1940  long gsize = get\_size\_i(fwd);

1941  if (gsize != static\_cast<long>(d.size()))

1942  {

1943  TangoSys\_OMemStream desc;

1944  desc << "the size of the input argument list must equal the number
of device in the group"

1945  << " [expected:"

1946  << gsize

1947  << " - got:"

1948  << d.size()

1949  << "]"

1950  << ends;

1951  ApiDataExcept::throw\_exception((const
char\*)\ `API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__,

1952  (const char\*)desc.str().c\_str(),

1953  (const char\*)"Group::write\_attribute\_asynch");

1954  }

1955 

1956  if (ari == -1)

1957  ari = next\_asynch\_request\_id();

1958 

1959  DeviceAttribute da;

1960  da.name = a;

1961 

1962  for (unsigned int i = 0, j = 0; i < elements.size(); i++)

1963  {

1964  if (elements[i]->is\_device\_i())

1965  {

1966  da << d[j++];

1967  elements[i]->write\_attribute\_asynch\_i(da, false, ari);

1968  }

1969  else if (fwd)

1970  {

1971  `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__ \* g =
reinterpret\_cast<\ `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*>(elements[i]);

1972  long gsize = g->get\_size\_i(fwd);

1973  std::vector<T> sub\_d(d.begin() + j, d.begin() + j + gsize);

1974 
reinterpret\_cast<\ `Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__\ \*>(elements[i])->write\_attribute\_asynch\_i(a,
sub\_d, fwd, ari);

1975  j += gsize;

1976  }

1977  }

1978  push\_async\_request(ari, fwd);

1979  return ari;

1980 }

1981 

1982 } // namespace Tango

1983 

1984 

1985 #endif /\* \_GROUP\_H\_ \*/

1986 

`Tango::GroupElement::get\_device <../../df/d46/classTango_1_1GroupElement.html#a78f61062a50404b224883dab23c08168>`__

virtual DeviceProxy \* get\_device(const std::string &n)=0

`Tango::GroupElement::is\_connected <../../df/d46/classTango_1_1GroupElement.html#a5ca539735117e31e002587883e508ca5>`__

virtual bool is\_connected()

`Tango::Group::write\_attribute <../../d4/d6d/classTango_1_1Group.html#a64da6f972d7dca15b192c66226e3d4c7>`__

GroupReplyList write\_attribute(const DeviceAttribute &d, bool fwd=true)

Writes an attribute on each device in the group.

`Tango::Group::get\_device <../../d4/d6d/classTango_1_1Group.html#adc7d5db7e814e378bf30f940865885b8>`__

virtual DeviceProxy \* get\_device(const std::string &device\_name)

Returns a reference to the specified device.

`Tango::AsynchRequest::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a3e7880f845044a536121f702b5521270>`__

AsynchRequest(long \_rid, const std::string &\_obj\_name, bool
ge\_enabled=true)

**Definition:** group.h:76

`Tango::GroupReplyList::reset <../../dc/d11/classTango_1_1GroupReplyList.html#afe1cb42828f48dd701a0e8d250470e93>`__

void reset()

Reset the object.

**Definition:** group.h:435

`Tango::GroupCmdReplyList::has\_failed <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a453e217deecfd463162892d471f181d6>`__

bool has\_failed() const

Check if an error has occured.

**Definition:** group.h:492

`Tango::GroupAttrReply <../../d5/dae/classTango_1_1GroupAttrReply.html>`__

Single element group reply for a read attribute execution.

**Definition:** group.h:338

`Tango::GroupDeviceElement::set\_timeout\_millis <../../da/d18/classTango_1_1GroupDeviceElement.html#a7e318af767b4030e04d3104e318da0b5>`__

virtual void set\_timeout\_millis(int tmo\_ms)

`Tango::Group::read\_attribute <../../d4/d6d/classTango_1_1Group.html#a3c584b30ee4e69eed2de59cb548c4134>`__

GroupAttrReplyList read\_attribute(const std::string &a, bool fwd=true)

Reads an attribute on each device in the group.

`Tango::GroupAttrReply::get\_data <../../d5/dae/classTango_1_1GroupAttrReply.html#adac0b677ce81ec7e66f3c53872adea86>`__

DeviceAttribute & get\_data()

Get attribute data.

`Tango::Group::read\_attributes\_asynch <../../d4/d6d/classTango_1_1Group.html#a9431b4c0673e3824c31b00028e894d31>`__

long read\_attributes\_asynch(const std::vector< std::string > &al, bool
fwd=true)

Reads several attributes on each device in the group asynchronously.

`Tango::GroupElementsIterator <../../de/ddf/namespaceTango.html#a5c81b7d42455c6c7aafff46edbd2bf4b>`__

GroupElements::iterator GroupElementsIterator

**Definition:** group.h:62

`Tango::Group::get\_device\_list <../../d4/d6d/classTango_1_1Group.html#a35a3426e304c3d87607997261aff1d22>`__

std::vector< std::string > get\_device\_list(bool fwd=true)

Returns the list of devices currently in the hierarchy.

`Tango::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html>`__

**Definition:** group.h:69

`Tango::AsynchRequest::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a383a9c0102ddd1126e7470840779bff1>`__

AsynchRequest(long \_rid, const std::vector< std::string >
&\_obj\_names, bool ge\_enabled=true)

**Definition:** group.h:82

`Tango::Group::ping <../../d4/d6d/classTango_1_1Group.html#aa7cd5c6f1be1a85c244c7a4ec99081ec>`__

virtual bool ping(bool fwd=true)

Ping all devices in a group.

`Tango::GroupElement::enable <../../df/d46/classTango_1_1GroupElement.html#a8b81d29966bfd9d42bafb34bd111fab0>`__

void enable()

**Definition:** group.h:645

`Tango::Group::write\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a2ead1c134a086855da1e809aa8f13d03>`__

long write\_attribute\_asynch(const DeviceAttribute &d, bool fwd=true)

Writes an attribute on each device in the group asynchronously.

`Tango::Group::command\_inout\_asynch <../../d4/d6d/classTango_1_1Group.html#a53d95994ae0c6e3836e33f8acef6a038>`__

long command\_inout\_asynch(const std::string &c, bool fgt=false, bool
fwd=true)

Executes a Tango command on each device in the group asynchronously.

`Tango::AsynchRequest::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a802862507d2cbd9ff8d54a1d029a6d27>`__

AsynchRequest(long \_rid, const std::vector< std::string >
&\_obj\_names, const DevFailed &\_df)

**Definition:** group.h:94

`Tango::AsynchRequestRepIterator <../../de/ddf/namespaceTango.html#a0277f25b3f85ec78c024b252ad16b79c>`__

AsynchRequestRep::iterator AsynchRequestRepIterator

**Definition:** group.h:121

`Tango::DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__

Fundamental type for sending and receiving data from device commands.

**Definition:** devapi.h:64

`Tango::TokenList <../../de/ddf/namespaceTango.html#ad1538aefe5a40c681e41341d087cc7c9>`__

std::vector< std::string > TokenList

**Definition:** group.h:65

`Tango::Group::command\_inout\_reply <../../d4/d6d/classTango_1_1Group.html#abed06d2a84d479a13c2e98781af748e8>`__

GroupCmdReplyList command\_inout\_reply(long req\_id, long tmo\_ms=0)

Returns the results of an asynchronous command.

`Tango::GroupElement::name\_equals <../../df/d46/classTango_1_1GroupElement.html#ac38ec8a0666000aaeb0be72a538555f6>`__

bool name\_equals(const std::string &n)

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::GroupDeviceElement <../../da/d18/classTango_1_1GroupDeviceElement.html>`__

**Definition:** group.h:1627

`Tango::GroupAttrReply::operator>> <../../d5/dae/classTango_1_1GroupAttrReply.html#a421f7a196fc46f20b76a2124da30de95>`__

bool operator>>(T &dest)

Get attribute data and extract them.

**Definition:** group.h:1778

`Tango::GroupElement::operator[] <../../df/d46/classTango_1_1GroupElement.html#aef54618c81a0042334be5c13d0326346>`__

virtual DeviceProxy \* operator[](long idx)=0

`Tango::GroupReply::obj\_name <../../de/deb/classTango_1_1GroupReply.html#a13564b3e6df04a5257b2592b94a07d88>`__

const std::string & obj\_name() const

Get object name.

**Definition:** group.h:209

`Tango::Group::read\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#a9c580ba756e84843f29e126efb8c1986>`__

GroupAttrReplyList read\_attribute\_reply(long req\_id, long tmo\_ms=0)

Returns the results of an asynchronous attribute reading.

`Tango::GroupElement::set\_timeout\_millis <../../df/d46/classTango_1_1GroupElement.html#aa4ed03d3347901cecadbeff4c9b465a3>`__

virtual void set\_timeout\_millis(int tmo\_ms)=0

`Tango::Group::remove\_all <../../d4/d6d/classTango_1_1Group.html#a12404b76c3e64df47467a1260591e7df>`__

virtual void remove\_all()

Removes all elements in the group.

`Tango::GroupReplyList <../../dc/d11/classTango_1_1GroupReplyList.html>`__

Group reply for a write\_attribute execution.

**Definition:** group.h:403

`Tango::GroupElement::get\_fully\_qualified\_name <../../df/d46/classTango_1_1GroupElement.html#a44dea90469791483f36bda324fa67ea1>`__

const std::string get\_fully\_qualified\_name() const

**Definition:** group.h:638

`Tango::Group::contains <../../d4/d6d/classTango_1_1Group.html#a2885b00242d3a2d199836e48186dd71e>`__

virtual bool contains(const std::string &pattern, bool fwd=true)

Check if the hierarchy contains groups and/or devices which name matches
the specified pattern...

`Tango::AsynchRequestRepValue <../../de/ddf/namespaceTango.html#a38e09c4b89ec97d44f1019f903918c04>`__

AsynchRequestRep::value\_type AsynchRequestRepValue

**Definition:** group.h:123

`Tango::Group::get\_group <../../d4/d6d/classTango_1_1Group.html#a75ddf85f5805e6e99656cbe554ecf96e>`__

virtual Group \* get\_group(const std::string &group\_name)

Returns a reference to the specified group.

`Tango::GroupDeviceElement::is\_connected <../../da/d18/classTango_1_1GroupDeviceElement.html#af229babcc705fac5bf51edd7715a3496>`__

virtual bool is\_connected()

`Tango::GroupElement::ping <../../df/d46/classTango_1_1GroupElement.html#ab004b0e82f6a7cd7db714ca42b3b1d8a>`__

virtual bool ping(bool fwd=true)=0

`Tango::Group::read\_attribute\_asynch <../../d4/d6d/classTango_1_1Group.html#a08fa50b55ebad69d6fd819f658703997>`__

long read\_attribute\_asynch(const std::string &a, bool fwd=true)

Reads an attribute on each device in the group asynchronously.

`Tango::GroupElement::is\_enabled <../../df/d46/classTango_1_1GroupElement.html#aec8981c295f17883ad1b05bcee4f78da>`__

bool is\_enabled() const

**Definition:** group.h:653

`Tango::Group::write\_attribute\_reply <../../d4/d6d/classTango_1_1Group.html#aa300f78715baea10d390b7e7489e0506>`__

GroupReplyList write\_attribute\_reply(long req\_id, long tmo\_ms=0)

Returns the acknowledgements of an asynchronous attribute writing.

`Tango::GroupAttrReplyList::has\_failed <../../db/daa/classTango_1_1GroupAttrReplyList.html#a1737797b7a4585b948752ef80c915fb2>`__

bool has\_failed() const

Check if an error has occured.

**Definition:** group.h:557

`Tango::GroupReplyList::has\_failed <../../dc/d11/classTango_1_1GroupReplyList.html#a7221a5debe8d58e6679ac2e234b3384d>`__

bool has\_failed() const

Check if an error has occured.

**Definition:** group.h:426

`Tango::AsynchRequest::~AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#ae6f806d0204ff49ced628dca1e651acd>`__

virtual ~AsynchRequest()

**Definition:** group.h:100

`Tango::GroupReply::has\_failed <../../de/deb/classTango_1_1GroupReply.html#aec0def5a9df786134dc9cb8c66c21cb8>`__

bool has\_failed() const

Check if an error has occured.

**Definition:** group.h:187

`Tango::Group::get\_size <../../d4/d6d/classTango_1_1Group.html#a1afb6e934e20fb757538b873fef265e5>`__

long get\_size(bool fwd=true)

Return the number of devices in the hierarchy.

`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

Fundamental type for sending an dreceiving data to and from device
attributes.

**Definition:** devapi.h:73

`Tango::AsynchRequest::group\_element\_enabled <../../d2/d0d/classTango_1_1AsynchRequest.html#ac4de9d1f09f1fbdaddd2204c6e77506e>`__

bool group\_element\_enabled() const

**Definition:** group.h:104

`Tango::GroupReply::dev\_name <../../de/deb/classTango_1_1GroupReply.html#a4fe578ba1fcd03239b7dc589ffc1af77>`__

const std::string & dev\_name() const

Get device name.

**Definition:** group.h:198

`Tango::GroupReply::get\_err\_stack <../../de/deb/classTango_1_1GroupReply.html#a47419919cad3f689140757bd09eae457>`__

const DevErrorList & get\_err\_stack() const

Get error stack.

**Definition:** group.h:220

`Tango::GroupDeviceElement::ping <../../da/d18/classTango_1_1GroupDeviceElement.html#a326af717a2dde9c75f60ab0ed6b35c2f>`__

virtual bool ping(bool fwd=true)

`Tango::GroupReply <../../de/deb/classTango_1_1GroupReply.html>`__

Base class for Group reply.

**Definition:** group.h:140

`Tango::Group::read\_attributes <../../d4/d6d/classTango_1_1Group.html#ab4088df9970f1f1c7d6ae8c29563369f>`__

GroupAttrReplyList read\_attributes(const std::vector< std::string >
&al, bool fwd=true)

Reads several attributes on each device in the group.

`Tango::GroupCmdReplyList::reset <../../d8/d3d/classTango_1_1GroupCmdReplyList.html#a30946c9b34cf1275f3e4b442652935e2>`__

void reset()

Reset the object.

**Definition:** group.h:501

`Tango::GroupElements <../../de/ddf/namespaceTango.html#ab9ef33527260f0bc7f0bf168143f55a0>`__

std::vector< GroupElement \* > GroupElements

**Definition:** group.h:54

`Tango::GroupAttrReplyList::reset <../../db/daa/classTango_1_1GroupAttrReplyList.html#a27620a4010723a1649c0dd810b4e1367>`__

void reset()

Reset the object.

**Definition:** group.h:566

`Tango::Group::set\_timeout\_millis <../../d4/d6d/classTango_1_1Group.html#a92242b89511557c3296480ee19b790b2>`__

virtual void set\_timeout\_millis(int tmo\_ms)

Set client side timeout for all devices in the group.

`Tango::GroupAttrReplyList <../../db/daa/classTango_1_1GroupAttrReplyList.html>`__

Group reply for a read\_attribute execution.

**Definition:** group.h:534

`Tango::GroupReply::enable\_exception <../../de/deb/classTango_1_1GroupReply.html#a4250fb27cfce0de073029a1b778b06b8>`__

static bool enable\_exception(bool exception\_mode=true)

Enable/Disable exception.

`Tango::GroupElement::name\_matches <../../df/d46/classTango_1_1GroupElement.html#ac59fc656076f55359d8d3b000d0940e9>`__

bool name\_matches(const std::string &n)

`Tango::GroupElement::contains <../../df/d46/classTango_1_1GroupElement.html#a64f031e079125a08bdab73d21c906c86>`__

virtual bool contains(const std::string &n, bool fwd=true)

`Tango::GroupDeviceElement::get\_device <../../da/d18/classTango_1_1GroupDeviceElement.html#a5abe1c9a7c93eb66bca1e756833fdadd>`__

virtual DeviceProxy \* get\_device(const std::string &n)

`Tango::AsynchRequestRep <../../de/ddf/namespaceTango.html#a168c199249350bb009e168211ed97747>`__

std::map< long, AsynchRequest > AsynchRequestRep

**Definition:** group.h:119

`Tango::GroupElement <../../df/d46/classTango_1_1GroupElement.html>`__

**Definition:** group.h:605

`Tango::GroupElement::dump <../../df/d46/classTango_1_1GroupElement.html#af8ebd6508a22f24c40886f97f879c54f>`__

virtual void dump(int indent\_level=0)=0

`Tango::API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__

const char \*const API\_MethodArgument

**Definition:** tango\_const.h:409

`Tango::Group::add <../../d4/d6d/classTango_1_1Group.html#a2cbaa3bf6cecdb6fb33a387c79556e58>`__

virtual void add(Group \*group, int tmo\_ms=-1)

Attaches a (sub) group.

`Tango::Group::operator[] <../../d4/d6d/classTango_1_1Group.html#aea3b781cd10d28770cb584c55c065534>`__

virtual DeviceProxy \* operator[](long idx)

Returns a reference to the "idx-th" device in the hierarchy.

`Tango::GroupCmdReplyList <../../d8/d3d/classTango_1_1GroupCmdReplyList.html>`__

Group reply for a command execution.

**Definition:** group.h:469

`Tango::Group::~Group <../../d4/d6d/classTango_1_1Group.html#acd7a0b40d37852923131e9bce68dd9ff>`__

virtual ~Group()

Create a Group instance.

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

High level class which provides the client with an easy-to-use interface
to TANGO devices...

**Definition:** devapi.h:56

`Tango::DeviceData::exceptions <../../df/d22/classTango_1_1DeviceData.html#a955d63845f806ed9268b5d4b74f6a5d2>`__

void exceptions(bitset< numFlags > fl)

Set exception flag.

**Definition:** devapi.h:500

`Tango::GroupCmdReply <../../d9/d33/classTango_1_1GroupCmdReply.html>`__

Single element group reply for a command execution.

**Definition:** group.h:251

`Tango::GroupElement::disable <../../df/d46/classTango_1_1GroupElement.html#ac81b46293f4d775658c433b83759ecf2>`__

void disable()

**Definition:** group.h:649

`Tango::GroupCmdReply::extract <../../d9/d33/classTango_1_1GroupCmdReply.html#a4beaeb6d71fa2cd825828718d36d20a4>`__

bool extract(std::vector< DevLong > &vl, std::vector< std::string > &vs)

Get command data and extract them (DevVarLongStringArray)

`Tango::GroupElementFactory <../../da/da9/classTango_1_1GroupElementFactory.html>`__

**Definition:** group.h:586

`Tango::GroupCmdReply::operator>> <../../d9/d33/classTango_1_1GroupCmdReply.html#a54b600d46c948acd7d1943f6d9738943>`__

bool operator>>(T &dest)

Get command data and extract them.

**Definition:** group.h:1716

`Tango::GroupCmdReply::get\_data <../../d9/d33/classTango_1_1GroupCmdReply.html#ab753e25a85ec8ca6b96f61d4d3a2c0fd>`__

DeviceData & get\_data()

Get command data.

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__

char \* string\_dup(char \*s)

**Definition:** tango\_const.h:462

`Tango::Group <../../d4/d6d/classTango_1_1Group.html>`__

High level class allowing the user to handle Tango group.

**Definition:** group.h:734

`Tango::Group::command\_inout <../../d4/d6d/classTango_1_1Group.html#a8511861bcd0723b9e726e2bfaac6de3a>`__

GroupCmdReplyList command\_inout(const std::string &c, bool fwd=true)

Executes a Tango command on a group.

`Tango::GroupDeviceElement::operator[] <../../da/d18/classTango_1_1GroupDeviceElement.html#a8230a10f49f459944de457deaf2d8915>`__

virtual DeviceProxy \* operator[](long idx)

`Tango::AsynchRequest::AsynchRequest <../../d2/d0d/classTango_1_1AsynchRequest.html#a26b3a914e0dfff3db69ab6d645358080>`__

AsynchRequest(long \_rid, const std::string &\_obj\_name, const
DevFailed &\_df)

**Definition:** group.h:88

`Tango::GroupDeviceElement::dump <../../da/d18/classTango_1_1GroupDeviceElement.html#a14f1b125cf6cf5eae91c1a06cadc41a9>`__

virtual void dump(int indent\_level=0)

`Tango::DeviceAttribute::exceptions <../../d7/dca/classTango_1_1DeviceAttribute.html#a3927b11e5bd052f81c77f8a04621d0a5>`__

void exceptions(bitset< numFlags > fl)

Set exception flag.

**Definition:** devapi.h:951

`Tango::Group::read\_attributes\_reply <../../d4/d6d/classTango_1_1Group.html#ab1a83261058e5c52803e502c01380b79>`__

GroupAttrReplyList read\_attributes\_reply(long req\_id, long tmo\_ms=0)

Returns the results of an asynchronous attributes reading.

`Tango::GroupElement::~GroupElement <../../df/d46/classTango_1_1GroupElement.html#a9e4421b2ad2ad0c72dfa587b6912c811>`__

virtual ~GroupElement()

`Tango::GroupElement::get\_name <../../df/d46/classTango_1_1GroupElement.html#a1313406261e09af44efae5b49ce4fc5a>`__

const std::string & get\_name() const

**Definition:** group.h:634

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `group.h <../../d9/dd1/group_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
