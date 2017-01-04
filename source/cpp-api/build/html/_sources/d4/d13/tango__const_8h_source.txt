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

tango\_const.h

`Go to the documentation of this
file. <../../d4/d13/tango__const_8h.html>`__

1 //====================================================================================================================

2 //

3 // file : Tango\_const.h

4 //

5 // description : Include for Tango system constant definition

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

18 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

19 // License as published by the Free Software Foundation, either
version 3 of the License, or

20 // (at your option) any later version.

21 //

22 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

23 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

24 //

25 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

26 // If not, see <http://www.gnu.org/licenses/>.

27 //

28 // $Revision$

29 //

30 //=====================================================================================================================

31 

32 #ifndef \_TANGO\_CONST\_H

33 #define \_TANGO\_CONST\_H

34 

35 namespace `Tango <../../de/ddf/namespaceTango.html>`__

36 {

37 

38 

39 //

40 // Some general interest define

41 //

42 

`43 <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__ #define
TANGO\_VERSION\_MAJOR 9

`44 <../../d4/d13/tango__const_8h.html#a4e5ff4bd2809f455d91c21c9b7d0dae6>`__ #define
TANGO\_VERSION\_MINOR 2

`45 <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__ #define
TANGO\_VERSION\_PATCH 5

46 

`47 <../../d4/d13/tango__const_8h.html#a06713a84dc7dbebed1e9fcc0c960caf0>`__ #define
TANGO\_BASE\_CLASS Tango::Device\_5Impl

48 

`49 <../../d4/d13/tango__const_8h.html#aff6d5e6e29fea1b22c39408543862a08>`__ #define
TBS(s) #s

`50 <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__ #define
XTBS(s) TBS(s)

51 

`52 <../../de/ddf/namespaceTango.html#a04517655cec6d73a7bec0989a59780cd>`__ const
char \* const
`TgLibVers <../../de/ddf/namespaceTango.html#a04517655cec6d73a7bec0989a59780cd>`__
=
`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__\ (`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__.TANGO\_VERSION\_MINOR.TANGO\_VERSION\_PATCH);

`53 <../../de/ddf/namespaceTango.html#ae7168d398e7627f1083c3b090427fb89>`__ const
char \* const
`TgLibMajorVers <../../de/ddf/namespaceTango.html#ae7168d398e7627f1083c3b090427fb89>`__
=
`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__\ (`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__);

54 

`55 <../../de/ddf/namespaceTango.html#a57f955df970c64f91e641f08ad8a8e22>`__ const
int
`TgLibVersNb <../../de/ddf/namespaceTango.html#a57f955df970c64f91e641f08ad8a8e22>`__
=
`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__\ \*10000
+
`TANGO\_VERSION\_MINOR <../../d4/d13/tango__const_8h.html#a4e5ff4bd2809f455d91c21c9b7d0dae6>`__\ \*100
+
`TANGO\_VERSION\_PATCH <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__;

56 

`57 <../../de/ddf/namespaceTango.html#a7d400cb5df81070fd9c0ea469656f9f0>`__ const
int
`DevVersion <../../de/ddf/namespaceTango.html#a7d400cb5df81070fd9c0ea469656f9f0>`__
= 5; // IDL version number

`58 <../../de/ddf/namespaceTango.html#a8257e84ebbbc07c75939779e551f9af8>`__ const
int
`DefaultMaxSeq <../../de/ddf/namespaceTango.html#a8257e84ebbbc07c75939779e551f9af8>`__
= 20;

`59 <../../de/ddf/namespaceTango.html#a6a0017e7b8b49bf40d3e4ab5f2e2a41d>`__ const
int
`DefaultBlackBoxDepth <../../de/ddf/namespaceTango.html#a6a0017e7b8b49bf40d3e4ab5f2e2a41d>`__
= 50;

`60 <../../de/ddf/namespaceTango.html#a8ad5d0ca81ff07ada111334b43cfd869>`__ const
int
`DefaultPollRingDepth <../../de/ddf/namespaceTango.html#a8ad5d0ca81ff07ada111334b43cfd869>`__
= 10;

61 

`62 <../../de/ddf/namespaceTango.html#afac56d33cd8fe564b28ff51a92cce28f>`__ const
char\* const
`InitialOutput <../../de/ddf/namespaceTango.html#afac56d33cd8fe564b28ff51a92cce28f>`__
= "Initial Output";

`63 <../../de/ddf/namespaceTango.html#ad2b9c23d9d5246c836a2c425b4b6e1bb>`__ const
char\* const
`DSDeviceDomain <../../de/ddf/namespaceTango.html#ad2b9c23d9d5246c836a2c425b4b6e1bb>`__
= "dserver";

`64 <../../de/ddf/namespaceTango.html#a53dfa761bdefadf3fc6ab76646e172bf>`__ const
char\* const
`DefaultDocUrl <../../de/ddf/namespaceTango.html#a53dfa761bdefadf3fc6ab76646e172bf>`__
= "http://www.tango-controls.org";

`65 <../../de/ddf/namespaceTango.html#a210b1892b97601243a4a343949345251>`__ const
char\* const
`EnvVariable <../../de/ddf/namespaceTango.html#a210b1892b97601243a4a343949345251>`__
= "TANGO\_HOST";

`66 <../../de/ddf/namespaceTango.html#a03f880f9471b49474dfadd428ab11c53>`__ const
char\* const
`WindowsEnvVariable <../../de/ddf/namespaceTango.html#a03f880f9471b49474dfadd428ab11c53>`__
= "TANGO\_ROOT";

`67 <../../de/ddf/namespaceTango.html#a036a32581f413a3bcfb72a98def0a0b9>`__ const
char\* const
`DbObjName <../../de/ddf/namespaceTango.html#a036a32581f413a3bcfb72a98def0a0b9>`__
= "database";

`68 <../../de/ddf/namespaceTango.html#ae64ef651969a4f0a99205c23085a3a7f>`__ const
char\* const
`NotSet <../../de/ddf/namespaceTango.html#ae64ef651969a4f0a99205c23085a3a7f>`__
= "Uninitialised";

`69 <../../de/ddf/namespaceTango.html#afc8bf12ed1c936bfae762578dcc48e73>`__ const
char\* const
`ResNotDefined <../../de/ddf/namespaceTango.html#afc8bf12ed1c936bfae762578dcc48e73>`__
= "0";

`70 <../../de/ddf/namespaceTango.html#aa3c6540af05d1f19c28d5ae3a655abe3>`__ const
char\* const
`MessBoxTitle <../../de/ddf/namespaceTango.html#aa3c6540af05d1f19c28d5ae3a655abe3>`__
= "Tango Device Server";

`71 <../../de/ddf/namespaceTango.html#ae1851ebaa91cbf1df9317e3f47f6190a>`__ const
char\* const
`StatusNotSet <../../de/ddf/namespaceTango.html#ae1851ebaa91cbf1df9317e3f47f6190a>`__
= "Not initialised";

`72 <../../de/ddf/namespaceTango.html#a7f2387175232a41bb05aebf49f49d49d>`__ const
char\* const
`TangoHostNotSet <../../de/ddf/namespaceTango.html#a7f2387175232a41bb05aebf49f49d49d>`__
= "Undef";

`73 <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__ const
char\* const
`RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__
= "Not defined";

74 

`75 <../../de/ddf/namespaceTango.html#a9560b2deaa08619f6fbda8d581cafa72>`__ const
bool
`DefaultWritAttrProp <../../de/ddf/namespaceTango.html#a9560b2deaa08619f6fbda8d581cafa72>`__
= false;

`76 <../../de/ddf/namespaceTango.html#a565f91812b4edcc2c69c76462a6b9ee5>`__ const
char\* const
`AllAttr <../../de/ddf/namespaceTango.html#a565f91812b4edcc2c69c76462a6b9ee5>`__
= "All attributes";

`77 <../../de/ddf/namespaceTango.html#a3f8363d4faf2dad3d54964b214e677cf>`__ const
char\* const
`AllAttr\_3 <../../de/ddf/namespaceTango.html#a3f8363d4faf2dad3d54964b214e677cf>`__
= "All attributes\_3";

`78 <../../de/ddf/namespaceTango.html#a5b3095298bf49d8ca8f47eb1858a899e>`__ const
char\* const
`AllPipe <../../de/ddf/namespaceTango.html#a5b3095298bf49d8ca8f47eb1858a899e>`__
= "All pipes";

`79 <../../de/ddf/namespaceTango.html#a71a690fd2e85a6d3eeeebb8cc99308ed>`__ const
char\* const
`AllCmd <../../de/ddf/namespaceTango.html#a71a690fd2e85a6d3eeeebb8cc99308ed>`__
= "All commands";

80 

`81 <../../de/ddf/namespaceTango.html#a7a3c5bbd36efa6c2d482917570ade6ff>`__ const
char\* const
`PollCommand <../../de/ddf/namespaceTango.html#a7a3c5bbd36efa6c2d482917570ade6ff>`__
= "command";

`82 <../../de/ddf/namespaceTango.html#a9b54136531ae9c9950cc188e20997e5e>`__ const
char\* const
`PollAttribute <../../de/ddf/namespaceTango.html#a9b54136531ae9c9950cc188e20997e5e>`__
= "attribute";

`83 <../../de/ddf/namespaceTango.html#a35ae382f171e3cc895c1b8091495bad8>`__ const
char\* const
`LOCAL\_POLL\_REQUEST <../../de/ddf/namespaceTango.html#a35ae382f171e3cc895c1b8091495bad8>`__
= "\_local";

`84 <../../de/ddf/namespaceTango.html#a943b554c8b51645b3ffe4f984317af69>`__ const
int
`LOCAL\_REQUEST\_STR\_SIZE <../../de/ddf/namespaceTango.html#a943b554c8b51645b3ffe4f984317af69>`__
= 6;

85 

`86 <../../de/ddf/namespaceTango.html#a13e2f637722da725edd0291910561a5e>`__ const
int
`MIN\_POLL\_PERIOD <../../de/ddf/namespaceTango.html#a13e2f637722da725edd0291910561a5e>`__
= 5;

`87 <../../de/ddf/namespaceTango.html#a71d99b6666d67ef9beaf98304f850c45>`__ const
int
`DELTA\_T <../../de/ddf/namespaceTango.html#a71d99b6666d67ef9beaf98304f850c45>`__
= 1002000000;

`88 <../../de/ddf/namespaceTango.html#af982d7c45093855da559e24390399d74>`__ const
int
`MIN\_DELTA\_WORK <../../de/ddf/namespaceTango.html#af982d7c45093855da559e24390399d74>`__
= 20000;

`89 <../../de/ddf/namespaceTango.html#a1dc91cb42cfae6d95865a79bcacf5659>`__ const
int
`TIME\_HEARTBEAT <../../de/ddf/namespaceTango.html#a1dc91cb42cfae6d95865a79bcacf5659>`__
= 2000;

`90 <../../de/ddf/namespaceTango.html#a34f9803acabf31717db66602986603d7>`__ const
int
`POLL\_LOOP\_NB <../../de/ddf/namespaceTango.html#a34f9803acabf31717db66602986603d7>`__
= 500;

`91 <../../de/ddf/namespaceTango.html#ae174df1c78e4bd2bc2c2a74371b58754>`__ const
int
`ONE\_SECOND <../../de/ddf/namespaceTango.html#ae174df1c78e4bd2bc2c2a74371b58754>`__
= 1000000;

`92 <../../de/ddf/namespaceTango.html#a0ebcc7eba0f252786b8dafd5f49bea95>`__ const
double
`DISCARD\_THRESHOLD <../../de/ddf/namespaceTango.html#a0ebcc7eba0f252786b8dafd5f49bea95>`__
= 0.02;

93 

`94 <../../de/ddf/namespaceTango.html#a72476a792a49b56f9e81ecae1200ac9c>`__ const
int
`DEFAULT\_TIMEOUT <../../de/ddf/namespaceTango.html#a72476a792a49b56f9e81ecae1200ac9c>`__
= 3200;

`95 <../../de/ddf/namespaceTango.html#afa27b589e2b5994a0a27059613720c19>`__ const
int
`DEFAULT\_POLL\_OLD\_FACTOR <../../de/ddf/namespaceTango.html#afa27b589e2b5994a0a27059613720c19>`__
= 4;

96 

`97 <../../de/ddf/namespaceTango.html#af2e652825c984d817a22f92efac11a5b>`__ const
int
`TG\_IMP\_MINOR\_TO <../../de/ddf/namespaceTango.html#af2e652825c984d817a22f92efac11a5b>`__
= 10;

`98 <../../de/ddf/namespaceTango.html#a6d15f636ee420576140717db7ca83d62>`__ const
int
`TG\_IMP\_MINOR\_DEVFAILED <../../de/ddf/namespaceTango.html#a6d15f636ee420576140717db7ca83d62>`__
= 11;

`99 <../../de/ddf/namespaceTango.html#ab093f2ad96560b13cb4648c148f23bc4>`__ const
int
`TG\_IMP\_MINOR\_NON\_DEVFAILED <../../de/ddf/namespaceTango.html#ab093f2ad96560b13cb4648c148f23bc4>`__
= 12;

100 

`101 <../../de/ddf/namespaceTango.html#aef7da385ddf3f46afe79163a0f666795>`__ const
char\* const
`TANGO\_PY\_MOD\_NAME <../../de/ddf/namespaceTango.html#aef7da385ddf3f46afe79163a0f666795>`__
= "\_PyTango.pyd";

`102 <../../de/ddf/namespaceTango.html#aaa8f81c3a53d35a3f315e8580b2e3877>`__ const
char\* const
`DATABASE\_CLASS <../../de/ddf/namespaceTango.html#aaa8f81c3a53d35a3f315e8580b2e3877>`__
= "DataBase";

103 

`104 <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__ const
int
`TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__
= 15;

`105 <../../de/ddf/namespaceTango.html#afb100d0df5cc0a0573218b0d37a6bd4f>`__ const
char \* const
`NoClass <../../de/ddf/namespaceTango.html#afb100d0df5cc0a0573218b0d37a6bd4f>`__
= "noclass";

106 

`107 <../../de/ddf/namespaceTango.html#a30435ff467857bda6eb59245667a451f>`__ const
char \* const
`SCALAR\_PIPE <../../de/ddf/namespaceTango.html#a30435ff467857bda6eb59245667a451f>`__
= "Scalar";

`108 <../../de/ddf/namespaceTango.html#ae620b5476087612faa68423a59bdcbab>`__ const
char \* const
`ARRAY\_PIPE <../../de/ddf/namespaceTango.html#ae620b5476087612faa68423a59bdcbab>`__
= "Array";

109 

110 //

111 // omniORB default configuration file

112 //

113 

114 #ifdef \_TG\_WINDOWS\_

115 const char\* const
`DEFAULT\_OMNI\_CONF\_FILE <../../de/ddf/namespaceTango.html#aa6e02f61c2aa84d728aac32b88bf97ec>`__
= "C:\\\\OMNIORB.CFG";

116 #else

`117 <../../de/ddf/namespaceTango.html#aa6e02f61c2aa84d728aac32b88bf97ec>`__ const
char\* const DEFAULT\_OMNI\_CONF\_FILE = "/etc/omniORB.cfg";

118 #endif

119 

120 //

121 // Event related define

122 //

123 

`124 <../../de/ddf/namespaceTango.html#a3e398ae4d333de1ef159e763ab1500e8>`__ const
int
`EVENT\_HEARTBEAT\_PERIOD <../../de/ddf/namespaceTango.html#a3e398ae4d333de1ef159e763ab1500e8>`__
= 10;

`125 <../../de/ddf/namespaceTango.html#a966bd63dc204670cd22634518139c1a5>`__ const
int
`EVENT\_RESUBSCRIBE\_PERIOD <../../de/ddf/namespaceTango.html#a966bd63dc204670cd22634518139c1a5>`__
= 600;

`126 <../../de/ddf/namespaceTango.html#a129d2bcb7e86bc4770ceedd7762939c3>`__ const
int
`DEFAULT\_EVENT\_PERIOD <../../de/ddf/namespaceTango.html#a129d2bcb7e86bc4770ceedd7762939c3>`__
= 1000;

`127 <../../de/ddf/namespaceTango.html#a3a8fa543b8852eadbf549c6c7ea6f4ee>`__ const
double
`DELTA\_PERIODIC <../../de/ddf/namespaceTango.html#a3a8fa543b8852eadbf549c6c7ea6f4ee>`__
= 0.98; // Using a delta of 2% only for times < 5000 ms

`128 <../../de/ddf/namespaceTango.html#a0bdf3e69b11c6b5d5edfdb4a63f911b9>`__ const
int
`DELTA\_PERIODIC\_LONG <../../de/ddf/namespaceTango.html#a0bdf3e69b11c6b5d5edfdb4a63f911b9>`__
= 100; // For times > 5000ms only keep a delta of 100ms

`129 <../../de/ddf/namespaceTango.html#a1c0fa779fadf42ac0833b68f3b7e78bf>`__ const
char\* const
`HEARTBEAT <../../de/ddf/namespaceTango.html#a1c0fa779fadf42ac0833b68f3b7e78bf>`__
= "Event heartbeat";

130 

131 //

132 // ZMQ event system related define

133 //

134 

`135 <../../de/ddf/namespaceTango.html#a43f21283b8b61819a1fa7328a2a56ce4>`__ const
int
`ZMQ\_EVENT\_PROT\_VERSION <../../de/ddf/namespaceTango.html#a43f21283b8b61819a1fa7328a2a56ce4>`__
= 1;

`136 <../../de/ddf/namespaceTango.html#ac9df8e7375815227c373e65fe07151c2>`__ const
char\* const
`HEARTBEAT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#ac9df8e7375815227c373e65fe07151c2>`__
= "push\_heartbeat\_event";

`137 <../../de/ddf/namespaceTango.html#a6e89c689e8165e99e49832f73ecb245c>`__ const
char\* const
`EVENT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#a6e89c689e8165e99e49832f73ecb245c>`__
= "push\_zmq\_event";

`138 <../../de/ddf/namespaceTango.html#af81944eafbad16a35007f5cd5749db75>`__ const
char\* const
`HEARTBEAT\_EVENT\_NAME <../../de/ddf/namespaceTango.html#af81944eafbad16a35007f5cd5749db75>`__
= "heartbeat";

`139 <../../de/ddf/namespaceTango.html#a8a076a4c53258bf22563d97e20dc840b>`__ const
char\* const
`CTRL\_SOCK\_ENDPOINT <../../de/ddf/namespaceTango.html#a8a076a4c53258bf22563d97e20dc840b>`__
= "inproc://control";

`140 <../../de/ddf/namespaceTango.html#a7f5b4edcb569c81b588e41fa9e3955e3>`__ const
char\* const
`MCAST\_PROT <../../de/ddf/namespaceTango.html#a7f5b4edcb569c81b588e41fa9e3955e3>`__
= "epgm://";

`141 <../../de/ddf/namespaceTango.html#a98def3b6214d3a9cc86253fc03e8b6df>`__ const
int
`MCAST\_HOPS <../../de/ddf/namespaceTango.html#a98def3b6214d3a9cc86253fc03e8b6df>`__
= 5;

`142 <../../de/ddf/namespaceTango.html#abb7acc6cb1454cbca0f7aa05342d8571>`__ const
int
`PGM\_RATE <../../de/ddf/namespaceTango.html#abb7acc6cb1454cbca0f7aa05342d8571>`__
= 80 \* 1024;

`143 <../../de/ddf/namespaceTango.html#aef72f4f74b319ee73ff550b0d697c058>`__ const
int
`PGM\_IVL <../../de/ddf/namespaceTango.html#aef72f4f74b319ee73ff550b0d697c058>`__
= 20 \* 1000;

`144 <../../de/ddf/namespaceTango.html#a72f4218c4dd771081c848699c6c10b96>`__ const
int
`MAX\_SOCKET\_SUB <../../de/ddf/namespaceTango.html#a72f4218c4dd771081c848699c6c10b96>`__
= 10;

`145 <../../de/ddf/namespaceTango.html#a82d3d32737d2d1e086d995fda3e746d9>`__ const
int
`PUB\_HWM <../../de/ddf/namespaceTango.html#a82d3d32737d2d1e086d995fda3e746d9>`__
= 1000;

`146 <../../de/ddf/namespaceTango.html#a1ce854fb3e526b633b07d2014ad5cd69>`__ const
int
`SUB\_HWM <../../de/ddf/namespaceTango.html#a1ce854fb3e526b633b07d2014ad5cd69>`__
= 1000;

`147 <../../de/ddf/namespaceTango.html#a99ca4b41d1558e732a575815fa0aa505>`__ const
int
`SUB\_SEND\_HWM <../../de/ddf/namespaceTango.html#a99ca4b41d1558e732a575815fa0aa505>`__
= 10000;

148 

149 //

150 // Event when using a file as database stuff

151 //

152 

`153 <../../de/ddf/namespaceTango.html#a6b13c6213547e62515edfdf8bd2907bc>`__ const
char\* const
`NOTIFD\_CHANNEL <../../de/ddf/namespaceTango.html#a6b13c6213547e62515edfdf8bd2907bc>`__
= "notifd\_channel";

154 

155 //

156 // Locking feature related defines

157 //

158 

`159 <../../de/ddf/namespaceTango.html#ae75357a2687b2f264cc1f811f887de37>`__ const
int
`DEFAULT\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#ae75357a2687b2f264cc1f811f887de37>`__
= 10;

`160 <../../de/ddf/namespaceTango.html#a7aeabbefcf13f428c65e2ee34bd73ce8>`__ const
char\* const
`DEVICE\_UNLOCKED\_REASON <../../de/ddf/namespaceTango.html#a7aeabbefcf13f428c65e2ee34bd73ce8>`__
= "API\_DeviceUnlocked";

`161 <../../de/ddf/namespaceTango.html#a9925dc4036809c0c82c6faa04715ee0c>`__ const
int
`MIN\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#a9925dc4036809c0c82c6faa04715ee0c>`__
= 2;

`162 <../../de/ddf/namespaceTango.html#ab5eb9175281bdc695bcfcc85b43311f2>`__ const
char\* const
`TG\_LOCAL\_HOST <../../de/ddf/namespaceTango.html#ab5eb9175281bdc695bcfcc85b43311f2>`__
= "localhost";

163 

164 //

165 // Client timeout as defined by omniORB4.0.0

166 //

167 

`168 <../../de/ddf/namespaceTango.html#a391adb957de83d43090c59de92eb7f30>`__ const
char\* const
`CLNT\_TIMEOUT\_STR <../../de/ddf/namespaceTango.html#a391adb957de83d43090c59de92eb7f30>`__
= "3000";

`169 <../../de/ddf/namespaceTango.html#abe8c0ba9a0f18b778477b1df2ffa2227>`__ const
int
`CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#abe8c0ba9a0f18b778477b1df2ffa2227>`__
= 3000;

`170 <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__ const
int
`NARROW\_CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__
= 100;

171 

172 //

173 // Connection and call timeout for database device

174 //

175 

`176 <../../de/ddf/namespaceTango.html#ae812eafd87e66f1907751a4c93220b69>`__ const
int
`DB\_CONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#ae812eafd87e66f1907751a4c93220b69>`__
= 25000;

`177 <../../de/ddf/namespaceTango.html#a3e4956ede899062bc5eed5ac841df5e2>`__ const
int
`DB\_RECONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#a3e4956ede899062bc5eed5ac841df5e2>`__
= 20000;

`178 <../../de/ddf/namespaceTango.html#a86c45a7d5efc2c77708c639d1512d646>`__ const
int
`DB\_TIMEOUT <../../de/ddf/namespaceTango.html#a86c45a7d5efc2c77708c639d1512d646>`__
= 13000;

`179 <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__ const
int
`DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__
= 3;

180 

181 //

182 // Time to wait before trying to reconnect after

183 // a connevtion failure

184 //

`185 <../../de/ddf/namespaceTango.html#a1218bbe047a7b8663c2ad2a48d911581>`__ const
int
`RECONNECTION\_DELAY <../../de/ddf/namespaceTango.html#a1218bbe047a7b8663c2ad2a48d911581>`__
= 1000; //ms. Only try to reconnect every second

186 

187 //

188 // Access Control related defines

189 // WARNING: these string are also used within the Db stored
procedure

190 // introduced in Tango V6.1. If you chang eit here, don't forget to

191 // also update the stored procedure

192 //

193 

`194 <../../de/ddf/namespaceTango.html#aed8a549dc231ff341d74d86482da1da7>`__ const
char\* const
`CONTROL\_SYSTEM <../../de/ddf/namespaceTango.html#aed8a549dc231ff341d74d86482da1da7>`__
= "CtrlSystem";

`195 <../../de/ddf/namespaceTango.html#a580b13677820a4ff01ab7837909b641f>`__ const
char\* const
`SERVICE\_PROP\_NAME <../../de/ddf/namespaceTango.html#a580b13677820a4ff01ab7837909b641f>`__
= "Services";

`196 <../../de/ddf/namespaceTango.html#a1f281953f4feb64a3d4fd078b832e0de>`__ const
char\* const
`ACCESS\_SERVICE <../../de/ddf/namespaceTango.html#a1f281953f4feb64a3d4fd078b832e0de>`__
= "AccessControl";

197 

198 //

199 // Polling threads pool related defines

200 //

201 

`202 <../../de/ddf/namespaceTango.html#a00b829391f3f0dedda2e2529a99928c3>`__ const
int
`DEFAULT\_POLLING\_THREADS\_POOL\_SIZE <../../de/ddf/namespaceTango.html#a00b829391f3f0dedda2e2529a99928c3>`__
= 1;

203 

204 //

205 // Max transfer size 256 MBytes (in byte). Needed by omniORB

206 //

207 

`208 <../../de/ddf/namespaceTango.html#aed016c0842de7eb43bd60e4beae64333>`__ const
char\* const
`MAX\_TRANSFER\_SIZE <../../de/ddf/namespaceTango.html#aed016c0842de7eb43bd60e4beae64333>`__
= "268435456";

209 

210 //

211 // Max GIOP connection per server . Needed by omniORB

212 //

213 

`214 <../../de/ddf/namespaceTango.html#ac677a7f571cd285c98d5ed0e6978a87b>`__ const
char\* const
`MAX\_GIOP\_PER\_SERVER <../../de/ddf/namespaceTango.html#ac677a7f571cd285c98d5ed0e6978a87b>`__
= "128";

215 

216 //

217 // Tango name length

218 //

219 

`220 <../../de/ddf/namespaceTango.html#a3e719a41954f2ade54cc857c4c08de8a>`__ const
unsigned int
`MaxServerNameLength <../../de/ddf/namespaceTango.html#a3e719a41954f2ade54cc857c4c08de8a>`__
= 255;

`221 <../../de/ddf/namespaceTango.html#a9fb19c21a4f0589f66a53f9e884cdab5>`__ const
int
`MaxDevPropLength <../../de/ddf/namespaceTango.html#a9fb19c21a4f0589f66a53f9e884cdab5>`__
= 255;

222 

223 //

224 // For forwarded attribute implementation

225 //

226 

`227 <../../de/ddf/namespaceTango.html#a011c4a515d3ccb2598f8056fe7547c2a>`__ const
int
`MIN\_IDL\_CONF5 <../../de/ddf/namespaceTango.html#a011c4a515d3ccb2598f8056fe7547c2a>`__
= 5;

`228 <../../de/ddf/namespaceTango.html#afff5df79f04c351d63cd703c68e1c6b0>`__ const
int
`MIN\_IDL\_DEV\_INTR <../../de/ddf/namespaceTango.html#afff5df79f04c351d63cd703c68e1c6b0>`__
= 5;

`229 <../../de/ddf/namespaceTango.html#a374c1134a17d1e50284d1a68cc4accc1>`__ const
int
`ALL\_EVENTS <../../de/ddf/namespaceTango.html#a374c1134a17d1e50284d1a68cc4accc1>`__
= 0;

230 

231 //

232 // For event compatibility

233 //

234 

`235 <../../de/ddf/namespaceTango.html#a29de5d1a870e15287b55b2f3653cbd9d>`__ const
int
`ATT\_CONF\_REL\_NB <../../de/ddf/namespaceTango.html#a29de5d1a870e15287b55b2f3653cbd9d>`__
= 1; // Number of att. conf release on top of original one

236 

`237 <../../de/ddf/namespaceTango.html#a1385bcefaaafad1d87abf07eeb98af59>`__ const
char\* const
`EVENT\_COMPAT <../../de/ddf/namespaceTango.html#a1385bcefaaafad1d87abf07eeb98af59>`__
= "idl";

`238 <../../de/ddf/namespaceTango.html#a23978bc0013b2a550b37f19c453c0e2f>`__ const
char\* const
`EVENT\_COMPAT\_IDL5 <../../de/ddf/namespaceTango.html#a23978bc0013b2a550b37f19c453c0e2f>`__
= "idl5\_";

`239 <../../de/ddf/namespaceTango.html#a6a6e46f8f1eaf33643b0138b3e73182b>`__ const
int
`EVENT\_COMPAT\_IDL5\_SIZE <../../de/ddf/namespaceTango.html#a6a6e46f8f1eaf33643b0138b3e73182b>`__
= 5; // strlen of previsou string

240 

241 //

242 // For device interface change event

243 //

244 

`245 <../../de/ddf/namespaceTango.html#aa3d98efd1957111718e521bf487acae1>`__ const
int
`DEV\_INTR\_THREAD\_SLEEP\_TIME <../../de/ddf/namespaceTango.html#aa3d98efd1957111718e521bf487acae1>`__
= 50;

246 

247 //

248 // For pipe

249 //

250 

`251 <../../de/ddf/namespaceTango.html#af39ca888bd7f44ad3c7c0600920f4344>`__ const
int
`MAX\_DATA\_ELT\_IN\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#af39ca888bd7f44ad3c7c0600920f4344>`__
= 20;

252 

253 //

254 // Files used to retrieve env. variables

255 //

256 

`257 <../../de/ddf/namespaceTango.html#a5cfdbd082b1b9c1ec5494903b342300c>`__ const
char\* const
`USER\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#a5cfdbd082b1b9c1ec5494903b342300c>`__
= ".tangorc";

258 

259 #ifndef HAVE\_CONFIG\_H

`260 <../../de/ddf/namespaceTango.html#a2774bda98bacb6fc74177152af565833>`__ const
char\* const
`TANGO\_RC\_FILE <../../de/ddf/namespaceTango.html#a2774bda98bacb6fc74177152af565833>`__
= "/etc/tangorc";

261 #endif

`262 <../../de/ddf/namespaceTango.html#afe46eae3cff24b7e2916d9ea8b477135>`__ const
char\* const
`WINDOWS\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#afe46eae3cff24b7e2916d9ea8b477135>`__
= "tangorc";

263 

264 

265 #ifdef TANGO\_HAS\_LOG4TANGO

266 

267 //

268 // Logging targets (as string)

269 //

270 

`271 <../../de/ddf/namespaceTango.html#ad2107b91b06192b71648e74670638f86>`__ const
char\* const
`kLogTargetConsole <../../de/ddf/namespaceTango.html#ad2107b91b06192b71648e74670638f86>`__
= "console";

`272 <../../de/ddf/namespaceTango.html#a2357fa42ac2cfc2e8ab530e5c7d876a4>`__ const
char\* const
`kLogTargetFile <../../de/ddf/namespaceTango.html#a2357fa42ac2cfc2e8ab530e5c7d876a4>`__
= "file";

`273 <../../de/ddf/namespaceTango.html#a2acbafeec497c249467ae813dad02e57>`__ const
char\* const
`kLogTargetDevice <../../de/ddf/namespaceTango.html#a2acbafeec497c249467ae813dad02e57>`__
= "device";

274 

275 //

276 // Logging target [type/name] separator

277 //

278 

`279 <../../de/ddf/namespaceTango.html#ac960726f00862579dd09e6f792bfd1c6>`__ const
char\* const
`kLogTargetSep <../../de/ddf/namespaceTango.html#ac960726f00862579dd09e6f792bfd1c6>`__
= "::";

280 

281 //

282 // TANGO <rolling log files> threshold

283 //

284 

285 // Min RollingFileAppender threshold (~500kB)

`286 <../../de/ddf/namespaceTango.html#a6a5a347a440c989db5eca047b8bc2b6e>`__ const
size\_t
`kMinRollingThreshold <../../de/ddf/namespaceTango.html#a6a5a347a440c989db5eca047b8bc2b6e>`__
= 500;

287 // Default RollingFileAppender threshold (~20MB)

`288 <../../de/ddf/namespaceTango.html#a68d9866a76c56521e564b3eee8d34a62>`__ const
size\_t
`kDefaultRollingThreshold <../../de/ddf/namespaceTango.html#a68d9866a76c56521e564b3eee8d34a62>`__
= 20 \* 1024;

289 // Max RollingFileAppender threshold (~1GB)

`290 <../../de/ddf/namespaceTango.html#a1988f359e5761c26c9c6b340e5186265>`__ const
size\_t
`kMaxRollingThreshold <../../de/ddf/namespaceTango.html#a1988f359e5761c26c9c6b340e5186265>`__
= 1024 \* 1024;

291 

292 #endif // TANGO\_HAS\_LOG4TANGO

293 

294 //

295 // The optional attribute properties

296 //

297 

`298 <../../de/ddf/namespaceTango.html#a381c25abcd854845c2187de2d6402c4b>`__ const
char\* const
`AlrmValueNotSpec <../../de/ddf/namespaceTango.html#a381c25abcd854845c2187de2d6402c4b>`__
= "Not specified";

`299 <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__ const
char\* const
`AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__
= "None";

`300 <../../de/ddf/namespaceTango.html#aa03500f78edeb91bf53eea42ef9b34ee>`__ const
char\* const
`LabelNotSpec <../../de/ddf/namespaceTango.html#aa03500f78edeb91bf53eea42ef9b34ee>`__
= "No label";

`301 <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__ const
char\* const
`DescNotSpec <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__
= "No description";

`302 <../../de/ddf/namespaceTango.html#af12c56283ff5db515a61f2a1bfe2be74>`__ const
char\* const
`UnitNotSpec <../../de/ddf/namespaceTango.html#af12c56283ff5db515a61f2a1bfe2be74>`__
= "";

`303 <../../de/ddf/namespaceTango.html#af3e38fec687ce6e48d29e7f15d48b5b2>`__ const
char\* const
`StdUnitNotSpec <../../de/ddf/namespaceTango.html#af3e38fec687ce6e48d29e7f15d48b5b2>`__
= "No standard unit";

`304 <../../de/ddf/namespaceTango.html#a4f1f3e6107d45eb51dd6d5a309773d83>`__ const
char\* const
`DispUnitNotSpec <../../de/ddf/namespaceTango.html#a4f1f3e6107d45eb51dd6d5a309773d83>`__
= "No display unit";

`305 <../../de/ddf/namespaceTango.html#ad005a1df5ed11ae4466521a0dc93c529>`__ const
char\* const
`FormatNotSpec\_FL <../../de/ddf/namespaceTango.html#ad005a1df5ed11ae4466521a0dc93c529>`__
= "%6.2f";

`306 <../../de/ddf/namespaceTango.html#a713bec3ecfb92d7bf1e874d0a0a76460>`__ const
char\* const
`FormatNotSpec\_INT <../../de/ddf/namespaceTango.html#a713bec3ecfb92d7bf1e874d0a0a76460>`__
= "%d";

`307 <../../de/ddf/namespaceTango.html#a76d5ff904af5bbfe50ac6d70ec891fff>`__ const
char\* const
`FormatNotSpec\_STR <../../de/ddf/namespaceTango.html#a76d5ff904af5bbfe50ac6d70ec891fff>`__
= "%s";

`308 <../../de/ddf/namespaceTango.html#a413a1755e5c074a8acc4efcd6ecf75c0>`__ const
char\* const
`FormatNotSpec <../../de/ddf/namespaceTango.html#a413a1755e5c074a8acc4efcd6ecf75c0>`__
=
`FormatNotSpec\_FL <../../de/ddf/namespaceTango.html#ad005a1df5ed11ae4466521a0dc93c529>`__;

309 

`310 <../../de/ddf/namespaceTango.html#a986c54e23d75257917fe8cae1a79c234>`__ const
char\* const
`NotANumber <../../de/ddf/namespaceTango.html#a986c54e23d75257917fe8cae1a79c234>`__
= "NaN";

311 

`312 <../../de/ddf/namespaceTango.html#a0f48b35f3b59827d6f3ebd0cf5db277e>`__ const
char\* const
`MemNotUsed <../../de/ddf/namespaceTango.html#a0f48b35f3b59827d6f3ebd0cf5db277e>`__
= "Not used yet";

`313 <../../de/ddf/namespaceTango.html#aa2c8d63d609e4b4812d28a9da220a804>`__ const
char\* const
`MemAttrPropName <../../de/ddf/namespaceTango.html#aa2c8d63d609e4b4812d28a9da220a804>`__
= "\_\_value";

`314 <../../de/ddf/namespaceTango.html#a7fc39c748986b54ea6c3100e22ac6931>`__ const
char\* const
`RootAttrPropName <../../de/ddf/namespaceTango.html#a7fc39c748986b54ea6c3100e22ac6931>`__
= "\_\_root\_att";

315 

316 // For DevEnum data type

317 

`318 <../../de/ddf/namespaceTango.html#a6a9f2ce86c2eb45a059727bd9f71aac4>`__ typedef
DevShort
`DevEnum <../../de/ddf/namespaceTango.html#a6a9f2ce86c2eb45a059727bd9f71aac4>`__;

319 

320 /\*

321  \* List of strings used by the API as the DevError reason field.

322  \* This list is given here only for API writers to re-use (if
possible)

323  \* strings already used.

324  \*

325  \*/

326 

`327 <../../de/ddf/namespaceTango.html#a598829f7cf84a1084688a22290888b66>`__ const
char\* const
`API\_AlreadyPolled <../../de/ddf/namespaceTango.html#a598829f7cf84a1084688a22290888b66>`__
= "API\_AlreadyPolled";

`328 <../../de/ddf/namespaceTango.html#aea49fc3a8f3cf1fbdf4e58684ccd772a>`__ const
char\* const
`API\_AsynReplyNotArrived <../../de/ddf/namespaceTango.html#aea49fc3a8f3cf1fbdf4e58684ccd772a>`__
= "API\_AsynReplyNotArrived";

`329 <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__ const
char\* const
`API\_AttrConfig <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__
= "API\_AttrConfig";

`330 <../../de/ddf/namespaceTango.html#a9f84a7fc80faeccc580211eaccf7fdce>`__ const
char\* const
`API\_AttrEventProp <../../de/ddf/namespaceTango.html#a9f84a7fc80faeccc580211eaccf7fdce>`__
= "API\_AttrEventProp";

`331 <../../de/ddf/namespaceTango.html#a4d7e9b3fcf6f84df8ccd7da466dc464c>`__ const
char\* const
`API\_AttributeFailed <../../de/ddf/namespaceTango.html#a4d7e9b3fcf6f84df8ccd7da466dc464c>`__
= "API\_AttributeFailed";

`332 <../../de/ddf/namespaceTango.html#a412bbdd811dfe6bd7064be020d6c8237>`__ const
char\* const
`API\_AttributeNotDataReadyEnabled <../../de/ddf/namespaceTango.html#a412bbdd811dfe6bd7064be020d6c8237>`__
= "API\_AttributeNotDataReadyEnabled";

