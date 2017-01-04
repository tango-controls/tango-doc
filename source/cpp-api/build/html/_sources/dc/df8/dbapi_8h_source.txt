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

dbapi.h

`Go to the documentation of this file. <../../dc/df8/dbapi_8h.html>`__

1 

2 //+==================================================================================================================

3 //

4 // dbapi.h - include file for TANGO database api

5 //

6 //

7 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

8 // European Synchrotron Radiation Facility

9 // BP 220, Grenoble 38043

10 // FRANCE

11 //

12 // This file is part of Tango.

13 //

14 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

15 // License as published by the Free Software Foundation, either
version 3 of the License, or

16 // (at your option) any later version.

17 //

18 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

19 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

20 //

21 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

22 // If not, see <http://www.gnu.org/licenses/>.

23 //

24 //+==================================================================================================================

25 

26 

27 #ifndef \_DBAPI\_H

`28 <../../dc/df8/dbapi_8h.html>`__ #define \_DBAPI\_H

29 

30 #include <vector>

`31 <../../dc/df8/dbapi_8h.html>`__ #include <errno.h>

32 #include <`tango/client/devapi.h <../../d9/ddc/devapi_8h.html>`__\ >

33 

38 using namespace `std <../../d8/dcc/namespacestd.html>`__;

39 

40 namespace `Tango <../../de/ddf/namespaceTango.html>`__ {

41 

45 

46 class DbDatum;

47 class DbDevInfo;

48 class DbDevImportInfo;

49 class DbDevExportInfo;

50 class DbServerInfo;

51 class DbDevFullInfo;

`52 <../../da/dbb/classTango_1_1DbDevice.html>`__ class
`DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__;

`53 <../../d6/dc5/classTango_1_1Database.html>`__ 

54 class FileDatabase;

55 class
`DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__;

56 class `Util <../../d4/deb/classTango_1_1Util.html>`__;

`57 <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__ class
AccessProxy;

58 

62 

63 typedef vector<DbDevInfo>
`DbDevInfos <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__;

`64 <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__ typedef
vector<DbDevExportInfo>
`DbDevExportInfos <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__;

`65 <../../de/ddf/namespaceTango.html#a63b451c2d202d3b0b9024b1dd48086ec>`__ typedef
vector<DbDevImportInfo>
`DbDevImportInfos <../../de/ddf/namespaceTango.html#a63b451c2d202d3b0b9024b1dd48086ec>`__;

`66 <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__ typedef
vector<DbDatum>
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__;

67 

`68 <../../dc/df8/dbapi_8h.html#acee1075bda717b32291b054853f14d22>`__ #define
POGO\_DESC "Description"

`69 <../../dc/df8/dbapi_8h.html#a96ad2363140145a75cffbf2f84407d56>`__ #define
POGO\_TITLE "ProjectTitle"

70 

74 

75 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

76  \* \*

77  \* Database - database object for implementing generic high-level \*

78  \* interface for TANGO database api \*

79  \* \*

80 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

81 

82 #include "Database.h"

83 

84 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

85  \* \*

86  \* DbDevice - A database object for accessing device related \*

87  \* information in the database \*

88  \* \*

89 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

90 

91 #include "DbDevice.h"

92 

93 

94 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

95  \* \*

96  \* DbProperty - A database object for accessing general properties
\*

97  \* which are stored in the database \*

98  \* \*

99 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

100 

`101 <../../df/d27/classTango_1_1DbProperty.html>`__ class
`DbProperty <../../df/d27/classTango_1_1DbProperty.html>`__

102 {

103 public :

104 
`DbProperty <../../df/d27/classTango_1_1DbProperty.html>`__\ (string);

105  ~\ `DbProperty <../../df/d27/classTango_1_1DbProperty.html>`__\ ();

106 //

107 // methods

108 //

109  void get(DbData&);

110  void put(DbData&);

111  void delete\_(DbData&);

112 };

113 

114 

115 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

116  \* \*

117  \* DbAttribute - A database object for accessing attribute related
\*

118  \* information in the database \*

119  \* \*

120 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

121 

`122 <../../d3/d25/classTango_1_1DbAttribute.html>`__ class
`DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__

123 {

124 private :

125  string name;

126  string device\_name;

127  `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*dbase;

128  int db\_ind;

129  bool ext\_dbase;

130 

131 public :

132 
`DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__\ (string
&, string &);

133 
`DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__\ (string
&, string &, `Database <../../d6/dc5/classTango_1_1Database.html>`__
\*);

134 
`DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__\ (string
&,string &, string &,string &);

135 
~\ `DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__\ ();

136 //

137 // methods

138 //

139  void get\_property(DbData&);

140  void put\_property(DbData&);

141  void delete\_property(DbData&);

142 };

143 

144 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

145  \* \*

146  \* DbServer - A database object for accessing server related \*

147  \* information in the database \*

148  \* \*

149 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

150 

`157 <../../d6/deb/classTango_1_1DbServer.html>`__ class
`DbServer <../../d6/deb/classTango_1_1DbServer.html>`__

