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

attribute.h

`Go to the documentation of this
file. <../../d3/d7c/attribute_8h.html>`__

1 

2 //===================================================================================================================

3 //

4 // file : Attribute.h

5 //

6 // description : Include file for the Attribute classes.

7 //

8 // project : TANGO

9 //

10 // author(s) : A.Gotz + E.Taurel

11 //

12 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

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
GNU Lesser General Public License for more details.

25 //

26 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

27 // If not, see <http://www.gnu.org/licenses/>.

28 //

29 // $Revision$

30 //

31 //====================================================================================================================

32 

33 #ifndef \_ATTRIBUTE\_H

34 #define \_ATTRIBUTE\_H

35 

36 #include <tango.h>

37 #include
<`tango/server/attrdesc.h <../../d4/d18/attrdesc_8h.html>`__\ >

38 #include
<`tango/server/fwdattrdesc.h <../../d8/d3c/fwdattrdesc_8h.html>`__\ >

39 #include
<`tango/server/encoded\_attribute.h <../../da/dc2/encoded__attribute_8h.html>`__\ >

40 

41 #include <functional>

42 #include <time.h>

43 #include <iterator>

44 

45 #ifdef \_TG\_WINDOWS\_

46  #include <sys/types.h>

47  #include <sys/timeb.h>

48 #endif

49 

50 namespace `Tango <../../de/ddf/namespaceTango.html>`__

51 {

52 

53 //

54 // Binary function objects to be used by the find\_if algorithm.

55 // The find\_if algo. want to have a predicate, this means that the
return value

56 // must be a boolean (R is its name).

57 // The test is done between a AttrProperty object (name A1) and a
string (name A2)

58 // The find\_if algo. needs a unary predicate. This function object
is a binary

59 // function object. It must be used with the bind2nd function adapter

60 //

61 

62 template <typename A1, typename A2, typename R>

`63 <../../d0/d82/structTango_1_1WantedProp.html>`__ struct
`WantedProp <../../d0/d82/structTango_1_1WantedProp.html>`__ : public
binary\_function<A1,A2,R>

64 {

`65 <../../d0/d82/structTango_1_1WantedProp.html#a55931f0af339a7e8072d6efe424d06bc>`__ 
R
`operator() <../../d0/d82/structTango_1_1WantedProp.html#a55931f0af339a7e8072d6efe424d06bc>`__\ (A1
att,A2 name\_str) const

66  {

67  return att.get\_name() == name\_str;

68  }

69 };

70 

71 template <typename A1, typename A2, typename R>

`72 <../../d8/dc8/structTango_1_1WantedAttr.html>`__ struct
`WantedAttr <../../d8/dc8/structTango_1_1WantedAttr.html>`__ : public
binary\_function<A1,A2,R>

73 {

`74 <../../d8/dc8/structTango_1_1WantedAttr.html#a758bd8a70db45aa529156b9a21702bad>`__ 
R
`operator() <../../d8/dc8/structTango_1_1WantedAttr.html#a758bd8a70db45aa529156b9a21702bad>`__\ (A1
attr\_ptr, A2 name) const

75  {

76  string st(name);

77  if (st.size() != attr\_ptr->get\_name\_size())

78  return false;

79  transform(st.begin(),st.end(),st.begin(),::tolower);

80  return attr\_ptr->get\_name\_lower() == st;

81  }

82 };

83 

84 

85 class AttrProperty;

86 class DeviceClass;

87 

`88 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__ typedef union
`\_Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__

89 {

`90 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ac7ca88e6bbe2b55e305a05b27a9db5ce>`__ 
short
`sh <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ac7ca88e6bbe2b55e305a05b27a9db5ce>`__;

`91 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a2c051c4cefe150cb316127f7ba03f35c>`__ 
DevLong
`lg <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a2c051c4cefe150cb316127f7ba03f35c>`__;

`92 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ad4e0d2ca80dc7bf6d188fa25085dcb7c>`__ 
double
`db <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ad4e0d2ca80dc7bf6d188fa25085dcb7c>`__;

`93 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a99c1cc53a5b8a2fe14abbee2da24c9a3>`__ 
float
`fl <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a99c1cc53a5b8a2fe14abbee2da24c9a3>`__;

`94 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#abebf8bf262871069fdc66fc7171b8e76>`__ 
unsigned short
`ush <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#abebf8bf262871069fdc66fc7171b8e76>`__;

`95 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#aea5e987225a739cb0e82f891d9eaaf52>`__ 
unsigned char
`uch <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#aea5e987225a739cb0e82f891d9eaaf52>`__;

`96 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a6ea8ac1d0b874559ba0a987c8102636e>`__ 
DevLong64
`lg64 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a6ea8ac1d0b874559ba0a987c8102636e>`__;

`97 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a61b2a45b6e761f2660f516fab08d76c9>`__ 
DevULong
`ulg <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a61b2a45b6e761f2660f516fab08d76c9>`__;

`98 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#af922febda3c28b8e89f4536e062e6d42>`__ 
DevULong64
`ulg64 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#af922febda3c28b8e89f4536e062e6d42>`__;

`99 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#afed10fbfee093e96573c4ac0869a1ea9>`__ 
DevState
`d\_sta <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#afed10fbfee093e96573c4ac0869a1ea9>`__;

100 }`Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__;

101 

`102 <../../dd/d79/unionTango_1_1__Attr__Value.html>`__ typedef union
`\_Attr\_Value <../../dd/d79/unionTango_1_1__Attr__Value.html>`__

103 {

`104 <../../dd/d79/unionTango_1_1__Attr__Value.html#a8bb5aab68dd90d797052ad498b62e24a>`__ 
DevVarShortArray
\*\ `sh\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a8bb5aab68dd90d797052ad498b62e24a>`__;

`105 <../../dd/d79/unionTango_1_1__Attr__Value.html#aa9c65836e2531bf1075347f5ba46c9ff>`__ 
DevVarLongArray
\*\ `lg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa9c65836e2531bf1075347f5ba46c9ff>`__;

`106 <../../dd/d79/unionTango_1_1__Attr__Value.html#aa29b18a24b1791dc8cd9791652295aa0>`__ 
DevVarFloatArray
\*\ `fl\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa29b18a24b1791dc8cd9791652295aa0>`__;

`107 <../../dd/d79/unionTango_1_1__Attr__Value.html#ae195860e9cb410e5313e430823065a15>`__ 
DevVarDoubleArray
\*\ `db\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ae195860e9cb410e5313e430823065a15>`__;

`108 <../../dd/d79/unionTango_1_1__Attr__Value.html#a34d1df6474b4012138c5e779648ebd2e>`__ 
DevVarStringArray
\*\ `str\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a34d1df6474b4012138c5e779648ebd2e>`__;

`109 <../../dd/d79/unionTango_1_1__Attr__Value.html#ab3b3cc1b40eeefde2c9d0ec7f66682de>`__ 
DevVarUShortArray
\*\ `ush\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ab3b3cc1b40eeefde2c9d0ec7f66682de>`__;

`110 <../../dd/d79/unionTango_1_1__Attr__Value.html#a09041dfdd3ceb12b9d5d2ff6d7672e82>`__ 
DevVarBooleanArray
\*\ `boo\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a09041dfdd3ceb12b9d5d2ff6d7672e82>`__;

`111 <../../dd/d79/unionTango_1_1__Attr__Value.html#af2dedf11deecc24f0355dceeaf7d39eb>`__ 
DevVarCharArray
\*\ `cha\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#af2dedf11deecc24f0355dceeaf7d39eb>`__;

`112 <../../dd/d79/unionTango_1_1__Attr__Value.html#aaeb8af715b7b6420a3492434f0be6ebc>`__ 
DevVarLong64Array
\*\ `lg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aaeb8af715b7b6420a3492434f0be6ebc>`__;

`113 <../../dd/d79/unionTango_1_1__Attr__Value.html#aefdf14649ed87e9ba3cd496344a2d229>`__ 
DevVarULongArray
\*\ `ulg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aefdf14649ed87e9ba3cd496344a2d229>`__;

`114 <../../dd/d79/unionTango_1_1__Attr__Value.html#ad85da44052184f148e039c6995c54fc5>`__ 
DevVarULong64Array
\*\ `ulg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ad85da44052184f148e039c6995c54fc5>`__;

`115 <../../dd/d79/unionTango_1_1__Attr__Value.html#abe5b239bc92ac7ed1bce31a3fb4cfe7f>`__ 
DevVarStateArray
\*\ `state\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#abe5b239bc92ac7ed1bce31a3fb4cfe7f>`__;

`116 <../../dd/d79/unionTango_1_1__Attr__Value.html#a9f2c26b86b6f3bb3e6af164185aca107>`__ 
DevVarEncodedArray
\*\ `enc\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a9f2c26b86b6f3bb3e6af164185aca107>`__;

117 }`Attr\_Value <../../de/ddf/namespaceTango.html#a41a53e618e4c9135b25512260eebe538>`__;

118 

119 

`120 <../../de/db2/structTango_1_1last__attr__value.html>`__ typedef
struct
`last\_attr\_value <../../de/db2/structTango_1_1last__attr__value.html>`__

121 {

`122 <../../de/db2/structTango_1_1last__attr__value.html#a5c390677b08b00bafb0a2b1b095ac2ff>`__ 
bool
`inited <../../de/db2/structTango_1_1last__attr__value.html#a5c390677b08b00bafb0a2b1b095ac2ff>`__;

`123 <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__ 
Tango::AttrQuality
`quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__;

`124 <../../de/db2/structTango_1_1last__attr__value.html#ac9380c5dfe9e38f8c1f4b35385127f69>`__ 
CORBA::Any
`value <../../de/db2/structTango_1_1last__attr__value.html#ac9380c5dfe9e38f8c1f4b35385127f69>`__;

`125 <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__ 
bool
`err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__;

`126 <../../de/db2/structTango_1_1last__attr__value.html#a854e14f33e75bdcea27483fd791ff307>`__ 
DevFailed
`except <../../de/db2/structTango_1_1last__attr__value.html#a854e14f33e75bdcea27483fd791ff307>`__;

`127 <../../de/db2/structTango_1_1last__attr__value.html#a2da098329f50e217705185215a817fd1>`__ 
AttrValUnion
`value\_4 <../../de/db2/structTango_1_1last__attr__value.html#a2da098329f50e217705185215a817fd1>`__;

128 }
`LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__;

129 

`130 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__ typedef
enum
`prop\_type <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__

131 {

`132 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da914c8479a1e8d46bc9883c794e65049b>`__ 
`MIN\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da914c8479a1e8d46bc9883c794e65049b>`__
= 0,

`133 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dabce4729450a33c4ac0fe873058148572>`__ 
`MAX\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dabce4729450a33c4ac0fe873058148572>`__,

`134 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da72712aef1c716ce755552bc40534e784>`__ 
`MIN\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da72712aef1c716ce755552bc40534e784>`__,

`135 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dac9ec25306c829a964c29ddb38bbcf5ae>`__ 
`MAX\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dac9ec25306c829a964c29ddb38bbcf5ae>`__,

`136 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da870f38bb3472276d779767000c2e8821>`__ 
`MIN\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da870f38bb3472276d779767000c2e8821>`__,

`137 <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da2316cc2dfac70c9ca231be7ba37d30d4>`__ 
`MAX\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da2316cc2dfac70c9ca231be7ba37d30d4>`__

138 }
`PropType <../../de/ddf/namespaceTango.html#adab12914708b27ce524f38a571bdd156>`__;

139 

140 class EventSupplier;

141 

142 //=============================================================================

143 //

144 // The Attribute class

145 //

146 //

147 // description : There is one instance of this class for each
attribute

148 // for each device. This class stores the attribute

149 // properties and the attribute value.

150 //

151 //=============================================================================

152 

`163 <../../d6/dad/classTango_1_1Attribute.html>`__ class
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

