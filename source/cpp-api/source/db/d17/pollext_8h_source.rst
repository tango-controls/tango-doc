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

pollext.h

`Go to the documentation of this file. <../../db/d17/pollext_8h.html>`__

1 //=============================================================================

2 //

3 // file : PollExt.h

4 //

5 // description : Include for classes used by the method dedicated

6 // to fill the polling buffer for command or

7 // attributes.

8 //

9 // project : TANGO

10 //

11 // author(s) : E.Taurel

12 //

13 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

14 // European Synchrotron Radiation Facility

15 // BP 220, Grenoble 38043

16 // FRANCE

17 //

18 // This file is part of Tango.

19 //

20 // Tango is free software: you can redistribute it and/or modify

21 // it under the terms of the GNU Lesser General Public License as
published by

22 // the Free Software Foundation, either version 3 of the License, or

23 // (at your option) any later version.

24 //

25 // Tango is distributed in the hope that it will be useful,

26 // but WITHOUT ANY WARRANTY; without even the implied warranty of

27 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

28 // GNU Lesser General Public License for more details.

29 //

30 // You should have received a copy of the GNU Lesser General Public
License

31 // along with Tango. If not, see <http://www.gnu.org/licenses/>.

32 //

33 // $Revision: 15556

34 //

35 //=============================================================================

36 

37 #ifndef \_POLLEXT\_H

38 #define \_POLLEXT\_H

39 

40 #include <tango.h>

41 

42 namespace `Tango <../../de/ddf/namespaceTango.html>`__

43 {

44 

45 //=============================================================================

46 //

47 // Attribute related class

48 //

49 // description : These classes are used when the user want to fill

50 // attribute polling buffer

51 //

52 //=============================================================================

53 

54 //=============================================================================

55 //

56 // The AttrData class

57 //

58 //

59 // description : This class is used to store all the data needed to
build

60 // an attribute value.

61 //

62 //=============================================================================

63 

`64 <../../db/d17/pollext_8h.html#a55ff6cf2d431f70c018dac5372bd3596>`__ #define
\_\_CHECK\_DIM() \\

65  if ((x == 0) \|\| (y == 0)) \\

66  { \\

67  Except::throw\_exception((const char \*)API\_AttrOptProp, \\

68  (const char \*)"X or Y dimension cannot be 0 for image attribute",
\\

69  (const char \*)"AttrData::AttrData"); \\

70  } \\

71  else \\

72  (void)0

73 

`74 <../../db/d17/pollext_8h.html#a6f3bb473425819c00929ff64ab7c4b74>`__ #define
\_\_CHECK\_DIM\_X() \\

75  if (x == 0) \\

76  { \\

77  Except::throw\_exception((const char \*)API\_AttrOptProp, \\

78  (const char \*)"X dimension cannot be 0 for spectrum or image
attribute", \\

79  (const char \*)"AttrData::AttrData"); \\

80  } \\

81  else \\

82  (void)0

83 

84 template <typename T>

`85 <../../d4/d7a/classTango_1_1AttrData.html>`__ class
`AttrData <../../d4/d7a/classTango_1_1AttrData.html>`__

86 {

87 public:

`88 <../../d4/d7a/classTango_1_1AttrData.html#a2226b793c3a7c4791a9839e5bfa2473f>`__ 
const T
\*\ `ptr <../../d4/d7a/classTango_1_1AttrData.html#a2226b793c3a7c4791a9839e5bfa2473f>`__;

`89 <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__ 
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__;

`90 <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__ 
long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__;

`91 <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__ 
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__;

`92 <../../d4/d7a/classTango_1_1AttrData.html#abc8bb23d7b5e8b2c4c1bd1c67b16ef04>`__ 
bool
`release <../../d4/d7a/classTango_1_1AttrData.html#abc8bb23d7b5e8b2c4c1bd1c67b16ef04>`__;

`93 <../../d4/d7a/classTango_1_1AttrData.html#aceb0e1fb88c6dd0be29bd7f8a4064611>`__ 
DevErrorList
`err <../../d4/d7a/classTango_1_1AttrData.html#aceb0e1fb88c6dd0be29bd7f8a4064611>`__;

94 

`95 <../../d4/d7a/classTango_1_1AttrData.html#afaaa975dbd7e67efedfc0932d163d9ce>`__ 
long
`wr\_x <../../d4/d7a/classTango_1_1AttrData.html#afaaa975dbd7e67efedfc0932d163d9ce>`__;

`96 <../../d4/d7a/classTango_1_1AttrData.html#ac4720964bc4cfe1441dbc0e25c368d5a>`__ 
long
`wr\_y <../../d4/d7a/classTango_1_1AttrData.html#ac4720964bc4cfe1441dbc0e25c368d5a>`__;

`97 <../../d4/d7a/classTango_1_1AttrData.html#a0677f54f22a900522ffe72bd38cd530a>`__ 
const T
\*\ `wr\_ptr <../../d4/d7a/classTango_1_1AttrData.html#a0677f54f22a900522ffe72bd38cd530a>`__;

98 

99 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*);

100 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,Tango::AttrQuality);

