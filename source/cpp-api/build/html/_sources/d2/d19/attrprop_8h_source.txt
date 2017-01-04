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

attrprop.h

`Go to the documentation of this
file. <../../d2/d19/attrprop_8h.html>`__

1 //==================================================================================================================

2 //

3 // file : AttrProp.h

4 //

5 // description : Include file for the AttrProp, DoubleAttrProp and
MultiAttrProp classes.

6 // Three classes are declared in this file :

7 // The AttrProp class

8 // The DoubleAttrProp class

9 // The MultiAttrProp class

10 //

11 // project : TANGO

12 //

13 // author(s) : A.Gotz + E.Taurel

14 //

15 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

16 // European Synchrotron Radiation Facility

17 // BP 220, Grenoble 38043

18 // FRANCE

19 //

20 // This file is part of Tango.

21 //

22 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

23 // License as published by the Free Software Foundation, either
version 3 of the License, or

24 // (at your option) any later version.

25 //

26 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

27 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

28 // GNU Lesser General Public License for more details.

29 //

30 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

31 // If not, see <http://www.gnu.org/licenses/>.

32 //

33 // $Revision: 19431 $

34 //

35 //==================================================================================================================

36 

37 #ifndef \_ATTRPROP\_H

38 #define \_ATTRPROP\_H

39 

40 #include <tango.h>

41 

42 namespace `Tango <../../de/ddf/namespaceTango.html>`__

43 {

44 

45 //=================================================================================================================

46 //

47 // The AttrProp class

48 //

49 // description :

50 // This is a template class which holds a value of attribute property
and its string representation.

51 //

52 //=================================================================================================================

53 

64 template <typename T>

`65 <../../d8/d68/classTango_1_1AttrProp.html>`__ class
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__

66 {

67 public:

`74 <../../d8/d68/classTango_1_1AttrProp.html#a464a13c1dcecb483dff1aa8b29b183fd>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a464a13c1dcecb483dff1aa8b29b183fd>`__\ ()
: is\_value(false),ext(Tango\_nullptr) {}

`80 <../../d8/d68/classTango_1_1AttrProp.html#a509fe17d8f539d8a8734dfa852bd9f4e>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a509fe17d8f539d8a8734dfa852bd9f4e>`__\ (const
T &value) : val(value), is\_value(true), ext(Tango\_nullptr)

81  {

82  TangoSys\_MemStream st;

83 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

84  st << value;

85  str = st.str();

86  }

`92 <../../d8/d68/classTango_1_1AttrProp.html#a96b27aee3ff878547fc5860f87f08ca2>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a96b27aee3ff878547fc5860f87f08ca2>`__\ (const
char \*value\_str) : str(string(value\_str)), is\_value(false),
ext(Tango\_nullptr) {}

`98 <../../d8/d68/classTango_1_1AttrProp.html#abc19d1718a15994e87ac3c9979c48b59>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html#abc19d1718a15994e87ac3c9979c48b59>`__\ (const
string &value\_str) : str(value\_str), is\_value(false),
ext(Tango\_nullptr) {}

100 

`113 <../../d8/d68/classTango_1_1AttrProp.html#a8c0c499c402739fd7449aa798b1609f5>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
&\ `operator= <../../d8/d68/classTango_1_1AttrProp.html#a8c0c499c402739fd7449aa798b1609f5>`__\ (const
T &value)

114  {

115  TangoSys\_MemStream st;

116 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

117  st << value;

118  str = st.str();

119  val = value;

120  is\_value = true;

121  return \*this;

122  }

`130 <../../d8/d68/classTango_1_1AttrProp.html#a4412614f38098403a1872488c1a10a21>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
&\ `operator= <../../d8/d68/classTango_1_1AttrProp.html#a4412614f38098403a1872488c1a10a21>`__\ (const
char \*value\_str)

131  {

132  str = value\_str;

133  is\_value = false;

134  return \*this;

135  }

`143 <../../d8/d68/classTango_1_1AttrProp.html#ab3099f7d395a5bee1bff018dd37dc8f7>`__ 
`AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__
&\ `operator= <../../d8/d68/classTango_1_1AttrProp.html#ab3099f7d395a5bee1bff018dd37dc8f7>`__\ (const
string &value\_str)

144  {

145  str = value\_str;

146  is\_value = false;

147  return \*this;

148  }

150 