164 {

165 public:

166 

168  enum alarm\_flags

169  {

170  min\_level,

171  max\_level,

172  rds,

173  min\_warn,

174  max\_warn,

175  numFlags

176  };

177 

178  struct CheckOneStrProp

179  {

180 
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
\*db\_d;

181  long \*prop\_to\_update;

182 
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
\*db\_del;

183  long \*prop\_to\_delete;

184  vector<AttrProperty> \*def\_user\_prop;

185  vector<AttrProperty> \*def\_class\_prop;

186  };

187 

188  enum \_DbAction

189  {

190  UPD = 0,

191  UPD\_FROM\_DB,

192  UPD\_FROM\_VECT\_STR,

193  DEL

194  };

195  typedef \_DbAction DbAction;

196 

197  struct \_AttPropDb

198  {

199  string
`name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__;

200  DbAction dba;

201  string db\_value;

202  vector<double> db\_value\_db;

203  vector<string> db\_value\_v\_str;

204  };

205  typedef \_AttPropDb AttPropDb;

207 

221 
`Attribute <../../d6/dad/classTango_1_1Attribute.html#ad92e54beedf8d29d088c2f6d5d70153f>`__\ (vector<AttrProperty>
&prop\_list,\ `Attr <../../d5/dcd/classTango_1_1Attr.html>`__
&tmp\_attr,string &dev\_name,long idx);

223 

231  virtual
`~Attribute <../../d6/dad/classTango_1_1Attribute.html#ae2740fa1ac154feb7d50a85199991f42>`__\ ();

233 

246  bool
`is\_writ\_associated <../../d6/dad/classTango_1_1Attribute.html#a716551497af0ec7e9e9f22e27480158e>`__\ ();

`253 <../../d6/dad/classTango_1_1Attribute.html#a0df58ed810063ccfef7df02ac9851a94>`__ 
bool
`is\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a0df58ed810063ccfef7df02ac9851a94>`__\ ()
{return alarm.test(min\_level);}

`260 <../../d6/dad/classTango_1_1Attribute.html#a2db386476f2d728513af3f3e5342f90a>`__ 
bool
`is\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#a2db386476f2d728513af3f3e5342f90a>`__\ ()
{return alarm.test(max\_level);}

`267 <../../d6/dad/classTango_1_1Attribute.html#aafbaa179c8445f29480f8bff031920de>`__ 
bool
`is\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#aafbaa179c8445f29480f8bff031920de>`__\ ()
{return alarm.test(min\_warn);}

`274 <../../d6/dad/classTango_1_1Attribute.html#a2cf67df0c5a155df39156301582a98c9>`__ 
bool
`is\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2cf67df0c5a155df39156301582a98c9>`__\ ()
{return alarm.test(max\_warn);}

`281 <../../d6/dad/classTango_1_1Attribute.html#accac04b03b14bd2bc958e06cc8f3626c>`__ 
bool
`is\_rds\_alarm <../../d6/dad/classTango_1_1Attribute.html#accac04b03b14bd2bc958e06cc8f3626c>`__\ ()
{return alarm.test(rds);}

`290 <../../d6/dad/classTango_1_1Attribute.html#aa0c62a8753eca947531af2614e13b60d>`__ 
bitset<numFlags>
&\ `is\_alarmed <../../d6/dad/classTango_1_1Attribute.html#aa0c62a8753eca947531af2614e13b60d>`__\ ()
{return alarm\_conf;}

296  bool
`is\_polled <../../d6/dad/classTango_1_1Attribute.html#a1ca81f8abd78d54ce8540ff0ccd3c6c1>`__\ ();

305  bool
`check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__\ ();

307 

`318 <../../d6/dad/classTango_1_1Attribute.html#a55b57b9d5abf6649e0f4e7854920d967>`__ 
Tango::AttrWriteType
`get\_writable <../../d6/dad/classTango_1_1Attribute.html#a55b57b9d5abf6649e0f4e7854920d967>`__\ ()
{return
`writable <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__;}

`324 <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__ 
string
&\ `get\_name <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__\ ()
{return
`name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__;}

`330 <../../d6/dad/classTango_1_1Attribute.html#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__ 
long
`get\_data\_type <../../d6/dad/classTango_1_1Attribute.html#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__\ ()
{return
`data\_type <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__;}

`336 <../../d6/dad/classTango_1_1Attribute.html#a4e23df40cb9be8d4213c0f87b67e5dd9>`__ 
Tango::AttrDataFormat
`get\_data\_format <../../d6/dad/classTango_1_1Attribute.html#a4e23df40cb9be8d4213c0f87b67e5dd9>`__\ ()
{return
`data\_format <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__;}

`342 <../../d6/dad/classTango_1_1Attribute.html#abe79d1339964153ad5144a53036fcd18>`__ 
string
&\ `get\_assoc\_name <../../d6/dad/classTango_1_1Attribute.html#abe79d1339964153ad5144a53036fcd18>`__\ ()
{return
`writable\_attr\_name <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__;}

`349 <../../d6/dad/classTango_1_1Attribute.html#a362cf02710511ea952ef3f8ff85cdd30>`__ 
long
`get\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a362cf02710511ea952ef3f8ff85cdd30>`__\ ()
{return
`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__;}

`356 <../../d6/dad/classTango_1_1Attribute.html#a3327bf363691bb60a285b72c9a170f52>`__ 
void
`set\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a3327bf363691bb60a285b72c9a170f52>`__\ (long
val)
{`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__
= val;}

`362 <../../d6/dad/classTango_1_1Attribute.html#a0e5d5c229031b939700a38728fbe08a4>`__ 
Tango::TimeVal
&\ `get\_date <../../d6/dad/classTango_1_1Attribute.html#a0e5d5c229031b939700a38728fbe08a4>`__\ ()
{return
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__;}

`368 <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__ 
void
`set\_date <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__\ (Tango::TimeVal
&new\_date)
{`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__
= new\_date;}

369 #ifdef \_TG\_WINDOWS\_

370 

375  void
`set\_date <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__\ (struct
\_timeb &t)
{`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_sec=(long)t.time;\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_usec=(t.millitm\*1000);\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_nsec=0;}

376 #endif

377 

`382 <../../d6/dad/classTango_1_1Attribute.html#a535e525aa3be98940bed3b229b7dd1ae>`__ 
void
`set\_date <../../d6/dad/classTango_1_1Attribute.html#a535e525aa3be98940bed3b229b7dd1ae>`__\ (struct
timeval &t)
{`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_sec=t.tv\_sec;\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_usec=t.tv\_usec;\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_nsec=0;}

`388 <../../d6/dad/classTango_1_1Attribute.html#a174152e7af49d2da5644ddfb701d71a9>`__ 
void
`set\_date <../../d6/dad/classTango_1_1Attribute.html#a174152e7af49d2da5644ddfb701d71a9>`__\ (time\_t
new\_date)
{`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_sec=(long)new\_date;\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_usec=0;\ `when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.tv\_nsec=0;}

`394 <../../d6/dad/classTango_1_1Attribute.html#a1851ce2e2e30add8e826c39b462fe374>`__ 
string
&\ `get\_label <../../d6/dad/classTango_1_1Attribute.html#a1851ce2e2e30add8e826c39b462fe374>`__\ ()
{return
`label <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__;}

`400 <../../d6/dad/classTango_1_1Attribute.html#af1dc4310844ce3fd7bdde02f6202b5ba>`__ 
Tango::AttrQuality
&\ `get\_quality <../../d6/dad/classTango_1_1Attribute.html#af1dc4310844ce3fd7bdde02f6202b5ba>`__\ ()
{return
`quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__;}

407  void
`set\_quality <../../d6/dad/classTango_1_1Attribute.html#aadb400c90467daf5c1ccfd36c2ea67e3>`__\ (Tango::AttrQuality
qua, bool send\_event=false);

408 

`414 <../../d6/dad/classTango_1_1Attribute.html#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__ 
long
`get\_data\_size <../../d6/dad/classTango_1_1Attribute.html#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__\ ()
{return
`data\_size <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__;}

`420 <../../d6/dad/classTango_1_1Attribute.html#a114b20637933d5a49c6dc7f7fbcb27f4>`__ 
long
`get\_x <../../d6/dad/classTango_1_1Attribute.html#a114b20637933d5a49c6dc7f7fbcb27f4>`__\ ()
{return dim\_x;}

`426 <../../d6/dad/classTango_1_1Attribute.html#ae5cd58a02dcf1a799d1261ed5d9c7532>`__ 
long
`get\_max\_dim\_x <../../d6/dad/classTango_1_1Attribute.html#ae5cd58a02dcf1a799d1261ed5d9c7532>`__\ ()
{return
`max\_x <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__;}

`433 <../../d6/dad/classTango_1_1Attribute.html#ae724bd70b696700c422fe83826a7ba41>`__ 
long
`get\_y <../../d6/dad/classTango_1_1Attribute.html#ae724bd70b696700c422fe83826a7ba41>`__\ ()
{return dim\_y;}

`440 <../../d6/dad/classTango_1_1Attribute.html#ab4cfab2bee3ae1523ad8a3466afc37a2>`__ 
long
`get\_max\_dim\_y <../../d6/dad/classTango_1_1Attribute.html#ab4cfab2bee3ae1523ad8a3466afc37a2>`__\ ()
{return
`max\_y <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__;}

`447 <../../d6/dad/classTango_1_1Attribute.html#a59bbd014fb3e06e3075cceed22aa1f94>`__ 
long
`get\_polling\_period <../../d6/dad/classTango_1_1Attribute.html#a59bbd014fb3e06e3075cceed22aa1f94>`__\ ()
{return poll\_period;}

456  template <typename T>

457  void
`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (`Tango::MultiAttrProp<T> <../../d7/d41/classTango_1_1MultiAttrProp.html>`__
&props);

466  template <typename T>

467  void
`set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__\ (`Tango::MultiAttrProp<T> <../../d7/d41/classTango_1_1MultiAttrProp.html>`__
&props);

477  void
`set\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#abc67fbc105dc54f7cb685e137074b2d9>`__\ (`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__
ser\_model);

`485 <../../d6/dad/classTango_1_1Attribute.html#ac2d93bbbc1b0019e81691c14dc13bc0d>`__ 
`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__
`get\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#ac2d93bbbc1b0019e81691c14dc13bc0d>`__\ ()
{return attr\_serial\_model;}

`496 <../../d6/dad/classTango_1_1Attribute.html#a938e182ff0b0c1664b30b713f3d11d3f>`__ 
void
`set\_user\_attr\_mutex <../../d6/dad/classTango_1_1Attribute.html#a938e182ff0b0c1664b30b713f3d11d3f>`__\ (omni\_mutex
\*mut\_ptr) {ext->user\_attr\_mutex = mut\_ptr;}

498 

499 

521  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevShort
\*p\_data,long x = 1,long y = 0,bool release = false);

538  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevLong
\*p\_data,long x = 1, long y = 0,bool release = false);

539 

556  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevLong64
\*p\_data,long x = 1,long y = 0,bool release = false);

557 

574  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevFloat
\*p\_data,long x = 1,long y = 0,bool release = false);

575 

592  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevDouble
\*p\_data,long x = 1,long y = 0,bool release = false);

609  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevString
\*p\_data,long x = 1,long y = 0,bool release = false);

626  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevBoolean
\*p\_data,long x = 1,long y = 0,bool release = false);

643  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevUShort
\*p\_data,long x = 1,long y = 0,bool release = false);

660  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevUChar
\*p\_data,long x = 1,long y = 0,bool release = false);

677  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevULong
\*p\_data,long x = 1,long y = 0,bool release = false);

694  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevULong64
\*p\_data,long x = 1,long y = 0,bool release = false);

711  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevState
\*p\_data,long x = 1,long y = 0,bool release = false);

728  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevEncoded
\*p\_data,long x = 1, long y = 0,bool release = false);

745  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (Tango::DevString
\*p\_data\_str,Tango::DevUChar \*p\_data,long size,bool release =
false);

758  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (`Tango::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
\*attr);

759 

760 //---------------------------------------------------------------------------

761 

780  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevShort
\*p\_data,

781  time\_t t,

782  Tango::AttrQuality qual,

783  long x = 1,long y = 0,

784  bool release = false);

785 

786 #ifdef \_TG\_WINDOWS\_

787  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevShort
\*p\_data,

788  struct \_timeb &t,

789  Tango::AttrQuality qual,

790  long x = 1,long y = 0,

791  bool release = false);

792 #else

793 

814  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevShort
\*p\_data,

815  struct timeval &t,

816  Tango::AttrQuality qual,

817  long x = 1,long y = 0,

818  bool release = false);

819 #endif

820 

821 //-----------------------------------------------------------------------

822 

841  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong
\*p\_data,

842  time\_t t,

843  Tango::AttrQuality qual,

844  long x = 1,long y = 0,

845  bool release = false);

846 #ifdef \_TG\_WINDOWS\_

847  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong
\*p\_data,

848  struct \_timeb &t,

849  Tango::AttrQuality qual,

850  long x = 1,long y = 0,

851  bool release = false);

852 #else

853 

874  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong
\*p\_data,

875  struct timeval &t,

876  Tango::AttrQuality qual,

877  long x = 1,long y = 0,

878  bool release = false);

879 #endif

880 

881 //-----------------------------------------------------------------------

882 

901  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong64
\*p\_data,

902  time\_t t,

903  Tango::AttrQuality qual,

904  long x = 1,long y = 0,

905  bool release = false);

906 #ifdef \_TG\_WINDOWS\_

907  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong64
\*p\_data,

908  struct \_timeb &t,

909  Tango::AttrQuality qual,

910  long x = 1,long y = 0,

911  bool release = false);

912 #else

913 

934  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevLong64
\*p\_data,

935  struct timeval &t,

936  Tango::AttrQuality qual,

937  long x = 1,long y = 0,

938  bool release = false);

939 #endif

940 

941 //-----------------------------------------------------------------------

942 

962  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevFloat
\*p\_data,

963  time\_t t,

964  Tango::AttrQuality qual,

965  long x = 1,long y = 0,

966  bool release = false);

967 #ifdef \_TG\_WINDOWS\_

968  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevFloat
\*p\_data,

969  struct \_timeb &t,

970  Tango::AttrQuality qual,

971  long x = 1,long y = 0,

972  bool release = false);

973 #else

974 

995  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevFloat
\*p\_data,

996  struct timeval &t,

997  Tango::AttrQuality qual,

998  long x = 1,long y = 0,

999  bool release = false);

1000 #endif

1001 

1002 

1003 //-----------------------------------------------------------------------

1004 

1024  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevDouble
\*p\_data,

1025  time\_t t,

1026  Tango::AttrQuality qual,

1027  long x = 1,long y = 0,

1028  bool release = false);

1029 #ifdef \_TG\_WINDOWS\_

1030  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevDouble
\*p\_data,

1031  struct \_timeb &t,

1032  Tango::AttrQuality qual,

1033  long x = 1,long y = 0,

1034  bool release = false);

1035 #else

1036 

1057  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevDouble
\*p\_data,

1058  struct timeval &t,

1059  Tango::AttrQuality qual,

1060  long x = 1,long y = 0,

1061  bool release = false);

1062 #endif

1063 

1064 //-----------------------------------------------------------------------

1065 

1084  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data,

1085  time\_t t,

1086  Tango::AttrQuality qual,

1087  long x = 1,long y = 0,

1088  bool release = false);

1089 #ifdef \_TG\_WINDOWS\_

1090  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data,

1091  struct \_timeb &t,

1092  Tango::AttrQuality qual,

1093  long x = 1,long y = 0,

1094  bool release = false);

1095 #else

1096 

1117  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data,

1118  struct timeval &t,

1119  Tango::AttrQuality qual,

1120  long x = 1,long y = 0,

1121  bool release = false);

1122 #endif

1123 

1124 //-----------------------------------------------------------------------

1125 

1145  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevBoolean
\*p\_data,

1146  time\_t t,

1147  Tango::AttrQuality qual,

1148  long x = 1,long y = 0,

1149  bool release = false);

1150 #ifdef \_TG\_WINDOWS\_

1151  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevBoolean
\*p\_data,

1152  struct \_timeb &t,

1153  Tango::AttrQuality qual,

1154  long x = 1,long y = 0,

1155  bool release = false);

1156 #else

1157 

1178  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevBoolean
\*p\_data,

1179  struct timeval &t,

1180  Tango::AttrQuality qual,

1181  long x = 1,long y = 0,

1182  bool release = false);

1183 #endif

1184 

1185 //-----------------------------------------------------------------------

1186 

1206  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUShort
\*p\_data,

1207  time\_t t,

1208  Tango::AttrQuality qual,

1209  long x = 1,long y = 0,

1210  bool release = false);

1211 #ifdef \_TG\_WINDOWS\_

1212  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUShort
\*p\_data,

1213  struct \_timeb &t,

1214  Tango::AttrQuality qual,

1215  long x = 1,long y = 0,

1216  bool release = false);

1217 #else

1218 

1239  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUShort
\*p\_data,

1240  struct timeval &t,

1241  Tango::AttrQuality qual,

1242  long x = 1,long y = 0,

1243  bool release = false);

1244 #endif

1245 

1246 //-----------------------------------------------------------------------

1247 

1267  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUChar
\*p\_data,

1268  time\_t t,

1269  Tango::AttrQuality qual,

1270  long x = 1,long y = 0,

1271  bool release = false);

1272 #ifdef \_TG\_WINDOWS\_

1273  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUChar
\*p\_data,

1274  struct \_timeb &t,

1275  Tango::AttrQuality qual,

1276  long x = 1,long y = 0,

1277  bool release = false);

1278 #else

1279 

1300  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevUChar
\*p\_data,

1301  struct timeval &t,

1302  Tango::AttrQuality qual,

1303  long x = 1,long y = 0,

1304  bool release = false);

1305 #endif

1306 

1307 //-----------------------------------------------------------------------

1308 

1327  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong
\*p\_data,

1328  time\_t t,

1329  Tango::AttrQuality qual,

1330  long x = 1,long y = 0,

1331  bool release = false);

1332 #ifdef \_TG\_WINDOWS\_

1333  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong
\*p\_data,

1334  struct \_timeb &t,

1335  Tango::AttrQuality qual,

1336  long x = 1,long y = 0,

1337  bool release = false);

1338 #else

1339 

1360  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong
\*p\_data,

1361  struct timeval &t,

1362  Tango::AttrQuality qual,

1363  long x = 1,long y = 0,

1364  bool release = false);

1365 #endif

1366 

1367 //-----------------------------------------------------------------------

1368 

1387  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong64
\*p\_data,

1388  time\_t t,

1389  Tango::AttrQuality qual,

1390  long x = 1,long y = 0,

1391  bool release = false);

1392 #ifdef \_TG\_WINDOWS\_

1393  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong64
\*p\_data,

1394  struct \_timeb &t,

1395  Tango::AttrQuality qual,

1396  long x = 1,long y = 0,

1397  bool release = false);

1398 #else

1399 

1420  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevULong64
\*p\_data,

1421  struct timeval &t,

1422  Tango::AttrQuality qual,

1423  long x = 1,long y = 0,

1424  bool release = false);

1425 #endif

1426 

1427 //-----------------------------------------------------------------------

1428 

1447  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevState
\*p\_data,

1448  time\_t t,

1449  Tango::AttrQuality qual,

1450  long x = 1,long y = 0,

1451  bool release = false);

1452 #ifdef \_TG\_WINDOWS\_

1453  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevState
\*p\_data,

1454  struct \_timeb &t,

1455  Tango::AttrQuality qual,

1456  long x = 1,long y = 0,

1457  bool release = false);

1458 #else

1459 

1480  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevState
\*p\_data,

1481  struct timeval &t,

1482  Tango::AttrQuality qual,

1483  long x = 1,long y = 0,

1484  bool release = false);

1485 #endif

1486 

1487 //-----------------------------------------------------------------------

1488 

1507  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevEncoded
\*p\_data,

1508  time\_t t,

1509  Tango::AttrQuality qual,

1510  long x = 1,long y = 0,

1511  bool release = false);

1531  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data\_str,

1532  Tango::DevUChar \*p\_data,

1533  long size,

1534  time\_t t,

1535  Tango::AttrQuality qual,

1536  bool release = false);

1537 #ifdef \_TG\_WINDOWS\_

1538  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevEncoded
\*p\_data,

1539  struct \_timeb &t,

1540  Tango::AttrQuality qual,

1541  long x = 1,long y = 0,

1542  bool release = false);

1543 

1544  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data\_str,

1545  Tango::DevUChar \*p\_data,

1546  long size,

1547  struct \_timeb &t,

1548  Tango::AttrQuality qual,

1549  bool release = false);

1550 #else

1551 

1572  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevEncoded
\*p\_data,

1573  struct timeval &t,

1574  Tango::AttrQuality qual,

1575  long x = 1,long y = 0,

1576  bool release = false);

1599  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (Tango::DevString
\*p\_data\_str,

1600  Tango::DevUChar \*p\_data,

1601  long size,

1602  struct timeval &t,

1603  Tango::AttrQuality qual,

1604  bool release = false);

1605 #endif

1606 

1607 

1633  void
`fire\_change\_event <../../d6/dad/classTango_1_1Attribute.html#ae023edda1e0bf70d5fda7c3dc8160351>`__\ (DevFailed
\*except = NULL);

1634 

`1645 <../../d6/dad/classTango_1_1Attribute.html#a25f157fedeb2f37741b1e41ce6422fcd>`__ 
void
`set\_change\_event <../../d6/dad/classTango_1_1Attribute.html#a25f157fedeb2f37741b1e41ce6422fcd>`__\ (bool
implemented, bool detect = true)

1646  { change\_event\_implmented = implemented;

1647  check\_change\_event\_criteria = detect;

1648  if(detect==false){

1649 
prev\_change\_event.\ `err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__\ =false;

1650 
prev\_change\_event.\ `quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__\ =Tango::ATTR\_VALID;}}

`1656 <../../d6/dad/classTango_1_1Attribute.html#accf20392305b3fe4b4f3cf6c2158950c>`__ 
bool
`is\_change\_event <../../d6/dad/classTango_1_1Attribute.html#accf20392305b3fe4b4f3cf6c2158950c>`__\ ()
{return change\_event\_implmented;}

`1663 <../../d6/dad/classTango_1_1Attribute.html#a29cd3ae6823c5627969248873042ae46>`__ 
bool
`is\_check\_change\_criteria <../../d6/dad/classTango_1_1Attribute.html#a29cd3ae6823c5627969248873042ae46>`__\ ()
{return check\_change\_event\_criteria;}

1664 

1665 

1691  void
`fire\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ab008123b44bdb2a13e2cd2c362617e1e>`__\ (DevFailed
\*except = NULL);

1692 

`1703 <../../d6/dad/classTango_1_1Attribute.html#a48b92dbec415b3f2589456fde7899175>`__ 
void
`set\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#a48b92dbec415b3f2589456fde7899175>`__\ (bool
implemented, bool detect = true)

1704  {archive\_event\_implmented = implemented;

1705  check\_archive\_event\_criteria = detect;

1706  if(detect==false){

1707 
prev\_archive\_event.\ `err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__\ =false;

1708 
prev\_archive\_event.\ `quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__\ =Tango::ATTR\_VALID;}}

1709 

`1715 <../../d6/dad/classTango_1_1Attribute.html#ad69a25209bb113694f8aef7acb49ed80>`__ 
bool
`is\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ad69a25209bb113694f8aef7acb49ed80>`__\ ()
{return archive\_event\_implmented;}

`1722 <../../d6/dad/classTango_1_1Attribute.html#a90a062ce092265b748d951e9b4b77250>`__ 
bool
`is\_check\_archive\_criteria <../../d6/dad/classTango_1_1Attribute.html#a90a062ce092265b748d951e9b4b77250>`__\ ()
{return check\_archive\_event\_criteria;}

1723 

`1729 <../../d6/dad/classTango_1_1Attribute.html#a111d02f6d34acbd29a9b396b1ce026ad>`__ 
void
`set\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a111d02f6d34acbd29a9b396b1ce026ad>`__\ (bool
implemented) {dr\_event\_implmented = implemented;}

`1735 <../../d6/dad/classTango_1_1Attribute.html#a9fbdd3152f79233b68704f3fbe295ecd>`__ 
bool
`is\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a9fbdd3152f79233b68704f3fbe295ecd>`__\ ()
{return dr\_event\_implmented;}

1736 

1737 

1763  void
`fire\_event <../../d6/dad/classTango_1_1Attribute.html#a13234bb32ef355601e45e6e942082873>`__\ (vector<string>
&filt\_names,vector<double> &filt\_vals,DevFailed \*except = NULL);

1764 

1777  void
`remove\_configuration <../../d6/dad/classTango_1_1Attribute.html#afcc46b14e965bc2d0a38e4102b14af64>`__\ ();

1779 

1780 

1786 

1797  template <typename T>

1798  void
`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a1dbbd85b4fab593886300ef5b938e0ef>`__\ (const
T &new\_min\_alarm);

1799 

1800  void
`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a1dbbd85b4fab593886300ef5b938e0ef>`__\ (char
\*new\_min\_alarm);

1801  void
`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a1dbbd85b4fab593886300ef5b938e0ef>`__\ (const
char \*new\_min\_alarm);

1802 

1810  template <typename T>

1811  void
`get\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a19e43a51a3101a12abc55eeac83a431e>`__\ (T
&min\_al);

1812 

1823  template <typename T>

1824  void
`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#aef913d2fcf95bff30086b34b8f827234>`__\ (const
T &new\_max\_alarm);

1825 

1826  void
`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#aef913d2fcf95bff30086b34b8f827234>`__\ (char
\*new\_max\_alarm);

1827  void
`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#aef913d2fcf95bff30086b34b8f827234>`__\ (const
char \*new\_max\_alarm);

1828 

1836  template <typename T>

1837  void
`get\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#ab4214177cfddd2acfe4c98e6fcb7b563>`__\ (T
&max\_al);

1838 

1849  template <typename T>

1850  void
`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#ab2eb29b7e13a95246eb1b3211ba12d8c>`__\ (const
T &new\_min\_warning);

1851 

1852  void
`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#ab2eb29b7e13a95246eb1b3211ba12d8c>`__\ (char
\*new\_min\_warning);

1853  void
`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#ab2eb29b7e13a95246eb1b3211ba12d8c>`__\ (const
char \*new\_min\_warning);

1854 

1862  template <typename T>

1863  void
`get\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#a670533e5338107f959d7cf01f3e88a5a>`__\ (T
&min\_war);

1864 

1875  template <typename T>

1876  void
`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a54eeed935c4a62f2d4774e186201adac>`__\ (const
T &new\_max\_warning);

1877 

1878  void
`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a54eeed935c4a62f2d4774e186201adac>`__\ (char
\*new\_max\_warning);

1879  void
`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a54eeed935c4a62f2d4774e186201adac>`__\ (const
char \*new\_max\_warning);

1880 

1888  template <typename T>

1889  void
`get\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2246b2de4a4cb23031975fac5a17ea66>`__\ (T
&max\_war);

1891 

1892 

1893 protected:

1894 

`1900 <../../d6/dad/classTango_1_1Attribute.html#af64882f2e722896cb9e0f66ab3a958bd>`__ 
bool
`value\_flag <../../d6/dad/classTango_1_1Attribute.html#af64882f2e722896cb9e0f66ab3a958bd>`__;

`1904 <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__ 
Tango::TimeVal
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__;

`1908 <../../d6/dad/classTango_1_1Attribute.html#a481ba9ea923659f40de010804c3600ec>`__ 
bool
`date <../../d6/dad/classTango_1_1Attribute.html#a481ba9ea923659f40de010804c3600ec>`__;

`1912 <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__ 
Tango::AttrQuality
`quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__;

1913 

`1917 <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__ 
string
`name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__;

`1921 <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__ 
Tango::AttrWriteType
`writable <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__;

`1929 <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__ 
long
`data\_type <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__;

`1935 <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__ 
Tango::AttrDataFormat
`data\_format <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__;

`1941 <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__ 
long
`max\_x <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__;

`1947 <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__ 
long
`max\_y <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__;

`1951 <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__ 
string
`label <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__;

`1955 <../../d6/dad/classTango_1_1Attribute.html#a87011b5bf8737c50ac9dcd03d2635223>`__ 
string
`description <../../d6/dad/classTango_1_1Attribute.html#a87011b5bf8737c50ac9dcd03d2635223>`__;

`1959 <../../d6/dad/classTango_1_1Attribute.html#ab44a3c2cbd59c9318dc252472db94b01>`__ 
string
`unit <../../d6/dad/classTango_1_1Attribute.html#ab44a3c2cbd59c9318dc252472db94b01>`__;

`1963 <../../d6/dad/classTango_1_1Attribute.html#ac6aa3f2dcfb375b83d8dc8a13fb3d34f>`__ 
string
`standard\_unit <../../d6/dad/classTango_1_1Attribute.html#ac6aa3f2dcfb375b83d8dc8a13fb3d34f>`__;

`1967 <../../d6/dad/classTango_1_1Attribute.html#a53ee065e6d6ad2bee616b90337787b8d>`__ 
string
`display\_unit <../../d6/dad/classTango_1_1Attribute.html#a53ee065e6d6ad2bee616b90337787b8d>`__;

`1973 <../../d6/dad/classTango_1_1Attribute.html#aa588971cf9c8a26a836c94c15de4d259>`__ 
string
`format <../../d6/dad/classTango_1_1Attribute.html#aa588971cf9c8a26a836c94c15de4d259>`__;

`1977 <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__ 
string
`writable\_attr\_name <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__;

`1981 <../../d6/dad/classTango_1_1Attribute.html#ae425ecb760c55a0be7880d8a0850a35e>`__ 
string
`min\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ae425ecb760c55a0be7880d8a0850a35e>`__;

`1985 <../../d6/dad/classTango_1_1Attribute.html#ac28534e7605d151d45d1807399104476>`__ 
string
`max\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ac28534e7605d151d45d1807399104476>`__;

`1989 <../../d6/dad/classTango_1_1Attribute.html#a5b92008335e38687b1e019b7e4f5cf89>`__ 
string
`min\_value\_str <../../d6/dad/classTango_1_1Attribute.html#a5b92008335e38687b1e019b7e4f5cf89>`__;

`1993 <../../d6/dad/classTango_1_1Attribute.html#ae09dac6e118991d347cf555e97790ebf>`__ 
string
`max\_value\_str <../../d6/dad/classTango_1_1Attribute.html#ae09dac6e118991d347cf555e97790ebf>`__;

`1997 <../../d6/dad/classTango_1_1Attribute.html#aa8dae56da901c89854855281f80585b4>`__ 
string
`min\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#aa8dae56da901c89854855281f80585b4>`__;

`2001 <../../d6/dad/classTango_1_1Attribute.html#ae7508d4f6560a228e9969e2110194d80>`__ 
string
`max\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#ae7508d4f6560a228e9969e2110194d80>`__;

`2005 <../../d6/dad/classTango_1_1Attribute.html#a1805001ddd756d0a930d839a444bbd1c>`__ 
string
`delta\_val\_str <../../d6/dad/classTango_1_1Attribute.html#a1805001ddd756d0a930d839a444bbd1c>`__;

`2009 <../../d6/dad/classTango_1_1Attribute.html#a33c34a6c11460c540c7b62cd9133540c>`__ 
string
`delta\_t\_str <../../d6/dad/classTango_1_1Attribute.html#a33c34a6c11460c540c7b62cd9133540c>`__;

`2013 <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__ 
long
`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__;

`2017 <../../d6/dad/classTango_1_1Attribute.html#a8b02f5316431ee1e3de6a8061789feb0>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a8b02f5316431ee1e3de6a8061789feb0>`__;

`2021 <../../d6/dad/classTango_1_1Attribute.html#af0644d2b606ef6dfaf88431c535c726f>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`max\_alarm <../../d6/dad/classTango_1_1Attribute.html#af0644d2b606ef6dfaf88431c535c726f>`__;

`2025 <../../d6/dad/classTango_1_1Attribute.html#a6f6121a07bb9790577d70a1ab9e3d0a5>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`min\_warning <../../d6/dad/classTango_1_1Attribute.html#a6f6121a07bb9790577d70a1ab9e3d0a5>`__;

`2029 <../../d6/dad/classTango_1_1Attribute.html#aeef1c0723b72bc2386cc0d62aea14e44>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`max\_warning <../../d6/dad/classTango_1_1Attribute.html#aeef1c0723b72bc2386cc0d62aea14e44>`__;

`2033 <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__;

`2037 <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__;

`2041 <../../d6/dad/classTango_1_1Attribute.html#ad6a7bc5a3e07635c9d94ec686d508181>`__ 
`Tango::Attr\_Value <../../dd/d79/unionTango_1_1__Attr__Value.html>`__
`value <../../d6/dad/classTango_1_1Attribute.html#ad6a7bc5a3e07635c9d94ec686d508181>`__;

`2045 <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__ 
long
`data\_size <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__;

`2049 <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__ 
bool
`check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__;

`2053 <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__ 
bool
`check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__;

`2059 <../../d6/dad/classTango_1_1Attribute.html#aad3e96f12716d9f1e3df93c85902cfb9>`__ 
`Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
`delta\_val <../../d6/dad/classTango_1_1Attribute.html#aad3e96f12716d9f1e3df93c85902cfb9>`__;

`2065 <../../d6/dad/classTango_1_1Attribute.html#a0f7226cbcd313093428a764167ef5b8d>`__ 
long
`delta\_t <../../d6/dad/classTango_1_1Attribute.html#a0f7226cbcd313093428a764167ef5b8d>`__;

`2069 <../../d6/dad/classTango_1_1Attribute.html#a748e164f49ffe7f85132f1380cd6835e>`__ 
vector<string>
`enum\_labels <../../d6/dad/classTango_1_1Attribute.html#a748e164f49ffe7f85132f1380cd6835e>`__;

2071 

2072 public:

2074 

2075  template <typename T>

2076  void
`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__\ (T
\*,long x = 1,long y = 0,bool release = false);

2077 

2078  template <typename T>

2079  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (T
\*,time\_t,Tango::AttrQuality,long x=1,long y=0,bool rel=false);

2080 #ifdef \_TG\_WINDOWS\_

2081  template <typename T>

2082  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (T
\*,struct \_timeb &,Tango::AttrQuality,long x=1,long y=1,bool
rel=false);

2083 #else

2084  template <typename T>

2085  void
`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__\ (T
\*,struct timeval &,Tango::AttrQuality,long x=1,long y=1,bool
rel=false);

2086 #endif

2087 

2088 //

2089 // methods not usable for the external world (outside the lib)

2090 //

2091 

2092  void
`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (Tango::AttributeConfig
&);

2093  void
`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (Tango::AttributeConfig\_2
&);

2094  void
`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (Tango::AttributeConfig\_3
&);

2095  void
`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (Tango::AttributeConfig\_5
&);

2096 

2097  void
`set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__\ (const
Tango::AttributeConfig &,string &,bool,vector<AttPropDb> &);

2098  void
`set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__\ (const
Tango::AttributeConfig\_3 &,string &,bool,vector<AttPropDb> &);

2099  void
`set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__\ (const
Tango::AttributeConfig\_5 &,string &,bool,vector<AttPropDb> &);

2100 

2101  void upd\_database(vector<AttPropDb> &);

2102 

2103  void get\_prop(Tango::AttributeConfig\_3 &\_a)
{`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (\_a);}