101 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,Tango::AttrQuality,bool);

102 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,const T \*);

103 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,const T \*,Tango::AttrQuality);

104 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,const T \*,Tango::AttrQuality,bool);

105 

106 // For spectrum

107 

108 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long);

109 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,Tango::AttrQuality);

110 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,Tango::AttrQuality,bool);

111 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,const T \*,long);

112 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,const T \*,long,Tango::AttrQuality);

113 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,const T \*,long,Tango::AttrQuality,bool);

114 

115 // For image

116 

117 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long);

118 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long,Tango::AttrQuality);

119 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long,Tango::AttrQuality,bool);

120 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long,const T \*,long,long);

121 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long,const T \*,long,long,Tango::AttrQuality);

122 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__\ (const
T \*,long,long,const T \*,long,long,Tango::AttrQuality,bool);

123 

124 // For error

125 

`126 <../../d4/d7a/classTango_1_1AttrData.html#a91406bc4fd607acb4f3217980c3b5dd5>`__ 
`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a91406bc4fd607acb4f3217980c3b5dd5>`__\ (DevErrorList
&e):
ptr(NULL),x(0),y(0),release(false),err(e),wr\_x(0),wr\_y(0),wr\_ptr(NULL)
{}

127 };

128 

129 

130 //=============================================================================

131 //

132 // The TimedAttrData class

133 //

134 //

135 // description : This class inherits from the AttrData class and
adds

136 // a date to all the data contains in the AttrData

137 // class

138 //

139 //=============================================================================

140 

151 template <typename T>

`152 <../../da/d12/classTango_1_1TimedAttrData.html>`__ class
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__:public
`Tango::AttrData <../../d4/d7a/classTango_1_1AttrData.html>`__\ <T>

153 {

154 public:

155 

168 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,time\_t when);

169 

180 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,time\_t when);

181 

191 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,time\_t
when);

192 

203 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,Tango::AttrQuality qual,time\_t when);

204 

213 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,Tango::AttrQuality qual,bool rel,time\_t when);

223 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,Tango::AttrQuality qual,bool
rel,time\_t when);

224 

234 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,struct timeval when);

235 

246 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,struct timeval when);

247 

257 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,Tango::AttrQuality qual,struct timeval when);

258 

269 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,Tango::AttrQuality qual,struct timeval
when);

270 

279 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,Tango::AttrQuality qual,bool rel,struct timeval when);

280 

290 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,const T \*p\_wr\_data,Tango::AttrQuality qual,bool
rel,struct timeval when);

292 

293 

294 // For spectrum

295 

296 

310 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,time\_t
when);

311 

324 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,time\_t when);

325 

336 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,Tango::AttrQuality qual,time\_t when);

337 

350 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,Tango::AttrQuality
qual,time\_t when);

351 

361 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,Tango::AttrQuality qual,bool rel,time\_t when);

362 

374 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,Tango::AttrQuality
qual,bool rel,time\_t when);

375 

386 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,struct timeval when);

387 

400 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,struct timeval
when);

401 

412 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,Tango::AttrQuality qual,struct timeval when);

413 

426 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,Tango::AttrQuality
qual,struct timeval when);

427 

437 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,Tango::AttrQuality qual,bool rel,struct timeval
when);

438 

450 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,const T \*p\_wr\_data,long x\_wr,Tango::AttrQuality
qual,bool rel,struct timeval when);

451 

453 

454 

455 // For image

456 

457 

472 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,time\_t
when);

473 

488 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,time\_t when);

489 

501 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,Tango::AttrQuality qual,time\_t when);

502 

517 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,Tango::AttrQuality qual,time\_t when);

518 

529 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,Tango::AttrQuality qual,bool rel,time\_t
when);

530 