`333 <../../de/ddf/namespaceTango.html#aaacd7c57faee0af4acc07aa4766182fe>`__ const
char\* const
`API\_AttributePollingNotStarted <../../de/ddf/namespaceTango.html#aaacd7c57faee0af4acc07aa4766182fe>`__
= "API\_AttributePollingNotStarted";

`334 <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__ const
char\* const
`API\_AttrIncorrectDataNumber <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__
= "API\_AttrIncorrectDataNumber";

`335 <../../de/ddf/namespaceTango.html#a20550ebb1e28f43df0b2ad5962166ee0>`__ const
char\* const
`API\_AttrNoAlarm <../../de/ddf/namespaceTango.html#a20550ebb1e28f43df0b2ad5962166ee0>`__
= "API\_AttrNoAlarm";

`336 <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__ const
char\* const
`API\_AttrNotAllowed <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__
= "API\_AttrNotAllowed";

`337 <../../de/ddf/namespaceTango.html#a2d9f8219f8eb47151f02bda7b2784f3e>`__ const
char\* const
`API\_AttrNotFound <../../de/ddf/namespaceTango.html#a2d9f8219f8eb47151f02bda7b2784f3e>`__
= "API\_AttrNotFound";

`338 <../../de/ddf/namespaceTango.html#affd54d4f5cd5e42d5030a5fc3d44eb2f>`__ const
char\* const
`API\_AttrNotPolled <../../de/ddf/namespaceTango.html#affd54d4f5cd5e42d5030a5fc3d44eb2f>`__
= "API\_AttrNotPolled";

`339 <../../de/ddf/namespaceTango.html#a9a46d00f7e44e69913d9b37c57172e1a>`__ const
char\* const
`API\_AttrNotWritable <../../de/ddf/namespaceTango.html#a9a46d00f7e44e69913d9b37c57172e1a>`__
= "API\_AttrNotWritable";

`340 <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__ const
char\* const
`API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__
= "API\_AttrOptProp";

`341 <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__ const
char\* const
`API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__
= "API\_AttrPropValueNotSet";

`342 <../../de/ddf/namespaceTango.html#affc0676b6e97629cd7a92ae9a438bf35>`__ const
char\* const
`API\_AttrValueNotSet <../../de/ddf/namespaceTango.html#affc0676b6e97629cd7a92ae9a438bf35>`__
= "API\_AttrValueNotSet";

`343 <../../de/ddf/namespaceTango.html#ade324d58a59de866554b2374b8061049>`__ const
char\* const
`API\_AttrWrongDefined <../../de/ddf/namespaceTango.html#ade324d58a59de866554b2374b8061049>`__
= "API\_AttrWrongDefined";

`344 <../../de/ddf/namespaceTango.html#a8b61b1fdd81b63e8cfc5ce1a0f3c52ad>`__ const
char\* const
`API\_AttrWrongMemValue <../../de/ddf/namespaceTango.html#a8b61b1fdd81b63e8cfc5ce1a0f3c52ad>`__
= "API\_AttrWrongMemValue";

`345 <../../de/ddf/namespaceTango.html#ae621e1d53db91520e20222a27058c3ea>`__ const
char\* const
`API\_BadAsynReqType <../../de/ddf/namespaceTango.html#ae621e1d53db91520e20222a27058c3ea>`__
= "API\_BadAsynReqType";

`346 <../../de/ddf/namespaceTango.html#a51ae1dac8bc729864268a2739d262282>`__ const
char\* const
`API\_BadConfigurationProperty <../../de/ddf/namespaceTango.html#a51ae1dac8bc729864268a2739d262282>`__
= "API\_BadConfigurationProperty";

`347 <../../de/ddf/namespaceTango.html#ada893b8f13e4324afdda4d329bf0d974>`__ const
char\* const
`API\_BlackBoxArgument <../../de/ddf/namespaceTango.html#ada893b8f13e4324afdda4d329bf0d974>`__
= "API\_BlackBoxArgument";

`348 <../../de/ddf/namespaceTango.html#a53160500c33341b504d64ed0014ecb26>`__ const
char\* const
`API\_BlackBoxEmpty <../../de/ddf/namespaceTango.html#a53160500c33341b504d64ed0014ecb26>`__
= "API\_BlackBoxEmpty";

`349 <../../de/ddf/namespaceTango.html#abbc95fb0aec509279b907a441f234c7f>`__ const
char\* const
`API\_CannotCheckAccessControl <../../de/ddf/namespaceTango.html#abbc95fb0aec509279b907a441f234c7f>`__
= "API\_CannotCheckAccessControl";

`350 <../../de/ddf/namespaceTango.html#accfb8bea6eecbcbed96fc15a8eefe6ed>`__ const
char\* const
`API\_CannotOpenFile <../../de/ddf/namespaceTango.html#accfb8bea6eecbcbed96fc15a8eefe6ed>`__
= "API\_CannotOpenFile";

`351 <../../de/ddf/namespaceTango.html#a7e08c459e5cba2eb75255c4c1dd696e8>`__ const
char\* const
`API\_CantActivatePOAManager <../../de/ddf/namespaceTango.html#a7e08c459e5cba2eb75255c4c1dd696e8>`__
= "API\_CantActivatePOAManager";

`352 <../../de/ddf/namespaceTango.html#abad3f6fd397ab9798d90e097ace0cc00>`__ const
char\* const
`API\_CantConnectToDevice <../../de/ddf/namespaceTango.html#abad3f6fd397ab9798d90e097ace0cc00>`__
= "API\_CantConnectToDevice";

`353 <../../de/ddf/namespaceTango.html#a5541eb1430b1668517f3f890fb0ab32e>`__ const
char\* const
`API\_CantCreateClassPoa <../../de/ddf/namespaceTango.html#a5541eb1430b1668517f3f890fb0ab32e>`__
= "API\_CantCreateClassPoa";

`354 <../../de/ddf/namespaceTango.html#a559860b11e3f709db36dee068e12f501>`__ const
char\* const
`API\_CantCreateLockingThread <../../de/ddf/namespaceTango.html#a559860b11e3f709db36dee068e12f501>`__
= "API\_CantCreateLockingThread";

`355 <../../de/ddf/namespaceTango.html#ae40cae7ba5e62681693fb931bc036101>`__ const
char\* const
`API\_CantDestroyDevice <../../de/ddf/namespaceTango.html#ae40cae7ba5e62681693fb931bc036101>`__
= "API\_CantDestroyDevice";

`356 <../../de/ddf/namespaceTango.html#a47f1787b07433186f7b4144d4adb4a78>`__ const
char\* const
`API\_CantFindLockingThread <../../de/ddf/namespaceTango.html#a47f1787b07433186f7b4144d4adb4a78>`__
= "API\_CantFindLockingThread";

`357 <../../de/ddf/namespaceTango.html#a4c85b6737187cbfd2d47874c31f78688>`__ const
char\* const
`API\_CantGetClientIdent <../../de/ddf/namespaceTango.html#a4c85b6737187cbfd2d47874c31f78688>`__
= "API\_CantGetClientIdent";

`358 <../../de/ddf/namespaceTango.html#a8a8a65f17bee17a3c7ef4e81abc1876d>`__ const
char\* const
`API\_CantGetDevObjectId <../../de/ddf/namespaceTango.html#a8a8a65f17bee17a3c7ef4e81abc1876d>`__
= "API\_CantGetDevObjectId";

`359 <../../de/ddf/namespaceTango.html#a0e959c114559af4673b863546c6251b7>`__ const
char\* const
`API\_CantInstallSignal <../../de/ddf/namespaceTango.html#a0e959c114559af4673b863546c6251b7>`__
= "API\_CantInstallSignal";

`360 <../../de/ddf/namespaceTango.html#ab7bcedb0ded3de7c4165552db12c76e7>`__ const
char\* const
`API\_CantRetrieveClass <../../de/ddf/namespaceTango.html#ab7bcedb0ded3de7c4165552db12c76e7>`__
= "API\_CantRetrieveClass";

`361 <../../de/ddf/namespaceTango.html#a54c1d08ea17e70fa6d222f1ae27bb1ca>`__ const
char\* const
`API\_CantRetrieveClassList <../../de/ddf/namespaceTango.html#a54c1d08ea17e70fa6d222f1ae27bb1ca>`__
= "API\_CantRetrieveClassList";

`362 <../../de/ddf/namespaceTango.html#a44b76427ee6339540bee839d328cdfce>`__ const
char\* const
`API\_CantStoreDeviceClass <../../de/ddf/namespaceTango.html#a44b76427ee6339540bee839d328cdfce>`__
= "API\_CantStoreDeviceClass";

`363 <../../de/ddf/namespaceTango.html#aa3be4093d5504f8bc73b163862cc309c>`__ const
char\* const
`API\_ClassNotFound <../../de/ddf/namespaceTango.html#aa3be4093d5504f8bc73b163862cc309c>`__
= "API\_ClassNotFound";

`364 <../../de/ddf/namespaceTango.html#ac8fb80b7d90b3b1c95576f4549328668>`__ const
char\* const
`API\_CmdArgumentTypeNotSupported <../../de/ddf/namespaceTango.html#ac8fb80b7d90b3b1c95576f4549328668>`__
= "API\_CmdArgumentTypeNotSupported";

`365 <../../de/ddf/namespaceTango.html#aff4db63e7cabc86cea88027cc2d4345e>`__ const
char\* const
`API\_CmdNotPolled <../../de/ddf/namespaceTango.html#aff4db63e7cabc86cea88027cc2d4345e>`__
= "API\_CmdNotPolled";

`366 <../../de/ddf/namespaceTango.html#a637934aed55dfd38af6b23c0c5b29306>`__ const
char\* const
`API\_CommandFailed <../../de/ddf/namespaceTango.html#a637934aed55dfd38af6b23c0c5b29306>`__
= "API\_CommandFailed";

`367 <../../de/ddf/namespaceTango.html#aa9a485028a7e3f9cab67fd341e0a8a33>`__ const
char\* const
`API\_CommandNotAllowed <../../de/ddf/namespaceTango.html#aa9a485028a7e3f9cab67fd341e0a8a33>`__
= "API\_CommandNotAllowed";

`368 <../../de/ddf/namespaceTango.html#ac200c048fe7f41f1d631b30fec09d194>`__ const
char\* const
`API\_CommandNotFound <../../de/ddf/namespaceTango.html#ac200c048fe7f41f1d631b30fec09d194>`__
= "API\_CommandNotFound";

`369 <../../de/ddf/namespaceTango.html#a65a8de572231c0792e0d9cca80fa0440>`__ const
char\* const
`API\_CommandTimedOut <../../de/ddf/namespaceTango.html#a65a8de572231c0792e0d9cca80fa0440>`__
= "API\_CommandTimedOut";

`370 <../../de/ddf/namespaceTango.html#a318ff939e96d1fc8e8a9411a873e07fd>`__ const
char\* const
`API\_ConnectionFailed <../../de/ddf/namespaceTango.html#a318ff939e96d1fc8e8a9411a873e07fd>`__
= "API\_ConnectionFailed";

`371 <../../de/ddf/namespaceTango.html#a80b0db5242b5b0b41e847edd3a5631fd>`__ const
char\* const
`API\_CorbaSysException <../../de/ddf/namespaceTango.html#a80b0db5242b5b0b41e847edd3a5631fd>`__
= "API\_CorbaSysException";

`372 <../../de/ddf/namespaceTango.html#a12971fe66a9476a82dd9498cb1121dce>`__ const
char\* const
`API\_CorruptedDatabase <../../de/ddf/namespaceTango.html#a12971fe66a9476a82dd9498cb1121dce>`__
= "API\_CorruptedDatabase";

`373 <../../de/ddf/namespaceTango.html#ad2f5b3b1ba2b0c831aad77cf7f299578>`__ const
char\* const
`API\_DatabaseAccess <../../de/ddf/namespaceTango.html#ad2f5b3b1ba2b0c831aad77cf7f299578>`__
= "API\_DatabaseAccess";

`374 <../../de/ddf/namespaceTango.html#ab3ed208b6d5bfcaefcbbeb331105ed46>`__ const
char\* const
`API\_DatabaseCacheAccess <../../de/ddf/namespaceTango.html#ab3ed208b6d5bfcaefcbbeb331105ed46>`__
= "API\_DatabaseCacheAccess";

`375 <../../de/ddf/namespaceTango.html#a30638e36a66c20e24f41252ec9a9b9e1>`__ const
char\* const
`API\_DatabaseFileError <../../de/ddf/namespaceTango.html#a30638e36a66c20e24f41252ec9a9b9e1>`__
= "API\_DatabaseFileError";

`376 <../../de/ddf/namespaceTango.html#ab7665c68bc38b6e12abcecad06aa0271>`__ const
char\* const
`API\_DecodeErr <../../de/ddf/namespaceTango.html#ab7665c68bc38b6e12abcecad06aa0271>`__
= "API\_DecodeErr";

`377 <../../de/ddf/namespaceTango.html#a3e9646bc54625db3cbebbd936ef0da45>`__ const
char\* const
`API\_DeprecatedCommand <../../de/ddf/namespaceTango.html#a3e9646bc54625db3cbebbd936ef0da45>`__
= "API\_DeprecatedCommand";

`378 <../../de/ddf/namespaceTango.html#a2505084b158db239b47f14f83932ca7b>`__ const
char\* const
`API\_DeviceLocked <../../de/ddf/namespaceTango.html#a2505084b158db239b47f14f83932ca7b>`__
= "API\_DeviceLocked";

`379 <../../de/ddf/namespaceTango.html#a9aef726de48dbd963088f6ec9afda1ca>`__ const
char\* const
`API\_DeviceNotExported <../../de/ddf/namespaceTango.html#a9aef726de48dbd963088f6ec9afda1ca>`__
= "API\_DeviceNotExported";

`380 <../../de/ddf/namespaceTango.html#af04e195158692b32eee6e93fdcbff284>`__ const
char\* const
`API\_DeviceNotFound <../../de/ddf/namespaceTango.html#af04e195158692b32eee6e93fdcbff284>`__
= "API\_DeviceNotFound";

`381 <../../de/ddf/namespaceTango.html#a53e0d40a069f1e0dae8d9f62e8df5dc1>`__ const
char\* const
`API\_DeviceNotLocked <../../de/ddf/namespaceTango.html#a53e0d40a069f1e0dae8d9f62e8df5dc1>`__
= "API\_DeviceNotLocked";

`382 <../../de/ddf/namespaceTango.html#aff093f1d3fc055d39c6857e28b2bbab0>`__ const
char\* const
`API\_DeviceNotPolled <../../de/ddf/namespaceTango.html#aff093f1d3fc055d39c6857e28b2bbab0>`__
= "API\_DeviceNotPolled";

`383 <../../de/ddf/namespaceTango.html#aeea24c842a2af2d82da63141e4d18a31>`__ const
char\* const
`API\_DeviceUnlockable <../../de/ddf/namespaceTango.html#aeea24c842a2af2d82da63141e4d18a31>`__
= "API\_DeviceUnlockable";

`384 <../../de/ddf/namespaceTango.html#afb625bb1e559a94823826fc3f4fb39b2>`__ const
char\* const
`API\_DeviceUnlocked <../../de/ddf/namespaceTango.html#afb625bb1e559a94823826fc3f4fb39b2>`__
= "API\_DeviceUnlocked";

`385 <../../de/ddf/namespaceTango.html#a4f4372a5c9c22fd22e0d4d1db9a900ab>`__ const
char\* const
`API\_DServerClassNotInitialised <../../de/ddf/namespaceTango.html#a4f4372a5c9c22fd22e0d4d1db9a900ab>`__
= "API\_DServerClassNotInitialised";

`386 <../../de/ddf/namespaceTango.html#a34f311c824d346fce7231c33bc97d77f>`__ const
char\* const
`API\_DSFailedRegisteringEvent <../../de/ddf/namespaceTango.html#a34f311c824d346fce7231c33bc97d77f>`__
= "API\_DSFailedRegisteringEvent";

`387 <../../de/ddf/namespaceTango.html#ae78da62d54b1fc36bb007d5172b380b3>`__ const
char\* const
`API\_EmptyDataElement <../../de/ddf/namespaceTango.html#ae78da62d54b1fc36bb007d5172b380b3>`__
= "API\_EmptyDataElement";

`388 <../../de/ddf/namespaceTango.html#a8974afd8f6b9d4c5e09885846f806cfd>`__ const
char\* const
`API\_EmptyDeviceAttribute <../../de/ddf/namespaceTango.html#a8974afd8f6b9d4c5e09885846f806cfd>`__
= "API\_EmptyDeviceAttribute";

`389 <../../de/ddf/namespaceTango.html#ad3d754045df7893748ae23f9115055be>`__ const
char\* const
`API\_EventConsumer <../../de/ddf/namespaceTango.html#ad3d754045df7893748ae23f9115055be>`__
= "API\_EventConsumer";

`390 <../../de/ddf/namespaceTango.html#afae6d0087cdce4e22d2dc790418045e7>`__ const
char\* const
`API\_EventPropertiesNotSet <../../de/ddf/namespaceTango.html#afae6d0087cdce4e22d2dc790418045e7>`__
= "API\_EventPropertiesNotSet";

`391 <../../de/ddf/namespaceTango.html#a98a17638f72d6e841e996541e5a8d548>`__ const
char\* const
`API\_EventQueues <../../de/ddf/namespaceTango.html#a98a17638f72d6e841e996541e5a8d548>`__
= "API\_EventQueues";

`392 <../../de/ddf/namespaceTango.html#ae27e03994272a09e5e4f49789c2578c0>`__ const
char\* const
`API\_EventSupplierNotConstructed <../../de/ddf/namespaceTango.html#ae27e03994272a09e5e4f49789c2578c0>`__
= "API\_EventSupplierNotConstructed";

`393 <../../de/ddf/namespaceTango.html#a048ee67c10389be2d73fa011a57e9151>`__ const
char\* const
`API\_FwdAttrNotConfigured <../../de/ddf/namespaceTango.html#a048ee67c10389be2d73fa011a57e9151>`__
= "API\_FwdAttrNotConfigured";

`394 <../../de/ddf/namespaceTango.html#afe9f1ad89b2688b93790f8eb6251798b>`__ const
char\* const
`API\_FwdAttrInconsistency <../../de/ddf/namespaceTango.html#afe9f1ad89b2688b93790f8eb6251798b>`__
= "API\_FwdAttrInconsistency";

`395 <../../de/ddf/namespaceTango.html#a75a463e45c3ef4584366f2166c60846d>`__ const
char\* const
`API\_IncoherentDbData <../../de/ddf/namespaceTango.html#a75a463e45c3ef4584366f2166c60846d>`__
= "API\_IncoherentDbData";

`396 <../../de/ddf/namespaceTango.html#a6221ad15c73aa7e01b76e64cc01698fa>`__ const
char\* const
`API\_IncoherentDevData <../../de/ddf/namespaceTango.html#a6221ad15c73aa7e01b76e64cc01698fa>`__
= "API\_IncoherentDevData";

`397 <../../de/ddf/namespaceTango.html#a0b20d12d02e057f876e09bd2104a9606>`__ const
char\* const
`API\_IncoherentValues <../../de/ddf/namespaceTango.html#a0b20d12d02e057f876e09bd2104a9606>`__
= "API\_IncoherentValues";

`398 <../../de/ddf/namespaceTango.html#ab7b7818806cce14bb925618a276e4f10>`__ const
char\* const
`API\_IncompatibleArgumentType <../../de/ddf/namespaceTango.html#ab7b7818806cce14bb925618a276e4f10>`__
= "API\_IncompatibleArgumentType";

`399 <../../de/ddf/namespaceTango.html#a5d26ecf289a6aa5147d2578082a821ba>`__ const
char\* const
`API\_IncompatibleAttrDataType <../../de/ddf/namespaceTango.html#a5d26ecf289a6aa5147d2578082a821ba>`__
= "API\_IncompatibleAttrDataType";

`400 <../../de/ddf/namespaceTango.html#a9f8061c5b3752e8cb8f4de9de6ab790c>`__ const
char\* const
`API\_IncompatibleCmdArgumentType <../../de/ddf/namespaceTango.html#a9f8061c5b3752e8cb8f4de9de6ab790c>`__
= "API\_IncompatibleCmdArgumentType";

`401 <../../de/ddf/namespaceTango.html#a818b637e1145bce913d10fa8651184ca>`__ const
char\* const
`API\_InitMethodNotFound <../../de/ddf/namespaceTango.html#a818b637e1145bce913d10fa8651184ca>`__
= "API\_InitMethodNotFound";

`402 <../../de/ddf/namespaceTango.html#a0775603ffeeccc9f6a5b0a945ade137d>`__ const
char\* const
`API\_InitNotPublic <../../de/ddf/namespaceTango.html#a0775603ffeeccc9f6a5b0a945ade137d>`__
= "API\_InitNotPublic";

`403 <../../de/ddf/namespaceTango.html#aaad6a2e61b1ce56306dec28bc62970f7>`__ const
char\* const
`API\_InitThrowsException <../../de/ddf/namespaceTango.html#aaad6a2e61b1ce56306dec28bc62970f7>`__
= "API\_InitThrowsException";

`404 <../../de/ddf/namespaceTango.html#a3ba812bf097eec3b255a533369e534b3>`__ const
char\* const
`API\_InternalError <../../de/ddf/namespaceTango.html#a3ba812bf097eec3b255a533369e534b3>`__
= "API\_InternalError";

`405 <../../de/ddf/namespaceTango.html#a5c69828a163c1f56b068666edf125870>`__ const
char\* const
`API\_InvalidArgs <../../de/ddf/namespaceTango.html#a5c69828a163c1f56b068666edf125870>`__
= "API\_InvalidArgs";

`406 <../../de/ddf/namespaceTango.html#a8dc4ecff1585b33fe28a772f95ce87d7>`__ const
char\* const
`API\_JavaRuntimeSecurityException <../../de/ddf/namespaceTango.html#a8dc4ecff1585b33fe28a772f95ce87d7>`__
= "API\_JavaRuntimeSecurityException";

`407 <../../de/ddf/namespaceTango.html#a6435ddb6373dc6ee827891ad2af053eb>`__ const
char\* const
`API\_MemAttFailedDuringInit <../../de/ddf/namespaceTango.html#a6435ddb6373dc6ee827891ad2af053eb>`__
= "API\_MemAttFailedDuringInit";

`408 <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__ const
char\* const
`API\_MemoryAllocation <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__
= "API\_MemoryAllocation";

`409 <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__ const
char\* const
`API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__
= "API\_MethodArgument";

`410 <../../de/ddf/namespaceTango.html#a5ae02751e401ef281032de2b8ea1072d>`__ const
char\* const
`API\_MethodNotFound <../../de/ddf/namespaceTango.html#a5ae02751e401ef281032de2b8ea1072d>`__
= "API\_MethodNotFound";

`411 <../../de/ddf/namespaceTango.html#a71962443cc1d623a84bb0cd5d04fc18f>`__ const
char\* const
`API\_MissedEvents <../../de/ddf/namespaceTango.html#a71962443cc1d623a84bb0cd5d04fc18f>`__
= "API\_MissedEvents";

`412 <../../de/ddf/namespaceTango.html#a0a0af5209f7892f59f04b42e77fdc04e>`__ const
char\* const
`API\_NoDataYet <../../de/ddf/namespaceTango.html#a0a0af5209f7892f59f04b42e77fdc04e>`__
= "API\_NoDataYet";

`413 <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__ const
char\* const
`API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__
= "API\_NonDatabaseDevice";

`414 <../../de/ddf/namespaceTango.html#a53d79f446de0c921d2508bf69aacff9c>`__ const
char\* const
`API\_NotificationServiceFailed <../../de/ddf/namespaceTango.html#a53d79f446de0c921d2508bf69aacff9c>`__
= "API\_NotificationServiceFailed";

`415 <../../de/ddf/namespaceTango.html#ae8c41507f747e22653604428cc8c82ac>`__ const
char\* const
`API\_NotSupported <../../de/ddf/namespaceTango.html#ae8c41507f747e22653604428cc8c82ac>`__
= "API\_NotSupported";

`416 <../../de/ddf/namespaceTango.html#ac8783d2d84e56f2a0a3ce73474062d84>`__ const
char\* const
`API\_NotSupportedFeature <../../de/ddf/namespaceTango.html#ac8783d2d84e56f2a0a3ce73474062d84>`__
= "API\_NotSupportedFeature";

`417 <../../de/ddf/namespaceTango.html#ac4638e0fff1396065a562a7a1770922f>`__ const
char\* const
`API\_NotUpdatedAnyMore <../../de/ddf/namespaceTango.html#ac4638e0fff1396065a562a7a1770922f>`__
= "API\_NotUpdatedAnyMore";

`418 <../../de/ddf/namespaceTango.html#a1ac0e04e63b2ede5fe5e56ae7f61bb2b>`__ const
char\* const
`API\_NtDebugWindowError <../../de/ddf/namespaceTango.html#a1ac0e04e63b2ede5fe5e56ae7f61bb2b>`__
= "API\_NtDebugWindowError";

`419 <../../de/ddf/namespaceTango.html#a312032487531801329fa7ff62530c0f6>`__ const
char\* const
`API\_OverloadingNotSupported <../../de/ddf/namespaceTango.html#a312032487531801329fa7ff62530c0f6>`__
= "API\_OverloadingNotSupported";

`420 <../../de/ddf/namespaceTango.html#a6c4b7dc3912f7cbb6ce425c0c0162819>`__ const
char\* const
`API\_PipeDataEltNotFound <../../de/ddf/namespaceTango.html#a6c4b7dc3912f7cbb6ce425c0c0162819>`__
= "API\_PipeDataEltNotFound";

`421 <../../de/ddf/namespaceTango.html#a6844d260affeec7b2349786a5c7cf8cd>`__ const
char\* const
`API\_PipeDuplicateDEName <../../de/ddf/namespaceTango.html#a6844d260affeec7b2349786a5c7cf8cd>`__
= "API\_PipeDuplicateDEName";

`422 <../../de/ddf/namespaceTango.html#aba1f603b0dce0ab8e02993d9a81c3108>`__ const
char\* const
`API\_PipeFailed <../../de/ddf/namespaceTango.html#aba1f603b0dce0ab8e02993d9a81c3108>`__
= "API\_PipeFailed";

`423 <../../de/ddf/namespaceTango.html#ae67d7487777249996436b1837b8daec0>`__ const
char\* const
`API\_PipeNoDataElement <../../de/ddf/namespaceTango.html#ae67d7487777249996436b1837b8daec0>`__
= "API\_PipeNoDataElement";

`424 <../../de/ddf/namespaceTango.html#a4de7ec265953538d4a332d6cff0dc941>`__ const
char\* const
`API\_PipeNotAllowed <../../de/ddf/namespaceTango.html#a4de7ec265953538d4a332d6cff0dc941>`__
= "API\_PipeNotAllowed";

`425 <../../de/ddf/namespaceTango.html#a7cda58d523264fdc9c207fbeca63944c>`__ const
char\* const
`API\_PipeNotFound <../../de/ddf/namespaceTango.html#a7cda58d523264fdc9c207fbeca63944c>`__
= "API\_PipeNotFound";

`426 <../../de/ddf/namespaceTango.html#acd70a42c2585e7f6e3892681e45e3d13>`__ const
char\* const
`API\_PipeNotWritable <../../de/ddf/namespaceTango.html#acd70a42c2585e7f6e3892681e45e3d13>`__
= "API\_PipeNotWritable";

`427 <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__ const
char\* const
`API\_PipeOptProp <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__
= "API\_PipeOptProp";

`428 <../../de/ddf/namespaceTango.html#a850f2c0b3b80513c45b9642bb48970ab>`__ const
char\* const
`API\_PipeValueNotSet <../../de/ddf/namespaceTango.html#a850f2c0b3b80513c45b9642bb48970ab>`__
= "API\_PipeValueNotSet";

`429 <../../de/ddf/namespaceTango.html#aeb3c3b2f2d4e0f01aea7a0b7733df74f>`__ const
char\* const
`API\_PipeWrongArgNumber <../../de/ddf/namespaceTango.html#aeb3c3b2f2d4e0f01aea7a0b7733df74f>`__
= "API\_PipeWrongArgNumber";

`430 <../../de/ddf/namespaceTango.html#a6eb51dd41f3f691160ffb27779eb4733>`__ const
char\* const
`API\_PipeWrongArg <../../de/ddf/namespaceTango.html#a6eb51dd41f3f691160ffb27779eb4733>`__
= "API\_PipeWrongArg";

`431 <../../de/ddf/namespaceTango.html#a9ded57d73abedbed85f21bc0af5cccd2>`__ const
char\* const
`API\_PolledDeviceNotInPoolConf <../../de/ddf/namespaceTango.html#a9ded57d73abedbed85f21bc0af5cccd2>`__
= "API\_PolledDeviceNotInPoolConf";

`432 <../../de/ddf/namespaceTango.html#a127aeafeaa2f90f9dc4cfa825de906de>`__ const
char\* const
`API\_PolledDeviceNotInPoolMap <../../de/ddf/namespaceTango.html#a127aeafeaa2f90f9dc4cfa825de906de>`__
= "API\_PolledDeviceNotInPoolMap";

`433 <../../de/ddf/namespaceTango.html#a149ca5a577be29a05f287cc1227db2ca>`__ const
char\* const
`API\_PollingThreadNotFound <../../de/ddf/namespaceTango.html#a149ca5a577be29a05f287cc1227db2ca>`__
= "API\_PollingThreadNotFound";

`434 <../../de/ddf/namespaceTango.html#a710a71ec0ed36196fa2dfaa7208f23d0>`__ const
char\* const
`API\_PollObjNotFound <../../de/ddf/namespaceTango.html#a710a71ec0ed36196fa2dfaa7208f23d0>`__
= "API\_PollObjNotFound";

`435 <../../de/ddf/namespaceTango.html#a8a48a6e8f55bef8dfad79f2290a0d575>`__ const
char\* const
`API\_PollRingBufferEmpty <../../de/ddf/namespaceTango.html#a8a48a6e8f55bef8dfad79f2290a0d575>`__
= "API\_PollRingBufferEmpty";

`436 <../../de/ddf/namespaceTango.html#ad215189a1b0c81fd66d5ea9b2da82ffa>`__ const
char\* const
`API\_ReadOnlyMode <../../de/ddf/namespaceTango.html#ad215189a1b0c81fd66d5ea9b2da82ffa>`__
= "API\_ReadOnlyMode";

`437 <../../de/ddf/namespaceTango.html#a8bb8d6a61f1044b89530b2e88851bc8a>`__ const
char\* const
`API\_RootAttrFailed <../../de/ddf/namespaceTango.html#a8bb8d6a61f1044b89530b2e88851bc8a>`__
= "API\_RootAttrFailed";

`438 <../../de/ddf/namespaceTango.html#ad66399259e0659990d8ca0c35c0a0973>`__ const
char\* const
`API\_ShutdownInProgress <../../de/ddf/namespaceTango.html#ad66399259e0659990d8ca0c35c0a0973>`__
= "API\_ShutdownInProgress";

`439 <../../de/ddf/namespaceTango.html#acb442d8ddc4f3a34da536aa56c218373>`__ const
char\* const
`API\_SignalOutOfRange <../../de/ddf/namespaceTango.html#acb442d8ddc4f3a34da536aa56c218373>`__
= "API\_SignalOutOfRange";

`440 <../../de/ddf/namespaceTango.html#a1332737231394d5be886efdbac42b778>`__ const
char\* const
`API\_StartupSequence <../../de/ddf/namespaceTango.html#a1332737231394d5be886efdbac42b778>`__
= "API\_StartupSequence";

`441 <../../de/ddf/namespaceTango.html#ae9a0b6c371656538d2fe7adc4f47d1ac>`__ const
char\* const
`API\_StdException <../../de/ddf/namespaceTango.html#ae9a0b6c371656538d2fe7adc4f47d1ac>`__
= "API\_StdException";

`442 <../../de/ddf/namespaceTango.html#a2f24922d31c27b5e586d336369e48e98>`__ const
char\* const
`API\_SystemCallFailed <../../de/ddf/namespaceTango.html#a2f24922d31c27b5e586d336369e48e98>`__
= "API\_SystemCallFailed";

`443 <../../de/ddf/namespaceTango.html#a3860ba9e93c51e5508c38fe0aabb50f2>`__ const
char\* const
`API\_TangoHostNotSet <../../de/ddf/namespaceTango.html#a3860ba9e93c51e5508c38fe0aabb50f2>`__
= "API\_TangoHostNotSet";

`444 <../../de/ddf/namespaceTango.html#a61e3a549e4af3321da46cbd40dc86642>`__ const
char\* const
`API\_UnsupportedFeature <../../de/ddf/namespaceTango.html#a61e3a549e4af3321da46cbd40dc86642>`__
= "API\_UnsupportedFeature";

`445 <../../de/ddf/namespaceTango.html#ad1dfd06214be90b120481414352756bf>`__ const
char\* const
`API\_WAttrOutsideLimit <../../de/ddf/namespaceTango.html#ad1dfd06214be90b120481414352756bf>`__
= "API\_WAttrOutsideLimit";

`446 <../../de/ddf/namespaceTango.html#a5447fcca78e6cd1deaaab78c94b44c64>`__ const
char\* const
`API\_WizardConfError <../../de/ddf/namespaceTango.html#a5447fcca78e6cd1deaaab78c94b44c64>`__
= "API\_WizardConfError";

`447 <../../de/ddf/namespaceTango.html#a60aecefe61f636e89e905d344496d13a>`__ const
char\* const
`API\_WrongAttributeNameSyntax <../../de/ddf/namespaceTango.html#a60aecefe61f636e89e905d344496d13a>`__
= "API\_WrongAttributeNameSyntax";

`448 <../../de/ddf/namespaceTango.html#a0f02db6182e7898d7c7cef893460b11f>`__ const
char\* const
`API\_WrongCmdLineArgs <../../de/ddf/namespaceTango.html#a0f02db6182e7898d7c7cef893460b11f>`__
= "API\_WrongCmdLineArgs";

`449 <../../de/ddf/namespaceTango.html#abd8bdbb7ceaf1070d07ae3b071600c60>`__ const
char\* const
`API\_WrongDeviceNameSyntax <../../de/ddf/namespaceTango.html#abd8bdbb7ceaf1070d07ae3b071600c60>`__
= "API\_WrongDeviceNameSyntax";

`450 <../../de/ddf/namespaceTango.html#af79b5df1a13d18f326b2e3382abcbf2a>`__ const
char\* const
`API\_WrongEventData <../../de/ddf/namespaceTango.html#af79b5df1a13d18f326b2e3382abcbf2a>`__
= "API\_WrongEventData";

`451 <../../de/ddf/namespaceTango.html#a454ba11d1da2f007395e7bc8d8b35911>`__ const
char\* const
`API\_WrongFormat <../../de/ddf/namespaceTango.html#a454ba11d1da2f007395e7bc8d8b35911>`__
= "API\_WrongFormat";

`452 <../../de/ddf/namespaceTango.html#a27d7a7bd98dd02abffcb313fc547d0b2>`__ const
char\* const
`API\_WrongHistoryDataBuffer <../../de/ddf/namespaceTango.html#a27d7a7bd98dd02abffcb313fc547d0b2>`__
= "API\_WrongHistoryDataBuffer";

`453 <../../de/ddf/namespaceTango.html#ab044b999a28507325a270391dc54efdc>`__ const
char\* const
`API\_WrongLockingStatus <../../de/ddf/namespaceTango.html#ab044b999a28507325a270391dc54efdc>`__
= "API\_WrongLockingStatus";

`454 <../../de/ddf/namespaceTango.html#a3b37165a6d772cef81d9e3f41fa835eb>`__ const
char\* const
`API\_WrongNumberOfArgs <../../de/ddf/namespaceTango.html#a3b37165a6d772cef81d9e3f41fa835eb>`__
= "API\_WrongNumberOfArgs";

`455 <../../de/ddf/namespaceTango.html#a17556fe34cd8e046d5f8c57b5bfd483f>`__ const
char\* const
`API\_ZmqFailed <../../de/ddf/namespaceTango.html#a17556fe34cd8e046d5f8c57b5bfd483f>`__
= "API\_ZmqFailed";

`456 <../../de/ddf/namespaceTango.html#aec28088d995919f796b44d062c250101>`__ const
char\* const
`API\_ZmqInitFailed <../../de/ddf/namespaceTango.html#aec28088d995919f796b44d062c250101>`__
= "API\_ZmqInitFailed";

457 

458 //

459 // A short inline function to hide the CORBA::string\_dup function

460 //

461 

`462 <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__ inline
char \*
`string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (char
\*s) {return
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#a0709e050e70c50ae2211f97c45639198>`__\ (s);}

`463 <../../de/ddf/namespaceTango.html#a0709e050e70c50ae2211f97c45639198>`__ inline
char \*
`string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (const
char \*s) {return
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#a0709e050e70c50ae2211f97c45639198>`__\ (s);}

464 

465 //

466 // Many, many typedef

467 //

468 

`469 <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__ typedef
const char \*
`ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__;
// Pseudo Tango type to ease POGO job

`470 <../../de/ddf/namespaceTango.html#aa266359dac942f0a24499c61adcd0b7c>`__ typedef
DevVarCharArray
`DevVarUCharArray <../../de/ddf/namespaceTango.html#aa266359dac942f0a24499c61adcd0b7c>`__;

471 

472 class `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__;

473 

`474 <../../de/ddf/namespaceTango.html#a8fbaee078294ee08dc87e6ecbce2e1bf>`__ typedef
bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StateMethPtr <../../de/ddf/namespaceTango.html#a8fbaee078294ee08dc87e6ecbce2e1bf>`__)(const
CORBA::Any &);

475 

`476 <../../de/ddf/namespaceTango.html#aa8d5711e7c691caf3524baca40b9ab7c>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr <../../de/ddf/namespaceTango.html#aa8d5711e7c691caf3524baca40b9ab7c>`__)();

477 

`478 <../../de/ddf/namespaceTango.html#a6d826b2f939b87adf20cb02ca8c047b6>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d826b2f939b87adf20cb02ca8c047b6>`__)(DevBoolean);

`479 <../../de/ddf/namespaceTango.html#a6057a0b273689664d42521b8a3e0c5e0>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6057a0b273689664d42521b8a3e0c5e0>`__)(DevShort);

`480 <../../de/ddf/namespaceTango.html#a4b9ae3b66981ac4167d9959b0068fd9b>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a4b9ae3b66981ac4167d9959b0068fd9b>`__)(DevLong);

`481 <../../de/ddf/namespaceTango.html#ad55ee490cc8123f90daf3d90732691d9>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ad55ee490cc8123f90daf3d90732691d9>`__)(DevFloat);

`482 <../../de/ddf/namespaceTango.html#aff18b55dba55a66275d7c5518366c7d0>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aff18b55dba55a66275d7c5518366c7d0>`__)(DevDouble);

`483 <../../de/ddf/namespaceTango.html#a74c0e35f6c9083e52a6112f6f2eeae93>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a74c0e35f6c9083e52a6112f6f2eeae93>`__)(DevUShort);

`484 <../../de/ddf/namespaceTango.html#a0862a2fc7c3157cadd8eb33085cf36cb>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a0862a2fc7c3157cadd8eb33085cf36cb>`__)(DevULong);