158 {

159 private :

160  string name;

161  `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*dbase;

162  int db\_ind;

163  bool ext\_dbase;

164 

165  class DbServerExt

166  {

167  public:

168  DbServerExt() {};

169  };

170 

171 #ifdef HAS\_UNIQUE\_PTR

172  unique\_ptr<DbServerExt> ext;

173 #else

174  DbServerExt \*ext;

175 #endif

176 

177 public :

189  `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__\ (string
server\_name);

200  `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__\ (string
server\_name, `Database <../../d6/dc5/classTango_1_1Database.html>`__
\*db);

202 //

203 // methods

204 //

217  void add\_server(DbDevInfos &serv);

225  void delete\_server();

236  void export\_server(DbDevExportInfos &serv);

244  void unexport\_server();

246 

248  ~\ `DbServer <../../d6/deb/classTango_1_1DbServer.html>`__\ ();

249 

250  `DbServerInfo <../../db/dad/classTango_1_1DbServerInfo.html>`__
get\_server\_info();

251 };

252 

253 

254 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

255  \* \*

256  \* DbClass - A database object for accessing class related \*

257  \* information in the database \*

258  \* \*

259 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

260 

`267 <../../dc/d38/classTango_1_1DbClass.html>`__ class
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__

268 {

269 private :

270  string name;

271  `Database <../../d6/dc5/classTango_1_1Database.html>`__ \*dbase;

272  int db\_ind;

273  bool ext\_dbase;

274 

275  class DbClassExt

276  {

277  public:

278  DbClassExt() {};

279  };

280 

281 #ifdef HAS\_UNIQUE\_PTR

282  unique\_ptr<DbClassExt> ext;

283 #else

284  DbClassExt \*ext;

285 #endif

286 

287 public :

299  `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__\ (string
class\_name);

310  `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__\ (string
class\_name, `Database <../../d6/dc5/classTango_1_1Database.html>`__
\*db);

312 

313 //

314 // methods

315 //

328  void get\_property(DbData &db);

339  void put\_property(DbData &db);

350  void delete\_property(DbData &db);

361  void get\_attribute\_property(DbData &db);

372  void put\_attribute\_property(DbData &db);

383  void delete\_attribute\_property(DbData &db);

394  void get\_pipe\_property(DbData &db);

405  void put\_pipe\_property(DbData &db);

416  void delete\_pipe\_property(DbData &db);

418 

420  ~\ `DbClass <../../dc/d38/classTango_1_1DbClass.html>`__\ ();

421 };

422 

423 

424 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

425  \* \*

426  \* DbDatum - A database object for sending and receiving data \*

427  \* from the Tango database API \*

428  \* \*

429 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

430 

`443 <../../d3/d0f/classTango_1_1DbDatum.html>`__ class
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__

444 {

445 public:

447  enum except\_flags

448  {

449  isempty\_flag,

450  wrongtype\_flag,

451  numFlags

452  };

454 

464  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ (string
name);

473  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ (const char
\*name);

475 

532  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (bool
val);

542  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (bool
&val);

544 

`558 <../../d3/d0f/classTango_1_1DbDatum.html#adce60a23dccf7f08f1fc7f81cbc783f0>`__ 
void
`exceptions <../../d3/d0f/classTango_1_1DbDatum.html#adce60a23dccf7f08f1fc7f81cbc783f0>`__\ (bitset<DbDatum::numFlags>
fl) { exceptions\_flags = fl;}

`578 <../../d3/d0f/classTango_1_1DbDatum.html#a332a7e23267e200c786a5b8486916205>`__ 
bitset<DbDatum::numFlags>
`exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a332a7e23267e200c786a5b8486916205>`__\ ()
{return exceptions\_flags;}

`586 <../../d3/d0f/classTango_1_1DbDatum.html#a6c4f542a1f33e2ff5e7f2e16aded5679>`__ 
void
`reset\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a6c4f542a1f33e2ff5e7f2e16aded5679>`__\ (except\_flags
fl) {exceptions\_flags.reset((size\_t)fl);}

`594 <../../d3/d0f/classTango_1_1DbDatum.html#aff8fbe5d2dd3c816b1ff24c55fb1295a>`__ 
void
`set\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#aff8fbe5d2dd3c816b1ff24c55fb1295a>`__\ (except\_flags
fl) {exceptions\_flags.set((size\_t)fl);}

596 

621  bool is\_empty();

623 

625  string name;

626  vector<string> value\_string;

627 //

628 // constructor methods

629 //

630  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__\ ();

631  ~\ `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__\ ();

632  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__\ (const
`DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ &);

633  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__
&operator=(const `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__
&);

634 

635  size\_t size() {return value\_string.size();}

636 

637 //

638 // insert methods

639 //

640 

641  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (short);

642  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (unsigned
char);

643  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (unsigned
short);

644  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (DevLong);

645  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (DevULong);

646  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (DevLong64);

647  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (DevULong64);

648  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (float);

649  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (double);

650  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (char
\*);

651 // void operator << (char \*&);

652  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (const
char \*);

653 // void operator << (const char \*&);

654  void `operator
<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (string&);

655 

656  void operator << (vector<string>&);

657  void operator << (vector<short>&);

658  void operator << (vector<unsigned short>&);

659  void operator << (vector<DevLong>&);

660  void operator << (vector<DevULong>&);

661  void operator << (vector<DevLong64>&);

662  void operator << (vector<DevULong64>&);

663  void operator << (vector<float>&);

664  void operator << (vector<double>&);

665 

666 //

667 // extract methods

668 //

669 

670  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (short&);

671  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (unsigned
char&);

672  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (unsigned
short&);

673  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (DevLong&);

674  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (DevULong&);

675  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (DevLong64&);

676  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (DevULong64&);

677  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (float&);

678  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (double&);

679  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (const
char\*&);

`680 <../../d6/dc5/classTango_1_1Database.html#a3618dd3ead7394eb65e245006c7c323b>`__ 
bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (string&);

681 

682  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<string>&);

683  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<short>&);

684  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<unsigned
short>&);

685  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<DevLong>&);

686  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<DevULong>&);

687  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<DevLong64>&);

688  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<DevULong64>&);

689  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<float>&);

690  bool `operator
>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (vector<double>&);

691 

692 private :

693 

694  int value\_type;

695  int value\_size;

696  bitset<numFlags> exceptions\_flags;

697 

698  class DbDatumExt

699  {

700  public:

701  DbDatumExt() {};

702  };

703 

704 #ifdef HAS\_UNIQUE\_PTR

705  unique\_ptr<DbDatumExt> ext;

706 #else

707  DbDatumExt \*ext;

708 #endif

709 };

710 

711 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

712  \* \*

713  \* DbHistory - A data object for receiving data history from the \*

714  \* Tango database \*

715  \* \*

716 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

717 

`724 <../../d3/d55/classTango_1_1DbHistory.html>`__ class
`DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__

725 {

726 public:

727 

728 //

729 // constructor methods

730 //

731 

732  `DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__\ (string
,string ,vector<string> &);

733  `DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__\ (string
,string ,string ,vector<string> &);

734 

735 //

736 // getter methods

737 //

738 

744  string get\_name();

750  string get\_attribute\_name();

756  string get\_date();

762  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ get\_value();

768  bool is\_deleted();

769 

770 private:

771 

772  string propname; // Property name

773  string attname; // Attribute name (Not used for device/pipe
properties)

774  `DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__ value; //
Property value

775  string date; // Update date

776  bool deleted; // Deleted flag

777 

778  string format\_mysql\_date(string );

779  void make\_db\_datum(vector<string> &);

780 };

781 

782 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

783  \* \*

784  \* DbDevInfo \*

785  \* \*

786 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

787 

`795 <../../dd/d01/classTango_1_1DbDevInfo.html>`__ class
`DbDevInfo <../../dd/d01/classTango_1_1DbDevInfo.html>`__

796 {

797 public :

`798 <../../dd/d01/classTango_1_1DbDevInfo.html#a4d8d4ec738f75c08e8e8b8a2215b249a>`__ 
string
`name <../../dd/d01/classTango_1_1DbDevInfo.html#a4d8d4ec738f75c08e8e8b8a2215b249a>`__;