2104  void get\_prop(Tango::AttributeConfig\_5 &\_a)
{`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__\ (\_a);}

2105 

2106  vector<string> &get\_enum\_labels() {return
`enum\_labels <../../d6/dad/classTango_1_1Attribute.html#a748e164f49ffe7f85132f1380cd6835e>`__;}

2107 

2108  template <typename T>

2109  void set\_upd\_properties(const T &\_c)
{set\_upd\_properties(\_c,d\_name);}

2110  template <typename T>

2111  void set\_upd\_properties(const T &,string &,bool f\_s=false);

2112 

2113  virtual void set\_rvalue() {};

2114  void delete\_seq();

2115  bool check\_scalar\_wattribute();

2116 

2117  void wanted\_date(bool flag) {date = flag;}

2118  bool get\_wanted\_date() {return
`date <../../d6/dad/classTango_1_1Attribute.html#a481ba9ea923659f40de010804c3600ec>`__;}

2119 

2120  Tango::TimeVal &get\_when() {return
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__;}

2121  void set\_time();

2122 

2123  Tango::DevVarShortArray \*get\_short\_value() {return
value.\ `sh\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a8bb5aab68dd90d797052ad498b62e24a>`__;}

2124  Tango::DevVarLongArray \*get\_long\_value() {return
value.\ `lg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa9c65836e2531bf1075347f5ba46c9ff>`__;}

2125  Tango::DevVarDoubleArray \*get\_double\_value() {return
value.\ `db\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ae195860e9cb410e5313e430823065a15>`__;}

2126  Tango::DevVarStringArray \*get\_string\_value() {return
value.\ `str\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a34d1df6474b4012138c5e779648ebd2e>`__;}

2127  Tango::DevVarFloatArray \*get\_float\_value() {return
value.\ `fl\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa29b18a24b1791dc8cd9791652295aa0>`__;}

2128  Tango::DevVarBooleanArray \*get\_boolean\_value() {return
value.\ `boo\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a09041dfdd3ceb12b9d5d2ff6d7672e82>`__;}

2129  Tango::DevVarUShortArray \*get\_ushort\_value() {return
value.\ `ush\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ab3b3cc1b40eeefde2c9d0ec7f66682de>`__;}

2130  Tango::DevVarCharArray \*get\_uchar\_value() {return
value.\ `cha\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#af2dedf11deecc24f0355dceeaf7d39eb>`__;}

2131  Tango::DevVarLong64Array \*get\_long64\_value() {return
value.\ `lg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aaeb8af715b7b6420a3492434f0be6ebc>`__;}

2132  Tango::DevVarULongArray \*get\_ulong\_value() {return
value.\ `ulg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aefdf14649ed87e9ba3cd496344a2d229>`__;}

2133  Tango::DevVarULong64Array \*get\_ulong64\_value() {return
value.\ `ulg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ad85da44052184f148e039c6995c54fc5>`__;}

2134  Tango::DevVarStateArray \*get\_state\_value() {return
value.\ `state\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#abe5b239bc92ac7ed1bce31a3fb4cfe7f>`__;}

2135  Tango::DevVarEncodedArray \*get\_encoded\_value() {return
value.\ `enc\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a9f2c26b86b6f3bb3e6af164185aca107>`__;}

2136 

2137  Tango::DevLong64 \*get\_tmp\_scalar\_long64() {return tmp\_lo64;}

2138  Tango::DevULong \*get\_tmp\_scalar\_ulong() {return tmp\_ulo;}

2139  Tango::DevULong64 \*get\_tmp\_scalar\_ulong64() {return
tmp\_ulo64;}

2140  Tango::DevState \*get\_tmp\_scalar\_state() {return tmp\_state;}

2141 

2142  void add\_write\_value(Tango::DevVarShortArray \*);

2143  void add\_write\_value(Tango::DevVarLongArray \*);

2144  void add\_write\_value(Tango::DevVarDoubleArray \*);

2145  void add\_write\_value(Tango::DevVarStringArray \*);

2146  void add\_write\_value(Tango::DevVarFloatArray \*);

2147  void add\_write\_value(Tango::DevVarBooleanArray \*);

2148  void add\_write\_value(Tango::DevVarUShortArray \*);

2149  void add\_write\_value(Tango::DevVarCharArray \*);

2150  void add\_write\_value(Tango::DevVarLong64Array \*);

2151  void add\_write\_value(Tango::DevVarULongArray \*);

2152  void add\_write\_value(Tango::DevVarULong64Array \*);

2153  void add\_write\_value(Tango::DevVarStateArray \*);

2154  void add\_write\_value(Tango::DevEncoded &);

2155 

2156  unsigned long get\_name\_size() {return name\_size;}

2157  string &get\_name\_lower() {return name\_lower;}

2158  void set\_value\_flag(bool val) {value\_flag = val;}

2159  bool get\_value\_flag() {return
`value\_flag <../../d6/dad/classTango_1_1Attribute.html#af64882f2e722896cb9e0f66ab3a958bd>`__;}

2160  DispLevel get\_disp\_level() {return disp\_level;}

2161 

2162  omni\_mutex \*get\_attr\_mutex() {return &(ext->attr\_mutex);}

2163  omni\_mutex \*get\_user\_attr\_mutex() {return
ext->user\_attr\_mutex;}

2164 

2165  bool change\_event\_subscribed();

2166  bool periodic\_event\_subscribed();

2167  bool archive\_event\_subscribed();

2168  bool quality\_event\_subscribed();

2169  bool user\_event\_subscribed();

2170  bool attr\_conf\_event\_subscribed();

2171  bool data\_ready\_event\_subscribed();

2172 

2173  bool use\_notifd\_event() {return notifd\_event;}

2174  bool use\_zmq\_event() {return zmq\_event;}

2175 

2176 //

2177 // Warning, methods below are not protected !

2178 //

2179 

2180  void set\_change\_event\_sub(int);

2181  time\_t get\_change5\_event\_sub() {return
event\_change5\_subscription;}

2182 

2183  void set\_periodic\_event\_sub(int);

2184  time\_t get\_periodic5\_event\_sub() {return
event\_periodic5\_subscription;}

2185 

2186  void set\_archive\_event\_sub(int);

2187  time\_t get\_archive5\_event\_sub() {return
event\_archive5\_subscription;}

2188 

2189  void set\_quality\_event\_sub()
{event\_quality\_subscription=time(NULL);}

2190  time\_t get\_quality\_event\_sub() {return
event\_quality\_subscription;}

2191 

2192  void set\_user\_event\_sub(int);

2193  time\_t get\_user5\_event\_sub() {return
event\_user5\_subscription;}

2194 

2195  void set\_att\_conf\_event\_sub(int);

2196 

2197  void set\_data\_ready\_event\_sub()
{event\_data\_ready\_subscription=time(NULL);}

2198  time\_t get\_data\_ready\_event\_sub() {return
event\_data\_ready\_subscription;}

2199 

2200 // End of warning

2201 

2202  void set\_use\_notifd\_event() {notifd\_event = true;}

2203  void set\_use\_zmq\_event() {zmq\_event = true;}

2204 

2205  long get\_attr\_idx() {return idx\_in\_attr;}

2206  void set\_attr\_idx(long new\_idx) {idx\_in\_attr=new\_idx;}

2207  DeviceImpl \*get\_att\_device();

2208 

2209  template <typename T> void Attribute\_2\_AttributeValue\_base(T
\*,\ `Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*);

2210  void Attribute\_2\_AttributeValue(Tango::AttributeValue\_3
\*,DeviceImpl \*);

2211  void Attribute\_2\_AttributeValue(Tango::AttributeValue\_4
\*,DeviceImpl \*);

2212  void Attribute\_2\_AttributeValue(Tango::AttributeValue\_5
\*,DeviceImpl \*);

2213 

2214  template <typename T,typename V> void
AttrValUnion\_fake\_copy(const T \*,V \*);

2215  template <typename T> void AttrValUnion\_2\_Any(const T
\*,CORBA::Any &);

2216 

2217  void AttributeValue\_4\_2\_AttributeValue\_3(const
Tango::AttributeValue\_4 \*,Tango::AttributeValue\_3 \*);

2218  void AttributeValue\_5\_2\_AttributeValue\_3(const
Tango::AttributeValue\_5 \*,Tango::AttributeValue\_3 \*);

2219 

2220  void AttributeValue\_3\_2\_AttributeValue\_4(const
Tango::AttributeValue\_3 \*,Tango::AttributeValue\_4 \*);

2221  void AttributeValue\_5\_2\_AttributeValue\_4(const
Tango::AttributeValue\_5 \*,Tango::AttributeValue\_4 \*);

2222 

2223  void AttributeValue\_3\_2\_AttributeValue\_5(const
Tango::AttributeValue\_3 \*,Tango::AttributeValue\_5 \*);

2224  void AttributeValue\_4\_2\_AttributeValue\_5(const
Tango::AttributeValue\_4 \*,Tango::AttributeValue\_5 \*);

2225 

2226  void AttributeConfig\_5\_2\_AttributeConfig\_3(const
Tango::AttributeConfig\_5 &,Tango::AttributeConfig\_3 &);

2227  void AttributeConfig\_3\_2\_AttributeConfig\_5(const
Tango::AttributeConfig\_3 &,Tango::AttributeConfig\_5 &);

2228 

2229  void AttributeConfig\_5\_2\_AttributeConfig\_3(const
Tango::AttributeConfig\_3 &,Tango::AttributeConfig\_3 &) {} // Templ

2230  void AttributeConfig\_3\_2\_AttributeConfig\_5(const
Tango::AttributeConfig\_5 &,Tango::AttributeConfig\_5 &) {} // Templ

2231 

2232  void set\_mcast\_event(vector<string> &vs)
{mcast\_event.clear();copy(vs.begin(),vs.end(),back\_inserter(mcast\_event));}

2233 

2234  bool
`is\_polled <../../d6/dad/classTango_1_1Attribute.html#a1ca81f8abd78d54ce8540ff0ccd3c6c1>`__\ (DeviceImpl
\*);

2235  void set\_polling\_period(long per) {poll\_period = per;}

2236 

2237  void save\_alarm\_quality()
{old\_quality=`quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__;old\_alarm=alarm;}

2238 

2239  bool is\_startup\_exception() {return check\_startup\_exceptions;}

2240  void throw\_startup\_exception(const char\*);

2241 

2242  bool is\_mem\_exception() {return att\_mem\_exception;}

2243  virtual bool is\_fwd\_att() {return false;}

2244 

2245  void set\_client\_lib(int,string &);

2246  vector<int>
&get\_client\_lib(\ `EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
\_et) {return client\_lib[\_et];}

2247  void remove\_client\_lib(int,const string &);

2248 

2249  void add\_config\_5\_specific(AttributeConfig\_5 &);

2250  void add\_startup\_exception(string,const DevFailed &);

2251 

2252  void fire\_error\_periodic\_event(DevFailed \*);

2253 

2254 #ifndef TANGO\_HAS\_LOG4TANGO

2255  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&,\ `Attribute <../../d6/dad/classTango_1_1Attribute.html#ad92e54beedf8d29d088c2f6d5d70153f>`__
&);