544 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,Tango::AttrQuality qual,bool rel,time\_t when);

545 

557 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,struct timeval when);

558 

573 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,struct timeval when);

574 

586 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,Tango::AttrQuality qual,struct timeval when);

587 

602 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,Tango::AttrQuality qual,struct timeval when);

603 

614 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,Tango::AttrQuality qual,bool rel,struct
timeval when);

615 

629 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p\_data,long x,long y,const T \*p\_wr\_data,long x\_wr,long
y\_wr,Tango::AttrQuality qual,bool rel,struct timeval when);

631 

632 

633 

634 // For error

635 

636 

649 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (DevErrorList
&errs,time\_t when);

650 

660 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (DevErrorList
&errs,timeval when);

662 

664  struct timeval t\_val;

665 

666 #ifdef \_TG\_WINDOWS\_

667 

668 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,struct \_timeb t);

669 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,Tango::AttrQuality q,struct \_timeb t);

670 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,Tango::AttrQuality q,bool rel,struct \_timeb t);

671 

672 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,const T \*p\_wr\_data,struct \_timeb t);

673 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,const T \*p\_wr\_data,Tango::AttrQuality q,struct \_timeb t);

674 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,const T \*p\_wr\_data,Tango::AttrQuality q,bool rel,struct \_timeb
t);

675 

676 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,struct \_timeb t);

677 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,Tango::AttrQuality q,struct \_timeb t);

678 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,Tango::AttrQuality q,bool rel,struct \_timeb t);

679 

680 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,const T \*p\_wr\_data,long nb\_wr,struct \_timeb t);

681 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,const T \*p\_wr\_data,long nb\_wr,Tango::AttrQuality
q,struct \_timeb t);

682 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,const T \*p\_wr\_data,long nb\_wr,Tango::AttrQuality
q,bool rel,struct \_timeb t);

683 

684 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,struct \_timeb t);

685 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,Tango::AttrQuality q,struct \_timeb t);

686 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,Tango::AttrQuality q,bool rel,struct \_timeb t);

687 

688 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,const T \*p\_wr\_data,long nb\_wr,long
nb2\_wr,struct \_timeb t);

689 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,const T \*p\_wr\_data,long nb\_wr,long
nb2\_wr,Tango::AttrQuality q,struct \_timeb t);

690 
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__\ (const
T \*p,long nb,long nb2,const T \*p\_wr\_data,long nb\_wr,long
nb2\_wr,Tango::AttrQuality q,bool rel,struct \_timeb t);

691 

692 #endif

693 

694 };

695 

696 

697 //=============================================================================

698 //

699 // The AttrHistoryStack class

700 //

701 //

702 // description : This class is simply a wrapper above a vector of

703 // TimedAttrData class. It is used to pass an attribute

704 // value history which will be stored in the polling

705 // buffer

706 //

707 //=============================================================================

708 

721 template <typename T>

`722 <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__ class
`AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__

723 {

724 public:

725 

733  void
`push <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a6356c9fc9d4dd06b941b8e4a36de1f90>`__\ (`TimedAttrData<T> <../../da/d12/classTango_1_1TimedAttrData.html>`__
const &elt);

734 

`740 <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a078798e0c374f134f0cfb315a515f028>`__ 
size\_t
`length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a078798e0c374f134f0cfb315a515f028>`__\ ()
{return hist.size();}

741 

`747 <../../d0/dcb/classTango_1_1AttrHistoryStack.html#afcf19d9e75e02341bb8533cc7c61df5e>`__ 
void
`length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#afcf19d9e75e02341bb8533cc7c61df5e>`__\ (long
nb) {hist.reserve(nb);}

748 

`752 <../../d0/dcb/classTango_1_1AttrHistoryStack.html#aac60d22a112badcb3c27fb0b6c22eecd>`__ 
void
`clear <../../d0/dcb/classTango_1_1AttrHistoryStack.html#aac60d22a112badcb3c27fb0b6c22eecd>`__\ ()
{hist.clear();}

753 

759  vector<TimedAttrData<T> >
&\ `get\_data <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a73318d3db023c337bdbeae5fc743b3fd>`__\ ();

760 

762 
`AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__\ ()
{};

763 

764  vector<Tango::TimedAttrData<T> > hist;

765 };

766 

767 

768 //=============================================================================

769 //

770 // Command related class

771 //

772 // description : These classes are used when the user want to fill

773 // command polling buffer

774 //

775 //=============================================================================

776 

777 

778 //=============================================================================

779 //

780 // The TimedCmdData class

781 //

782 //

783 // description : This class is used to store all the data needed to
build

784 // a command value plus a date.

785 //

786 //=============================================================================

787 

798 template <typename T>

`799 <../../df/db1/classTango_1_1TimedCmdData.html>`__ class
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__

800 {

801 public:

802 

815 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p\_data,time\_t when);

816 

825 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p\_data,bool rel,time\_t when);

826 

835 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p\_data,struct timeval when);

836 

844 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p\_data,bool rel,struct timeval when);

845 

846 

`856 <../../df/db1/classTango_1_1TimedCmdData.html#a8cc1733169352938edf8432bc4551222>`__ 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a8cc1733169352938edf8432bc4551222>`__\ (DevErrorList
errs,time\_t when): ptr(NULL),err(errs),release(false) {t\_val.tv\_sec =
when;t\_val.tv\_usec = 0;}