`485 <../../de/ddf/namespaceTango.html#ad5c6af4e436eab60c6f8101d3bc95f69>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ad5c6af4e436eab60c6f8101d3bc95f69>`__)(DevString);

`486 <../../de/ddf/namespaceTango.html#a49503d5b26f69a614b6128025e27c7c9>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49503d5b26f69a614b6128025e27c7c9>`__)(const
DevVarCharArray \*);

`487 <../../de/ddf/namespaceTango.html#a6f460531420452c547678fe9a660789a>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a6f460531420452c547678fe9a660789a>`__)(const
DevVarShortArray \*);

`488 <../../de/ddf/namespaceTango.html#a30795b211f347703f1e78d3a53419990>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a30795b211f347703f1e78d3a53419990>`__)(const
DevVarLongArray \*);

`489 <../../de/ddf/namespaceTango.html#a13fa64927f4e9467a01f7ea04ff4795f>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a13fa64927f4e9467a01f7ea04ff4795f>`__)(const
DevVarFloatArray \*);

`490 <../../de/ddf/namespaceTango.html#a7fadd416ab137ac02e90f277f82756e5>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a7fadd416ab137ac02e90f277f82756e5>`__)(const
DevVarDoubleArray \*);

`491 <../../de/ddf/namespaceTango.html#a4622f449003b2446968a088011afd015>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4622f449003b2446968a088011afd015>`__)(const
DevVarUShortArray \*);

`492 <../../de/ddf/namespaceTango.html#af0e059c81670f1d7defd075ba8f0a5e9>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e059c81670f1d7defd075ba8f0a5e9>`__)(const
DevVarULongArray \*);

`493 <../../de/ddf/namespaceTango.html#a2d0553885eaaa7b6fa57d09b3692a975>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2d0553885eaaa7b6fa57d09b3692a975>`__)(const
DevVarStringArray \*);

`494 <../../de/ddf/namespaceTango.html#ae366eb5a5f2f842e5fafc8aafb5fa88c>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ae366eb5a5f2f842e5fafc8aafb5fa88c>`__)(const
DevVarLongStringArray \*);

`495 <../../de/ddf/namespaceTango.html#a0d668ee23b223beb0f39e65dc467a882>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0d668ee23b223beb0f39e65dc467a882>`__)(const
DevVarDoubleStringArray \*);

`496 <../../de/ddf/namespaceTango.html#a6d8931508939262d04735109f7303acb>`__ typedef
void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6d8931508939262d04735109f7303acb>`__)(DevState);

497 

`498 <../../de/ddf/namespaceTango.html#a9b273e65d1167410d37e077d47fd5dbf>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr <../../de/ddf/namespaceTango.html#a9b273e65d1167410d37e077d47fd5dbf>`__)();

`499 <../../de/ddf/namespaceTango.html#af6ea4b8b550653b080089e2767a8500d>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr <../../de/ddf/namespaceTango.html#af6ea4b8b550653b080089e2767a8500d>`__)();

`500 <../../de/ddf/namespaceTango.html#a4b458309fd1d1569284660ea789b9886>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr <../../de/ddf/namespaceTango.html#a4b458309fd1d1569284660ea789b9886>`__)();

`501 <../../de/ddf/namespaceTango.html#ac83dbacfeeb9dcef8e2c7bf934f483da>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac83dbacfeeb9dcef8e2c7bf934f483da>`__)();

`502 <../../de/ddf/namespaceTango.html#ad2e2a4a0be40a386b58fcbc178825738>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr <../../de/ddf/namespaceTango.html#ad2e2a4a0be40a386b58fcbc178825738>`__)();

`503 <../../de/ddf/namespaceTango.html#a3522ded92c13d7ddb6cbb1187684c38a>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr <../../de/ddf/namespaceTango.html#a3522ded92c13d7ddb6cbb1187684c38a>`__)();

`504 <../../de/ddf/namespaceTango.html#a453cc05f298d2ddb29684d430c1f2e7d>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr <../../de/ddf/namespaceTango.html#a453cc05f298d2ddb29684d430c1f2e7d>`__)();

`505 <../../de/ddf/namespaceTango.html#adc80802dc1ce4201e606d1c4e6444533>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr <../../de/ddf/namespaceTango.html#adc80802dc1ce4201e606d1c4e6444533>`__)();

`506 <../../de/ddf/namespaceTango.html#ae606bbfe74776f0a801f9135cb6f91f2>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae606bbfe74776f0a801f9135cb6f91f2>`__)();

`507 <../../de/ddf/namespaceTango.html#a164e6f1d2687ad05f946d67856bb0f83>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a164e6f1d2687ad05f946d67856bb0f83>`__)();

`508 <../../de/ddf/namespaceTango.html#a347ef2989ae1565de4e1c52ea5215192>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a347ef2989ae1565de4e1c52ea5215192>`__)();

`509 <../../de/ddf/namespaceTango.html#a8eade72ca84506d77b56895ce8b238de>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a8eade72ca84506d77b56895ce8b238de>`__)();

`510 <../../de/ddf/namespaceTango.html#a1bffde3bccf0d1d98b8304e02b18255b>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a1bffde3bccf0d1d98b8304e02b18255b>`__)();

`511 <../../de/ddf/namespaceTango.html#a769c63fe0359d4235b1f4cb248715b67>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a769c63fe0359d4235b1f4cb248715b67>`__)();

`512 <../../de/ddf/namespaceTango.html#abd18290ec58ce093b7be1ac2f54968a9>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr <../../de/ddf/namespaceTango.html#abd18290ec58ce093b7be1ac2f54968a9>`__)();

`513 <../../de/ddf/namespaceTango.html#ac1451899a4eb2aafeb10406654dac341>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac1451899a4eb2aafeb10406654dac341>`__)();

`514 <../../de/ddf/namespaceTango.html#ae77b1842cc69c849e25cdaa438aeaafe>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae77b1842cc69c849e25cdaa438aeaafe>`__)();

`515 <../../de/ddf/namespaceTango.html#a212fc37118767813e46fb379cd10f33c>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a212fc37118767813e46fb379cd10f33c>`__)();

`516 <../../de/ddf/namespaceTango.html#a66828e7e85d00a2fd750ec30d1834121>`__ typedef
DevState
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr <../../de/ddf/namespaceTango.html#a66828e7e85d00a2fd750ec30d1834121>`__)();

517 

`518 <../../de/ddf/namespaceTango.html#aabe1864de1d13890b8a201dfe142ab14>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aabe1864de1d13890b8a201dfe142ab14>`__)(DevBoolean);

`519 <../../de/ddf/namespaceTango.html#a68930b1508c917e4e2a876839868e7e8>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a68930b1508c917e4e2a876839868e7e8>`__)(DevShort);

`520 <../../de/ddf/namespaceTango.html#afd6ff3d1074dfd50d5dee6a79748873b>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#afd6ff3d1074dfd50d5dee6a79748873b>`__)(DevLong);

`521 <../../de/ddf/namespaceTango.html#a8bad15600c91ea8c9557207a260c0c84>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8bad15600c91ea8c9557207a260c0c84>`__)(DevFloat);

`522 <../../de/ddf/namespaceTango.html#a5da61ac1cb4ba9650caa06374ee426c5>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5da61ac1cb4ba9650caa06374ee426c5>`__)(DevDouble);

`523 <../../de/ddf/namespaceTango.html#a863cdd3f5f94d6be0a920f3c96ddaa0e>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a863cdd3f5f94d6be0a920f3c96ddaa0e>`__)(DevUShort);

`524 <../../de/ddf/namespaceTango.html#ae73e22a313ab738e86f97b9955113576>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ae73e22a313ab738e86f97b9955113576>`__)(DevULong);

`525 <../../de/ddf/namespaceTango.html#a2ea13a66a0941979858e1cba87f0fe0e>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2ea13a66a0941979858e1cba87f0fe0e>`__)(DevString);

`526 <../../de/ddf/namespaceTango.html#a49da5469fedd4d580d6ccbfef04a7406>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49da5469fedd4d580d6ccbfef04a7406>`__)(const
DevVarCharArray \*);

`527 <../../de/ddf/namespaceTango.html#ac6d8073f3edef0766b7189dfc7ad35bb>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ac6d8073f3edef0766b7189dfc7ad35bb>`__)(const
DevVarShortArray \*);

`528 <../../de/ddf/namespaceTango.html#ad0f37f7c2979ce46068a9d4111e84c37>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad0f37f7c2979ce46068a9d4111e84c37>`__)(const
DevVarLongArray \*);

`529 <../../de/ddf/namespaceTango.html#ad8e08cacfb2c9f5ac69b249e4b6c6544>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad8e08cacfb2c9f5ac69b249e4b6c6544>`__)(const
DevVarFloatArray \*);

`530 <../../de/ddf/namespaceTango.html#a5aa79d765795c06b664b0747b1c8fc39>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a5aa79d765795c06b664b0747b1c8fc39>`__)(const
DevVarDoubleArray \*);

`531 <../../de/ddf/namespaceTango.html#a732887ac3a7cb5e04beb828a6704ee6b>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a732887ac3a7cb5e04beb828a6704ee6b>`__)(const
DevVarUShortArray \*);

`532 <../../de/ddf/namespaceTango.html#ae744367a6987e86d0a322735ad861ec8>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ae744367a6987e86d0a322735ad861ec8>`__)(const
DevVarULongArray \*);

`533 <../../de/ddf/namespaceTango.html#a26342a5319609906e84d6e5a03046345>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a26342a5319609906e84d6e5a03046345>`__)(const
DevVarStringArray \*);

`534 <../../de/ddf/namespaceTango.html#a68110230bc59f281fa091779c8f89156>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a68110230bc59f281fa091779c8f89156>`__)(const
DevVarLongStringArray \*);

`535 <../../de/ddf/namespaceTango.html#a66fa830068c7251fac2b12f475e14ea5>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a66fa830068c7251fac2b12f475e14ea5>`__)(const
DevVarDoubleStringArray \*);

`536 <../../de/ddf/namespaceTango.html#a866f2904666005aa8ff5ef40dc432bd2>`__ typedef
DevBoolean
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Bo\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a866f2904666005aa8ff5ef40dc432bd2>`__)(DevState);

537 

`538 <../../de/ddf/namespaceTango.html#a7d5e95448f85f3d5d5f164e5e1126cd8>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a7d5e95448f85f3d5d5f164e5e1126cd8>`__)(DevBoolean);

`539 <../../de/ddf/namespaceTango.html#ad7f4e3fd3c0ff5507d86a775d51c17cb>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad7f4e3fd3c0ff5507d86a775d51c17cb>`__)(DevShort);

`540 <../../de/ddf/namespaceTango.html#af2f00df032a482005ee882a1b4762727>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af2f00df032a482005ee882a1b4762727>`__)(DevLong);

`541 <../../de/ddf/namespaceTango.html#aa15b4936bce76c1cf85d5655494a0ff8>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa15b4936bce76c1cf85d5655494a0ff8>`__)(DevFloat);

`542 <../../de/ddf/namespaceTango.html#ac719c1247cc42b0f09e8f5379a1656a8>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ac719c1247cc42b0f09e8f5379a1656a8>`__)(DevDouble);

`543 <../../de/ddf/namespaceTango.html#a5bf74bc71333b4c0df140a4b050ffb1b>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a5bf74bc71333b4c0df140a4b050ffb1b>`__)(DevUShort);

`544 <../../de/ddf/namespaceTango.html#a423540e1c162e987914c49da9ab8fe52>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a423540e1c162e987914c49da9ab8fe52>`__)(DevULong);

`545 <../../de/ddf/namespaceTango.html#a8f2b534d496b737a323cad29bbce4ef2>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8f2b534d496b737a323cad29bbce4ef2>`__)(DevString);

`546 <../../de/ddf/namespaceTango.html#a170fff4bb4a88cb4b9afb88645eb3f77>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a170fff4bb4a88cb4b9afb88645eb3f77>`__)(const
DevVarCharArray \*);

`547 <../../de/ddf/namespaceTango.html#acecb5447ce6c0c373ee9779c28a3609e>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#acecb5447ce6c0c373ee9779c28a3609e>`__)(const
DevVarShortArray \*);

`548 <../../de/ddf/namespaceTango.html#a68037c5070635f8197ac049c7bf8c9d7>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a68037c5070635f8197ac049c7bf8c9d7>`__)(const
DevVarLongArray \*);

`549 <../../de/ddf/namespaceTango.html#a741ed159773995fb5355101372bd1c86>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a741ed159773995fb5355101372bd1c86>`__)(const
DevVarFloatArray \*);

`550 <../../de/ddf/namespaceTango.html#afa2a5b90b7f3aae3f1acbc9aea308682>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#afa2a5b90b7f3aae3f1acbc9aea308682>`__)(const
DevVarDoubleArray \*);

`551 <../../de/ddf/namespaceTango.html#a410835daa22e19b702377cdcde2c1f3e>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a410835daa22e19b702377cdcde2c1f3e>`__)(const
DevVarUShortArray \*);

`552 <../../de/ddf/namespaceTango.html#a268c6064301a869f9f6aa74e8cce403b>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a268c6064301a869f9f6aa74e8cce403b>`__)(const
DevVarULongArray \*);

`553 <../../de/ddf/namespaceTango.html#af8e0ed0e831ebb80da74189c81125e97>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e0ed0e831ebb80da74189c81125e97>`__)(const
DevVarStringArray \*);

`554 <../../de/ddf/namespaceTango.html#a28e19a81f68f5ecb36fb19b9159c2747>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a28e19a81f68f5ecb36fb19b9159c2747>`__)(const
DevVarLongStringArray \*);

`555 <../../de/ddf/namespaceTango.html#a6a0c3fc14b5980c94da62496e4caeea5>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6a0c3fc14b5980c94da62496e4caeea5>`__)(const
DevVarDoubleStringArray \*);

`556 <../../de/ddf/namespaceTango.html#aef796b5017bac7c655dc000a9808845e>`__ typedef
DevShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sh\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aef796b5017bac7c655dc000a9808845e>`__)(DevState);

557 

`558 <../../de/ddf/namespaceTango.html#a9dacf339ae1040b04a331301c2375a00>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a9dacf339ae1040b04a331301c2375a00>`__)(DevBoolean);

`559 <../../de/ddf/namespaceTango.html#a56a121f2c26f1ff8b1e2f52a0ed961eb>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a56a121f2c26f1ff8b1e2f52a0ed961eb>`__)(DevShort);

`560 <../../de/ddf/namespaceTango.html#a0acb4a982e1b98fe053bdcf94b63fbc9>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a0acb4a982e1b98fe053bdcf94b63fbc9>`__)(DevLong);

`561 <../../de/ddf/namespaceTango.html#a681be512bd1998e61011147ba15b3b14>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a681be512bd1998e61011147ba15b3b14>`__)(DevFloat);

`562 <../../de/ddf/namespaceTango.html#a819d1e3f4565c171584dbb668fc45ff1>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a819d1e3f4565c171584dbb668fc45ff1>`__)(DevDouble);

`563 <../../de/ddf/namespaceTango.html#a47e815f6f2ca7fd1308d19ce4eaa78bf>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47e815f6f2ca7fd1308d19ce4eaa78bf>`__)(DevUShort);

`564 <../../de/ddf/namespaceTango.html#a44f82da7bcd31b5afeef17daab9386f2>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a44f82da7bcd31b5afeef17daab9386f2>`__)(DevULong);

`565 <../../de/ddf/namespaceTango.html#a4c7b5b91d63fbb52332e0e55117ad82f>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4c7b5b91d63fbb52332e0e55117ad82f>`__)(DevString);

`566 <../../de/ddf/namespaceTango.html#ae88ff03fc559bff1e0d41c459296e086>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ae88ff03fc559bff1e0d41c459296e086>`__)(const
DevVarCharArray \*);

`567 <../../de/ddf/namespaceTango.html#a9d30d7d92eb416077a38b9bc224e1a61>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a9d30d7d92eb416077a38b9bc224e1a61>`__)(const
DevVarShortArray \*);

`568 <../../de/ddf/namespaceTango.html#adc2a9416df3d38ced1ec5c29edfbb85c>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#adc2a9416df3d38ced1ec5c29edfbb85c>`__)(const
DevVarLongArray \*);

`569 <../../de/ddf/namespaceTango.html#a1130ca5896a1390ea07ee0d9644cf25a>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1130ca5896a1390ea07ee0d9644cf25a>`__)(const
DevVarFloatArray \*);

`570 <../../de/ddf/namespaceTango.html#a33fd79f1815515968e2e695462b7f657>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a33fd79f1815515968e2e695462b7f657>`__)(const
DevVarDoubleArray \*);

`571 <../../de/ddf/namespaceTango.html#a9dd9cc566f82c33ca8c4b7e05e22a130>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9dd9cc566f82c33ca8c4b7e05e22a130>`__)(const
DevVarUShortArray \*);

`572 <../../de/ddf/namespaceTango.html#a74cbcd2ef477d7072a91317693998126>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a74cbcd2ef477d7072a91317693998126>`__)(const
DevVarULongArray \*);

`573 <../../de/ddf/namespaceTango.html#a6667c6075748027ce7d863db769e81d1>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a6667c6075748027ce7d863db769e81d1>`__)(const
DevVarStringArray \*);

`574 <../../de/ddf/namespaceTango.html#af8de21f05c662dc4dfd1fee2a04c6adf>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af8de21f05c662dc4dfd1fee2a04c6adf>`__)(const
DevVarLongStringArray \*);

`575 <../../de/ddf/namespaceTango.html#a6acd3241da1ae19b86f67a44f8d9b8e9>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6acd3241da1ae19b86f67a44f8d9b8e9>`__)(const
DevVarDoubleStringArray \*);

`576 <../../de/ddf/namespaceTango.html#ac6f5fe3044bdb6731854fc193ecf5271>`__ typedef
DevLong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Lg\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ac6f5fe3044bdb6731854fc193ecf5271>`__)(DevState);

577 

`578 <../../de/ddf/namespaceTango.html#a90e621d66b254ae39f48276d200ab3de>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a90e621d66b254ae39f48276d200ab3de>`__)(DevBoolean);

`579 <../../de/ddf/namespaceTango.html#ae9c71bf65f34b81374a2aa49a774f7db>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae9c71bf65f34b81374a2aa49a774f7db>`__)(DevShort);

`580 <../../de/ddf/namespaceTango.html#a37239cd6d752eb2c2d6a52db1fc25d07>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a37239cd6d752eb2c2d6a52db1fc25d07>`__)(DevLong);

`581 <../../de/ddf/namespaceTango.html#a62072169d6338d1b3c57ca6fc14ccf82>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a62072169d6338d1b3c57ca6fc14ccf82>`__)(DevFloat);

`582 <../../de/ddf/namespaceTango.html#af02ada18999022a4761b7bcf5d26224a>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#af02ada18999022a4761b7bcf5d26224a>`__)(DevDouble);

`583 <../../de/ddf/namespaceTango.html#ad6f255c8d64a2e172069888701170a9e>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad6f255c8d64a2e172069888701170a9e>`__)(DevUShort);

`584 <../../de/ddf/namespaceTango.html#a4373fd62d3b5fffb86db31d2d2d39bd6>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4373fd62d3b5fffb86db31d2d2d39bd6>`__)(DevULong);

`585 <../../de/ddf/namespaceTango.html#a7a7f6abcfe473f7807e1d0839df9ebf0>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a7a7f6abcfe473f7807e1d0839df9ebf0>`__)(DevString);

`586 <../../de/ddf/namespaceTango.html#af67346e5a437bfb6f53d4a5793c8ae7f>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#af67346e5a437bfb6f53d4a5793c8ae7f>`__)(const
DevVarCharArray \*);

`587 <../../de/ddf/namespaceTango.html#abe08b96c40aca517f5270b9d10d98089>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#abe08b96c40aca517f5270b9d10d98089>`__)(const
DevVarShortArray \*);

`588 <../../de/ddf/namespaceTango.html#a8aa460c356e7f762ff3baf882edf6998>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a8aa460c356e7f762ff3baf882edf6998>`__)(const
DevVarLongArray \*);

`589 <../../de/ddf/namespaceTango.html#a2e74e2cbbd353d3107ab3e65c4c41e21>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2e74e2cbbd353d3107ab3e65c4c41e21>`__)(const
DevVarFloatArray \*);

`590 <../../de/ddf/namespaceTango.html#a0729da8d6ceb405a1c3c3ee6a86c5822>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a0729da8d6ceb405a1c3c3ee6a86c5822>`__)(const
DevVarDoubleArray \*);

`591 <../../de/ddf/namespaceTango.html#a356ecdd62f178b5eb547ddba6eddfdce>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a356ecdd62f178b5eb547ddba6eddfdce>`__)(const
DevVarUShortArray \*);

`592 <../../de/ddf/namespaceTango.html#af0e434e9063a4db9a5d175d128cbf39b>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e434e9063a4db9a5d175d128cbf39b>`__)(const
DevVarULongArray \*);

`593 <../../de/ddf/namespaceTango.html#a702218083a878b5b1c4a534af20576d3>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a702218083a878b5b1c4a534af20576d3>`__)(const
DevVarStringArray \*);

`594 <../../de/ddf/namespaceTango.html#ac717b41134caddbfc90b9b77cd645119>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ac717b41134caddbfc90b9b77cd645119>`__)(const
DevVarLongStringArray \*);

`595 <../../de/ddf/namespaceTango.html#ab22a7008ea2d5693f4fa1d67fb5cc041>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab22a7008ea2d5693f4fa1d67fb5cc041>`__)(const
DevVarDoubleStringArray \*);

`596 <../../de/ddf/namespaceTango.html#aa1813a8ea494658abc7f57d523b4bea6>`__ typedef
DevFloat
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Fl\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa1813a8ea494658abc7f57d523b4bea6>`__)(DevState);

597 

`598 <../../de/ddf/namespaceTango.html#a1a6d2e94c31480bf510fe47a89dc2204>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a1a6d2e94c31480bf510fe47a89dc2204>`__)(DevBoolean);

`599 <../../de/ddf/namespaceTango.html#a6a2bc0cc59bcb9d2b34bb52329f8dca6>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6a2bc0cc59bcb9d2b34bb52329f8dca6>`__)(DevShort);

`600 <../../de/ddf/namespaceTango.html#a5d0669880dd907a49d79f845f969410f>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5d0669880dd907a49d79f845f969410f>`__)(DevLong);

`601 <../../de/ddf/namespaceTango.html#a9b40b2dd80aa0086c9d90926fa93e3a2>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a9b40b2dd80aa0086c9d90926fa93e3a2>`__)(DevFloat);

`602 <../../de/ddf/namespaceTango.html#a5a7f4c36fb46a213d9a15fce26707946>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5a7f4c36fb46a213d9a15fce26707946>`__)(DevDouble);

`603 <../../de/ddf/namespaceTango.html#acfe424dee78842332193e03984aa7e53>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#acfe424dee78842332193e03984aa7e53>`__)(DevUShort);

`604 <../../de/ddf/namespaceTango.html#abd084cf2858ebf46b18c8e327c39ee52>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abd084cf2858ebf46b18c8e327c39ee52>`__)(DevULong);

`605 <../../de/ddf/namespaceTango.html#a0f1a29f32a3f4e4422549bff700fc6a9>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a0f1a29f32a3f4e4422549bff700fc6a9>`__)(DevString);

`606 <../../de/ddf/namespaceTango.html#a4ee2d25004efbef1341fd8f59308f1c8>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a4ee2d25004efbef1341fd8f59308f1c8>`__)(const
DevVarCharArray \*);

`607 <../../de/ddf/namespaceTango.html#af90c484f5cc58bb1b06f4332bf9d3a35>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#af90c484f5cc58bb1b06f4332bf9d3a35>`__)(const
DevVarShortArray \*);

`608 <../../de/ddf/namespaceTango.html#ac78738c85f8dff43c42173b5be45b695>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ac78738c85f8dff43c42173b5be45b695>`__)(const
DevVarLongArray \*);

`609 <../../de/ddf/namespaceTango.html#aed4dcaedde79872f636524026ba7c095>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed4dcaedde79872f636524026ba7c095>`__)(const
DevVarFloatArray \*);

`610 <../../de/ddf/namespaceTango.html#ad47704b0b5773aa15020b53a4c068e4f>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ad47704b0b5773aa15020b53a4c068e4f>`__)(const
DevVarDoubleArray \*);

`611 <../../de/ddf/namespaceTango.html#a04d3cfbcdf481426498216fd0ce8e551>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a04d3cfbcdf481426498216fd0ce8e551>`__)(const
DevVarUShortArray \*);

`612 <../../de/ddf/namespaceTango.html#ac91ab97d9dbb0974fc009c45664bb918>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ac91ab97d9dbb0974fc009c45664bb918>`__)(const
DevVarULongArray \*);

`613 <../../de/ddf/namespaceTango.html#a1d0f5b26ec90105fbb663796311b95d0>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a1d0f5b26ec90105fbb663796311b95d0>`__)(const
DevVarStringArray \*);

`614 <../../de/ddf/namespaceTango.html#a16e1ef6933c5a0930591770f4c60b101>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16e1ef6933c5a0930591770f4c60b101>`__)(const
DevVarLongStringArray \*);

`615 <../../de/ddf/namespaceTango.html#a95e5c9b9381da0ba104f2bda51822735>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a95e5c9b9381da0ba104f2bda51822735>`__)(const
DevVarDoubleStringArray \*);

`616 <../../de/ddf/namespaceTango.html#a9075c5a30da1df1363c51ef1789e2a81>`__ typedef
DevDouble
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Db\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a9075c5a30da1df1363c51ef1789e2a81>`__)(DevState);

617 

`618 <../../de/ddf/namespaceTango.html#aa9410e35aa0ec77af2d0df45f1ae4fe8>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aa9410e35aa0ec77af2d0df45f1ae4fe8>`__)(DevBoolean);

`619 <../../de/ddf/namespaceTango.html#a5cc2ba2540da4d601aefc26241cd7d79>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a5cc2ba2540da4d601aefc26241cd7d79>`__)(DevShort);

`620 <../../de/ddf/namespaceTango.html#abf1078d1954644fb95e767c042ec490a>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf1078d1954644fb95e767c042ec490a>`__)(DevLong);

`621 <../../de/ddf/namespaceTango.html#a6c96bc033b359884e35b34a4b3be1a89>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a6c96bc033b359884e35b34a4b3be1a89>`__)(DevFloat);

`622 <../../de/ddf/namespaceTango.html#a5556d60f05b12e8d7d048f27c372e5ba>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5556d60f05b12e8d7d048f27c372e5ba>`__)(DevDouble);

`623 <../../de/ddf/namespaceTango.html#abf3730241e2a34a13928143b015c20a3>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#abf3730241e2a34a13928143b015c20a3>`__)(DevUShort);

`624 <../../de/ddf/namespaceTango.html#a4c2499779c40b328abc81d9dbc84ac83>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4c2499779c40b328abc81d9dbc84ac83>`__)(DevULong);

`625 <../../de/ddf/namespaceTango.html#ac1fa783e614f73e2017fbfb4a324bc0f>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac1fa783e614f73e2017fbfb4a324bc0f>`__)(DevString);

`626 <../../de/ddf/namespaceTango.html#abb0554168f870f1b3f6d8be752787b89>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abb0554168f870f1b3f6d8be752787b89>`__)(const
DevVarCharArray \*);

`627 <../../de/ddf/namespaceTango.html#a382f1790b6a539954e4e8827768574ae>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a382f1790b6a539954e4e8827768574ae>`__)(const
DevVarShortArray \*);

`628 <../../de/ddf/namespaceTango.html#a850180ce2eac858b61307e60e34eb0be>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a850180ce2eac858b61307e60e34eb0be>`__)(const
DevVarLongArray \*);

`629 <../../de/ddf/namespaceTango.html#ad21220bbb3dac5beb352d663b5332185>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad21220bbb3dac5beb352d663b5332185>`__)(const
DevVarFloatArray \*);

`630 <../../de/ddf/namespaceTango.html#a6d29c9e4d01c197d8d9cdf26e8e80d23>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a6d29c9e4d01c197d8d9cdf26e8e80d23>`__)(const
DevVarDoubleArray \*);

`631 <../../de/ddf/namespaceTango.html#a1d3de8c2582a8a4689be2c0d61765893>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1d3de8c2582a8a4689be2c0d61765893>`__)(const
DevVarUShortArray \*);

`632 <../../de/ddf/namespaceTango.html#a088b0addd2c61822d1ca3a8edd4c18d1>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a088b0addd2c61822d1ca3a8edd4c18d1>`__)(const
DevVarULongArray \*);

`633 <../../de/ddf/namespaceTango.html#ab7f942005d40e768cdb6c73f381df476>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab7f942005d40e768cdb6c73f381df476>`__)(const
DevVarStringArray \*);

`634 <../../de/ddf/namespaceTango.html#ace1fa70bc6f0db372fb4fb6cde468fbe>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ace1fa70bc6f0db372fb4fb6cde468fbe>`__)(const
DevVarLongStringArray \*);

`635 <../../de/ddf/namespaceTango.html#a3fcc442f5043a6b51e96da4947d34867>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a3fcc442f5043a6b51e96da4947d34867>`__)(const
DevVarDoubleStringArray \*);

`636 <../../de/ddf/namespaceTango.html#a7492b2d15856a98b6c4dc3d56128fe88>`__ typedef
DevUShort
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`US\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a7492b2d15856a98b6c4dc3d56128fe88>`__)(DevState);

637 

`638 <../../de/ddf/namespaceTango.html#a8e46fac1aa6b30aac256a8bfcdb46866>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a8e46fac1aa6b30aac256a8bfcdb46866>`__)(DevBoolean);

`639 <../../de/ddf/namespaceTango.html#a25cb4414b65aa1f75f4b3ee792afb4a3>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a25cb4414b65aa1f75f4b3ee792afb4a3>`__)(DevShort);

`640 <../../de/ddf/namespaceTango.html#a9ccb3c40addbd095ca2702a7e8f45bf9>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9ccb3c40addbd095ca2702a7e8f45bf9>`__)(DevLong);

`641 <../../de/ddf/namespaceTango.html#afe1f5223f16ddbea109f914fc80a991d>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afe1f5223f16ddbea109f914fc80a991d>`__)(DevFloat);

`642 <../../de/ddf/namespaceTango.html#ab2191ee90a48dd4db2ea1ffd6fbee1ba>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ab2191ee90a48dd4db2ea1ffd6fbee1ba>`__)(DevDouble);

`643 <../../de/ddf/namespaceTango.html#a7046614fc8bd7eeb218380f20167f367>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a7046614fc8bd7eeb218380f20167f367>`__)(DevUShort);

`644 <../../de/ddf/namespaceTango.html#a20a18fcefe87f539a79361eaa7168409>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a20a18fcefe87f539a79361eaa7168409>`__)(DevULong);

`645 <../../de/ddf/namespaceTango.html#a8aa112660f6f56d04d97b7d031b5cd6c>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8aa112660f6f56d04d97b7d031b5cd6c>`__)(DevString);

`646 <../../de/ddf/namespaceTango.html#a5a40d15ef2d3bdf1b83b01ec26c52b9b>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a5a40d15ef2d3bdf1b83b01ec26c52b9b>`__)(const
DevVarCharArray \*);

`647 <../../de/ddf/namespaceTango.html#a02927005ed2fe26d5560a446ed690d74>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a02927005ed2fe26d5560a446ed690d74>`__)(const
DevVarShortArray \*);

`648 <../../de/ddf/namespaceTango.html#a86ccc052e1b4918940658d197e906116>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a86ccc052e1b4918940658d197e906116>`__)(const
DevVarLongArray \*);

`649 <../../de/ddf/namespaceTango.html#adcce4067d006b1c3a7390c1017d5528d>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#adcce4067d006b1c3a7390c1017d5528d>`__)(const
DevVarFloatArray \*);

`650 <../../de/ddf/namespaceTango.html#aa7cf5fc76918c8edf1be960b49031998>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aa7cf5fc76918c8edf1be960b49031998>`__)(const
DevVarDoubleArray \*);

`651 <../../de/ddf/namespaceTango.html#a3bb524341a87ac831259a033742c508d>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3bb524341a87ac831259a033742c508d>`__)(const
DevVarUShortArray \*);

`652 <../../de/ddf/namespaceTango.html#a7688361db16cdf5bc224e0ac0180e06d>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7688361db16cdf5bc224e0ac0180e06d>`__)(const
DevVarULongArray \*);

`653 <../../de/ddf/namespaceTango.html#ab90c32729b784ae8b81988c81994b575>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab90c32729b784ae8b81988c81994b575>`__)(const
DevVarStringArray \*);

`654 <../../de/ddf/namespaceTango.html#a820ac067a558280a79181a6757921a8c>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a820ac067a558280a79181a6757921a8c>`__)(const
DevVarLongStringArray \*);

`655 <../../de/ddf/namespaceTango.html#a1570a69fa50e363806916b930b5a4533>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a1570a69fa50e363806916b930b5a4533>`__)(const
DevVarDoubleStringArray \*);

`656 <../../de/ddf/namespaceTango.html#a0c4e10e65153cb72758d3268ab58650b>`__ typedef
DevULong
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`UL\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0c4e10e65153cb72758d3268ab58650b>`__)(DevState);

657 

`658 <../../de/ddf/namespaceTango.html#a40a9814bcb6e221c75a391e83fbc6580>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a40a9814bcb6e221c75a391e83fbc6580>`__)(DevBoolean);

`659 <../../de/ddf/namespaceTango.html#a1999b8e552e4afffafc3b47eea21a612>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a1999b8e552e4afffafc3b47eea21a612>`__)(DevShort);

`660 <../../de/ddf/namespaceTango.html#a9d5b34a841ed5ebda2865e06f101b985>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9d5b34a841ed5ebda2865e06f101b985>`__)(DevLong);

`661 <../../de/ddf/namespaceTango.html#afc44056cbf2f1159ca565e613ae33f19>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afc44056cbf2f1159ca565e613ae33f19>`__)(DevFloat);

`662 <../../de/ddf/namespaceTango.html#a5672ab56addf5b20bb085b59350d67cf>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5672ab56addf5b20bb085b59350d67cf>`__)(DevDouble);

`663 <../../de/ddf/namespaceTango.html#a983682dbeba22a0c842979acfe3b2e8e>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a983682dbeba22a0c842979acfe3b2e8e>`__)(DevUShort);

`664 <../../de/ddf/namespaceTango.html#ac548faf5341f41096048e05abd30aee6>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ac548faf5341f41096048e05abd30aee6>`__)(DevULong);

`665 <../../de/ddf/namespaceTango.html#ac0151f8c2ccbe9c19a9264ad85495ef0>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac0151f8c2ccbe9c19a9264ad85495ef0>`__)(DevString);

`666 <../../de/ddf/namespaceTango.html#a2dfca0a75e280ac696bb6b0cde41eb4b>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a2dfca0a75e280ac696bb6b0cde41eb4b>`__)(const
DevVarCharArray \*);

`667 <../../de/ddf/namespaceTango.html#a110147ab7b0abde659c86127eca3caf6>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a110147ab7b0abde659c86127eca3caf6>`__)(const
DevVarShortArray \*);

`668 <../../de/ddf/namespaceTango.html#a98ebe9cdf0099a4eba8fd07d92569737>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a98ebe9cdf0099a4eba8fd07d92569737>`__)(const
DevVarLongArray \*);

`669 <../../de/ddf/namespaceTango.html#a1268957ae992d72850180d8faad74774>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1268957ae992d72850180d8faad74774>`__)(const
DevVarFloatArray \*);

`670 <../../de/ddf/namespaceTango.html#a1a09403e4efb8d50e7a94bc4fc6b44d7>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1a09403e4efb8d50e7a94bc4fc6b44d7>`__)(const
DevVarDoubleArray \*);

`671 <../../de/ddf/namespaceTango.html#a9e24adbef58d2df3a8a72d5cbe2456c8>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9e24adbef58d2df3a8a72d5cbe2456c8>`__)(const
DevVarUShortArray \*);

`672 <../../de/ddf/namespaceTango.html#a7c8180c37aa88c0fb127251bdd7ea7f5>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7c8180c37aa88c0fb127251bdd7ea7f5>`__)(const
DevVarULongArray \*);

`673 <../../de/ddf/namespaceTango.html#a66239b227c33aa4bf90e882fbeb5d304>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a66239b227c33aa4bf90e882fbeb5d304>`__)(const
DevVarStringArray \*);

`674 <../../de/ddf/namespaceTango.html#adf81ecda3835b812596ca9cf3ef907cc>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#adf81ecda3835b812596ca9cf3ef907cc>`__)(const
DevVarLongStringArray \*);

`675 <../../de/ddf/namespaceTango.html#afd0db79248dafa09ca14d4ea72dbb8e9>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afd0db79248dafa09ca14d4ea72dbb8e9>`__)(const
DevVarDoubleStringArray \*);

`676 <../../de/ddf/namespaceTango.html#a6188547d1e81c9e1a791c606ea85974b>`__ typedef
DevString
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Str\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6188547d1e81c9e1a791c606ea85974b>`__)(DevState);

677 

`678 <../../de/ddf/namespaceTango.html#ac5d761a62e1e70a4cb4cd56ac191e407>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#ac5d761a62e1e70a4cb4cd56ac191e407>`__)(DevBoolean);

`679 <../../de/ddf/namespaceTango.html#a6c22f648270e1ba92fbddc8e3a830af2>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6c22f648270e1ba92fbddc8e3a830af2>`__)(DevShort);

`680 <../../de/ddf/namespaceTango.html#abf0f2657a6aeeed1583fce1a90d5eb8b>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf0f2657a6aeeed1583fce1a90d5eb8b>`__)(DevLong);

`681 <../../de/ddf/namespaceTango.html#a96f177aabd7459d676af9401a2297a0e>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a96f177aabd7459d676af9401a2297a0e>`__)(DevFloat);

`682 <../../de/ddf/namespaceTango.html#a5d3b787dc982495177cc4c8c15a4e21e>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5d3b787dc982495177cc4c8c15a4e21e>`__)(DevDouble);

`683 <../../de/ddf/namespaceTango.html#a8c38a987e4f5ec7694a1e3ea79a1e609>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a8c38a987e4f5ec7694a1e3ea79a1e609>`__)(DevUShort);

`684 <../../de/ddf/namespaceTango.html#ab0795ad758790e3d488b1d5a3e4a103d>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ab0795ad758790e3d488b1d5a3e4a103d>`__)(DevULong);

`685 <../../de/ddf/namespaceTango.html#a4d4a5e7cba67e879656879a31eae8847>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4d4a5e7cba67e879656879a31eae8847>`__)(DevString);

`686 <../../de/ddf/namespaceTango.html#a9178d3d7149c11b7855361d8e6835df9>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a9178d3d7149c11b7855361d8e6835df9>`__)(const
DevVarCharArray \*);

`687 <../../de/ddf/namespaceTango.html#ae3c3f3f7ec3d8cdcbebfd8d13fb9e359>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae3c3f3f7ec3d8cdcbebfd8d13fb9e359>`__)(const
DevVarShortArray \*);

