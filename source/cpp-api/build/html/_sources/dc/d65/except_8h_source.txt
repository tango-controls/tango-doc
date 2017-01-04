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

except.h

`Go to the documentation of this file. <../../dc/d65/except_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : except.h

4 //

5 // description : Include for exception related utilities

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

24 // GNU Lesser General Public License for more details.

25 //

26 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

27 // If not, see <http://www.gnu.org/licenses/>.

28 //

29 // $Revision$

30 //

31 //==================================================================================================================

32 

33 #ifndef \_EXCEPT\_H

34 #define \_EXCEPT\_H

35 

36 #include <string>

37 

38 #include <idl/tango.h>

39 

40 using namespace `std <../../d8/dcc/namespacestd.html>`__;

41 

42 

43 namespace `Tango <../../de/ddf/namespaceTango.html>`__

44 {

45 

46 class DeviceImpl;

47 

48 //==================================================================================================================

49 //

50 // Class :

51 // Except

52 //

53 // description :

54 // This class is a container for all exceptions related methods to be
used in aa Tango device server/client.

55 // Most of these methods are static.

56 //

57 //==================================================================================================================

58 

`59 <../../dc/d65/except_8h.html#a98061b263048c425ae02e64a6bbb0106>`__ #define
NOSPACEINDOC\_EXCEPT

60 

61 

`74 <../../df/d37/classTango_1_1Except.html>`__ class
`Except <../../df/d37/classTango_1_1Except.html>`__

75 {

76 public:

77 

87  static void print\_exception(const CORBA::Exception &ex);

89 

99  static void print\_error\_stack(const Tango::DevErrorList &ex);

100 

102 

`122 <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__\ (const
char \*reason,

123  const char \*desc,

124  const char \*origin,

125  Tango::ErrSeverity sever = Tango::ERR)

126  {

127  Tango::DevErrorList errors(1);

128 

129  errors.length(1);

130  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

131  errors[0].severity = sever;

132  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

133  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

134 

135  throw Tango::DevFailed(errors);

136  }

137 

`157 <../../df/d37/classTango_1_1Except.html#a2dc82f122c0bdde68566f0a6b3419f13>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a2dc82f122c0bdde68566f0a6b3419f13>`__\ (const
char \*reason,

158  const char \*desc,

159  char \*origin,

160  Tango::ErrSeverity sever = Tango::ERR)

161  {

162  Tango::DevErrorList errors(1);

163 

164  errors.length(1);

165  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

166  errors[0].severity = sever;

167  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

168  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

169  delete[] origin;

170 

171  throw Tango::DevFailed(errors);

172  }

173 

`193 <../../df/d37/classTango_1_1Except.html#a21f0ffe9ed4839c570f8137edb3d7241>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a21f0ffe9ed4839c570f8137edb3d7241>`__\ (const
char \*reason,

194  char \*desc,

195  const char \*origin,

196  Tango::ErrSeverity sever = Tango::ERR)

197  {

198  Tango::DevErrorList errors(1);

199 

200  errors.length(1);

201  errors[0].severity = sever;

202  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

203  delete[] desc;

204  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

205  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

206 

207  throw Tango::DevFailed(errors);

208  }

209 

`228 <../../df/d37/classTango_1_1Except.html#a4b6a58d11b720d1aef7cc341802ddc4e>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a4b6a58d11b720d1aef7cc341802ddc4e>`__\ (const
char \*reason,

229  char \*desc,

230  char \*origin,

231  Tango::ErrSeverity sever = Tango::ERR)

232  {

233  Tango::DevErrorList errors(1);

234 

235  errors.length(1);

236  errors[0].severity = sever;

237  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

238  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

239  delete[] origin;

240  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

241  delete[] desc;

242 

243  throw Tango::DevFailed(errors);

244  }

245 

`265 <../../df/d37/classTango_1_1Except.html#a4bc955a801d67a784828f4b79471e959>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a4bc955a801d67a784828f4b79471e959>`__\ (char
\*reason,

266  const char \*desc,

267  const char \*origin,

268  Tango::ErrSeverity sever = Tango::ERR)

269  {

270  Tango::DevErrorList errors(1);

271 

272  errors.length(1);

273  errors[0].severity = sever;

274  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

275  delete[] reason;

276  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

277  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

278 

279  throw Tango::DevFailed(errors);

280  }

281 

`301 <../../df/d37/classTango_1_1Except.html#a21253baed3a2521bfa388fc8079f2026>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a21253baed3a2521bfa388fc8079f2026>`__\ (char
\*reason,

302  const char \*desc,

303  char \*origin,

304  Tango::ErrSeverity sever = Tango::ERR)

