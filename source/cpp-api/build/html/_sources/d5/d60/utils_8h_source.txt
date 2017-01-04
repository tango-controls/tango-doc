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

utils.h

`Go to the documentation of this file. <../../d5/d60/utils_8h.html>`__

1 //=============================================================================

2 //

3 // file : utils.h

4 //

5 // description : Include for utility functions or classes

6 //

7 // project : TANGO

8 //

9 // author(s) : A.Gotz + E.Taurel

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

35 #ifndef \_UTILS\_H

36 #define \_UTILS\_H

37 

38 #include <tango.h>

39 #include
<`tango/server/pollext.h <../../db/d17/pollext_8h.html>`__\ >

40 #include <tango/server/subdev\_diag.h>

41 #include <new>

42 #include <tango/server/rootattreg.h>

43 #include <tango/server/pollthread.h>

44 

45 #ifndef \_TG\_WINDOWS\_

46  #include <unistd.h>

47 #else

48  #include <coutbuf.h>

49  #include <w32win.h>

50 #endif /\* \_TG\_WINDOWS\_ \*/

51 

52 //

53 // For debug purpose

54 //

55 

56 #ifndef TANGO\_HAS\_LOG4TANGO

57 

58 #define cout1 if ((Tango::Util::\_tracelevel >= 1) && \\

59  (Tango::Util::\_tracelevel < 5)) cout

60 #define cout2 if ((Tango::Util::\_tracelevel >= 2) && \\

61  (Tango::Util::\_tracelevel < 5)) cout

62 #define cout3 if ((Tango::Util::\_tracelevel >= 3) && \\

63  (Tango::Util::\_tracelevel < 5)) cout

64 #define cout4 if ((Tango::Util::\_tracelevel >= 4) && \\

65  (Tango::Util::\_tracelevel < 5)) cout

66 

67 #define cout5 if (Tango::Util::\_tracelevel >= 5) cout

68 

69 #endif //TANGO\_HAS\_LOG4TANGO

70 

71 

72 namespace `Tango <../../de/ddf/namespaceTango.html>`__

73 {

74 

75 class DeviceImpl;

76 class DeviceClass;

77 class DServer;

78 class AutoTangoMonitor;

79 class Util;

80 class NotifdEventSupplier;

81 class ZmqEventSupplier;

82 class PyLock;

83 class CreatePyLock;

84 class DbServerCache;

85 class SubDevDiag;

86 

87 struct PollingThreadInfo;

88 struct DevDbUpd;

89 

90 #ifdef \_TG\_WINDOWS\_

91 class CoutBuf;

92 class W32Win;

93 #endif

94 

95 

`96 <../../d4/d9f/classTango_1_1PyLock.html>`__ class
`PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__

97 {

98 public:

`99 <../../d4/d9f/classTango_1_1PyLock.html#a1afe28ba14cf56f031c9960db681f9a3>`__ 
`PyLock <../../d4/d9f/classTango_1_1PyLock.html#a1afe28ba14cf56f031c9960db681f9a3>`__\ ()
{}

`100 <../../d4/d9f/classTango_1_1PyLock.html#afd0b51426d645c9c6c08e2fedf324908>`__ 
virtual
`~PyLock <../../d4/d9f/classTango_1_1PyLock.html#afd0b51426d645c9c6c08e2fedf324908>`__\ ()
{}

101 

`102 <../../d4/d9f/classTango_1_1PyLock.html#a0c766fd01a1e36673db89e712eb14727>`__ 
virtual void
`Get <../../d4/d9f/classTango_1_1PyLock.html#a0c766fd01a1e36673db89e712eb14727>`__\ ()
{}

`103 <../../d4/d9f/classTango_1_1PyLock.html#a1eab5bc8ab2ae9ca1fe7deb49e7a7682>`__ 
virtual void
`Release <../../d4/d9f/classTango_1_1PyLock.html#a1eab5bc8ab2ae9ca1fe7deb49e7a7682>`__\ ()
{}

104 };

105 

`106 <../../d9/dd7/classTango_1_1CreatePyLock.html>`__ class
`CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html>`__

