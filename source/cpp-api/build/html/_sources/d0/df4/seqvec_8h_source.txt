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

seqvec.h

`Go to the documentation of this file. <../../d0/df4/seqvec_8h.html>`__

1 //=============================================================================

2 //

3 // file : SeqVec.h

4 //

5 // description : Include for the utilities function to ease CORBA

6 // sequences from standard C++ vector or in the

7 // oposite way.

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

33 // $Revision$

34 //

35 //

36 //=============================================================================

37 

38 #ifndef \_SECVEC\_H

39 #define \_SECVEC\_H

40 

41 

42 #include <tango.h>

43 

44 

45 namespace `Tango <../../de/ddf/namespaceTango.html>`__

46 {

47 

48 

49 //

50 // These functions are not defined within the tango namespace because
the VC++

51 // is not able to understand that the operator overloading functions
is defined

52 // within a namespace x from the operand namespace (c++ or aCC is
able to

53 // do it)

54 //

55 

56 //=============================================================================

57 //

58 // Operator for the unsigned char array types

59 //

60 // description : These two operators allow simple insertion between

61 // Tango sequence (DevVarCharArray) and C++ vectors

62 //

63 //=============================================================================

64 

65 //#define NOSPACEINDOC\_SEQVEC

66 

`77 <../../dd/dd6/group__Ope.html#ga065f1fbeb02af4e92d4029235f2a186e>`__ inline
void operator<<(DevVarCharArray &lval,const vector<unsigned char> &rval)

78 {

79  size\_t nb\_elt = rval.size();

80  lval.length((CORBA::ULong)nb\_elt);

81  for (unsigned long i = 0;i < nb\_elt;i++)

82  lval[i] = rval[i];

83 }

84 

`91 <../../dd/dd6/group__Ope.html#gae546232aa642350a7e19a4a5e4698289>`__ inline
void operator<<(vector<unsigned char> &lval,const DevVarCharArray &rval)

92 {

93  long nb\_elt = rval.length();

94  if (lval.empty() == false)

95  lval.clear();

96  for (long i = 0;i < nb\_elt;i++)

97  lval.push\_back(rval[i]);

98 }

99 

100 

101 //=============================================================================

102 //

103 // Operator for the Short array types

104 //

105 // description : These two operators allow simple insertion between

106 // Tango sequence (DevVarShortArray) and C++ vectors

107 //

108 //=============================================================================

109 

`116 <../../dd/dd6/group__Ope.html#gaff6627037d30a75ace59447d67a0b0f1>`__ inline
void operator<<(DevVarShortArray &lval,const vector<short> &rval)

117 {

118  size\_t nb\_elt = rval.size();

119  lval.length((CORBA::ULong)nb\_elt);

120  for (unsigned long i = 0;i < nb\_elt;i++)

121  lval[i] = rval[i];

122 }

123 

`130 <../../dd/dd6/group__Ope.html#ga712cfcf813b0f2a0201ccf74343b05a5>`__ inline
void operator<<(vector<short> &lval,const DevVarShortArray &rval)

131 {

132  long nb\_elt = rval.length();

133  if (lval.empty() == false)

134  lval.clear();

135  for (long i = 0;i < nb\_elt;i++)

136  lval.push\_back(rval[i]);

137 }

138 

139 //=============================================================================

140 //

141 // Operator for the Long array types

142 //

143 // description : These two operators allow simple insertion between

144 // Tango sequence (DevVarLongArray) and C++ vectors

145 //

146 //=============================================================================

147 

`154 <../../dd/dd6/group__Ope.html#ga65fc9c8f67a267ecb0002c0169dbbf8e>`__ inline
void operator<<(DevVarLongArray &lval,const vector<DevLong> &rval)

155 {

156  size\_t nb\_elt = rval.size();

157  lval.length((CORBA::ULong)nb\_elt);

158  for (unsigned long i = 0;i < nb\_elt;i++)

159  lval[i] = rval[i];

160 }

161 

`168 <../../dd/dd6/group__Ope.html#gaeb08b2bed8f7c2583e3457bc862dc6b0>`__ inline
void operator<<(vector<DevLong> &lval,const DevVarLongArray &rval)

169 {

170  long nb\_elt = rval.length();

171  if (lval.empty() == false)

172  lval.clear();

173  for (long i = 0;i < nb\_elt;i++)

174  lval.push\_back(rval[i]);

175 }

176 

177 

178 //=============================================================================

179 //

180 // Operator for the Long Long array types

181 //

182 // description : These two operators allow simple insertion between

183 // Tango sequence (DevVarLong64Array) and C++ vectors

184 //

185 //=============================================================================

186 

`193 <../../dd/dd6/group__Ope.html#ga73604d8da674eeeb83248e3ec792cde2>`__ inline
void operator<<(DevVarLong64Array &lval,const vector<DevLong64> &rval)

194 {

195  size\_t nb\_elt = rval.size();

196  lval.length((CORBA::ULong)nb\_elt);

197  for (unsigned long i = 0;i < nb\_elt;i++)

198  lval[i] = rval[i];

199 }

200 

`207 <../../dd/dd6/group__Ope.html#ga90a170909487d4e37dfcb485535e02cc>`__ inline
void operator<<(vector<DevLong64> &lval,const DevVarLong64Array &rval)

208 {

209  long nb\_elt = rval.length();

210  if (lval.empty() == false)

211  lval.clear();

212  for (long i = 0;i < nb\_elt;i++)

213  lval.push\_back(rval[i]);

214 }

215 

216 //=============================================================================

217 //

218 // Operator for the Float array types

219 //

220 // description : These two operators allow simple insertion between

221 // Tango sequence (DevVarLongArray) and C++ vectors

222 //

223 //=============================================================================

224 

`231 <../../dd/dd6/group__Ope.html#gad4eb2b96584b07d3aaf2789c98c7eda6>`__ inline
void operator<<(DevVarFloatArray &lval,const vector<float> &rval)

232 {

233  size\_t nb\_elt = rval.size();

234  lval.length((CORBA::ULong)nb\_elt);

235  for (unsigned long i = 0;i < nb\_elt;i++)

236  lval[i] = rval[i];

237 }

238 

`246 <../../dd/dd6/group__Ope.html#ga94906cc22d983d10ddd78d24d176c6ae>`__ inline
void operator<<(vector<float> &lval,const DevVarFloatArray &rval)

247 {

248  long nb\_elt = rval.length();

249  if (lval.empty() == false)

250  lval.clear();

251  for (long i = 0;i < nb\_elt;i++)

252  lval.push\_back(rval[i]);

253 }

254 

255 //=============================================================================

256 //

257 // Operator for the Double array types

258 //

259 // description : These two operators allow simple insertion between

260 // Tango sequence (DevVarDoubleArray) and C++ vectors

261 //

262 //=============================================================================

263 

`270 <../../dd/dd6/group__Ope.html#gae27ef2508818f48fa4e04cdb4b36e072>`__ inline
void operator<<(DevVarDoubleArray &lval,const vector<double> &rval)

271 {

272  size\_t nb\_elt = rval.size();

273  lval.length((CORBA::ULong)nb\_elt);

274  for (unsigned long i = 0;i < nb\_elt;i++)

275  lval[i] = rval[i];

276 }

277 

`285 <../../dd/dd6/group__Ope.html#gaba6e519930474d843b776205eebbe76f>`__ inline
void operator<<(vector<double> &lval,const DevVarDoubleArray &rval)

286 {

287  long nb\_elt = rval.length();

288  if (lval.empty() == false)

289  lval.clear();

290  for (long i = 0;i < nb\_elt;i++)

291  lval.push\_back(rval[i]);

292 }

293 

294 

295 //=============================================================================

296 //

297 // Operator for the Boolean array types

298 //

299 // description : These two operators allow simple insertion between

300 // Tango sequence (DevVarBooleanArray) and C++ vectors

301 //

302 //=============================================================================

303 

`310 <../../dd/dd6/group__Ope.html#ga8539aea7c8f1186903d21add572c80dd>`__ inline
void operator<<(DevVarBooleanArray &lval,const vector<bool> &rval)

311 {

312  size\_t nb\_elt = rval.size();

313  lval.length((CORBA::ULong)nb\_elt);

314  for (unsigned long i = 0;i < nb\_elt;i++)

315  lval[i] = rval[i];

316 }

317 

`325 <../../dd/dd6/group__Ope.html#ga42c9cb65c5ac6599ea46270175d4dbf0>`__ inline
void operator<<(vector<bool> &lval,const DevVarBooleanArray &rval)

326 {

327  long nb\_elt = rval.length();

328  if (lval.empty() == false)

329  lval.clear();

330  for (long i = 0;i < nb\_elt;i++)

331  lval.push\_back(rval[i]);

332 }

333 

334 //=============================================================================

335 //

336 // Operator for the Unsigned short array types

337 //

338 // description : These two operators allow simple insertion between

339 // Tango sequence (DevVarUShortArray) and C++ vectors

340 //

341 //=============================================================================

342 

`349 <../../dd/dd6/group__Ope.html#ga83003d5acb175dc5e2d0b9fbc170a3bc>`__ inline
void operator<<(DevVarUShortArray &lval,const vector<unsigned short>
&rval)

350 {

351  size\_t nb\_elt = rval.size();

352  lval.length((CORBA::ULong)nb\_elt);

353  for (unsigned long i = 0;i < nb\_elt;i++)

354  lval[i] = rval[i];

355 }

356 

`364 <../../dd/dd6/group__Ope.html#ga3edbea88319132f7a43f2500df0c0b90>`__ inline
void operator<<(vector<unsigned short> &lval,const DevVarUShortArray
&rval)

365 {

366  long nb\_elt = rval.length();

367  if (lval.empty() == false)

368  lval.clear();

369  for (long i = 0;i < nb\_elt;i++)

370  lval.push\_back(rval[i]);

371 }

372 

373 //=============================================================================

374 //

375 // Operator for the Unsigned long array types

376 //

377 // description : These two operators allow simple insertion between

378 // Tango sequence (DevVarUShortArray) and C++ vectors

379 //

380 //=============================================================================

381 

`389 <../../dd/dd6/group__Ope.html#gab1bf84843fd0b81d282b17e29d209a2d>`__ inline
void operator<<(DevVarULongArray &lval,const vector<DevULong> &rval)

390 {

391  size\_t nb\_elt = rval.size();

392  lval.length((CORBA::ULong)nb\_elt);

393  for (unsigned long i = 0;i < nb\_elt;i++)

394  lval[i] = rval[i];

395 }

396 

`403 <../../dd/dd6/group__Ope.html#ga5f2f3b2eb5521d98b6e495ebaf038fca>`__ inline
void operator<<(vector<DevULong> &lval,const DevVarULongArray &rval)

404 {

405  long nb\_elt = rval.length();

406  if (lval.empty() == false)

407  lval.clear();

408  for (long i = 0;i < nb\_elt;i++)

409  lval.push\_back(rval[i]);

410 }

411 

412 

413 //=============================================================================

414 //

415 // Operator for the Unsigned long long array types

416 //

417 // description : These two operators allow simple insertion between

418 // Tango sequence (DevVarULong64Array) and C++ vectors

419 //

420 //=============================================================================

421 

`429 <../../dd/dd6/group__Ope.html#ga4f134419f5595d6b2a8541e7077800f8>`__ inline
void operator<<(DevVarULong64Array &lval,const vector<DevULong64> &rval)

430 {

431  size\_t nb\_elt = rval.size();

432  lval.length((CORBA::ULong)nb\_elt);

433  for (unsigned long i = 0;i < nb\_elt;i++)

434  lval[i] = rval[i];

435 }

436 

`443 <../../dd/dd6/group__Ope.html#gaaa8f568d0165d5b64eb1aeec34a2919b>`__ inline
void operator<<(vector<DevULong64> &lval,const DevVarULong64Array &rval)

444 {

445  long nb\_elt = rval.length();

446  if (lval.empty() == false)

447  lval.clear();

448  for (long i = 0;i < nb\_elt;i++)

449  lval.push\_back(rval[i]);

450 }

451 

452 //=============================================================================

453 //

454 // Operator for the string array types

455 //

456 // description : These two operators allow simple insertion between

457 // Tango sequence (DevVarStringArray) and C++ vectors

458 //

459 //=============================================================================

460 

`467 <../../dd/dd6/group__Ope.html#gac29792db54cd10f9f2cc14c487012686>`__ inline
void operator<<(DevVarStringArray &lval,const vector<string> &rval)

468 {

469  size\_t nb\_elt = rval.size();

470  lval.length((CORBA::ULong)nb\_elt);

471  for (unsigned long i = 0;i < nb\_elt;i++)

472  lval[i] =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (rval[i].c\_str());

473 }

474 

`481 <../../dd/dd6/group__Ope.html#gabfe49dc628f325d11dbbc592779bf53a>`__ inline
void operator<<(vector<string> &lval,const DevVarStringArray &rval)

482 {

483  long nb\_elt = rval.length();

484  if (lval.empty() == false)

485  lval.clear();

486  string str;

487  for (long i = 0;i < nb\_elt;i++)

488  {

489  str = rval[i];

490  lval.push\_back(str);

491  }

492 }

493 

494 //=============================================================================

495 //

496 // Operator for the DevState array types

497 //

498 // description : These two operators allow simple insertion between

499 // Tango sequence (DevVarStateArray) and C++ vectors

500 //

501 //=============================================================================

502 

`509 <../../dd/dd6/group__Ope.html#ga8360391336ed746e606b04aa964cdb60>`__ inline
void operator<<(DevVarStateArray &lval,const vector<DevState> &rval)

510 {

511  size\_t nb\_elt = rval.size();

512  lval.length((CORBA::ULong)nb\_elt);

513  for (unsigned long i = 0;i < nb\_elt;i++)

514  lval[i] = rval[i];

515 }

516 

`523 <../../dd/dd6/group__Ope.html#ga646e70517216abcaaa2c6e47824a4bb7>`__ inline
void operator<<(vector<DevState> &lval,const DevVarStateArray &rval)

524 {

525  long nb\_elt = rval.length();

526  if (lval.empty() == false)

527  lval.clear();

528  for (long i = 0;i < nb\_elt;i++)

529  lval.push\_back(rval[i]);

530 }

531 

533 

534 //=============================================================================

535 //

536 // Print operator for sequence types

537 //

538 // description : These operators allow simple printing of sequences

539 //

540 //=============================================================================

541 //#ifndef TANGO\_HAS\_LOG4TANGO

553 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarCharArray &rval);

562 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarShortArray &rval);

571 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarLongArray &rval);

580 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarLong64Array &rval);

589 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarFloatArray &rval);

598 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarDoubleArray &rval);

607 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarBooleanArray &rval);

616 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarUShortArray &rval);

625 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarULongArray &rval);

634 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarULong64Array &rval);

643 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarStringArray &rval);

652 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarStateArray &rval);

661 ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&lval,const DevVarEncodedArray &rval);

663 

664 //#endif // TANGO\_HAS\_LOG4TANGO

665 

666 } // End of Tango namespace

667 

668 

669 #endif /\* \_SECVEC\_ \*/

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__

Pipe & operator<<(Pipe &, T &)

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__

char \* string\_dup(char \*s)

**Definition:** tango\_const.h:462

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `seqvec.h <../../d0/df4/seqvec_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