305  {

306  Tango::DevErrorList errors(1);

307 

308  errors.length(1);

309  errors[0].severity = sever;

310  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

311  delete[] reason;

312  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

313  delete[] origin;

314  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

315 

316  throw Tango::DevFailed(errors);

317  }

318 

`338 <../../df/d37/classTango_1_1Except.html#a87d6f2b545de08d288da642068e001c8>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a87d6f2b545de08d288da642068e001c8>`__\ (char
\*reason,

339  char \*desc,

340  const char \*origin,

341  Tango::ErrSeverity sever = Tango::ERR)

342  {

343  Tango::DevErrorList errors(1);

344 

345  errors.length(1);

346  errors[0].severity = sever;

347  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

348  delete[] reason;

349  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

350  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

351  delete[] desc;

352 

353  throw Tango::DevFailed(errors);

354  }

355 

`375 <../../df/d37/classTango_1_1Except.html#a55ed8f25cc157fa3152ede702b36517c>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a55ed8f25cc157fa3152ede702b36517c>`__\ (char
\*reason,

376  char \*desc,

377  char \*origin,

378  Tango::ErrSeverity sever = Tango::ERR)

379  {

380  Tango::DevErrorList errors(1);

381 

382  errors.length(1);

383  errors[0].severity = sever;

384  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

385  delete[] reason;

386  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

387  delete[] origin;

388  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

389  delete[] desc;

390 

391  throw Tango::DevFailed(errors);

392  }

393 

`412 <../../df/d37/classTango_1_1Except.html#ae8002ec9ea1ba0c99a0770b55ff71d98>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#ae8002ec9ea1ba0c99a0770b55ff71d98>`__\ (const
string &reason,

413  const string &desc,

414  const string &origin,

415  Tango::ErrSeverity sever = Tango::ERR)

416  {

417  Tango::DevErrorList errors(1);

418 

419  errors.length(1);

420  errors[0].severity = sever;

421  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

422  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

423  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

424 

425  throw Tango::DevFailed(errors);

426  }

427 

`446 <../../df/d37/classTango_1_1Except.html#aea2efa05e2b0f46a343061cf88655547>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#aea2efa05e2b0f46a343061cf88655547>`__\ (const
string &reason,

447  const string &desc,

448  const char \*origin,

449  Tango::ErrSeverity sever = Tango::ERR)

450  {

451  Tango::DevErrorList errors(1);

452 

453  errors.length(1);

454  errors[0].severity = sever;

455  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

456  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

457  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

458 

459  throw Tango::DevFailed(errors);

460  }

461 

`480 <../../df/d37/classTango_1_1Except.html#a13ecdf493972a076fcf3627624198cce>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a13ecdf493972a076fcf3627624198cce>`__\ (const
string &reason,

481  const char \*desc,

482  const string &origin,

483  Tango::ErrSeverity sever = Tango::ERR)

484  {

485  Tango::DevErrorList errors(1);

486 

487  errors.length(1);

488  errors[0].severity = sever;

489  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

490  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

491  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

492 

493  throw Tango::DevFailed(errors);

494  }

495 

`514 <../../df/d37/classTango_1_1Except.html#ac7a9b59a82aa568890f75c0232e68824>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#ac7a9b59a82aa568890f75c0232e68824>`__\ (const
string &reason,

515  const char \*desc,

516  const char \*origin,

517  Tango::ErrSeverity sever = Tango::ERR)

518  {

519  Tango::DevErrorList errors(1);

520 

521  errors.length(1);

522  errors[0].severity = sever;

523  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

524  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

525  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

526 

527  throw Tango::DevFailed(errors);

528  }

529 

`548 <../../df/d37/classTango_1_1Except.html#ac7d152b9c381a9ff2202224404b4df34>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#ac7d152b9c381a9ff2202224404b4df34>`__\ (const
char \*reason,

549  const string &desc,

550  const string &origin,

551  Tango::ErrSeverity sever = Tango::ERR)

552  {

553  Tango::DevErrorList errors(1);

554 

555  errors.length(1);

556  errors[0].severity = sever;

557  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

558  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

559  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

560 

561  throw Tango::DevFailed(errors);

562  }

563 

`582 <../../df/d37/classTango_1_1Except.html#ae1125b916a127f9b75832b018eb98ede>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#ae1125b916a127f9b75832b018eb98ede>`__\ (const
char \*reason,

583  const string &desc,

584  const char \*origin,

585  Tango::ErrSeverity sever = Tango::ERR)