`688 <../../de/ddf/namespaceTango.html#a9dbc667893feeeeeebac90f89e1b8fcf>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9dbc667893feeeeeebac90f89e1b8fcf>`__)(const
DevVarLongArray \*);

`689 <../../de/ddf/namespaceTango.html#abf1b1f8824e4e1ee0dbe5bf3d24743cf>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#abf1b1f8824e4e1ee0dbe5bf3d24743cf>`__)(const
DevVarFloatArray \*);

`690 <../../de/ddf/namespaceTango.html#a445a95e38f8ccc7572c7d6a816cc4ad2>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a445a95e38f8ccc7572c7d6a816cc4ad2>`__)(const
DevVarDoubleArray \*);

`691 <../../de/ddf/namespaceTango.html#ac0264d94dbc37f7b325f48f9f0e2df43>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac0264d94dbc37f7b325f48f9f0e2df43>`__)(const
DevVarUShortArray \*);

`692 <../../de/ddf/namespaceTango.html#a323da0256914bd98ae2cb15a3c598589>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a323da0256914bd98ae2cb15a3c598589>`__)(const
DevVarULongArray \*);

`693 <../../de/ddf/namespaceTango.html#a805a654c5cbb7b66cd6ad5f596a78e76>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a805a654c5cbb7b66cd6ad5f596a78e76>`__)(const
DevVarStringArray \*);

`694 <../../de/ddf/namespaceTango.html#a45bce45e4f3aa8bf600d4f5cbc9197bb>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a45bce45e4f3aa8bf600d4f5cbc9197bb>`__)(const
DevVarLongStringArray \*);

`695 <../../de/ddf/namespaceTango.html#a6f5e67a58f92920da533a17ca55eee19>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6f5e67a58f92920da533a17ca55eee19>`__)(const
DevVarDoubleStringArray \*);

`696 <../../de/ddf/namespaceTango.html#aabddb254c3961a81c2ae529d9572fd1d>`__ typedef
DevVarCharArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ChA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aabddb254c3961a81c2ae529d9572fd1d>`__)(DevState);

697 

`698 <../../de/ddf/namespaceTango.html#a23daa21a9f047afbf1b6d226ae6dcb6d>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a23daa21a9f047afbf1b6d226ae6dcb6d>`__)(DevBoolean);

`699 <../../de/ddf/namespaceTango.html#a455f11cf6a5865934da33a3c28ec7285>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a455f11cf6a5865934da33a3c28ec7285>`__)(DevShort);

`700 <../../de/ddf/namespaceTango.html#a041ffbd7ac59236f0d7ef2577a257309>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a041ffbd7ac59236f0d7ef2577a257309>`__)(DevLong);

`701 <../../de/ddf/namespaceTango.html#a97883276a816ee3c92f02155cbe9f614>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a97883276a816ee3c92f02155cbe9f614>`__)(DevFloat);

`702 <../../de/ddf/namespaceTango.html#aefed3c29345dee7e5fe2cae6e3a3094d>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aefed3c29345dee7e5fe2cae6e3a3094d>`__)(DevDouble);

`703 <../../de/ddf/namespaceTango.html#ae3408867217dd634e9baa3b8b2e00b71>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ae3408867217dd634e9baa3b8b2e00b71>`__)(DevUShort);

`704 <../../de/ddf/namespaceTango.html#a746ff0e93e2d258238e304aa47a5116b>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a746ff0e93e2d258238e304aa47a5116b>`__)(DevULong);

`705 <../../de/ddf/namespaceTango.html#a2935b04f55581288a77879c473348f69>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2935b04f55581288a77879c473348f69>`__)(DevString);

`706 <../../de/ddf/namespaceTango.html#ab536dbec16fdc6aab3c00f20ae43599e>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab536dbec16fdc6aab3c00f20ae43599e>`__)(const
DevVarCharArray \*);

`707 <../../de/ddf/namespaceTango.html#a2de6d535c00e1420b4c6eed0e306b9f6>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2de6d535c00e1420b4c6eed0e306b9f6>`__)(const
DevVarShortArray \*);

`708 <../../de/ddf/namespaceTango.html#a9d1de323b47750050398563b93286e1f>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9d1de323b47750050398563b93286e1f>`__)(const
DevVarLongArray \*);

`709 <../../de/ddf/namespaceTango.html#aed3383a83a7af2f5eca4038f8e86c89f>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed3383a83a7af2f5eca4038f8e86c89f>`__)(const
DevVarFloatArray \*);

`710 <../../de/ddf/namespaceTango.html#a22aac172c20bfdbbbb45d8cffd4e0686>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a22aac172c20bfdbbbb45d8cffd4e0686>`__)(const
DevVarDoubleArray \*);

`711 <../../de/ddf/namespaceTango.html#a4a95f6528d2f1b677f794190c997f75a>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4a95f6528d2f1b677f794190c997f75a>`__)(const
DevVarUShortArray \*);

`712 <../../de/ddf/namespaceTango.html#a9c9c3ee5bb7d38117f9817d94d7a63f8>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a9c9c3ee5bb7d38117f9817d94d7a63f8>`__)(const
DevVarULongArray \*);

`713 <../../de/ddf/namespaceTango.html#afce3f10debd2aaa02412f71cf734ef05>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#afce3f10debd2aaa02412f71cf734ef05>`__)(const
DevVarStringArray \*);

`714 <../../de/ddf/namespaceTango.html#ade779ac6b063ec3d874e1cd73035b29f>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ade779ac6b063ec3d874e1cd73035b29f>`__)(const
DevVarLongStringArray \*);

`715 <../../de/ddf/namespaceTango.html#aef15feb4d2302cd1eb8e622c71ec3688>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aef15feb4d2302cd1eb8e622c71ec3688>`__)(const
DevVarDoubleStringArray \*);

`716 <../../de/ddf/namespaceTango.html#ae1229e38ddd435fd9018df7d7741a78c>`__ typedef
DevVarShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ShA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ae1229e38ddd435fd9018df7d7741a78c>`__)(DevState);

717 

`718 <../../de/ddf/namespaceTango.html#a3f6156a7c49f97847df7dc214afeaa6b>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a3f6156a7c49f97847df7dc214afeaa6b>`__)(DevBoolean);

`719 <../../de/ddf/namespaceTango.html#adf650ac3a63e6130b13a4cfbabb6866f>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#adf650ac3a63e6130b13a4cfbabb6866f>`__)(DevShort);

`720 <../../de/ddf/namespaceTango.html#a95cadafd34967e03eac7a86388585d8b>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a95cadafd34967e03eac7a86388585d8b>`__)(DevLong);

`721 <../../de/ddf/namespaceTango.html#aa0917ab8eec462a32230d024ee9bf2db>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa0917ab8eec462a32230d024ee9bf2db>`__)(DevFloat);

`722 <../../de/ddf/namespaceTango.html#a88c426c42fcd82727c47ce13573482de>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a88c426c42fcd82727c47ce13573482de>`__)(DevDouble);

`723 <../../de/ddf/namespaceTango.html#a32518cfc275adda69cb6d1506dbfb0ba>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a32518cfc275adda69cb6d1506dbfb0ba>`__)(DevUShort);

`724 <../../de/ddf/namespaceTango.html#a6dc919f2fc2d5f382f6501bf8e747b00>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a6dc919f2fc2d5f382f6501bf8e747b00>`__)(DevULong);

`725 <../../de/ddf/namespaceTango.html#a3562e98dae4db9176955368029ebe581>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a3562e98dae4db9176955368029ebe581>`__)(DevString);

`726 <../../de/ddf/namespaceTango.html#aba43697d1a4ea480ea3fc83e7528946f>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aba43697d1a4ea480ea3fc83e7528946f>`__)(const
DevVarCharArray \*);

`727 <../../de/ddf/namespaceTango.html#afb3dea7dd29cc9fa1954223ca4106238>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#afb3dea7dd29cc9fa1954223ca4106238>`__)(const
DevVarShortArray \*);

`728 <../../de/ddf/namespaceTango.html#acd1484770a3cbfac1c9e468b44c4fd38>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#acd1484770a3cbfac1c9e468b44c4fd38>`__)(const
DevVarLongArray \*);

`729 <../../de/ddf/namespaceTango.html#a8d86caa43aec090fd2cbd0c630c060aa>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8d86caa43aec090fd2cbd0c630c060aa>`__)(const
DevVarFloatArray \*);

`730 <../../de/ddf/namespaceTango.html#aef40c6313f2bc5519c51222a55f78858>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aef40c6313f2bc5519c51222a55f78858>`__)(const
DevVarDoubleArray \*);

`731 <../../de/ddf/namespaceTango.html#a892d92bb8f8079591bc2b8eff4c4697f>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a892d92bb8f8079591bc2b8eff4c4697f>`__)(const
DevVarUShortArray \*);

`732 <../../de/ddf/namespaceTango.html#a1dce6ec9750bd0ee87e63ff6434b182c>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1dce6ec9750bd0ee87e63ff6434b182c>`__)(const
DevVarULongArray \*);

`733 <../../de/ddf/namespaceTango.html#a2e4ac9120ed53437763e911d2399d50f>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2e4ac9120ed53437763e911d2399d50f>`__)(const
DevVarStringArray \*);

`734 <../../de/ddf/namespaceTango.html#ad79c9b83cff71c8436e52167d01a5a9c>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ad79c9b83cff71c8436e52167d01a5a9c>`__)(const
DevVarLongStringArray \*);

`735 <../../de/ddf/namespaceTango.html#afff024c7f63ab115f87b2f39149eb0f7>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afff024c7f63ab115f87b2f39149eb0f7>`__)(const
DevVarDoubleStringArray \*);

`736 <../../de/ddf/namespaceTango.html#a4486fc46e5e056a749756e3a3b79326c>`__ typedef
DevVarLongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LgA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a4486fc46e5e056a749756e3a3b79326c>`__)(DevState);

737 

`738 <../../de/ddf/namespaceTango.html#a552bc3e33b5300cd784892217b1d48bc>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a552bc3e33b5300cd784892217b1d48bc>`__)(DevBoolean);

`739 <../../de/ddf/namespaceTango.html#afc7d2eaf3685d591951b5e7b2ed799ea>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#afc7d2eaf3685d591951b5e7b2ed799ea>`__)(DevShort);

`740 <../../de/ddf/namespaceTango.html#a949eec48c348d7251eda1e8cb2c8597b>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a949eec48c348d7251eda1e8cb2c8597b>`__)(DevLong);

`741 <../../de/ddf/namespaceTango.html#a4ac9bbb22169d14016643241d6cdae9d>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4ac9bbb22169d14016643241d6cdae9d>`__)(DevFloat);

`742 <../../de/ddf/namespaceTango.html#a554958ba6088a065d290bf044243951e>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a554958ba6088a065d290bf044243951e>`__)(DevDouble);

`743 <../../de/ddf/namespaceTango.html#a3b4e85bd14a1074b67b362283dcf68f9>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a3b4e85bd14a1074b67b362283dcf68f9>`__)(DevUShort);

`744 <../../de/ddf/namespaceTango.html#a433d0ae93b52521c1b17bdd6557ed5f3>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a433d0ae93b52521c1b17bdd6557ed5f3>`__)(DevULong);

`745 <../../de/ddf/namespaceTango.html#a9ff925023cc9e8ebf63c8a42af440dee>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a9ff925023cc9e8ebf63c8a42af440dee>`__)(DevString);

`746 <../../de/ddf/namespaceTango.html#ab6f3c71e51213d48e8602689491e1421>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab6f3c71e51213d48e8602689491e1421>`__)(const
DevVarCharArray \*);

`747 <../../de/ddf/namespaceTango.html#a5a29e5d7d5f5f1e4dfae56fdfd9a5e29>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a5a29e5d7d5f5f1e4dfae56fdfd9a5e29>`__)(const
DevVarShortArray \*);

`748 <../../de/ddf/namespaceTango.html#a7bdae07e9af31bb99b110cee82036929>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a7bdae07e9af31bb99b110cee82036929>`__)(const
DevVarLongArray \*);

`749 <../../de/ddf/namespaceTango.html#aad88fd97f46fe72a9a30853e3b5c1dca>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aad88fd97f46fe72a9a30853e3b5c1dca>`__)(const
DevVarFloatArray \*);

`750 <../../de/ddf/namespaceTango.html#a1b8f556f14107eac612ab9fd65d83ded>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1b8f556f14107eac612ab9fd65d83ded>`__)(const
DevVarDoubleArray \*);

`751 <../../de/ddf/namespaceTango.html#ac891ac799f88786a673c7dca09324788>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac891ac799f88786a673c7dca09324788>`__)(const
DevVarUShortArray \*);

`752 <../../de/ddf/namespaceTango.html#aeb265657e3fd3a016afd720469d9a0e3>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#aeb265657e3fd3a016afd720469d9a0e3>`__)(const
DevVarULongArray \*);

`753 <../../de/ddf/namespaceTango.html#a7e0a051d44833ee4db580ea1a5032076>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a7e0a051d44833ee4db580ea1a5032076>`__)(const
DevVarStringArray \*);

`754 <../../de/ddf/namespaceTango.html#af3cf4a117477ce8cf3ab174ae40e77cb>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af3cf4a117477ce8cf3ab174ae40e77cb>`__)(const
DevVarLongStringArray \*);

`755 <../../de/ddf/namespaceTango.html#a2a0324510f9ca8366abc0be08fd4abbb>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a2a0324510f9ca8366abc0be08fd4abbb>`__)(const
DevVarDoubleStringArray \*);

`756 <../../de/ddf/namespaceTango.html#aa6f4d629b33bb4912fa2f36c9114d3c0>`__ typedef
DevVarFloatArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`FlA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa6f4d629b33bb4912fa2f36c9114d3c0>`__)(DevState);

757 

`758 <../../de/ddf/namespaceTango.html#a6818e79202b7706fd1077677547c79b7>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6818e79202b7706fd1077677547c79b7>`__)(DevBoolean);

`759 <../../de/ddf/namespaceTango.html#a88c97ca59f8800f16f194fa9d26a9cb4>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a88c97ca59f8800f16f194fa9d26a9cb4>`__)(DevShort);

`760 <../../de/ddf/namespaceTango.html#aef3b3ef805b6b12ba4d9433e50486f3e>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#aef3b3ef805b6b12ba4d9433e50486f3e>`__)(DevLong);

`761 <../../de/ddf/namespaceTango.html#a8f5a35851e86bbf8dc1d0fce64c551d8>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8f5a35851e86bbf8dc1d0fce64c551d8>`__)(DevFloat);

`762 <../../de/ddf/namespaceTango.html#a973222d63ba4a7fb5cdbaa54226271c2>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a973222d63ba4a7fb5cdbaa54226271c2>`__)(DevDouble);

`763 <../../de/ddf/namespaceTango.html#a1242bc728e082bc284eebc5f7f3a5da9>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a1242bc728e082bc284eebc5f7f3a5da9>`__)(DevUShort);

`764 <../../de/ddf/namespaceTango.html#a692637a79793edac686bcf3fbcc52eba>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a692637a79793edac686bcf3fbcc52eba>`__)(DevULong);

`765 <../../de/ddf/namespaceTango.html#a85dbb1d095f2cbee03b38b533c6c769f>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a85dbb1d095f2cbee03b38b533c6c769f>`__)(DevString);

`766 <../../de/ddf/namespaceTango.html#aa071b24bf0e05cf735319a6f04917b47>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aa071b24bf0e05cf735319a6f04917b47>`__)(const
DevVarCharArray \*);

`767 <../../de/ddf/namespaceTango.html#ad0b5621ff445d78aae963af48a99ade2>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ad0b5621ff445d78aae963af48a99ade2>`__)(const
DevVarShortArray \*);

`768 <../../de/ddf/namespaceTango.html#ae3d6872bb2b99b3be2a54ee3caabd840>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ae3d6872bb2b99b3be2a54ee3caabd840>`__)(const
DevVarLongArray \*);

`769 <../../de/ddf/namespaceTango.html#a58a708b78130c59874236651bf54fe14>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a58a708b78130c59874236651bf54fe14>`__)(const
DevVarFloatArray \*);

`770 <../../de/ddf/namespaceTango.html#a061711ccdd6afbbdbb1e973e7341292d>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a061711ccdd6afbbdbb1e973e7341292d>`__)(const
DevVarDoubleArray \*);

`771 <../../de/ddf/namespaceTango.html#a15aecaff77a9e5ee9a0387b921e001b4>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a15aecaff77a9e5ee9a0387b921e001b4>`__)(const
DevVarUShortArray \*);

`772 <../../de/ddf/namespaceTango.html#a62b352bc859c6b9ef32092f63299a46c>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a62b352bc859c6b9ef32092f63299a46c>`__)(const
DevVarULongArray \*);

`773 <../../de/ddf/namespaceTango.html#abfccabdb91cf8123716c919c4183f890>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abfccabdb91cf8123716c919c4183f890>`__)(const
DevVarStringArray \*);

`774 <../../de/ddf/namespaceTango.html#a6a5f8b731e62e7c050c7d5cb53f21372>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6a5f8b731e62e7c050c7d5cb53f21372>`__)(const
DevVarLongStringArray \*);

`775 <../../de/ddf/namespaceTango.html#a91339b16565f187eba76fdb333acb7b7>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a91339b16565f187eba76fdb333acb7b7>`__)(const
DevVarDoubleStringArray \*);

`776 <../../de/ddf/namespaceTango.html#a2f96695d024caa9fb13ac7e79d0b90c8>`__ typedef
DevVarDoubleArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DbA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2f96695d024caa9fb13ac7e79d0b90c8>`__)(DevState);

777 

`778 <../../de/ddf/namespaceTango.html#a0828c914f3df39da3bf0059d627c6906>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a0828c914f3df39da3bf0059d627c6906>`__)(DevBoolean);

`779 <../../de/ddf/namespaceTango.html#ad0ecb778178bf8c33e91d9c04ec9d55e>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad0ecb778178bf8c33e91d9c04ec9d55e>`__)(DevShort);

`780 <../../de/ddf/namespaceTango.html#a3333f3b8339bcd64877d85100e8e39f2>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3333f3b8339bcd64877d85100e8e39f2>`__)(DevLong);

`781 <../../de/ddf/namespaceTango.html#ae81238bd9f048075d6aaaf4c12af79dc>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ae81238bd9f048075d6aaaf4c12af79dc>`__)(DevFloat);

`782 <../../de/ddf/namespaceTango.html#a5af02355146cf5e5b1913d250270e655>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5af02355146cf5e5b1913d250270e655>`__)(DevDouble);

`783 <../../de/ddf/namespaceTango.html#a9ab54159e793670d65f1dc258b2dbbe4>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a9ab54159e793670d65f1dc258b2dbbe4>`__)(DevUShort);

`784 <../../de/ddf/namespaceTango.html#a31a17b85f42a2502b72cdd8ddeba8d4b>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a31a17b85f42a2502b72cdd8ddeba8d4b>`__)(DevULong);

`785 <../../de/ddf/namespaceTango.html#a626d30f575e50ea80d8b3fc4d2c3eb77>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a626d30f575e50ea80d8b3fc4d2c3eb77>`__)(DevString);

`786 <../../de/ddf/namespaceTango.html#a05ffe2ec11e661ee8b4c3ef5bfb56fd3>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a05ffe2ec11e661ee8b4c3ef5bfb56fd3>`__)(const
DevVarCharArray \*);

`787 <../../de/ddf/namespaceTango.html#a294f2e96ee27b9256e6d6f931358e51f>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a294f2e96ee27b9256e6d6f931358e51f>`__)(const
DevVarShortArray \*);

`788 <../../de/ddf/namespaceTango.html#ab660811f69a6bffdbe21999acf8e1c6d>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ab660811f69a6bffdbe21999acf8e1c6d>`__)(const
DevVarLongArray \*);

`789 <../../de/ddf/namespaceTango.html#ad5011e593cedad628081504420f6f7aa>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad5011e593cedad628081504420f6f7aa>`__)(const
DevVarFloatArray \*);

`790 <../../de/ddf/namespaceTango.html#ab9e1a5ba2e69320bb0485bc233fb137c>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ab9e1a5ba2e69320bb0485bc233fb137c>`__)(const
DevVarDoubleArray \*);

`791 <../../de/ddf/namespaceTango.html#a563cc70a5fe8aed106a3a796ba60cb6a>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a563cc70a5fe8aed106a3a796ba60cb6a>`__)(const
DevVarUShortArray \*);

`792 <../../de/ddf/namespaceTango.html#a5cdc80cde7ff434ef3dc2f808141f1a5>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a5cdc80cde7ff434ef3dc2f808141f1a5>`__)(const
DevVarULongArray \*);

`793 <../../de/ddf/namespaceTango.html#aeb90324f4a1e89c7ac71c416b5f9f593>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#aeb90324f4a1e89c7ac71c416b5f9f593>`__)(const
DevVarStringArray \*);

`794 <../../de/ddf/namespaceTango.html#a38cf8829fd4c12c3f414d9a77b84cd2a>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a38cf8829fd4c12c3f414d9a77b84cd2a>`__)(const
DevVarLongStringArray \*);

`795 <../../de/ddf/namespaceTango.html#a76911c4c228b99f2f18d9a5d8b2234c4>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a76911c4c228b99f2f18d9a5d8b2234c4>`__)(const
DevVarDoubleStringArray \*);

`796 <../../de/ddf/namespaceTango.html#a1ddcb4b268e5ef48598a6a3da104ae26>`__ typedef
DevVarUShortArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`USA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a1ddcb4b268e5ef48598a6a3da104ae26>`__)(DevState);

797 

`798 <../../de/ddf/namespaceTango.html#a54ccbd92b3f03fe71966fd2902f6c50c>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a54ccbd92b3f03fe71966fd2902f6c50c>`__)(DevBoolean);

`799 <../../de/ddf/namespaceTango.html#a95768ab0afefed8a3af059885d869ea4>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a95768ab0afefed8a3af059885d869ea4>`__)(DevShort);

`800 <../../de/ddf/namespaceTango.html#a5bb875c6a8e951bfa0572d995d539220>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5bb875c6a8e951bfa0572d995d539220>`__)(DevLong);

`801 <../../de/ddf/namespaceTango.html#a1b18295c55f95416d8ff43654cdbdae8>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a1b18295c55f95416d8ff43654cdbdae8>`__)(DevFloat);

`802 <../../de/ddf/namespaceTango.html#a0d7fe901ca23754d58856538fa4f56e3>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a0d7fe901ca23754d58856538fa4f56e3>`__)(DevDouble);

`803 <../../de/ddf/namespaceTango.html#a2cfcd2c217a5101977aceea3ae04ffe7>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a2cfcd2c217a5101977aceea3ae04ffe7>`__)(DevUShort);

`804 <../../de/ddf/namespaceTango.html#abac55dd89ec41601bbe588701f1c50c6>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abac55dd89ec41601bbe588701f1c50c6>`__)(DevULong);

`805 <../../de/ddf/namespaceTango.html#a479357c0847479f17c502093c0631cb2>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a479357c0847479f17c502093c0631cb2>`__)(DevString);

`806 <../../de/ddf/namespaceTango.html#a38388820e592d7301290627c387256c9>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a38388820e592d7301290627c387256c9>`__)(const
DevVarCharArray \*);

`807 <../../de/ddf/namespaceTango.html#a1dfb2afc81e0fd7dab926225d6ab0575>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1dfb2afc81e0fd7dab926225d6ab0575>`__)(const
DevVarShortArray \*);

`808 <../../de/ddf/namespaceTango.html#ad91a30bf455dae012ea16cbe89f6d2cf>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad91a30bf455dae012ea16cbe89f6d2cf>`__)(const
DevVarLongArray \*);

`809 <../../de/ddf/namespaceTango.html#a6bdc151f110754cd8db22e6a9d0da411>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a6bdc151f110754cd8db22e6a9d0da411>`__)(const
DevVarFloatArray \*);

`810 <../../de/ddf/namespaceTango.html#a4aa60f30887e6987cf84aacb1479ff59>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a4aa60f30887e6987cf84aacb1479ff59>`__)(const
DevVarDoubleArray \*);

`811 <../../de/ddf/namespaceTango.html#a12224ab05d77c35c35ae57e072c1f4f8>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a12224ab05d77c35c35ae57e072c1f4f8>`__)(const
DevVarUShortArray \*);

`812 <../../de/ddf/namespaceTango.html#a51e8661e75847bff177abac012c2446d>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a51e8661e75847bff177abac012c2446d>`__)(const
DevVarULongArray \*);

`813 <../../de/ddf/namespaceTango.html#a3e5fb6e53a831e518ba26a167a5416ea>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a3e5fb6e53a831e518ba26a167a5416ea>`__)(const
DevVarStringArray \*);

`814 <../../de/ddf/namespaceTango.html#a3516033af2f5b9b4c067e2f1811473e1>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a3516033af2f5b9b4c067e2f1811473e1>`__)(const
DevVarLongStringArray \*);

`815 <../../de/ddf/namespaceTango.html#ab1acf9d0cfb6b61741feb047ff91e4a2>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab1acf9d0cfb6b61741feb047ff91e4a2>`__)(const
DevVarDoubleStringArray \*);

`816 <../../de/ddf/namespaceTango.html#a0f4f21efc54e67ed3d1f6faa0e0d5d32>`__ typedef
DevVarULongArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ULA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0f4f21efc54e67ed3d1f6faa0e0d5d32>`__)(DevState);

817 

`818 <../../de/ddf/namespaceTango.html#a42781244cb79430236b4982443a7453e>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a42781244cb79430236b4982443a7453e>`__)(DevBoolean);

`819 <../../de/ddf/namespaceTango.html#ae4413ba74a63fbfedb51f47425103946>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae4413ba74a63fbfedb51f47425103946>`__)(DevShort);

`820 <../../de/ddf/namespaceTango.html#a3c1ed43b6a4271e23edaa07b717da820>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3c1ed43b6a4271e23edaa07b717da820>`__)(DevLong);

`821 <../../de/ddf/namespaceTango.html#a3e354d67229b352ec632f5d882e71dbf>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a3e354d67229b352ec632f5d882e71dbf>`__)(DevFloat);

`822 <../../de/ddf/namespaceTango.html#a555dee748cf031c4f9c35a106107f61e>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a555dee748cf031c4f9c35a106107f61e>`__)(DevDouble);

`823 <../../de/ddf/namespaceTango.html#a47a62ad5d9d4000b52ee61eedd4e769a>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47a62ad5d9d4000b52ee61eedd4e769a>`__)(DevUShort);

`824 <../../de/ddf/namespaceTango.html#a92a9bf19f13524fe56682f7d9741bcbc>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a92a9bf19f13524fe56682f7d9741bcbc>`__)(DevULong);

`825 <../../de/ddf/namespaceTango.html#a35b60241080818518fc170c8af09797b>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a35b60241080818518fc170c8af09797b>`__)(DevString);

`826 <../../de/ddf/namespaceTango.html#abd614846a99e6c900eab2c5ca1a0a2af>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abd614846a99e6c900eab2c5ca1a0a2af>`__)(const
DevVarCharArray \*);

`827 <../../de/ddf/namespaceTango.html#a2d0db7b42b24f05e95ffc2ad02908a61>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2d0db7b42b24f05e95ffc2ad02908a61>`__)(const
DevVarShortArray \*);

`828 <../../de/ddf/namespaceTango.html#a862ced750c1a7f269eaceb4c90e84c8e>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a862ced750c1a7f269eaceb4c90e84c8e>`__)(const
DevVarLongArray \*);

`829 <../../de/ddf/namespaceTango.html#a2b4466c2a950e858652a772f7e0d3f2d>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2b4466c2a950e858652a772f7e0d3f2d>`__)(const
DevVarFloatArray \*);

`830 <../../de/ddf/namespaceTango.html#a529af943f0ba358e21e8e752994dc29d>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a529af943f0ba358e21e8e752994dc29d>`__)(const
DevVarDoubleArray \*);

`831 <../../de/ddf/namespaceTango.html#a637507c7ca306deb043f189f1c6279ae>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a637507c7ca306deb043f189f1c6279ae>`__)(const
DevVarUShortArray \*);

`832 <../../de/ddf/namespaceTango.html#a1a47aab5f31ddd6c224ff3bf0fb8e605>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1a47aab5f31ddd6c224ff3bf0fb8e605>`__)(const
DevVarULongArray \*);

`833 <../../de/ddf/namespaceTango.html#abce5e47b440d28f5c0a360e914c81c23>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abce5e47b440d28f5c0a360e914c81c23>`__)(const
DevVarStringArray \*);

`834 <../../de/ddf/namespaceTango.html#a16efd1d060e1516e1c468b6c3afe1dcd>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16efd1d060e1516e1c468b6c3afe1dcd>`__)(const
DevVarLongStringArray \*);

`835 <../../de/ddf/namespaceTango.html#a019e5f75d68fdd1a5bc5482e6f6528a8>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a019e5f75d68fdd1a5bc5482e6f6528a8>`__)(const
DevVarDoubleStringArray \*);

`836 <../../de/ddf/namespaceTango.html#a2fbed6c7533bbd7d7e852ccc253910b2>`__ typedef
DevVarStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`StrA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2fbed6c7533bbd7d7e852ccc253910b2>`__)(DevState);

837 

`838 <../../de/ddf/namespaceTango.html#a5b82af490025cb3c7bf47f7d0d745d9a>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5b82af490025cb3c7bf47f7d0d745d9a>`__)(DevBoolean);

`839 <../../de/ddf/namespaceTango.html#a03f1c8acd7edabaf22088434d3a508f8>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a03f1c8acd7edabaf22088434d3a508f8>`__)(DevShort);

`840 <../../de/ddf/namespaceTango.html#a2caba80f93a90fbca5553319477b76f2>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a2caba80f93a90fbca5553319477b76f2>`__)(DevLong);

`841 <../../de/ddf/namespaceTango.html#a099fe79b75b7d473084dd9c68810f24e>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a099fe79b75b7d473084dd9c68810f24e>`__)(DevFloat);

`842 <../../de/ddf/namespaceTango.html#aa5585f14cdc16510ffac8d6d547979fb>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aa5585f14cdc16510ffac8d6d547979fb>`__)(DevDouble);

`843 <../../de/ddf/namespaceTango.html#afa41a9d249a2d25253b6a218a44b4c4f>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#afa41a9d249a2d25253b6a218a44b4c4f>`__)(DevUShort);

`844 <../../de/ddf/namespaceTango.html#a7347383b7f761a15c2f514ee79df50ad>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a7347383b7f761a15c2f514ee79df50ad>`__)(DevULong);

`845 <../../de/ddf/namespaceTango.html#a10a2ee32a8b9975b5e90d904038195a4>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a10a2ee32a8b9975b5e90d904038195a4>`__)(DevString);

`846 <../../de/ddf/namespaceTango.html#aeaab053de30874e20d90ddec392a2a17>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aeaab053de30874e20d90ddec392a2a17>`__)(const
DevVarCharArray \*);

`847 <../../de/ddf/namespaceTango.html#ae7c53c1f0eca4abc14716e575a50b726>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae7c53c1f0eca4abc14716e575a50b726>`__)(const
DevVarShortArray \*);

`848 <../../de/ddf/namespaceTango.html#a1f29ec9095da2c6d9fbebec1a4dc9113>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a1f29ec9095da2c6d9fbebec1a4dc9113>`__)(const
DevVarLongArray \*);

`849 <../../de/ddf/namespaceTango.html#a8b302641054eb58ac37ff348144b796b>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8b302641054eb58ac37ff348144b796b>`__)(const
DevVarFloatArray \*);

`850 <../../de/ddf/namespaceTango.html#abf1f347a1975690532972f336c1025db>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#abf1f347a1975690532972f336c1025db>`__)(const
DevVarDoubleArray \*);

`851 <../../de/ddf/namespaceTango.html#a01c48763b9173b9b9bd6ef4ae27b1bd9>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a01c48763b9173b9b9bd6ef4ae27b1bd9>`__)(const
DevVarUShortArray \*);

`852 <../../de/ddf/namespaceTango.html#a0a7f0e04602698f2334bf26bdceb3711>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a0a7f0e04602698f2334bf26bdceb3711>`__)(const
DevVarULongArray \*);

`853 <../../de/ddf/namespaceTango.html#af8e467078adbc93998535b58afcbd6a9>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e467078adbc93998535b58afcbd6a9>`__)(const
DevVarStringArray \*);

`854 <../../de/ddf/namespaceTango.html#a2d75ce198c7291312e730c1ea627dc81>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a2d75ce198c7291312e730c1ea627dc81>`__)(const
DevVarLongStringArray \*);

`855 <../../de/ddf/namespaceTango.html#aa90dd6f6a952934368deefecf1f2766a>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aa90dd6f6a952934368deefecf1f2766a>`__)(const
DevVarDoubleStringArray \*);

`856 <../../de/ddf/namespaceTango.html#ad38f8025096139587b80b68333428c5a>`__ typedef
DevVarLongStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`LSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ad38f8025096139587b80b68333428c5a>`__)(DevState);

857 

`858 <../../de/ddf/namespaceTango.html#a5c7d41dae299baf8d1b6018f10c2a340>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5c7d41dae299baf8d1b6018f10c2a340>`__)(DevBoolean);

`859 <../../de/ddf/namespaceTango.html#a40419b07604cfcbbab16f9e32c9ac955>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a40419b07604cfcbbab16f9e32c9ac955>`__)(DevShort);

`860 <../../de/ddf/namespaceTango.html#a1be5b8e40c2786dfe7894e32050cb3be>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a1be5b8e40c2786dfe7894e32050cb3be>`__)(DevLong);

`861 <../../de/ddf/namespaceTango.html#aac18e719cba0acd9758e1cc738a81d26>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aac18e719cba0acd9758e1cc738a81d26>`__)(DevFloat);

`862 <../../de/ddf/namespaceTango.html#a7d5075ed5894aabcd125e3dacdd6944a>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a7d5075ed5894aabcd125e3dacdd6944a>`__)(DevDouble);

`863 <../../de/ddf/namespaceTango.html#a042c2f0070e4166a2f5cf0c275128bb3>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a042c2f0070e4166a2f5cf0c275128bb3>`__)(DevUShort);

`864 <../../de/ddf/namespaceTango.html#a5783faf10f3dbb63b91e590556c60d82>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5783faf10f3dbb63b91e590556c60d82>`__)(DevULong);

`865 <../../de/ddf/namespaceTango.html#aafb90d7188a7adc14a418effe7d97027>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#aafb90d7188a7adc14a418effe7d97027>`__)(DevString);

`866 <../../de/ddf/namespaceTango.html#a61c57d16dc7a3878d247ae41300faef5>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a61c57d16dc7a3878d247ae41300faef5>`__)(const
DevVarCharArray \*);

`867 <../../de/ddf/namespaceTango.html#a1384ff007c9d1a8a04158f02d8883d9e>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1384ff007c9d1a8a04158f02d8883d9e>`__)(const
DevVarShortArray \*);

`868 <../../de/ddf/namespaceTango.html#a802d965a52b52ebfc1b291a9f2e3cead>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a802d965a52b52ebfc1b291a9f2e3cead>`__)(const
DevVarLongArray \*);

`869 <../../de/ddf/namespaceTango.html#a80f0a2e894cb83ce221f3a7624b37881>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a80f0a2e894cb83ce221f3a7624b37881>`__)(const
DevVarFloatArray \*);

`870 <../../de/ddf/namespaceTango.html#ac4870fee6c00778de39d3c91c6ef04f6>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac4870fee6c00778de39d3c91c6ef04f6>`__)(const
DevVarDoubleArray \*);

`871 <../../de/ddf/namespaceTango.html#a1654b8d1b277ddefcda32555548a4050>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1654b8d1b277ddefcda32555548a4050>`__)(const
DevVarUShortArray \*);

`872 <../../de/ddf/namespaceTango.html#af03a472d546249cf9f2fd0296a94bc98>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af03a472d546249cf9f2fd0296a94bc98>`__)(const
DevVarULongArray \*);

`873 <../../de/ddf/namespaceTango.html#a38b5baa75448d5248e1ab478f5ac711d>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a38b5baa75448d5248e1ab478f5ac711d>`__)(const
DevVarStringArray \*);

`874 <../../de/ddf/namespaceTango.html#a6be3d448da80b69433d6d39d745bfc19>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6be3d448da80b69433d6d39d745bfc19>`__)(const
DevVarLongStringArray \*);

`875 <../../de/ddf/namespaceTango.html#a296618d8c9168a46520e43d007f842c3>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a296618d8c9168a46520e43d007f842c3>`__)(const
DevVarDoubleStringArray \*);

`876 <../../de/ddf/namespaceTango.html#afcd8fded693c7cfbb54083f44a9fe207>`__ typedef
DevVarDoubleStringArray
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`DSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#afcd8fded693c7cfbb54083f44a9fe207>`__)(DevState);

877 

`878 <../../de/ddf/namespaceTango.html#a6d8fd405c309dd0e779fd240185f5a0a>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d8fd405c309dd0e779fd240185f5a0a>`__)(DevBoolean);

`879 <../../de/ddf/namespaceTango.html#a7f148ac65a847c00105f1016485966c5>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a7f148ac65a847c00105f1016485966c5>`__)(DevShort);

`880 <../../de/ddf/namespaceTango.html#af4f31dc2bf3b271f187dd5f8da92c98b>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af4f31dc2bf3b271f187dd5f8da92c98b>`__)(DevLong);

`881 <../../de/ddf/namespaceTango.html#a4cefd0a65f8d7af25735d6d624795d33>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4cefd0a65f8d7af25735d6d624795d33>`__)(DevFloat);

`882 <../../de/ddf/namespaceTango.html#a8dff7e23b118cecc529dc4b92c030db2>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a8dff7e23b118cecc529dc4b92c030db2>`__)(DevDouble);

`883 <../../de/ddf/namespaceTango.html#ad0525eec6583123226aa91844e04f58a>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad0525eec6583123226aa91844e04f58a>`__)(DevUShort);

`884 <../../de/ddf/namespaceTango.html#a5b6e7d938c0eb341974f635f26451a66>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5b6e7d938c0eb341974f635f26451a66>`__)(DevULong);

`885 <../../de/ddf/namespaceTango.html#a80e38ba637be885bd243378916802404>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a80e38ba637be885bd243378916802404>`__)(DevString);

`886 <../../de/ddf/namespaceTango.html#a8617a1c3e46dedbe103e3954aead85f9>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a8617a1c3e46dedbe103e3954aead85f9>`__)(const
DevVarCharArray \*);

`887 <../../de/ddf/namespaceTango.html#aaa493e82054e1c820c22930175ababe5>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#aaa493e82054e1c820c22930175ababe5>`__)(const
DevVarShortArray \*);

`888 <../../de/ddf/namespaceTango.html#af62f13f41cce4efa8b08326fb1462804>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#af62f13f41cce4efa8b08326fb1462804>`__)(const
DevVarLongArray \*);

`889 <../../de/ddf/namespaceTango.html#aaf571bc58c62d1a7b6774a864f864f0a>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aaf571bc58c62d1a7b6774a864f864f0a>`__)(const
DevVarFloatArray \*);

`890 <../../de/ddf/namespaceTango.html#ac39268602c7ff7d2864ce6d2d70ba596>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac39268602c7ff7d2864ce6d2d70ba596>`__)(const
DevVarDoubleArray \*);