`866 <../../df/db1/classTango_1_1TimedCmdData.html#a18999aecdf64d96fa704b7549c534dfe>`__ 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a18999aecdf64d96fa704b7549c534dfe>`__\ (DevErrorList
errs,timeval when): ptr(NULL),err(errs),t\_val(when),release(false) {}

868 

870 

871  T \*ptr;

872  DevErrorList err;

873  struct timeval t\_val;

874  bool release;

875 

876 #ifdef \_TG\_WINDOWS\_

877 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p,struct \_timeb t);

878 
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__\ (T
\*p,bool rel,struct \_timeb t);

879 #endif

880 };

881 

882 

883 //=============================================================================

884 //

885 // The CmdHistoryStack class

886 //

887 //

888 // description : This class is simply a wrapper above a vector of

889 // TimedCmdData class. It is used to pass a command

890 // value history which will be stored in the polling

891 // buffer

892 //

893 //=============================================================================

894 

895 

908 template <typename T>

`909 <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__ class
`CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__

910 {

911 public:

912 

920  void
`push <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a355ba8abdd8a382b3c0aa09def8a57ca>`__\ (`Tango::TimedCmdData<T> <../../df/db1/classTango_1_1TimedCmdData.html>`__
const &elt);

921 

`927 <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a21c635342bfae43ae1db2e4e721b4b4f>`__ 
size\_t
`length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a21c635342bfae43ae1db2e4e721b4b4f>`__\ ()
{return hist.size();}

928 

`934 <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ab9d2cfc6b3d8fca2a11ad3e7d2a47495>`__ 
void
`length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ab9d2cfc6b3d8fca2a11ad3e7d2a47495>`__\ (long
nb) {hist.reserve(nb);}

935 

`939 <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ae4ac3a6bb53c0661656a3a885a56347c>`__ 
void
`clear <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ae4ac3a6bb53c0661656a3a885a56347c>`__\ ()
{hist.clear();}

940 

946  vector<TimedCmdData<T> >
&\ `get\_data <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a60e2fac55007f4697ca68bc35a2a7fdc>`__\ ();

947 

949 

950 
`CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__\ ()
{};

951 

952  vector<Tango::TimedCmdData<T> > hist;

953 };

954 

955 

956 } // End of Tango namespace

957 

958 #endif /\* \_POLLOBJ\_ \*/

`Tango::AttrData::wr\_y <../../d4/d7a/classTango_1_1AttrData.html#ac4720964bc4cfe1441dbc0e25c368d5a>`__

long wr\_y

**Definition:** pollext.h:96

`Tango::AttrData::err <../../d4/d7a/classTango_1_1AttrData.html#aceb0e1fb88c6dd0be29bd7f8a4064611>`__

DevErrorList err

**Definition:** pollext.h:93

`Tango::AttrData::ptr <../../d4/d7a/classTango_1_1AttrData.html#a2226b793c3a7c4791a9839e5bfa2473f>`__

const T \* ptr

**Definition:** pollext.h:88

`Tango::CmdHistoryStack::clear <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ae4ac3a6bb53c0661656a3a885a56347c>`__

void clear()

Clear the stack.

**Definition:** pollext.h:939

`Tango::CmdHistoryStack::length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a21c635342bfae43ae1db2e4e721b4b4f>`__

size\_t length()

Get stack depth.

**Definition:** pollext.h:927

`Tango::TimedAttrData::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__

TimedAttrData(const T \*p\_data, time\_t when)

Create a new TimedAttrData object.

`Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__