586  {

587  Tango::DevErrorList errors(1);

588 

589  errors.length(1);

590  errors[0].severity = sever;

591  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

592  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

593  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

594 

595  throw Tango::DevFailed(errors);

596  }

597 

`616 <../../df/d37/classTango_1_1Except.html#a92359694cca28325fd6480f87e4b9668>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a92359694cca28325fd6480f87e4b9668>`__\ (const
char \*reason,

617  const char \*desc,

618  const string &origin,

619  Tango::ErrSeverity sever = Tango::ERR)

620  {

621  Tango::DevErrorList errors(1);

622 

623  errors.length(1);

624  errors[0].severity = sever;

625  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

626  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

627  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

628 

629  throw Tango::DevFailed(errors);

630  }

631 

`651 <../../df/d37/classTango_1_1Except.html#a379a9cc1c1ccfc574ffecd135279e13f>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a379a9cc1c1ccfc574ffecd135279e13f>`__\ (const
string &reason,

652  const string &desc,

653  char \*origin,

654  Tango::ErrSeverity sever = Tango::ERR)

655  {

656  Tango::DevErrorList errors(1);

657 

658  errors.length(1);

659  errors[0].severity = sever;

660  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

661  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

662  delete[] origin;

663  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

664 

665  throw Tango::DevFailed(errors);

666  }

667 

`687 <../../df/d37/classTango_1_1Except.html#a8a7e6834550169c1b9bd4c6cd822bd58>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a8a7e6834550169c1b9bd4c6cd822bd58>`__\ (const
string &reason,

688  char \*desc,

689  const string &origin,

690  Tango::ErrSeverity sever = Tango::ERR)

691  {

692  Tango::DevErrorList errors(1);

693 

694  errors.length(1);

695  errors[0].severity = sever;

696  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

697  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

698  delete[] desc;

699  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

700 

701  throw Tango::DevFailed(errors);

702  }

703 

`723 <../../df/d37/classTango_1_1Except.html#a81dc475cd517c75e49c188bb91fd0e60>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a81dc475cd517c75e49c188bb91fd0e60>`__\ (const
string &reason,

724  char \*desc,

725  char \*origin,

726  Tango::ErrSeverity sever = Tango::ERR)

727  {

728  Tango::DevErrorList errors(1);

729 

730  errors.length(1);

731  errors[0].severity = sever;

732  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

733  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

734  delete[] origin;

735  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

736  delete desc;

737 

738  throw Tango::DevFailed(errors);

739  }

740 

`760 <../../df/d37/classTango_1_1Except.html#a81a64fad0f2d00d7e9eae178fe986ea8>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a81a64fad0f2d00d7e9eae178fe986ea8>`__\ (char
\*reason,

761  const string &desc,

762  const string &origin,

763  Tango::ErrSeverity sever = Tango::ERR)

764  {

765  Tango::DevErrorList errors(1);

766 

767  errors.length(1);

768  errors[0].severity = sever;

769  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

770  delete[] reason;

771  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

772  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

773 

774  throw Tango::DevFailed(errors);

775  }

776 

`796 <../../df/d37/classTango_1_1Except.html#a99d02e0220c93333faf67f1b680c38c1>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a99d02e0220c93333faf67f1b680c38c1>`__\ (char
\*reason,

797  const string &desc,

798  char \*origin,

799  Tango::ErrSeverity sever = Tango::ERR)

800  {

801  Tango::DevErrorList errors(1);

802 

803  errors.length(1);

804  errors[0].severity = sever;

805  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

806  delete[] reason;

807  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

808  delete[] origin;

809  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

810 

811  throw Tango::DevFailed(errors);

812  }

813 

`833 <../../df/d37/classTango_1_1Except.html#a51c66f4b7d4ef481676117b5db783695>`__ 
static inline void
`throw\_exception <../../df/d37/classTango_1_1Except.html#a51c66f4b7d4ef481676117b5db783695>`__\ (char
\*reason,

834  char \*desc,

835  const string &origin,

836  Tango::ErrSeverity sever = Tango::ERR)