`891 <../../de/ddf/namespaceTango.html#a3e665059db438c9e1c00a380472f2dbb>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3e665059db438c9e1c00a380472f2dbb>`__)(const
DevVarUShortArray \*);

`892 <../../de/ddf/namespaceTango.html#a45a2de0c071c8c15d10df028f5626981>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a45a2de0c071c8c15d10df028f5626981>`__)(const
DevVarULongArray \*);

`893 <../../de/ddf/namespaceTango.html#ad3b6fecd9648437dd3a5f303d096258d>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ad3b6fecd9648437dd3a5f303d096258d>`__)(const
DevVarStringArray \*);

`894 <../../de/ddf/namespaceTango.html#af78a5787e615509655caf92e0ad10ab3>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af78a5787e615509655caf92e0ad10ab3>`__)(const
DevVarLongStringArray \*);

`895 <../../de/ddf/namespaceTango.html#a0e1ae10514222b3032d6988e140fe16e>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0e1ae10514222b3032d6988e140fe16e>`__)(const
DevVarDoubleStringArray \*);

`896 <../../de/ddf/namespaceTango.html#aba8646e1e736a8c105cc266a9bd3fd35>`__ typedef
DevState
\*(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`Sta\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aba8646e1e736a8c105cc266a9bd3fd35>`__)(DevState);

897 

898 

899 //

900 // Some enum and structures

901 //

902 

`903 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ enum
`CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
{

`904 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__ 
`DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
= 0,

`905 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab4efe3f5177bddfb8c6fed90a17167dd>`__ 
`DEV\_BOOLEAN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab4efe3f5177bddfb8c6fed90a17167dd>`__,

`906 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6e47f6c8e7593abe847768625cdea8f9>`__ 
`DEV\_SHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6e47f6c8e7593abe847768625cdea8f9>`__,

`907 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6b94ef795dea2bcc6af9a2be4241a28b>`__ 
`DEV\_LONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6b94ef795dea2bcc6af9a2be4241a28b>`__,

`908 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3f8bc37fd7a5bbd4d88c8f60a2141239>`__ 
`DEV\_FLOAT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3f8bc37fd7a5bbd4d88c8f60a2141239>`__,

`909 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a37e0d615b5e42214a09aa70324a753b6>`__ 
`DEV\_DOUBLE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a37e0d615b5e42214a09aa70324a753b6>`__,

`910 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a88dc7602b87653a436acca037b7bcee7>`__ 
`DEV\_USHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a88dc7602b87653a436acca037b7bcee7>`__,

`911 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9eba5fa98fae4d2ea9e8643e2136d67d>`__ 
`DEV\_ULONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9eba5fa98fae4d2ea9e8643e2136d67d>`__,

`912 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9d8b9eb6fe094a24e27bdb2fc40ce79b>`__ 
`DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9d8b9eb6fe094a24e27bdb2fc40ce79b>`__,

`913 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a29e20059f1446ac5d176698907bbd3a4>`__ 
`DEVVAR\_CHARARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a29e20059f1446ac5d176698907bbd3a4>`__,

`914 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3b1acccd8c06639df370a59e34b9ea28>`__ 
`DEVVAR\_SHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3b1acccd8c06639df370a59e34b9ea28>`__,

`915 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4dd3df3cb7c2facc1c2bc9f5a9601267>`__ 
`DEVVAR\_LONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4dd3df3cb7c2facc1c2bc9f5a9601267>`__,

`916 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aadc0983bbe46b67d5a5c0b6fefd635f3>`__ 
`DEVVAR\_FLOATARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aadc0983bbe46b67d5a5c0b6fefd635f3>`__,

`917 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aec3cf6f38917b8a9736dfaeccda26e26>`__ 
`DEVVAR\_DOUBLEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aec3cf6f38917b8a9736dfaeccda26e26>`__,

`918 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a1d7d93136302878038c7d6e4d94c5a66>`__ 
`DEVVAR\_USHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a1d7d93136302878038c7d6e4d94c5a66>`__,

`919 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a8e9fc554e1804a6e415c45718e7b077a>`__ 
`DEVVAR\_ULONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a8e9fc554e1804a6e415c45718e7b077a>`__,

`920 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abca6466d0c16ba364261e16d67b4408c>`__ 
`DEVVAR\_STRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abca6466d0c16ba364261e16d67b4408c>`__,

`921 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a19f8a24bdf208a87bb31b217c1f6b261>`__ 
`DEVVAR\_LONGSTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a19f8a24bdf208a87bb31b217c1f6b261>`__,

`922 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aa4080a8a54b6e8a243aeb60541347723>`__ 
`DEVVAR\_DOUBLESTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aa4080a8a54b6e8a243aeb60541347723>`__,

`923 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a7f46074346016dfb879ce3ff1ff78eb6>`__ 
`DEV\_STATE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a7f46074346016dfb879ce3ff1ff78eb6>`__,

`924 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a671166fff99c137e11ce5702209ee430>`__ 
`CONST\_DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a671166fff99c137e11ce5702209ee430>`__,

`925 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a90ce0d6685cb0ce6a7fd4b2ef67c9e72>`__ 
`DEVVAR\_BOOLEANARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a90ce0d6685cb0ce6a7fd4b2ef67c9e72>`__,

`926 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__ 
`DEV\_UCHAR <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__,

`927 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4cd60a84823f849e8611f0e5b30ca830>`__ 
`DEV\_LONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4cd60a84823f849e8611f0e5b30ca830>`__,

`928 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abac7cc9e831981d38ceeeccdbaebdd8c>`__ 
`DEV\_ULONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abac7cc9e831981d38ceeeccdbaebdd8c>`__,

`929 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a13f0d422e74541943d1fbbe9e1cad66b>`__ 
`DEVVAR\_LONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a13f0d422e74541943d1fbbe9e1cad66b>`__,

`930 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad83256c2570cc046d4c75b4244b9f546>`__ 
`DEVVAR\_ULONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad83256c2570cc046d4c75b4244b9f546>`__,

`931 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6f9719ad47c4371dc84e3af384926776>`__ 
`DEV\_INT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6f9719ad47c4371dc84e3af384926776>`__,

`932 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad63e132a76535a322f3cb4fba94c6612>`__ 
`DEV\_ENCODED <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad63e132a76535a322f3cb4fba94c6612>`__,

`933 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a883d3175b4a1618cee9e43628eb0108b>`__ 
`DEV\_ENUM <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a883d3175b4a1618cee9e43628eb0108b>`__,

`934 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a53b146beabe34367b2fab9b6b7920dbf>`__ 
`DEV\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a53b146beabe34367b2fab9b6b7920dbf>`__,

`935 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a943b1f4763a27dbdd450e6ec9c2d6b89>`__ 
`DEVVAR\_STATEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a943b1f4763a27dbdd450e6ec9c2d6b89>`__,

`936 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae51d5b5160e3a793758163127734aa59>`__ 
`DATA\_TYPE\_UNKNOWN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae51d5b5160e3a793758163127734aa59>`__
= 100

937 };

938 

`939 <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__ enum
`MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__
{

`940 <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__ 
`STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__
= 0,

`941 <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__ 
`INFO <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__

942 };

943 

`944 <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__ enum
`PollObjType <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__
{

`945 <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eae60ca501d985d9a847032a32d7d984ee>`__ 
`POLL\_CMD <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eae60ca501d985d9a847032a32d7d984ee>`__
= 0,

`946 <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea7d1660a3cb2f510eee84a52f9ab20610>`__ 
`POLL\_ATTR <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea7d1660a3cb2f510eee84a52f9ab20610>`__,

`947 <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eada1ff1bf7d933f2aa76a2294ed588940>`__ 
`EVENT\_HEARTBEAT <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eada1ff1bf7d933f2aa76a2294ed588940>`__,

`948 <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea53590884fe15b5dcf088fdbddc449d52>`__ 
`STORE\_SUBDEV <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea53590884fe15b5dcf088fdbddc449d52>`__

949 };

950 

`951 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580>`__ enum
`PollCmdCode <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580>`__
{

`952 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a129486e9808fdd11b350fc1f3d473747>`__ 
`POLL\_ADD\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a129486e9808fdd11b350fc1f3d473747>`__
= 0,

`953 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a14b163e8afff81eb1b355a7ae1efa60d>`__ 
`POLL\_REM\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a14b163e8afff81eb1b355a7ae1efa60d>`__,

`954 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a1995b035ee72464ca342766003bcd114>`__ 
`POLL\_START <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a1995b035ee72464ca342766003bcd114>`__,

`955 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a43446e4cb281938d5adee1cb61ae7cb3>`__ 
`POLL\_STOP <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a43446e4cb281938d5adee1cb61ae7cb3>`__,

`956 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a7506925713259a568be457ff4e84c9e8>`__ 
`POLL\_UPD\_PERIOD <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a7506925713259a568be457ff4e84c9e8>`__,

`957 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580af10b3c89d28dde3dd086ada851e07e68>`__ 
`POLL\_REM\_DEV <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580af10b3c89d28dde3dd086ada851e07e68>`__,

`958 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a9aeec243eb1cd5c06cba483049a2b270>`__ 
`POLL\_EXIT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a9aeec243eb1cd5c06cba483049a2b270>`__,

`959 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a34c2d3ff06161dd7bfeb83a635d765e3>`__ 
`POLL\_REM\_EXT\_TRIG\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a34c2d3ff06161dd7bfeb83a635d765e3>`__,

`960 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580ab1cd27e6967691263942fd76843701d9>`__ 
`POLL\_ADD\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580ab1cd27e6967691263942fd76843701d9>`__,

`961 <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a24fb79eedb927dc2ab9c8ac492abc99d>`__ 
`POLL\_REM\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a24fb79eedb927dc2ab9c8ac492abc99d>`__

962 };

963 

`964 <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__ enum
`SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
{

`965 <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a4616aaf95bd5002833d37dc3e5f46ee3>`__ 
`BY\_DEVICE <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a4616aaf95bd5002833d37dc3e5f46ee3>`__
= 0,

`966 <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6adbbc20e2fe105a06a22d17549aac04c4>`__ 
`BY\_CLASS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6adbbc20e2fe105a06a22d17549aac04c4>`__,

`967 <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6aedddb9d27b32016d9823e62f5db28785>`__ 
`BY\_PROCESS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6aedddb9d27b32016d9823e62f5db28785>`__,

`968 <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a1287827842e9fa6c85a468c7299f3042>`__ 
`NO\_SYNC <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a1287827842e9fa6c85a468c7299f3042>`__

969 };

970 

`971 <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__ enum
`AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__
{

`972 <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da08ea97521ce92807b73e64f3b96a1529>`__ 
`READ\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da08ea97521ce92807b73e64f3b96a1529>`__
= 0,

`973 <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da81b4402123e0bf6c6e9277c65d9d5a32>`__ 
`WRITE\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da81b4402123e0bf6c6e9277c65d9d5a32>`__

974 };

975 

`976 <../../de/ddf/namespaceTango.html#a7d278432a160e4e055a13a178b461aed>`__ typedef
`AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__
`PipeReqType <../../de/ddf/namespaceTango.html#a7d278432a160e4e055a13a178b461aed>`__;

977 

`978 <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4e>`__ enum
`LockCmdCode <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4e>`__
{

`979 <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea6b53bd238709b8614503054909ce5882>`__ 
`LOCK\_ADD\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea6b53bd238709b8614503054909ce5882>`__
= 0,

`980 <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eaf9a342568f45e6895c595944065e9133>`__ 
`LOCK\_REM\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eaf9a342568f45e6895c595944065e9133>`__,

`981 <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea1a84dc93be6b7297efbfee01fb35a884>`__ 
`LOCK\_UNLOCK\_ALL\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea1a84dc93be6b7297efbfee01fb35a884>`__,

`982 <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eab85fe93fa791544e2b82b13ab97b7b60>`__ 
`LOCK\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eab85fe93fa791544e2b82b13ab97b7b60>`__

983 };

984 

985 //

986 // The polled device structure

987 //

988 

`989 <../../d6/d66/structTango_1_1__PollDevice.html>`__ typedef struct
`\_PollDevice <../../d6/d66/structTango_1_1__PollDevice.html>`__

990 {

`991 <../../d6/d66/structTango_1_1__PollDevice.html#a4a2c9368c01e742c8f8b61d8eaa91038>`__ 
string
`dev\_name <../../d6/d66/structTango_1_1__PollDevice.html#a4a2c9368c01e742c8f8b61d8eaa91038>`__;

`992 <../../d6/d66/structTango_1_1__PollDevice.html#af1307f5618ec885d6ae0cabb1bf82769>`__ 
vector<long>
`ind\_list <../../d6/d66/structTango_1_1__PollDevice.html#af1307f5618ec885d6ae0cabb1bf82769>`__;

993 }`PollDevice <../../de/ddf/namespaceTango.html#acbbd6cfda6c92560b0783d216d90290b>`__;

994 

995 #ifdef TANGO\_HAS\_LOG4TANGO

996 //

997 // Logging levels

998 //

999 

`1000 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709>`__ enum
`LogLevel <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709>`__
{

`1001 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a8f14ec717b97c2d7ce592bb0ff06b444>`__ 
`LOG\_OFF <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a8f14ec717b97c2d7ce592bb0ff06b444>`__
= 0,

`1002 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a25692d6049c268fb4cb0e79b5706a07e>`__ 
`LOG\_FATAL <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a25692d6049c268fb4cb0e79b5706a07e>`__,

`1003 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a16302cb4688478207991d1a22dd90a92>`__ 
`LOG\_ERROR <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a16302cb4688478207991d1a22dd90a92>`__,

`1004 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a33a512ea286a55b62e5215b2f74a97e8>`__ 
`LOG\_WARN <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a33a512ea286a55b62e5215b2f74a97e8>`__,

`1005 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a9e8df731000d4d6f23b2340b1cab36fa>`__ 
`LOG\_INFO <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a9e8df731000d4d6f23b2340b1cab36fa>`__,

`1006 <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709ac86c1927287cc279ae0cf158de9af823>`__ 
`LOG\_DEBUG <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709ac86c1927287cc279ae0cf158de9af823>`__

1007 } ;

1008 

1009 //

1010 // Logging targets

1011 //

1012 

`1013 <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246da>`__ enum
`LogTarget <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246da>`__
{

`1014 <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daad7b8b9a14328c599975a890820eefb2a>`__ 
`LOG\_CONSOLE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daad7b8b9a14328c599975a890820eefb2a>`__
= 0,

`1015 <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daa303eef4691045883e00a452c355f4d95>`__ 
`LOG\_FILE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daa303eef4691045883e00a452c355f4d95>`__,

`1016 <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daae9768c52a777abb959d3649aac301aa4>`__ 
`LOG\_DEVICE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daae9768c52a777abb959d3649aac301aa4>`__

1017 };

1018 

1019 #endif // TANGO\_HAS\_LOG4TANGO

1020 

1021 //

1022 // The command argument name

1023 //

1024 

`1025 <../../de/ddf/namespaceTango.html#acebf8a42ed82b59c4eb5c4ba718297fe>`__ const
char \* const
`CmdArgTypeName <../../de/ddf/namespaceTango.html#acebf8a42ed82b59c4eb5c4ba718297fe>`__\ []
= {

1026  "DevVoid",

1027  "DevBoolean",

1028  "DevShort",

1029  "DevLong",

1030  "DevFloat",

1031  "DevDouble",

1032  "DevUShort",

1033  "DevULong",

1034  "DevString",

1035  "DevVarCharArray",

1036  "DevVarShortArray",

1037  "DevVarLongArray",

1038  "DevVarFloatArray",

1039  "DevVarDoubleArray",

1040  "DevVarUShortArray",

1041  "DevVarULongArray",

1042  "DevVarStringArray",

1043  "DevVarLongStringArray",

1044  "DevVarDoubleStringArray",

1045  "DevState",

1046  "ConstDevString",

1047  "DevVarBooleanArray",

1048  "DevUChar",

1049  "DevLong64",

1050  "DevULong64",

1051  "DevVarLong64Array",

1052  "DevVarULong64Array",

1053  "DevInt",

1054  "DevEncoded",

1055  "DevEnum",

1056  "DevPipeBlob",

1057  "DevVarStateArray",

1058  "Unknown"

1059 };

1060 

1061 //

1062 // The state name

1063 //

1064 

`1065 <../../de/ddf/namespaceTango.html#af9b307743a569b68bb46f6bc79f893cf>`__ const
char \* const
`DevStateName <../../de/ddf/namespaceTango.html#af9b307743a569b68bb46f6bc79f893cf>`__\ []
= {

1066  "ON",

1067  "OFF",

1068  "CLOSE",

1069  "OPEN",

1070  "INSERT",

1071  "EXTRACT",

1072  "MOVING",

1073  "STANDBY",

1074  "FAULT",

1075  "INIT",

1076  "RUNNING",

1077  "ALARM",

1078  "DISABLE",

1079  "UNKNOWN"

1080 };

1081 

`1089 <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__ enum
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
{

`1090 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__ 
`CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__\ =0,

`1091 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__ 
`QUALITY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__,

`1092 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__ 
`PERIODIC\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__,

`1093 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__ 
`ARCHIVE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__,

`1094 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__ 
`USER\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__,

`1095 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__ 
`ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__,

`1096 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__ 
`DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__,

`1097 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6af0c6101bccdea12e40f8d6eb1b1ca7a3>`__ 
`INTERFACE\_CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6af0c6101bccdea12e40f8d6eb1b1ca7a3>`__,

`1098 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6add5e7619e42d25779bb3376e8f5cdb24>`__ 
`PIPE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6add5e7619e42d25779bb3376e8f5cdb24>`__,

`1099 <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__ 
`numEventType <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__

1100 };

1101 

`1102 <../../de/ddf/namespaceTango.html#aba76022ad39c2bbc38b6fe99e1245b2b>`__ const
char \* const
`EventName <../../de/ddf/namespaceTango.html#aba76022ad39c2bbc38b6fe99e1245b2b>`__\ []
= {

1103  "change",

1104  "quality",

1105  "periodic",

1106  "archive",

1107  "user\_event",

1108  "attr\_conf",

1109  "data\_ready",

1110  "intr\_change",

1111  "pipe"

1112 };

1113 

`1114 <../../de/ddf/namespaceTango.html#aabb3218da6deceb81899a5f116e0b508>`__ const
char \*const
`CONF\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aabb3218da6deceb81899a5f116e0b508>`__
=
EventName[`ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__\ ];

`1115 <../../de/ddf/namespaceTango.html#aeb31db5fae14a4c3b3c0e0375e9de05a>`__ const
char\* const
`DATA\_READY\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aeb31db5fae14a4c3b3c0e0375e9de05a>`__
=
EventName[`DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__\ ];

1116 

`1117 <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__ enum
`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__

1118 {

`1119 <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__ 
`ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__\ =0,

`1120 <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadcab71d75e8efdef836317a5b0667fd2599>`__ 
`ATTR\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadcab71d75e8efdef836317a5b0667fd2599>`__,

`1121 <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca77a297f6bb10c7b17856dd3a8d5f29a8>`__ 
`ATTR\_BY\_USER <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca77a297f6bb10c7b17856dd3a8d5f29a8>`__

1122 };

1123 

`1124 <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__ enum
`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__

1125 {

`1126 <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98a855089eea67f5b5f306b04d5eb7bc64d>`__ 
`PIPE\_NO\_SYNC <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98a855089eea67f5b5f306b04d5eb7bc64d>`__\ =0,

`1127 <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aaad121df2abea1d39eca3bd3ef413b37>`__ 
`PIPE\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aaad121df2abea1d39eca3bd3ef413b37>`__,

`1128 <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aac61b4811475f0c262e8150131ee8ba1>`__ 
`PIPE\_BY\_USER <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aac61b4811475f0c262e8150131ee8ba1>`__

1129 };

1130 

`1138 <../../d1/d45/group__Client.html#gac36915c08d6722e33f71f00b3b1d2ff0>`__ enum
`ErrorManagementType <../../d1/d45/group__Client.html#gac36915c08d6722e33f71f00b3b1d2ff0>`__
{

`1139 <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a6665e08e2a44c93d713463e87c3ce840>`__ 
`ABORT\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a6665e08e2a44c93d713463e87c3ce840>`__\ =0,

`1140 <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0affe786884b0ac7bd7e6a4a623fd84e04>`__ 
`CONTINUE\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0affe786884b0ac7bd7e6a4a623fd84e04>`__,

`1141 <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a0c53bbbc2ee4f2b367971b8ffebdb9f6>`__ 
`numErrorManagementType <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a0c53bbbc2ee4f2b367971b8ffebdb9f6>`__

1142 };

1143 

`1144 <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100b>`__ enum
`KeepAliveCmdCode <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100b>`__

1145 {

`1146 <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100ba50df4e51da121e2da9bf3df0f0f95111>`__ 
`EXIT\_TH <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100ba50df4e51da121e2da9bf3df0f0f95111>`__
= 0

1147 };

1148 

`1149 <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7>`__ enum
`AccessControlType <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7>`__

1150 {

`1151 <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7a016fdcb56a610736d4ce1aae90d4a1e8>`__ 
`ACCESS\_READ <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7a016fdcb56a610736d4ce1aae90d4a1e8>`__
= 0,

`1152 <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7ae04a28408b4323c2ef793dd64d497a05>`__ 
`ACCESS\_WRITE <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7ae04a28408b4323c2ef793dd64d497a05>`__

1153 };

1154 

`1155 <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__ enum
`MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__

1156 {

`1157 <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1eafdcdb139d7d951d8533147e44bd2fcf8>`__ 
`MIN <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1eafdcdb139d7d951d8533147e44bd2fcf8>`__
= 0,

`1158 <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1ea845e8f597c6beba9849b7273b3470868>`__ 
`MAX <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1ea845e8f597c6beba9849b7273b3470868>`__

1159 };

1160 

`1161 <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7>`__ enum
`ChannelType <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7>`__

1162 {

`1163 <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a7210a59f6c2bc764861a326add37a04e>`__ 
`ZMQ <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a7210a59f6c2bc764861a326add37a04e>`__
= 0,

`1164 <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a74986761b743aa7fb74e60a0e6f7ca4b>`__ 
`NOTIFD <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a74986761b743aa7fb74e60a0e6f7ca4b>`__

1165 };

1166 

`1167 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315c>`__ enum
`ZmqCmdCode <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315c>`__
{

`1168 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caf2b91f9249e4f9a3d75555cbbfae9a63>`__ 
`ZMQ\_END <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caf2b91f9249e4f9a3d75555cbbfae9a63>`__
= 0,

`1169 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca91847a3fe27dc06e3ae4f6d9f0aeb564>`__ 
`ZMQ\_CONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca91847a3fe27dc06e3ae4f6d9f0aeb564>`__,

`1170 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca1345e280dc07fcd026acd131b2a6c9b1>`__ 
`ZMQ\_DISCONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca1345e280dc07fcd026acd131b2a6c9b1>`__,

`1171 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa64a44722f54ea80b09805f829fe1374>`__ 
`ZMQ\_CONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa64a44722f54ea80b09805f829fe1374>`__,

`1172 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa1d09288e4fc9a02bef713d0fc3a43cf>`__ 
`ZMQ\_DISCONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa1d09288e4fc9a02bef713d0fc3a43cf>`__,

`1173 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca9c222118af31e7af40cff64fee579f51>`__ 
`ZMQ\_CONNECT\_MCAST\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca9c222118af31e7af40cff64fee579f51>`__,

`1174 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa10332851836fb7f97f58336eea6700a>`__ 
`ZMQ\_DELAY\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa10332851836fb7f97f58336eea6700a>`__,

`1175 <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca53912643cf1f41cdcbae03a98924b992>`__ 
`ZMQ\_RELEASE\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca53912643cf1f41cdcbae03a98924b992>`__,

1176 };

1177 

`1178 <../../d3/db5/structTango_1_1__SendEventType.html>`__ typedef
struct
`\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html>`__

1179 {

`1180 <../../d3/db5/structTango_1_1__SendEventType.html#a6785aeda0925578d42e6466a7cc63a64>`__ 
`\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html#a0043609e691ba100d6c6a858d6f4c037>`__\ ()
:
`change <../../d3/db5/structTango_1_1__SendEventType.html#a6785aeda0925578d42e6466a7cc63a64>`__\ (false),
`archive <../../d3/db5/structTango_1_1__SendEventType.html#ae6514fcf20154d6842697505732b50b2>`__\ (false),
`periodic <../../d3/db5/structTango_1_1__SendEventType.html#a97a699c999ba0d8c88c00fc1cfcdac78>`__\ (false)
{ };

1181  bool
`change <../../d3/db5/structTango_1_1__SendEventType.html#a6785aeda0925578d42e6466a7cc63a64>`__;

`1182 <../../d3/db5/structTango_1_1__SendEventType.html#ae6514fcf20154d6842697505732b50b2>`__ 
bool
`archive <../../d3/db5/structTango_1_1__SendEventType.html#ae6514fcf20154d6842697505732b50b2>`__;

`1183 <../../d3/db5/structTango_1_1__SendEventType.html#a97a699c999ba0d8c88c00fc1cfcdac78>`__ 
bool
`periodic <../../d3/db5/structTango_1_1__SendEventType.html#a97a699c999ba0d8c88c00fc1cfcdac78>`__;

1184 }`SendEventType <../../de/ddf/namespaceTango.html#a3941141427c5165191753fbbcc549061>`__;

1185 

`1186 <../../d7/d60/structTango_1_1__OptAttrProp.html>`__ typedef struct
`\_OptAttrProp <../../d7/d60/structTango_1_1__OptAttrProp.html>`__

1187 {

`1188 <../../d7/d60/structTango_1_1__OptAttrProp.html#a875ce1b529eade873f351853d13489fe>`__ 
const char
\*\ `name <../../d7/d60/structTango_1_1__OptAttrProp.html#a875ce1b529eade873f351853d13489fe>`__;

`1189 <../../d7/d60/structTango_1_1__OptAttrProp.html#ad536b06d0b4bdcf1c17e92d04c8277a3>`__ 
const char
\*\ `default\_value <../../d7/d60/structTango_1_1__OptAttrProp.html#ad536b06d0b4bdcf1c17e92d04c8277a3>`__;

1190 }`OptAttrProp <../../de/ddf/namespaceTango.html#a4615642249b2a2e096a881367f3f2117>`__;

1191 

`1192 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545b>`__ typedef
enum
`\_FwdAttError <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545b>`__

1193 {

`1194 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bad36cb6edd7864475282bfc9d763b6f65>`__ 
`FWD\_NO\_ERROR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bad36cb6edd7864475282bfc9d763b6f65>`__
= 0,

`1195 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba2e2ee839d684948d99f124f9198910e6>`__ 
`FWD\_WRONG\_ATTR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba2e2ee839d684948d99f124f9198910e6>`__,

`1196 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bacfb374b81c1b820d7cab0f9ba9d3d5e8>`__ 
`FWD\_WRONG\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bacfb374b81c1b820d7cab0f9ba9d3d5e8>`__,

`1197 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baf9135a3ecd78fa5e5019f716d50fafda>`__ 
`FWD\_ROOT\_DEV\_LOCAL\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baf9135a3ecd78fa5e5019f716d50fafda>`__,

`1198 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bac6627e0075173c41bdd629245def0881>`__ 
`FWD\_MISSING\_ROOT <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bac6627e0075173c41bdd629245def0881>`__,

`1199 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baee62419f4cda18bc63d4c0ae1de97140>`__ 
`FWD\_WRONG\_SYNTAX <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baee62419f4cda18bc63d4c0ae1de97140>`__,

`1200 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba497d85fca4a1f770eeb5f811c72e1600>`__ 
`FWD\_ROOT\_DEV\_NOT\_STARTED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba497d85fca4a1f770eeb5f811c72e1600>`__,

`1201 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bae1693a5c3bbc668e26a0d048eee8844b>`__ 
`FWD\_DOUBLE\_USED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bae1693a5c3bbc668e26a0d048eee8844b>`__,

`1202 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bab81c88712a2f5c548de3d9b134572f36>`__ 
`FWD\_TOO\_OLD\_LOCAL\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bab81c88712a2f5c548de3d9b134572f36>`__,

`1203 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6ed8fe2bdb7c54bfe79926c16b2d4709>`__ 
`FWD\_TOO\_OLD\_ROOT\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6ed8fe2bdb7c54bfe79926c16b2d4709>`__,

`1204 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6b6460962ebda5fb0d44e87b92a4acbc>`__ 
`FWD\_CONF\_LOOP <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6b6460962ebda5fb0d44e87b92a4acbc>`__,

`1205 <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba84a50d28d511e508a2470ba5c34adea9>`__ 
`FWD\_ERR\_UNKNOWN <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba84a50d28d511e508a2470ba5c34adea9>`__

1206 }`FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__;

1207 

`1208 <../../d5/d25/structTango_1_1__AttributeIdlData.html>`__ typedef
struct
`\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html>`__

1209 {

`1210 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a03bac30bf53110ff13a43eb9680a4eba>`__ 
AttributeValueList\_3
\*\ `data\_3 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a03bac30bf53110ff13a43eb9680a4eba>`__;

`1211 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a58571556b9a60dd44c88fd9b07730d5e>`__ 
AttributeValueList\_4
\*\ `data\_4 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a58571556b9a60dd44c88fd9b07730d5e>`__;

`1212 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a703cd1e84b0aed154afc5a80b96bd39d>`__ 
AttributeValueList\_5
\*\ `data\_5 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a703cd1e84b0aed154afc5a80b96bd39d>`__;

1213 

`1214 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a2ff3b5fe9d2aaabee6a955858245d838>`__ 
`\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html#a2ff3b5fe9d2aaabee6a955858245d838>`__\ ()

1215  {

1216  data\_3 = Tango\_nullptr;

1217  data\_4 = Tango\_nullptr;

1218  data\_5 = Tango\_nullptr;

1219  }

1220 }`AttributeIdlData <../../de/ddf/namespaceTango.html#a79122420bb8fc15b17138ff0da9bad7d>`__;

1221 

1222 // Ranges type-enum-string conversions

1223 

1224 template <typename T>

`1225 <../../df/d08/structTango_1_1ranges__type2const.html>`__ struct
`ranges\_type2const <../../df/d08/structTango_1_1ranges__type2const.html>`__

1226 {

`1227 <../../df/d08/structTango_1_1ranges__type2const.html#a486a3799e86b071145452c6861a65f73>`__ 
static
`CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
`enu <../../df/d08/structTango_1_1ranges__type2const.html#a486a3799e86b071145452c6861a65f73>`__;

`1228 <../../df/d08/structTango_1_1ranges__type2const.html#aaddcd6d5edc9dea4db836223f3742bef>`__ 
static TANGO\_CXX11\_ABI string
`str <../../df/d08/structTango_1_1ranges__type2const.html#aaddcd6d5edc9dea4db836223f3742bef>`__;

1229 };

1230 

1231 template <CmdArgType>

`1232 <../../db/d9e/structTango_1_1ranges__const2type.html>`__ struct
`ranges\_const2type <../../db/d9e/structTango_1_1ranges__const2type.html>`__

1233 {

`1234 <../../db/d9e/structTango_1_1ranges__const2type.html#a8fbfef3cf42746368ecfebf2468ad781>`__ 
static TANGO\_CXX11\_ABI string
`str <../../db/d9e/structTango_1_1ranges__const2type.html#a8fbfef3cf42746368ecfebf2468ad781>`__;

1235 };

1236 

`1237 <../../d4/d13/tango__const_8h.html#a296aaf5dc2f56ffa36c10c00ac960708>`__ #define
RANGES\_TYPE2CONST(type,constant) \\

1238  template <> \\

1239  struct ranges\_type2const<type> \\

1240  { \\

1241  static CmdArgType enu; \\

1242  TANGO\_CXX11\_ABI static string str; \\

1243  }; \\

1244  CmdArgType ranges\_type2const<type>::enu = constant; \\

1245  TANGO\_CXX11\_ABI string ranges\_type2const<type>::str = #type; \\

1246  template<> \\

1247  struct ranges\_const2type<Tango::constant> \\

1248  { \\

1249  typedef type Type; \\

1250  TANGO\_CXX11\_ABI static string str; \\

1251  }; \\

1252  TANGO\_CXX11\_ABI string ranges\_const2type<Tango::constant>::str
= #type;

1253 

1254 

1255 } // End of Tango namespace

1256 

1257 

1258 #endif /\* TANGO\_CONST\_H \*/

`Tango::FormatNotSpec\_FL <../../de/ddf/namespaceTango.html#ad005a1df5ed11ae4466521a0dc93c529>`__

const char \*const FormatNotSpec\_FL

**Definition:** tango\_const.h:305

`Tango::StrA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae4413ba74a63fbfedb51f47425103946>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:819

`Tango::POLL\_REM\_EXT\_TRIG\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a34c2d3ff06161dd7bfeb83a635d765e3>`__

**Definition:** tango\_const.h:959

`Tango::POLL\_UPD\_PERIOD <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a7506925713259a568be457ff4e84c9e8>`__

**Definition:** tango\_const.h:956

`Tango::\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html>`__

**Definition:** tango\_const.h:1208

`Tango::API\_PollingThreadNotFound <../../de/ddf/namespaceTango.html#a149ca5a577be29a05f287cc1227db2ca>`__

const char \*const API\_PollingThreadNotFound

**Definition:** tango\_const.h:433

`Tango::API\_WrongEventData <../../de/ddf/namespaceTango.html#af79b5df1a13d18f326b2e3382abcbf2a>`__

const char \*const API\_WrongEventData

**Definition:** tango\_const.h:450

`Tango::DEFAULT\_OMNI\_CONF\_FILE <../../de/ddf/namespaceTango.html#aa6e02f61c2aa84d728aac32b88bf97ec>`__

const char \*const DEFAULT\_OMNI\_CONF\_FILE

**Definition:** tango\_const.h:117

`Tango::US\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a850180ce2eac858b61307e60e34eb0be>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:628

`Tango::POLL\_CMD <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eae60ca501d985d9a847032a32d7d984ee>`__

**Definition:** tango\_const.h:945

`Tango::POLL\_ATTR <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea7d1660a3cb2f510eee84a52f9ab20610>`__

**Definition:** tango\_const.h:946

`Tango::StrA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a529af943f0ba358e21e8e752994dc29d>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:830

`Tango::\_PollDevice <../../d6/d66/structTango_1_1__PollDevice.html>`__

**Definition:** tango\_const.h:989

`Tango::Lg\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a44f82da7bcd31b5afeef17daab9386f2>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:564

`Tango::API\_CantCreateLockingThread <../../de/ddf/namespaceTango.html#a559860b11e3f709db36dee068e12f501>`__

const char \*const API\_CantCreateLockingThread

**Definition:** tango\_const.h:354

`Tango::EVENT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#a6e89c689e8165e99e49832f73ecb245c>`__

const char \*const EVENT\_METHOD\_NAME

**Definition:** tango\_const.h:137

`Tango::ShA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9d1de323b47750050398563b93286e1f>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:708

`Tango::DbA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a973222d63ba4a7fb5cdbaa54226271c2>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:762

`Tango::Str\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a1999b8e552e4afffafc3b47eea21a612>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:659

`Tango::SERVICE\_PROP\_NAME <../../de/ddf/namespaceTango.html#a580b13677820a4ff01ab7837909b641f>`__

const char \*const SERVICE\_PROP\_NAME

**Definition:** tango\_const.h:195

`Tango::US\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5556d60f05b12e8d7d048f27c372e5ba>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:622

`Tango::kLogTargetDevice <../../de/ddf/namespaceTango.html#a2acbafeec497c249467ae813dad02e57>`__

const char \*const kLogTargetDevice

**Definition:** tango\_const.h:273

`Tango::KeepAliveCmdCode <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100b>`__

KeepAliveCmdCode

**Definition:** tango\_const.h:1144

`Tango::API\_DatabaseFileError <../../de/ddf/namespaceTango.html#a30638e36a66c20e24f41252ec9a9b9e1>`__

const char \*const API\_DatabaseFileError

**Definition:** tango\_const.h:375

`Tango::API\_AttributeNotDataReadyEnabled <../../de/ddf/namespaceTango.html#a412bbdd811dfe6bd7064be020d6c8237>`__

const char \*const API\_AttributeNotDataReadyEnabled

**Definition:** tango\_const.h:332

`Tango::FlA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a8eade72ca84506d77b56895ce8b238de>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr)()

**Definition:** tango\_const.h:509

`Tango::API\_InvalidArgs <../../de/ddf/namespaceTango.html#a5c69828a163c1f56b068666edf125870>`__

const char \*const API\_InvalidArgs

**Definition:** tango\_const.h:405

`Tango::DEV\_ULONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abac7cc9e831981d38ceeeccdbaebdd8c>`__

**Definition:** tango\_const.h:928

`Tango::Db\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ad47704b0b5773aa15020b53a4c068e4f>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_DbA)(const DevVarDoubleArray
\*)

**Definition:** tango\_const.h:610

`Tango::UL\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aa7cf5fc76918c8edf1be960b49031998>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_DbA)(const DevVarDoubleArray \*)

**Definition:** tango\_const.h:650

`Tango::ULA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5bb875c6a8e951bfa0572d995d539220>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:800

`Tango::DefaultPollRingDepth <../../de/ddf/namespaceTango.html#a8ad5d0ca81ff07ada111334b43cfd869>`__

const int DefaultPollRingDepth

**Definition:** tango\_const.h:60

`Tango::POLL\_ADD\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580ab1cd27e6967691263942fd76843701d9>`__

**Definition:** tango\_const.h:960

`Tango::BY\_PROCESS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6aedddb9d27b32016d9823e62f5db28785>`__

**Definition:** tango\_const.h:967

`Tango::Db\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a9075c5a30da1df1363c51ef1789e2a81>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:616

`Tango::FWD\_NO\_ERROR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bad36cb6edd7864475282bfc9d763b6f65>`__

**Definition:** tango\_const.h:1194

`Tango::CmdArgTypeName <../../de/ddf/namespaceTango.html#acebf8a42ed82b59c4eb5c4ba718297fe>`__

const char \*const CmdArgTypeName[]

**Definition:** tango\_const.h:1025

`Tango::API\_DSFailedRegisteringEvent <../../de/ddf/namespaceTango.html#a34f311c824d346fce7231c33bc97d77f>`__

const char \*const API\_DSFailedRegisteringEvent

**Definition:** tango\_const.h:386

`Tango::DSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5c7d41dae299baf8d1b6018f10c2a340>`__