2256 #endif // TANGO\_HAS\_LOG4TANGO

`2257 <../../d6/dad/classTango_1_1Attribute.html#a113a5beda9b94ad235073dd9cfd3504a>`__ 
friend class
`EventSupplier <../../d6/dad/classTango_1_1Attribute.html#a113a5beda9b94ad235073dd9cfd3504a>`__;

`2258 <../../d6/dad/classTango_1_1Attribute.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__ 
friend class
`ZmqEventSupplier <../../d6/dad/classTango_1_1Attribute.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__;

`2259 <../../d6/dad/classTango_1_1Attribute.html#ac4a83d6bf023caf5fb2002b96e33cef9>`__ 
friend class
`DServer <../../d6/dad/classTango_1_1Attribute.html#ac4a83d6bf023caf5fb2002b96e33cef9>`__;

2260 

2261 private:

2262  void set\_data\_size();

2263  void throw\_min\_max\_value(string &,string
&,\ `MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__);

2264  void log\_quality();

2265 

2266  inline void init\_string\_prop(vector<AttrProperty> &prop\_list,
string& attr, const char\* attr\_name)

2267  {

2268  try

2269  {

2270  attr = get\_attr\_value(prop\_list, attr\_name);

2271  }

2272  catch (DevFailed &e)

2273  {

2274  add\_startup\_exception(attr\_name,e);

2275  }

2276  }

2277 

2278  inline bool is\_value\_set(const char\* attr\_name)

2279  {

2280  if (!strcmp(attr\_name,"min\_alarm"))

2281  return alarm\_conf.test(max\_level);

2282  else if (!strcmp(attr\_name,"max\_alarm"))

2283  return alarm\_conf.test(min\_level);

2284  else if (!strcmp(attr\_name,"min\_value"))

2285  return
`check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__;

2286  else if (!strcmp(attr\_name,"max\_value"))

2287  return
`check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__;

2288  else if (!strcmp(attr\_name,"min\_warning"))

2289  return alarm\_conf.test(max\_warn);

2290  else if (!strcmp(attr\_name,"max\_warning"))

2291  return alarm\_conf.test(min\_warn);

2292  else

2293  return false;

2294  }

2295 

2296  bool init\_check\_val\_prop(vector<AttrProperty> &,string &,const
char \*,string
&,\ `Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
&,\ `Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
&);

2297 

2298  unsigned long name\_size;

2299  string name\_lower;

2300  DevEncoded enc\_help;

2301 

2302 protected:

2304 

2305 //

2306 // The extension class

2307 //

2308 

2309  class AttributeExt

2310  {

2311  public:

2312  AttributeExt() : user\_attr\_mutex(NULL) {}

2313 

2314  omni\_mutex attr\_mutex; // Mutex to protect the attributes shared
data buffer

2315  omni\_mutex \*user\_attr\_mutex; // Ptr for user mutex in case he
manages exclusion

2316  };

2317 

2318  AttributeExt \*ext;

2319 

2320  virtual void init\_opt\_prop(vector<AttrProperty> &,string &);

2321  virtual void init\_event\_prop(vector<AttrProperty> &,const string
&,Attr &);

2322  void init\_enum\_prop(vector<AttrProperty> &);

2323  string &get\_attr\_value(vector<AttrProperty> &,const char \*);

2324  long get\_lg\_attr\_value(vector<AttrProperty> &,const char \*);

2325  virtual bool check\_rds\_alarm() {return false;}

2326  bool check\_level\_alarm();

2327  bool check\_warn\_alarm();

2328  void
upd\_att\_prop\_db(\ `Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
&,const char \*);