`799 <../../dd/d01/classTango_1_1DbDevInfo.html#adb109d7fbbcf158b4c78331429c82617>`__ 
string
`\_class <../../dd/d01/classTango_1_1DbDevInfo.html#adb109d7fbbcf158b4c78331429c82617>`__;

`800 <../../dd/d01/classTango_1_1DbDevInfo.html#ad890203d5a47fa9c16f9a0475ea17912>`__ 
string
`server <../../dd/d01/classTango_1_1DbDevInfo.html#ad890203d5a47fa9c16f9a0475ea17912>`__;

801 };

802 

803 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

804  \* \*

805  \* DbDevImportInfo \*

806  \* \*

807 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

808 

`815 <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__ class
`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

816 {

817 public :

`818 <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a885165239e268932e47bfd5a8cfdaaef>`__ 
string
`name <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a885165239e268932e47bfd5a8cfdaaef>`__;

`819 <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a2a799d0bf486fecb4df770af69c71bd9>`__ 
long
`exported <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a2a799d0bf486fecb4df770af69c71bd9>`__;

`820 <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a5d22c1daf5d2d97fcb5939db4224ca07>`__ 
string
`ior <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a5d22c1daf5d2d97fcb5939db4224ca07>`__;

`821 <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a29cc919c256c62429416b56137bb1161>`__ 
string
`version <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a29cc919c256c62429416b56137bb1161>`__;

822 };

823 

824 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

825  \* \*

826  \* DbDevFullInfo \*

827  \* \*

828 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

829 

`836 <../../d3/d6d/classTango_1_1DbDevFullInfo.html>`__ class
`DbDevFullInfo <../../d3/d6d/classTango_1_1DbDevFullInfo.html>`__:
public
`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

837 {

838 public :

`839 <../../d6/dc5/classTango_1_1Database.html#a3ee3a11271361471d966159be8755959>`__ 
string class\_name;

`840 <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a85c4fbc78980374147ae1e3ede672f8c>`__ 
string
`ds\_full\_name <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a85c4fbc78980374147ae1e3ede672f8c>`__;

`841 <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a6a4d6321daaa58dc575e230267347473>`__ 
string
`host <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a6a4d6321daaa58dc575e230267347473>`__;

`842 <../../d3/d6d/classTango_1_1DbDevFullInfo.html#aadfba1d0368c960d7f29997c6397f46e>`__ 
string
`started\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#aadfba1d0368c960d7f29997c6397f46e>`__;

`843 <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a08478bed60290351915a3d7f068389a3>`__ 
string
`stopped\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a08478bed60290351915a3d7f068389a3>`__;

`844 <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a88cc31cdd59f77d84583f497e0d8a5c3>`__ 
long
`pid <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a88cc31cdd59f77d84583f497e0d8a5c3>`__;

845 };

846 

847 

848 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

849  \* \*

850  \* DbDevExportInfo \*

851  \* \*

852 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

853 

`860 <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__ class
`DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__

861 {

862 public :

`863 <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a24c85a993aeb2e914f7c2c37aa4b949f>`__ 
string
`name <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a24c85a993aeb2e914f7c2c37aa4b949f>`__;

`864 <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a4626c342371b6f0001ac684dc9d22ff5>`__ 
string
`ior <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a4626c342371b6f0001ac684dc9d22ff5>`__;

`865 <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a110e2c28f3921258f4bed17f2543e1ac>`__ 
string
`host <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a110e2c28f3921258f4bed17f2543e1ac>`__;

`866 <../../d6/d4b/classTango_1_1DbDevExportInfo.html#af88428a398f79b1f0da9b05bb727f173>`__ 
string
`version <../../d6/d4b/classTango_1_1DbDevExportInfo.html#af88428a398f79b1f0da9b05bb727f173>`__;

`867 <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a140ed6681067ad229263d7f63be0212e>`__ 
int
`pid <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a140ed6681067ad229263d7f63be0212e>`__;

868 };

869 

870 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

871  \* \*

872  \* DbServerInfo \*

873  \* \*

874 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

875 

`876 <../../db/dad/classTango_1_1DbServerInfo.html>`__ class
`DbServerInfo <../../db/dad/classTango_1_1DbServerInfo.html>`__

877 {

878 public :

`879 <../../db/dad/classTango_1_1DbServerInfo.html#a1a4201d68b83fa83167bceab6b6f18ff>`__ 
string
`name <../../db/dad/classTango_1_1DbServerInfo.html#a1a4201d68b83fa83167bceab6b6f18ff>`__;

`880 <../../db/dad/classTango_1_1DbServerInfo.html#ae436bfb29bba6dc69e3d4b17abd62803>`__ 
string
`host <../../db/dad/classTango_1_1DbServerInfo.html#ae436bfb29bba6dc69e3d4b17abd62803>`__;

`881 <../../db/dad/classTango_1_1DbServerInfo.html#aa1fbfde436153239d7748c2dbbb9db58>`__ 
int
`mode <../../db/dad/classTango_1_1DbServerInfo.html#aa1fbfde436153239d7748c2dbbb9db58>`__;

`882 <../../db/dad/classTango_1_1DbServerInfo.html#a3132fb42bae316e343c15c4c02bf8365>`__ 
int
`level <../../db/dad/classTango_1_1DbServerInfo.html#a3132fb42bae316e343c15c4c02bf8365>`__;

883 };

884 

885 

886 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

887  \* \*

888  \* The DbServerCache class \*

889  \* ------------------ \*

890  \* \*

891 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

892 

893 //

894 // DbServerCache data object to implement a DB cache

895 // used during the DS startup sequence

896 //

897 

`898 <../../d3/d9c/classTango_1_1DbServerCache.html>`__ class
`DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__

899 {

900 public:

`901 <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__ 
typedef struct

902  {

`903 <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#a0e42efd9f31f600387eae69645c64f66>`__ 
int
`first\_idx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#a0e42efd9f31f600387eae69645c64f66>`__;

`904 <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#ad952ed7a070f9bff4c26097a5a518faf>`__ 
int
`last\_idx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#ad952ed7a070f9bff4c26097a5a518faf>`__;

905 
}\ `EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__;

906 

`907 <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__ 
typedef struct