DevVarDoubleStringArray \*(DeviceImpl::\*
DSA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:858

`Tango::API\_DeviceNotExported <../../de/ddf/namespaceTango.html#a9aef726de48dbd963088f6ec9afda1ca>`__

const char \*const API\_DeviceNotExported

**Definition:** tango\_const.h:379

`Tango::Sh\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6a0c3fc14b5980c94da62496e4caeea5>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:555

`Tango::API\_IncompatibleArgumentType <../../de/ddf/namespaceTango.html#ab7b7818806cce14bb925618a276e4f10>`__

const char \*const API\_IncompatibleArgumentType

**Definition:** tango\_const.h:398

`Tango::USA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a5cdc80cde7ff434ef3dc2f808141f1a5>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:792

`Tango::LgA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afff024c7f63ab115f87b2f39149eb0f7>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:735

`Tango::ranges\_const2type::str <../../db/d9e/structTango_1_1ranges__const2type.html#a8fbfef3cf42746368ecfebf2468ad781>`__

static TANGO\_CXX11\_ABI string str

**Definition:** tango\_const.h:1234

`Tango::Db\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16e1ef6933c5a0930591770f4c60b101>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:614

`Tango::DSDeviceDomain <../../de/ddf/namespaceTango.html#ad2b9c23d9d5246c836a2c425b4b6e1bb>`__

const char \*const DSDeviceDomain

**Definition:** tango\_const.h:63

`Tango::DevVersion <../../de/ddf/namespaceTango.html#a7d400cb5df81070fd9c0ea469656f9f0>`__

const int DevVersion

**Definition:** tango\_const.h:57

`Tango::Fl\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa1813a8ea494658abc7f57d523b4bea6>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:596

`Tango::Fl\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a37239cd6d752eb2c2d6a52db1fc25d07>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:580

`Tango::Sh\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ac719c1247cc42b0f09e8f5379a1656a8>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:542

`Tango::DEVICE\_UNLOCKED\_REASON <../../de/ddf/namespaceTango.html#a7aeabbefcf13f428c65e2ee34bd73ce8>`__

const char \*const DEVICE\_UNLOCKED\_REASON

**Definition:** tango\_const.h:160

`Tango::Sh\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aef796b5017bac7c655dc000a9808845e>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:556

`Tango::PUB\_HWM <../../de/ddf/namespaceTango.html#a82d3d32737d2d1e086d995fda3e746d9>`__

const int PUB\_HWM

**Definition:** tango\_const.h:145

`Tango::FWD\_WRONG\_SYNTAX <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baee62419f4cda18bc63d4c0ae1de97140>`__

**Definition:** tango\_const.h:1199

`Tango::Sta\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0e1ae10514222b3032d6988e140fe16e>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:895

`Tango::API\_ShutdownInProgress <../../de/ddf/namespaceTango.html#ad66399259e0659990d8ca0c35c0a0973>`__

const char \*const API\_ShutdownInProgress

**Definition:** tango\_const.h:438

`Tango::API\_DServerClassNotInitialised <../../de/ddf/namespaceTango.html#a4f4372a5c9c22fd22e0d4d1db9a900ab>`__

const char \*const API\_DServerClassNotInitialised

**Definition:** tango\_const.h:385

`Tango::UL\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a8e46fac1aa6b30aac256a8bfcdb46866>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:638

`Tango::DEVVAR\_LONGSTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a19f8a24bdf208a87bb31b217c1f6b261>`__

**Definition:** tango\_const.h:921

`Tango::OptAttrProp <../../de/ddf/namespaceTango.html#a4615642249b2a2e096a881367f3f2117>`__

struct Tango::\_OptAttrProp OptAttrProp

`Tango::StrA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a555dee748cf031c4f9c35a106107f61e>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:822

`Tango::US\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a088b0addd2c61822d1ca3a8edd4c18d1>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:632

`Tango::FlA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a433d0ae93b52521c1b17bdd6557ed5f3>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:744

`Tango::Lg\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ac6f5fe3044bdb6731854fc193ecf5271>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:576

`Tango::NOTIFD\_CHANNEL <../../de/ddf/namespaceTango.html#a6b13c6213547e62515edfdf8bd2907bc>`__

const char \*const NOTIFD\_CHANNEL

**Definition:** tango\_const.h:153

`Tango::Sh\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a423540e1c162e987914c49da9ab8fe52>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:544

`Tango::NoClass <../../de/ddf/namespaceTango.html#afb100d0df5cc0a0573218b0d37a6bd4f>`__

const char \*const NoClass

**Definition:** tango\_const.h:105

`Tango::Bo\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a732887ac3a7cb5e04beb828a6704ee6b>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_USA)(const DevVarUShortArray
\*)

**Definition:** tango\_const.h:531

`Tango::ranges\_type2const <../../df/d08/structTango_1_1ranges__type2const.html>`__

**Definition:** tango\_const.h:1225

`Tango::FlA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1b8f556f14107eac612ab9fd65d83ded>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:750

`Tango::Db\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a9b40b2dd80aa0086c9d90926fa93e3a2>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:601

`Tango::TG\_IMP\_MINOR\_DEVFAILED <../../de/ddf/namespaceTango.html#a6d15f636ee420576140717db7ca83d62>`__

const int TG\_IMP\_MINOR\_DEVFAILED

**Definition:** tango\_const.h:98

`Tango::DbA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6a5f8b731e62e7c050c7d5cb53f21372>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:774

`Tango::Lg\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a9d30d7d92eb416077a38b9bc224e1a61>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:567

`Tango::API\_AlreadyPolled <../../de/ddf/namespaceTango.html#a598829f7cf84a1084688a22290888b66>`__

const char \*const API\_AlreadyPolled

**Definition:** tango\_const.h:327

`Tango::ChA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a805a654c5cbb7b66cd6ad5f596a78e76>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:693

`Tango::MAX\_TRANSFER\_SIZE <../../de/ddf/namespaceTango.html#aed016c0842de7eb43bd60e4beae64333>`__

const char \*const MAX\_TRANSFER\_SIZE

**Definition:** tango\_const.h:208

`Tango::API\_CantDestroyDevice <../../de/ddf/namespaceTango.html#ae40cae7ba5e62681693fb931bc036101>`__

const char \*const API\_CantDestroyDevice

**Definition:** tango\_const.h:355

`Tango::DSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a80f0a2e894cb83ce221f3a7624b37881>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:869

`Tango::Sh\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e0ed0e831ebb80da74189c81125e97>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:553

`Tango::DEFAULT\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#ae75357a2687b2f264cc1f811f887de37>`__

const int DEFAULT\_LOCK\_VALIDITY

**Definition:** tango\_const.h:159

`Tango::TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__

const int TANGO\_FLOAT\_PRECISION

**Definition:** tango\_const.h:104

`Tango::LOCK\_REM\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eaf9a342568f45e6895c595944065e9133>`__

**Definition:** tango\_const.h:980

`Tango::CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a7fadd416ab137ac02e90f277f82756e5>`__

void(DeviceImpl::\* CmdMethPtr\_DbA)(const DevVarDoubleArray \*)

**Definition:** tango\_const.h:490

`Tango::BY\_DEVICE <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a4616aaf95bd5002833d37dc3e5f46ee3>`__

**Definition:** tango\_const.h:965

`Tango::DEVVAR\_SHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3b1acccd8c06639df370a59e34b9ea28>`__

**Definition:** tango\_const.h:914

`Tango::API\_NotificationServiceFailed <../../de/ddf/namespaceTango.html#a53d79f446de0c921d2508bf69aacff9c>`__

const char \*const API\_NotificationServiceFailed

**Definition:** tango\_const.h:414

`Tango::CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e059c81670f1d7defd075ba8f0a5e9>`__

void(DeviceImpl::\* CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:492

`Tango::UL\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ab2191ee90a48dd4db2ea1ffd6fbee1ba>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:642

`Tango::DefaultWritAttrProp <../../de/ddf/namespaceTango.html#a9560b2deaa08619f6fbda8d581cafa72>`__

const bool DefaultWritAttrProp

**Definition:** tango\_const.h:75

`Tango::API\_AttrWrongMemValue <../../de/ddf/namespaceTango.html#a8b61b1fdd81b63e8cfc5ce1a0f3c52ad>`__

const char \*const API\_AttrWrongMemValue

**Definition:** tango\_const.h:344

`Tango::US\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a6c96bc033b359884e35b34a4b3be1a89>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:621

`Tango::DbA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2f96695d024caa9fb13ac7e79d0b90c8>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:776

`Tango::ErrorManagementType <../../d1/d45/group__Client.html#gac36915c08d6722e33f71f00b3b1d2ff0>`__

ErrorManagementType

Possible error management with write\_read\_attribute call.

**Definition:** tango\_const.h:1138

`Tango::EVENT\_COMPAT <../../de/ddf/namespaceTango.html#a1385bcefaaafad1d87abf07eeb98af59>`__

const char \*const EVENT\_COMPAT

**Definition:** tango\_const.h:237

`Tango::API\_CmdNotPolled <../../de/ddf/namespaceTango.html#aff4db63e7cabc86cea88027cc2d4345e>`__

const char \*const API\_CmdNotPolled

**Definition:** tango\_const.h:365

`Tango::Str\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a110147ab7b0abde659c86127eca3caf6>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_ShA)(const DevVarShortArray
\*)

**Definition:** tango\_const.h:667

`Tango::ChA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae606bbfe74776f0a801f9135cb6f91f2>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr)()

**Definition:** tango\_const.h:506

`Tango::API\_AttrValueNotSet <../../de/ddf/namespaceTango.html#affc0676b6e97629cd7a92ae9a438bf35>`__

const char \*const API\_AttrValueNotSet

**Definition:** tango\_const.h:342

`Tango::DEVVAR\_ULONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a8e9fc554e1804a6e415c45718e7b077a>`__

**Definition:** tango\_const.h:919

`Tango::API\_DeviceUnlockable <../../de/ddf/namespaceTango.html#aeea24c842a2af2d82da63141e4d18a31>`__

const char \*const API\_DeviceUnlockable

**Definition:** tango\_const.h:383

`Tango::Str\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a66239b227c33aa4bf90e882fbeb5d304>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:673

`Tango::ShA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a164e6f1d2687ad05f946d67856bb0f83>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr)()

**Definition:** tango\_const.h:507

`Tango::API\_AttrConfig <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__

const char \*const API\_AttrConfig

**Definition:** tango\_const.h:329

`Tango::UL\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab90c32729b784ae8b81988c81994b575>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:653

`Tango::MemAttrPropName <../../de/ddf/namespaceTango.html#aa2c8d63d609e4b4812d28a9da220a804>`__

const char \*const MemAttrPropName

**Definition:** tango\_const.h:313

`Tango::LOG\_DEBUG <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709ac86c1927287cc279ae0cf158de9af823>`__

**Definition:** tango\_const.h:1006

`Tango::DSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a212fc37118767813e46fb379cd10f33c>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr)()

**Definition:** tango\_const.h:515

`Tango::Str\_CmdMethPtr <../../de/ddf/namespaceTango.html#adc80802dc1ce4201e606d1c4e6444533>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr)()

**Definition:** tango\_const.h:505

`Tango::EVENT\_HEARTBEAT\_PERIOD <../../de/ddf/namespaceTango.html#a3e398ae4d333de1ef159e763ab1500e8>`__

const int EVENT\_HEARTBEAT\_PERIOD

**Definition:** tango\_const.h:124

`Tango::API\_PipeNotAllowed <../../de/ddf/namespaceTango.html#a4de7ec265953538d4a332d6cff0dc941>`__

const char \*const API\_PipeNotAllowed

**Definition:** tango\_const.h:424

`Tango::MCAST\_PROT <../../de/ddf/namespaceTango.html#a7f5b4edcb569c81b588e41fa9e3955e3>`__

const char \*const MCAST\_PROT

**Definition:** tango\_const.h:140

`Tango::API\_CantActivatePOAManager <../../de/ddf/namespaceTango.html#a7e08c459e5cba2eb75255c4c1dd696e8>`__

const char \*const API\_CantActivatePOAManager

**Definition:** tango\_const.h:351

`Tango::DB\_RECONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#a3e4956ede899062bc5eed5ac841df5e2>`__

const int DB\_RECONNECT\_TIMEOUT

**Definition:** tango\_const.h:177

`Tango::API\_PipeValueNotSet <../../de/ddf/namespaceTango.html#a850f2c0b3b80513c45b9642bb48970ab>`__

const char \*const API\_PipeValueNotSet

**Definition:** tango\_const.h:428

`Tango::FWD\_TOO\_OLD\_ROOT\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6ed8fe2bdb7c54bfe79926c16b2d4709>`__

**Definition:** tango\_const.h:1203

`Tango::DISCARD\_THRESHOLD <../../de/ddf/namespaceTango.html#a0ebcc7eba0f252786b8dafd5f49bea95>`__

const double DISCARD\_THRESHOLD

**Definition:** tango\_const.h:92

`Tango::Sta\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d8fd405c309dd0e779fd240185f5a0a>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:878

`Tango::API\_CannotOpenFile <../../de/ddf/namespaceTango.html#accfb8bea6eecbcbed96fc15a8eefe6ed>`__

const char \*const API\_CannotOpenFile

**Definition:** tango\_const.h:350

`Tango::kMaxRollingThreshold <../../de/ddf/namespaceTango.html#a1988f359e5761c26c9c6b340e5186265>`__

const size\_t kMaxRollingThreshold

**Definition:** tango\_const.h:290

`Tango::ShA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed3383a83a7af2f5eca4038f8e86c89f>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:709

`Tango::TgLibVersNb <../../de/ddf/namespaceTango.html#a57f955df970c64f91e641f08ad8a8e22>`__

const int TgLibVersNb

**Definition:** tango\_const.h:55

`Tango::POLL\_START <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a1995b035ee72464ca342766003bcd114>`__

**Definition:** tango\_const.h:954

`Tango::Str\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9d5b34a841ed5ebda2865e06f101b985>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:660

`Tango::Db\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6a2bc0cc59bcb9d2b34bb52329f8dca6>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:599

`Tango::API\_WrongNumberOfArgs <../../de/ddf/namespaceTango.html#a3b37165a6d772cef81d9e3f41fa835eb>`__

const char \*const API\_WrongNumberOfArgs

**Definition:** tango\_const.h:454

`Tango::ARCHIVE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__

Archive event.

**Definition:** tango\_const.h:1093

`Tango::API\_DeviceLocked <../../de/ddf/namespaceTango.html#a2505084b158db239b47f14f83932ca7b>`__

const char \*const API\_DeviceLocked

**Definition:** tango\_const.h:378

`Tango::DSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aac18e719cba0acd9758e1cc738a81d26>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:861

`Tango::ShA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ade779ac6b063ec3d874e1cd73035b29f>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:714

`Tango::API\_CommandFailed <../../de/ddf/namespaceTango.html#a637934aed55dfd38af6b23c0c5b29306>`__

const char \*const API\_CommandFailed

**Definition:** tango\_const.h:366

`Tango::CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a30795b211f347703f1e78d3a53419990>`__

void(DeviceImpl::\* CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:488

`Tango::DSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a296618d8c9168a46520e43d007f842c3>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:875

`Tango::CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#abe8c0ba9a0f18b778477b1df2ffa2227>`__

const int CLNT\_TIMEOUT

**Definition:** tango\_const.h:169

`Tango::FWD\_ERR\_UNKNOWN <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba84a50d28d511e508a2470ba5c34adea9>`__

**Definition:** tango\_const.h:1205

`Tango::DbA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a061711ccdd6afbbdbb1e973e7341292d>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:770

`Tango::Fl\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#af02ada18999022a4761b7bcf5d26224a>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:582

`Tango::API\_InternalError <../../de/ddf/namespaceTango.html#a3ba812bf097eec3b255a533369e534b3>`__

const char \*const API\_InternalError

**Definition:** tango\_const.h:404

`Tango::Db\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ac78738c85f8dff43c42173b5be45b695>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:608

`Tango::LgA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a32518cfc275adda69cb6d1506dbfb0ba>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:723

`Tango::Db\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5a7f4c36fb46a213d9a15fce26707946>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:602

`Tango::ShA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a22aac172c20bfdbbbb45d8cffd4e0686>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:710

`Tango::NO\_SYNC <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a1287827842e9fa6c85a468c7299f3042>`__

**Definition:** tango\_const.h:968

`Tango::StrA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a637507c7ca306deb043f189f1c6279ae>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:831

`Tango::Lg\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a33fd79f1815515968e2e695462b7f657>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_DbA)(const DevVarDoubleArray \*)

**Definition:** tango\_const.h:570

`Tango::DEVVAR\_STATEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a943b1f4763a27dbdd450e6ec9c2d6b89>`__

**Definition:** tango\_const.h:935

`Tango::Bo\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a26342a5319609906e84d6e5a03046345>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:533

`Tango::ULA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a3516033af2f5b9b4c067e2f1811473e1>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:814

`Tango::API\_SystemCallFailed <../../de/ddf/namespaceTango.html#a2f24922d31c27b5e586d336369e48e98>`__

const char \*const API\_SystemCallFailed

**Definition:** tango\_const.h:442

`Tango::USA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a294f2e96ee27b9256e6d6f931358e51f>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:787

`Tango::UL\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a5a40d15ef2d3bdf1b83b01ec26c52b9b>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:646

`Tango::DATABASE\_CLASS <../../de/ddf/namespaceTango.html#aaa8f81c3a53d35a3f315e8580b2e3877>`__

const char \*const DATABASE\_CLASS

**Definition:** tango\_const.h:102

`Tango::Sh\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#acecb5447ce6c0c373ee9779c28a3609e>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:547

`Tango::SendEventType <../../de/ddf/namespaceTango.html#a3941141427c5165191753fbbcc549061>`__

struct Tango::\_SendEventType SendEventType

`Tango::API\_PolledDeviceNotInPoolConf <../../de/ddf/namespaceTango.html#a9ded57d73abedbed85f21bc0af5cccd2>`__

const char \*const API\_PolledDeviceNotInPoolConf

**Definition:** tango\_const.h:431

`Tango::API\_AttrNoAlarm <../../de/ddf/namespaceTango.html#a20550ebb1e28f43df0b2ad5962166ee0>`__

const char \*const API\_AttrNoAlarm

**Definition:** tango\_const.h:335

`Tango::ACCESS\_READ <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7a016fdcb56a610736d4ce1aae90d4a1e8>`__

**Definition:** tango\_const.h:1151

`Tango::Sh\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa15b4936bce76c1cf85d5655494a0ff8>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:541

`Tango::FlA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a7bdae07e9af31bb99b110cee82036929>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:748

`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__

#define TANGO\_VERSION\_MAJOR

**Definition:** tango\_const.h:43

`Tango::Sta\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aba8646e1e736a8c105cc266a9bd3fd35>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:896

`Tango::FlA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a3b4e85bd14a1074b67b362283dcf68f9>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:743

`Tango::ULA\_CmdMethPtr <../../de/ddf/namespaceTango.html#abd18290ec58ce093b7be1ac2f54968a9>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr)()

**Definition:** tango\_const.h:512

`Tango::PollCmdCode <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580>`__

PollCmdCode

**Definition:** tango\_const.h:951

`Tango::API\_TangoHostNotSet <../../de/ddf/namespaceTango.html#a3860ba9e93c51e5508c38fe0aabb50f2>`__

const char \*const API\_TangoHostNotSet

**Definition:** tango\_const.h:443

`Tango::Sta\_CmdMethPtr <../../de/ddf/namespaceTango.html#a66828e7e85d00a2fd750ec30d1834121>`__

DevState(DeviceImpl::\* Sta\_CmdMethPtr)()

**Definition:** tango\_const.h:516

`Tango::MAX\_DATA\_ELT\_IN\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#af39ca888bd7f44ad3c7c0600920f4344>`__

const int MAX\_DATA\_ELT\_IN\_PIPE\_BLOB

**Definition:** tango\_const.h:251

`Tango::DbA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a15aecaff77a9e5ee9a0387b921e001b4>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:771

`Tango::MIN <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1eafdcdb139d7d951d8533147e44bd2fcf8>`__

**Definition:** tango\_const.h:1157

`Tango::ACCESS\_WRITE <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7ae04a28408b4323c2ef793dd64d497a05>`__

**Definition:** tango\_const.h:1152

`Tango::Bo\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a68930b1508c917e4e2a876839868e7e8>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:519

`Tango::DSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1654b8d1b277ddefcda32555548a4050>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:871

`Tango::ShA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#afce3f10debd2aaa02412f71cf734ef05>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:713

`Tango::CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a0862a2fc7c3157cadd8eb33085cf36cb>`__

void(DeviceImpl::\* CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:484

`Tango::US\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#abf3730241e2a34a13928143b015c20a3>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:623

`Tango::API\_AttrNotWritable <../../de/ddf/namespaceTango.html#a9a46d00f7e44e69913d9b37c57172e1a>`__

const char \*const API\_AttrNotWritable

**Definition:** tango\_const.h:339

`Tango::API\_JavaRuntimeSecurityException <../../de/ddf/namespaceTango.html#a8dc4ecff1585b33fe28a772f95ce87d7>`__

const char \*const API\_JavaRuntimeSecurityException

**Definition:** tango\_const.h:406

`Tango::LOG\_ERROR <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a16302cb4688478207991d1a22dd90a92>`__

**Definition:** tango\_const.h:1003

`Tango::USA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5af02355146cf5e5b1913d250270e655>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:782

`Tango::AllCmd <../../de/ddf/namespaceTango.html#a71a690fd2e85a6d3eeeebb8cc99308ed>`__

const char \*const AllCmd

**Definition:** tango\_const.h:79

`Tango::ZMQ\_DISCONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca1345e280dc07fcd026acd131b2a6c9b1>`__

**Definition:** tango\_const.h:1170

`Tango::DbObjName <../../de/ddf/namespaceTango.html#a036a32581f413a3bcfb72a98def0a0b9>`__

const char \*const DbObjName

**Definition:** tango\_const.h:67

`Tango::\_AttributeIdlData::data\_4 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a58571556b9a60dd44c88fd9b07730d5e>`__

AttributeValueList\_4 \* data\_4

**Definition:** tango\_const.h:1211

`Tango::FlA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a554958ba6088a065d290bf044243951e>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:742

`Tango::ZMQ\_CONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca91847a3fe27dc06e3ae4f6d9f0aeb564>`__

**Definition:** tango\_const.h:1169

`Tango::API\_DeviceNotLocked <../../de/ddf/namespaceTango.html#a53e0d40a069f1e0dae8d9f62e8df5dc1>`__

const char \*const API\_DeviceNotLocked

**Definition:** tango\_const.h:381

`Tango::Lg\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#adc2a9416df3d38ced1ec5c29edfbb85c>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:568

`Tango::US\_CmdMethPtr <../../de/ddf/namespaceTango.html#a3522ded92c13d7ddb6cbb1187684c38a>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr)()

**Definition:** tango\_const.h:503

`Tango::DbA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a1242bc728e082bc284eebc5f7f3a5da9>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:763

`Tango::SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__

SerialModel

**Definition:** tango\_const.h:964

`Tango::DEV\_UCHAR <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__

**Definition:** tango\_const.h:926

`Tango::Lg\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a56a121f2c26f1ff8b1e2f52a0ed961eb>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:559

`Tango::ResNotDefined <../../de/ddf/namespaceTango.html#afc8bf12ed1c936bfae762578dcc48e73>`__

const char \*const ResNotDefined

**Definition:** tango\_const.h:69

`Tango::Sh\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a68037c5070635f8197ac049c7bf8c9d7>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:548

`Tango::Db\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a4ee2d25004efbef1341fd8f59308f1c8>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:606

`Tango::API\_PollObjNotFound <../../de/ddf/namespaceTango.html#a710a71ec0ed36196fa2dfaa7208f23d0>`__

const char \*const API\_PollObjNotFound

**Definition:** tango\_const.h:434

`Tango::DEVVAR\_STRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abca6466d0c16ba364261e16d67b4408c>`__

**Definition:** tango\_const.h:920

`Tango::ATT\_CONF\_REL\_NB <../../de/ddf/namespaceTango.html#a29de5d1a870e15287b55b2f3653cbd9d>`__

const int ATT\_CONF\_REL\_NB

**Definition:** tango\_const.h:235

`Tango::FlA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#aeb265657e3fd3a016afd720469d9a0e3>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:752

`Tango::Bo\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ac6d8073f3edef0766b7189dfc7ad35bb>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_ShA)(const DevVarShortArray
\*)

**Definition:** tango\_const.h:527

`Tango::CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a6f460531420452c547678fe9a660789a>`__

void(DeviceImpl::\* CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:487

`Tango::Bo\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a866f2904666005aa8ff5ef40dc432bd2>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:536

`Tango::DEVVAR\_FLOATARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aadc0983bbe46b67d5a5c0b6fefd635f3>`__

**Definition:** tango\_const.h:916

`Tango::POLL\_REM\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a24fb79eedb927dc2ab9c8ac492abc99d>`__

**Definition:** tango\_const.h:961

`Tango::DbA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8f5a35851e86bbf8dc1d0fce64c551d8>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:761

`Tango::API\_AttrNotAllowed <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__

const char \*const API\_AttrNotAllowed

**Definition:** tango\_const.h:336

`Tango::Str\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a40a9814bcb6e221c75a391e83fbc6580>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:658

`Tango::ULA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1dfb2afc81e0fd7dab926225d6ab0575>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:807

`Tango::Fl\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac83dbacfeeb9dcef8e2c7bf934f483da>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr)()

**Definition:** tango\_const.h:501

`Tango::ShA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a455f11cf6a5865934da33a3c28ec7285>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:699

`Tango::DbA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ad0b5621ff445d78aae963af48a99ade2>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:767

`Tango::LgA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#acd1484770a3cbfac1c9e468b44c4fd38>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:728

`Tango::Sta\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a8dff7e23b118cecc529dc4b92c030db2>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:882

`Tango::USA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a563cc70a5fe8aed106a3a796ba60cb6a>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:791

`Tango::ULA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a3e5fb6e53a831e518ba26a167a5416ea>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:813

`Tango::Sta\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a80e38ba637be885bd243378916802404>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:885

`Tango::USA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#aeb90324f4a1e89c7ac71c416b5f9f593>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:793

`Tango::API\_AttrNotPolled <../../de/ddf/namespaceTango.html#affd54d4f5cd5e42d5030a5fc3d44eb2f>`__

const char \*const API\_AttrNotPolled

**Definition:** tango\_const.h:338

`Tango::API\_WrongDeviceNameSyntax <../../de/ddf/namespaceTango.html#abd8bdbb7ceaf1070d07ae3b071600c60>`__

const char \*const API\_WrongDeviceNameSyntax

**Definition:** tango\_const.h:449

`Tango::US\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a6d29c9e4d01c197d8d9cdf26e8e80d23>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_DbA)(const DevVarDoubleArray
\*)

**Definition:** tango\_const.h:630

`Tango::\_OptAttrProp <../../d7/d60/structTango_1_1__OptAttrProp.html>`__

**Definition:** tango\_const.h:1186

`Tango::FWD\_WRONG\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bacfb374b81c1b820d7cab0f9ba9d3d5e8>`__

**Definition:** tango\_const.h:1196

`Tango::FlA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a5a29e5d7d5f5f1e4dfae56fdfd9a5e29>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:747

`Tango::FormatNotSpec\_STR <../../de/ddf/namespaceTango.html#a76d5ff904af5bbfe50ac6d70ec891fff>`__

const char \*const FormatNotSpec\_STR

**Definition:** tango\_const.h:307

`Tango::InitialOutput <../../de/ddf/namespaceTango.html#afac56d33cd8fe564b28ff51a92cce28f>`__

const char \*const InitialOutput

**Definition:** tango\_const.h:62

`Tango::CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__

Change event.

**Definition:** tango\_const.h:1090

`Tango::Sh\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a7d5e95448f85f3d5d5f164e5e1126cd8>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:538

`Tango::ULA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a38388820e592d7301290627c387256c9>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:806

`Tango::PipeReqType <../../de/ddf/namespaceTango.html#a7d278432a160e4e055a13a178b461aed>`__

AttReqType PipeReqType

**Definition:** tango\_const.h:976

`Tango::TgLibMajorVers <../../de/ddf/namespaceTango.html#ae7168d398e7627f1083c3b090427fb89>`__

const char \*const TgLibMajorVers

**Definition:** tango\_const.h:53

`Tango::LSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a01c48763b9173b9b9bd6ef4ae27b1bd9>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:851

`Tango::API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__

const char \*const API\_AttrOptProp

**Definition:** tango\_const.h:340

`Tango::ChannelType <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7>`__

ChannelType

**Definition:** tango\_const.h:1161

`Tango::ULA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0f4f21efc54e67ed3d1f6faa0e0d5d32>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:816

`Tango::Str\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7c8180c37aa88c0fb127251bdd7ea7f5>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_ULA)(const DevVarULongArray
\*)

**Definition:** tango\_const.h:672

`Tango::SUB\_HWM <../../de/ddf/namespaceTango.html#a1ce854fb3e526b633b07d2014ad5cd69>`__

const int SUB\_HWM

**Definition:** tango\_const.h:146

`Tango::USER\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__

User event.

**Definition:** tango\_const.h:1094

`Tango::UL\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a1570a69fa50e363806916b930b5a4533>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:655

`Tango::EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__

EventType

Possible event type.

**Definition:** tango\_const.h:1089

`Tango::DbA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aa071b24bf0e05cf735319a6f04917b47>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:766

`Tango::LOG\_INFO <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a9e8df731000d4d6f23b2340b1cab36fa>`__

**Definition:** tango\_const.h:1005

`Tango::DEVVAR\_LONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4dd3df3cb7c2facc1c2bc9f5a9601267>`__

**Definition:** tango\_const.h:915

`Tango::API\_AttrIncorrectDataNumber <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__

const char \*const API\_AttrIncorrectDataNumber

**Definition:** tango\_const.h:334

`Tango::API\_EventConsumer <../../de/ddf/namespaceTango.html#ad3d754045df7893748ae23f9115055be>`__

const char \*const API\_EventConsumer

**Definition:** tango\_const.h:389

`Tango::Db\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#acfe424dee78842332193e03984aa7e53>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:603

`Tango::ChA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a96f177aabd7459d676af9401a2297a0e>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:681

`Tango::StrA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a019e5f75d68fdd1a5bc5482e6f6528a8>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:835

`Tango::API\_ReadOnlyMode <../../de/ddf/namespaceTango.html#ad215189a1b0c81fd66d5ea9b2da82ffa>`__

const char \*const API\_ReadOnlyMode

**Definition:** tango\_const.h:436

`Tango::Sh\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#afa2a5b90b7f3aae3f1acbc9aea308682>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_DbA)(const DevVarDoubleArray \*)

**Definition:** tango\_const.h:550

`Tango::CmdMethPtr <../../de/ddf/namespaceTango.html#aa8d5711e7c691caf3524baca40b9ab7c>`__

void(DeviceImpl::\* CmdMethPtr)()

**Definition:** tango\_const.h:476

`Tango::DEV\_SHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6e47f6c8e7593abe847768625cdea8f9>`__

**Definition:** tango\_const.h:906

`Tango::LOCK\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eab85fe93fa791544e2b82b13ab97b7b60>`__

**Definition:** tango\_const.h:982

`Tango::ChA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae3c3f3f7ec3d8cdcbebfd8d13fb9e359>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:687

`Tango::POLL\_LOOP\_NB <../../de/ddf/namespaceTango.html#a34f9803acabf31717db66602986603d7>`__

const int POLL\_LOOP\_NB

**Definition:** tango\_const.h:90

`Tango::API\_EventSupplierNotConstructed <../../de/ddf/namespaceTango.html#ae27e03994272a09e5e4f49789c2578c0>`__

const char \*const API\_EventSupplierNotConstructed

**Definition:** tango\_const.h:392

`Tango::CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6057a0b273689664d42521b8a3e0c5e0>`__

void(DeviceImpl::\* CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:479

`Tango::ULA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a51e8661e75847bff177abac012c2446d>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:812

`Tango::DSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a7d5075ed5894aabcd125e3dacdd6944a>`__

DevVarDoubleStringArray \*(DeviceImpl::\*
DSA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:862

`Tango::API\_BlackBoxArgument <../../de/ddf/namespaceTango.html#ada893b8f13e4324afdda4d329bf0d974>`__

const char \*const API\_BlackBoxArgument

**Definition:** tango\_const.h:347

`Tango::WindowsEnvVariable <../../de/ddf/namespaceTango.html#a03f880f9471b49474dfadd428ab11c53>`__

const char \*const WindowsEnvVariable

**Definition:** tango\_const.h:66

`Tango::POLL\_STOP <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a43446e4cb281938d5adee1cb61ae7cb3>`__

**Definition:** tango\_const.h:955

`Tango::Sh\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a28e19a81f68f5ecb36fb19b9159c2747>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_LSA)(const DevVarLongStringArray
\*)

**Definition:** tango\_const.h:554

`Tango::\_FwdAttError <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545b>`__

\_FwdAttError

**Definition:** tango\_const.h:1192

`Tango::Str\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9e24adbef58d2df3a8a72d5cbe2456c8>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_USA)(const DevVarUShortArray
\*)

**Definition:** tango\_const.h:671

`Tango::API\_PipeOptProp <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__

const char \*const API\_PipeOptProp

**Definition:** tango\_const.h:427

`Tango::US\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad21220bbb3dac5beb352d663b5332185>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:629

`Tango::ZMQ <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a7210a59f6c2bc764861a326add37a04e>`__

**Definition:** tango\_const.h:1163

`Tango::ULA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a4aa60f30887e6987cf84aacb1479ff59>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:810

`Tango::API\_DeviceUnlocked <../../de/ddf/namespaceTango.html#afb625bb1e559a94823826fc3f4fb39b2>`__

const char \*const API\_DeviceUnlocked

**Definition:** tango\_const.h:384

`Tango::DEV\_LONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4cd60a84823f849e8611f0e5b30ca830>`__

**Definition:** tango\_const.h:927

`Tango::Str\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1a09403e4efb8d50e7a94bc4fc6b44d7>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_DbA)(const DevVarDoubleArray
\*)

**Definition:** tango\_const.h:670

`Tango::BY\_CLASS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6adbbc20e2fe105a06a22d17549aac04c4>`__

**Definition:** tango\_const.h:966

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::DELTA\_PERIODIC\_LONG <../../de/ddf/namespaceTango.html#a0bdf3e69b11c6b5d5edfdb4a63f911b9>`__

const int DELTA\_PERIODIC\_LONG

**Definition:** tango\_const.h:128

`Tango::DSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af03a472d546249cf9f2fd0296a94bc98>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:872

`Tango::API\_InitMethodNotFound <../../de/ddf/namespaceTango.html#a818b637e1145bce913d10fa8651184ca>`__

const char \*const API\_InitMethodNotFound

**Definition:** tango\_const.h:401

`Tango::API\_WizardConfError <../../de/ddf/namespaceTango.html#a5447fcca78e6cd1deaaab78c94b44c64>`__

const char \*const API\_WizardConfError

**Definition:** tango\_const.h:446

`Tango::Sta\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4cefd0a65f8d7af25735d6d624795d33>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:881

`Tango::kLogTargetFile <../../de/ddf/namespaceTango.html#a2357fa42ac2cfc2e8ab530e5c7d876a4>`__

const char \*const kLogTargetFile

**Definition:** tango\_const.h:272

`Tango::StrA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a42781244cb79430236b4982443a7453e>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:818

`Tango::FWD\_CONF\_LOOP <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6b6460962ebda5fb0d44e87b92a4acbc>`__

**Definition:** tango\_const.h:1204

`Tango::PollCommand <../../de/ddf/namespaceTango.html#a7a3c5bbd36efa6c2d482917570ade6ff>`__

const char \*const PollCommand

**Definition:** tango\_const.h:81

`Tango::CONF\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aabb3218da6deceb81899a5f116e0b508>`__

const char \*const CONF\_TYPE\_EVENT

**Definition:** tango\_const.h:1114

`Tango::Sh\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8f2b534d496b737a323cad29bbce4ef2>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:545

`Tango::API\_EmptyDataElement <../../de/ddf/namespaceTango.html#ae78da62d54b1fc36bb007d5172b380b3>`__

const char \*const API\_EmptyDataElement

**Definition:** tango\_const.h:387

`Tango::TgLibVers <../../de/ddf/namespaceTango.html#a04517655cec6d73a7bec0989a59780cd>`__

const char \*const TgLibVers

**Definition:** tango\_const.h:52

`Tango::ULA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a12224ab05d77c35c35ae57e072c1f4f8>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:811

`Tango::EnvVariable <../../de/ddf/namespaceTango.html#a210b1892b97601243a4a343949345251>`__

const char \*const EnvVariable

**Definition:** tango\_const.h:65

`Tango::API\_WrongAttributeNameSyntax <../../de/ddf/namespaceTango.html#a60aecefe61f636e89e905d344496d13a>`__

const char \*const API\_WrongAttributeNameSyntax

**Definition:** tango\_const.h:447

`Tango::DELTA\_PERIODIC <../../de/ddf/namespaceTango.html#a3a8fa543b8852eadbf549c6c7ea6f4ee>`__

const double DELTA\_PERIODIC

**Definition:** tango\_const.h:127

`Tango::US\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac1fa783e614f73e2017fbfb4a324bc0f>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:625

`Tango::USA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a0828c914f3df39da3bf0059d627c6906>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:778

`Tango::FlA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a949eec48c348d7251eda1e8cb2c8597b>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:740

`Tango::LgA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#afb3dea7dd29cc9fa1954223ca4106238>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:727

`Tango::Lg\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ae88ff03fc559bff1e0d41c459296e086>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:566

`Tango::ZMQ\_CONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa64a44722f54ea80b09805f829fe1374>`__

**Definition:** tango\_const.h:1171

`Tango::ShA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab536dbec16fdc6aab3c00f20ae43599e>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:706

`Tango::MAX\_GIOP\_PER\_SERVER <../../de/ddf/namespaceTango.html#ac677a7f571cd285c98d5ed0e6978a87b>`__

const char \*const MAX\_GIOP\_PER\_SERVER

**Definition:** tango\_const.h:214

`Tango::\_OptAttrProp::name <../../d7/d60/structTango_1_1__OptAttrProp.html#a875ce1b529eade873f351853d13489fe>`__

const char \* name

**Definition:** tango\_const.h:1188

`Tango::API\_BlackBoxEmpty <../../de/ddf/namespaceTango.html#a53160500c33341b504d64ed0014ecb26>`__

const char \*const API\_BlackBoxEmpty

**Definition:** tango\_const.h:348

`Tango::Fl\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a62072169d6338d1b3c57ca6fc14ccf82>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:581

`Tango::LgA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a4486fc46e5e056a749756e3a3b79326c>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:736

`Tango::StrA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac1451899a4eb2aafeb10406654dac341>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr)()

**Definition:** tango\_const.h:513

`Tango::FlA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#afc7d2eaf3685d591951b5e7b2ed799ea>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:739

`Tango::API\_CantCreateClassPoa <../../de/ddf/namespaceTango.html#a5541eb1430b1668517f3f890fb0ab32e>`__

const char \*const API\_CantCreateClassPoa

**Definition:** tango\_const.h:353

`Tango::LgA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2e4ac9120ed53437763e911d2399d50f>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:733

`Tango::ZMQ\_DELAY\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa10332851836fb7f97f58336eea6700a>`__

**Definition:** tango\_const.h:1174

`Tango::LgA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a88c426c42fcd82727c47ce13573482de>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:722

`Tango::Lg\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a6667c6075748027ce7d863db769e81d1>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_StrA)(const DevVarStringArray \*)

**Definition:** tango\_const.h:573

`Tango::LabelNotSpec <../../de/ddf/namespaceTango.html#aa03500f78edeb91bf53eea42ef9b34ee>`__

const char \*const LabelNotSpec

**Definition:** tango\_const.h:300

`Tango::CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ae366eb5a5f2f842e5fafc8aafb5fa88c>`__