107 {

108 public:

`109 <../../d9/dd7/classTango_1_1CreatePyLock.html#a6ed4dcb11ebec0270281b896e9efe2f2>`__ 
`CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html#a6ed4dcb11ebec0270281b896e9efe2f2>`__\ ()
{}

`110 <../../d9/dd7/classTango_1_1CreatePyLock.html#aaf58411a22d5d3866af917fe433a1cff>`__ 
virtual
`~CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html#aaf58411a22d5d3866af917fe433a1cff>`__\ ()
{}

111 

`112 <../../d9/dd7/classTango_1_1CreatePyLock.html#a1dab7fbb63d9d24477ea78f7f1951eb3>`__ 
virtual `PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__
\*\ `create <../../d9/dd7/classTango_1_1CreatePyLock.html#a1dab7fbb63d9d24477ea78f7f1951eb3>`__\ ()
{return new `PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__\ ();}

113 };

114 

`115 <../../d6/d62/classTango_1_1Interceptors.html>`__ class
`Interceptors <../../d6/d62/classTango_1_1Interceptors.html>`__

116 {

117 public:

`118 <../../d6/d62/classTango_1_1Interceptors.html#a4c5255368e548bba8405ecf44b2b698f>`__ 
`Interceptors <../../d6/d62/classTango_1_1Interceptors.html#a4c5255368e548bba8405ecf44b2b698f>`__\ ()
{}

`119 <../../d6/d62/classTango_1_1Interceptors.html#aa6e716d549719f06e696ddfb3d596091>`__ 
virtual
`~Interceptors <../../d6/d62/classTango_1_1Interceptors.html#aa6e716d549719f06e696ddfb3d596091>`__\ ()
{}

120 

`121 <../../d6/d62/classTango_1_1Interceptors.html#ae04addadc7821a6dd88dc6f2661a0c19>`__ 
virtual void
`create\_thread <../../d6/d62/classTango_1_1Interceptors.html#ae04addadc7821a6dd88dc6f2661a0c19>`__\ ()
{}

`122 <../../d6/d62/classTango_1_1Interceptors.html#a3a874b0abbff6982eff3d335e58a9569>`__ 
virtual void
`delete\_thread <../../d6/d62/classTango_1_1Interceptors.html#a3a874b0abbff6982eff3d335e58a9569>`__\ ()
{}

123 };

124 

125 //=============================================================================

126 //

127 // The Util class

128 //

129 // description : This class contains all properties and methods

130 // which a device server process requires only once e.g.

131 // the orb and boa pointers....

132 // This class is a singleton ( The constructor is

133 // protected and the \_instance data member is static)

134 //

135 // This class must be created at the beginning of each

136 // device server process

137 //

138 //=============================================================================

139 

`153 <../../d4/deb/classTango_1_1Util.html>`__ class
`Util <../../d4/deb/classTango_1_1Util.html>`__

154 {

`155 <../../d4/deb/classTango_1_1Util.html#aa90445f0324fbdea288f7b41aa4a6790>`__ 
friend class
`Tango::AutoTangoMonitor <../../d4/deb/classTango_1_1Util.html#aa90445f0324fbdea288f7b41aa4a6790>`__;

`156 <../../d4/deb/classTango_1_1Util.html#a8b820dd210d17c25d7da4ba8379ee41e>`__ 
friend class
`Tango::ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__;

157 public:

158 

163 

175  static `Util <../../d4/deb/classTango_1_1Util.html>`__
\*\ `init <../../d4/deb/classTango_1_1Util.html#a79b69d3b0376e45516410fe35a7c499c>`__\ (int
argc,char \*argv[]);

176 #ifdef \_TG\_WINDOWS\_

177 

189  TANGO\_IMP\_EXP static
`Util <../../d4/deb/classTango_1_1Util.html>`__
\*\ `init <../../d4/deb/classTango_1_1Util.html#a79b69d3b0376e45516410fe35a7c499c>`__\ (HINSTANCE
AppInst,int CmdShow);

190 #endif

191 

201  TANGO\_IMP\_EXP static
`Util <../../d4/deb/classTango_1_1Util.html>`__
\*\ `instance <../../d4/deb/classTango_1_1Util.html#a577119e32b43b1344d6f9ef37f587472>`__\ (bool
exit = true);

203 

210 
`~Util <../../d4/deb/classTango_1_1Util.html#a9f4928ff121e0c7e25c23457fcdde12a>`__\ ();

212 

`222 <../../d4/deb/classTango_1_1Util.html#ad439b7b797d20280db7558d3e0ca97b2>`__ 
CORBA::ORB\_ptr
`get\_orb <../../d4/deb/classTango_1_1Util.html#ad439b7b797d20280db7558d3e0ca97b2>`__\ ()
{return CORBA::ORB::\_duplicate(orb);}

223 

`233 <../../d4/deb/classTango_1_1Util.html#a9c2ea6e24a2e83cd09a1dbdc7218bbee>`__ 
PortableServer::POA\_ptr
`get\_poa <../../d4/deb/classTango_1_1Util.html#a9c2ea6e24a2e83cd09a1dbdc7218bbee>`__\ ()
{return PortableServer::POA::\_duplicate(\_poa);}

234 

`240 <../../d4/deb/classTango_1_1Util.html#abf6c91c64e226fae5ed1639cd28071ce>`__ 
void
`set\_trace\_level <../../d4/deb/classTango_1_1Util.html#abf6c91c64e226fae5ed1639cd28071ce>`__\ (int
level)
{`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__
= level;}

241 

`247 <../../d4/deb/classTango_1_1Util.html#a49822fbfc1d15e017397230127ce33ee>`__ 
int
`get\_trace\_level <../../d4/deb/classTango_1_1Util.html#a49822fbfc1d15e017397230127ce33ee>`__\ ()
{return
`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__;}

248 

249 #ifndef TANGO\_HAS\_LOG4TANGO

250 

255  void set\_trace\_output(string &trace) {trace\_output = trace;}

256 

262  string &get\_trace\_output() {return trace\_output;}

263 

269  TangoSys\_Cout &get\_out() {return cout\_tmp;}

270 

276  void set\_trace\_output\_stream(ofstream \*in) {file\_stream = in;}

277 

283  ofstream \*get\_trace\_output\_stream() {return file\_stream;}

284 #endif //TANGO\_HAS\_LOG4TANGO

285 

`291 <../../d4/deb/classTango_1_1Util.html#ae8f35a5ab069649e607be6097c8b1fd8>`__ 
string
&\ `get\_ds\_inst\_name <../../d4/deb/classTango_1_1Util.html#ae8f35a5ab069649e607be6097c8b1fd8>`__\ ()
{return ds\_instance\_name;}

292 

`298 <../../d4/deb/classTango_1_1Util.html#a23221e64a028a7ddd7a03b9064322ddd>`__ 
string
&\ `get\_ds\_exec\_name <../../d4/deb/classTango_1_1Util.html#a23221e64a028a7ddd7a03b9064322ddd>`__\ ()
{return ds\_exec\_name;}

299 

`307 <../../d4/deb/classTango_1_1Util.html#aab15cb9f574c44c37b0d2dcce3531b3a>`__ 
string
&\ `get\_ds\_name <../../d4/deb/classTango_1_1Util.html#aab15cb9f574c44c37b0d2dcce3531b3a>`__\ ()
{return ds\_name;}

308 

`314 <../../d4/deb/classTango_1_1Util.html#a54e78ffcf1f76cd8d8d03022921ea0f3>`__ 
string
&\ `get\_host\_name <../../d4/deb/classTango_1_1Util.html#a54e78ffcf1f76cd8d8d03022921ea0f3>`__\ ()
{return hostname;}

315 

`321 <../../d4/deb/classTango_1_1Util.html#aff3a13d613a5c362c4c32e3946081a8f>`__ 
string
&\ `get\_pid\_str <../../d4/deb/classTango_1_1Util.html#aff3a13d613a5c362c4c32e3946081a8f>`__\ ()
{return pid\_str;}

322 

`328 <../../d4/deb/classTango_1_1Util.html#aff871862b632defb0006e95404b3089a>`__ 
TangoSys\_Pid
`get\_pid <../../d4/deb/classTango_1_1Util.html#aff871862b632defb0006e95404b3089a>`__\ ()
{return pid;}

329 

336  long
`get\_tango\_lib\_release <../../d4/deb/classTango_1_1Util.html#a10b07c18428bf23e1bc2cb3ac917ff6a>`__\ ();

337 

`343 <../../d4/deb/classTango_1_1Util.html#a1f604cdabca2b7efd2a54287a04d567d>`__ 
string
&\ `get\_version\_str <../../d4/deb/classTango_1_1Util.html#a1f604cdabca2b7efd2a54287a04d567d>`__\ ()
{return version\_str;}

344 

`350 <../../d4/deb/classTango_1_1Util.html#a19ed2067f664f4e7d98ac0876fcc7fd5>`__ 
string
&\ `get\_server\_version <../../d4/deb/classTango_1_1Util.html#a19ed2067f664f4e7d98ac0876fcc7fd5>`__\ ()
{return server\_version;}

351 

`357 <../../d4/deb/classTango_1_1Util.html#abb2c6dbbb85e9c0d73c7304dec83b8a2>`__ 
void
`set\_server\_version <../../d4/deb/classTango_1_1Util.html#abb2c6dbbb85e9c0d73c7304dec83b8a2>`__\ (const
char \*vers) {server\_version = vers;}

358 

`364 <../../d4/deb/classTango_1_1Util.html#a55f6da618ced3d2c73b4b4650f41a781>`__ 
void
`set\_class\_list <../../d4/deb/classTango_1_1Util.html#a55f6da618ced3d2c73b4b4650f41a781>`__\ (vector<DeviceClass
\*> \*list) {cl\_list\_ptr = list;cl\_list = \*list;}

365 

`371 <../../d4/deb/classTango_1_1Util.html#a5129fe98f63d85e72d35ed4619d14b5d>`__ 
void
`add\_class\_to\_list <../../d4/deb/classTango_1_1Util.html#a5129fe98f63d85e72d35ed4619d14b5d>`__\ (`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\* cl) {cl\_list.push\_back(cl);}

372 

`378 <../../d4/deb/classTango_1_1Util.html#a0d18e9c85522737eb4fb4bfff15af44c>`__ 
const vector<DeviceClass \*>
\*\ `get\_class\_list <../../d4/deb/classTango_1_1Util.html#a0d18e9c85522737eb4fb4bfff15af44c>`__\ ()
{return &cl\_list;}

379 

`386 <../../d4/deb/classTango_1_1Util.html#a84851a5fba97e3b553e5a567446f59c0>`__ 
void
`set\_serial\_model <../../d4/deb/classTango_1_1Util.html#a84851a5fba97e3b553e5a567446f59c0>`__\ (`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
ser) {ser\_model = ser;}

387 

`394 <../../d4/deb/classTango_1_1Util.html#ab045a913f25a49e2bb2a1b1895324b87>`__ 
`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
`get\_serial\_model <../../d4/deb/classTango_1_1Util.html#ab045a913f25a49e2bb2a1b1895324b87>`__\ ()
{return ser\_model;}

395 

`401 <../../d4/deb/classTango_1_1Util.html#ae8106bcba73bdaf045057e1dc16b0637>`__ 
NotifdEventSupplier
\*\ `get\_notifd\_event\_supplier <../../d4/deb/classTango_1_1Util.html#ae8106bcba73bdaf045057e1dc16b0637>`__\ ()
{return nd\_event\_supplier;}

402 

`408 <../../d4/deb/classTango_1_1Util.html#adef106a678ba16179069e1f5b0b14de2>`__ 
ZmqEventSupplier
\*\ `get\_zmq\_event\_supplier <../../d4/deb/classTango_1_1Util.html#adef106a678ba16179069e1f5b0b14de2>`__\ ()
{return zmq\_event\_supplier;}

409 

`415 <../../d4/deb/classTango_1_1Util.html#ae085bbb2bd407369c62a126971f12f7d>`__ 
void
`set\_ds\_event\_buffer\_hwm <../../d4/deb/classTango_1_1Util.html#ae085bbb2bd407369c62a126971f12f7d>`__\ (DevLong
val) {if (user\_pub\_hwm == -1)user\_pub\_hwm = val;}

417 

432  void
`trigger\_cmd\_polling <../../d4/deb/classTango_1_1Util.html#aa5f6adfd5e1b7f03fdbd7eadeffb3fb7>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,const string &name);

433 

446  void
`trigger\_attr\_polling <../../d4/deb/classTango_1_1Util.html#a9cb37786d6f990990c7905b39b889d27>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,const string &name);

447 

463  template <typename T>

464  void
`fill\_attr\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#aa9e35fe725db9e490dbd2bf561e5bbe5>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,

465  string &att\_name,

466 
`AttrHistoryStack<T> <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__
&data);

467 

483  template <typename T>

484  void
`fill\_cmd\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#a797a10d317dc6aab6ef2948fc94b90cf>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,

485  string &cmd\_name,

486 
`CmdHistoryStack<T> <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__
&data);

487 

`493 <../../d4/deb/classTango_1_1Util.html#a27485b14ec5334576704e31b65e2d03c>`__ 
void
`set\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#a27485b14ec5334576704e31b65e2d03c>`__\ (unsigned
long thread\_nb) {poll\_pool\_size = thread\_nb;}

494 

`500 <../../d4/deb/classTango_1_1Util.html#af6aee977b3c8f5de4f135fca9b024ddf>`__ 
unsigned long
`get\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#af6aee977b3c8f5de4f135fca9b024ddf>`__\ ()
{return poll\_pool\_size;}

501 

`507 <../../d4/deb/classTango_1_1Util.html#ae1df5b54896147fc95d689efc2936cc4>`__ 
void
`set\_polling\_before\_9 <../../d4/deb/classTango_1_1Util.html#ae1df5b54896147fc95d689efc2936cc4>`__\ (bool
val) {polling\_bef\_9\_def=true;polling\_bef\_9=val;}

509 

`517 <../../d4/deb/classTango_1_1Util.html#a8b5d14831423f0f2dafab927fa4e64ed>`__ 
bool
`is\_svr\_starting <../../d4/deb/classTango_1_1Util.html#a8b5d14831423f0f2dafab927fa4e64ed>`__\ ()
{return svr\_starting;}

`523 <../../d4/deb/classTango_1_1Util.html#a7e5a56fe3a14633ffafc01c63698f45f>`__ 
bool
`is\_svr\_shutting\_down <../../d4/deb/classTango_1_1Util.html#a7e5a56fe3a14633ffafc01c63698f45f>`__\ ()
{return svr\_stopping;}

530  bool
`is\_device\_restarting <../../d4/deb/classTango_1_1Util.html#a5ed4c18bfe81f1983d9ddc542491ca65>`__\ (string
&d\_name);

532 

541  void
`connect\_db <../../d4/deb/classTango_1_1Util.html#aa44378b4c63d0c2d86060b364f6b5639>`__\ ();

542 

546  void
`reset\_filedatabase <../../d4/deb/classTango_1_1Util.html#a6e221145196c95c02be5474dcd9520c0>`__\ ();

547 

`553 <../../d4/deb/classTango_1_1Util.html#a7db09207aa90d9515115a296c057f789>`__ 
`Database <../../d6/dc5/classTango_1_1Database.html>`__
\*\ `get\_database <../../d4/deb/classTango_1_1Util.html#a7db09207aa90d9515115a296c057f789>`__\ ()
{return db;}

554 

561  void
`unregister\_server <../../d4/deb/classTango_1_1Util.html#a48cc2bfa8af581f5b56ff7b72de4c2ff>`__\ ();

563 

579  vector<DeviceImpl \*>
&\ `get\_device\_list\_by\_class <../../d4/deb/classTango_1_1Util.html#a4458c86fc6af2862f08d292912a6d430>`__\ (const
string &class\_name);

580 

594  vector<DeviceImpl \*>
&\ `get\_device\_list\_by\_class <../../d4/deb/classTango_1_1Util.html#a4458c86fc6af2862f08d292912a6d430>`__\ (const
char \*class\_name);

595 

606  `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*\ `get\_device\_by\_name <../../d4/deb/classTango_1_1Util.html#a6ff7a35d328ee87b5dca4a04ea8b12c8>`__\ (const
string &dev\_name);

607 

618  `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*\ `get\_device\_by\_name <../../d4/deb/classTango_1_1Util.html#a6ff7a35d328ee87b5dca4a04ea8b12c8>`__\ (const
char \*dev\_name);

619 

625  DServer
\*\ `get\_dserver\_device <../../d4/deb/classTango_1_1Util.html#a8d86b4bcf0c279aaadb9d476f9c261fd>`__\ ();

626 

636  vector<DeviceImpl \*>
`get\_device\_list <../../d4/deb/classTango_1_1Util.html#ae201024b8f84c08743097a43e2551540>`__\ (const
string &name);

638 

649  void
`server\_init <../../d4/deb/classTango_1_1Util.html#a3fddd272b3d6f6e3990a8d98ee64cb7d>`__\ (bool
with\_window = false);

650 

658  void
`server\_run <../../d4/deb/classTango_1_1Util.html#a6299b8c885918b5a0cbfe74d1563501b>`__\ ();

659 

666  void
`server\_cleanup <../../d4/deb/classTango_1_1Util.html#ad1ff436c06ef8b7cba2c96c09f6176ae>`__\ ();

667 

`681 <../../d4/deb/classTango_1_1Util.html#a578233d769fc2fff627930f9b38e7ecd>`__ 
void
`server\_set\_event\_loop <../../d4/deb/classTango_1_1Util.html#a578233d769fc2fff627930f9b38e7ecd>`__\ (bool
(\*f\_ptr)()) {ev\_loop\_func = f\_ptr;}

683 

684 

`690 <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__ 
static int
`\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__;

`695 <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__ 
TANGO\_IMP static bool
`\_UseDb <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__;

`702 <../../d4/deb/classTango_1_1Util.html#a92f38f300de79ece0538b691c806e4a6>`__ 
TANGO\_IMP static bool
`\_daemon <../../d4/deb/classTango_1_1Util.html#a92f38f300de79ece0538b691c806e4a6>`__;

`709 <../../d4/deb/classTango_1_1Util.html#aadfaa555e0b480fa2cb63e820f390e11>`__ 
TANGO\_IMP static long
`\_sleep\_between\_connect <../../d4/deb/classTango_1_1Util.html#aadfaa555e0b480fa2cb63e820f390e11>`__;

711 

713 

714  TANGO\_IMP static bool \_FileDb;

715 

717 

718 #ifdef \_TG\_WINDOWS\_

719 

727  HWND get\_console\_window();

728 

734  HWND get\_ds\_main\_window();

735 

741  CoutBuf \*get\_debug\_object();

742 

743  TANGO\_IMP static bool \_service;

749  string &get\_main\_window\_text() {return main\_win\_text;}

750 

757  void set\_main\_window\_text(string &txt) {main\_win\_text = txt;}

759 #endif

760 

761 protected:

771 
`Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__\ (int
argc,char \*argv[]);

772 #ifdef \_TG\_WINDOWS\_

773 

783 
`Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__\ (HINSTANCE
AppInst,int CmdShow);

784 #endif

785 

786 //

787 // The extension class

788 //

789 

790 private:

791 

792  class UtilExt

793  {

794  public:

795  UtilExt() {}

796 

797  ~UtilExt() {}

798  };

799 

800 

801 public:

803  void set\_interceptors(Interceptors \*in) {inter = in;}

804  Interceptors \*get\_interceptors() {return inter;}

805 

806  map <string,vector<string> > &get\_cmd\_line\_name\_list() {return
cmd\_line\_name\_list;}

807  void get\_cmd\_line\_name\_list(const string &,vector<string> &);

808  TangoMonitor &get\_heartbeat\_monitor() {return poll\_mon;}

809  PollThCmd &get\_heartbeat\_shared\_cmd() {return shared\_data;}

810  bool poll\_status() {return poll\_on;}

811  void poll\_status(bool status) {poll\_on = status;}

812 

813 //

814 // Some methods are duplicated here (with different names). It is
for compatibility reason

815 //

816 

817  void polling\_configure();

818  PollThread \*get\_polling\_thread\_object() {return heartbeat\_th;}

819  PollThread \*get\_heartbeat\_thread\_object() {return
heartbeat\_th;}

820  void clr\_poll\_th\_ptr() {heartbeat\_th = NULL;}

821  void clr\_heartbeat\_th\_ptr() {heartbeat\_th = NULL;}

822  int get\_polling\_thread\_id() {return heartbeat\_th\_id;}

823  int get\_heartbeat\_thread\_id() {return heartbeat\_th\_id;}

824  void stop\_heartbeat\_thread();

825  string &get\_svr\_port\_num() {return svr\_port\_num;}

826 

827  void create\_notifd\_event\_supplier();

828  void create\_zmq\_event\_supplier();

829 

830  void \*get\_py\_interp() {return py\_interp;}

831  void set\_py\_interp(void \*ptr) {py\_interp = ptr;}

832 

833  bool is\_py\_ds() {return py\_ds;}

834  void set\_py\_ds() {py\_ds=true;}

835 

836  bool is\_py\_dbg() {return py\_dbg;}

837  void set\_py\_dbg() {py\_dbg=true;}

838 

839  void set\_py\_lock\_creator(CreatePyLock \*py) {cr\_py\_lock = py;}

840  CreatePyLock \*get\_py\_lock\_creator() {return cr\_py\_lock;}

841 

842  DbServerCache \*get\_db\_cache() {return db\_cache;}

843  void unvalidate\_db\_cache() {if (db\_cache!=NULL){delete
db\_cache;db\_cache = NULL;}}

844 

845  void set\_svr\_starting(bool val) {svr\_starting = val;}

846  void set\_svr\_shutting\_down(bool val) {svr\_stopping = val;}

847 

848  vector<string> &get\_polled\_dyn\_attr\_names() {return
polled\_dyn\_attr\_names;}

849  vector<string> &get\_polled\_dyn\_cmd\_names() {return
polled\_dyn\_cmd\_names;}

850  vector<string> &get\_full\_polled\_att\_list() {return
polled\_att\_list;}

851  vector<string> &get\_full\_polled\_cmd\_list() {return
polled\_cmd\_list;}

852  string &get\_dyn\_att\_dev\_name() {return dyn\_att\_dev\_name;}

853  string &get\_dyn\_cmd\_dev\_name() {return dyn\_cmd\_dev\_name;}

854  vector<string> &get\_all\_dyn\_attr\_names() {return
all\_dyn\_attr;}

855 

856  void clean\_attr\_polled\_prop();

857  void clean\_cmd\_polled\_prop();

858  void clean\_dyn\_attr\_prop();

859 

860  int create\_poll\_thread(const char \*,bool,bool,int smallest\_upd
= -1);

861  void stop\_all\_polling\_threads();

862  vector<PollingThreadInfo \*> &get\_polling\_threads\_info() {return
poll\_ths;}

863  PollingThreadInfo \*get\_polling\_thread\_info\_by\_id(int);

864  int get\_polling\_thread\_id\_by\_name(const char \*);

865  void check\_pool\_conf(DServer \*,unsigned long);

866  int check\_dev\_poll(vector<string> &,vector<string> &,DeviceImpl
\*);

867  void split\_string(string &,char,vector<string> &);

868  void upd\_polling\_prop(vector<DevDbUpd> &,DServer \*);

869  int get\_th\_polled\_devs(string &,vector<string> &);

870  void get\_th\_polled\_devs(long,vector<string> &);

871  void build\_first\_pool\_conf(vector<string> &);

872  bool is\_dev\_already\_in\_pool\_conf(string
&,vector<string>&,int);

873  vector<string> &get\_poll\_pool\_conf() {return poll\_pool\_conf;}

874  int get\_dev\_entry\_in\_pool\_conf(string &);

875  void remove\_dev\_from\_polling\_map(string &dev\_name);

876  void remove\_polling\_thread\_info\_by\_id(int);

877 

878  bool is\_server\_event\_loop\_set() {if (ev\_loop\_func !=
NULL)return true;else return false;}

879  void set\_shutdown\_server(bool val) {shutdown\_server = val;}

880 

881  void shutdown\_ds();

882 

883  SubDevDiag &get\_sub\_dev\_diag() {return sub\_dev\_diag;}

884 

885  bool get\_endpoint\_specified() {return endpoint\_specified;}

886  void set\_endpoint\_specified(bool val) {endpoint\_specified =
val;}

887 

888  string &get\_specified\_ip() {return specified\_ip;}

889  void set\_specified\_ip(string &val) {specified\_ip = val;}

890 

891  DevLong get\_user\_pub\_hwm() {return user\_pub\_hwm;}

892 

893  void add\_restarting\_device(string &d\_name)
{restarting\_devices.push\_back(d\_name);}

894  void delete\_restarting\_device(string &d\_name);

895 

896  bool is\_wattr\_nan\_allowed() {return wattr\_nan\_allowed;}

897  void set\_wattr\_nan\_allowed(bool val) {wattr\_nan\_allowed=val;}

898 

899  RootAttRegistry &get\_root\_att\_reg() {return root\_att\_reg;}

900  void event\_name\_2\_event\_type(string
&,\ `EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
&);

901 

902  void validate\_cmd\_line\_classes();

903 

904  static void tango\_host\_from\_fqan(string &,string &);

905  static void tango\_host\_from\_fqan(string &,string &,int &);

906 

907  bool is\_polling\_bef\_9\_def() {return polling\_bef\_9\_def;}

908  bool get\_polling\_bef\_9() {return polling\_bef\_9;}

909 

910 private:

911  TANGO\_IMP static
`Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__
\*\_instance;

912  static bool \_constructed;

913 #ifdef \_TG\_WINDOWS\_

914  static bool \_win;

915  int argc;

916  char \*\*argv;

917  int nCmd;

918  CoutBuf \*pcb;

919  W32Win \*ds\_window;

920  string main\_win\_text;

921  bool go;

922  TangoMonitor mon;

923 

924  void build\_argc\_argv();

925  void install\_cons\_handler();

926 

927  class ORBWin32Loop: public omni\_thread

928  {

929 
`Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__
\*util;

930  public:

931 
ORBWin32Loop(\ `Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__
\*u):util(u) {}

932  virtual ~ORBWin32Loop() {}

933 

934  void \*run\_undetached(void \*);

935  void start() {start\_undetached();}

936  private:

937  void wait\_for\_go();

938  };

939  friend class ORBWin32Loop;

940  ORBWin32Loop \*loop\_th;

941 #endif

942 

943  CORBA::ORB\_var orb;

944  PortableServer::POA\_var \_poa;

945 

946  string ds\_instance\_name; // The instance name

947  string ds\_exec\_name; // The server exec. name

948  string ds\_name; // The server name

949 

950  string hostname; // The host name

951  string pid\_str; // The process PID (as string)

952  TangoSys\_Pid pid; // The process PID

953 

954  string version\_str; // Tango version

955  string server\_version; // Device server version

956 

957  string database\_file\_name;

958 

959 #ifndef TANGO\_HAS\_LOG4TANGO

960  string trace\_output;

961  TangoSys\_Cout cout\_tmp;

962  ofstream \*file\_stream;

963 #endif //TANGO\_HAS\_LOG4TANGO

964 

965  Database \*db; // The db proxy

966 

967  void effective\_job(int,char \*[]);

968  void create\_CORBA\_objects();

969  void misc\_init();

970  void init\_host\_name();

971  void server\_already\_running();

972  void print\_usage(char \*);

973  static void print\_err\_message(const char
\*,\ `Tango::MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__
type =
`Tango::STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__);

974  void print\_err\_message(const string
&mess,\ `Tango::MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__
type =
`Tango::STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__)

975  {

976  print\_err\_message(mess.c\_str(),type);

977  }

978  void check\_args(int, char \*[]);

979  void display\_help\_message();

980  DeviceImpl \*find\_device\_name\_core(string &);

981  void check\_orb\_endpoint(int,char \*\*);

982  void validate\_sort(vector<string> &);

983  void check\_end\_point\_specified(int,char \*\*);

984 

985  bool display\_help; // display help message flag

986  const vector<DeviceClass \*> \*cl\_list\_ptr; // Ptr to server
device class list

987 #ifdef HAS\_UNIQUE\_PTR

988  unique\_ptr<UtilExt> ext; // Class extension

989 #else

990  Util::UtilExt \*ext; // Class extension

991 #endif

992  vector<DeviceClass \*> cl\_list; // Full class list ptr

993 

994 //

995 // Ported from the extension class

996 //

997 

998  map<string,vector<string> > cmd\_line\_name\_list; // Command line
map <Class name, device name list>

999 

1000  PollThread \*heartbeat\_th; // The heartbeat thread object

1001  int heartbeat\_th\_id; // The heartbeat thread identifier

1002  PollThCmd shared\_data; // The shared buffer

1003  TangoMonitor poll\_mon; // The monitor

1004  bool poll\_on; // Polling on flag

1005 
`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
ser\_model; // The serialization model

1006  TangoMonitor only\_one; // Serialization monitor

1007  NotifdEventSupplier \*nd\_event\_supplier; // The notifd event
supplier object

1008 

1009  void \*py\_interp; // The Python interpreter

1010  bool py\_ds; // The Python DS flag

1011  CreatePyLock \*cr\_py\_lock; // The python lock creator pointer

1012  bool py\_dbg; // Badly written Python dbg flag

1013 

1014  DbServerCache \*db\_cache; // The db cache

1015  Interceptors \*inter; // The user interceptors

1016 

1017  bool svr\_starting; // Server is starting flag

1018  bool svr\_stopping; // Server is shutting down flag

1019 

1020  vector<string> polled\_dyn\_attr\_names; // Dynamic att. names
(used for polling clean-up)

1021  vector<string> polled\_dyn\_cmd\_names; // Dynamic cmd. names
(used for polling clean-up)

1022  vector<string> polled\_att\_list; // Full polled att list

1023  vector<string> polled\_cmd\_list; // Full polled cmd list

1024  vector<string> all\_dyn\_attr; // All dynamic attr name list

1025  string dyn\_att\_dev\_name; // Device name (use for dyn att
clean-up)

1026  string dyn\_cmd\_dev\_name; // Device name (use for dyn cmd
clean-up)

1027 

1028  unsigned long poll\_pool\_size; // Polling threads pool size

1029  vector<string> poll\_pool\_conf; // Polling threads pool conf.

1030  map<string,int> dev\_poll\_th\_map; // Link between device name
and polling thread id

1031  vector<PollingThreadInfo \*> poll\_ths; // Polling threads

1032  bool conf\_needs\_db\_upd; // Polling conf needs to be udated in
db

1033 

1034  bool (\*ev\_loop\_func)(void); // Ptr to user event loop

1035  bool shutdown\_server; // Flag to exit the manual event loop

1036 

1037  SubDevDiag sub\_dev\_diag; // Object to handle sub device
diagnostics

1038  bool \_dummy\_thread; // The main DS thread is not the process
main thread

1039 

1040  string svr\_port\_num; // Server port when using file as database

1041 

1042  ZmqEventSupplier \*zmq\_event\_supplier; // The zmq event supplier
object

1043  bool endpoint\_specified; // Endpoint specified on cmd line

1044  string specified\_ip; // IP address specified in the endpoint

1045  DevLong user\_pub\_hwm; // User defined pub HWM

1046 

1047  vector<string> restarting\_devices; // Restarting devices name

1048  bool wattr\_nan\_allowed; // NaN allowed when writing attribute

1049  RootAttRegistry root\_att\_reg; // Root attribute(s) registry

1050 

1051  bool polling\_bef\_9\_def; // Is polling algo requirement defined

1052  bool polling\_bef\_9; // use Tango < 9 polling algo. flag

1053 };

1054 

1055 //\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

1056 //

1057 // Some inline methods

1058 //

1059 //\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

1060 

1061 //-----------------------------------------------------------------------------

1062 //

1063 // method : Util::is\_device\_restarting()

1064 //

1065 // description : Return a boolean if the device with name given as
parameter

1066 // is actually executing a RestartDevice command

1067 //

1068 // args: - d\_name : - The device name

1069 //

1070 // Returns true if the devce is restarting. False otherwise

1071 //

1072 //-----------------------------------------------------------------------------

1073 

`1074 <../../d4/deb/classTango_1_1Util.html#a5ed4c18bfe81f1983d9ddc542491ca65>`__ inline
bool
`Util::is\_device\_restarting <../../d4/deb/classTango_1_1Util.html#a5ed4c18bfe81f1983d9ddc542491ca65>`__\ (string
&d\_name)

1075 {

1076  bool ret = false;

1077 

1078  if (restarting\_devices.empty() == false)

1079  {

1080  vector<string>::iterator pos;

1081  pos =
find(restarting\_devices.begin(),restarting\_devices.end(),d\_name);

1082  if (pos != restarting\_devices.end())

1083  ret = true;

1084  }

1085 

1086  return ret;

1087 }

1088 

1089 //-----------------------------------------------------------------------------

1090 //

1091 // method : Util::check\_orb\_endpoint()

1092 //

1093 // description :

1094 //

1095 // args: - argc :

1096 // - argv

1097 //

1098 //

1099 //-----------------------------------------------------------------------------

1100 

1101 inline void Util::check\_orb\_endpoint(int argc, char \*argv[])

1102 {

1103  long arg\_nb;

1104  for (arg\_nb = 2;arg\_nb < argc;arg\_nb++)

1105  {

1106  if (::strcmp(argv[arg\_nb],"-ORBendPoint") == 0)

1107  {

1108  arg\_nb++;

1109  string endpoint = argv[arg\_nb];

1110  string::size\_type pos;

1111  if ((pos = endpoint.rfind(':')) == string::npos)

1112  {

1113  cerr << "Strange ORB endPoint specification" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

1114  print\_usage(argv[0]);

1115  }

1116  svr\_port\_num = endpoint.substr(++pos);

1117  break;

1118  }

1119  }

1120  if (arg\_nb == argc)

1121  {

1122  cerr << "Missing ORB endPoint specification" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

1123  print\_usage(argv[0]);

1124  }

1125 }

1126 

1127 //-----------------------------------------------------------------------------

1128 //

1129 // method : Util::event\_name\_2\_event\_type()

1130 //

1131 // description :

1132 //

1133 // args: - event\_name :

1134 // - et

1135 //

1136 //

1137 //-----------------------------------------------------------------------------

1138 

1139 inline void Util::event\_name\_2\_event\_type(string
&event\_name,\ `EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
&et)

1140 {

1141  if (event\_name == "change")

1142  et =
`CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__;

1143  else if (event\_name == "quality")

1144  et =
`QUALITY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__;

1145  else if (event\_name == "periodic")

1146  et =
`PERIODIC\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__;

1147  else if (event\_name == "archive")

1148  et =
`ARCHIVE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__;

1149  else if (event\_name == "user\_event")

1150  et =
`USER\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__;

1151  else if (event\_name == "attr\_conf" \|\| event\_name ==
"attr\_conf\_5")

1152  et =
`ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__;

1153  else

1154  et =
`DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__;

1155 }

1156 

1157 //+-------------------------------------------------------------------------

1158 //

1159 // function : return\_empty\_any

1160 //

1161 // description : Return from a command when the command does not
have

1162 // any output argument

1163 //

1164 // arguments : in : - cmd : The command name

1165 //

1166 //--------------------------------------------------------------------------

1167 

`1182 <../../de/ddf/namespaceTango.html#a3b3bd64ad7f36f411ad17050d314a460>`__ inline
CORBA::Any
\*\ `return\_empty\_any <../../de/ddf/namespaceTango.html#a3b3bd64ad7f36f411ad17050d314a460>`__\ (const
char \*cmd)

1183 {

1184 

1185  CORBA::Any \*out\_any = NULL;

1186  try

1187  {

1188  out\_any = new CORBA::Any();

1189  }

1190  catch (bad\_alloc &)

1191  {

1192  TangoSys\_MemStream o;

1193 

1194  o << cmd << "::execute";

1195 
`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ ((const
char
\*)\ `API\_MemoryAllocation <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__,

1196  (const char \*)"Can't allocate memory in server",

1197  o.str());

1198  }

1199  return(out\_any);

1200 

1201 }