2329  DeviceClass \*get\_att\_device\_class(string &);

2330 

2331  template <typename T>

2332  void check\_hard\_coded\_properties(const T &);

2333 

2334  template <typename T>

2335  void set\_hard\_coded\_properties(const T &);

2336 

2337  void check\_hard\_coded(const AttributeConfig\_5 &);

2338 

2339  void delete\_startup\_exception(string,string str=string("None"));

2340 

2341  void throw\_hard\_coded\_prop(const char \*);

2342  void throw\_err\_format(const char \*,const string &,const char
\*);

2343  void throw\_incoherent\_val\_err(const char \*,const char \*,const
string &,const char \*);

2344  void throw\_err\_data\_type(const char \*,const string &,const
char \*);

2345  void validate\_change\_properties(const string &,const char
\*,string &,vector<double> &,vector<bool> &,vector<bool> &);

2346  void validate\_change\_properties(const string &,const char
\*,string &,vector<double> &);

2347  bool prop\_in\_list(const char \*,string
&,size\_t,vector<AttrProperty> &);

2348  void set\_format\_notspec();

2349  bool is\_format\_notspec(const char \*);

2350  void def\_format\_in\_dbdatum(DbDatum &);

2351 

2352  void avns\_in\_db(const char \*,string &);

2353  void
avns\_in\_att(\ `prop\_type <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__);

2354 

2355  void convert\_prop\_value(const char \*,string
&,\ `Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__
&,const string &);

2356 

2357  void check\_range\_coherency(string &);

2358  void db\_access(struct CheckOneStrProp &,string &);

2359  void set\_prop\_5\_specific(const AttributeConfig\_5 &,string
&,bool,vector<AttPropDb> &);

2360  void build\_check\_enum\_labels(string &);

2361 

2362  void set\_one\_str\_prop(const char \*,const CORBA::String\_member
&,string &,vector<AttPropDb> &,vector<AttrProperty>
&,vector<AttrProperty> &,const char \*);

2363  void set\_one\_alarm\_prop(const char \*,const
CORBA::String\_member &,string
&,\ `Tango::Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__
&, vector<AttPropDb> &,vector<AttrProperty> &,vector<AttrProperty>
&,bool &);

2364  void set\_rds\_prop(const AttributeAlarm &,string
&,vector<AttPropDb> &,vector<AttrProperty> &,vector<AttrProperty> &);

2365  void set\_rds\_prop\_val(const AttributeAlarm &,string
&,vector<AttrProperty> &,vector<AttrProperty> &);

2366  void set\_rds\_prop\_db(const AttributeAlarm &,vector<AttPropDb>
&,vector<AttrProperty> &,vector<AttrProperty> &);

2367  void set\_one\_event\_prop(const char \*,const
CORBA::String\_member &,double \*,vector<AttPropDb>
&,vector<AttrProperty> &,vector<AttrProperty> &);

2368  void event\_prop\_db\_xxx(vector<double> &,vector<double>
&,vector<AttPropDb> &,AttPropDb &);

2369  void set\_one\_event\_period(const char \*,const
CORBA::String\_member &,int &,const int &,vector<AttPropDb>
&,vector<AttrProperty> &,vector<AttrProperty> &);

2370 

2371 

2372  bitset<numFlags> alarm\_conf;

2373  bitset<numFlags> alarm;

2374 

2375  long dim\_x;

2376  long dim\_y;

2377 

2378  Tango::DevShort tmp\_sh[2];

2379  Tango::DevLong tmp\_lo[2];

2380  Tango::DevFloat tmp\_fl[2];

2381  Tango::DevDouble tmp\_db[2];

2382  Tango::DevString tmp\_str[2];

2383  Tango::DevUShort tmp\_ush[2];

2384  Tango::DevBoolean tmp\_boo[2];

2385  Tango::DevUChar tmp\_cha[2];

2386  Tango::DevEncoded tmp\_enc[2];

2387 

2388  vector<AttrProperty>::iterator pos\_end;

2389 

2390  int enum\_nb; // For enum attribute

2391  short \*loc\_enum\_ptr; // For enum attribute

2392 

2393 //

2394 // Ported from the extension class

2395 //

2396 

2397  Tango::DispLevel disp\_level; // Display level

2398  long poll\_period; // Polling period

2399  double rel\_change[2]; // Delta for relative change events in %

2400  double abs\_change[2]; // Delta for absolute change events

2401  double archive\_rel\_change[2]; // Delta for relative archive
change events in %

2402  double archive\_abs\_change[2]; // Delta for absolute change
events

2403  int event\_period; // Delta for periodic events in ms

2404  int archive\_period; // Delta for archive periodic events in ms

2405  double last\_periodic; // Last time a periodic event was detected

2406  double archive\_last\_periodic; // Last time an archive periodic
event was detected

2407  long periodic\_counter; // Number of periodic events sent so far

2408  long archive\_periodic\_counter; // Number of periodic events sent
so far

2409 
`LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__
prev\_change\_event; // Last change attribute

2410 
`LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__
prev\_quality\_event; // Last quality attribute

2411 
`LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__
prev\_archive\_event; // Last archive attribute

2412 

2413  time\_t event\_change3\_subscription; // Last time() a
subscription was made

2414  time\_t event\_change4\_subscription;

2415  time\_t event\_change5\_subscription;

2416  time\_t event\_quality\_subscription; // Last time() a
subscription was made

2417  time\_t event\_periodic3\_subscription; // Last time() a
subscription was made

2418  time\_t event\_periodic4\_subscription;

2419  time\_t event\_periodic5\_subscription;

2420  time\_t event\_archive3\_subscription; // Last time() a
subscription was made

2421  time\_t event\_archive4\_subscription;

2422  time\_t event\_archive5\_subscription;

2423  time\_t event\_user3\_subscription; // Last time() a subscription
was made

2424  time\_t event\_user4\_subscription;

2425  time\_t event\_user5\_subscription;

2426  time\_t event\_attr\_conf\_subscription; // Last time() a
subscription was made

2427  time\_t event\_attr\_conf5\_subscription; // Last time() a
subscription was made

2428  time\_t event\_data\_ready\_subscription; // Last time() a
subscription was made

2429 

2430  double archive\_last\_event; // Last time an archive event was
detected (periodic or not)

2431  long idx\_in\_attr; // Index in MultiClassAttribute vector

2432  string d\_name; // The device name

2433  DeviceImpl \*dev; // The device object

2434  bool change\_event\_implmented; // Flag true if a manual fire
change event is implemented.

2435  bool archive\_event\_implmented; // Flag true if a manual fire
archive event is implemented.

2436  bool check\_change\_event\_criteria; // True if change event
criteria should be checked when sending the event

2437  bool check\_archive\_event\_criteria; // True if change event
criteria should be checked when sending the event

2438  Tango::DevLong64 tmp\_lo64[2];

2439  Tango::DevULong tmp\_ulo[2];

2440  Tango::DevULong64 tmp\_ulo64[2];

2441  Tango::DevState tmp\_state[2];

2442 
`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__
attr\_serial\_model; // Flag for attribute serialization model

2443  bool dr\_event\_implmented; // Flag true if fire data ready event
is implemented

2444  bool scalar\_str\_attr\_release; // Need memory freeing (scalar
string attr, R/W att)

2445  bool notifd\_event; // Set to true if event required using notifd

2446  bool zmq\_event; // Set to true if event required using ZMQ

2447  vector<string> mcast\_event; // In case of multicasting used for
event transport

2448  AttrQuality old\_quality; // Previous attribute quality

2449  bitset<numFlags> old\_alarm; // Previous attribute alarm

2450  map<string,const DevFailed> startup\_exceptions; // Map containing
exceptions related to attribute configuration raised during the server
startup sequence

2451  bool check\_startup\_exceptions; // Flag set to true if there is
at least one exception in startup\_exceptions map

2452  bool startup\_exceptions\_clear; // Flag set to true when the
cause for the device startup exceptions has been fixed

2453  bool att\_mem\_exception; // Flag set to true if the attribute is
writable and

2454  // memorized and if it failed at init

2455  vector<int>
client\_lib[`numEventType <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__\ ];
// Clients lib used (for event sending and compat)

2456 };

2457 

2458 //

2459 // Some inline methods

2460 //

2461 

2462 //+------------------------------------------------------------------------------------------------------------------

2463 //

2464 // method :

2465 // Attribute::throw\_hard\_coded\_prop

2466 //

2467 // description :

2468 // Throw a "Hard coded properties can't be changed" exception

2469 //

2470 // args:

2471 // in :

2472 // - prop\_name : The name of the property which should be modified

2473 //

2474 //--------------------------------------------------------------------------------------------------------------------

2475 

2476 inline void Attribute::throw\_hard\_coded\_prop(const char
\*prop\_name)

2477 {

2478  TangoSys\_OMemStream desc;

2479  desc << "Attribute property " << prop\_name << " is not changeable
at run time" << ends;

2480 

2481 
`Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ ((const
char
\*)\ `API\_AttrNotAllowed <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__,desc.str(),

2482  (const char \*)"Attribute::check\_hard\_coded\_properties()");