908  {

`909 <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a8457f4be7e100d1dcf4fb8260df47987>`__ 
int
`first\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a8457f4be7e100d1dcf4fb8260df47987>`__;

`910 <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a2ec9d068b7f12da81e5ba021ea92bc50>`__ 
int
`last\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a2ec9d068b7f12da81e5ba021ea92bc50>`__;

`911 <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#aaf25dedcf01ca154ed028ef9af2326ad>`__ 
int
`prop\_nb <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#aaf25dedcf01ca154ed028ef9af2326ad>`__;

`912 <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#ad03a0a0dae699a0d96d8c4bd18ac78b5>`__ 
int
\*\ `props\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#ad03a0a0dae699a0d96d8c4bd18ac78b5>`__;

913 
}\ `PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__;

914 

`915 <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__ 
typedef struct

916  {

`917 <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a4a1ad16bd2dd0c0a4c7196c408856ef8>`__ 
int
`first\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a4a1ad16bd2dd0c0a4c7196c408856ef8>`__;

`918 <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a9445ae28cbac2d7d50a428779f4ed5b0>`__ 
int
`last\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a9445ae28cbac2d7d50a428779f4ed5b0>`__;

`919 <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#ac1324aa116a5d5f8ae1ba49577432867>`__ 
int
`att\_nb <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#ac1324aa116a5d5f8ae1ba49577432867>`__;

`920 <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a3c97041cf9ee27c8fcc229ea802907fb>`__ 
int
\*\ `atts\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a3c97041cf9ee27c8fcc229ea802907fb>`__;

921 
}\ `AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__;

922 

`923 <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__ 
typedef struct

924  {

`925 <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a5735aa1ef2a157043f6401533d02cf6c>`__ 
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
`dev\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a5735aa1ef2a157043f6401533d02cf6c>`__;

`926 <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#ace8c457cfa48d45026fd63268c5c0111>`__ 
`AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__
`dev\_att\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#ace8c457cfa48d45026fd63268c5c0111>`__;

`927 <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a549d5a6c97b601ba42e3daffefb39686>`__ 
`AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__
`dev\_pipe\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a549d5a6c97b601ba42e3daffefb39686>`__;

928 
}\ `DevEltIdx <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__;

929 

`930 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__ 
typedef struct

931  {

`932 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a819bca1fe1324afeabe56fd4b8b3bd74>`__ 
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
`class\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a819bca1fe1324afeabe56fd4b8b3bd74>`__;

`933 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a9fbbd8cdcb5c7a869d1292355fb09596>`__ 
`AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__
`class\_att\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a9fbbd8cdcb5c7a869d1292355fb09596>`__;

`934 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ac1c241656ef3f26fb2b640ebc745e9ac>`__ 
`AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__
`class\_pipe\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ac1c241656ef3f26fb2b640ebc745e9ac>`__;

`935 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#aef1b02184530ff5d021d9e3cacc148be>`__ 
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__
`dev\_list <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#aef1b02184530ff5d021d9e3cacc148be>`__;

`936 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ab12f2d6ea68e22e833517e5c2eaeaef3>`__ 
int
`dev\_nb <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ab12f2d6ea68e22e833517e5c2eaeaef3>`__;

`937 <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a334030bc2b46d5b5fa2b9c4402ca2553>`__ 
`DevEltIdx <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__
\*\ `devs\_idx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a334030bc2b46d5b5fa2b9c4402ca2553>`__;

938 
}\ `ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__;

939 

940 
`DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__\ (`Database <../../d6/dc5/classTango_1_1Database.html>`__
\*,string &,string &);

941 
~\ `DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__\ ();

942 

943  const DevVarLongStringArray \*import\_adm\_dev();

`944 <../../d6/dc5/classTango_1_1Database.html#a8e46a86143d90e308342c5ac673afaf7>`__ 
const DevVarLongStringArray \*import\_notifd\_event();

945  const DevVarLongStringArray \*import\_adm\_event();

946  const DevVarStringArray \*get\_class\_property(DevVarStringArray
\*);

947  const DevVarStringArray \*get\_dev\_property(DevVarStringArray \*);

948  const DevVarStringArray \*get\_dev\_list(DevVarStringArray \*);

949  const DevVarStringArray
\*get\_class\_att\_property(DevVarStringArray \*);

950  const DevVarStringArray \*get\_dev\_att\_property(DevVarStringArray
\*);

951  const DevVarStringArray \*get\_obj\_property(DevVarStringArray \*);

952  const DevVarStringArray
\*get\_device\_property\_list(DevVarStringArray \*);

953  const DevVarStringArray
\*get\_class\_pipe\_property(DevVarStringArray \*);

954  const DevVarStringArray
\*get\_dev\_pipe\_property(DevVarStringArray \*);

955  const DevVarLongStringArray \*import\_tac\_dev(string &);

956 

`957 <../../d3/d9c/classTango_1_1DbServerCache.html#aec240b67c7bae7eeac3a55f7cfe99bae>`__ 
const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__
&\ `get\_imp\_dat <../../d3/d9c/classTango_1_1DbServerCache.html#aec240b67c7bae7eeac3a55f7cfe99bae>`__\ ()
{return imp\_adm;}

`958 <../../d3/d9c/classTango_1_1DbServerCache.html#a545fc2b0346c24f12336bde2f2879e54>`__ 
const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__
&\ `get\_imp\_notifd\_event <../../d3/d9c/classTango_1_1DbServerCache.html#a545fc2b0346c24f12336bde2f2879e54>`__\ ()
{return imp\_notifd\_event;}

`959 <../../d3/d9c/classTango_1_1DbServerCache.html#ace05512b3c0ed14098351cefc5de755f>`__ 
const
`EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__
&\ `get\_imp\_adm\_event <../../d3/d9c/classTango_1_1DbServerCache.html#ace05512b3c0ed14098351cefc5de755f>`__\ ()
{return imp\_adm\_event;}

`960 <../../d3/d9c/classTango_1_1DbServerCache.html#aa1264b373e8a7ffa06fea2d669077283>`__ 
const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
&\ `get\_DServer\_class\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aa1264b373e8a7ffa06fea2d669077283>`__\ ()
{return DServer\_class\_prop;}

`961 <../../d3/d9c/classTango_1_1DbServerCache.html#aba3e6ed06dada57a8e28f41db77a36c3>`__ 
const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
&\ `get\_Default\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aba3e6ed06dada57a8e28f41db77a36c3>`__\ ()
{return Default\_prop;}

`962 <../../d3/d9c/classTango_1_1DbServerCache.html#a6f3388bbc156eb81639f43ed58c16957>`__ 
const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
&\ `get\_adm\_dev\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a6f3388bbc156eb81639f43ed58c16957>`__\ ()
{return adm\_dev\_prop;}

`963 <../../d3/d9c/classTango_1_1DbServerCache.html#a5b8b573b77b996c3a5e65ed91c726323>`__ 
const
`PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__
&\ `get\_ctrl\_serv\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a5b8b573b77b996c3a5e65ed91c726323>`__\ ()
{return ctrl\_serv\_prop;}

`964 <../../d3/d9c/classTango_1_1DbServerCache.html#a6fb218ae51715acd591cbe1866600273>`__ 
int
`get\_class\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a6fb218ae51715acd591cbe1866600273>`__\ ()
{return class\_nb;}

`965 <../../d3/d9c/classTango_1_1DbServerCache.html#a698cc95655debad33c798aed2029ca43>`__ 
const
`ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__
\*\ `get\_classes\_elt <../../d3/d9c/classTango_1_1DbServerCache.html#a698cc95655debad33c798aed2029ca43>`__\ ()
{return classes\_idx;}

`966 <../../d3/d9c/classTango_1_1DbServerCache.html#a563ac0a97a4264997f91a255ba5e9aa6>`__ 
int
`get\_data\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a563ac0a97a4264997f91a255ba5e9aa6>`__\ ()
{return n\_data;}

967 

968 private:

969  void prop\_indexes(int &,int &,PropEltIdx &,const DevVarStringArray
\*);

970  void prop\_att\_indexes(int &,int &,AttPropEltIdx &,const
DevVarStringArray \*);

971  void prop\_pipe\_indexes(int &,int &,AttPropEltIdx &,const
DevVarStringArray \*);

972  void get\_obj\_prop(DevVarStringArray \*,PropEltIdx &,bool
dev\_prop=false);

973  int find\_class(DevString );

974  int find\_dev\_att(DevString,int &,int &);

975  int find\_obj(DevString obj\_name,int &);

976  void get\_obj\_prop\_list(DevVarStringArray \*,PropEltIdx &);

977 

978  CORBA::Any\_var received;

979  const DevVarStringArray \*data\_list;

980  int n\_data;

981  int proc\_release;

982 

983  EltIdx imp\_adm;

984  EltIdx imp\_notifd\_event;

985  EltIdx imp\_adm\_event;

986  EltIdx imp\_tac;

987  PropEltIdx ctrl\_serv\_prop;

988  PropEltIdx DServer\_class\_prop;

989  PropEltIdx Default\_prop;

990  PropEltIdx adm\_dev\_prop;

991  int class\_nb;

992  ClassEltIdx \*classes\_idx;

993 

994  DevVarLongStringArray imp\_adm\_data;

995  DevVarLongStringArray imp\_notifd\_event\_data;

996  DevVarLongStringArray imp\_adm\_event\_data;

997  DevVarLongStringArray imp\_tac\_data;

998  DevVarStringArray ret\_obj\_prop;

999  DevVarStringArray ret\_dev\_list;

1000  DevVarStringArray ret\_obj\_att\_prop;

1001  DevVarStringArray ret\_obj\_pipe\_prop;

1002  DevVarStringArray ret\_prop\_list;

1003 };