837  {

838  Tango::DevErrorList errors(1);

839 

840  errors.length(1);

841  errors[0].severity = sever;

842  errors[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

843  delete[] reason;

844  errors[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

845  delete[] desc;

846  errors[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

847 

848  throw Tango::DevFailed(errors);

849  }

850 

852 

`873 <../../df/d37/classTango_1_1Except.html#a9c3792241214eac89e7fbdd91646b67a>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a9c3792241214eac89e7fbdd91646b67a>`__\ (Tango::DevFailed
&ex,

874  const char \*reason,

875  const char \*desc,

876  const char \*origin,

877  Tango::ErrSeverity sever = Tango::ERR)

878  {

879  long nb\_err = ex.errors.length();

880  ex.errors.length(nb\_err + 1);

881 

882  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

883  ex.errors[nb\_err].severity = sever;

884  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

885  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

886 

887  throw ex;

888  }

889 

`910 <../../df/d37/classTango_1_1Except.html#ab892eac30e082eca52af8c57f245e46e>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab892eac30e082eca52af8c57f245e46e>`__\ (Tango::DevFailed
&ex,

911  const char \*reason,

912  const char \*desc,

913  char \*origin,

914  Tango::ErrSeverity sever = Tango::ERR)

915  {

916  long nb\_err = ex.errors.length();

917  ex.errors.length(nb\_err + 1);

918 

919  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

920  ex.errors[nb\_err].severity = sever;

921  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

922  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

923  delete[] origin;

924 

925  throw ex;

926  }

927 

`948 <../../df/d37/classTango_1_1Except.html#a498aaee0525e6650bb17e209581837f8>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a498aaee0525e6650bb17e209581837f8>`__\ (Tango::DevFailed
&ex,

949  const char \*reason,

950  char \*desc,

951  const char \*origin,

952  Tango::ErrSeverity sever = Tango::ERR)

953  {

954  long nb\_err = ex.errors.length();

955  ex.errors.length(nb\_err + 1);

956 

957  ex.errors[nb\_err].severity = sever;

958  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

959  delete[] desc;

960  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

961  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

962 

963  throw ex;

964  }

965 

`985 <../../df/d37/classTango_1_1Except.html#a0422b78fa9a5632a46f3c617917ea80f>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a0422b78fa9a5632a46f3c617917ea80f>`__\ (Tango::DevFailed
&ex,

986  const char \*reason,

987  char \*desc,

988  char \*origin,

989  Tango::ErrSeverity sever = Tango::ERR)

990  {

991  long nb\_err = ex.errors.length();

992  ex.errors.length(nb\_err + 1);

993 

994  ex.errors[nb\_err].severity = sever;

995  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

996  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

997  delete[] origin;

998  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

999  delete[] desc;

1000 

1001  throw ex;

1002  }

1003 

`1024 <../../df/d37/classTango_1_1Except.html#a8896fdbe1a3bbe7b3aee6930a3d01b68>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a8896fdbe1a3bbe7b3aee6930a3d01b68>`__\ (Tango::DevFailed
&ex,

1025  char \*reason,

1026  const char \*desc,

1027  const char \*origin,

1028  Tango::ErrSeverity sever = Tango::ERR)

1029  {

1030  long nb\_err = ex.errors.length();

1031  ex.errors.length(nb\_err + 1);

1032 

1033  ex.errors[nb\_err].severity = sever;

1034  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1035  delete[] reason;

1036  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1037  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1038 

1039  throw ex;

1040  }

1041 

`1062 <../../df/d37/classTango_1_1Except.html#a83510f679847371ba4ac8813e82fc14f>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a83510f679847371ba4ac8813e82fc14f>`__\ (Tango::DevFailed
&ex,

1063  char \*reason,

1064  const char \*desc,

1065  char \*origin,

1066  Tango::ErrSeverity sever = Tango::ERR)

1067  {

1068  long nb\_err = ex.errors.length();

1069  ex.errors.length(nb\_err + 1);

1070 

1071  ex.errors[nb\_err].severity = sever;

1072  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1073  delete[] reason;

1074  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1075  delete[] origin;

1076  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1077 

1078  throw ex;

1079  }

1080 

`1101 <../../df/d37/classTango_1_1Except.html#aa01396d9679d7b260a31a61735bf4004>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa01396d9679d7b260a31a61735bf4004>`__\ (Tango::DevFailed
&ex,

1102  char \*reason,

1103  char \*desc,

1104  const char \*origin,

1105  Tango::ErrSeverity sever = Tango::ERR)

1106  {

1107  long nb\_err = ex.errors.length();

1108  ex.errors.length(nb\_err + 1);

1109 

1110  ex.errors[nb\_err].severity = sever;

1111  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1112  delete[] reason;

1113  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1114  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1115  delete[] desc;

1116 

1117  throw ex;

1118  }

1119 

`1140 <../../df/d37/classTango_1_1Except.html#ae2c8a7188665f1cd16f448aa4ab83d17>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ae2c8a7188665f1cd16f448aa4ab83d17>`__\ (Tango::DevFailed
&ex,

1141  char \*reason,

1142  char \*desc,

1143  char \*origin,

1144  Tango::ErrSeverity sever = Tango::ERR)

1145  {

1146  long nb\_err = ex.errors.length();

1147  ex.errors.length(nb\_err + 1);

1148 

1149  ex.errors[nb\_err].severity = sever;

1150  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1151  delete[] reason;

1152  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1153  delete[] origin;

1154  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1155  delete[] desc;

1156 

1157  throw ex;

1158  }

1159 

`1179 <../../df/d37/classTango_1_1Except.html#ace5f51b25e895260bb85b318d4e4f59c>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ace5f51b25e895260bb85b318d4e4f59c>`__\ (Tango::DevFailed
&ex,

1180  const string &reason,

1181  const string &desc,

1182  const string &origin,

1183  Tango::ErrSeverity sever = Tango::ERR)

1184  {

1185  long nb\_err = ex.errors.length();

1186  ex.errors.length(nb\_err + 1);

1187 

1188  ex.errors[nb\_err].severity = sever;

1189  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1190  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1191  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1192 

1193  throw ex;

1194  }

1195 

`1215 <../../df/d37/classTango_1_1Except.html#aeba14e603df6a856739c7734859c50f9>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aeba14e603df6a856739c7734859c50f9>`__\ (Tango::DevFailed
&ex,

1216  const string &reason,

1217  const string &desc,

1218  const char \*origin,

1219  Tango::ErrSeverity sever = Tango::ERR)

1220  {

1221  long nb\_err = ex.errors.length();

1222  ex.errors.length(nb\_err + 1);

1223 

1224  ex.errors[nb\_err].severity = sever;

1225  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1226  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1227  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1228 

1229  throw ex;

1230  }

1231 

`1251 <../../df/d37/classTango_1_1Except.html#a03a3ffc68c976acb58a8e61eb50fcad6>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a03a3ffc68c976acb58a8e61eb50fcad6>`__\ (Tango::DevFailed
&ex,

1252  const string &reason,

1253  const char \*desc,

1254  const string &origin,

1255  Tango::ErrSeverity sever = Tango::ERR)

1256  {

1257  long nb\_err = ex.errors.length();

1258  ex.errors.length(nb\_err + 1);

1259 

1260  ex.errors[nb\_err].severity = sever;

1261  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1262  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1263  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1264 

1265  throw ex;

1266  }

1267 

`1287 <../../df/d37/classTango_1_1Except.html#a1ca76b2d4a5b22d0a2079e3889b12a9e>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1ca76b2d4a5b22d0a2079e3889b12a9e>`__\ (Tango::DevFailed
&ex,

1288  const string &reason,

1289  const char \*desc,

1290  const char \*origin,

1291  Tango::ErrSeverity sever = Tango::ERR)

1292  {

1293  long nb\_err = ex.errors.length();

1294  ex.errors.length(nb\_err + 1);

1295 

1296  ex.errors[nb\_err].severity = sever;

1297  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1298  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1299  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1300 

1301  throw ex;

1302  }

1303 

`1323 <../../df/d37/classTango_1_1Except.html#aa28f7d876b6967235e854555fc2fe1ba>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa28f7d876b6967235e854555fc2fe1ba>`__\ (Tango::DevFailed
&ex,

1324  const char \*reason,

1325  const string &desc,

1326  const string &origin,

1327  Tango::ErrSeverity sever = Tango::ERR)

1328  {

1329  long nb\_err = ex.errors.length();

1330  ex.errors.length(nb\_err + 1);

1331 

1332  ex.errors[nb\_err].severity = sever;

1333  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1334  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1335  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1336 

1337  throw ex;

1338  }

1339 

`1359 <../../df/d37/classTango_1_1Except.html#a93e9e068103c707d2c4931f8c7804ef8>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a93e9e068103c707d2c4931f8c7804ef8>`__\ (Tango::DevFailed
&ex,

1360  const char \*reason,

1361  const string &desc,

1362  const char \*origin,

1363  Tango::ErrSeverity sever = Tango::ERR)

1364  {

1365  long nb\_err = ex.errors.length();

1366  ex.errors.length(nb\_err + 1);

1367 

1368  ex.errors[nb\_err].severity = sever;

1369  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1370  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1371  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1372 

1373  throw ex;

1374  }

1375 

`1395 <../../df/d37/classTango_1_1Except.html#a1d0f06fa487f3506e49cad58d36e6ba0>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1d0f06fa487f3506e49cad58d36e6ba0>`__\ (Tango::DevFailed
&ex,

1396  const char \*reason,

1397  const char \*desc,

1398  const string &origin,

1399  Tango::ErrSeverity sever = Tango::ERR)

1400  {

1401  long nb\_err = ex.errors.length();

1402  ex.errors.length(nb\_err + 1);

1403 

1404  ex.errors[nb\_err].severity = sever;

1405  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1406  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1407  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1408 

1409  throw ex;

1410  }

1411 

`1432 <../../df/d37/classTango_1_1Except.html#a73f743dfaac89212eeb994bb40e79577>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a73f743dfaac89212eeb994bb40e79577>`__\ (Tango::DevFailed
&ex,

1433  const string &reason,

1434  const string &desc,

1435  char \*origin,

1436  Tango::ErrSeverity sever = Tango::ERR)

1437  {

1438  long nb\_err = ex.errors.length();

1439  ex.errors.length(nb\_err + 1);

1440 

1441  ex.errors[nb\_err].severity = sever;

1442  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1443  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1444  delete[] origin;

1445  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1446 

1447  throw ex;

1448  }

1449 

`1470 <../../df/d37/classTango_1_1Except.html#a1a0b86d7563895673901bbfb9e862b9b>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1a0b86d7563895673901bbfb9e862b9b>`__\ (Tango::DevFailed
&ex,

1471  const string &reason,

1472  char \*desc,

1473  const string &origin,

1474  Tango::ErrSeverity sever = Tango::ERR)

1475  {

1476  long nb\_err = ex.errors.length();

1477  ex.errors.length(nb\_err + 1);

1478 

1479  ex.errors[nb\_err].severity = sever;

1480  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1481  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1482  delete[] desc;

1483  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1484 

1485  throw ex;

1486  }

1487 

`1508 <../../df/d37/classTango_1_1Except.html#ab919ac526ab5cc7912d98df37989a96d>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab919ac526ab5cc7912d98df37989a96d>`__\ (Tango::DevFailed
&ex,

1509  const string &reason,

1510  char \*desc,

1511  char \*origin,

1512  Tango::ErrSeverity sever = Tango::ERR)

1513  {

1514  long nb\_err = ex.errors.length();

1515  ex.errors.length(nb\_err + 1);

1516 

1517  ex.errors[nb\_err].severity = sever;

1518  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason.c\_str());

1519  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1520  delete[] origin;

1521  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1522  delete desc;

1523 

1524  throw ex;

1525  }

1526 

`1547 <../../df/d37/classTango_1_1Except.html#aa52f5b4614aaa58d60a2fc830ef23ba6>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa52f5b4614aaa58d60a2fc830ef23ba6>`__\ (Tango::DevFailed
&ex,

1548  char \*reason,

1549  const string &desc,

1550  const string &origin,

1551  Tango::ErrSeverity sever = Tango::ERR)

1552  {

1553  long nb\_err = ex.errors.length();

1554  ex.errors.length(nb\_err + 1);

1555 

1556  ex.errors[nb\_err].severity = sever;

1557  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1558  delete[] reason;

1559  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1560  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1561 

1562  throw ex;

1563  }

1564 

`1585 <../../df/d37/classTango_1_1Except.html#a28f9a09de30e050f27d879e1120d3ad2>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a28f9a09de30e050f27d879e1120d3ad2>`__\ (Tango::DevFailed
&ex,

1586  char \*reason,

1587  const string &desc,

1588  char \*origin,

1589  Tango::ErrSeverity sever = Tango::ERR)

1590  {

1591  long nb\_err = ex.errors.length();

1592  ex.errors.length(nb\_err + 1);

1593 

1594  ex.errors[nb\_err].severity = sever;

1595  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1596  delete[] reason;

1597  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1598  delete[] origin;

1599  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc.c\_str());

1600 

1601  throw ex;

1602  }

1603 

`1624 <../../df/d37/classTango_1_1Except.html#a42d1f2a98eb402a268e582128ddd61ab>`__ 
static inline void
`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a42d1f2a98eb402a268e582128ddd61ab>`__\ (Tango::DevFailed
&ex,

1625  char \*reason,

1626  char \*desc,

1627  const string &origin,

1628  Tango::ErrSeverity sever = Tango::ERR)

1629  {

1630  long nb\_err = ex.errors.length();

1631  ex.errors.length(nb\_err + 1);

1632 

1633  ex.errors[nb\_err].severity = sever;

1634  ex.errors[nb\_err].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1635  delete[] reason;

1636  ex.errors[nb\_err].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1637  delete[] desc;

1638  ex.errors[nb\_err].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin.c\_str());

1639 

1640  throw ex;

1641  }