2483 }

2484 

2485 //+-------------------------------------------------------------------------------------------------------------------

2486 //

2487 // method :

2488 // Attribute::throw\_startup\_exception

2489 //

2490 // description :

2491 // Throw a startup exception

2492 //

2493 // args:

2494 // in :

2495 // - origin : The method name where this method is called from

2496 //

2497 //-------------------------------------------------------------------------------------------------------------------

2498 

2499 inline void Attribute::throw\_startup\_exception(const char\*
origin)

2500 {

2501  if(check\_startup\_exceptions)

2502  {

2503  string err\_msg;

2504  vector<string> event\_exceptions;

2505  vector<string> opt\_exceptions;

2506  for(map<string,const DevFailed>::iterator it =
startup\_exceptions.begin(); it != startup\_exceptions.end(); ++it)

2507  {

2508  if(it->first == "event\_period" \|\| it->first ==
"archive\_period" \|\| it->first == "rel\_change" \|\| it->first ==
"abs\_change" \|\| it->first == "archive\_rel\_change" \|\| it->first ==
"archive\_abs\_change")

2509  event\_exceptions.push\_back(it->first);

2510  else

2511  opt\_exceptions.push\_back(it->first);

2512  for(CORBA::ULong i = 0 ; i < it->second.errors.length(); i++)

2513  {

2514  string tmp\_msg = string(it->second.errors[i].desc);

2515  size\_t pos = tmp\_msg.rfind('\\n');

2516  if(pos != string::npos)

2517  tmp\_msg.erase(0,pos+1);

2518  err\_msg += "\\n" + tmp\_msg;

2519  }

2520  }

2521  err\_msg = "\\nDevice " + d\_name + "-> Attribute : " + name +
err\_msg;

2522 

2523  if(event\_exceptions.size() == startup\_exceptions.size())

2524  {

2525  if(event\_exceptions.size() == 1)

2526  err\_msg += "\\nSetting a valid value (also 'NaN', 'Not specified'
and '' - empty string) for any property for this attribute will
automatically bring the above-mentioned property to its library
defaults";

2527  else

2528  err\_msg += "\\nSetting a valid value (also 'NaN', 'Not specified'
and '' - empty string) for any property for this attribute will
automatically bring the above-listed properties to their library
defaults";

2529  err\_msg += "\\nHint : Check also class level attribute
properties";

2530  }

2531  else if(event\_exceptions.empty() == false)

2532  {

2533  if(opt\_exceptions.size() == 1)

2534  err\_msg += "\\nSetting valid value (also 'NaN', 'Not specified'
and '' - empty string) for " + opt\_exceptions[0] + " ";

2535  else

2536  {

2537  err\_msg += "\\nSetting valid values (also 'NaN', 'Not specified'
and '' - empty string) for ";

2538  for(size\_t i = 0; i < opt\_exceptions.size(); i++)

2539  err\_msg += ((i == (opt\_exceptions.size() - 1) && i != 0) ? "and
" : "") + opt\_exceptions[i] + ((i != (opt\_exceptions.size() - 1) && i
!= (opt\_exceptions.size() - 2)) ? "," : "") + " ";

2540  }

2541  err\_msg += "will automatically bring ";

2542  for(size\_t i = 0; i < event\_exceptions.size(); i++)

2543  err\_msg += ((i == (event\_exceptions.size() - 1) && i != 0) ?
"and " : "") + event\_exceptions[i] + ((i != (event\_exceptions.size() -
1) && i != (event\_exceptions.size() - 2)) ? "," : "") + " ";

2544  if(event\_exceptions.size() == 1)

2545  err\_msg += "to its library defaults";

2546  else

2547  err\_msg += "to their library defaults";

2548 

2549  err\_msg += "\\nHint : Check also class level attribute
properties";

2550  }

2551 

2552 
`Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ (`API\_AttrConfig <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__,err\_msg,origin);

2553  }

2554 }

2555 

2556 //+------------------------------------------------------------------------------------------------------------------

2557 //

2558 // method :

2559 // Attribute::prop\_in\_list

2560 //

2561 // description :

2562 // Search for a property in a list

2563 //

2564 // args:

2565 // in :

2566 // - prop\_name : The property name

2567 // - list\_size : The size list

2568 // - list : The list

2569 // out :

2570 // - prop\_str : String initialized with prop. value (if found)

2571 //

2572 //------------------------------------------------------------------------------------------------------------------

2573 

2574 

2575 inline bool Attribute::prop\_in\_list(const char
\*prop\_name,string &prop\_str,size\_t list\_size,vector<AttrProperty>
&list)