1004 

1005 

1006 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

1007  \* \*

1008  \* The DbServerData class \*

1009  \* ---------------- \*

1010  \* \*

1011 
\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

1012 

1013 //

1014 // DbServerData object to implement the features required to move a
complete device server proces

1015 // configuration from one database to another one

1016 //

1017 

`1025 <../../dc/d95/classTango_1_1DbServerData.html>`__ class
`DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__

1026 {

1027 private:

1028  struct TangoProperty

1029  {

1030  string name;

1031  vector<string> values;

1032 

1033  TangoProperty(string &na, vector<string>
&val):name(na),values(val) {}

1034  };

1035 

1036  struct TangoAttribute: vector<TangoProperty>

1037  {

1038  string name;

1039 

1040  TangoAttribute(string na):name(na) {}

1041  };

1042 

1043  struct TangoPipe: vector<TangoProperty>

1044  {

1045  string name;

1046 

1047  TangoPipe(string na):name(na) {}

1048  };

1049 

1050  struct TangoDevice:
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

1051  {

1052  string name;

1053  vector<TangoProperty> properties;

1054  vector<TangoAttribute> attributes;

1055  vector<TangoPipe> pipes;

1056 

1057  TangoDevice(string &);

`1058 <../../d6/dc5/classTango_1_1Database.html#aca022f5e1ac4a4bad5068fd191d722be>`__ 

1059  string get\_name() {return name;}

1060  vector<TangoProperty> &get\_properties() {return properties;}

1061  vector<TangoAttribute> &get\_attributes() {return attributes;}

1062  vector<TangoPipe> &get\_pipes() {return pipes;}

1063 

1064  void put\_properties(Database \*);

1065  void put\_attribute\_properties(Database \*);

1066  void put\_pipe\_properties(Database \*);

1067  };

1068 

1069  struct TangoClass: vector<TangoDevice>

1070  {

1071  string name;

1072  vector<TangoProperty> properties;

1073  vector<TangoAttribute> attributes;

1074  vector<TangoPipe> pipes;

1075 

1076  TangoClass(const string &,const string &,Database \*);

1077 

1078  string get\_name() {return name;}

1079  vector<TangoProperty> &get\_properties() {return properties;}

1080  vector<TangoAttribute> &get\_attributes() {return attributes;}

1081  vector<TangoPipe> &get\_pipes() {return pipes;}

1082 

1083  void put\_properties(Database \*);

1084  void put\_attribute\_properties(Database \*);

1085  void put\_pipe\_properties(Database \*);

1086  void remove\_properties(Database \*);

1087  };

1088 

1089  void create\_server(Database \*);

1090  void put\_properties(Database \*);

1091 

1092  string full\_server\_name;

1093  vector<TangoClass> classes;

1094 

1095 public:

1106  DbServerData(const string &ds\_exec\_name,const string
&ds\_inst\_name);

1116  bool already\_exist(const string &tg\_host);

1124  void put\_in\_database(const string &tg\_host);

1132  void remove(const string &tg\_host);

