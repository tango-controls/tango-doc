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

w\_attribute.h

`Go to the documentation of this
file. <../../df/da4/w__attribute_8h.html>`__

1 //=============================================================================

2 //

3 // file : w\_attribute.h

4 //

5 // description : Include file for the WAttribute classes.

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

35 #ifndef \_WATTRIBUTE\_H

36 #define \_WATTRIBUTE\_H

37 

38 #include <tango.h>

39 #include
<`tango/server/attrdesc.h <../../d4/d18/attrdesc_8h.html>`__\ >

40 #include <functional>

41 #include <time.h>

42 

43 namespace `Tango <../../de/ddf/namespaceTango.html>`__

44 {

45 

46 //=============================================================================

47 //

48 // The WAttribute class

49 //

50 //

51 // description : This class inherits the Attribute class. There is
one

52 // instance of this class for each writable attribute

53 //

54 //=============================================================================

55 

56 

`68 <../../db/da8/classTango_1_1WAttribute.html>`__ class
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__:public
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

69 {

70 public:

71 

85 
`WAttribute <../../db/da8/classTango_1_1WAttribute.html#ab08504608863f5dd88503e914d84027f>`__\ (vector<AttrProperty>
&prop\_list,\ `Attr <../../d5/dcd/classTango_1_1Attr.html>`__
&tmp\_attr,string &dev\_name,long idx);

87 

95 
`~WAttribute <../../db/da8/classTango_1_1WAttribute.html#a9d46d82cb48de388e34671f1276b3723>`__\ ();

97 

`108 <../../db/da8/classTango_1_1WAttribute.html#a07014d9f378998d66b12211ee78efe49>`__ 
bool
`is\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a07014d9f378998d66b12211ee78efe49>`__\ ()
{return
`check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__;}

114  template <typename T>

115  void
`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__\ (const
T
&\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__);

116 

117  void
`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__\ (char
\*\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__);

118  void
`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__\ (const
char
\*\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__);

126  template <typename T>

127  void
`get\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a6cf44ad3c1cd92d3a3c72399c1905115>`__\ (T
&\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__);

`134 <../../db/da8/classTango_1_1WAttribute.html#a75be52f036f4e7e4a0de5f6418a10cfd>`__ 
bool
`is\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a75be52f036f4e7e4a0de5f6418a10cfd>`__\ ()
{return
`check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__;}

140  template <typename T>

141  void
`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#afad111e0f1db4e181a42739ef994bae9>`__\ (const
T
&\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__);

142 

143  void
`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#afad111e0f1db4e181a42739ef994bae9>`__\ (char
\*\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__);

144  void
`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#afad111e0f1db4e181a42739ef994bae9>`__\ (const
char
\*\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__);

152  template <typename T>

153  void
`get\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a257f2909d2037875379471e1c05a0c20>`__\ (T
&\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__);

155 

166  long
`get\_write\_value\_length <../../db/da8/classTango_1_1WAttribute.html#a86f808b64fd05cc0a7912ede8a746503>`__\ ();

167 

`175 <../../db/da8/classTango_1_1WAttribute.html#a68956bf1b7eebe867fda36e338d8d34e>`__ 
struct timeval
&\ `get\_write\_date <../../db/da8/classTango_1_1WAttribute.html#a68956bf1b7eebe867fda36e338d8d34e>`__\ ()
{return write\_date;}

176 

`184 <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__\ (Tango::DevShort
&val) {val = short\_val;}

185 

`194 <../../db/da8/classTango_1_1WAttribute.html#ad6dd31d7f2e1d0b61a02d0cef36f3f40>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad6dd31d7f2e1d0b61a02d0cef36f3f40>`__\ (const
Tango::DevShort \*&ptr) {ptr = short\_ptr;}

195 

`203 <../../db/da8/classTango_1_1WAttribute.html#a9a4f1224a1413145f1217224846f6769>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a9a4f1224a1413145f1217224846f6769>`__\ (Tango::DevLong
&val) {val = long\_val;}

204 

`213 <../../db/da8/classTango_1_1WAttribute.html#adb5b6c5a41e64f332780d427b8dc6b48>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#adb5b6c5a41e64f332780d427b8dc6b48>`__\ (const
Tango::DevLong \*&ptr) {ptr = long\_ptr;}

214 

`222 <../../db/da8/classTango_1_1WAttribute.html#a1730f61d25e6c17b1f73f456c85b71b4>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a1730f61d25e6c17b1f73f456c85b71b4>`__\ (Tango::DevLong64
&val) {val = long64\_val;}

223 

`232 <../../db/da8/classTango_1_1WAttribute.html#a47d8dc15428a7af9a51568c3e3f14c88>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a47d8dc15428a7af9a51568c3e3f14c88>`__\ (const
Tango::DevLong64 \*&ptr) {ptr = long64\_ptr;}

233 

234 

`242 <../../db/da8/classTango_1_1WAttribute.html#aaa70e99095ff936a466557500ce80d7c>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aaa70e99095ff936a466557500ce80d7c>`__\ (Tango::DevFloat
&val) {val = float\_val;}

243 

`252 <../../db/da8/classTango_1_1WAttribute.html#affccdd1fa0fd1510c433ee646ca7d6b5>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#affccdd1fa0fd1510c433ee646ca7d6b5>`__\ (const
Tango::DevFloat \*&ptr) {ptr = float\_ptr;}

253 

`261 <../../db/da8/classTango_1_1WAttribute.html#a5d3b6c042f4247f6875bd31b7131a504>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5d3b6c042f4247f6875bd31b7131a504>`__\ (Tango::DevDouble
&val) {val = double\_val;}

262 

`271 <../../db/da8/classTango_1_1WAttribute.html#a7ec8e0f56008cf8b7eb8081880d89088>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a7ec8e0f56008cf8b7eb8081880d89088>`__\ (const
Tango::DevDouble \*&ptr) {ptr = double\_ptr;}

272 

`280 <../../db/da8/classTango_1_1WAttribute.html#af03e9a1cc30010efbc8d6f4f5a0a1e90>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af03e9a1cc30010efbc8d6f4f5a0a1e90>`__\ (Tango::DevString
&val) {val = str\_val;}

281 

`290 <../../db/da8/classTango_1_1WAttribute.html#ad56e6c3da60658694a2109539ab21eb9>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad56e6c3da60658694a2109539ab21eb9>`__\ (const
`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__
\*&ptr) {ptr = str\_ptr;}

291 

`299 <../../db/da8/classTango_1_1WAttribute.html#a450912b6c7d969e30a860b61e33feefc>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a450912b6c7d969e30a860b61e33feefc>`__\ (Tango::DevBoolean
&val) {val = boolean\_val;}

300 

`309 <../../db/da8/classTango_1_1WAttribute.html#a0cbba0e559000c0f1219ab17f157a11d>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a0cbba0e559000c0f1219ab17f157a11d>`__\ (const
Tango::DevBoolean \*&ptr) {ptr = boolean\_ptr;}

310 

`318 <../../db/da8/classTango_1_1WAttribute.html#a6fe68e2c6d8a9554c7672d397d5552f8>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a6fe68e2c6d8a9554c7672d397d5552f8>`__\ (Tango::DevUShort
&val) {val = ushort\_val;}

319 

`328 <../../db/da8/classTango_1_1WAttribute.html#a072b84cc51584a41264643264d5bb6c2>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a072b84cc51584a41264643264d5bb6c2>`__\ (const
Tango::DevUShort \*&ptr) {ptr = ushort\_ptr;}

329 

`337 <../../db/da8/classTango_1_1WAttribute.html#a4a89cf4ea54ec94c484c70bae6ceb75b>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4a89cf4ea54ec94c484c70bae6ceb75b>`__\ (Tango::DevUChar
&val) {val = uchar\_val;}

338 

`347 <../../db/da8/classTango_1_1WAttribute.html#a4463f984b296692b9a949a940db4bf1d>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4463f984b296692b9a949a940db4bf1d>`__\ (const
Tango::DevUChar \*&ptr) {ptr = uchar\_ptr;}

348 

`356 <../../db/da8/classTango_1_1WAttribute.html#a3d237324e8a665bd683072541739a535>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a3d237324e8a665bd683072541739a535>`__\ (Tango::DevULong
&val) {val = ulong\_val;}

357 

`366 <../../db/da8/classTango_1_1WAttribute.html#a2a2f07b43086da7db6969effac4f1d92>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a2a2f07b43086da7db6969effac4f1d92>`__\ (const
Tango::DevULong \*&ptr) {ptr = ulong\_ptr;}

367 

`375 <../../db/da8/classTango_1_1WAttribute.html#af547b58cb53a0fd8aa50ab00c4fe6189>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af547b58cb53a0fd8aa50ab00c4fe6189>`__\ (Tango::DevULong64
&val) {val = ulong64\_val;}

376 

`385 <../../db/da8/classTango_1_1WAttribute.html#af7cb9701c05c9d259a00ce971f78f819>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af7cb9701c05c9d259a00ce971f78f819>`__\ (const
Tango::DevULong64 \*&ptr) {ptr = ulong64\_ptr;}

386 

`394 <../../db/da8/classTango_1_1WAttribute.html#a51b4f9ded3cd084865544c278c2662c6>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a51b4f9ded3cd084865544c278c2662c6>`__\ (Tango::DevState
&val) {val = dev\_state\_val;}

395 

`404 <../../db/da8/classTango_1_1WAttribute.html#ae2cb72cb6cae7e768125ad46abab5cba>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae2cb72cb6cae7e768125ad46abab5cba>`__\ (const
Tango::DevState \*&ptr) {ptr = state\_ptr;}

405 

`413 <../../db/da8/classTango_1_1WAttribute.html#a735b032e880d25f09c026a1118e17027>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a735b032e880d25f09c026a1118e17027>`__\ (Tango::DevEncoded
&val) {val = encoded\_val;}

414 

`423 <../../db/da8/classTango_1_1WAttribute.html#a4da04db21379786d29ab52d4ad5d154c>`__ 
void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4da04db21379786d29ab52d4ad5d154c>`__\ (const
Tango::DevEncoded \*&ptr) {ptr = encoded\_ptr;}

424 

425 

427 

438  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevShort
val);

448  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevShort
\*val, long x = 1, long y = 0);

457  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevShort>
&val, long x = 1, long y = 0);

458 

465  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevLong
val);

475  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevLong
\*val, long x = 1, long y = 0);

484  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevLong>
&val, long x = 1, long y = 0);

485 

492  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevLong64
val);

502  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevLong64
\*val, long x = 1, long y = 0);

511  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevLong64>
&val, long x = 1, long y = 0);

512 

519  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevDouble
val);

529  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevDouble
\*val, long x = 1, long y = 0);

538  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevDouble>
&val, long x = 1, long y = 0);

539 

546  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevString
val);

553  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (string
&val);

562  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevString
\*val, long x = 1, long y = 0);

571  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<string>
&val, long x = 1, long y = 0);

572 

579  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevFloat
val);

589  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevFloat
\*val, long x = 1, long y = 0);

598  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevFloat>
&val, long x = 1, long y = 0);

599 

606  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevBoolean
val);

616  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevBoolean
\*val, long x = 1, long y = 0);

625  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevBoolean>
&val, long x = 1, long y = 0);

626 

633  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevUShort
val);

643  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevUShort
\*val, long x = 1, long y = 0);

652  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevUShort>
&val, long x = 1, long y = 0);

653 

660  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevUChar
val);

670  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevUChar
\*val, long x = 1, long y = 0);

679  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevUChar>
&val, long x = 1, long y = 0);

680 

687  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevULong
val);

697  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevULong
\*val, long x = 1, long y = 0);

706  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevULong>
&val, long x = 1, long y = 0);

707 

714  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevULong64
val);

724  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevULong64
\*val, long x = 1, long y = 0);

733  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevULong64>
&val, long x = 1, long y = 0);

734 

741  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevState
val);

750  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevState
\*val, long x = 1, long y = 0);

759  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<Tango::DevState>
&val, long x = 1, long y = 0);

761 

763 

764  template <typename T>

765  void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__\ (T
&);

766 

767  template <typename T>

768  void
`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__\ (const
T \*&);

769 

770  template <typename T>

771  void check\_type(T &,const string &);

772 

773  template <typename T>

774  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (T);

775 

776  template <typename T>

777  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (T
\*,long,long);

778 

779  template <typename T>

780  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (vector<T>
&,long,long);

781 

782 

783 

784 

785 

786 

787  void
`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__\ (Tango::DevEncoded
\*, long x = 1,long y = 0); // Dummy method for compiler

788 

789  virtual void set\_rvalue();

790 

791  void rollback();

792 

793  void check\_written\_value(const CORBA::Any &,unsigned
long,unsigned long);

794  void check\_written\_value(const DevVarEncodedArray &,unsigned
long,unsigned long);

795  void check\_written\_value(const AttrValUnion &,unsigned
long,unsigned long);

796 

797  void copy\_data(const CORBA::Any &);

798  void copy\_data(const Tango::AttrValUnion &);

799 

800  long get\_w\_dim\_x() {return w\_dim\_x;}

801  long get\_w\_dim\_y() {return w\_dim\_y;}

802 

803  void set\_user\_set\_write\_value(bool val) {uswv = val;}

804  bool get\_user\_set\_write\_value() {return uswv;}

805 

806  Tango::DevVarShortArray \*get\_last\_written\_sh() {return
&short\_array\_val;}

807  Tango::DevVarLongArray \*get\_last\_written\_lg() {return
&long\_array\_val;}

808  Tango::DevVarDoubleArray \*get\_last\_written\_db() {return
&double\_array\_val;}

809  Tango::DevVarStringArray \*get\_last\_written\_str() {return
&str\_array\_val;}

810  Tango::DevVarFloatArray \*get\_last\_written\_fl() {return
&float\_array\_val;}

811  Tango::DevVarBooleanArray \*get\_last\_written\_boo() {return
&boolean\_array\_val;}

812  Tango::DevVarUShortArray \*get\_last\_written\_ush() {return
&ushort\_array\_val;}

813  Tango::DevVarCharArray \*get\_last\_written\_uch() {return
&uchar\_array\_val;}

814  Tango::DevVarLong64Array \*get\_last\_written\_lg64() {return
&long64\_array\_val;}

815  Tango::DevVarULong64Array \*get\_last\_written\_ulg64() {return
&ulong64\_array\_val;}

816  Tango::DevVarULongArray \*get\_last\_written\_ulg() {return
&ulong\_array\_val;}

817  Tango::DevVarStateArray \*get\_last\_written\_state() {return
&state\_array\_val;}

818  Tango::DevEncoded &get\_last\_written\_encoded() {return
encoded\_val;}

819 

820  bool is\_memorized() {return memorized;}

821  bool get\_memorized() {return memorized;}

822  void set\_memorized(bool mem) {memorized = mem;}

823  bool is\_memorized\_init() {return memorized\_init;}

824  bool get\_memorized\_init() {return memorized\_init;}

825  void set\_memorized\_init(bool mem\_init) {memorized\_init =
mem\_init;}

826  string &get\_mem\_value() {return mem\_value;}

827  void set\_mem\_value(const string &new\_val) {mem\_value =
new\_val;}

828  void set\_written\_date();

829  bool
mem\_value\_below\_above(\ `MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__,string
&);

830 

831  void set\_mem\_exception(const DevErrorList &df)

832  {

833  mem\_exception = df;

834  mem\_write\_failed = true;

835  att\_mem\_exception = true;

836  }

837  DevErrorList &get\_mem\_exception() {return mem\_exception;}

838  void clear\_mem\_exception()

839  {

840  mem\_exception.length(0);

841  mem\_write\_failed = false;

842  att\_mem\_exception = false;

843  }

844 

845  void set\_mem\_write\_failed(bool bo) {mem\_write\_failed=bo;}

846  bool get\_mem\_write\_failed() {return mem\_write\_failed;}

847 

848 protected:

850  virtual bool check\_rds\_alarm();

851 

852 private:

853  inline void check\_length(const unsigned int nb\_data, unsigned
long x, unsigned long y)

854  {

855  if ((!y && nb\_data != x ) \|\| (y && nb\_data != (x \* y)))

856 
`Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ (`API\_AttrIncorrectDataNumber <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__,"Incorrect
data number","WAttribute::check\_written\_value()");

857  }

858  template<typename T1, typename T2>

859  void check\_min\_max(const unsigned int,const T1 &,const T2 &,const
T2 &);

860 

861 //

862 // The extension class

863 //

864 

865  class WAttributeExt

866  {

867  public:

868  WAttributeExt() {}

869  };

870 

871 // Defined prior to Tango IDL release 3

872 

873  Tango::DevShort short\_val;

874  Tango::DevShort old\_short\_val;

875 

876  Tango::DevLong long\_val;

877  Tango::DevLong old\_long\_val;

878 

879  Tango::DevDouble double\_val;

880  Tango::DevDouble old\_double\_val;

881 

882  Tango::DevString str\_val;

883  Tango::DevString old\_str\_val;

884 

885  Tango::DevFloat float\_val;

886  Tango::DevFloat old\_float\_val;

887 

888  Tango::DevBoolean boolean\_val;

889  Tango::DevBoolean old\_boolean\_val;

890 

891  Tango::DevUShort ushort\_val;

892  Tango::DevUShort old\_ushort\_val;

893 

894  Tango::DevUChar uchar\_val;

895  Tango::DevUChar old\_uchar\_val;

896 

897  Tango::DevEncoded encoded\_val;

898  Tango::DevEncoded old\_encoded\_val;

899 

900 // Added for Tango IDL release 3

901 

902  long w\_dim\_y;

903  long w\_dim\_x;

904 

905  Tango::DevVarShortArray short\_array\_val;

906  Tango::DevVarLongArray long\_array\_val;

907  Tango::DevVarDoubleArray double\_array\_val;

908  Tango::DevVarStringArray str\_array\_val;

909  Tango::DevVarFloatArray float\_array\_val;

910  Tango::DevVarBooleanArray boolean\_array\_val;

911  Tango::DevVarUShortArray ushort\_array\_val;

912  Tango::DevVarCharArray uchar\_array\_val;

913 

914  const Tango::DevShort \*short\_ptr;

915  const Tango::DevLong \*long\_ptr;

916  const Tango::DevDouble \*double\_ptr;

917  const
`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__
\*str\_ptr;

918  const Tango::DevFloat \*float\_ptr;

919  const Tango::DevBoolean \*boolean\_ptr;

920  const Tango::DevUShort \*ushort\_ptr;

921  const Tango::DevUChar \*uchar\_ptr;

922  const Tango::DevEncoded \*encoded\_ptr;

923 

924  bool string\_allocated;

925  bool memorized;

926  bool memorized\_init;

927  string mem\_value;

928  struct timeval write\_date;

929 

930 #ifdef HAS\_UNIQUE\_PTR

931  unique\_ptr<WAttributeExt> w\_ext; // Class extension

932 #else

933  WAttributeExt \*w\_ext;

934 #endif

935 

936 //

937 // Ported from the extension class

938 //

939 

940  Tango::DevLong64 long64\_val;

941  Tango::DevLong64 old\_long64\_val;

942  Tango::DevULong ulong\_val;

943  Tango::DevULong old\_ulong\_val;

944  Tango::DevULong64 ulong64\_val;

945  Tango::DevULong64 old\_ulong64\_val;

946  Tango::DevState dev\_state\_val;

947  Tango::DevState old\_dev\_state\_val;

948 

949  Tango::DevVarLong64Array long64\_array\_val;

950  Tango::DevVarULongArray ulong\_array\_val;

951  Tango::DevVarULong64Array ulong64\_array\_val;

952  Tango::DevVarStateArray state\_array\_val;

953 

954  const Tango::DevLong64 \*long64\_ptr;

955  const Tango::DevULong \*ulong\_ptr;

956  const Tango::DevULong64 \*ulong64\_ptr;

957  const Tango::DevState \*state\_ptr;

958 

959  bool uswv; // User set\_write\_value

960  DevErrorList mem\_exception; // Exception received at start-up in
case writing the

961  // memorized att. failed

962  bool mem\_write\_failed; // Flag set to true if the memorized att
setting failed

963 };

964 

965 

`966 <../../df/da4/w__attribute_8h.html#a7f9db7493b5ca2f9c2b7b18d118f2891>`__ #define
COMPUTE\_TIME\_DIFF(RESULT,BEFORE,AFTER) \\

967 long bef = ((BEFORE.tv\_sec - 1095000000) \* 1000) +
(BEFORE.tv\_usec / 1000); \\

968 long after = ((AFTER.tv\_sec - 1095000000) \* 1000) +
(AFTER.tv\_usec / 1000); \\

969 RESULT = after - bef;

970 

971 } // End of Tango namespace