1202 

`1203 <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__ inline
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__
\*\ `DeviceImpl::get\_db\_device <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__\ ()

1204 {

1205  if
(`Tango::Util::\_UseDb <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__
== false)

1206  {

1207  TangoSys\_OMemStream desc\_mess;

1208  desc\_mess << "Method not available for device ";

1209  desc\_mess <<
`device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#af2649629d515c38fc5a19c44f07e2f40>`__;

1210  desc\_mess << " which is a non database device";

1211 

1212 
`Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ ((const
char
\*)\ `API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__,

1213  desc\_mess.str(),

1214  (const char \*)"DeviceImpl::get\_db\_device");

1215  }

1216 

1217  return
`db\_dev <../../d3/d62/classTango_1_1DeviceImpl.html#ae063e45a3778e7241d74f7270461cbb4>`__;

1218 }

1219 

1220 void
`clear\_att\_dim <../../de/ddf/namespaceTango.html#adb1cc901df596cd8aea1e5d51f0cf6ac>`__\ (Tango::AttributeValue\_3
&att\_val);

1221 void
`clear\_att\_dim <../../de/ddf/namespaceTango.html#adb1cc901df596cd8aea1e5d51f0cf6ac>`__\ (Tango::AttributeValue\_4
&att\_val);

1222 void
`clear\_att\_dim <../../de/ddf/namespaceTango.html#adb1cc901df596cd8aea1e5d51f0cf6ac>`__\ (Tango::AttributeValue\_5
&att\_val);