1140  void remove();

1141 

1143  ~DbServerData() {}

1144 

1145  const string &get\_name() {return full\_server\_name;}

1146  vector<TangoClass> &get\_classes() {return classes;}

1147 };

1148 

1149 /\*

1150 // Some macros to call the Db server

1151 // These macros will do some retries in case of

1152 // timeout while calling the DB device

1153 // This is necessary in case of massive DS

1154 // startup (after a power cut for instance)

1155 // when the Db is over-loaded

1156 \*/

1157 

`1158 <../../dc/df8/dbapi_8h.html#a1001977b4dfc9f70af5f20d97ed8743d>`__ #define
MANAGE\_EXCEPT(NAME) \\

1159  catch (Tango::CommunicationFailed &e) \\

1160  { \\

1161  if (e.errors.length() >= 2) \\

1162  { \\

1163  if (::strcmp(e.errors[1].reason.in(),"API\_DeviceTimedOut") == 0)
\\

1164  { \\

1165  if (db\_retries != 0) \\

1166  { \\

1167  db\_retries--; \\

1168  if (db\_retries == 0) \\

1169  throw; \\

1170  } \\

1171  else \\

1172  throw; \\

1173  } \\

1174  else \\

1175  throw; \\

1176  } \\

1177  else \\

1178  throw; \\

1179  }

1180 

`1181 <../../dc/df8/dbapi_8h.html#a85ea3965d82f35e14eba1d170a127a0f>`__ #define
CALL\_DB\_SERVER\_NO\_RET(NAME,SEND) \\

1182  { \\

1183  bool retry\_mac = true; \\

1184  long db\_retries = 0; \\

1185  if (db\_tg != NULL) \\

1186  { \\

`1187 <../../d6/dc5/classTango_1_1Database.html#a0535d15f39ec906f3e8e615dd316ba4b>`__ 
if (db\_tg->is\_svr\_starting() == true) \\

1188  db\_retries = DB\_START\_PHASE\_RETRIES; \\

1189  } \\

1190  while (retry\_mac == true) \\

1191  { \\

1192  try \\

1193  { \\

1194  command\_inout(NAME,SEND); \\

1195  retry\_mac = false; \\

1196  } \\

1197  MANAGE\_EXCEPT(NAME) \\

1198  } \\

1199  }

1200 

`1201 <../../dc/df8/dbapi_8h.html#a4982ee044887994e11e6b73dce645581>`__ #define
CALL\_DB\_SERVER(NAME,SEND,RET) \\

1202  { \\

1203  bool retry\_mac = true; \\

1204  long db\_retries = 0; \\

1205  if (db\_tg != NULL) \\

1206  { \\

1207  if (db\_tg->is\_svr\_starting() == true) \\

1208  db\_retries = DB\_START\_PHASE\_RETRIES; \\

1209  } \\

1210  while (retry\_mac == true) \\

1211  { \\

1212  try \\

1213  { \\

1214  RET = command\_inout(NAME,SEND); \\

1215  retry\_mac = false; \\

1216  } \\

1217  MANAGE\_EXCEPT(NAME) \\

1218  } \\

1219  }

1220 

1221 } // End of Tango namespace

1222 

1223 #endif /\* \_DBAPI\_H \*/

`Tango::DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__

vector< DbDatum > DbData

**Definition:** dbapi.h:66

`Tango::DbDevExportInfo::name <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a24c85a993aeb2e914f7c2c37aa4b949f>`__

string name

The device name.

**Definition:** dbapi.h:863

`Tango::DbServerCache::get\_adm\_dev\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a6f3388bbc156eb81639f43ed58c16957>`__

const PropEltIdx & get\_adm\_dev\_prop()

**Definition:** dbapi.h:962

`Tango::DbServerCache::PropEltIdx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html>`__

**Definition:** dbapi.h:907

`Tango::DbDevFullInfo <../../d3/d6d/classTango_1_1DbDevFullInfo.html>`__

Device information from the database.

**Definition:** dbapi.h:836

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__

Pipe & operator<<(Pipe &, T &)

`Tango::Util <../../d4/deb/classTango_1_1Util.html>`__

This class is a used to store TANGO device server process data and to
provide the user with a set of ...

**Definition:** utils.h:153

`Tango::DbServerCache::get\_class\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a6fb218ae51715acd591cbe1866600273>`__

int get\_class\_nb()

**Definition:** dbapi.h:964

`Tango::DbClass <../../dc/d38/classTango_1_1DbClass.html>`__

A database object for a class which can be used to query or modify class
properties.

**Definition:** dbapi.h:267

`Tango::DbServerCache::get\_imp\_adm\_event <../../d3/d9c/classTango_1_1DbServerCache.html#ace05512b3c0ed14098351cefc5de755f>`__

const EltIdx & get\_imp\_adm\_event()

**Definition:** dbapi.h:959

`Tango::DbDevImportInfo::version <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a29cc919c256c62429416b56137bb1161>`__

string version

The device version (as a string)

**Definition:** dbapi.h:821

`Tango::Database <../../d6/dc5/classTango_1_1Database.html>`__

A high level object which contains the link to the database.

**Definition:** dbapi.h:53

`Tango::DbServerCache::get\_ctrl\_serv\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#a5b8b573b77b996c3a5e65ed91c726323>`__

const PropEltIdx & get\_ctrl\_serv\_prop()

**Definition:** dbapi.h:963

`Tango::DbServerCache::AttPropEltIdx::atts\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a3c97041cf9ee27c8fcc229ea802907fb>`__

int \* atts\_idx

**Definition:** dbapi.h:920

`Tango::DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__

Device import information from the database.

**Definition:** dbapi.h:815

`Tango::DbDevInfo <../../dd/d01/classTango_1_1DbDevInfo.html>`__

Device information for Database device creation.

**Definition:** dbapi.h:795

`Tango::DbServerCache::EltIdx::last\_idx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#ad952ed7a070f9bff4c26097a5a518faf>`__

int last\_idx

**Definition:** dbapi.h:904

`Tango::DbDevExportInfo <../../d6/d4b/classTango_1_1DbDevExportInfo.html>`__

Device export information to the database.

**Definition:** dbapi.h:860

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Tango::DbServerInfo <../../db/dad/classTango_1_1DbServerInfo.html>`__

**Definition:** dbapi.h:876

`Tango::DbServerCache::EltIdx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html>`__

**Definition:** dbapi.h:901

`Tango::DbServerCache::PropEltIdx::last\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a2ec9d068b7f12da81e5ba021ea92bc50>`__

int last\_idx

**Definition:** dbapi.h:910

`Tango::DbServerCache::PropEltIdx::first\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#a8457f4be7e100d1dcf4fb8260df47987>`__