972 

973 #endif // \_WATTRIBUTE\_H

`Tango::WAttribute::is\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a75be52f036f4e7e4a0de5f6418a10cfd>`__

bool is\_max\_value()

Check if the attribute has a maximum value.

**Definition:** w\_attribute.h:134

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae2cb72cb6cae7e768125ad46abab5cba>`__

void get\_write\_value(const Tango::DevState \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the at...

**Definition:** w\_attribute.h:404

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a3d237324e8a665bd683072541739a535>`__

void get\_write\_value(Tango::DevULong &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong.

**Definition:** w\_attribute.h:356

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a47d8dc15428a7af9a51568c3e3f14c88>`__

void get\_write\_value(const Tango::DevLong64 \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the at...

**Definition:** w\_attribute.h:232

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a9a4f1224a1413145f1217224846f6769>`__

void get\_write\_value(Tango::DevLong &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong.

**Definition:** w\_attribute.h:203

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a735b032e880d25f09c026a1118e17027>`__

void get\_write\_value(Tango::DevEncoded &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded.

**Definition:** w\_attribute.h:413

`Tango::Attribute::max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__

Tango::Attr\_CheckVal max\_value

The attribute maximum value in binary format.

**Definition:** attribute.h:2037

`Tango::WAttribute::is\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a07014d9f378998d66b12211ee78efe49>`__

bool is\_min\_value()

Check if the attribute has a minimum value.

**Definition:** w\_attribute.h:108

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5d3b6c042f4247f6875bd31b7131a504>`__

void get\_write\_value(Tango::DevDouble &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble.

**Definition:** w\_attribute.h:261

`Tango::WAttribute::get\_write\_value\_length <../../db/da8/classTango_1_1WAttribute.html#a86f808b64fd05cc0a7912ede8a746503>`__

long get\_write\_value\_length()

Retrieve the new value length (data number) for writable attribute.

`Tango::API\_AttrIncorrectDataNumber <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__

const char \*const API\_AttrIncorrectDataNumber

**Definition:** tango\_const.h:334

`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

This class represents a Tango attribute.

**Definition:** attribute.h:163

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a450912b6c7d969e30a860b61e33feefc>`__

void get\_write\_value(Tango::DevBoolean &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean.

**Definition:** w\_attribute.h:299

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__

void get\_write\_value(Tango::DevShort &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort.

**Definition:** w\_attribute.h:184

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af7cb9701c05c9d259a00ce971f78f819>`__

void get\_write\_value(const Tango::DevULong64 \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the at...

**Definition:** w\_attribute.h:385

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad6dd31d7f2e1d0b61a02d0cef36f3f40>`__

void get\_write\_value(const Tango::DevShort \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort and the att...

**Definition:** w\_attribute.h:194

`Tango::WAttribute::set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__

void set\_write\_value(Tango::DevShort val)

Set the writable scalar attribute value when the attribute data type is
Tango::DevShort.

`Tango::Attribute::check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__

bool check\_max\_value

Flag set to true if a maximum alarm is defined.

**Definition:** attribute.h:2053

`Tango::WAttribute::get\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a6cf44ad3c1cd92d3a3c72399c1905115>`__

void get\_min\_value(T &min\_value)

Gets attribute minimum value or throws an exception if the attribute
does not have a minimum value...

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a51b4f9ded3cd084865544c278c2662c6>`__

void get\_write\_value(Tango::DevState &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevState.

**Definition:** w\_attribute.h:394

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a6fe68e2c6d8a9554c7672d397d5552f8>`__

void get\_write\_value(Tango::DevUShort &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort.

**Definition:** w\_attribute.h:318

`Tango::Attribute::check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__

bool check\_min\_value

Flag set to true if a minimum value is defined.

**Definition:** attribute.h:2049

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4da04db21379786d29ab52d4ad5d154c>`__

void get\_write\_value(const Tango::DevEncoded \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded and the a...

**Definition:** w\_attribute.h:423

`Tango::WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__

This class represents a writable attribute.

**Definition:** w\_attribute.h:68

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad56e6c3da60658694a2109539ab21eb9>`__

void get\_write\_value(const Tango::ConstDevString \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevString and the at...

**Definition:** w\_attribute.h:290

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#adb5b6c5a41e64f332780d427b8dc6b48>`__

void get\_write\_value(const Tango::DevLong \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong and the attr...

**Definition:** w\_attribute.h:213

`Tango::MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__

MinMaxValueCheck

**Definition:** tango\_const.h:1155

`Tango::WAttribute::set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#afad111e0f1db4e181a42739ef994bae9>`__

void set\_max\_value(const T &max\_value)

Set attribute maximum value.

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#affccdd1fa0fd1510c433ee646ca7d6b5>`__

void get\_write\_value(const Tango::DevFloat \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat and the att...

**Definition:** w\_attribute.h:252

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af03e9a1cc30010efbc8d6f4f5a0a1e90>`__

void get\_write\_value(Tango::DevString &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevString.

**Definition:** w\_attribute.h:280

`Tango::Attribute::min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__

Tango::Attr\_CheckVal min\_value

The attribute minimum value in binary format.

**Definition:** attribute.h:2033

`Tango::Attr <../../d5/dcd/classTango_1_1Attr.html>`__

User class to create a no dimension attribute object.

**Definition:** attrdesc.h:376

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af547b58cb53a0fd8aa50ab00c4fe6189>`__

void get\_write\_value(Tango::DevULong64 &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong64.

**Definition:** w\_attribute.h:375

`Tango::WAttribute::get\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a257f2909d2037875379471e1c05a0c20>`__

void get\_max\_value(T &max\_value)

Get attribute maximum value or throws an exception if the attribute does
not have a maximum value...

`Tango::WAttribute::~WAttribute <../../db/da8/classTango_1_1WAttribute.html#a9d46d82cb48de388e34671f1276b3723>`__

~WAttribute()

The WAttribute desctructor.

`Tango::WAttribute::set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__

void set\_min\_value(const T &min\_value)

Set attribute minimum value.

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4a89cf4ea54ec94c484c70bae6ceb75b>`__

void get\_write\_value(Tango::DevUChar &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar.

**Definition:** w\_attribute.h:337

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a7ec8e0f56008cf8b7eb8081880d89088>`__

void get\_write\_value(const Tango::DevDouble \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble and the at...

**Definition:** w\_attribute.h:271

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aaa70e99095ff936a466557500ce80d7c>`__

void get\_write\_value(Tango::DevFloat &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat.

**Definition:** w\_attribute.h:242

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a1730f61d25e6c17b1f73f456c85b71b4>`__

void get\_write\_value(Tango::DevLong64 &val)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64.

**Definition:** w\_attribute.h:222

`Tango::WAttribute::WAttribute <../../db/da8/classTango_1_1WAttribute.html#ab08504608863f5dd88503e914d84027f>`__

WAttribute(vector< AttrProperty > &prop\_list, Attr &tmp\_attr, string
&dev\_name, long idx)

Create a new Writable Attribute object.

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__

static void throw\_exception(const char \*reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:122

`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__

const char \* ConstDevString

**Definition:** tango\_const.h:469

`Tango::WAttribute::get\_write\_date <../../db/da8/classTango_1_1WAttribute.html#a68956bf1b7eebe867fda36e338d8d34e>`__

struct timeval & get\_write\_date()

Retrieve the date of the last attribute writing.

**Definition:** w\_attribute.h:175

`attrdesc.h <../../d4/d18/attrdesc_8h.html>`__

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a0cbba0e559000c0f1219ab17f157a11d>`__

void get\_write\_value(const Tango::DevBoolean \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean and the a...

**Definition:** w\_attribute.h:309

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a2a2f07b43086da7db6969effac4f1d92>`__

void get\_write\_value(const Tango::DevULong \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong and the att...

**Definition:** w\_attribute.h:366

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4463f984b296692b9a949a940db4bf1d>`__

void get\_write\_value(const Tango::DevUChar \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar and the att...

**Definition:** w\_attribute.h:347

`Tango::WAttribute::get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a072b84cc51584a41264643264d5bb6c2>`__

void get\_write\_value(const Tango::DevUShort \*&ptr)

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort and the at...

**Definition:** w\_attribute.h:328

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `w\_attribute.h <../../df/da4/w__attribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