2576 {

2577  bool ret = false;

2578 

2579  if (list\_size != 0)

2580  {

2581  size\_t i;

2582  for (i = 0;i < list\_size;i++)

2583  {

2584  if
(list[i].\ `get\_name <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__\ ()
== prop\_name)

2585  break;

2586  }

2587  if (i != list\_size)

2588  {

2589  prop\_str = list[i].get\_value();

2590  ret = true;

2591  }

2592  }

2593 

2594  return ret;

2595 }

2596 

2597 inline void Attribute::set\_change\_event\_sub(int cl\_lib)

2598 {

2599  switch (cl\_lib)

2600  {

2601  case 5:

2602  event\_change5\_subscription = time(NULL);

2603  break;

2604 

2605  case 4:

2606  event\_change4\_subscription = time(NULL);

2607  break;

2608 

2609  default:

2610  event\_change3\_subscription = time(NULL);

2611  break;

2612  }

2613 }

2614 

2615 

2616 inline void Attribute::set\_periodic\_event\_sub(int cl\_lib)

2617 {

2618  switch (cl\_lib)

2619  {

2620  case 5:

2621  event\_periodic5\_subscription = time(NULL);

2622  break;

2623 

2624  case 4:

2625  event\_periodic4\_subscription = time(NULL);

2626  break;

2627 

2628  default:

2629  event\_periodic3\_subscription = time(NULL);

2630  break;

2631  }

2632 }

2633 

2634 

2635 inline void Attribute::set\_archive\_event\_sub(int cl\_lib)

2636 {

2637  switch (cl\_lib)

2638  {

2639  case 5:

2640  event\_archive5\_subscription = time(NULL);

2641  break;

2642 

2643  case 4:

2644  event\_archive4\_subscription = time(NULL);

2645  break;

2646 

2647  default:

2648  event\_archive3\_subscription = time(NULL);

2649  break;

2650  }

2651 }

2652 

2653 

2654 inline void Attribute::set\_user\_event\_sub(int cl\_lib)

2655 {

2656  switch (cl\_lib)

2657  {

2658  case 5:

2659  event\_user5\_subscription = time(NULL);

2660  break;

2661 

2662  case 4:

2663  event\_user4\_subscription = time(NULL);

2664  break;

2665 

2666  default:

2667  event\_user3\_subscription = time(NULL);

2668  break;

2669  }

2670 }

2671 

2672 

2673 inline void Attribute::set\_att\_conf\_event\_sub(int cl\_lib)

2674 {

2675  switch (cl\_lib)

2676  {

2677  case 5:

2678  event\_attr\_conf5\_subscription = time(NULL);

2679  break;

2680 

2681  default:

2682  event\_attr\_conf\_subscription = time(NULL);

2683  break;

2684  }

2685 }

2686 

2687 //

2688 // Macro to help coding

2689 //

2690 

`2691 <../../d3/d7c/attribute_8h.html#a05862c978fd6420159002c5979f82e9b>`__ #define
MEM\_STREAM\_2\_CORBA(A,B) \\

2692  if (true) \\

2693  { \\

2694  string s = B.str(); \\

2695  A = CORBA::string\_dup(s.c\_str()); \\

2696  B.str(""); \\

2697  B.clear(); \\

2698  } \\

2699  else \\

2700  (void)0

2701 

2702 //

2703 // Throw exception if pointer is null

2704 //

2705 

`2706 <../../d3/d7c/attribute_8h.html#a86080a0078b929bc35e2d8c044d0a4dd>`__ #define
CHECK\_PTR(A,B) \\

2707  if (A == NULL) \\

2708  { \\

2709  stringstream o; \\

2710  o << "Data pointer for attribute " << B << " is NULL!"; \\

2711 
Except::throw\_exception(API\_AttrOptProp,o.str(),"Attribute::set\_value()");
\\

2712  } \\

2713  else \\

2714  (void)0

2715 

2716 //

2717 // Yet another macros !!

2718 // Arg list : A : The sequence pointer

2719 // B : Index in sequence

2720 // C : Attribute reference

2721 //

2722 

`2723 <../../d3/d7c/attribute_8h.html#a49a84efc29860d9ab37801ffad2161aa>`__ #define
GIVE\_ATT\_MUTEX(A,B,C) \\

2724  if (true) \\

2725  {\\

2726  Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

2727  (tmp\_ptr)->set\_attr\_mutex(C.get\_attr\_mutex()); \\

2728  } \\

2729  else \\

2730  (void)0

2731 

2732 

`2733 <../../d3/d7c/attribute_8h.html#af0f93f7328b3a53b5ecd014d616a92d1>`__ #define
GIVE\_ATT\_MUTEX\_5(A,B,C) \\

2734  if (true) \\

2735  {\\

2736  Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

2737  (tmp\_ptr)->set\_attr\_mutex(C.get\_attr\_mutex()); \\

2738  } \\

2739  else \\

2740  (void)0

2741 

2742 

`2743 <../../d3/d7c/attribute_8h.html#afff88d532747db2961039390b82fea31>`__ #define
GIVE\_USER\_ATT\_MUTEX(A,B,C) \\

2744  if (true) \\

2745  { \\

2746  Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

2747  (tmp\_ptr)->set\_attr\_mutex(C.get\_user\_attr\_mutex()); \\

2748  } \\

2749  else \\

2750  (void)0

2751 

2752 

`2753 <../../d3/d7c/attribute_8h.html#a0a7e572bb744b8fcb4db86c3e740d421>`__ #define
GIVE\_USER\_ATT\_MUTEX\_5(A,B,C) \\

2754  if (true) \\

2755  { \\

2756  Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

2757  (tmp\_ptr)->set\_attr\_mutex(C.get\_user\_attr\_mutex()); \\

2758  } \\

2759  else \\

2760  (void)0

2761 

2762 

2763 //

2764 // Yet another macro !!

2765 // Arg list : A : The sequence pointer

2766 // B : Index in sequence

2767 // C : Attribute reference

2768 //

2769 

`2770 <../../d3/d7c/attribute_8h.html#afc98311131c866e04e8eae8cffabb32c>`__ #define
REL\_ATT\_MUTEX(A,B,C) \\

2771  if (C.get\_attr\_serial\_model() != ATTR\_NO\_SYNC) \\

2772  { \\

2773  Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

2774  (tmp\_ptr)->rel\_attr\_mutex(); \\

2775  } \\

2776  else \\

2777  (void)0

2778 

2779 

`2780 <../../d3/d7c/attribute_8h.html#a3672a37cceae0d096fe1866444aca1f8>`__ #define
REL\_ATT\_MUTEX\_5(A,B,C) \\

2781  if (C.get\_attr\_serial\_model() != ATTR\_NO\_SYNC) \\

2782  { \\

2783  Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

2784  (tmp\_ptr)->rel\_attr\_mutex(); \\

2785  } \\

2786  else \\

2787  (void)0

2788 

2789 

2790 //

2791 // Again a macro for clean pointer delete

2792 //

2793 

`2794 <../../d3/d7c/attribute_8h.html#ad45c5447fa213228e8493458c1770e91>`__ #define
SAFE\_DELETE(ptr) \\

2795  if (release == true) \\

2796  { \\

2797  if (is\_fwd\_att() == true) \\

2798  delete [] ptr; \\

2799  else \\

2800  delete ptr; \\

2801  } \\

2802  else \\

2803  (void)0

2804 

2805 } // End of Tango namespace

2806 

2807 #endif // \_ATTRIBUTE\_H

`Tango::DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__

vector< DbDatum > DbData

**Definition:** dbapi.h:66

`Tango::Attribute::set\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#a48b92dbec415b3f2589456fde7899175>`__

void set\_archive\_event(bool implemented, bool detect=true)

Set a flag to indicate that the server fires archive events manually,
without the polling to be start...

**Definition:** attribute.h:1703

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__

Pipe & operator<<(Pipe &, T &)

`Tango::Attribute::get\_max\_dim\_x <../../d6/dad/classTango_1_1Attribute.html#ae5cd58a02dcf1a799d1261ed5d9c7532>`__

long get\_max\_dim\_x()

Get attribute maximum data size in x dimension.

**Definition:** attribute.h:426

`Tango::MAX\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da2316cc2dfac70c9ca231be7ba37d30d4>`__

**Definition:** attribute.h:137

`Tango::Attribute::EventSupplier <../../d6/dad/classTango_1_1Attribute.html#a113a5beda9b94ad235073dd9cfd3504a>`__

friend class EventSupplier

**Definition:** attribute.h:2257

`Tango::\_Attr\_Value::ulg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aefdf14649ed87e9ba3cd496344a2d229>`__

DevVarULongArray \* ulg\_seq

**Definition:** attribute.h:113

`Tango::\_Attr\_Value <../../dd/d79/unionTango_1_1__Attr__Value.html>`__

**Definition:** attribute.h:102

`Tango::\_Attr\_CheckVal::db <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ad4e0d2ca80dc7bf6d188fa25085dcb7c>`__

double db

**Definition:** attribute.h:92

`Tango::Attribute::data\_format <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__

Tango::AttrDataFormat data\_format

The attribute data format.

**Definition:** attribute.h:1935

`Tango::Attribute::get\_name <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__

string & get\_name()

Get attribute name.

**Definition:** attribute.h:324

`Tango::Attribute::get\_x <../../d6/dad/classTango_1_1Attribute.html#a114b20637933d5a49c6dc7f7fbcb27f4>`__

long get\_x()

Get attribute data size in x dimension.

**Definition:** attribute.h:420

`Tango::Attribute::set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__

void set\_value\_date\_quality(Tango::DevShort \*p\_data, time\_t t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

Set internal attribute value, date and quality factor (for
Tango::DevShort attribute data type)...

`Tango::API\_AttrConfig <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__

const char \*const API\_AttrConfig

**Definition:** tango\_const.h:329

`Tango::Attribute::writable <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__

Tango::AttrWriteType writable

The attribute writable flag.

**Definition:** attribute.h:1921

`Tango::Attribute::delta\_t\_str <../../d6/dad/classTango_1_1Attribute.html#a33c34a6c11460c540c7b62cd9133540c>`__

string delta\_t\_str

The attribute delta time RDS alarm.

**Definition:** attribute.h:2009

`Tango::Attribute::get\_max\_dim\_y <../../d6/dad/classTango_1_1Attribute.html#ab4cfab2bee3ae1523ad8a3466afc37a2>`__

long get\_max\_dim\_y()

Get attribute maximum data size in y dimension.

**Definition:** attribute.h:440

`Tango::Attribute::get\_y <../../d6/dad/classTango_1_1Attribute.html#ae724bd70b696700c422fe83826a7ba41>`__

long get\_y()

Get attribute data size in y dimension.

**Definition:** attribute.h:433

`Tango::Attribute::max\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#ae7508d4f6560a228e9969e2110194d80>`__

string max\_warning\_str

The attribute maximum warning.

**Definition:** attribute.h:2001

`Tango::\_Attr\_CheckVal::ush <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#abebf8bf262871069fdc66fc7171b8e76>`__

unsigned short ush

**Definition:** attribute.h:94

`Tango::Attribute::get\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a362cf02710511ea952ef3f8ff85cdd30>`__

long get\_assoc\_ind()

Get index of the associated writable attribute.

**Definition:** attribute.h:349

`Tango::Attribute::is\_check\_archive\_criteria <../../d6/dad/classTango_1_1Attribute.html#a90a062ce092265b748d951e9b4b77250>`__

bool is\_check\_archive\_criteria()

Check if the archive event criteria should be checked when firing the
event manually.

**Definition:** attribute.h:1722

`Tango::last\_attr\_value::except <../../de/db2/structTango_1_1last__attr__value.html#a854e14f33e75bdcea27483fd791ff307>`__

DevFailed except

**Definition:** attribute.h:126

`Tango::Attribute::get\_data\_format <../../d6/dad/classTango_1_1Attribute.html#a4e23df40cb9be8d4213c0f87b67e5dd9>`__

Tango::AttrDataFormat get\_data\_format()

Get attribute data format.

**Definition:** attribute.h:336

`Tango::Attribute::is\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a9fbdd3152f79233b68704f3fbe295ecd>`__

bool is\_data\_ready\_event()

Check if the data ready event is fired for this attribute.

**Definition:** attribute.h:1735

`Tango::Attribute::max\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ac28534e7605d151d45d1807399104476>`__

string max\_alarm\_str

The attribute maximun alarm level.

**Definition:** attribute.h:1985

`Tango::Attribute::set\_user\_attr\_mutex <../../d6/dad/classTango_1_1Attribute.html#a938e182ff0b0c1664b30b713f3d11d3f>`__

void set\_user\_attr\_mutex(omni\_mutex \*mut\_ptr)

Set attribute user mutex.

**Definition:** attribute.h:496

`Tango::Attribute::description <../../d6/dad/classTango_1_1Attribute.html#a87011b5bf8737c50ac9dcd03d2635223>`__

string description

The attribute description.

**Definition:** attribute.h:1955

`Tango::Attribute::max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__

Tango::Attr\_CheckVal max\_value

The attribute maximum value in binary format.

**Definition:** attribute.h:2037

`Tango::last\_attr\_value::inited <../../de/db2/structTango_1_1last__attr__value.html#a5c390677b08b00bafb0a2b1b095ac2ff>`__

bool inited

**Definition:** attribute.h:122

`Tango::Attribute::min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a8b02f5316431ee1e3de6a8061789feb0>`__

Tango::Attr\_CheckVal min\_alarm

The attribute minimum alarm in binary format.

**Definition:** attribute.h:2017

`Tango::\_Attr\_CheckVal::d\_sta <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#afed10fbfee093e96573c4ac0869a1ea9>`__

DevState d\_sta

**Definition:** attribute.h:99

`Tango::Attribute::min\_warning <../../d6/dad/classTango_1_1Attribute.html#a6f6121a07bb9790577d70a1ab9e3d0a5>`__

Tango::Attr\_CheckVal min\_warning

The attribute minimum warning in binary format.

**Definition:** attribute.h:2025

`Tango::\_Attr\_CheckVal::lg <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a2c051c4cefe150cb316127f7ba03f35c>`__

DevLong lg

**Definition:** attribute.h:91

`Tango::API\_AttrNotAllowed <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__

const char \*const API\_AttrNotAllowed

**Definition:** tango\_const.h:336

`Tango::prop\_type <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__

prop\_type

**Definition:** attribute.h:130

`Tango::Attribute::set\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#abc67fbc105dc54f7cb685e137074b2d9>`__

void set\_attr\_serial\_model(AttrSerialModel ser\_model)

Set attribute serialization model.

`Tango::\_Attr\_CheckVal::uch <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#aea5e987225a739cb0e82f891d9eaaf52>`__

unsigned char uch

**Definition:** attribute.h:95

`Tango::Attribute::set\_date <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__

void set\_date(Tango::TimeVal &new\_date)

Set attribute date.

**Definition:** attribute.h:368

`Tango::Attribute::set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__

void set\_value(Tango::DevShort \*p\_data, long x=1, long y=0, bool
release=false)

Set internal attribute value (for Tango::DevShort attribute data type).

`Tango::Attribute::fire\_event <../../d6/dad/classTango_1_1Attribute.html#a13234bb32ef355601e45e6e942082873>`__

void fire\_event(vector< string > &filt\_names, vector< double >
&filt\_vals, DevFailed \*except=NULL)

Fire a user event for the attribute value.

`Tango::Attribute::DServer <../../d6/dad/classTango_1_1Attribute.html#ac4a83d6bf023caf5fb2002b96e33cef9>`__

friend class DServer

**Definition:** attribute.h:2259

`Tango::last\_attr\_value <../../de/db2/structTango_1_1last__attr__value.html>`__

**Definition:** attribute.h:120

`Tango::EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__

EventType

Possible event type.

**Definition:** tango\_const.h:1089

`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

This class represents a Tango attribute.

**Definition:** attribute.h:163

`Tango::Attribute::name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__

string name

The attribute name.

**Definition:** attribute.h:1917

`Tango::Attribute::min\_value\_str <../../d6/dad/classTango_1_1Attribute.html#a5b92008335e38687b1e019b7e4f5cf89>`__

string min\_value\_str

The attribute minimum value.

**Definition:** attribute.h:1989

`Tango::Attribute::min\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#aa8dae56da901c89854855281f80585b4>`__

string min\_warning\_str

The attribute minimun warning.

**Definition:** attribute.h:1997

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::\_Attr\_CheckVal::ulg64 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#af922febda3c28b8e89f4536e062e6d42>`__

DevULong64 ulg64

**Definition:** attribute.h:98

`Tango::Attribute::label <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__

string label

The attribute label.

**Definition:** attribute.h:1951

`Tango::WantedProp <../../d0/d82/structTango_1_1WantedProp.html>`__

**Definition:** attribute.h:63

`Tango::\_Attr\_Value::fl\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa29b18a24b1791dc8cd9791652295aa0>`__

DevVarFloatArray \* fl\_seq

**Definition:** attribute.h:106

`Tango::Attribute::max\_y <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__

long max\_y

The attribute maximum y dimension.

**Definition:** attribute.h:1947

`Tango::Attribute::value <../../d6/dad/classTango_1_1Attribute.html#ad6a7bc5a3e07635c9d94ec686d508181>`__

Tango::Attr\_Value value

The attribute value.

**Definition:** attribute.h:2041

`Tango::Attribute::is\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ad69a25209bb113694f8aef7acb49ed80>`__

bool is\_archive\_event()

Check if the archive event is fired manually for this attribute.

**Definition:** attribute.h:1715

`Tango::Attribute::is\_alarmed <../../d6/dad/classTango_1_1Attribute.html#aa0c62a8753eca947531af2614e13b60d>`__

bitset< numFlags > & is\_alarmed()

Check if the attribute has an alarm defined.

**Definition:** attribute.h:290

`Tango::MAX\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dabce4729450a33c4ac0fe873058148572>`__

**Definition:** attribute.h:133

`Tango::Attribute::assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__

long assoc\_ind

Index in the main attribute vector of the associated writable attribute
(if any)

**Definition:** attribute.h:2013

`Tango::MIN\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da914c8479a1e8d46bc9883c794e65049b>`__

**Definition:** attribute.h:132

`Tango::Attribute::is\_polled <../../d6/dad/classTango_1_1Attribute.html#a1ca81f8abd78d54ce8540ff0ccd3c6c1>`__

bool is\_polled()

Check if the attribute is polled .

`Tango::Attribute::enum\_labels <../../d6/dad/classTango_1_1Attribute.html#a748e164f49ffe7f85132f1380cd6835e>`__

vector< string > enum\_labels

Enumeration labels when the attribute data type is DevEnum.

**Definition:** attribute.h:2069

`Tango::Attribute::get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__

void get\_properties(Tango::MultiAttrProp< T > &props)

Get all modifiable attribute properties in one call.

`Tango::WantedAttr <../../d8/dc8/structTango_1_1WantedAttr.html>`__

**Definition:** attribute.h:72

`Tango::Attribute::get\_assoc\_name <../../d6/dad/classTango_1_1Attribute.html#abe79d1339964153ad5144a53036fcd18>`__

string & get\_assoc\_name()

Get name of the associated writable attribute.

**Definition:** attribute.h:342

`Tango::\_Attr\_Value::sh\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a8bb5aab68dd90d797052ad498b62e24a>`__

DevVarShortArray \* sh\_seq

**Definition:** attribute.h:104

`Tango::Attribute::set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a54eeed935c4a62f2d4774e186201adac>`__

void set\_max\_warning(const T &new\_max\_warning)

Set attribute maximum warning.

`fwdattrdesc.h <../../d8/d3c/fwdattrdesc_8h.html>`__

`Tango::\_Attr\_Value::lg\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aa9c65836e2531bf1075347f5ba46c9ff>`__

DevVarLongArray \* lg\_seq

**Definition:** attribute.h:105

`Tango::Attribute::get\_quality <../../d6/dad/classTango_1_1Attribute.html#af1dc4310844ce3fd7bdde02f6202b5ba>`__

Tango::AttrQuality & get\_quality()

Get attribute data quality.

**Definition:** attribute.h:400

`Tango::Attribute::is\_check\_change\_criteria <../../d6/dad/classTango_1_1Attribute.html#a29cd3ae6823c5627969248873042ae46>`__

bool is\_check\_change\_criteria()

Check if the change event criteria should be checked when firing the
event manually.

**Definition:** attribute.h:1663

`Tango::Attribute::set\_date <../../d6/dad/classTango_1_1Attribute.html#a535e525aa3be98940bed3b229b7dd1ae>`__

void set\_date(struct timeval &t)

Set attribute date.

**Definition:** attribute.h:382

`Tango::Attribute::check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__

bool check\_max\_value

Flag set to true if a maximum alarm is defined.

**Definition:** attribute.h:2053

`Tango::Attribute::get\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a19e43a51a3101a12abc55eeac83a431e>`__

void get\_min\_alarm(T &min\_al)

Get attribute minimum alarm or throw an exception if the attribute does
not have the minimum alarm...

`Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__

This class represents Tango modifiable attribute properties grouped in
one object to facilitate setti...

**Definition:** attrprop.h:547

`Tango::Attribute::set\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a111d02f6d34acbd29a9b396b1ce026ad>`__

void set\_data\_ready\_event(bool implemented)

Set a flag to indicate that the server fires data ready events.

**Definition:** attribute.h:1729

`encoded\_attribute.h <../../da/dc2/encoded__attribute_8h.html>`__

`Tango::Attribute::quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__

Tango::AttrQuality quality

The attribute quality factor.

**Definition:** attribute.h:1912

`Tango::Attribute::delta\_val <../../d6/dad/classTango_1_1Attribute.html#aad3e96f12716d9f1e3df93c85902cfb9>`__

Tango::Attr\_CheckVal delta\_val

Authorized delta between the last written value and the actual read.

**Definition:** attribute.h:2059

`Tango::Attribute::data\_size <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__

long data\_size

The attribute data size.

**Definition:** attribute.h:2045

`Tango::numEventType <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__

**Definition:** tango\_const.h:1099

`Tango::\_Attr\_CheckVal::fl <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a99c1cc53a5b8a2fe14abbee2da24c9a3>`__

float fl

**Definition:** attribute.h:93

`Tango::Attribute::get\_data\_size <../../d6/dad/classTango_1_1Attribute.html#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__

long get\_data\_size()

Get attribute data size.

**Definition:** attribute.h:414

`Tango::last\_attr\_value::quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__

Tango::AttrQuality quality

**Definition:** attribute.h:123

`Tango::Attribute::get\_polling\_period <../../d6/dad/classTango_1_1Attribute.html#a59bbd014fb3e06e3075cceed22aa1f94>`__

long get\_polling\_period()

Get attribute polling period.

**Definition:** attribute.h:447

`Tango::\_Attr\_CheckVal::lg64 <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a6ea8ac1d0b874559ba0a987c8102636e>`__

DevLong64 lg64

**Definition:** attribute.h:96

`Tango::Attribute::set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a1dbbd85b4fab593886300ef5b938e0ef>`__

void set\_min\_alarm(const T &new\_min\_alarm)

Set attribute minimum alarm.

`Tango::Attribute::remove\_configuration <../../d6/dad/classTango_1_1Attribute.html#afcc46b14e965bc2d0a38e4102b14af64>`__

void remove\_configuration()

Remove the attribute configuration from the database.

`Tango::LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__

struct Tango::last\_attr\_value LastAttrValue

`Tango::Attribute::get\_data\_type <../../d6/dad/classTango_1_1Attribute.html#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__

long get\_data\_type()

Get attribute data type.

**Definition:** attribute.h:330

`Tango::last\_attr\_value::value\_4 <../../de/db2/structTango_1_1last__attr__value.html#a2da098329f50e217705185215a817fd1>`__

AttrValUnion value\_4

**Definition:** attribute.h:127

`Tango::Attribute::check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__

bool check\_min\_value

Flag set to true if a minimum value is defined.

**Definition:** attribute.h:2049

`Tango::WantedProp::operator() <../../d0/d82/structTango_1_1WantedProp.html#a55931f0af339a7e8072d6efe424d06bc>`__

R operator()(A1 att, A2 name\_str) const

**Definition:** attribute.h:65

`Tango::\_Attr\_Value::lg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#aaeb8af715b7b6420a3492434f0be6ebc>`__

DevVarLong64Array \* lg64\_seq

**Definition:** attribute.h:112

`Tango::\_Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__

**Definition:** attribute.h:88

`Tango::\_Attr\_Value::str\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a34d1df6474b4012138c5e779648ebd2e>`__

DevVarStringArray \* str\_seq

**Definition:** attribute.h:108

`Tango::\_Attr\_Value::cha\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#af2dedf11deecc24f0355dceeaf7d39eb>`__

DevVarCharArray \* cha\_seq

**Definition:** attribute.h:111

`Tango::Attribute::delta\_val\_str <../../d6/dad/classTango_1_1Attribute.html#a1805001ddd756d0a930d839a444bbd1c>`__

string delta\_val\_str

The attribute delta value RDS alarm.

**Definition:** attribute.h:2005

`Tango::Attribute::set\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a3327bf363691bb60a285b72c9a170f52>`__

void set\_assoc\_ind(long val)

Set index of the associated writable attribute.

**Definition:** attribute.h:356

`Tango::Attribute::get\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#ab4214177cfddd2acfe4c98e6fcb7b563>`__

void get\_max\_alarm(T &max\_al)

Get attribute maximum alarm or throw an exception if the attribute does
not have the maximum alarm se...

`Tango::\_Attr\_Value::state\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#abe5b239bc92ac7ed1bce31a3fb4cfe7f>`__

DevVarStateArray \* state\_seq

**Definition:** attribute.h:115

`Tango::\_Attr\_Value::enc\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a9f2c26b86b6f3bb3e6af164185aca107>`__

DevVarEncodedArray \* enc\_seq

**Definition:** attribute.h:116

`Tango::MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__

MinMaxValueCheck

**Definition:** tango\_const.h:1155

`Tango::last\_attr\_value::err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__

bool err

**Definition:** attribute.h:125

`Tango::Attribute::delta\_t <../../d6/dad/classTango_1_1Attribute.html#a0f7226cbcd313093428a764167ef5b8d>`__

long delta\_t

Delta time after which the read value must be checked again the last
written value if the attribute h...

**Definition:** attribute.h:2065

`Tango::Attribute::get\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#ac2d93bbbc1b0019e81691c14dc13bc0d>`__

AttrSerialModel get\_attr\_serial\_model()

Get attribute serialization model.

**Definition:** attribute.h:485

`Tango::Attribute::~Attribute <../../d6/dad/classTango_1_1Attribute.html#ae2740fa1ac154feb7d50a85199991f42>`__

virtual ~Attribute()

The attribute destructor.

`Tango::Attribute::max\_warning <../../d6/dad/classTango_1_1Attribute.html#aeef1c0723b72bc2386cc0d62aea14e44>`__

Tango::Attr\_CheckVal max\_warning

The attribute maximum warning in binary format.

**Definition:** attribute.h:2029

`Tango::Attribute::is\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2cf67df0c5a155df39156301582a98c9>`__

bool is\_max\_warning()

Check if the attribute is in maximum warning condition .

**Definition:** attribute.h:274

`Tango::Attribute::set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#ab2eb29b7e13a95246eb1b3211ba12d8c>`__

void set\_min\_warning(const T &new\_min\_warning)

Set attribute minimum warning.

`Tango::Attribute::ZmqEventSupplier <../../d6/dad/classTango_1_1Attribute.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__

friend class ZmqEventSupplier

**Definition:** attribute.h:2258

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Attribute::value\_flag <../../d6/dad/classTango_1_1Attribute.html#af64882f2e722896cb9e0f66ab3a958bd>`__

bool value\_flag

A flag set to true if the attribute value has been updated.

**Definition:** attribute.h:1900

`Tango::Attribute::fire\_change\_event <../../d6/dad/classTango_1_1Attribute.html#ae023edda1e0bf70d5fda7c3dc8160351>`__

void fire\_change\_event(DevFailed \*except=NULL)

Fire a change event for the attribute value.

`Tango::MAX\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dac9ec25306c829a964c29ddb38bbcf5ae>`__

**Definition:** attribute.h:135

`Tango::Attribute::data\_type <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__

long data\_type

The attribute data type.

**Definition:** attribute.h:1929

`Tango::Attribute::min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__

Tango::Attr\_CheckVal min\_value

The attribute minimum value in binary format.

**Definition:** attribute.h:2033

`Tango::WantedAttr::operator() <../../d8/dc8/structTango_1_1WantedAttr.html#a758bd8a70db45aa529156b9a21702bad>`__

R operator()(A1 attr\_ptr, A2 name) const

**Definition:** attribute.h:74

`Tango::Attribute::format <../../d6/dad/classTango_1_1Attribute.html#aa588971cf9c8a26a836c94c15de4d259>`__

string format

The attribute format.

**Definition:** attribute.h:1973

`Tango::Attribute::standard\_unit <../../d6/dad/classTango_1_1Attribute.html#ac6aa3f2dcfb375b83d8dc8a13fb3d34f>`__

string standard\_unit

The attribute standard unit.

**Definition:** attribute.h:1963

`Tango::Attribute::when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__

Tango::TimeVal when

The date when attribute was read.

**Definition:** attribute.h:1904

`Tango::Attr <../../d5/dcd/classTango_1_1Attr.html>`__

User class to create a no dimension attribute object.

**Definition:** attrdesc.h:376

`Tango::Attribute::max\_value\_str <../../d6/dad/classTango_1_1Attribute.html#ae09dac6e118991d347cf555e97790ebf>`__

string max\_value\_str

The attribute maximum value.

**Definition:** attribute.h:1993

`Tango::Attribute::min\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ae425ecb760c55a0be7880d8a0850a35e>`__

string min\_alarm\_str

The attribute minimum alarm level.

**Definition:** attribute.h:1981

`Tango::\_Attr\_CheckVal::sh <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#ac7ca88e6bbe2b55e305a05b27a9db5ce>`__

short sh

**Definition:** attribute.h:90

`Tango::Attribute::set\_change\_event <../../d6/dad/classTango_1_1Attribute.html#a25f157fedeb2f37741b1e41ce6422fcd>`__

void set\_change\_event(bool implemented, bool detect=true)

Set a flag to indicate that the server fires change events manually,
without the polling to be starte...

**Definition:** attribute.h:1645

`Tango::Attribute::is\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#aafbaa179c8445f29480f8bff031920de>`__

bool is\_min\_warning()

Check if the attribute is in minimum warning condition .

**Definition:** attribute.h:267

`Tango::Attribute::is\_rds\_alarm <../../d6/dad/classTango_1_1Attribute.html#accac04b03b14bd2bc958e06cc8f3626c>`__

bool is\_rds\_alarm()

Check if the attribute is in RDS alarm condition .

**Definition:** attribute.h:281

`Tango::Attribute::get\_writable <../../d6/dad/classTango_1_1Attribute.html#a55b57b9d5abf6649e0f4e7854920d967>`__

Tango::AttrWriteType get\_writable()

Get the attribute writable type (RO/WO/RW).

**Definition:** attribute.h:318

`Tango::\_Attr\_CheckVal::ulg <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html#a61b2a45b6e761f2660f516fab08d76c9>`__

DevULong ulg

**Definition:** attribute.h:97

`Tango::PropType <../../de/ddf/namespaceTango.html#adab12914708b27ce524f38a571bdd156>`__

enum Tango::prop\_type PropType

`Tango::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__

This class provides method to deal with Tango::DevEncoded attribute
format.

**Definition:** encoded\_attribute.h:53

`Tango::Attribute::Attribute <../../d6/dad/classTango_1_1Attribute.html#ad92e54beedf8d29d088c2f6d5d70153f>`__

Attribute(vector< AttrProperty > &prop\_list, Attr &tmp\_attr, string
&dev\_name, long idx)

Create a new Attribute object.

`Tango::Attribute::set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#aef913d2fcf95bff30086b34b8f827234>`__

void set\_max\_alarm(const T &new\_max\_alarm)

Set attribute maximum alarm.

`Tango::Attribute::get\_label <../../d6/dad/classTango_1_1Attribute.html#a1851ce2e2e30add8e826c39b462fe374>`__

string & get\_label()

Get attribute label property.

**Definition:** attribute.h:394

`Tango::Attribute::set\_date <../../d6/dad/classTango_1_1Attribute.html#a174152e7af49d2da5644ddfb701d71a9>`__

void set\_date(time\_t new\_date)

Set attribute date.

**Definition:** attribute.h:388

`Tango::Attribute::writable\_attr\_name <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__

string writable\_attr\_name

The name of the associated writable attribute.

**Definition:** attribute.h:1977

`Tango::Attribute::display\_unit <../../d6/dad/classTango_1_1Attribute.html#a53ee065e6d6ad2bee616b90337787b8d>`__

string display\_unit

The attribute display unit.

**Definition:** attribute.h:1967

`Tango::Attribute::is\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#a2db386476f2d728513af3f3e5342f90a>`__

bool is\_max\_alarm()

Check if the attribute is in maximum alarm condition .

**Definition:** attribute.h:260

`Tango::\_Attr\_Value::ulg64\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ad85da44052184f148e039c6995c54fc5>`__

DevVarULong64Array \* ulg64\_seq

**Definition:** attribute.h:114

`Tango::Attribute::max\_alarm <../../d6/dad/classTango_1_1Attribute.html#af0644d2b606ef6dfaf88431c535c726f>`__

Tango::Attr\_CheckVal max\_alarm

The attribute maximum alarm in binary format.

**Definition:** attribute.h:2021

`Tango::Attribute::fire\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ab008123b44bdb2a13e2cd2c362617e1e>`__

void fire\_archive\_event(DevFailed \*except=NULL)

Fire an archive event for the attribute value.

`Tango::last\_attr\_value::value <../../de/db2/structTango_1_1last__attr__value.html#ac9380c5dfe9e38f8c1f4b35385127f69>`__

CORBA::Any value

**Definition:** attribute.h:124

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__

union Tango::\_Attr\_CheckVal Attr\_CheckVal

`Tango::Attribute::get\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2246b2de4a4cb23031975fac5a17ea66>`__

void get\_max\_warning(T &max\_war)

Get attribute maximum warning or throw an exception if the attribute
does not have the maximum warnin...

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__

static void throw\_exception(const char \*reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:122

`Tango::Attribute::date <../../d6/dad/classTango_1_1Attribute.html#a481ba9ea923659f40de010804c3600ec>`__

bool date

Flag set to true if the date must be set.

**Definition:** attribute.h:1908

`Tango::AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__

AttrSerialModel

**Definition:** tango\_const.h:1117

`Tango::Attribute::check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__

bool check\_alarm()

Check if the attribute read value is below/above the alarm level.

`Tango::Attribute::max\_x <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__

long max\_x

The attribute maximum x dimension.

**Definition:** attribute.h:1941

`Tango::MIN\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da72712aef1c716ce755552bc40534e784>`__

**Definition:** attribute.h:134

`Tango::Attribute::is\_writ\_associated <../../d6/dad/classTango_1_1Attribute.html#a716551497af0ec7e9e9f22e27480158e>`__

bool is\_writ\_associated()

Check if the attribute has an associated writable attribute.

`attrdesc.h <../../d4/d18/attrdesc_8h.html>`__

`Tango::Attribute::set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__

void set\_properties(Tango::MultiAttrProp< T > &props)

Set all modifiable attribute properties in one call.

`Tango::\_Attr\_Value::ush\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ab3b3cc1b40eeefde2c9d0ec7f66682de>`__

DevVarUShortArray \* ush\_seq

**Definition:** attribute.h:109

`Tango::Attribute::unit <../../d6/dad/classTango_1_1Attribute.html#ab44a3c2cbd59c9318dc252472db94b01>`__

string unit

The attribute unit.

**Definition:** attribute.h:1959

`Tango::\_Attr\_Value::boo\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#a09041dfdd3ceb12b9d5d2ff6d7672e82>`__

DevVarBooleanArray \* boo\_seq

**Definition:** attribute.h:110

`Tango::Attr\_Value <../../de/ddf/namespaceTango.html#a41a53e618e4c9135b25512260eebe538>`__

union Tango::\_Attr\_Value Attr\_Value

`Tango::Attribute::get\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#a670533e5338107f959d7cf01f3e88a5a>`__

void get\_min\_warning(T &min\_war)

Get attribute minimum warning or throw an exception if the attribute
does not have the minimum warnin...

`Tango::Attribute::set\_quality <../../d6/dad/classTango_1_1Attribute.html#aadb400c90467daf5c1ccfd36c2ea67e3>`__

void set\_quality(Tango::AttrQuality qua, bool send\_event=false)

Set attribute data quality.

`Tango::\_Attr\_Value::db\_seq <../../dd/d79/unionTango_1_1__Attr__Value.html#ae195860e9cb410e5313e430823065a15>`__

DevVarDoubleArray \* db\_seq

**Definition:** attribute.h:107

`Tango::MIN\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da870f38bb3472276d779767000c2e8821>`__

**Definition:** attribute.h:136

`Tango::Attribute::is\_change\_event <../../d6/dad/classTango_1_1Attribute.html#accf20392305b3fe4b4f3cf6c2158950c>`__

bool is\_change\_event()

Check if the change event is fired manually (without polling) for this
attribute. ...

**Definition:** attribute.h:1656

`Tango::Attribute::is\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a0df58ed810063ccfef7df02ac9851a94>`__

bool is\_min\_alarm()

Check if the attribute is in minimum alarm condition .

**Definition:** attribute.h:253

`Tango::Attribute::get\_date <../../d6/dad/classTango_1_1Attribute.html#a0e5d5c229031b939700a38728fbe08a4>`__

Tango::TimeVal & get\_date()

Get attribute date.

**Definition:** attribute.h:362

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `attribute.h <../../d3/d7c/attribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