1223 

1224 //-----------------------------------------------------------------------

1225 //

1226 // Polling threads pool related class/struct

1227 //

1228 //-----------------------------------------------------------------------

1229 

`1230 <../../dc/d66/structTango_1_1PollingThreadInfo.html>`__ struct
`PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html>`__

1231 {

`1232 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a0ed194258705e10b4b4b8b132e4687dd>`__ 
int
`thread\_id <../../dc/d66/structTango_1_1PollingThreadInfo.html#a0ed194258705e10b4b4b8b132e4687dd>`__;
// The polling thread identifier

`1233 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a32ce4856c38b4bbc52564f24e61c7321>`__ 
PollThread
\*\ `poll\_th <../../dc/d66/structTango_1_1PollingThreadInfo.html#a32ce4856c38b4bbc52564f24e61c7321>`__;
// The polling thread object

`1234 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a34ac72f11342fa6246db3ff04c8dc032>`__ 
PollThCmd
`shared\_data <../../dc/d66/structTango_1_1PollingThreadInfo.html#a34ac72f11342fa6246db3ff04c8dc032>`__;
// The shared buffer

`1235 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a37f783d36e383cf347ccacab3387aa51>`__ 
TangoMonitor
`poll\_mon <../../dc/d66/structTango_1_1PollingThreadInfo.html#a37f783d36e383cf347ccacab3387aa51>`__;
// The monitor

`1236 <../../dc/d66/structTango_1_1PollingThreadInfo.html#aba7953103780bcc5f3e93ad265b61ea1>`__ 
vector<string>
`polled\_devices <../../dc/d66/structTango_1_1PollingThreadInfo.html#aba7953103780bcc5f3e93ad265b61ea1>`__;
// Polled devices for this thread

`1237 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a263e8adedff07f0b831780e349a9a7d0>`__ 
int
`nb\_polled\_objects <../../dc/d66/structTango_1_1PollingThreadInfo.html#a263e8adedff07f0b831780e349a9a7d0>`__;
// Polled objects number in this thread

`1238 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a04264b5d754e7559ad8ad67fff69a110>`__ 
int
`smallest\_upd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a04264b5d754e7559ad8ad67fff69a110>`__;
// Smallest thread update period

`1239 <../../dc/d66/structTango_1_1PollingThreadInfo.html#a8b8d1a40cf642511070d7fb097f74a28>`__ 
vector<DevVarLongStringArray \*>
`v\_poll\_cmd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a8b8d1a40cf642511070d7fb097f74a28>`__;
// Command(s) to send

1240 

`1241 <../../dc/d66/structTango_1_1PollingThreadInfo.html#af876c42e90deca5c9d47fe7987366c2e>`__ 
`PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html#af876c42e90deca5c9d47fe7987366c2e>`__\ ():thread\_id(0),poll\_th(NULL),poll\_mon("Polling\_thread\_mon"),nb\_polled\_objects(0),smallest\_upd(0)

1242  {shared\_data.cmd\_pending = false;shared\_data.trigger=false;}

1243 };