1643 

1664  static void throw\_exception(const CORBA::SystemException
&ex,const char \*origin);

1665 

1685  static void throw\_exception(const CORBA::SystemException &ex,char
\*origin);

1686 

1706  static void throw\_exception(const CORBA::SystemException
&ex,const string &origin);

1707 

1708 

`1731 <../../df/d37/classTango_1_1Except.html#a79a7b2e44c9584e8795042c1ff7a92cc>`__ 
static inline void
`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a79a7b2e44c9584e8795042c1ff7a92cc>`__\ (const
char \*att\_name,const char \*reason,

1732  const char \*desc,const char \*origin,Tango::ErrSeverity sever =
Tango::ERR)

1733  {

1734  Tango::NamedDevErrorList errors(1);

1735 

1736  errors.length(1);

1737  errors[0].name =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (att\_name);

1738  errors[0].index\_in\_call = 999;

1739  errors[0].err\_list.length(1);

1740  errors[0].err\_list[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1741  errors[0].err\_list[0].severity = sever;

1742  errors[0].err\_list[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1743  errors[0].err\_list[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1744 

1745  throw Tango::MultiDevFailed(errors);

1746  }

1747 

`1769 <../../df/d37/classTango_1_1Except.html#a55ba95758fa392f750ad9b84d0a636f8>`__ 
static inline void
`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a55ba95758fa392f750ad9b84d0a636f8>`__\ (vector<string>
&atts,const char \*reason,

1770  const char \*desc,const char \*origin,Tango::ErrSeverity sever =
Tango::ERR)

1771  {

1772  unsigned int a\_size = (unsigned int)atts.size();

1773  Tango::NamedDevErrorList errors(a\_size);

1774 

1775  errors.length(a\_size);

1776  for (unsigned int loop = 0;loop < a\_size;loop++)

1777  {

1778  errors[loop].name =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (atts[loop].c\_str());

1779  errors[loop].index\_in\_call = 999;

1780  errors[loop].err\_list.length(1);

1781  errors[loop].err\_list[0].desc =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (desc);

1782  errors[loop].err\_list[0].severity = sever;

1783  errors[loop].err\_list[0].reason =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (reason);

1784  errors[loop].err\_list[0].origin =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (origin);

1785  }

1786 

1787  throw Tango::MultiDevFailed(errors);

1788  }

1789 

1815  static void
throw\_named\_exception(\ `Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*d,long att\_idx,const char \*reason,

1816  const char \*desc,const char \*origin,Tango::ErrSeverity sever =
Tango::ERR);

1817 

1843  static void
throw\_named\_exception(\ `Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*d,vector<long> &atts,const char \*reason,

1844  const char \*desc,const char \*origin,Tango::ErrSeverity sever =
Tango::ERR);

1845 

1846 

1860  static bool compare\_exception(Tango::DevFailed &ex1,
Tango::DevFailed &ex2);

1861 

1862 

1864 

1866 

1867  static char \*print\_CORBA\_SystemException(const
CORBA::SystemException \*);

1868  static char \*print\_CORBA\_SystemException\_r(const
CORBA::SystemException \*, char \* err\_msg); // reentrant version

1869  static omni\_mutex the\_mutex;

1870 

1871 protected:

1873  static char mess[256];

1874 };

1875 

1876 } // End of Tango namespace

1877 

1878 #endif /\* EXCEPT \*/

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a51c66f4b7d4ef481676117b5db783695>`__

static void throw\_exception(char \*reason, char \*desc, const string
&origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:833

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab919ac526ab5cc7912d98df37989a96d>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1508

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a21f0ffe9ed4839c570f8137edb3d7241>`__

static void throw\_exception(const char \*reason, char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:193

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a379a9cc1c1ccfc574ffecd135279e13f>`__

static void throw\_exception(const string &reason, const string &desc,
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:651

`Tango::Except::throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a79a7b2e44c9584e8795042c1ff7a92cc>`__

static void throw\_named\_exception(const char \*att\_name, const char
\*reason, const char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Throw a TANGO MultiDevFailed exception.

**Definition:** except.h:1731

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aeba14e603df6a856739c7734859c50f9>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, const string &desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1215

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa28f7d876b6967235e854555fc2fe1ba>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, const string &desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1323

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1ca76b2d4a5b22d0a2079e3889b12a9e>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, const char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1287

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a03a3ffc68c976acb58a8e61eb50fcad6>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, const char \*desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1251

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a4bc955a801d67a784828f4b79471e959>`__

static void throw\_exception(char \*reason, const char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:265

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a55ed8f25cc157fa3152ede702b36517c>`__

static void throw\_exception(char \*reason, char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:375

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a2dc82f122c0bdde68566f0a6b3419f13>`__

static void throw\_exception(const char \*reason, const char \*desc,
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:157

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#ac7d152b9c381a9ff2202224404b4df34>`__

static void throw\_exception(const char \*reason, const string &desc,
const string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:548

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a21253baed3a2521bfa388fc8079f2026>`__

static void throw\_exception(char \*reason, const char \*desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:301

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a93e9e068103c707d2c4931f8c7804ef8>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, const string &desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1359

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1a0b86d7563895673901bbfb9e862b9b>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, char \*desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1470

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#ae8002ec9ea1ba0c99a0770b55ff71d98>`__

static void throw\_exception(const string &reason, const string &desc,
const string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:412

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a81dc475cd517c75e49c188bb91fd0e60>`__

static void throw\_exception(const string &reason, char \*desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:723

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a13ecdf493972a076fcf3627624198cce>`__

static void throw\_exception(const string &reason, const char \*desc,
const string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:480

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#aea2efa05e2b0f46a343061cf88655547>`__

static void throw\_exception(const string &reason, const string &desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:446

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a87d6f2b545de08d288da642068e001c8>`__

static void throw\_exception(char \*reason, char \*desc, const char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:338

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ae2c8a7188665f1cd16f448aa4ab83d17>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
char \*desc, char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1140

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#ae1125b916a127f9b75832b018eb98ede>`__

static void throw\_exception(const char \*reason, const string &desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:582

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a83510f679847371ba4ac8813e82fc14f>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
const char \*desc, char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1062

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a9c3792241214eac89e7fbdd91646b67a>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, const char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:873

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a28f9a09de30e050f27d879e1120d3ad2>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
const string &desc, char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1585

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa01396d9679d7b260a31a61735bf4004>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
char \*desc, const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1101

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a8896fdbe1a3bbe7b3aee6930a3d01b68>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
const char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1024

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a73f743dfaac89212eeb994bb40e79577>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, const string &desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1432

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a4b6a58d11b720d1aef7cc341802ddc4e>`__

static void throw\_exception(const char \*reason, char \*desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:228

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ace5f51b25e895260bb85b318d4e4f59c>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const string
&reason, const string &desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1179

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab892eac30e082eca52af8c57f245e46e>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, const char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:910

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a81a64fad0f2d00d7e9eae178fe986ea8>`__

static void throw\_exception(char \*reason, const string &desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:760

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a8a7e6834550169c1b9bd4c6cd822bd58>`__

static void throw\_exception(const string &reason, char \*desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:687

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a99d02e0220c93333faf67f1b680c38c1>`__

static void throw\_exception(char \*reason, const string &desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:796

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a0422b78fa9a5632a46f3c617917ea80f>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:985

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a92359694cca28325fd6480f87e4b9668>`__

static void throw\_exception(const char \*reason, const char \*desc,
const string &origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:616

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__

static void throw\_exception(const char \*reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:122

`Tango::Except <../../df/d37/classTango_1_1Except.html>`__

Container class for all exception related methods.

**Definition:** except.h:74

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1d0f06fa487f3506e49cad58d36e6ba0>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, const char \*desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1395

`Tango::Except::throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a55ba95758fa392f750ad9b84d0a636f8>`__

static void throw\_named\_exception(vector< string > &atts, const char
\*reason, const char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Throw a TANGO MultiDevFailed exception.

**Definition:** except.h:1769

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa52f5b4614aaa58d60a2fc830ef23ba6>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
const string &desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1547

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__

char \* string\_dup(char \*s)

**Definition:** tango\_const.h:462

`Tango::Except::throw\_exception <../../df/d37/classTango_1_1Except.html#ac7a9b59a82aa568890f75c0232e68824>`__

static void throw\_exception(const string &reason, const char \*desc,
const char \*origin, Tango::ErrSeverity sever=Tango::ERR)

Generate and throw a TANGO DevFailed exception.

**Definition:** except.h:514

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a42d1f2a98eb402a268e582128ddd61ab>`__

static void re\_throw\_exception(Tango::DevFailed &ex, char \*reason,
char \*desc, const string &origin, Tango::ErrSeverity sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:1624

`Tango::Except::re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a498aaee0525e6650bb17e209581837f8>`__

static void re\_throw\_exception(Tango::DevFailed &ex, const char
\*reason, char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

Re-throw a TANGO DevFailed exception with one more error.

**Definition:** except.h:948

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `except.h <../../dc/d65/except_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