`161 <../../d8/d68/classTango_1_1AttrProp.html#a0c80445d1ce52c04813778057ee1bc22>`__ 
T
`get\_val <../../d8/d68/classTango_1_1AttrProp.html#a0c80445d1ce52c04813778057ee1bc22>`__\ ()

162  {

163  if(is\_value == false)

164  {

165  string err\_msg = "Numeric representation of the property's value
(" + str + ") has not been set";

166 
`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ (`API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__,err\_msg,"AttrProp::get\_val",Tango::ERR);

167  }

168  return val;

169  }

`175 <../../d8/d68/classTango_1_1AttrProp.html#a265af5bc3684e8e88be9c027d4f095db>`__ 
string
&\ `get\_str <../../d8/d68/classTango_1_1AttrProp.html#a265af5bc3684e8e88be9c027d4f095db>`__\ ()
{return str;}

`183 <../../d8/d68/classTango_1_1AttrProp.html#a275eeb284b55ce66cefdc06b5436a784>`__ 
void
`set\_val <../../d8/d68/classTango_1_1AttrProp.html#a275eeb284b55ce66cefdc06b5436a784>`__\ (const
T &value)

184  {

185  TangoSys\_MemStream st;

186 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

187  st << value;

188  str = st.str();

189  val = value;

190  is\_value = true;

191  }

`197 <../../d8/d68/classTango_1_1AttrProp.html#a089ac8d3f4a88385be4c41b69fa31ae1>`__ 
void
`set\_str <../../d8/d68/classTango_1_1AttrProp.html#a089ac8d3f4a88385be4c41b69fa31ae1>`__\ (const
char \*value\_str) {str = string(value\_str); is\_value = false;}

`203 <../../d8/d68/classTango_1_1AttrProp.html#ab08e7d7ba473008754b457a74a7fde87>`__ 
void
`set\_str <../../d8/d68/classTango_1_1AttrProp.html#ab08e7d7ba473008754b457a74a7fde87>`__\ (const
string &value\_str) {str = value\_str; is\_value = false;}

205 

`218 <../../d8/d68/classTango_1_1AttrProp.html#a558a0456d0591c428f438e86e0afb2e4>`__ 
bool
`is\_val <../../d8/d68/classTango_1_1AttrProp.html#a558a0456d0591c428f438e86e0afb2e4>`__\ ()
{return is\_value;}

220 

222 

223  operator string()

224  {

225  return str;

226  }

227  operator const char \*()

228  {

229  return str.c\_str();

230  }

231 

232 private:

233  T val;

234  string str;

235  bool is\_value;

236 

237 //

238 // The extension class

239 //

240 

241  class AttrPropExt {};

242 

243 #ifdef HAS\_UNIQUE\_PTR

244  unique\_ptr<AttrPropExt> ext; // Class extension

245 #else

246  AttrPropExt \*ext;

247 #endif

248 };

249 

250 //===================================================================================================================

251 //

252 // The DoubleAttrProp class

253 //

254 // description : This is a template class which holds values of a
compound attribute property (like rel\_change,

255 // abs\_change, archive\_rel\_change, archive\_abs\_change) which
consists of two values, and its string

256 // representation.

257 //

258 //==================================================================================================================

259 

271 template <typename T>

`272 <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__ class
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__

273 {

274 public:

`281 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a58dbe78d028188ea0dbee8a9a49be716>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a58dbe78d028188ea0dbee8a9a49be716>`__\ ()
: is\_value(false) {}

`288 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a5d8275415ddccba96ff4131c0bf0d27d>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a5d8275415ddccba96ff4131c0bf0d27d>`__\ (const
vector<T> &values) : val(values), is\_value(true)

289  {

290  TangoSys\_MemStream st;

291 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

292  for(size\_t i = 0; i < values.size(); i++)

293  {

294  if(i > 0)

295  st << ",";

296  st << values[i];

297  }

298  str = st.str();

299  }

`305 <../../d5/da9/classTango_1_1DoubleAttrProp.html#af5c16f185a3d4eb11fb8dcc21bf63531>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#af5c16f185a3d4eb11fb8dcc21bf63531>`__\ (const
T &value) : is\_value(true) {

306  TangoSys\_MemStream st;

307 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

308  st << value;

309  str = st.str();

310  val.push\_back(value);

311  }

`317 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3a44186496c84b194a9f382e87aeb93e>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3a44186496c84b194a9f382e87aeb93e>`__\ (const
char \*value\_str) : str(string(value\_str)), is\_value(false) {}