1244 

`1245 <../../d5/db2/structTango_1_1DevDbUpd.html>`__ struct
`DevDbUpd <../../d5/db2/structTango_1_1DevDbUpd.html>`__

1246 {

`1247 <../../d5/db2/structTango_1_1DevDbUpd.html#a3665ce564deae9a35f51c41d7038e529>`__ 
unsigned long
`class\_ind <../../d5/db2/structTango_1_1DevDbUpd.html#a3665ce564deae9a35f51c41d7038e529>`__;

`1248 <../../d5/db2/structTango_1_1DevDbUpd.html#a38a8627129626359064789f8f600b579>`__ 
unsigned long
`dev\_ind <../../d5/db2/structTango_1_1DevDbUpd.html#a38a8627129626359064789f8f600b579>`__;

`1249 <../../d5/db2/structTango_1_1DevDbUpd.html#a937cf0da3cefa83ad3ae61f8a9dcad1f>`__ 
int
`mod\_prop <../../d5/db2/structTango_1_1DevDbUpd.html#a937cf0da3cefa83ad3ae61f8a9dcad1f>`__;

1250 };

1251 

1252 //------------------------------------------------------------------------

1253 //

1254 // Python device server classes

1255 //

1256 //-----------------------------------------------------------------------

1257 

1258 

1259 //

1260 // For thread creation interceptor (Python device servers)

1261 //

1262 

1263 void
`create\_PyPerThData <../../de/ddf/namespaceTango.html#a43fad155477a5f86d88574f1d8e2ac21>`__\ (omni::omniInterceptors::createThread\_T::info\_T
&);

1264 

1265 

`1266 <../../d5/d7d/classTango_1_1PyData.html>`__ class
`PyData <../../d5/d7d/classTango_1_1PyData.html>`__: public
omni\_thread::value\_t