void(DeviceImpl::\* CmdMethPtr\_LSA)(const DevVarLongStringArray \*)

**Definition:** tango\_const.h:494

`Tango::API\_EventQueues <../../de/ddf/namespaceTango.html#a98a17638f72d6e841e996541e5a8d548>`__

const char \*const API\_EventQueues

**Definition:** tango\_const.h:391

`Tango::Lg\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a819d1e3f4565c171584dbb668fc45ff1>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:562

`Tango::Sh\_CmdMethPtr <../../de/ddf/namespaceTango.html#af6ea4b8b550653b080089e2767a8500d>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr)()

**Definition:** tango\_const.h:499

`Tango::Bo\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a863cdd3f5f94d6be0a920f3c96ddaa0e>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:523

`Tango::UL\_CmdMethPtr <../../de/ddf/namespaceTango.html#a453cc05f298d2ddb29684d430c1f2e7d>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr)()

**Definition:** tango\_const.h:504

`Tango::DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__

Data ready event.

**Definition:** tango\_const.h:1096

`Tango::USA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ab9e1a5ba2e69320bb0485bc233fb137c>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:790

`Tango::US\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab7f942005d40e768cdb6c73f381df476>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:633

`Tango::Lg\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a681be512bd1998e61011147ba15b3b14>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:561

`Tango::POLL\_EXIT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a9aeec243eb1cd5c06cba483049a2b270>`__

**Definition:** tango\_const.h:958

`Tango::API\_RootAttrFailed <../../de/ddf/namespaceTango.html#a8bb8d6a61f1044b89530b2e88851bc8a>`__

const char \*const API\_RootAttrFailed

**Definition:** tango\_const.h:437

`Tango::US\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4c2499779c40b328abc81d9dbc84ac83>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:624

`Tango::LOCAL\_REQUEST\_STR\_SIZE <../../de/ddf/namespaceTango.html#a943b554c8b51645b3ffe4f984317af69>`__

const int LOCAL\_REQUEST\_STR\_SIZE

**Definition:** tango\_const.h:84

`Tango::DbA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a1bffde3bccf0d1d98b8304e02b18255b>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr)()

**Definition:** tango\_const.h:510

`Tango::Sta\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad0525eec6583123226aa91844e04f58a>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:883

`Tango::StrA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1a47aab5f31ddd6c224ff3bf0fb8e605>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:832

`Tango::MAX\_SOCKET\_SUB <../../de/ddf/namespaceTango.html#a72f4218c4dd771081c848699c6c10b96>`__

const int MAX\_SOCKET\_SUB

**Definition:** tango\_const.h:144

`Tango::API\_IncoherentDbData <../../de/ddf/namespaceTango.html#a75a463e45c3ef4584366f2166c60846d>`__

const char \*const API\_IncoherentDbData

**Definition:** tango\_const.h:395

`Tango::StrA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abd614846a99e6c900eab2c5ca1a0a2af>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:826

`Tango::Sta\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3e665059db438c9e1c00a380472f2dbb>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_USA)(const DevVarUShortArray
\*)

**Definition:** tango\_const.h:891

`Tango::ShA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aefed3c29345dee7e5fe2cae6e3a3094d>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:702

`Tango::API\_CantRetrieveClassList <../../de/ddf/namespaceTango.html#a54c1d08ea17e70fa6d222f1ae27bb1ca>`__

const char \*const API\_CantRetrieveClassList

**Definition:** tango\_const.h:361

`Tango::FlA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aad88fd97f46fe72a9a30853e3b5c1dca>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:749

`Tango::DATA\_TYPE\_UNKNOWN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae51d5b5160e3a793758163127734aa59>`__

**Definition:** tango\_const.h:936

`Tango::US\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aa9410e35aa0ec77af2d0df45f1ae4fe8>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:618

`Tango::Lg\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4c7b5b91d63fbb52332e0e55117ad82f>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:565

`Tango::API\_ZmqFailed <../../de/ddf/namespaceTango.html#a17556fe34cd8e046d5f8c57b5bfd483f>`__

const char \*const API\_ZmqFailed

**Definition:** tango\_const.h:455

`Tango::DefaultDocUrl <../../de/ddf/namespaceTango.html#a53dfa761bdefadf3fc6ab76646e172bf>`__

const char \*const DefaultDocUrl

**Definition:** tango\_const.h:64

`Tango::FWD\_ROOT\_DEV\_NOT\_STARTED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba497d85fca4a1f770eeb5f811c72e1600>`__

**Definition:** tango\_const.h:1200

`Tango::LOG\_CONSOLE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daad7b8b9a14328c599975a890820eefb2a>`__

**Definition:** tango\_const.h:1014

`Tango::FlA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab6f3c71e51213d48e8602689491e1421>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:746

`Tango::AttributeIdlData <../../de/ddf/namespaceTango.html#a79122420bb8fc15b17138ff0da9bad7d>`__

struct Tango::\_AttributeIdlData AttributeIdlData

`Tango::API\_CommandTimedOut <../../de/ddf/namespaceTango.html#a65a8de572231c0792e0d9cca80fa0440>`__

const char \*const API\_CommandTimedOut

**Definition:** tango\_const.h:369

`Tango::Bo\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ae73e22a313ab738e86f97b9955113576>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:524

`Tango::API\_CantInstallSignal <../../de/ddf/namespaceTango.html#a0e959c114559af4673b863546c6251b7>`__

const char \*const API\_CantInstallSignal

**Definition:** tango\_const.h:359

`Tango::DEVVAR\_DOUBLEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aec3cf6f38917b8a9736dfaeccda26e26>`__

**Definition:** tango\_const.h:917

`Tango::Bo\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad8e08cacfb2c9f5ac69b249e4b6c6544>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_FlA)(const DevVarFloatArray
\*)

**Definition:** tango\_const.h:529

`Tango::HEARTBEAT\_EVENT\_NAME <../../de/ddf/namespaceTango.html#af81944eafbad16a35007f5cd5749db75>`__

const char \*const HEARTBEAT\_EVENT\_NAME

**Definition:** tango\_const.h:138

`Tango::API\_UnsupportedFeature <../../de/ddf/namespaceTango.html#a61e3a549e4af3321da46cbd40dc86642>`__

const char \*const API\_UnsupportedFeature

**Definition:** tango\_const.h:444

`Tango::ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__

Attribute configuration change event.

**Definition:** tango\_const.h:1095

`Tango::Fl\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ac717b41134caddbfc90b9b77cd645119>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_LSA)(const DevVarLongStringArray
\*)

**Definition:** tango\_const.h:594

`Tango::USA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ae81238bd9f048075d6aaaf4c12af79dc>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:781

`Tango::CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2d0553885eaaa7b6fa57d09b3692a975>`__

void(DeviceImpl::\* CmdMethPtr\_StrA)(const DevVarStringArray \*)

**Definition:** tango\_const.h:493

`Tango::LockCmdCode <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4e>`__

LockCmdCode

**Definition:** tango\_const.h:978

`Tango::Lg\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a0acb4a982e1b98fe053bdcf94b63fbc9>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:560

`Tango::DEFAULT\_EVENT\_PERIOD <../../de/ddf/namespaceTango.html#a129d2bcb7e86bc4770ceedd7762939c3>`__

const int DEFAULT\_EVENT\_PERIOD

**Definition:** tango\_const.h:126

`Tango::CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a74c0e35f6c9083e52a6112f6f2eeae93>`__

void(DeviceImpl::\* CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:483

`Tango::DATA\_READY\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aeb31db5fae14a4c3b3c0e0375e9de05a>`__

const char \*const DATA\_READY\_TYPE\_EVENT

**Definition:** tango\_const.h:1115

`Tango::FWD\_WRONG\_ATTR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba2e2ee839d684948d99f124f9198910e6>`__

**Definition:** tango\_const.h:1195

`Tango::LogLevel <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709>`__

LogLevel

**Definition:** tango\_const.h:1000

`Tango::Fl\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a90e621d66b254ae39f48276d200ab3de>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:578

`Tango::LgA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a3f6156a7c49f97847df7dc214afeaa6b>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:718

`Tango::LSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a0a7f0e04602698f2334bf26bdceb3711>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:852

`TANGO\_VERSION\_PATCH <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__

#define TANGO\_VERSION\_PATCH

**Definition:** tango\_const.h:45

`Tango::AlrmValueNotSpec <../../de/ddf/namespaceTango.html#a381c25abcd854845c2187de2d6402c4b>`__

const char \*const AlrmValueNotSpec

**Definition:** tango\_const.h:298

`Tango::AllAttr <../../de/ddf/namespaceTango.html#a565f91812b4edcc2c69c76462a6b9ee5>`__

const char \*const AllAttr

**Definition:** tango\_const.h:76

`Tango::API\_PollRingBufferEmpty <../../de/ddf/namespaceTango.html#a8a48a6e8f55bef8dfad79f2290a0d575>`__

const char \*const API\_PollRingBufferEmpty

**Definition:** tango\_const.h:435

`Tango::ALL\_EVENTS <../../de/ddf/namespaceTango.html#a374c1134a17d1e50284d1a68cc4accc1>`__

const int ALL\_EVENTS

**Definition:** tango\_const.h:229

`Tango::API\_NotUpdatedAnyMore <../../de/ddf/namespaceTango.html#ac4638e0fff1396065a562a7a1770922f>`__

const char \*const API\_NotUpdatedAnyMore

**Definition:** tango\_const.h:417

`Tango::StrA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a92a9bf19f13524fe56682f7d9741bcbc>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:824

`Tango::PIPE\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aaad121df2abea1d39eca3bd3ef413b37>`__

**Definition:** tango\_const.h:1127

`Tango::Sta\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ad3b6fecd9648437dd3a5f303d096258d>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:893

`Tango::Lg\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a9dacf339ae1040b04a331301c2375a00>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:558

`Tango::LgA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aba43697d1a4ea480ea3fc83e7528946f>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:726

`Tango::US\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1d3de8c2582a8a4689be2c0d61765893>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_USA)(const DevVarUShortArray
\*)

**Definition:** tango\_const.h:631

`Tango::EVENT\_COMPAT\_IDL5 <../../de/ddf/namespaceTango.html#a23978bc0013b2a550b37f19c453c0e2f>`__

const char \*const EVENT\_COMPAT\_IDL5

**Definition:** tango\_const.h:238

`Tango::CLNT\_TIMEOUT\_STR <../../de/ddf/namespaceTango.html#a391adb957de83d43090c59de92eb7f30>`__

const char \*const CLNT\_TIMEOUT\_STR

**Definition:** tango\_const.h:168

`Tango::API\_DatabaseAccess <../../de/ddf/namespaceTango.html#ad2f5b3b1ba2b0c831aad77cf7f299578>`__

const char \*const API\_DatabaseAccess

**Definition:** tango\_const.h:373

`Tango::DbA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abfccabdb91cf8123716c919c4183f890>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:773

`Tango::LSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5b82af490025cb3c7bf47f7d0d745d9a>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:838

`Tango::LOCK\_ADD\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea6b53bd238709b8614503054909ce5882>`__

**Definition:** tango\_const.h:979

`Tango::LSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aa90dd6f6a952934368deefecf1f2766a>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:855

`Tango::API\_DeviceNotPolled <../../de/ddf/namespaceTango.html#aff093f1d3fc055d39c6857e28b2bbab0>`__

const char \*const API\_DeviceNotPolled

**Definition:** tango\_const.h:382

`Tango::API\_SignalOutOfRange <../../de/ddf/namespaceTango.html#acb442d8ddc4f3a34da536aa56c218373>`__

const char \*const API\_SignalOutOfRange

**Definition:** tango\_const.h:439

`Tango::UL\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afe1f5223f16ddbea109f914fc80a991d>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:641

`Tango::DSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1384ff007c9d1a8a04158f02d8883d9e>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:867

`Tango::LOG\_FILE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daa303eef4691045883e00a452c355f4d95>`__

**Definition:** tango\_const.h:1015

`Tango::ShA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ae3408867217dd634e9baa3b8b2e00b71>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:703

`Tango::US\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abb0554168f870f1b3f6d8be752787b89>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:626

`Tango::Db\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a95e5c9b9381da0ba104f2bda51822735>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:615

`Tango::ShA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4a95f6528d2f1b677f794190c997f75a>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:711

`Tango::PollDevice <../../de/ddf/namespaceTango.html#acbbd6cfda6c92560b0783d216d90290b>`__

struct Tango::\_PollDevice PollDevice

`Tango::AllAttr\_3 <../../de/ddf/namespaceTango.html#a3f8363d4faf2dad3d54964b214e677cf>`__

const char \*const AllAttr\_3

**Definition:** tango\_const.h:77

`Tango::DevStateName <../../de/ddf/namespaceTango.html#af9b307743a569b68bb46f6bc79f893cf>`__

const char \*const DevStateName[]

**Definition:** tango\_const.h:1065

`Tango::USA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a626d30f575e50ea80d8b3fc4d2c3eb77>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:785

`Tango::numEventType <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__

**Definition:** tango\_const.h:1099

`Tango::Sh\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af2f00df032a482005ee882a1b4762727>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:540

`Tango::DbA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ae3d6872bb2b99b3be2a54ee3caabd840>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:768

`Tango::StrA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3c1ed43b6a4271e23edaa07b717da820>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:820

`Tango::UL\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a25cb4414b65aa1f75f4b3ee792afb4a3>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:639

`Tango::Str\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a983682dbeba22a0c842979acfe3b2e8e>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:663

`Tango::US\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a382f1790b6a539954e4e8827768574ae>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:627

`Tango::DEV\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a53b146beabe34367b2fab9b6b7920dbf>`__

**Definition:** tango\_const.h:934

`Tango::FlA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a2a0324510f9ca8366abc0be08fd4abbb>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:755

`Tango::ChA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#ac5d761a62e1e70a4cb4cd56ac191e407>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:678

`Tango::LgA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a3562e98dae4db9176955368029ebe581>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:725

`Tango::Bo\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#afd6ff3d1074dfd50d5dee6a79748873b>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:520

`Tango::DEV\_FLOAT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3f8bc37fd7a5bbd4d88c8f60a2141239>`__

**Definition:** tango\_const.h:908

`Tango::ULA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a0d7fe901ca23754d58856538fa4f56e3>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:802

`Tango::ULA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a2cfcd2c217a5101977aceea3ae04ffe7>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:803

`Tango::Bo\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2ea13a66a0941979858e1cba87f0fe0e>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:525

`Tango::RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__

const char \*const RootAttNotDef

**Definition:** tango\_const.h:73

`Tango::DEV\_INT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6f9719ad47c4371dc84e3af384926776>`__

**Definition:** tango\_const.h:931

`Tango::Fl\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae9c71bf65f34b81374a2aa49a774f7db>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:579

`Tango::\_SendEventType::periodic <../../d3/db5/structTango_1_1__SendEventType.html#a97a699c999ba0d8c88c00fc1cfcdac78>`__

bool periodic

**Definition:** tango\_const.h:1183

`Tango::kLogTargetSep <../../de/ddf/namespaceTango.html#ac960726f00862579dd09e6f792bfd1c6>`__

const char \*const kLogTargetSep

**Definition:** tango\_const.h:279

`Tango::ChA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9dbc667893feeeeeebac90f89e1b8fcf>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:688

`Tango::API\_AttrWrongDefined <../../de/ddf/namespaceTango.html#ade324d58a59de866554b2374b8061049>`__

const char \*const API\_AttrWrongDefined

**Definition:** tango\_const.h:343

`Tango::ULA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad91a30bf455dae012ea16cbe89f6d2cf>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:808

`Tango::DEV\_STATE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a7f46074346016dfb879ce3ff1ff78eb6>`__

**Definition:** tango\_const.h:923

`Tango::DEFAULT\_POLL\_OLD\_FACTOR <../../de/ddf/namespaceTango.html#afa27b589e2b5994a0a27059613720c19>`__

const int DEFAULT\_POLL\_OLD\_FACTOR

**Definition:** tango\_const.h:95

`Tango::DSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a40419b07604cfcbbab16f9e32c9ac955>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:859

`Tango::Sta\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aaf571bc58c62d1a7b6774a864f864f0a>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_FlA)(const DevVarFloatArray
\*)

**Definition:** tango\_const.h:889

`Tango::Str\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a2dfca0a75e280ac696bb6b0cde41eb4b>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:666

`Tango::ChA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5d3b787dc982495177cc4c8c15a4e21e>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:682

`Tango::PGM\_RATE <../../de/ddf/namespaceTango.html#abb7acc6cb1454cbca0f7aa05342d8571>`__

const int PGM\_RATE

**Definition:** tango\_const.h:142

`Tango::PollObjType <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__

PollObjType

**Definition:** tango\_const.h:944

`Tango::ULA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a95768ab0afefed8a3af059885d869ea4>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:799

`Tango::Bo\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aabe1864de1d13890b8a201dfe142ab14>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:518

`Tango::Fl\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#abe08b96c40aca517f5270b9d10d98089>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:587

`Tango::API\_OverloadingNotSupported <../../de/ddf/namespaceTango.html#a312032487531801329fa7ff62530c0f6>`__

const char \*const API\_OverloadingNotSupported

**Definition:** tango\_const.h:419

`Tango::DbA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a692637a79793edac686bcf3fbcc52eba>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:764

`Tango::LgA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a95cadafd34967e03eac7a86388585d8b>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:720

`Tango::Sta\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a8617a1c3e46dedbe103e3954aead85f9>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_ChA)(const DevVarCharArray
\*)

**Definition:** tango\_const.h:886

`Tango::Sta\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a7f148ac65a847c00105f1016485966c5>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:879

`Tango::numErrorManagementType <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a0c53bbbc2ee4f2b367971b8ffebdb9f6>`__

**Definition:** tango\_const.h:1141

`Tango::API\_MethodNotFound <../../de/ddf/namespaceTango.html#a5ae02751e401ef281032de2b8ea1072d>`__

const char \*const API\_MethodNotFound

**Definition:** tango\_const.h:410

`Tango::READ\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da08ea97521ce92807b73e64f3b96a1529>`__

**Definition:** tango\_const.h:972

`Tango::API\_WAttrOutsideLimit <../../de/ddf/namespaceTango.html#ad1dfd06214be90b120481414352756bf>`__

const char \*const API\_WAttrOutsideLimit

**Definition:** tango\_const.h:445

`Tango::DSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac4870fee6c00778de39d3c91c6ef04f6>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:870

`Tango::DEV\_BOOLEAN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab4efe3f5177bddfb8c6fed90a17167dd>`__

**Definition:** tango\_const.h:905

`Tango::API\_AttrEventProp <../../de/ddf/namespaceTango.html#a9f84a7fc80faeccc580211eaccf7fdce>`__

const char \*const API\_AttrEventProp

**Definition:** tango\_const.h:330

`Tango::ChA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6f5e67a58f92920da533a17ca55eee19>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:695

`Tango::API\_AttributePollingNotStarted <../../de/ddf/namespaceTango.html#aaacd7c57faee0af4acc07aa4766182fe>`__

const char \*const API\_AttributePollingNotStarted

**Definition:** tango\_const.h:333

`Tango::DEVVAR\_LONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a13f0d422e74541943d1fbbe9e1cad66b>`__

**Definition:** tango\_const.h:929

`Tango::US\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a5cc2ba2540da4d601aefc26241cd7d79>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:619

`Tango::DEFAULT\_TIMEOUT <../../de/ddf/namespaceTango.html#a72476a792a49b56f9e81ecae1200ac9c>`__

const int DEFAULT\_TIMEOUT

**Definition:** tango\_const.h:94

`Tango::Bo\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad0f37f7c2979ce46068a9d4111e84c37>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:528

`Tango::AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__

const char \*const AssocWritNotSpec

**Definition:** tango\_const.h:299

`Tango::Fl\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a0729da8d6ceb405a1c3c3ee6a86c5822>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_DbA)(const DevVarDoubleArray \*)

**Definition:** tango\_const.h:590

`Tango::CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4622f449003b2446968a088011afd015>`__

void(DeviceImpl::\* CmdMethPtr\_USA)(const DevVarUShortArray \*)

**Definition:** tango\_const.h:491

`Tango::USA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ab660811f69a6bffdbe21999acf8e1c6d>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:788

`Tango::ULA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abac55dd89ec41601bbe588701f1c50c6>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:804

`Tango::DispUnitNotSpec <../../de/ddf/namespaceTango.html#a4f1f3e6107d45eb51dd6d5a309773d83>`__

const char \*const DispUnitNotSpec

**Definition:** tango\_const.h:304

`Tango::Str\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6188547d1e81c9e1a791c606ea85974b>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:676

`Tango::API\_CantConnectToDevice <../../de/ddf/namespaceTango.html#abad3f6fd397ab9798d90e097ace0cc00>`__

const char \*const API\_CantConnectToDevice

**Definition:** tango\_const.h:352

`Tango::SCALAR\_PIPE <../../de/ddf/namespaceTango.html#a30435ff467857bda6eb59245667a451f>`__

const char \*const SCALAR\_PIPE

**Definition:** tango\_const.h:107

`Tango::MaxDevPropLength <../../de/ddf/namespaceTango.html#a9fb19c21a4f0589f66a53f9e884cdab5>`__

const int MaxDevPropLength

**Definition:** tango\_const.h:221

`Tango::DevEnum <../../de/ddf/namespaceTango.html#a6a9f2ce86c2eb45a059727bd9f71aac4>`__

DevShort DevEnum

**Definition:** tango\_const.h:318

`Tango::EXIT\_TH <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100ba50df4e51da121e2da9bf3df0f0f95111>`__

**Definition:** tango\_const.h:1146

`Tango::Bo\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49da5469fedd4d580d6ccbfef04a7406>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:526

`Tango::ONE\_SECOND <../../de/ddf/namespaceTango.html#ae174df1c78e4bd2bc2c2a74371b58754>`__

const int ONE\_SECOND

**Definition:** tango\_const.h:91

`Tango::LSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae7c53c1f0eca4abc14716e575a50b726>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:847

`Tango::API\_PipeWrongArg <../../de/ddf/namespaceTango.html#a6eb51dd41f3f691160ffb27779eb4733>`__

const char \*const API\_PipeWrongArg

**Definition:** tango\_const.h:430

`Tango::EVENT\_RESUBSCRIBE\_PERIOD <../../de/ddf/namespaceTango.html#a966bd63dc204670cd22634518139c1a5>`__

const int EVENT\_RESUBSCRIBE\_PERIOD

**Definition:** tango\_const.h:125

`Tango::LgA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a347ef2989ae1565de4e1c52ea5215192>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr)()

**Definition:** tango\_const.h:508

`Tango::Sta\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af78a5787e615509655caf92e0ad10ab3>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:894

`Tango::UL\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0c4e10e65153cb72758d3268ab58650b>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:656

`Tango::MAX <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1ea845e8f597c6beba9849b7273b3470868>`__

**Definition:** tango\_const.h:1158

`Tango::API\_InitNotPublic <../../de/ddf/namespaceTango.html#a0775603ffeeccc9f6a5b0a945ade137d>`__

const char \*const API\_InitNotPublic

**Definition:** tango\_const.h:402

`Tango::Str\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#adf81ecda3835b812596ca9cf3ef907cc>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:674

`Tango::DSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a38b5baa75448d5248e1ab478f5ac711d>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:873

`Tango::ACCESS\_SERVICE <../../de/ddf/namespaceTango.html#a1f281953f4feb64a3d4fd078b832e0de>`__

const char \*const ACCESS\_SERVICE

**Definition:** tango\_const.h:196

`Tango::StrA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abce5e47b440d28f5c0a360e914c81c23>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:833

`Tango::API\_CantFindLockingThread <../../de/ddf/namespaceTango.html#a47f1787b07433186f7b4144d4adb4a78>`__

const char \*const API\_CantFindLockingThread

**Definition:** tango\_const.h:356

`Tango::DEV\_ENCODED <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad63e132a76535a322f3cb4fba94c6612>`__

**Definition:** tango\_const.h:932

`Tango::DEV\_ULONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9eba5fa98fae4d2ea9e8643e2136d67d>`__

**Definition:** tango\_const.h:911

`Tango::LgA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8d86caa43aec090fd2cbd0c630c060aa>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:729

`Tango::API\_AsynReplyNotArrived <../../de/ddf/namespaceTango.html#aea49fc3a8f3cf1fbdf4e58684ccd772a>`__

const char \*const API\_AsynReplyNotArrived

**Definition:** tango\_const.h:328

`Tango::POLL\_REM\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a14b163e8afff81eb1b355a7ae1efa60d>`__

**Definition:** tango\_const.h:953

`Tango::DSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a802d965a52b52ebfc1b291a9f2e3cead>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:868

`Tango::\_AttributeIdlData::data\_3 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a03bac30bf53110ff13a43eb9680a4eba>`__

AttributeValueList\_3 \* data\_3

**Definition:** tango\_const.h:1210

`Tango::API\_EventPropertiesNotSet <../../de/ddf/namespaceTango.html#afae6d0087cdce4e22d2dc790418045e7>`__

const char \*const API\_EventPropertiesNotSet

**Definition:** tango\_const.h:390

`Tango::\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html>`__

**Definition:** tango\_const.h:1178

`Tango::DbA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a62b352bc859c6b9ef32092f63299a46c>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:772

`Tango::API\_ConnectionFailed <../../de/ddf/namespaceTango.html#a318ff939e96d1fc8e8a9411a873e07fd>`__

const char \*const API\_ConnectionFailed

**Definition:** tango\_const.h:370

`Tango::Bo\_CmdMethPtr <../../de/ddf/namespaceTango.html#a9b273e65d1167410d37e077d47fd5dbf>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr)()

**Definition:** tango\_const.h:498

`Tango::DEV\_DOUBLE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a37e0d615b5e42214a09aa70324a753b6>`__

**Definition:** tango\_const.h:909

`Tango::DbA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a88c97ca59f8800f16f194fa9d26a9cb4>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:759

`Tango::DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9d8b9eb6fe094a24e27bdb2fc40ce79b>`__

**Definition:** tango\_const.h:912

`Tango::LSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aeaab053de30874e20d90ddec392a2a17>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:846

`Tango::UnitNotSpec <../../de/ddf/namespaceTango.html#af12c56283ff5db515a61f2a1bfe2be74>`__

const char \*const UnitNotSpec

**Definition:** tango\_const.h:302

`Tango::UL\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a820ac067a558280a79181a6757921a8c>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_LSA)(const DevVarLongStringArray
\*)

**Definition:** tango\_const.h:654

`Tango::Bo\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a68110230bc59f281fa091779c8f89156>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:534

`Tango::RECONNECTION\_DELAY <../../de/ddf/namespaceTango.html#a1218bbe047a7b8663c2ad2a48d911581>`__

const int RECONNECTION\_DELAY

**Definition:** tango\_const.h:185

`Tango::USA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad5011e593cedad628081504420f6f7aa>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:789

`Tango::API\_PipeDuplicateDEName <../../de/ddf/namespaceTango.html#a6844d260affeec7b2349786a5c7cf8cd>`__

const char \*const API\_PipeDuplicateDEName

**Definition:** tango\_const.h:421

`Tango::DbA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#aef3b3ef805b6b12ba4d9433e50486f3e>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:760

`Tango::PGM\_IVL <../../de/ddf/namespaceTango.html#aef72f4f74b319ee73ff550b0d697c058>`__

const int PGM\_IVL

**Definition:** tango\_const.h:143

`Tango::ZMQ\_RELEASE\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca53912643cf1f41cdcbae03a98924b992>`__

**Definition:** tango\_const.h:1175

`Tango::USER\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#a5cfdbd082b1b9c1ec5494903b342300c>`__

const char \*const USER\_ENV\_VAR\_FILE

**Definition:** tango\_const.h:257

`Tango::ATTR\_BY\_USER <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca77a297f6bb10c7b17856dd3a8d5f29a8>`__

**Definition:** tango\_const.h:1121

`Tango::LSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae77b1842cc69c849e25cdaa438aeaafe>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr)()

**Definition:** tango\_const.h:514

`Tango::POLL\_REM\_DEV <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580af10b3c89d28dde3dd086ada851e07e68>`__

**Definition:** tango\_const.h:957

`Tango::\_PollDevice::dev\_name <../../d6/d66/structTango_1_1__PollDevice.html#a4a2c9368c01e742c8f8b61d8eaa91038>`__

string dev\_name

**Definition:** tango\_const.h:991

`Tango::Db\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#af90c484f5cc58bb1b06f4332bf9d3a35>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:607

`Tango::API\_DeprecatedCommand <../../de/ddf/namespaceTango.html#a3e9646bc54625db3cbebbd936ef0da45>`__

const char \*const API\_DeprecatedCommand

**Definition:** tango\_const.h:377

`Tango::API\_NotSupportedFeature <../../de/ddf/namespaceTango.html#ac8783d2d84e56f2a0a3ce73474062d84>`__

const char \*const API\_NotSupportedFeature

**Definition:** tango\_const.h:416

`Tango::Lg\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a74cbcd2ef477d7072a91317693998126>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:572

`Tango::ATTR\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadcab71d75e8efdef836317a5b0667fd2599>`__

**Definition:** tango\_const.h:1120

`Tango::API\_EmptyDeviceAttribute <../../de/ddf/namespaceTango.html#a8974afd8f6b9d4c5e09885846f806cfd>`__

const char \*const API\_EmptyDeviceAttribute

**Definition:** tango\_const.h:388

`Tango::CTRL\_SOCK\_ENDPOINT <../../de/ddf/namespaceTango.html#a8a076a4c53258bf22563d97e20dc840b>`__

const char \*const CTRL\_SOCK\_ENDPOINT

**Definition:** tango\_const.h:139

`Tango::DbA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a85dbb1d095f2cbee03b38b533c6c769f>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:765

`Tango::Fl\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2e74e2cbbd353d3107ab3e65c4c41e21>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:589

`Tango::API\_WrongLockingStatus <../../de/ddf/namespaceTango.html#ab044b999a28507325a270391dc54efdc>`__

const char \*const API\_WrongLockingStatus

**Definition:** tango\_const.h:453

`Tango::ZMQ\_DISCONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa1d09288e4fc9a02bef713d0fc3a43cf>`__

**Definition:** tango\_const.h:1172

`Tango::ULA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab1acf9d0cfb6b61741feb047ff91e4a2>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:815

`Tango::DELTA\_T <../../de/ddf/namespaceTango.html#a71d99b6666d67ef9beaf98304f850c45>`__

const int DELTA\_T

**Definition:** tango\_const.h:87

`Tango::MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__

MinMaxValueCheck

**Definition:** tango\_const.h:1155

`Tango::DSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a1be5b8e40c2786dfe7894e32050cb3be>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:860

`Tango::DbA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a58a708b78130c59874236651bf54fe14>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:769

`Tango::LgA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#adf650ac3a63e6130b13a4cfbabb6866f>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:719

`Tango::LSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a2d75ce198c7291312e730c1ea627dc81>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:854

`Tango::API\_IncoherentDevData <../../de/ddf/namespaceTango.html#a6221ad15c73aa7e01b76e64cc01698fa>`__

const char \*const API\_IncoherentDevData

**Definition:** tango\_const.h:396

`Tango::API\_BadConfigurationProperty <../../de/ddf/namespaceTango.html#a51ae1dac8bc729864268a2739d262282>`__

const char \*const API\_BadConfigurationProperty

**Definition:** tango\_const.h:346

`Tango::DEVVAR\_BOOLEANARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a90ce0d6685cb0ce6a7fd4b2ef67c9e72>`__

**Definition:** tango\_const.h:925

`Tango::DSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6be3d448da80b69433d6d39d745bfc19>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:874

`Tango::ranges\_const2type <../../db/d9e/structTango_1_1ranges__const2type.html>`__

**Definition:** tango\_const.h:1232

`Tango::LSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a10a2ee32a8b9975b5e90d904038195a4>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:845

`Tango::API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__

const char \*const API\_AttrPropValueNotSet

**Definition:** tango\_const.h:341

`Tango::API\_AttributeFailed <../../de/ddf/namespaceTango.html#a4d7e9b3fcf6f84df8ccd7da466dc464c>`__

const char \*const API\_AttributeFailed

**Definition:** tango\_const.h:331

`Tango::DSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#aafb90d7188a7adc14a418effe7d97027>`__