`323 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a84c375bcf6a1640bd4ba2499f158a887>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a84c375bcf6a1640bd4ba2499f158a887>`__\ (const
string &value\_str) : str(value\_str), is\_value(false) {}

325 

`339 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a8a6f518ac4cb3a3eef014d9633cf555b>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__ &
`operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a8a6f518ac4cb3a3eef014d9633cf555b>`__\ (const
vector<T> &values)

340  {

341  TangoSys\_MemStream st;

342 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

343  for(size\_t i = 0; i < values.size(); i++)

344  {

345  if(i > 0)

346  st << ",";

347  st << values[i];

348  }

349  str = st.str();

350  val = values;

351  is\_value = true;

352  return \*this;

353  }

`362 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a0bdf79b7a455c4f1aa4521dd6955a347>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__ &
`operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a0bdf79b7a455c4f1aa4521dd6955a347>`__\ (const
T &value)

363  {

364  TangoSys\_MemStream st;

365 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

366 
if(`ranges\_type2const<T>::enu <../../df/d08/structTango_1_1ranges__type2const.html>`__
==
`Tango::DEV\_UCHAR <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__)

367  st << (short)value; // to represent the numeric value

368  else

369  st << value;

370  str = st.str();

371  val.push\_back(value);

372  is\_value = true;

373  return \*this;

374  }

`383 <../../d5/da9/classTango_1_1DoubleAttrProp.html#ad69387bb6bb54b0629c2bcc3ed0aca68>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__ &
`operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#ad69387bb6bb54b0629c2bcc3ed0aca68>`__\ (const
char \*value\_str)

384  {

385  str = value\_str;

386  is\_value = false;

387  return \*this;

388  }

`397 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3e3be7efdf813e9e831f7394d42c0003>`__ 
`DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__ &
`operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3e3be7efdf813e9e831f7394d42c0003>`__\ (const
string &value\_str)

398  {

399  str = value\_str;

400  is\_value = false;

401  return \*this;

402  }

404 

`415 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a377133f8bb35b0c6609fd0fe024d84c6>`__ 
vector<T>
`get\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a377133f8bb35b0c6609fd0fe024d84c6>`__\ ()

416  {

417  if(is\_value == false)

418  {

419  string err\_msg = "Numeric representation of the property's value
(" + str + ") has not been set";

420 
`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ (`API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__,err\_msg,"AttrProp::get\_val",Tango::ERR);

421  }

422  return val;

423  }

`429 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a378c84beef01e53519bc1b0702335e59>`__ 
string
&\ `get\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#a378c84beef01e53519bc1b0702335e59>`__\ ()
{return str;}

`437 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a9b06476772a06ddcf045a5097bba15cb>`__ 
void
`set\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a9b06476772a06ddcf045a5097bba15cb>`__\ (const
vector<T> &values)

438  {

439  TangoSys\_MemStream st;

440 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

441  for(size\_t i = 0; i < values.size(); i++)

442  {

443  if(i > 0)

444  st << ",";

445  st << values[i];

446  }

447  str = st.str();

448  val = values;

449  is\_value = true;

450  }

`459 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a18a9eb0323895a5011a97b8854d51678>`__ 
void
`set\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a18a9eb0323895a5011a97b8854d51678>`__\ (const
T &value)

460  {

461  TangoSys\_MemStream st;

462 
st.precision(\ `TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__);

463  st << value;

464  str = st.str();

465  val.push\_back(value);

466  is\_value = true;

467  }

`473 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a680efb91abb5de604a811ebac5dafb5a>`__ 
void
`set\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#a680efb91abb5de604a811ebac5dafb5a>`__\ (const
char \*value\_str) {str = string(value\_str); is\_value = false;}

`479 <../../d5/da9/classTango_1_1DoubleAttrProp.html#aed5483824956e3eb5fe40462331a5f91>`__ 
void
`set\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#aed5483824956e3eb5fe40462331a5f91>`__\ (const
string &value\_str) {str = value\_str; is\_value = false;}

481 

`495 <../../d5/da9/classTango_1_1DoubleAttrProp.html#a75cbfd41ce00381a7a89c10b259fda8d>`__ 
bool
`is\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a75cbfd41ce00381a7a89c10b259fda8d>`__\ ()
{return is\_value;}

497 

499 

500  operator string()

501  {

502  return str;

503  }

504  operator const char \*()

505  {

506  return str.c\_str();

507  }

508 

509 private:

510  vector<T> val;

511  string str;

512  bool is\_value;

513 

514 //

515 // The extension class

516 //

517 

518  class DoubleAttrPropExt {};

519 

520 #ifdef HAS\_UNIQUE\_PTR

521  unique\_ptr<DoubleAttrPropExt> ext; // Class extension

522 #else

523  DoubleAttrPropExt \*ext;

524 #endif

525 };

526 

527 //==================================================================================================================

528 //

529 // The MultiAttrProp class

530 //

531 // description : This is a template class which holds values of
modifiable attribute properties.

532 //

533 //=================================================================================================================

534 

546 template <typename T>

`547 <../../d7/d41/classTango_1_1MultiAttrProp.html>`__ class
`MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__

548 {

549 public:

`556 <../../d7/d41/classTango_1_1MultiAttrProp.html#a54da16eb6216e7833e4fd0a7c6f2ad5a>`__ 
`MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html#a54da16eb6216e7833e4fd0a7c6f2ad5a>`__\ ()

557  {

558 
`CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
type =
`ranges\_type2const<T>::enu <../../df/d08/structTango_1_1ranges__type2const.html>`__;
// restricts template initialisation to supported types

559  if(type){}; // prevents compiler warning about unused variable type

560  }

562 

`567 <../../d7/d41/classTango_1_1MultiAttrProp.html#a73b155c07d58a9bc7d368f228f367618>`__ 
string
`label <../../d7/d41/classTango_1_1MultiAttrProp.html#a73b155c07d58a9bc7d368f228f367618>`__;

`571 <../../d7/d41/classTango_1_1MultiAttrProp.html#a768977dfe60216de4a40752c02cd1a4d>`__ 
string
`description <../../d7/d41/classTango_1_1MultiAttrProp.html#a768977dfe60216de4a40752c02cd1a4d>`__;

`575 <../../d7/d41/classTango_1_1MultiAttrProp.html#a538ad657bcd9a15971680515acd2a255>`__ 
string
`unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a538ad657bcd9a15971680515acd2a255>`__;

`579 <../../d7/d41/classTango_1_1MultiAttrProp.html#a67dc1fda90cc3a2730b77a28146eeede>`__ 
string
`standard\_unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a67dc1fda90cc3a2730b77a28146eeede>`__;

`583 <../../d7/d41/classTango_1_1MultiAttrProp.html#a7c08d79cc196a5046ca3296cb5cb05e8>`__ 
string
`display\_unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a7c08d79cc196a5046ca3296cb5cb05e8>`__;

`587 <../../d7/d41/classTango_1_1MultiAttrProp.html#aa821f1d761c88fcaf3e1eb5d33ad5c1f>`__ 
string
`format <../../d7/d41/classTango_1_1MultiAttrProp.html#aa821f1d761c88fcaf3e1eb5d33ad5c1f>`__;

`591 <../../d7/d41/classTango_1_1MultiAttrProp.html#a651e8bee51aa823ea02c222c6e4e5f3f>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`min\_value <../../d7/d41/classTango_1_1MultiAttrProp.html#a651e8bee51aa823ea02c222c6e4e5f3f>`__;

`595 <../../d7/d41/classTango_1_1MultiAttrProp.html#a29758f0ba1946e9619867ead77d38596>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`max\_value <../../d7/d41/classTango_1_1MultiAttrProp.html#a29758f0ba1946e9619867ead77d38596>`__;

`599 <../../d7/d41/classTango_1_1MultiAttrProp.html#ae3d4abeb4d18501710fd212ebb6fd8be>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`min\_alarm <../../d7/d41/classTango_1_1MultiAttrProp.html#ae3d4abeb4d18501710fd212ebb6fd8be>`__;

`603 <../../d7/d41/classTango_1_1MultiAttrProp.html#ab78402b6efee1b6bef433574be98da8b>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`max\_alarm <../../d7/d41/classTango_1_1MultiAttrProp.html#ab78402b6efee1b6bef433574be98da8b>`__;

`607 <../../d7/d41/classTango_1_1MultiAttrProp.html#a7f756ab47237c2886e770e60b78c744a>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`min\_warning <../../d7/d41/classTango_1_1MultiAttrProp.html#a7f756ab47237c2886e770e60b78c744a>`__;

`611 <../../d7/d41/classTango_1_1MultiAttrProp.html#ac7f8a45fa30a8beb1a3d15400650e4a2>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`max\_warning <../../d7/d41/classTango_1_1MultiAttrProp.html#ac7f8a45fa30a8beb1a3d15400650e4a2>`__;

`615 <../../d7/d41/classTango_1_1MultiAttrProp.html#ae676903d9813af47dad769101ee092d6>`__ 
`AttrProp<DevLong> <../../d8/d68/classTango_1_1AttrProp.html>`__
`delta\_t <../../d7/d41/classTango_1_1MultiAttrProp.html#ae676903d9813af47dad769101ee092d6>`__;

`619 <../../d7/d41/classTango_1_1MultiAttrProp.html#aec6e7c063c30b372b77bf052662af6a5>`__ 
`AttrProp<T> <../../d8/d68/classTango_1_1AttrProp.html>`__
`delta\_val <../../d7/d41/classTango_1_1MultiAttrProp.html#aec6e7c063c30b372b77bf052662af6a5>`__;

`623 <../../d7/d41/classTango_1_1MultiAttrProp.html#a8b8dc032bdfc407d1d22e535817ef05c>`__ 
`AttrProp<DevLong> <../../d8/d68/classTango_1_1AttrProp.html>`__
`event\_period <../../d7/d41/classTango_1_1MultiAttrProp.html#a8b8dc032bdfc407d1d22e535817ef05c>`__;

`627 <../../d7/d41/classTango_1_1MultiAttrProp.html#a877a4666316b2ddd9794f248dbe6f9a4>`__ 
`AttrProp<DevLong> <../../d8/d68/classTango_1_1AttrProp.html>`__
`archive\_period <../../d7/d41/classTango_1_1MultiAttrProp.html#a877a4666316b2ddd9794f248dbe6f9a4>`__;

`631 <../../d7/d41/classTango_1_1MultiAttrProp.html#a73ae6553d91c195d67ca543f66654cce>`__ 
`DoubleAttrProp<DevDouble> <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__
`rel\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a73ae6553d91c195d67ca543f66654cce>`__;

`635 <../../d7/d41/classTango_1_1MultiAttrProp.html#a61faf720121c210d26a958dffc768c5f>`__ 
`DoubleAttrProp<DevDouble> <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__
`abs\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a61faf720121c210d26a958dffc768c5f>`__;

`639 <../../d7/d41/classTango_1_1MultiAttrProp.html#ab5ee1a34e97bd8ad0885e4da3152a8ca>`__ 
`DoubleAttrProp<DevDouble> <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__
`archive\_rel\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#ab5ee1a34e97bd8ad0885e4da3152a8ca>`__;

`643 <../../d7/d41/classTango_1_1MultiAttrProp.html#a67b405f281daab10b7ad08d1a3d1a45c>`__ 
`DoubleAttrProp<DevDouble> <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__
`archive\_abs\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a67b405f281daab10b7ad08d1a3d1a45c>`__;

`647 <../../d7/d41/classTango_1_1MultiAttrProp.html#a790b98a4d746feed7d44a683240353b0>`__ 
vector<string>
`enum\_labels <../../d7/d41/classTango_1_1MultiAttrProp.html#a790b98a4d746feed7d44a683240353b0>`__;

649 private:

650 

651 //

652 // The extension class

653 //

654 

655  class MultiAttrPropExt {};

656 

657 #ifdef HAS\_UNIQUE\_PTR

658  unique\_ptr<MultiAttrPropExt> ext; // Class extension

659 #else

660  MultiAttrPropExt \*ext;

661 #endif

662 };

663 

664 } // End of Tango namespace

665 

666 #endif // \_ATTRPROP\_H

`Tango::MultiAttrProp::event\_period <../../d7/d41/classTango_1_1MultiAttrProp.html#a8b8dc032bdfc407d1d22e535817ef05c>`__

AttrProp< DevLong > event\_period

Attribute event\_period.

**Definition:** attrprop.h:623

`Tango::MultiAttrProp::label <../../d7/d41/classTango_1_1MultiAttrProp.html#a73b155c07d58a9bc7d368f228f367618>`__

string label

Attribute label.

**Definition:** attrprop.h:567

`Tango::DoubleAttrProp::set\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#aed5483824956e3eb5fe40462331a5f91>`__

void set\_str(const string &value\_str)

Set string representation of the compound attribute property values.

**Definition:** attrprop.h:479

`Tango::DoubleAttrProp::set\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a9b06476772a06ddcf045a5097bba15cb>`__

void set\_val(const vector< T > &values)

Set the compound attribute property values.

**Definition:** attrprop.h:437

`Tango::DoubleAttrProp::set\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a18a9eb0323895a5011a97b8854d51678>`__

void set\_val(const T &value)

Set the compound attribute property values.

**Definition:** attrprop.h:459

`Tango::ranges\_type2const <../../df/d08/structTango_1_1ranges__type2const.html>`__

**Definition:** tango\_const.h:1225

`Tango::DoubleAttrProp::operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#ad69387bb6bb54b0629c2bcc3ed0aca68>`__

DoubleAttrProp & operator=(const char \*value\_str)

Assign the values of the compound attribute property.

**Definition:** attrprop.h:383

`Tango::TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__

const int TANGO\_FLOAT\_PRECISION

**Definition:** tango\_const.h:104

`Tango::MultiAttrProp::enum\_labels <../../d7/d41/classTango_1_1MultiAttrProp.html#a790b98a4d746feed7d44a683240353b0>`__

vector< string > enum\_labels

Enumeration labels (For DevEnum data type)

**Definition:** attrprop.h:647

`Tango::AttrProp::get\_str <../../d8/d68/classTango_1_1AttrProp.html#a265af5bc3684e8e88be9c027d4f095db>`__

string & get\_str()

Get string representation of the attribute property value.

**Definition:** attrprop.h:175

`Tango::MultiAttrProp::standard\_unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a67dc1fda90cc3a2730b77a28146eeede>`__

string standard\_unit

Attribute standard\_unit.

**Definition:** attrprop.h:579

`Tango::MultiAttrProp::max\_alarm <../../d7/d41/classTango_1_1MultiAttrProp.html#ab78402b6efee1b6bef433574be98da8b>`__

AttrProp< T > max\_alarm

Attribute max\_alarm.

**Definition:** attrprop.h:603

`Tango::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html>`__

This class represents a Tango compound attribute property which consists
of two values.

**Definition:** attrprop.h:272

`Tango::MultiAttrProp::min\_warning <../../d7/d41/classTango_1_1MultiAttrProp.html#a7f756ab47237c2886e770e60b78c744a>`__

AttrProp< T > min\_warning

Attribute min\_warning.

**Definition:** attrprop.h:607

`Tango::DEV\_UCHAR <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__

**Definition:** tango\_const.h:926

`Tango::MultiAttrProp::min\_value <../../d7/d41/classTango_1_1MultiAttrProp.html#a651e8bee51aa823ea02c222c6e4e5f3f>`__

AttrProp< T > min\_value

Attribute min\_value.

**Definition:** attrprop.h:591

`Tango::MultiAttrProp::abs\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a61faf720121c210d26a958dffc768c5f>`__

DoubleAttrProp< DevDouble > abs\_change

Attribute abs\_change.

**Definition:** attrprop.h:635

`Tango::AttrProp::set\_val <../../d8/d68/classTango_1_1AttrProp.html#a275eeb284b55ce66cefdc06b5436a784>`__

void set\_val(const T &value)

Set the attribute property value.

**Definition:** attrprop.h:183

`Tango::AttrProp::operator= <../../d8/d68/classTango_1_1AttrProp.html#ab3099f7d395a5bee1bff018dd37dc8f7>`__

AttrProp & operator=(const string &value\_str)

Assign the string representation of the attribute property value.

**Definition:** attrprop.h:143

`Tango::MultiAttrProp::display\_unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a7c08d79cc196a5046ca3296cb5cb05e8>`__

string display\_unit

Attribute display\_unit.

**Definition:** attrprop.h:583

`Tango::AttrProp::operator= <../../d8/d68/classTango_1_1AttrProp.html#a4412614f38098403a1872488c1a10a21>`__

AttrProp & operator=(const char \*value\_str)

Assign the string representation of the attribute property value.

**Definition:** attrprop.h:130

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::MultiAttrProp::max\_value <../../d7/d41/classTango_1_1MultiAttrProp.html#a29758f0ba1946e9619867ead77d38596>`__

AttrProp< T > max\_value

Attribute max\_value.

**Definition:** attrprop.h:595

`Tango::AttrProp::get\_val <../../d8/d68/classTango_1_1AttrProp.html#a0c80445d1ce52c04813778057ee1bc22>`__

T get\_val()

Get the attribute property value.

**Definition:** attrprop.h:161

`Tango::MultiAttrProp::archive\_rel\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#ab5ee1a34e97bd8ad0885e4da3152a8ca>`__

DoubleAttrProp< DevDouble > archive\_rel\_change

Attribute archive\_rel\_change.

**Definition:** attrprop.h:639

`Tango::AttrProp::AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a509fe17d8f539d8a8734dfa852bd9f4e>`__

AttrProp(const T &value)

Create a new AttrProp object.

**Definition:** attrprop.h:80

`Tango::DoubleAttrProp::get\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a377133f8bb35b0c6609fd0fe024d84c6>`__

vector< T > get\_val()

Get the vector containing the compound attribute property values.

**Definition:** attrprop.h:415

`Tango::AttrProp <../../d8/d68/classTango_1_1AttrProp.html>`__

This class represents a Tango attribute property.

**Definition:** attrprop.h:65

`Tango::AttrProp::set\_str <../../d8/d68/classTango_1_1AttrProp.html#a089ac8d3f4a88385be4c41b69fa31ae1>`__

void set\_str(const char \*value\_str)

Set string representation of the attribute property value.

**Definition:** attrprop.h:197

`Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__

This class represents Tango modifiable attribute properties grouped in
one object to facilitate setti...

**Definition:** attrprop.h:547

`Tango::DoubleAttrProp::operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a8a6f518ac4cb3a3eef014d9633cf555b>`__

DoubleAttrProp & operator=(const vector< T > &values)

Assign the values of the compound attribute property.

**Definition:** attrprop.h:339

`Tango::DoubleAttrProp::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a84c375bcf6a1640bd4ba2499f158a887>`__

DoubleAttrProp(const string &value\_str)

Create a new DoubleAttrProp object.

**Definition:** attrprop.h:323

`Tango::AttrProp::operator= <../../d8/d68/classTango_1_1AttrProp.html#a8c0c499c402739fd7449aa798b1609f5>`__

AttrProp & operator=(const T &value)

Assign the value of the attribute property.

**Definition:** attrprop.h:113

`Tango::MultiAttrProp::delta\_t <../../d7/d41/classTango_1_1MultiAttrProp.html#ae676903d9813af47dad769101ee092d6>`__

AttrProp< DevLong > delta\_t

Attribute delta\_t.

**Definition:** attrprop.h:615

`Tango::MultiAttrProp::unit <../../d7/d41/classTango_1_1MultiAttrProp.html#a538ad657bcd9a15971680515acd2a255>`__

string unit

Attribute unit.

**Definition:** attrprop.h:575

`Tango::MultiAttrProp::description <../../d7/d41/classTango_1_1MultiAttrProp.html#a768977dfe60216de4a40752c02cd1a4d>`__

string description

Attribute description.

**Definition:** attrprop.h:571

`Tango::MultiAttrProp::max\_warning <../../d7/d41/classTango_1_1MultiAttrProp.html#ac7f8a45fa30a8beb1a3d15400650e4a2>`__

AttrProp< T > max\_warning

Attribute max\_warning.

**Definition:** attrprop.h:611

`Tango::API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__

const char \*const API\_AttrPropValueNotSet

**Definition:** tango\_const.h:341

`Tango::DoubleAttrProp::is\_val <../../d5/da9/classTango_1_1DoubleAttrProp.html#a75cbfd41ce00381a7a89c10b259fda8d>`__

bool is\_val()

Check if the compound attribute property values have been assigned.

**Definition:** attrprop.h:495

`Tango::AttrProp::is\_val <../../d8/d68/classTango_1_1AttrProp.html#a558a0456d0591c428f438e86e0afb2e4>`__

bool is\_val()

Check if the attribute property value has been assigned.

**Definition:** attrprop.h:218

`Tango::MultiAttrProp::archive\_abs\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a67b405f281daab10b7ad08d1a3d1a45c>`__

DoubleAttrProp< DevDouble > archive\_abs\_change

Attribute archive\_abs\_change.

**Definition:** attrprop.h:643

`Tango::MultiAttrProp::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html#a54da16eb6216e7833e4fd0a7c6f2ad5a>`__

MultiAttrProp()

Default constructor.

**Definition:** attrprop.h:556

`Tango::AttrProp::AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a464a13c1dcecb483dff1aa8b29b183fd>`__

AttrProp()

Default constructor.

**Definition:** attrprop.h:74

`Tango::DoubleAttrProp::set\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#a680efb91abb5de604a811ebac5dafb5a>`__

void set\_str(const char \*value\_str)

Set string representation of the compound attribute property values.

**Definition:** attrprop.h:473

`Tango::AttrProp::AttrProp <../../d8/d68/classTango_1_1AttrProp.html#a96b27aee3ff878547fc5860f87f08ca2>`__

AttrProp(const char \*value\_str)

Create a new AttrProp object.

**Definition:** attrprop.h:92

`Tango::MultiAttrProp::min\_alarm <../../d7/d41/classTango_1_1MultiAttrProp.html#ae3d4abeb4d18501710fd212ebb6fd8be>`__

AttrProp< T > min\_alarm

Attribute min\_alarm.

**Definition:** attrprop.h:599

`Tango::MultiAttrProp::rel\_change <../../d7/d41/classTango_1_1MultiAttrProp.html#a73ae6553d91c195d67ca543f66654cce>`__

DoubleAttrProp< DevDouble > rel\_change

Attribute rel\_change.

**Definition:** attrprop.h:631

`Tango::DoubleAttrProp::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3a44186496c84b194a9f382e87aeb93e>`__

DoubleAttrProp(const char \*value\_str)

Create a new DoubleAttrProp object.

**Definition:** attrprop.h:317

`Tango::DoubleAttrProp::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a5d8275415ddccba96ff4131c0bf0d27d>`__

DoubleAttrProp(const vector< T > &values)

Create a new DoubleAttrProp object.

**Definition:** attrprop.h:288

`Tango::MultiAttrProp::delta\_val <../../d7/d41/classTango_1_1MultiAttrProp.html#aec6e7c063c30b372b77bf052662af6a5>`__

AttrProp< T > delta\_val

Attribute delta\_val.

**Definition:** attrprop.h:619

`Tango::DoubleAttrProp::get\_str <../../d5/da9/classTango_1_1DoubleAttrProp.html#a378c84beef01e53519bc1b0702335e59>`__

string & get\_str()

Get string representation of the compound attribute property values.

**Definition:** attrprop.h:429

`Tango::DoubleAttrProp::operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a0bdf79b7a455c4f1aa4521dd6955a347>`__

DoubleAttrProp & operator=(const T &value)

Assign the values of the compound attribute property.

**Definition:** attrprop.h:362

`Tango::DoubleAttrProp::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#a58dbe78d028188ea0dbee8a9a49be716>`__

DoubleAttrProp()

Default constructor.

**Definition:** attrprop.h:281

`Tango::MultiAttrProp::archive\_period <../../d7/d41/classTango_1_1MultiAttrProp.html#a877a4666316b2ddd9794f248dbe6f9a4>`__

AttrProp< DevLong > archive\_period

Attribute archive\_period.

**Definition:** attrprop.h:627

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__

CmdArgType

**Definition:** tango\_const.h:903

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__

static void throw\_exception(const char \*reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:122

`Tango::MultiAttrProp::format <../../d7/d41/classTango_1_1MultiAttrProp.html#aa821f1d761c88fcaf3e1eb5d33ad5c1f>`__

string format

Attribute format.

**Definition:** attrprop.h:587

`Tango::AttrProp::set\_str <../../d8/d68/classTango_1_1AttrProp.html#ab08e7d7ba473008754b457a74a7fde87>`__

void set\_str(const string &value\_str)

Set string representation of the attribute property value.

**Definition:** attrprop.h:203

`Tango::DoubleAttrProp::DoubleAttrProp <../../d5/da9/classTango_1_1DoubleAttrProp.html#af5c16f185a3d4eb11fb8dcc21bf63531>`__

DoubleAttrProp(const T &value)

Create a new DoubleAttrProp object.

**Definition:** attrprop.h:305

`Tango::AttrProp::AttrProp <../../d8/d68/classTango_1_1AttrProp.html#abc19d1718a15994e87ac3c9979c48b59>`__

AttrProp(const string &value\_str)

Create a new AttrProp object.

**Definition:** attrprop.h:98

`Tango::DoubleAttrProp::operator= <../../d5/da9/classTango_1_1DoubleAttrProp.html#a3e3be7efdf813e9e831f7394d42c0003>`__

DoubleAttrProp & operator=(const string &value\_str)

Assign the values of the compound attribute property.

**Definition:** attrprop.h:397

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `attrprop.h <../../d2/d19/attrprop_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