int first\_idx

**Definition:** dbapi.h:909

`Tango::DbServerCache::DevEltIdx::dev\_att\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#ace8c457cfa48d45026fd63268c5c0111>`__

AttPropEltIdx dev\_att\_prop

**Definition:** dbapi.h:926

`Tango::DbDevExportInfo::host <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a110e2c28f3921258f4bed17f2543e1ac>`__

string host

The host name where the device server process runs.

**Definition:** dbapi.h:865

`Tango::DbDevFullInfo::pid <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a88cc31cdd59f77d84583f497e0d8a5c3>`__

long pid

The device server process PID (-1 if not set in DB)

**Definition:** dbapi.h:844

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::DbServerData <../../dc/d95/classTango_1_1DbServerData.html>`__

Class used to move/copy a complete device server process database
configuration from one Tango host t...

**Definition:** dbapi.h:1025

`Tango::DbDevImportInfo::exported <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a2a799d0bf486fecb4df770af69c71bd9>`__

long exported

The exported flag.

**Definition:** dbapi.h:819

`Tango::DbAttribute <../../d3/d25/classTango_1_1DbAttribute.html>`__

**Definition:** dbapi.h:122

`Tango::DbDatum::exceptions <../../d3/d0f/classTango_1_1DbDatum.html#adce60a23dccf7f08f1fc7f81cbc783f0>`__

void exceptions(bitset< DbDatum::numFlags > fl)

Set exception flag.

**Definition:** dbapi.h:558

`Tango::DbDevExportInfo::version <../../d6/d4b/classTango_1_1DbDevExportInfo.html#af88428a398f79b1f0da9b05bb727f173>`__

string version

The device version.

**Definition:** dbapi.h:866

`Tango::DbServerCache::ClassEltIdx::dev\_nb <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ab12f2d6ea68e22e833517e5c2eaeaef3>`__

int dev\_nb

**Definition:** dbapi.h:936

`Tango::DbServerInfo::name <../../db/dad/classTango_1_1DbServerInfo.html#a1a4201d68b83fa83167bceab6b6f18ff>`__

string name

**Definition:** dbapi.h:879

`Tango::DbDevFullInfo::ds\_full\_name <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a85c4fbc78980374147ae1e3ede672f8c>`__

string ds\_full\_name

The full device server process name.

**Definition:** dbapi.h:840

`Tango::DbServerCache::DevEltIdx::dev\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a5735aa1ef2a157043f6401533d02cf6c>`__

PropEltIdx dev\_prop

**Definition:** dbapi.h:925

`Tango::DbProperty <../../df/d27/classTango_1_1DbProperty.html>`__

**Definition:** dbapi.h:101

`Tango::DbDevFullInfo::started\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#aadfba1d0368c960d7f29997c6397f46e>`__

string started\_date

Date of the last device export (empty if not set in DB)

**Definition:** dbapi.h:842

`Tango::DbServerCache::get\_data\_nb <../../d3/d9c/classTango_1_1DbServerCache.html#a563ac0a97a4264997f91a255ba5e9aa6>`__

int get\_data\_nb()

**Definition:** dbapi.h:966

`Tango::DbDevInfo::\_class <../../dd/d01/classTango_1_1DbDevInfo.html#adb109d7fbbcf158b4c78331429c82617>`__

string \_class

The device class name.

**Definition:** dbapi.h:799

`Tango::DbServer <../../d6/deb/classTango_1_1DbServer.html>`__

A database object for a device server which can be used to query or
modify server database informatio...

**Definition:** dbapi.h:157

`Tango::DbServerCache::get\_classes\_elt <../../d3/d9c/classTango_1_1DbServerCache.html#a698cc95655debad33c798aed2029ca43>`__

const ClassEltIdx \* get\_classes\_elt()

**Definition:** dbapi.h:965

`Tango::operator>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__

WPipe & operator>>(WPipe &, T &)

`Tango::DbDevFullInfo::stopped\_date <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a08478bed60290351915a3d7f068389a3>`__

string stopped\_date

Date of the last device un-export (empty if not set in DB)

**Definition:** dbapi.h:843

`Tango::DbServerCache::ClassEltIdx::class\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a819bca1fe1324afeabe56fd4b8b3bd74>`__

PropEltIdx class\_prop

**Definition:** dbapi.h:932

`Tango::DbDevInfo::server <../../dd/d01/classTango_1_1DbDevInfo.html#ad890203d5a47fa9c16f9a0475ea17912>`__

string server

The full device server process name.

**Definition:** dbapi.h:800

`Tango::DbServerCache <../../d3/d9c/classTango_1_1DbServerCache.html>`__

**Definition:** dbapi.h:898

`Tango::DbDatum::set\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#aff8fbe5d2dd3c816b1ff24c55fb1295a>`__

void set\_exceptions(except\_flags fl)

Set one exception flag.

**Definition:** dbapi.h:594

`Tango::DbDevInfo::name <../../dd/d01/classTango_1_1DbDevInfo.html#a4d8d4ec738f75c08e8e8b8a2215b249a>`__

string name

The device name.

**Definition:** dbapi.h:798

`Tango::DbDevInfos <../../de/ddf/namespaceTango.html#aaec13f55a8cc1c657fc9966bfba00b0c>`__

vector< DbDevInfo > DbDevInfos

Some typedef and define.

**Definition:** dbapi.h:57

`devapi.h <../../d9/ddc/devapi_8h.html>`__

`Tango::DbServerInfo::mode <../../db/dad/classTango_1_1DbServerInfo.html#aa1fbfde436153239d7748c2dbbb9db58>`__

int mode

**Definition:** dbapi.h:881

`Tango::DbServerInfo::level <../../db/dad/classTango_1_1DbServerInfo.html#a3132fb42bae316e343c15c4c02bf8365>`__

int level

**Definition:** dbapi.h:882

`Tango::DbServerCache::get\_Default\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aba3e6ed06dada57a8e28f41db77a36c3>`__

const PropEltIdx & get\_Default\_prop()

**Definition:** dbapi.h:961

`Tango::DbDevExportInfos <../../de/ddf/namespaceTango.html#a7823670207a406676f96c82f1b73bd28>`__