1267 {

1268 public:

`1269 <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__ 
`PyData <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__\ ():`rec\_state <../../d5/d7d/classTango_1_1PyData.html#a5452838e669ec839234459d7db57bff3>`__\ (false),`rec\_status <../../d5/d7d/classTango_1_1PyData.html#a047f79a4c3ba0ae4b6043026d31c2ca8>`__\ (false)

1270  {

1271 
`device\_name <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__
= "No associated device name!";

1272 

1273  try

1274  {

1275  `Util <../../d4/deb/classTango_1_1Util.html>`__ \*tg =
`Util::instance <../../d4/deb/classTango_1_1Util.html#a577119e32b43b1344d6f9ef37f587472>`__\ (false);

1276  `CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html>`__
\*Creator = tg->get\_py\_lock\_creator();

1277 
`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__
=
Creator->\ `create <../../d9/dd7/classTango_1_1CreatePyLock.html#a1dab7fbb63d9d24477ea78f7f1951eb3>`__\ ();

1278  }

1279  catch(Tango::DevFailed &)
{`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__\ =NULL;}

1280  }

1281 

`1282 <../../d5/d7d/classTango_1_1PyData.html#a9f0f9dd95a4133c2d94f7dd07013a1e1>`__ 
`~PyData <../../d5/d7d/classTango_1_1PyData.html#a9f0f9dd95a4133c2d94f7dd07013a1e1>`__\ ()

1283  {

1284  if
(`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__
!= NULL)

1285  delete
`PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__;

1286  }

1287 

`1288 <../../d5/d7d/classTango_1_1PyData.html#ab43581a61e37c52df1c464e262d280d2>`__ 
DevVarCharArray
`PerTh\_dvca <../../d5/d7d/classTango_1_1PyData.html#ab43581a61e37c52df1c464e262d280d2>`__;

`1289 <../../d5/d7d/classTango_1_1PyData.html#a6ee5be64c90d940fc63c9bd8e191ca74>`__ 
DevVarShortArray
`PerTh\_dvsha <../../d5/d7d/classTango_1_1PyData.html#a6ee5be64c90d940fc63c9bd8e191ca74>`__;

`1290 <../../d5/d7d/classTango_1_1PyData.html#a0e12526319c05fa6aaf445484b536890>`__ 
DevVarLongArray
`PerTh\_dvla <../../d5/d7d/classTango_1_1PyData.html#a0e12526319c05fa6aaf445484b536890>`__;

`1291 <../../d5/d7d/classTango_1_1PyData.html#a324a0e96fabfe4c1cf6d99ef3c5c1e75>`__ 
DevVarFloatArray
`PerTh\_dvfa <../../d5/d7d/classTango_1_1PyData.html#a324a0e96fabfe4c1cf6d99ef3c5c1e75>`__;

`1292 <../../d5/d7d/classTango_1_1PyData.html#a17b084256b71d8a61f3e95cb080d33e6>`__ 
DevVarDoubleArray
`PerTh\_dvda <../../d5/d7d/classTango_1_1PyData.html#a17b084256b71d8a61f3e95cb080d33e6>`__;

`1293 <../../d5/d7d/classTango_1_1PyData.html#ac92beb98b5f4805a421fbc2e793faad6>`__ 
DevVarUShortArray
`PerTh\_dvusa <../../d5/d7d/classTango_1_1PyData.html#ac92beb98b5f4805a421fbc2e793faad6>`__;

`1294 <../../d5/d7d/classTango_1_1PyData.html#a44206072acd001ca4070a193d23f1b9e>`__ 
DevVarULongArray
`PerTh\_dvula <../../d5/d7d/classTango_1_1PyData.html#a44206072acd001ca4070a193d23f1b9e>`__;

`1295 <../../d5/d7d/classTango_1_1PyData.html#aa7f30e052ddcac7cb02cd6cd2548b4d3>`__ 
DevVarStringArray
`PerTh\_dvsa <../../d5/d7d/classTango_1_1PyData.html#aa7f30e052ddcac7cb02cd6cd2548b4d3>`__;

`1296 <../../d5/d7d/classTango_1_1PyData.html#a8f2867611bde6c2bac6b4101f5fde7c7>`__ 
DevVarLongStringArray
`PerTh\_dvlsa <../../d5/d7d/classTango_1_1PyData.html#a8f2867611bde6c2bac6b4101f5fde7c7>`__;

`1297 <../../d5/d7d/classTango_1_1PyData.html#ad9842dd552c41ab0ffc28b4e95e93d55>`__ 
DevVarDoubleStringArray
`PerTh\_dvdsa <../../d5/d7d/classTango_1_1PyData.html#ad9842dd552c41ab0ffc28b4e95e93d55>`__;

`1298 <../../d5/d7d/classTango_1_1PyData.html#a703a851cbc4e192a9622527f068f32aa>`__ 
DevVarLong64Array
`PerTh\_dvl64a <../../d5/d7d/classTango_1_1PyData.html#a703a851cbc4e192a9622527f068f32aa>`__;

`1299 <../../d5/d7d/classTango_1_1PyData.html#a78aecea8ee48e0dee4995ef5c7a6abff>`__ 
DevVarULong64Array
`PerTh\_dvul64a <../../d5/d7d/classTango_1_1PyData.html#a78aecea8ee48e0dee4995ef5c7a6abff>`__;

`1300 <../../d5/d7d/classTango_1_1PyData.html#a98561b5e9c727034d4111e822172b4d8>`__ 
DevVarEncodedArray
`PerTh\_dvea <../../d5/d7d/classTango_1_1PyData.html#a98561b5e9c727034d4111e822172b4d8>`__;

1301 

`1302 <../../d5/d7d/classTango_1_1PyData.html#a299e537d89784a8f94fd0bedcabf1a98>`__ 
string
`PerTh\_string <../../d5/d7d/classTango_1_1PyData.html#a299e537d89784a8f94fd0bedcabf1a98>`__;

`1303 <../../d5/d7d/classTango_1_1PyData.html#a2032805b8c84d1bc82263b5877673a42>`__ 
DevFailed
`PerTh\_df <../../d5/d7d/classTango_1_1PyData.html#a2032805b8c84d1bc82263b5877673a42>`__;

`1304 <../../d5/d7d/classTango_1_1PyData.html#a0827b0a384ed37aa2cdadd9f088ddeaa>`__ 
vector<string>
`PerTh\_vec\_str <../../d5/d7d/classTango_1_1PyData.html#a0827b0a384ed37aa2cdadd9f088ddeaa>`__;

`1305 <../../d5/d7d/classTango_1_1PyData.html#aa2c3319a646452bf32bf337db2a39705>`__ 
vector<double>
`PerTh\_vec\_db <../../d5/d7d/classTango_1_1PyData.html#aa2c3319a646452bf32bf337db2a39705>`__;

`1306 <../../d5/d7d/classTango_1_1PyData.html#aa6fdaf75321c1c9b3a819c732046ab91>`__ 
DevErrorList
`PerTh\_del <../../d5/d7d/classTango_1_1PyData.html#aa6fdaf75321c1c9b3a819c732046ab91>`__;

1307 

`1308 <../../d5/d7d/classTango_1_1PyData.html#a5452838e669ec839234459d7db57bff3>`__ 
bool
`rec\_state <../../d5/d7d/classTango_1_1PyData.html#a5452838e669ec839234459d7db57bff3>`__;

`1309 <../../d5/d7d/classTango_1_1PyData.html#a047f79a4c3ba0ae4b6043026d31c2ca8>`__ 
bool
`rec\_status <../../d5/d7d/classTango_1_1PyData.html#a047f79a4c3ba0ae4b6043026d31c2ca8>`__;

1310 

1311  // name of the associated device to a thread

1312  // used to sub device referencing

`1313 <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__ 
string
`device\_name <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__;

1314 

`1315 <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__ 
`PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__
\*\ `PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__;

1316 };

1317 

1318 

`1319 <../../de/dbe/classTango_1_1AutoPyLock.html>`__ class
`AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html>`__

1320 {

1321 public:

1322 
`AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html#a00ec70eee990cfd77c37f70a57787bac>`__\ ();

1323 
`~AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html#a9a890e8f67795bf6e5678b80977160bc>`__\ ();

1324 };

1325 

1326 long
`\_convert\_tango\_lib\_release <../../de/ddf/namespaceTango.html#ad7ae390b6e548a26ff1b5cf3075ff577>`__\ ();

1327 

1328 } // End of Tango namespace

1329 

1330 #endif /\* UTILS \*/

`Tango::Util::trigger\_cmd\_polling <../../d4/deb/classTango_1_1Util.html#aa5f6adfd5e1b7f03fdbd7eadeffb3fb7>`__

void trigger\_cmd\_polling(DeviceImpl \*dev, const string &name)

Trigger polling for polled command.

`Tango::Util::get\_device\_by\_name <../../d4/deb/classTango_1_1Util.html#a6ff7a35d328ee87b5dca4a04ea8b12c8>`__

DeviceImpl \* get\_device\_by\_name(const string &dev\_name)

Get a device reference from its name.

`Tango::CreatePyLock::CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html#a6ed4dcb11ebec0270281b896e9efe2f2>`__

CreatePyLock()

**Definition:** utils.h:109

`Tango::Util::init <../../d4/deb/classTango_1_1Util.html#a79b69d3b0376e45516410fe35a7c499c>`__

static Util \* init(int argc, char \*argv[])

Create and get the singleton object reference.

`Tango::PyData::PerTh\_dvea <../../d5/d7d/classTango_1_1PyData.html#a98561b5e9c727034d4111e822172b4d8>`__

DevVarEncodedArray PerTh\_dvea

**Definition:** utils.h:1300

`Tango::Util <../../d4/deb/classTango_1_1Util.html>`__

This class is a used to store TANGO device server process data and to
provide the user with a set of ...

**Definition:** utils.h:153

`Tango::PyData::PerTh\_dvda <../../d5/d7d/classTango_1_1PyData.html#a17b084256b71d8a61f3e95cb080d33e6>`__

DevVarDoubleArray PerTh\_dvda

**Definition:** utils.h:1292

`Tango::PyData::PerTh\_dvdsa <../../d5/d7d/classTango_1_1PyData.html#ad9842dd552c41ab0ffc28b4e95e93d55>`__

DevVarDoubleStringArray PerTh\_dvdsa

**Definition:** utils.h:1297

`Tango::PyData::device\_name <../../d5/d7d/classTango_1_1PyData.html#ac771fa07a83093d3adffd83a69394481>`__

string device\_name

**Definition:** utils.h:1313

`Tango::PyData::~PyData <../../d5/d7d/classTango_1_1PyData.html#a9f0f9dd95a4133c2d94f7dd07013a1e1>`__

~PyData()

**Definition:** utils.h:1282

`Tango::Util::\_daemon <../../d4/deb/classTango_1_1Util.html#a92f38f300de79ece0538b691c806e4a6>`__

static TANGO\_IMP bool \_daemon

A daemon process flag.

**Definition:** utils.h:702

`Tango::Interceptors::~Interceptors <../../d6/d62/classTango_1_1Interceptors.html#aa6e716d549719f06e696ddfb3d596091>`__

virtual ~Interceptors()

**Definition:** utils.h:119

`Tango::Util::~Util <../../d4/deb/classTango_1_1Util.html#a9f4928ff121e0c7e25c23457fcdde12a>`__

~Util()

The class destructor.

`Tango::Util::get\_host\_name <../../d4/deb/classTango_1_1Util.html#a54e78ffcf1f76cd8d8d03022921ea0f3>`__

string & get\_host\_name()

Get the host name where the device server process is running.

**Definition:** utils.h:314

`Tango::Util::get\_zmq\_event\_supplier <../../d4/deb/classTango_1_1Util.html#adef106a678ba16179069e1f5b0b14de2>`__

ZmqEventSupplier \* get\_zmq\_event\_supplier()

Get a reference to the ZMQ TANGO EventSupplier object.

**Definition:** utils.h:408

`Tango::Util::reset\_filedatabase <../../d4/deb/classTango_1_1Util.html#a6e221145196c95c02be5474dcd9520c0>`__

void reset\_filedatabase()

Reread the file database.

`Tango::Util::get\_database <../../d4/deb/classTango_1_1Util.html#a7db09207aa90d9515115a296c057f789>`__

Database \* get\_database()

Get a reference to the TANGO database object.

**Definition:** utils.h:553

`Tango::Database <../../d6/dc5/classTango_1_1Database.html>`__

A high level object which contains the link to the database.

**Definition:** dbapi.h:53

`Tango::PyData::PerTh\_vec\_db <../../d5/d7d/classTango_1_1PyData.html#aa2c3319a646452bf32bf337db2a39705>`__

vector< double > PerTh\_vec\_db

**Definition:** utils.h:1305

`Tango::ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__

Miscellaneous utility methods usefull in a Tango client.

**Definition:** devapi.h:55

`Tango::Util::get\_orb <../../d4/deb/classTango_1_1Util.html#ad439b7b797d20280db7558d3e0ca97b2>`__

CORBA::ORB\_ptr get\_orb()

Get a reference to the CORBA ORB.

**Definition:** utils.h:222

`Tango::AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__

This class is a used to pass an attribute value history when the user
directly fills the attribute po...

**Definition:** pollext.h:722

`Tango::PollingThreadInfo::thread\_id <../../dc/d66/structTango_1_1PollingThreadInfo.html#a0ed194258705e10b4b4b8b132e4687dd>`__

int thread\_id

**Definition:** utils.h:1232

`Tango::Util::server\_set\_event\_loop <../../d4/deb/classTango_1_1Util.html#a578233d769fc2fff627930f9b38e7ecd>`__

void server\_set\_event\_loop(bool(\*f\_ptr)())

Set the server event loop.

**Definition:** utils.h:681

`Tango::ARCHIVE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__

Archive event.

**Definition:** tango\_const.h:1093

`Tango::PyLock::~PyLock <../../d4/d9f/classTango_1_1PyLock.html#afd0b51426d645c9c6c08e2fedf324908>`__

virtual ~PyLock()

**Definition:** utils.h:100

`Tango::PyLock::Release <../../d4/d9f/classTango_1_1PyLock.html#a1eab5bc8ab2ae9ca1fe7deb49e7a7682>`__

virtual void Release()

**Definition:** utils.h:103

`Tango::Util::get\_version\_str <../../d4/deb/classTango_1_1Util.html#a1f604cdabca2b7efd2a54287a04d567d>`__

string & get\_version\_str()

Get the IDL TANGO version.

**Definition:** utils.h:343

`Tango::Util::server\_init <../../d4/deb/classTango_1_1Util.html#a3fddd272b3d6f6e3990a8d98ee64cb7d>`__

void server\_init(bool with\_window=false)

Initialise all the device server pattern(s) embedded in a device server
process.

`Tango::PyData::PerTh\_df <../../d5/d7d/classTango_1_1PyData.html#a2032805b8c84d1bc82263b5877673a42>`__

DevFailed PerTh\_df

**Definition:** utils.h:1303

`Tango::DevDbUpd::dev\_ind <../../d5/db2/structTango_1_1DevDbUpd.html#a38a8627129626359064789f8f600b579>`__

unsigned long dev\_ind

**Definition:** utils.h:1248

`Tango::DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__

A high level object for a device interface to the database.

**Definition:** dbapi.h:52

`Tango::Util::set\_polling\_before\_9 <../../d4/deb/classTango_1_1Util.html#ae1df5b54896147fc95d689efc2936cc4>`__

void set\_polling\_before\_9(bool val)

Set the polling thread algorithm to the algorithum used before Tango 9.

**Definition:** utils.h:507

`Tango::PyData::PerTh\_vec\_str <../../d5/d7d/classTango_1_1PyData.html#a0827b0a384ed37aa2cdadd9f088ddeaa>`__

vector< string > PerTh\_vec\_str

**Definition:** utils.h:1304

`Tango::DevDbUpd <../../d5/db2/structTango_1_1DevDbUpd.html>`__

**Definition:** utils.h:1245

`Tango::PyData::PerTh\_del <../../d5/d7d/classTango_1_1PyData.html#aa6fdaf75321c1c9b3a819c732046ab91>`__

DevErrorList PerTh\_del

**Definition:** utils.h:1306

`Tango::SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__

SerialModel

**Definition:** tango\_const.h:964

`Tango::Util::get\_poa <../../d4/deb/classTango_1_1Util.html#a9c2ea6e24a2e83cd09a1dbdc7218bbee>`__

PortableServer::POA\_ptr get\_poa()

Get a reference to the CORBA Portable Object Adapter (POA)

**Definition:** utils.h:233

`Tango::\_convert\_tango\_lib\_release <../../de/ddf/namespaceTango.html#ad7ae390b6e548a26ff1b5cf3075ff577>`__

long \_convert\_tango\_lib\_release()

`std::endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__

log4tango::LoggerStream & endl(log4tango::LoggerStream &ls)

**Definition:** LoggerStream.hh:180

`Tango::Util::connect\_db <../../d4/deb/classTango_1_1Util.html#aa44378b4c63d0c2d86060b364f6b5639>`__

void connect\_db()

Connect the process to the TANGO database.

`Tango::Util::get\_ds\_exec\_name <../../d4/deb/classTango_1_1Util.html#a23221e64a028a7ddd7a03b9064322ddd>`__

string & get\_ds\_exec\_name()

Get the device server executable name.

**Definition:** utils.h:298

`Tango::PollingThreadInfo::shared\_data <../../dc/d66/structTango_1_1PollingThreadInfo.html#a34ac72f11342fa6246db3ff04c8dc032>`__

PollThCmd shared\_data

**Definition:** utils.h:1234

`Tango::CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__

Change event.

**Definition:** tango\_const.h:1090

`Tango::Util::get\_serial\_model <../../d4/deb/classTango_1_1Util.html#ab045a913f25a49e2bb2a1b1895324b87>`__

SerialModel get\_serial\_model()

Get the serialization model.

**Definition:** utils.h:394

`Tango::CreatePyLock::create <../../d9/dd7/classTango_1_1CreatePyLock.html#a1dab7fbb63d9d24477ea78f7f1951eb3>`__

virtual PyLock \* create()

**Definition:** utils.h:112

`Tango::USER\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__

User event.

**Definition:** tango\_const.h:1094

`Tango::EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__

EventType

Possible event type.

**Definition:** tango\_const.h:1089

`Tango::PyLock <../../d4/d9f/classTango_1_1PyLock.html>`__

**Definition:** utils.h:96

`Tango::Util::get\_pid <../../d4/deb/classTango_1_1Util.html#aff871862b632defb0006e95404b3089a>`__

TangoSys\_Pid get\_pid()

Get the device server process identifier.

**Definition:** utils.h:328

`Tango::PollingThreadInfo::smallest\_upd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a04264b5d754e7559ad8ad67fff69a110>`__

int smallest\_upd

**Definition:** utils.h:1238

`Tango::DevDbUpd::mod\_prop <../../d5/db2/structTango_1_1DevDbUpd.html#a937cf0da3cefa83ad3ae61f8a9dcad1f>`__

int mod\_prop

**Definition:** utils.h:1249

`Tango::PyData::PerTh\_dvca <../../d5/d7d/classTango_1_1PyData.html#ab43581a61e37c52df1c464e262d280d2>`__

DevVarCharArray PerTh\_dvca

**Definition:** utils.h:1288

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::AutoPyLock::~AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html#a9a890e8f67795bf6e5678b80977160bc>`__

~AutoPyLock()

`Tango::Util::get\_notifd\_event\_supplier <../../d4/deb/classTango_1_1Util.html#ae8106bcba73bdaf045057e1dc16b0637>`__

NotifdEventSupplier \* get\_notifd\_event\_supplier()

Get a reference to the notifd TANGO EventSupplier object.

**Definition:** utils.h:401

`Tango::PyLock::PyLock <../../d4/d9f/classTango_1_1PyLock.html#a1afe28ba14cf56f031c9960db681f9a3>`__

PyLock()

**Definition:** utils.h:99

`Tango::Util::unregister\_server <../../d4/deb/classTango_1_1Util.html#a48cc2bfa8af581f5b56ff7b72de4c2ff>`__

void unregister\_server()

Unregister a device server process from the TANGO database.

`Tango::PyData::PerTh\_dvfa <../../d5/d7d/classTango_1_1PyData.html#a324a0e96fabfe4c1cf6d99ef3c5c1e75>`__

DevVarFloatArray PerTh\_dvfa

**Definition:** utils.h:1291

`Tango::AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html>`__

**Definition:** utils.h:1319

`Tango::PollingThreadInfo::polled\_devices <../../dc/d66/structTango_1_1PollingThreadInfo.html#aba7953103780bcc5f3e93ad265b61ea1>`__

vector< string > polled\_devices

**Definition:** utils.h:1236

`Tango::Util::get\_device\_list\_by\_class <../../d4/deb/classTango_1_1Util.html#a4458c86fc6af2862f08d292912a6d430>`__

vector< DeviceImpl \* > & get\_device\_list\_by\_class(const string
&class\_name)

Get the list of device references for a given TANGO class.

`Tango::DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__

Data ready event.

**Definition:** tango\_const.h:1096

`Tango::Util::get\_pid\_str <../../d4/deb/classTango_1_1Util.html#aff3a13d613a5c362c4c32e3946081a8f>`__

string & get\_pid\_str()

Get the device server process identifier as a String.

**Definition:** utils.h:321

`Tango::Util::set\_ds\_event\_buffer\_hwm <../../d4/deb/classTango_1_1Util.html#ae085bbb2bd407369c62a126971f12f7d>`__

void set\_ds\_event\_buffer\_hwm(DevLong val)

Set device server process event buffer high water mark (HWM)

**Definition:** utils.h:415

`Tango::Util::set\_server\_version <../../d4/deb/classTango_1_1Util.html#abb2c6dbbb85e9c0d73c7304dec83b8a2>`__

void set\_server\_version(const char \*vers)

Set the device server version.

**Definition:** utils.h:357

`Tango::Interceptors::delete\_thread <../../d6/d62/classTango_1_1Interceptors.html#a3a874b0abbff6982eff3d335e58a9569>`__

virtual void delete\_thread()

**Definition:** utils.h:122

`Tango::PollingThreadInfo::PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html#af876c42e90deca5c9d47fe7987366c2e>`__

PollingThreadInfo()

**Definition:** utils.h:1241

`Tango::DeviceImpl::device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#af2649629d515c38fc5a19c44f07e2f40>`__

string device\_name

The device name.

**Definition:** device.h:3256

`Tango::ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__

Attribute configuration change event.

**Definition:** tango\_const.h:1095

`Tango::Util::set\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#a27485b14ec5334576704e31b65e2d03c>`__

void set\_polling\_threads\_pool\_size(unsigned long thread\_nb)

Set the polling threads pool size.

**Definition:** utils.h:493

`Tango::PollingThreadInfo::v\_poll\_cmd <../../dc/d66/structTango_1_1PollingThreadInfo.html#a8b8d1a40cf642511070d7fb097f74a28>`__

vector< DevVarLongStringArray \* > v\_poll\_cmd

**Definition:** utils.h:1239

`Tango::Util::\_sleep\_between\_connect <../../d4/deb/classTango_1_1Util.html#aadfaa555e0b480fa2cb63e820f390e11>`__

static TANGO\_IMP long \_sleep\_between\_connect

The loop sleeping time in case of the \_daemon flag set to true.

**Definition:** utils.h:709

`Tango::PyData::PyData <../../d5/d7d/classTango_1_1PyData.html#a98da570943af3fb4d9386850bb0ebc4c>`__

PyData()

**Definition:** utils.h:1269

`Tango::Interceptors::create\_thread <../../d6/d62/classTango_1_1Interceptors.html#ae04addadc7821a6dd88dc6f2661a0c19>`__

virtual void create\_thread()

**Definition:** utils.h:121

`Tango::PyData::PerTh\_dvl64a <../../d5/d7d/classTango_1_1PyData.html#a703a851cbc4e192a9622527f068f32aa>`__

DevVarLong64Array PerTh\_dvl64a

**Definition:** utils.h:1298

`Tango::CreatePyLock::~CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html#aaf58411a22d5d3866af917fe433a1cff>`__

virtual ~CreatePyLock()

**Definition:** utils.h:110

`Tango::Util::\_UseDb <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__

static TANGO\_IMP bool \_UseDb

The database use flag (Use with extreme care).

**Definition:** utils.h:695

`Tango::Util::is\_device\_restarting <../../d4/deb/classTango_1_1Util.html#a5ed4c18bfe81f1983d9ddc542491ca65>`__

bool is\_device\_restarting(string &d\_name)

Check if the device is actually restarted by the device server process
admin device with its DevResta...

**Definition:** utils.h:1074

`Tango::PyData::PerTh\_dvusa <../../d5/d7d/classTango_1_1PyData.html#ac92beb98b5f4805a421fbc2e793faad6>`__

DevVarUShortArray PerTh\_dvusa

**Definition:** utils.h:1293

`Tango::PyData::PerTh\_dvlsa <../../d5/d7d/classTango_1_1PyData.html#a8f2867611bde6c2bac6b4101f5fde7c7>`__

DevVarLongStringArray PerTh\_dvlsa

**Definition:** utils.h:1296

`Tango::PyData::rec\_state <../../d5/d7d/classTango_1_1PyData.html#a5452838e669ec839234459d7db57bff3>`__

bool rec\_state

**Definition:** utils.h:1308

`Tango::DevDbUpd::class\_ind <../../d5/db2/structTango_1_1DevDbUpd.html#a3665ce564deae9a35f51c41d7038e529>`__

unsigned long class\_ind

**Definition:** utils.h:1247

`Tango::Util::\_tracelevel <../../d4/deb/classTango_1_1Util.html#ac618c4a4d49ce20ae605ecded0ffe61c>`__

static int \_tracelevel

The process trace level.

**Definition:** utils.h:690

`Tango::PyLock::Get <../../d4/d9f/classTango_1_1PyLock.html#a0c766fd01a1e36673db89e712eb14727>`__

virtual void Get()

**Definition:** utils.h:102

`Tango::PyData::PerTh\_dvsa <../../d5/d7d/classTango_1_1PyData.html#aa7f30e052ddcac7cb02cd6cd2548b4d3>`__

DevVarStringArray PerTh\_dvsa

**Definition:** utils.h:1295

`Tango::PyData::PerTh\_string <../../d5/d7d/classTango_1_1PyData.html#a299e537d89784a8f94fd0bedcabf1a98>`__

string PerTh\_string

**Definition:** utils.h:1302

`Tango::Util::set\_serial\_model <../../d4/deb/classTango_1_1Util.html#a84851a5fba97e3b553e5a567446f59c0>`__

void set\_serial\_model(SerialModel ser)

Set the serialization model.

**Definition:** utils.h:386

`Tango::CreatePyLock <../../d9/dd7/classTango_1_1CreatePyLock.html>`__

**Definition:** utils.h:106

`Tango::PyData <../../d5/d7d/classTango_1_1PyData.html>`__

**Definition:** utils.h:1266

`Tango::DeviceImpl::get\_db\_device <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__

DbDevice \* get\_db\_device()

Get a pointer to the associated DbDevice object.

**Definition:** utils.h:1203

`Tango::create\_PyPerThData <../../de/ddf/namespaceTango.html#a43fad155477a5f86d88574f1d8e2ac21>`__

void
create\_PyPerThData(omni::omniInterceptors::createThread\_T::info\_T &)

`Tango::Util::get\_ds\_inst\_name <../../d4/deb/classTango_1_1Util.html#ae8f35a5ab069649e607be6097c8b1fd8>`__

string & get\_ds\_inst\_name()

Get the device server instance name.

**Definition:** utils.h:291

`Tango::PyData::PerTh\_dvsha <../../d5/d7d/classTango_1_1PyData.html#a6ee5be64c90d940fc63c9bd8e191ca74>`__

DevVarShortArray PerTh\_dvsha

**Definition:** utils.h:1289

`pollext.h <../../db/d17/pollext_8h.html>`__

`Tango::AutoPyLock::AutoPyLock <../../de/dbe/classTango_1_1AutoPyLock.html#a00ec70eee990cfd77c37f70a57787bac>`__

AutoPyLock()

`Tango::PollingThreadInfo::nb\_polled\_objects <../../dc/d66/structTango_1_1PollingThreadInfo.html#a263e8adedff07f0b831780e349a9a7d0>`__

int nb\_polled\_objects

**Definition:** utils.h:1237

`Tango::API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__

const char \*const API\_NonDatabaseDevice

**Definition:** tango\_const.h:413

`Tango::PyData::rec\_status <../../d5/d7d/classTango_1_1PyData.html#a047f79a4c3ba0ae4b6043026d31c2ca8>`__

bool rec\_status

**Definition:** utils.h:1309

`Tango::Util::set\_trace\_level <../../d4/deb/classTango_1_1Util.html#abf6c91c64e226fae5ed1639cd28071ce>`__

void set\_trace\_level(int level)

Set the process trace level.

**Definition:** utils.h:240

`Tango::Util::is\_svr\_shutting\_down <../../d4/deb/classTango_1_1Util.html#a7e5a56fe3a14633ffafc01c63698f45f>`__

bool is\_svr\_shutting\_down()

Check if the device server process is in its shutting down sequence.

**Definition:** utils.h:523

`Tango::MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__

MessBoxType

**Definition:** tango\_const.h:939

`Tango::PollingThreadInfo::poll\_mon <../../dc/d66/structTango_1_1PollingThreadInfo.html#a37f783d36e383cf347ccacab3387aa51>`__

TangoMonitor poll\_mon

**Definition:** utils.h:1235

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Util::get\_trace\_level <../../d4/deb/classTango_1_1Util.html#a49822fbfc1d15e017397230127ce33ee>`__

int get\_trace\_level()

Get the process trace level.

**Definition:** utils.h:247

`Tango::PollingThreadInfo::poll\_th <../../dc/d66/structTango_1_1PollingThreadInfo.html#a32ce4856c38b4bbc52564f24e61c7321>`__

PollThread \* poll\_th

**Definition:** utils.h:1233

`Tango::Util::instance <../../d4/deb/classTango_1_1Util.html#a577119e32b43b1344d6f9ef37f587472>`__

static TANGO\_IMP\_EXP Util \* instance(bool exit=true)

Get the singleton object reference.

`Tango::clear\_att\_dim <../../de/ddf/namespaceTango.html#adb1cc901df596cd8aea1e5d51f0cf6ac>`__

void clear\_att\_dim(Tango::AttributeValue\_3 &att\_val)

`Tango::DeviceImpl::db\_dev <../../d3/d62/classTango_1_1DeviceImpl.html#ae063e45a3778e7241d74f7270461cbb4>`__

DbDevice \* db\_dev

Pointer to the associated DbDevice object.

**Definition:** device.h:3284

`Tango::Util::add\_class\_to\_list <../../d4/deb/classTango_1_1Util.html#a5129fe98f63d85e72d35ed4619d14b5d>`__

void add\_class\_to\_list(DeviceClass \*cl)

Add a DeviceClass to the DeviceClass list pointer.

**Definition:** utils.h:371

`Tango::QUALITY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__

Quality change event (deprecated - do not use)

**Definition:** tango\_const.h:1091

`Tango::Util::is\_svr\_starting <../../d4/deb/classTango_1_1Util.html#a8b5d14831423f0f2dafab927fa4e64ed>`__

bool is\_svr\_starting()

Check if the device server process is in its starting phase.

**Definition:** utils.h:517

`Tango::Util::set\_class\_list <../../d4/deb/classTango_1_1Util.html#a55f6da618ced3d2c73b4b4650f41a781>`__

void set\_class\_list(vector< DeviceClass \* > \*list)

Set the DeviceClass list pointer.

**Definition:** utils.h:364

`Tango::Util::get\_device\_list <../../d4/deb/classTango_1_1Util.html#ae201024b8f84c08743097a43e2551540>`__

vector< DeviceImpl \* > get\_device\_list(const string &name)

Get DeviceList from name.

`Tango::Util::server\_cleanup <../../d4/deb/classTango_1_1Util.html#ad1ff436c06ef8b7cba2c96c09f6176ae>`__

void server\_cleanup()

Cleanup a Tango device server process before exit.

`Tango::PERIODIC\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__

Periodic event.

**Definition:** tango\_const.h:1092

`Tango::PyData::PerTh\_py\_lock <../../d5/d7d/classTango_1_1PyData.html#a2f4bcb08a5653dfc6137862aeaa3bce7>`__

PyLock \* PerTh\_py\_lock

**Definition:** utils.h:1315

`Tango::Util::AutoTangoMonitor <../../d4/deb/classTango_1_1Util.html#aa90445f0324fbdea288f7b41aa4a6790>`__

friend class Tango::AutoTangoMonitor

**Definition:** utils.h:155

`Tango::CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__

This class is a used to pass a command result history when the user
directly fills the command pollin...

**Definition:** pollext.h:909

`Tango::PyData::PerTh\_dvul64a <../../d5/d7d/classTango_1_1PyData.html#a78aecea8ee48e0dee4995ef5c7a6abff>`__

DevVarULong64Array PerTh\_dvul64a

**Definition:** utils.h:1299

`Tango::Interceptors::Interceptors <../../d6/d62/classTango_1_1Interceptors.html#a4c5255368e548bba8405ecf44b2b698f>`__

Interceptors()

**Definition:** utils.h:118

`Tango::STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__

**Definition:** tango\_const.h:940

`Tango::PollingThreadInfo <../../dc/d66/structTango_1_1PollingThreadInfo.html>`__

**Definition:** utils.h:1230

`Tango::Util::fill\_cmd\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#a797a10d317dc6aab6ef2948fc94b90cf>`__

void fill\_cmd\_polling\_buffer(DeviceImpl \*dev, string &cmd\_name,
CmdHistoryStack< T > &data)

Fill polling buffer for polled command.

`Tango::Util::server\_run <../../d4/deb/classTango_1_1Util.html#a6299b8c885918b5a0cbfe74d1563501b>`__

void server\_run()

Run the CORBA event loop.

`Tango::Util::get\_class\_list <../../d4/deb/classTango_1_1Util.html#a0d18e9c85522737eb4fb4bfff15af44c>`__

const vector< DeviceClass \* > \* get\_class\_list()

Get the DeviceClass list pointer.

**Definition:** utils.h:378

`Tango::Util::trigger\_attr\_polling <../../d4/deb/classTango_1_1Util.html#a9cb37786d6f990990c7905b39b889d27>`__

void trigger\_attr\_polling(DeviceImpl \*dev, const string &name)

Trigger polling for polled attribute.

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__

static void throw\_exception(const char \*reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:122

`Tango::Util::fill\_attr\_polling\_buffer <../../d4/deb/classTango_1_1Util.html#aa9e35fe725db9e490dbd2bf561e5bbe5>`__

void fill\_attr\_polling\_buffer(DeviceImpl \*dev, string &att\_name,
AttrHistoryStack< T > &data)

Fill polling buffer for polled attribute.

`Tango::Util::get\_tango\_lib\_release <../../d4/deb/classTango_1_1Util.html#a10b07c18428bf23e1bc2cb3ac917ff6a>`__

long get\_tango\_lib\_release()

Get the TANGO library version number.

`Tango::Util::get\_polling\_threads\_pool\_size <../../d4/deb/classTango_1_1Util.html#af6aee977b3c8f5de4f135fca9b024ddf>`__

unsigned long get\_polling\_threads\_pool\_size()

Get the polling threads pool size.

**Definition:** utils.h:500

`Tango::DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__

Base class for all TANGO device-class class.

**Definition:** deviceclass.h:76

`Tango::PyData::PerTh\_dvula <../../d5/d7d/classTango_1_1PyData.html#a44206072acd001ca4070a193d23f1b9e>`__

DevVarULongArray PerTh\_dvula

**Definition:** utils.h:1294

`Tango::API\_MemoryAllocation <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__

const char \*const API\_MemoryAllocation

**Definition:** tango\_const.h:408

`Tango::return\_empty\_any <../../de/ddf/namespaceTango.html#a3b3bd64ad7f36f411ad17050d314a460>`__

CORBA::Any \* return\_empty\_any(const char \*cmd)

Create and return an empty CORBA Any object.

**Definition:** utils.h:1182

`Tango::PyData::PerTh\_dvla <../../d5/d7d/classTango_1_1PyData.html#a0e12526319c05fa6aaf445484b536890>`__

DevVarLongArray PerTh\_dvla

**Definition:** utils.h:1290

`Tango::Util::get\_server\_version <../../d4/deb/classTango_1_1Util.html#a19ed2067f664f4e7d98ac0876fcc7fd5>`__

string & get\_server\_version()

Get the device server version.

**Definition:** utils.h:350

`Tango::Util::get\_dserver\_device <../../d4/deb/classTango_1_1Util.html#a8d86b4bcf0c279aaadb9d476f9c261fd>`__

DServer \* get\_dserver\_device()

Get a reference to the dserver device attached to the device server
process.

`Tango::Util::get\_ds\_name <../../d4/deb/classTango_1_1Util.html#aab15cb9f574c44c37b0d2dcce3531b3a>`__

string & get\_ds\_name()

Get the device server name.

**Definition:** utils.h:307

`Tango::Util::Util <../../d4/deb/classTango_1_1Util.html#ae8cb0ef44d4f03250ab33b603a1dfee2>`__

Util(int argc, char \*argv[])

Constructs a newly allocated Util object.

`Tango::Interceptors <../../d6/d62/classTango_1_1Interceptors.html>`__

**Definition:** utils.h:115

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `utils.h <../../d5/d60/utils_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