DevVarDoubleStringArray \*(DeviceImpl::\*
DSA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:865

`Tango::Db\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a1a6d2e94c31480bf510fe47a89dc2204>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:598

`Tango::StrA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16efd1d060e1516e1c468b6c3afe1dcd>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:834

`Tango::USA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a76911c4c228b99f2f18d9a5d8b2234c4>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:795

`Tango::API\_CommandNotAllowed <../../de/ddf/namespaceTango.html#aa9a485028a7e3f9cab67fd341e0a8a33>`__

const char \*const API\_CommandNotAllowed

**Definition:** tango\_const.h:367

`Tango::API\_PipeNoDataElement <../../de/ddf/namespaceTango.html#ae67d7487777249996436b1837b8daec0>`__

const char \*const API\_PipeNoDataElement

**Definition:** tango\_const.h:423

`Tango::CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d826b2f939b87adf20cb02ca8c047b6>`__

void(DeviceImpl::\* CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:478

`Tango::DescNotSpec <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__

const char \*const DescNotSpec

**Definition:** tango\_const.h:301

`Tango::API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__

const char \*const API\_NonDatabaseDevice

**Definition:** tango\_const.h:413

`Tango::\_SendEventType::archive <../../d3/db5/structTango_1_1__SendEventType.html#ae6514fcf20154d6842697505732b50b2>`__

bool archive

**Definition:** tango\_const.h:1182

`Tango::USA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a1ddcb4b268e5ef48598a6a3da104ae26>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:796

`Tango::StrA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2b4466c2a950e858652a772f7e0d3f2d>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:829

`Tango::ShA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aef15feb4d2302cd1eb8e622c71ec3688>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:715

`Tango::TIME\_HEARTBEAT <../../de/ddf/namespaceTango.html#a1dc91cb42cfae6d95865a79bcacf5659>`__

const int TIME\_HEARTBEAT

**Definition:** tango\_const.h:89

`Tango::Db\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abd084cf2858ebf46b18c8e327c39ee52>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:604

`Tango::API\_PipeNotFound <../../de/ddf/namespaceTango.html#a7cda58d523264fdc9c207fbeca63944c>`__

const char \*const API\_PipeNotFound

**Definition:** tango\_const.h:425

`Tango::API\_PipeDataEltNotFound <../../de/ddf/namespaceTango.html#a6c4b7dc3912f7cbb6ce425c0c0162819>`__

const char \*const API\_PipeDataEltNotFound

**Definition:** tango\_const.h:420

`Tango::API\_IncoherentValues <../../de/ddf/namespaceTango.html#a0b20d12d02e057f876e09bd2104a9606>`__

const char \*const API\_IncoherentValues

**Definition:** tango\_const.h:397

`Tango::US\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ace1fa70bc6f0db372fb4fb6cde468fbe>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:634

`Tango::Sh\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a741ed159773995fb5355101372bd1c86>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:549

`Tango::FWD\_DOUBLE\_USED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bae1693a5c3bbc668e26a0d048eee8844b>`__

**Definition:** tango\_const.h:1201

`Tango::MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__

MessBoxType

**Definition:** tango\_const.h:939

`Tango::Str\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5672ab56addf5b20bb085b59350d67cf>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:662

`Tango::ChA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf0f2657a6aeeed1583fce1a90d5eb8b>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:680

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Db\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed4dcaedde79872f636524026ba7c095>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:609

`Tango::CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6d8931508939262d04735109f7303acb>`__

void(DeviceImpl::\* CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:496

`Tango::\_SendEventType::change <../../d3/db5/structTango_1_1__SendEventType.html#a6785aeda0925578d42e6466a7cc63a64>`__

bool change

**Definition:** tango\_const.h:1180

`Tango::Bo\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ae744367a6987e86d0a322735ad861ec8>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_ULA)(const DevVarULongArray
\*)

**Definition:** tango\_const.h:532

`Tango::Db\_CmdMethPtr <../../de/ddf/namespaceTango.html#ad2e2a4a0be40a386b58fcbc178825738>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr)()

**Definition:** tango\_const.h:502

`Tango::CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a13fa64927f4e9467a01f7ea04ff4795f>`__

void(DeviceImpl::\* CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:489

`Tango::MIN\_POLL\_PERIOD <../../de/ddf/namespaceTango.html#a13e2f637722da725edd0291910561a5e>`__

const int MIN\_POLL\_PERIOD

**Definition:** tango\_const.h:86

`Tango::LSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e467078adbc93998535b58afcbd6a9>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:853

`Tango::ranges\_type2const::enu <../../df/d08/structTango_1_1ranges__type2const.html#a486a3799e86b071145452c6861a65f73>`__

static CmdArgType enu

**Definition:** tango\_const.h:1227

`Tango::DSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#afcd8fded693c7cfbb54083f44a9fe207>`__

DevVarDoubleStringArray \*(DeviceImpl::\*
DSA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:876

`Tango::UL\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3bb524341a87ac831259a033742c508d>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_USA)(const DevVarUShortArray \*)

**Definition:** tango\_const.h:651

`Tango::ChA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aabddb254c3961a81c2ae529d9572fd1d>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:696

`Tango::FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__

enum Tango::\_FwdAttError FwdAttError

`Tango::API\_StartupSequence <../../de/ddf/namespaceTango.html#a1332737231394d5be886efdbac42b778>`__

const char \*const API\_StartupSequence

**Definition:** tango\_const.h:440

`Tango::ShA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a97883276a816ee3c92f02155cbe9f614>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:701

`Tango::Db\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ac91ab97d9dbb0974fc009c45664bb918>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:612

`Tango::StrA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a862ced750c1a7f269eaceb4c90e84c8e>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:828

`Tango::DEVVAR\_DOUBLESTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aa4080a8a54b6e8a243aeb60541347723>`__

**Definition:** tango\_const.h:922

`Tango::TG\_IMP\_MINOR\_NON\_DEVFAILED <../../de/ddf/namespaceTango.html#ab093f2ad96560b13cb4648c148f23bc4>`__

const int TG\_IMP\_MINOR\_NON\_DEVFAILED

**Definition:** tango\_const.h:99

`Tango::LogTarget <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246da>`__

LogTarget

**Definition:** tango\_const.h:1013

`Tango::ChA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ab0795ad758790e3d488b1d5a3e4a103d>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:684

`Tango::USA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a31a17b85f42a2502b72cdd8ddeba8d4b>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:784

`Tango::Db\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a04d3cfbcdf481426498216fd0ce8e551>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_USA)(const DevVarUShortArray
\*)

**Definition:** tango\_const.h:611

`Tango::API\_WrongFormat <../../de/ddf/namespaceTango.html#a454ba11d1da2f007395e7bc8d8b35911>`__

const char \*const API\_WrongFormat

**Definition:** tango\_const.h:451

`Tango::API\_CorruptedDatabase <../../de/ddf/namespaceTango.html#a12971fe66a9476a82dd9498cb1121dce>`__

const char \*const API\_CorruptedDatabase

**Definition:** tango\_const.h:372

`Tango::LSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aa5585f14cdc16510ffac8d6d547979fb>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:842

`Tango::UL\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a20a18fcefe87f539a79361eaa7168409>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:644

`Tango::Bo\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a5aa79d765795c06b664b0747b1c8fc39>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_DbA)(const DevVarDoubleArray
\*)

**Definition:** tango\_const.h:530

`Tango::Fl\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad6f255c8d64a2e172069888701170a9e>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:583

`Tango::ChA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a323da0256914bd98ae2cb15a3c598589>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:692

`Tango::US\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf1078d1954644fb95e767c042ec490a>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:620

`Tango::SUB\_SEND\_HWM <../../de/ddf/namespaceTango.html#a99ca4b41d1558e732a575815fa0aa505>`__

const int SUB\_SEND\_HWM

**Definition:** tango\_const.h:147

`Tango::API\_WrongHistoryDataBuffer <../../de/ddf/namespaceTango.html#a27d7a7bd98dd02abffcb313fc547d0b2>`__

const char \*const API\_WrongHistoryDataBuffer

**Definition:** tango\_const.h:452

`Tango::UL\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9ccb3c40addbd095ca2702a7e8f45bf9>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:640

`Tango::MessBoxTitle <../../de/ddf/namespaceTango.html#aa3c6540af05d1f19c28d5ae3a655abe3>`__

const char \*const MessBoxTitle

**Definition:** tango\_const.h:70

`Tango::CONST\_DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a671166fff99c137e11ce5702209ee430>`__

**Definition:** tango\_const.h:924

`Tango::NotSet <../../de/ddf/namespaceTango.html#ae64ef651969a4f0a99205c23085a3a7f>`__

const char \*const NotSet

**Definition:** tango\_const.h:68

`Tango::LSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a03f1c8acd7edabaf22088434d3a508f8>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:839

`Tango::API\_WrongCmdLineArgs <../../de/ddf/namespaceTango.html#a0f02db6182e7898d7c7cef893460b11f>`__

const char \*const API\_WrongCmdLineArgs

**Definition:** tango\_const.h:448

`Tango::UL\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a86ccc052e1b4918940658d197e906116>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:648

`Tango::Lg\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6acd3241da1ae19b86f67a44f8d9b8e9>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:575

`Tango::NotANumber <../../de/ddf/namespaceTango.html#a986c54e23d75257917fe8cae1a79c234>`__

const char \*const NotANumber

**Definition:** tango\_const.h:310

`Tango::Fl\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a8aa460c356e7f762ff3baf882edf6998>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:588

`Tango::ZMQ\_CONNECT\_MCAST\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca9c222118af31e7af40cff64fee579f51>`__

**Definition:** tango\_const.h:1173

`Tango::StdUnitNotSpec <../../de/ddf/namespaceTango.html#af3e38fec687ce6e48d29e7f15d48b5b2>`__

const char \*const StdUnitNotSpec

**Definition:** tango\_const.h:303

`Tango::FormatNotSpec <../../de/ddf/namespaceTango.html#a413a1755e5c074a8acc4efcd6ecf75c0>`__

const char \*const FormatNotSpec

**Definition:** tango\_const.h:308

`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__

#define XTBS(s)

**Definition:** tango\_const.h:50

`Tango::API\_FwdAttrInconsistency <../../de/ddf/namespaceTango.html#afe9f1ad89b2688b93790f8eb6251798b>`__

const char \*const API\_FwdAttrInconsistency

**Definition:** tango\_const.h:394

`Tango::DEV\_USHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a88dc7602b87653a436acca037b7bcee7>`__

**Definition:** tango\_const.h:910

`Tango::CONTROL\_SYSTEM <../../de/ddf/namespaceTango.html#aed8a549dc231ff341d74d86482da1da7>`__

const char \*const CONTROL\_SYSTEM

**Definition:** tango\_const.h:194

`Tango::DSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a61c57d16dc7a3878d247ae41300faef5>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:866

`Tango::LSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8b302641054eb58ac37ff348144b796b>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:849

`Tango::API\_NotSupported <../../de/ddf/namespaceTango.html#ae8c41507f747e22653604428cc8c82ac>`__

const char \*const API\_NotSupported

**Definition:** tango\_const.h:415

`Tango::ShA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a041ffbd7ac59236f0d7ef2577a257309>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:700

`Tango::DSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a042c2f0070e4166a2f5cf0c275128bb3>`__

DevVarDoubleStringArray \*(DeviceImpl::\*
DSA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:863

`Tango::CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ad55ee490cc8123f90daf3d90732691d9>`__

void(DeviceImpl::\* CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:481

`Tango::StrA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47a62ad5d9d4000b52ee61eedd4e769a>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:823

`Tango::CONTINUE\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0affe786884b0ac7bd7e6a4a623fd84e04>`__

Read attribute(s) even if one of the written attribute(s) failed.

**Definition:** tango\_const.h:1140

`Tango::PIPE\_BY\_USER <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aac61b4811475f0c262e8150131ee8ba1>`__

**Definition:** tango\_const.h:1128

`Tango::ShA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a746ff0e93e2d258238e304aa47a5116b>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:704

`Tango::StrA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2fbed6c7533bbd7d7e852ccc253910b2>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:836

`Tango::Fl\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a7a7f6abcfe473f7807e1d0839df9ebf0>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:585

`Tango::MIN\_IDL\_CONF5 <../../de/ddf/namespaceTango.html#a011c4a515d3ccb2598f8056fe7547c2a>`__

const int MIN\_IDL\_CONF5

**Definition:** tango\_const.h:227

`Tango::API\_AttrNotFound <../../de/ddf/namespaceTango.html#a2d9f8219f8eb47151f02bda7b2784f3e>`__

const char \*const API\_AttrNotFound

**Definition:** tango\_const.h:337

`Tango::Sta\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a45a2de0c071c8c15d10df028f5626981>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_ULA)(const DevVarULongArray
\*)

**Definition:** tango\_const.h:892

`Tango::LSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#afa41a9d249a2d25253b6a218a44b4c4f>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:843

`Tango::AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__

AttReqType

**Definition:** tango\_const.h:971

`Tango::USA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3333f3b8339bcd64877d85100e8e39f2>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:780

`Tango::FWD\_TOO\_OLD\_LOCAL\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bab81c88712a2f5c548de3d9b134572f36>`__

**Definition:** tango\_const.h:1202

`Tango::ShA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a23daa21a9f047afbf1b6d226ae6dcb6d>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:698

`Tango::API\_PolledDeviceNotInPoolMap <../../de/ddf/namespaceTango.html#a127aeafeaa2f90f9dc4cfa825de906de>`__

const char \*const API\_PolledDeviceNotInPoolMap

**Definition:** tango\_const.h:432

`Tango::ChA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a445a95e38f8ccc7572c7d6a816cc4ad2>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:690

`Tango::Bo\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5da61ac1cb4ba9650caa06374ee426c5>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:522

`Tango::API\_InitThrowsException <../../de/ddf/namespaceTango.html#aaad6a2e61b1ce56306dec28bc62970f7>`__

const char \*const API\_InitThrowsException

**Definition:** tango\_const.h:403

`Tango::ARRAY\_PIPE <../../de/ddf/namespaceTango.html#ae620b5476087612faa68423a59bdcbab>`__

const char \*const ARRAY\_PIPE

**Definition:** tango\_const.h:108

`Tango::ULA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a54ccbd92b3f03fe71966fd2902f6c50c>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:798

`Tango::\_AttributeIdlData::\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html#a2ff3b5fe9d2aaabee6a955858245d838>`__

\_AttributeIdlData()

**Definition:** tango\_const.h:1214

`Tango::\_PollDevice::ind\_list <../../d6/d66/structTango_1_1__PollDevice.html#af1307f5618ec885d6ae0cabb1bf82769>`__

vector< long > ind\_list

**Definition:** tango\_const.h:992

`Tango::Sh\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad7f4e3fd3c0ff5507d86a775d51c17cb>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:539

`Tango::ranges\_type2const::str <../../df/d08/structTango_1_1ranges__type2const.html#aaddcd6d5edc9dea4db836223f3742bef>`__

static TANGO\_CXX11\_ABI string str

**Definition:** tango\_const.h:1228

`Tango::Sta\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af4f31dc2bf3b271f187dd5f8da92c98b>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:880

`Tango::Sta\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#aaa493e82054e1c820c22930175ababe5>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_ShA)(const DevVarShortArray
\*)

**Definition:** tango\_const.h:887

`Tango::ULA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a479357c0847479f17c502093c0631cb2>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:805

`Tango::Fl\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#af67346e5a437bfb6f53d4a5793c8ae7f>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:586

`Tango::DbA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6818e79202b7706fd1077677547c79b7>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:758

`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__

**Definition:** tango\_const.h:904

`Tango::QUALITY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__

Quality change event (deprecated - do not use)

**Definition:** tango\_const.h:1091

`Tango::AccessControlType <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7>`__

AccessControlType

**Definition:** tango\_const.h:1149

`Tango::TANGO\_PY\_MOD\_NAME <../../de/ddf/namespaceTango.html#aef7da385ddf3f46afe79163a0f666795>`__

const char \*const TANGO\_PY\_MOD\_NAME

**Definition:** tango\_const.h:101

`Tango::kLogTargetConsole <../../de/ddf/namespaceTango.html#ad2107b91b06192b71648e74670638f86>`__

const char \*const kLogTargetConsole

**Definition:** tango\_const.h:271

`Tango::StatusNotSet <../../de/ddf/namespaceTango.html#ae1851ebaa91cbf1df9317e3f47f6190a>`__

const char \*const StatusNotSet

**Definition:** tango\_const.h:71

`Tango::ShA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2935b04f55581288a77879c473348f69>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:705

`Tango::Str\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a98ebe9cdf0099a4eba8fd07d92569737>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_LgA)(const DevVarLongArray \*)

**Definition:** tango\_const.h:668

`Tango::StrA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2d0db7b42b24f05e95ffc2ad02908a61>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:827

`Tango::Lg\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1130ca5896a1390ea07ee0d9644cf25a>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:569

`Tango::FWD\_MISSING\_ROOT <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bac6627e0075173c41bdd629245def0881>`__

**Definition:** tango\_const.h:1198

`Tango::PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__

PipeSerialModel

**Definition:** tango\_const.h:1124

`Tango::API\_CantStoreDeviceClass <../../de/ddf/namespaceTango.html#a44b76427ee6339540bee839d328cdfce>`__

const char \*const API\_CantStoreDeviceClass

**Definition:** tango\_const.h:362

`Tango::API\_BadAsynReqType <../../de/ddf/namespaceTango.html#ae621e1d53db91520e20222a27058c3ea>`__

const char \*const API\_BadAsynReqType

**Definition:** tango\_const.h:345

`Tango::Db\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a1d0f5b26ec90105fbb663796311b95d0>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:613

`Tango::API\_CantGetDevObjectId <../../de/ddf/namespaceTango.html#a8a8a65f17bee17a3c7ef4e81abc1876d>`__

const char \*const API\_CantGetDevObjectId

**Definition:** tango\_const.h:358

`Tango::Sh\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a268c6064301a869f9f6aa74e8cce403b>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:552

`Tango::ChA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac0264d94dbc37f7b325f48f9f0e2df43>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:691

`Tango::EVENT\_COMPAT\_IDL5\_SIZE <../../de/ddf/namespaceTango.html#a6a6e46f8f1eaf33643b0138b3e73182b>`__

const int EVENT\_COMPAT\_IDL5\_SIZE

**Definition:** tango\_const.h:239

`Tango::kMinRollingThreshold <../../de/ddf/namespaceTango.html#a6a5a347a440c989db5eca047b8bc2b6e>`__

const size\_t kMinRollingThreshold

**Definition:** tango\_const.h:286

`Tango::AllPipe <../../de/ddf/namespaceTango.html#a5b3095298bf49d8ca8f47eb1858a899e>`__

const char \*const AllPipe

**Definition:** tango\_const.h:78

`Tango::DevVarUCharArray <../../de/ddf/namespaceTango.html#aa266359dac942f0a24499c61adcd0b7c>`__

DevVarCharArray DevVarUCharArray

**Definition:** tango\_const.h:470

`Tango::API\_NtDebugWindowError <../../de/ddf/namespaceTango.html#a1ac0e04e63b2ede5fe5e56ae7f61bb2b>`__

const char \*const API\_NtDebugWindowError

**Definition:** tango\_const.h:418

`Tango::DefaultBlackBoxDepth <../../de/ddf/namespaceTango.html#a6a0017e7b8b49bf40d3e4ab5f2e2a41d>`__

const int DefaultBlackBoxDepth

**Definition:** tango\_const.h:59

`Tango::US\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a7492b2d15856a98b6c4dc3d56128fe88>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:636

`Tango::WINDOWS\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#afe46eae3cff24b7e2916d9ea8b477135>`__

const char \*const WINDOWS\_ENV\_VAR\_FILE

**Definition:** tango\_const.h:262

`Tango::UL\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#adcce4067d006b1c3a7390c1017d5528d>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_FlA)(const DevVarFloatArray \*)

**Definition:** tango\_const.h:649

`Tango::\_AttributeIdlData::data\_5 <../../d5/d25/structTango_1_1__AttributeIdlData.html#a703cd1e84b0aed154afc5a80b96bd39d>`__

AttributeValueList\_5 \* data\_5

**Definition:** tango\_const.h:1212

`Tango::PERIODIC\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__

Periodic event.

**Definition:** tango\_const.h:1092

`Tango::ShA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a9c9c3ee5bb7d38117f9817d94d7a63f8>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:712

`Tango::Sh\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a410835daa22e19b702377cdcde2c1f3e>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_USA)(const DevVarUShortArray \*)

**Definition:** tango\_const.h:551

`Tango::Sta\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5b6e7d938c0eb341974f635f26451a66>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:884

`Tango::USA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a05ffe2ec11e661ee8b4c3ef5bfb56fd3>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:786

`Tango::API\_StdException <../../de/ddf/namespaceTango.html#ae9a0b6c371656538d2fe7adc4f47d1ac>`__

const char \*const API\_StdException

**Definition:** tango\_const.h:441

`Tango::LSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#abf1f347a1975690532972f336c1025db>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:850

`Tango::HEARTBEAT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#ac9df8e7375815227c373e65fe07151c2>`__

const char \*const HEARTBEAT\_METHOD\_NAME

**Definition:** tango\_const.h:136

`Tango::Str\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afd0db79248dafa09ca14d4ea72dbb8e9>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:675

`Tango::LgA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a892d92bb8f8079591bc2b8eff4c4697f>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:731

`Tango::Str\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac0151f8c2ccbe9c19a9264ad85495ef0>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:665

`Tango::DefaultMaxSeq <../../de/ddf/namespaceTango.html#a8257e84ebbbc07c75939779e551f9af8>`__

const int DefaultMaxSeq

**Definition:** tango\_const.h:58

`Tango::LOG\_OFF <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a8f14ec717b97c2d7ce592bb0ff06b444>`__

**Definition:** tango\_const.h:1001

`Tango::LOCK\_UNLOCK\_ALL\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea1a84dc93be6b7297efbfee01fb35a884>`__

**Definition:** tango\_const.h:981

`Tango::FWD\_ROOT\_DEV\_LOCAL\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baf9135a3ecd78fa5e5019f716d50fafda>`__

**Definition:** tango\_const.h:1197

`Tango::Bo\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a66fa830068c7251fac2b12f475e14ea5>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:535

`Tango::LOG\_FATAL <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a25692d6049c268fb4cb0e79b5706a07e>`__

**Definition:** tango\_const.h:1002

`Tango::LgA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1dce6ec9750bd0ee87e63ff6434b182c>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_ULA)(const
DevVarULongArray \*)

**Definition:** tango\_const.h:732

`Tango::Str\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ac548faf5341f41096048e05abd30aee6>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:664

`Tango::API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__

const char \*const API\_MethodArgument

**Definition:** tango\_const.h:409

`Tango::Lg\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9dd9cc566f82c33ca8c4b7e05e22a130>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_USA)(const DevVarUShortArray \*)

**Definition:** tango\_const.h:571

`TANGO\_VERSION\_MINOR <../../d4/d13/tango__const_8h.html#a4e5ff4bd2809f455d91c21c9b7d0dae6>`__

#define TANGO\_VERSION\_MINOR

**Definition:** tango\_const.h:44

`Tango::FlA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac891ac799f88786a673c7dca09324788>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_USA)(const
DevVarUShortArray \*)

**Definition:** tango\_const.h:751

`Tango::FlA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a552bc3e33b5300cd784892217b1d48bc>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Bo)(DevBoolean)

**Definition:** tango\_const.h:738

`Tango::StrA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a35b60241080818518fc170c8af09797b>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:825

`Tango::LgA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ad79c9b83cff71c8436e52167d01a5a9c>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:734

`Tango::LSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a7347383b7f761a15c2f514ee79df50ad>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:844

`Tango::MIN\_IDL\_DEV\_INTR <../../de/ddf/namespaceTango.html#afff5df79f04c351d63cd703c68e1c6b0>`__

const int MIN\_IDL\_DEV\_INTR

**Definition:** tango\_const.h:228

`Tango::STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__

**Definition:** tango\_const.h:940

`Tango::ULA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a6bdc151f110754cd8db22e6a9d0da411>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:809

`Tango::Str\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afc44056cbf2f1159ca565e613ae33f19>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:661

`Tango::DEV\_INTR\_THREAD\_SLEEP\_TIME <../../de/ddf/namespaceTango.html#aa3d98efd1957111718e521bf487acae1>`__

const int DEV\_INTR\_THREAD\_SLEEP\_TIME

**Definition:** tango\_const.h:245

`Tango::UL\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8aa112660f6f56d04d97b7d031b5cd6c>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:645

`Tango::ChA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4d4a5e7cba67e879656879a31eae8847>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:685

`Tango::EVENT\_HEARTBEAT <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eada1ff1bf7d933f2aa76a2294ed588940>`__

**Definition:** tango\_const.h:947

`Tango::CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49503d5b26f69a614b6128025e27c7c9>`__

void(DeviceImpl::\* CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:486

`Tango::API\_CantRetrieveClass <../../de/ddf/namespaceTango.html#ab7bcedb0ded3de7c4165552db12c76e7>`__

const char \*const API\_CantRetrieveClass

**Definition:** tango\_const.h:360

`Tango::LSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a2caba80f93a90fbca5553319477b76f2>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:840

`Tango::API\_CommandNotFound <../../de/ddf/namespaceTango.html#ac200c048fe7f41f1d631b30fec09d194>`__

const char \*const API\_CommandNotFound

**Definition:** tango\_const.h:368

`Tango::STORE\_SUBDEV <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea53590884fe15b5dcf088fdbddc449d52>`__

**Definition:** tango\_const.h:948

`Tango::ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__

**Definition:** tango\_const.h:1119

`Tango::Lg\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af8de21f05c662dc4dfd1fee2a04c6adf>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_LSA)(const DevVarLongStringArray
\*)

**Definition:** tango\_const.h:574

`Tango::API\_DecodeErr <../../de/ddf/namespaceTango.html#ab7665c68bc38b6e12abcecad06aa0271>`__

const char \*const API\_DecodeErr

**Definition:** tango\_const.h:376

`Tango::API\_IncompatibleCmdArgumentType <../../de/ddf/namespaceTango.html#a9f8061c5b3752e8cb8f4de9de6ab790c>`__

const char \*const API\_IncompatibleCmdArgumentType

**Definition:** tango\_const.h:400

`Tango::ZMQ\_EVENT\_PROT\_VERSION <../../de/ddf/namespaceTango.html#a43f21283b8b61819a1fa7328a2a56ce4>`__

const int ZMQ\_EVENT\_PROT\_VERSION

**Definition:** tango\_const.h:135

`Tango::NOTIFD <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a74986761b743aa7fb74e60a0e6f7ca4b>`__

**Definition:** tango\_const.h:1164

`Tango::INFO <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__

**Definition:** tango\_const.h:941

`Tango::API\_ZmqInitFailed <../../de/ddf/namespaceTango.html#aec28088d995919f796b44d062c250101>`__

const char \*const API\_ZmqInitFailed

**Definition:** tango\_const.h:456

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__

CmdArgType

**Definition:** tango\_const.h:903

`Tango::MemNotUsed <../../de/ddf/namespaceTango.html#a0f48b35f3b59827d6f3ebd0cf5db277e>`__

const char \*const MemNotUsed

**Definition:** tango\_const.h:312

`Tango::USA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a769c63fe0359d4235b1f4cb248715b67>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr)()

**Definition:** tango\_const.h:511

`Tango::API\_CantGetClientIdent <../../de/ddf/namespaceTango.html#a4c85b6737187cbfd2d47874c31f78688>`__

const char \*const API\_CantGetClientIdent

**Definition:** tango\_const.h:357

`Tango::DEVVAR\_ULONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad83256c2570cc046d4c75b4244b9f546>`__

**Definition:** tango\_const.h:930

`Tango::FlA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4ac9bbb22169d14016643241d6cdae9d>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:741

`Tango::Sh\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a5bf74bc71333b4c0df140a4b050ffb1b>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:543

`Tango::MaxServerNameLength <../../de/ddf/namespaceTango.html#a3e719a41954f2ade54cc857c4c08de8a>`__

const unsigned int MaxServerNameLength

**Definition:** tango\_const.h:220

`Tango::StrA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a3e354d67229b352ec632f5d882e71dbf>`__

DevVarStringArray \*(DeviceImpl::\* StrA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:821

`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__

const char \* ConstDevString

**Definition:** tango\_const.h:469

`Tango::API\_CmdArgumentTypeNotSupported <../../de/ddf/namespaceTango.html#ac8fb80b7d90b3b1c95576f4549328668>`__

const char \*const API\_CmdArgumentTypeNotSupported

**Definition:** tango\_const.h:364

`Tango::AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__

AttrSerialModel

**Definition:** tango\_const.h:1117

`Tango::LgA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a6dc919f2fc2d5f382f6501bf8e747b00>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:724

`Tango::ChA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#abf1b1f8824e4e1ee0dbe5bf3d24743cf>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_FlA)(const
DevVarFloatArray \*)

**Definition:** tango\_const.h:689

`Tango::Sh\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a170fff4bb4a88cb4b9afb88645eb3f77>`__

DevShort(DeviceImpl::\* Sh\_CmdMethPtr\_ChA)(const DevVarCharArray \*)

**Definition:** tango\_const.h:546

`Tango::HEARTBEAT <../../de/ddf/namespaceTango.html#a1c0fa779fadf42ac0833b68f3b7e78bf>`__

const char \*const HEARTBEAT

**Definition:** tango\_const.h:129

`Tango::LOG\_WARN <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a33a512ea286a55b62e5215b2f74a97e8>`__

**Definition:** tango\_const.h:1004

`Tango::UL\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a7046614fc8bd7eeb218380f20167f367>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:643

`Tango::Sta\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#af62f13f41cce4efa8b08326fb1462804>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_LgA)(const DevVarLongArray
\*)

**Definition:** tango\_const.h:888

`Tango::DbA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a91339b16565f187eba76fdb333acb7b7>`__

DevVarDoubleArray \*(DeviceImpl::\* DbA\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:775

`Tango::PIPE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6add5e7619e42d25779bb3376e8f5cdb24>`__

Device pipe event.

**Definition:** tango\_const.h:1098

`Tango::API\_PipeWrongArgNumber <../../de/ddf/namespaceTango.html#aeb3c3b2f2d4e0f01aea7a0b7733df74f>`__

const char \*const API\_PipeWrongArgNumber

**Definition:** tango\_const.h:429

`Tango::API\_ClassNotFound <../../de/ddf/namespaceTango.html#aa3be4093d5504f8bc73b163862cc309c>`__

const char \*const API\_ClassNotFound

**Definition:** tango\_const.h:363

`Tango::DEV\_LONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6b94ef795dea2bcc6af9a2be4241a28b>`__

**Definition:** tango\_const.h:907

`Tango::WRITE\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da81b4402123e0bf6c6e9277c65d9d5a32>`__

**Definition:** tango\_const.h:973

`Tango::DEV\_ENUM <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a883d3175b4a1618cee9e43628eb0108b>`__

**Definition:** tango\_const.h:933

`Tango::Fl\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4373fd62d3b5fffb86db31d2d2d39bd6>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:584

`Tango::EventName <../../de/ddf/namespaceTango.html#aba76022ad39c2bbc38b6fe99e1245b2b>`__

const char \*const EventName[]

**Definition:** tango\_const.h:1102

`Tango::CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ad5c6af4e436eab60c6f8101d3bc95f69>`__

void(DeviceImpl::\* CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:485

`Tango::ZMQ\_END <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caf2b91f9249e4f9a3d75555cbbfae9a63>`__

**Definition:** tango\_const.h:1168

`Tango::ChA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a45bce45e4f3aa8bf600d4f5cbc9197bb>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:694

`Tango::LSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ad38f8025096139587b80b68333428c5a>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:856

`Tango::CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0d668ee23b223beb0f39e65dc467a882>`__

void(DeviceImpl::\* CmdMethPtr\_DSA)(const DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:495

`Tango::LOG\_DEVICE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daae9768c52a777abb959d3649aac301aa4>`__

**Definition:** tango\_const.h:1016

`Tango::API\_FwdAttrNotConfigured <../../de/ddf/namespaceTango.html#a048ee67c10389be2d73fa011a57e9151>`__

const char \*const API\_FwdAttrNotConfigured

**Definition:** tango\_const.h:393

`Tango::Fl\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a356ecdd62f178b5eb547ddba6eddfdce>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_USA)(const DevVarUShortArray \*)

**Definition:** tango\_const.h:591

`Tango::DEVVAR\_USHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a1d7d93136302878038c7d6e4d94c5a66>`__

**Definition:** tango\_const.h:918

`Tango::\_SendEventType::\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html#a0043609e691ba100d6c6a858d6f4c037>`__

\_SendEventType()

**Definition:** tango\_const.h:1180

`Tango::API\_MemAttFailedDuringInit <../../de/ddf/namespaceTango.html#a6435ddb6373dc6ee827891ad2af053eb>`__

const char \*const API\_MemAttFailedDuringInit

**Definition:** tango\_const.h:407

`Tango::TANGO\_RC\_FILE <../../de/ddf/namespaceTango.html#a2774bda98bacb6fc74177152af565833>`__

const char \*const TANGO\_RC\_FILE

**Definition:** tango\_const.h:260

`Tango::USA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a38cf8829fd4c12c3f414d9a77b84cd2a>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:794

`Tango::API\_PipeFailed <../../de/ddf/namespaceTango.html#aba1f603b0dce0ab8e02993d9a81c3108>`__

const char \*const API\_PipeFailed

**Definition:** tango\_const.h:422

`Tango::API\_MemoryAllocation <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__

const char \*const API\_MemoryAllocation

**Definition:** tango\_const.h:408

`Tango::API\_MissedEvents <../../de/ddf/namespaceTango.html#a71962443cc1d623a84bb0cd5d04fc18f>`__

const char \*const API\_MissedEvents

**Definition:** tango\_const.h:411

`Tango::Fl\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a702218083a878b5b1c4a534af20576d3>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_StrA)(const DevVarStringArray
\*)

**Definition:** tango\_const.h:593

`Tango::kDefaultRollingThreshold <../../de/ddf/namespaceTango.html#a68d9866a76c56521e564b3eee8d34a62>`__

const size\_t kDefaultRollingThreshold

**Definition:** tango\_const.h:288

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__

char \* string\_dup(char \*s)

**Definition:** tango\_const.h:462

`Tango::LSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a1f29ec9095da2c6d9fbebec1a4dc9113>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_LgA)(const
DevVarLongArray \*)

**Definition:** tango\_const.h:848

`Tango::TG\_LOCAL\_HOST <../../de/ddf/namespaceTango.html#ab5eb9175281bdc695bcfcc85b43311f2>`__

const char \*const TG\_LOCAL\_HOST

**Definition:** tango\_const.h:162

`Tango::StateMethPtr <../../de/ddf/namespaceTango.html#a8fbaee078294ee08dc87e6ecbce2e1bf>`__

bool(DeviceImpl::\* StateMethPtr)(const CORBA::Any &)

**Definition:** tango\_const.h:474

`Tango::PollAttribute <../../de/ddf/namespaceTango.html#a9b54136531ae9c9950cc188e20997e5e>`__

const char \*const PollAttribute

**Definition:** tango\_const.h:82

`Tango::CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aff18b55dba55a66275d7c5518366c7d0>`__

void(DeviceImpl::\* CmdMethPtr\_Db)(DevDouble)

**Definition:** tango\_const.h:482

`Tango::INTERFACE\_CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6af0c6101bccdea12e40f8d6eb1b1ca7a3>`__

Device interface change event.

**Definition:** tango\_const.h:1097

`Tango::\_OptAttrProp::default\_value <../../d7/d60/structTango_1_1__OptAttrProp.html#ad536b06d0b4bdcf1c17e92d04c8277a3>`__

const char \* default\_value

**Definition:** tango\_const.h:1189

`Tango::UL\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7688361db16cdf5bc224e0ac0180e06d>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:652

`Tango::DEFAULT\_POLLING\_THREADS\_POOL\_SIZE <../../de/ddf/namespaceTango.html#a00b829391f3f0dedda2e2529a99928c3>`__

const int DEFAULT\_POLLING\_THREADS\_POOL\_SIZE

**Definition:** tango\_const.h:202

`Tango::API\_DeviceNotFound <../../de/ddf/namespaceTango.html#af04e195158692b32eee6e93fdcbff284>`__

const char \*const API\_DeviceNotFound

**Definition:** tango\_const.h:380

`Tango::DSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5783faf10f3dbb63b91e590556c60d82>`__

DevVarDoubleStringArray \*(DeviceImpl::\* DSA\_CmdMethPtr\_UL)(DevULong)

**Definition:** tango\_const.h:864

`Tango::LOCAL\_POLL\_REQUEST <../../de/ddf/namespaceTango.html#a35ae382f171e3cc895c1b8091495bad8>`__

const char \*const LOCAL\_POLL\_REQUEST

**Definition:** tango\_const.h:83

`Tango::ABORT\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a6665e08e2a44c93d713463e87c3ce840>`__

Do not read attribute(s) if one of the written attribute(s) failed.

**Definition:** tango\_const.h:1139

`Tango::API\_PipeNotWritable <../../de/ddf/namespaceTango.html#acd70a42c2585e7f6e3892681e45e3d13>`__

const char \*const API\_PipeNotWritable

**Definition:** tango\_const.h:426

`Tango::Sta\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac39268602c7ff7d2864ce6d2d70ba596>`__

DevState \*(DeviceImpl::\* Sta\_CmdMethPtr\_DbA)(const DevVarDoubleArray
\*)

**Definition:** tango\_const.h:890

`Tango::UL\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a02927005ed2fe26d5560a446ed690d74>`__

DevULong(DeviceImpl::\* UL\_CmdMethPtr\_ShA)(const DevVarShortArray \*)

**Definition:** tango\_const.h:647

`Tango::Bo\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8bad15600c91ea8c9557207a260c0c84>`__

DevBoolean(DeviceImpl::\* Bo\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:521

`Tango::API\_CannotCheckAccessControl <../../de/ddf/namespaceTango.html#abbc95fb0aec509279b907a441f234c7f>`__

const char \*const API\_CannotCheckAccessControl

**Definition:** tango\_const.h:349

`Tango::LgA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa0917ab8eec462a32230d024ee9bf2db>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:721

`Tango::API\_NoDataYet <../../de/ddf/namespaceTango.html#a0a0af5209f7892f59f04b42e77fdc04e>`__

const char \*const API\_NoDataYet

**Definition:** tango\_const.h:412

`Tango::DEVVAR\_CHARARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a29e20059f1446ac5d176698907bbd3a4>`__

**Definition:** tango\_const.h:913

`Tango::ZmqCmdCode <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315c>`__

ZmqCmdCode

**Definition:** tango\_const.h:1167

`Tango::TangoHostNotSet <../../de/ddf/namespaceTango.html#a7f2387175232a41bb05aebf49f49d49d>`__

const char \*const TangoHostNotSet

**Definition:** tango\_const.h:72

`Tango::ShA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2de6d535c00e1420b4c6eed0e306b9f6>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_ShA)(const
DevVarShortArray \*)

**Definition:** tango\_const.h:707

`Tango::API\_DatabaseCacheAccess <../../de/ddf/namespaceTango.html#ab3ed208b6d5bfcaefcbbeb331105ed46>`__

const char \*const API\_DatabaseCacheAccess

**Definition:** tango\_const.h:374

`Tango::Db\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a0f1a29f32a3f4e4422549bff700fc6a9>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:605

`Tango::LgA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aef40c6313f2bc5519c51222a55f78858>`__

DevVarLongArray \*(DeviceImpl::\* LgA\_CmdMethPtr\_DbA)(const
DevVarDoubleArray \*)

**Definition:** tango\_const.h:730

`Tango::FlA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a7e0a051d44833ee4db580ea1a5032076>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_StrA)(const
DevVarStringArray \*)

**Definition:** tango\_const.h:753

`Tango::Fl\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab22a7008ea2d5693f4fa1d67fb5cc041>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:595

`Tango::USA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a9ab54159e793670d65f1dc258b2dbbe4>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:783

`Tango::POLL\_ADD\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a129486e9808fdd11b350fc1f3d473747>`__

**Definition:** tango\_const.h:952

`Tango::DB\_CONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#ae812eafd87e66f1907751a4c93220b69>`__

const int DB\_CONNECT\_TIMEOUT

**Definition:** tango\_const.h:176

`Tango::RootAttrPropName <../../de/ddf/namespaceTango.html#a7fc39c748986b54ea6c3100e22ac6931>`__

const char \*const RootAttrPropName

**Definition:** tango\_const.h:314

`Tango::string\_dup <../../de/ddf/namespaceTango.html#a0709e050e70c50ae2211f97c45639198>`__

char \* string\_dup(const char \*s)

**Definition:** tango\_const.h:463

`Tango::API\_IncompatibleAttrDataType <../../de/ddf/namespaceTango.html#a5d26ecf289a6aa5147d2578082a821ba>`__

const char \*const API\_IncompatibleAttrDataType

**Definition:** tango\_const.h:399

`Tango::FlA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa6f4d629b33bb4912fa2f36c9114d3c0>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:756

`Tango::Lg\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47e815f6f2ca7fd1308d19ce4eaa78bf>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:563

`Tango::Db\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5d0669880dd907a49d79f845f969410f>`__

DevDouble(DeviceImpl::\* Db\_CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:600

`Tango::Str\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1268957ae992d72850180d8faad74774>`__

DevString(DeviceImpl::\* Str\_CmdMethPtr\_FlA)(const DevVarFloatArray
\*)

**Definition:** tango\_const.h:669

`Tango::DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__

const int DB\_START\_PHASE\_RETRIES

**Definition:** tango\_const.h:179

`Tango::DB\_TIMEOUT <../../de/ddf/namespaceTango.html#a86c45a7d5efc2c77708c639d1512d646>`__

const int DB\_TIMEOUT

**Definition:** tango\_const.h:178

`Tango::ChA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6c22f648270e1ba92fbddc8e3a830af2>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:679

`Tango::ChA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a9178d3d7149c11b7855361d8e6835df9>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_ChA)(const
DevVarCharArray \*)

**Definition:** tango\_const.h:686

`Tango::MIN\_DELTA\_WORK <../../de/ddf/namespaceTango.html#af982d7c45093855da559e24390399d74>`__

const int MIN\_DELTA\_WORK

**Definition:** tango\_const.h:88

`Tango::ChA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a8c38a987e4f5ec7694a1e3ea79a1e609>`__

DevVarCharArray \*(DeviceImpl::\* ChA\_CmdMethPtr\_US)(DevUShort)

**Definition:** tango\_const.h:683

`Tango::FlA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a9ff925023cc9e8ebf63c8a42af440dee>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_Str)(DevString)

**Definition:** tango\_const.h:745

`Tango::Lg\_CmdMethPtr <../../de/ddf/namespaceTango.html#a4b458309fd1d1569284660ea789b9886>`__

DevLong(DeviceImpl::\* Lg\_CmdMethPtr)()

**Definition:** tango\_const.h:500

`Tango::CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a4b9ae3b66981ac4167d9959b0068fd9b>`__

void(DeviceImpl::\* CmdMethPtr\_Lg)(DevLong)

**Definition:** tango\_const.h:480

`Tango::API\_CorbaSysException <../../de/ddf/namespaceTango.html#a80b0db5242b5b0b41e847edd3a5631fd>`__

const char \*const API\_CorbaSysException

**Definition:** tango\_const.h:371

`Tango::Fl\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e434e9063a4db9a5d175d128cbf39b>`__

DevFloat(DeviceImpl::\* Fl\_CmdMethPtr\_ULA)(const DevVarULongArray \*)

**Definition:** tango\_const.h:592

`Tango::ShA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ae1229e38ddd435fd9018df7d7741a78c>`__

DevVarShortArray \*(DeviceImpl::\* ShA\_CmdMethPtr\_Sta)(DevState)

**Definition:** tango\_const.h:716

`Tango::LSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a099fe79b75b7d473084dd9c68810f24e>`__

DevVarLongStringArray \*(DeviceImpl::\* LSA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:841

`Tango::PIPE\_NO\_SYNC <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98a855089eea67f5b5f306b04d5eb7bc64d>`__

**Definition:** tango\_const.h:1126

`Tango::MCAST\_HOPS <../../de/ddf/namespaceTango.html#a98def3b6214d3a9cc86253fc03e8b6df>`__

const int MCAST\_HOPS

**Definition:** tango\_const.h:141

`Tango::USA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad0ecb778178bf8c33e91d9c04ec9d55e>`__

DevVarUShortArray \*(DeviceImpl::\* USA\_CmdMethPtr\_Sh)(DevShort)

**Definition:** tango\_const.h:779

`Tango::FormatNotSpec\_INT <../../de/ddf/namespaceTango.html#a713bec3ecfb92d7bf1e874d0a0a76460>`__

const char \*const FormatNotSpec\_INT

**Definition:** tango\_const.h:306

`Tango::ULA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a1b18295c55f95416d8ff43654cdbdae8>`__

DevVarULongArray \*(DeviceImpl::\* ULA\_CmdMethPtr\_Fl)(DevFloat)

**Definition:** tango\_const.h:801

`Tango::US\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a3fcc442f5043a6b51e96da4947d34867>`__

DevUShort(DeviceImpl::\* US\_CmdMethPtr\_DSA)(const
DevVarDoubleStringArray \*)

**Definition:** tango\_const.h:635

`Tango::NARROW\_CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__

const int NARROW\_CLNT\_TIMEOUT

**Definition:** tango\_const.h:170

`Tango::MIN\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#a9925dc4036809c0c82c6faa04715ee0c>`__

const int MIN\_LOCK\_VALIDITY

**Definition:** tango\_const.h:161

`Tango::FlA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af3cf4a117477ce8cf3ab174ae40e77cb>`__

DevVarFloatArray \*(DeviceImpl::\* FlA\_CmdMethPtr\_LSA)(const
DevVarLongStringArray \*)

**Definition:** tango\_const.h:754

`Tango::TG\_IMP\_MINOR\_TO <../../de/ddf/namespaceTango.html#af2e652825c984d817a22f92efac11a5b>`__

const int TG\_IMP\_MINOR\_TO

**Definition:** tango\_const.h:97

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `tango\_const.h <../../d4/d13/tango__const_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