vector< DbDevExportInfo > DbDevExportInfos

**Definition:** dbapi.h:64

`Tango::DbDevImportInfo::name <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a885165239e268932e47bfd5a8cfdaaef>`__

string name

The device name.

**Definition:** dbapi.h:818

`Tango::DbDatum <../../d3/d0f/classTango_1_1DbDatum.html>`__

A database value.

**Definition:** dbapi.h:443

`Tango::DbServerCache::get\_DServer\_class\_prop <../../d3/d9c/classTango_1_1DbServerCache.html#aa1264b373e8a7ffa06fea2d669077283>`__

const PropEltIdx & get\_DServer\_class\_prop()

**Definition:** dbapi.h:960

`Tango::DbServerInfo::host <../../db/dad/classTango_1_1DbServerInfo.html#ae436bfb29bba6dc69e3d4b17abd62803>`__

string host

**Definition:** dbapi.h:880

`Tango::DbDevImportInfo::ior <../../d0/d4b/classTango_1_1DbDevImportInfo.html#a5d22c1daf5d2d97fcb5939db4224ca07>`__

string ior

The device IOR.

**Definition:** dbapi.h:820

`Tango::DbServerCache::DevEltIdx <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html>`__

**Definition:** dbapi.h:923

`Tango::DbServerCache::AttPropEltIdx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html>`__

**Definition:** dbapi.h:915

`Tango::DbDevExportInfo::pid <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a140ed6681067ad229263d7f63be0212e>`__

int pid

The device server process PID.

**Definition:** dbapi.h:867

`Tango::DbServerCache::DevEltIdx::dev\_pipe\_prop <../../d0/d8d/structTango_1_1DbServerCache_1_1DevEltIdx.html#a549d5a6c97b601ba42e3daffefb39686>`__

AttPropEltIdx dev\_pipe\_prop

**Definition:** dbapi.h:927

`Tango::DbDatum::exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a332a7e23267e200c786a5b8486916205>`__

bitset< DbDatum::numFlags > exceptions()

Get exception flag.

**Definition:** dbapi.h:578

`Tango::DbServerCache::ClassEltIdx::devs\_idx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a334030bc2b46d5b5fa2b9c4402ca2553>`__

DevEltIdx \* devs\_idx

**Definition:** dbapi.h:937

`Tango::DbServerCache::ClassEltIdx::dev\_list <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#aef1b02184530ff5d021d9e3cacc148be>`__

EltIdx dev\_list

**Definition:** dbapi.h:935

`Tango::DbServerCache::ClassEltIdx::class\_att\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#a9fbbd8cdcb5c7a869d1292355fb09596>`__

AttPropEltIdx class\_att\_prop

**Definition:** dbapi.h:933

`Tango::DbServerCache::EltIdx::first\_idx <../../dd/dd7/structTango_1_1DbServerCache_1_1EltIdx.html#a0e42efd9f31f600387eae69645c64f66>`__

int first\_idx

**Definition:** dbapi.h:903

`Tango::DbHistory <../../d3/d55/classTango_1_1DbHistory.html>`__

Class used to retrieve database object history.

**Definition:** dbapi.h:724

`Tango::DbServerCache::AttPropEltIdx::first\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a4a1ad16bd2dd0c0a4c7196c408856ef8>`__

int first\_idx

**Definition:** dbapi.h:917

`Tango::DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__

High level class which provides the client with an easy-to-use interface
to TANGO devices...

**Definition:** devapi.h:56

`Tango::DbServerCache::get\_imp\_notifd\_event <../../d3/d9c/classTango_1_1DbServerCache.html#a545fc2b0346c24f12336bde2f2879e54>`__

const EltIdx & get\_imp\_notifd\_event()

**Definition:** dbapi.h:958

`Tango::DbServerCache::ClassEltIdx <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html>`__

**Definition:** dbapi.h:930

`Tango::DbServerCache::AttPropEltIdx::att\_nb <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#ac1324aa116a5d5f8ae1ba49577432867>`__

int att\_nb

**Definition:** dbapi.h:919

`Tango::DbDatum::reset\_exceptions <../../d3/d0f/classTango_1_1DbDatum.html#a6c4f542a1f33e2ff5e7f2e16aded5679>`__

void reset\_exceptions(except\_flags fl)

Reset one exception flag.

**Definition:** dbapi.h:586

`Tango::DbServerCache::PropEltIdx::props\_idx <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#ad03a0a0dae699a0d96d8c4bd18ac78b5>`__

int \* props\_idx

**Definition:** dbapi.h:912

`Tango::DbDevFullInfo::host <../../d3/d6d/classTango_1_1DbDevFullInfo.html#a6a4d6321daaa58dc575e230267347473>`__

string host

The host name where the device server process is running.

**Definition:** dbapi.h:841

`Tango::DbDevImportInfos <../../de/ddf/namespaceTango.html#a63b451c2d202d3b0b9024b1dd48086ec>`__

vector< DbDevImportInfo > DbDevImportInfos

**Definition:** dbapi.h:65

`Tango::DbServerCache::AttPropEltIdx::last\_idx <../../d8/deb/structTango_1_1DbServerCache_1_1AttPropEltIdx.html#a9445ae28cbac2d7d50a428779f4ed5b0>`__

int last\_idx

**Definition:** dbapi.h:918

`Tango::DbDevExportInfo::ior <../../d6/d4b/classTango_1_1DbDevExportInfo.html#a4626c342371b6f0001ac684dc9d22ff5>`__

string ior

The device IOR.

**Definition:** dbapi.h:864

`Tango::DbServerCache::ClassEltIdx::class\_pipe\_prop <../../de/d56/structTango_1_1DbServerCache_1_1ClassEltIdx.html#ac1c241656ef3f26fb2b640ebc745e9ac>`__

AttPropEltIdx class\_pipe\_prop

**Definition:** dbapi.h:934

`Tango::DbServerCache::get\_imp\_dat <../../d3/d9c/classTango_1_1DbServerCache.html#aec240b67c7bae7eeac3a55f7cfe99bae>`__

const EltIdx & get\_imp\_dat()

**Definition:** dbapi.h:957

`Tango::DbServerCache::PropEltIdx::prop\_nb <../../d4/d22/structTango_1_1DbServerCache_1_1PropEltIdx.html#aaf25dedcf01ca154ed028ef9af2326ad>`__

int prop\_nb

**Definition:** dbapi.h:911

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `dbapi.h <../../dc/df8/dbapi_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