This class is used to store one element of a command history stack.

**Definition:** pollext.h:799

`Tango::CmdHistoryStack::get\_data <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a60e2fac55007f4697ca68bc35a2a7fdc>`__

vector< TimedCmdData< T > > & get\_data()

Get stack data.

`Tango::AttrHistoryStack <../../d0/dcb/classTango_1_1AttrHistoryStack.html>`__

This class is a used to pass an attribute value history when the user
directly fills the attribute po...

**Definition:** pollext.h:722

`Tango::AttrData::y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__

long y

**Definition:** pollext.h:91

`Tango::TimedCmdData::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a8cc1733169352938edf8432bc4551222>`__

TimedCmdData(DevErrorList errs, time\_t when)

Create a new TimedCmdData object for errors.

**Definition:** pollext.h:856

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::TimedCmdData::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a18999aecdf64d96fa704b7549c534dfe>`__

TimedCmdData(DevErrorList errs, timeval when)

Create a new TimedCmdData object for errors.

**Definition:** pollext.h:866

`Tango::TimedCmdData::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__

TimedCmdData(T \*p\_data, time\_t when)

Create a new TimedCmdData object.

`Tango::AttrData::AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__

AttrData(const T \*)

`Tango::CmdHistoryStack::push <../../dc/d8f/classTango_1_1CmdHistoryStack.html#a355ba8abdd8a382b3c0aa09def8a57ca>`__

void push(Tango::TimedCmdData< T > const &elt)

Store a new element in the stack.

`Tango::AttrHistoryStack::push <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a6356c9fc9d4dd06b941b8e4a36de1f90>`__

void push(TimedAttrData< T > const &elt)

Store a new element in the stack.

`Tango::AttrHistoryStack::get\_data <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a73318d3db023c337bdbeae5fc743b3fd>`__

vector< TimedAttrData< T > > & get\_data()

Get stack data.

`Tango::AttrHistoryStack::clear <../../d0/dcb/classTango_1_1AttrHistoryStack.html#aac60d22a112badcb3c27fb0b6c22eecd>`__

void clear()

Clear the stack.

**Definition:** pollext.h:752

`Tango::AttrData::qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__

Tango::AttrQuality qual

**Definition:** pollext.h:89

`Tango::AttrData::release <../../d4/d7a/classTango_1_1AttrData.html#abc8bb23d7b5e8b2c4c1bd1c67b16ef04>`__

bool release

**Definition:** pollext.h:92

`Tango::AttrData::x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__

long x

**Definition:** pollext.h:90

`Tango::AttrData::AttrData <../../d4/d7a/classTango_1_1AttrData.html#a91406bc4fd607acb4f3217980c3b5dd5>`__

AttrData(DevErrorList &e)

**Definition:** pollext.h:126

`Tango::CmdHistoryStack::length <../../dc/d8f/classTango_1_1CmdHistoryStack.html#ab9d2cfc6b3d8fca2a11ad3e7d2a47495>`__

void length(long nb)

Reserve memory for stack elements.

**Definition:** pollext.h:934

`Tango::AttrHistoryStack::length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#a078798e0c374f134f0cfb315a515f028>`__

size\_t length()

Get stack depth.

**Definition:** pollext.h:740

`Tango::CmdHistoryStack <../../dc/d8f/classTango_1_1CmdHistoryStack.html>`__

This class is a used to pass a command result history when the user
directly fills the command pollin...

**Definition:** pollext.h:909

`Tango::AttrData <../../d4/d7a/classTango_1_1AttrData.html>`__

**Definition:** pollext.h:85

`Tango::AttrData::wr\_x <../../d4/d7a/classTango_1_1AttrData.html#afaaa975dbd7e67efedfc0932d163d9ce>`__

long wr\_x

**Definition:** pollext.h:95

`Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__

This class is used to store one element of an attribute history stack.

**Definition:** pollext.h:152

`Tango::AttrHistoryStack::length <../../d0/dcb/classTango_1_1AttrHistoryStack.html#afcf19d9e75e02341bb8533cc7c61df5e>`__

void length(long nb)

Reserve memory for stack elements.

**Definition:** pollext.h:747

`Tango::AttrData::wr\_ptr <../../d4/d7a/classTango_1_1AttrData.html#a0677f54f22a900522ffe72bd38cd530a>`__

const T \* wr\_ptr

**Definition:** pollext.h:97

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `pollext.h <../../db/d17/pollext_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
