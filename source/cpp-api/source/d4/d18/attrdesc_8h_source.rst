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

attrdesc.h

`Go to the documentation of this
file. <../../d4/d18/attrdesc_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : attrdesc.h

4 //

5 // description : Include file for the Attr classes hierarchy. Three
classes are declared in this file :

6 // The Attr class

7 // The SpectrumAttr class

8 // The ImageAttr class

9 //

10 // project : TANGO

11 //

12 // author(s) : A.Gotz + E.Taurel

13 //

14 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

15 // European Synchrotron Radiation Facility

16 // BP 220, Grenoble 38043

17 // FRANCE

18 //

19 // This file is part of Tango.

20 //

21 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

22 // License as published by the Free Software Foundation, either
version 3 of the License, or

23 // (at your option) any later version.

24 //

25 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

26 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

27 // GNU Lesser General Public License for more details.

28 //

29 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

30 // If not, see <http://www.gnu.org/licenses/>.

31 //

32 // $Revision$

33 //

34 //===================================================================================================================

35 

36 #ifndef \_ATTRDESC\_H

37 #define \_ATTRDESC\_H

38 

39 #include <tango.h>

40 

41 namespace `Tango <../../de/ddf/namespaceTango.html>`__

42 {

43 

44 class AttrProperty;

45 class WAttribute;

46 

47 

`64 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__ class
`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__

65 {

66 public:

67 

`74 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a49c378598e36618e83ef92dcd7a5f15b>`__ 
`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a49c378598e36618e83ef92dcd7a5f15b>`__\ ():ext(Tango\_nullptr)
{}

76 

`84 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a570f0146ec61bdbb0a2115d905ea8547>`__ 
void
`set\_label <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a570f0146ec61bdbb0a2115d905ea8547>`__\ (const
char \*def\_label)

85  {

86  label = def\_label;

87  }

88 

`94 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afde6b2d24224c6cd96e7fd25841134bc>`__ 
void
`set\_description <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afde6b2d24224c6cd96e7fd25841134bc>`__\ (const
char \*def\_desc)

95  {

96  description = def\_desc;

97  }

98 

`104 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af8ffda78fc0157d31ac4c7e0c73982d3>`__ 
void
`set\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af8ffda78fc0157d31ac4c7e0c73982d3>`__\ (const
char \*def\_unit)

105  {

106  unit = def\_unit;

107  }

108 

`114 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ac42a9899badbfb874167ebed8c83e940>`__ 
void
`set\_standard\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ac42a9899badbfb874167ebed8c83e940>`__\ (const
char \*def\_std\_unit)

115  {

116  standard\_unit = def\_std\_unit;

117  }

118 

`124 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#acfcfafe14aaf559a6f9dbd4da4a44070>`__ 
void
`set\_display\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#acfcfafe14aaf559a6f9dbd4da4a44070>`__\ (const
char \*def\_disp\_unit)

125  {

126  display\_unit = def\_disp\_unit;

127  }

128 

`134 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a72b9f9b0ca7a05bfa240fe3277ae6a07>`__ 
void
`set\_format <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a72b9f9b0ca7a05bfa240fe3277ae6a07>`__\ (const
char \*def\_format)

135  {

136  format = def\_format;

137  }

138 

`144 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a0e4443532d4290042576edeee79b3778>`__ 
void
`set\_min\_value <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a0e4443532d4290042576edeee79b3778>`__\ (const
char \*def\_min\_value)

145  {

146  min\_value = def\_min\_value;

147  }

148 

`154 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a38b3c0d094df7414b120a6824fd84092>`__ 
void
`set\_max\_value <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a38b3c0d094df7414b120a6824fd84092>`__\ (const
char \*def\_max\_value)

155  {

156  max\_value = def\_max\_value;

157  }

158 

`164 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afede8f7057ccf59f46c7005cc8839db7>`__ 
void
`set\_min\_alarm <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afede8f7057ccf59f46c7005cc8839db7>`__\ (const
char \*def\_min\_alarm)

165  {

166  min\_alarm = def\_min\_alarm;

167  }

168 

`174 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a79734b5413a902711c436e5af1448789>`__ 
void
`set\_max\_alarm <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a79734b5413a902711c436e5af1448789>`__\ (const
char \*def\_max\_alarm)

175  {

176  max\_alarm = def\_max\_alarm;

177  }

178 

`184 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a6c95988f618cc16db4eb6c0db54c6534>`__ 
void
`set\_min\_warning <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a6c95988f618cc16db4eb6c0db54c6534>`__\ (const
char \*def\_min\_warning)

185  {

186  min\_warning = def\_min\_warning;

187  }

188 

`194 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#abf63a7abea9f43c5fcd1235fe9c7935c>`__ 
void
`set\_max\_warning <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#abf63a7abea9f43c5fcd1235fe9c7935c>`__\ (const
char \*def\_max\_warning)

195  {

196  max\_warning = def\_max\_warning;

197  }

198 

`204 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a254ef57c4a216d9bcd9287904017a266>`__ 
void
`set\_delta\_t <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a254ef57c4a216d9bcd9287904017a266>`__\ (const
char \*def\_delta\_t)

205  {

206  delta\_t = def\_delta\_t;

207  }

208 

`214 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ad572a7f7d8cde3526fc430e041596b88>`__ 
void
`set\_delta\_val <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ad572a7f7d8cde3526fc430e041596b88>`__\ (const
char \*def\_delta\_val)

215  {

216  delta\_val = def\_delta\_val;

217  }

218 

`224 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a783f09ff9ef28cbe33c799437bf98e53>`__ 
void
`set\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a783f09ff9ef28cbe33c799437bf98e53>`__\ (const
char \*def\_abs\_change)

225  {

226  abs\_change = def\_abs\_change;

227  }

228 

`234 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a8ed40e206170172ae7d46dc2cb1f9dc4>`__ 
void
`set\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a8ed40e206170172ae7d46dc2cb1f9dc4>`__\ (const
char \*def\_rel\_change)

235  {

236  rel\_change = def\_rel\_change;

237  }

238 

`244 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a9b5db76187d86e112e6999cb34987616>`__ 
void
`set\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a9b5db76187d86e112e6999cb34987616>`__\ (const
char \*def\_period)

245  {

246  period = def\_period;

247  }

248 

`254 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#aa6bcd12e3c581ff4d85b3608ca900199>`__ 
void
`set\_archive\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#aa6bcd12e3c581ff4d85b3608ca900199>`__\ (const
char \*def\_archive\_abs\_change)

255  {

256  archive\_abs\_change = def\_archive\_abs\_change;

257  }

258 

`264 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af66bf9dd5d2d61a6f3f0e2800d0138ff>`__ 
void
`set\_archive\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af66bf9dd5d2d61a6f3f0e2800d0138ff>`__\ (const
char \*def\_archive\_rel\_change)

265  {

266  archive\_rel\_change = def\_archive\_rel\_change;

267  }

268 

`274 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a26e889ad51bfe99d3c2442aeeb43b65c>`__ 
void
`set\_archive\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a26e889ad51bfe99d3c2442aeeb43b65c>`__\ (const
char \*def\_archive\_period)

275  {

276  archive\_period = def\_archive\_period;

277  }

278 

`284 <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a12f0293d7ecf1d5c2451e30f1f333d6a>`__ 
void
`set\_enum\_labels <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a12f0293d7ecf1d5c2451e30f1f333d6a>`__\ (vector<string>
&def\_enum\_labels)

285  {

286  for (size\_t loop = 0;loop < def\_enum\_labels.size();loop++)

287  {

288  enum\_labels = enum\_labels + def\_enum\_labels[loop];

289  if (loop != def\_enum\_labels.size() - 1)

290  enum\_labels = enum\_labels + ',';

291  }

292  }

294 

296 
~\ `UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__\ ()
{}

297 

298  void set\_abs\_change(const char \*def\_abs\_change)

299  {

300 
`set\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a783f09ff9ef28cbe33c799437bf98e53>`__\ (def\_abs\_change);

301  }

302 

303  void set\_rel\_change(const char \*def\_rel\_change)

304  {

305 
`set\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a8ed40e206170172ae7d46dc2cb1f9dc4>`__\ (def\_rel\_change);

306  }

307 

308  void set\_period(const char \*def\_period)

309  {

310 
`set\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a9b5db76187d86e112e6999cb34987616>`__\ (def\_period);

311  }

312 

313  void set\_archive\_abs\_change(const char
\*def\_archive\_abs\_change)

314  {

315 
`set\_archive\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#aa6bcd12e3c581ff4d85b3608ca900199>`__\ (def\_archive\_abs\_change);

316  }

317 

318  void set\_archive\_rel\_change(const char
\*def\_archive\_rel\_change)

319  {

320 
`set\_archive\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af66bf9dd5d2d61a6f3f0e2800d0138ff>`__\ (def\_archive\_rel\_change);

321  }

322 

323  void set\_archive\_period(const char \*def\_archive\_period)

324  {

325 
`set\_archive\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a26e889ad51bfe99d3c2442aeeb43b65c>`__\ (def\_archive\_period);

326  }

327 

328  string label;

329  string description;

330  string unit;

331  string standard\_unit;

332  string display\_unit;

333  string format;

334  string min\_value;

335  string max\_value;

336  string min\_alarm;

337  string max\_alarm;

338  string min\_warning;

339  string max\_warning;

340  string delta\_val;

341  string delta\_t;

342  string abs\_change;

343  string rel\_change;

344  string period;

345  string archive\_abs\_change;

346  string archive\_rel\_change;

347  string archive\_period;

348  string enum\_labels;

349 

350 private:

351  class UserDefaultAttrPropExt

352  {

353  };

354 

355 #ifdef HAS\_UNIQUE\_PTR

356  unique\_ptr<UserDefaultAttrPropExt> ext; // Class extension

357 #else

358  UserDefaultAttrPropExt \*ext;

359 #endif

360 };

361 

`376 <../../d5/dcd/classTango_1_1Attr.html>`__ class
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__

377 {

378 public:

379 

394 
`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__\ (const
char \*name,long data\_type,

395  Tango::AttrWriteType w\_type = Tango::READ,

396  const char \*assoc =
`AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__);

397 

409 
`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__\ (const
char \*name,long data\_type,Tango::DispLevel disp,

410  Tango::AttrWriteType w\_type = Tango::READ,

411  const char \*assoc =
`AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__);

412 

413 
`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__\ (const
char \*name,Tango::DispLevel disp = Tango::OPERATOR);

415 

422  virtual
`~Attr <../../d5/dcd/classTango_1_1Attr.html#af280714a1ec4254e7ad7009eb0e8feda>`__\ ();

424 

432  void
`set\_default\_properties <../../d5/dcd/classTango_1_1Attr.html#acca03caaac31c20e746a276ab033c174>`__\ (`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__
&prop);

`438 <../../d5/dcd/classTango_1_1Attr.html#a8f841afb6effc8384e49730550261378>`__ 
void
`set\_disp\_level <../../d5/dcd/classTango_1_1Attr.html#a8f841afb6effc8384e49730550261378>`__\ (Tango::DispLevel
level) {disp\_level = level;}

`444 <../../d5/dcd/classTango_1_1Attr.html#a5d0e17f5a1ce7263482bb3df5090f91d>`__ 
void
`set\_polling\_period <../../d5/dcd/classTango_1_1Attr.html#a5d0e17f5a1ce7263482bb3df5090f91d>`__\ (long
update) {poll\_period = update;}

451  void
`set\_memorized <../../d5/dcd/classTango_1_1Attr.html#aac89c07e2033c13abf2222fd6cd089dc>`__\ ();

`459 <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__ 
void
`set\_memorized\_init <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__\ (bool
write\_on\_init) {mem\_init = write\_on\_init;}

`470 <../../d5/dcd/classTango_1_1Attr.html#a68801b4629667565b9cceb6fefa413d7>`__ 
void
`set\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a68801b4629667565b9cceb6fefa413d7>`__\ (bool
implemented, bool detect)

471  {

472  fire\_change\_event = implemented;check\_change\_event = detect;

473  }

474 

`480 <../../d5/dcd/classTango_1_1Attr.html#a9269546f4b25a6395efe8b93bdb8d07f>`__ 
bool
`is\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a9269546f4b25a6395efe8b93bdb8d07f>`__\ ()
{return fire\_change\_event;}

`487 <../../d5/dcd/classTango_1_1Attr.html#a3001dc4d14cbdc62a914a15ff3a86e49>`__ 
bool
`is\_check\_change\_criteria <../../d5/dcd/classTango_1_1Attr.html#a3001dc4d14cbdc62a914a15ff3a86e49>`__\ ()
{return check\_change\_event;}

`498 <../../d5/dcd/classTango_1_1Attr.html#a6ba7dd409514e938cb2f530b767aa98c>`__ 
void
`set\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#a6ba7dd409514e938cb2f530b767aa98c>`__\ (bool
implemented, bool detect)

499  {

500  fire\_archive\_event = implemented;check\_archive\_event = detect;

501  }

502 

`508 <../../d5/dcd/classTango_1_1Attr.html#aff00859f5da6a7f48e7abe079491f12c>`__ 
bool
`is\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#aff00859f5da6a7f48e7abe079491f12c>`__\ ()
{return fire\_archive\_event;}

`515 <../../d5/dcd/classTango_1_1Attr.html#a8aa3318fe49d403969a59fe000352be8>`__ 
bool
`is\_check\_archive\_criteria <../../d5/dcd/classTango_1_1Attr.html#a8aa3318fe49d403969a59fe000352be8>`__\ ()
{return check\_archive\_event;}

516 

`522 <../../d5/dcd/classTango_1_1Attr.html#a7e18250ed88d997b603b308212eb7362>`__ 
void
`set\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#a7e18250ed88d997b603b308212eb7362>`__\ (bool
implemented) { fire\_dr\_event = implemented;}

`528 <../../d5/dcd/classTango_1_1Attr.html#aff3b774c27e61c3c2ae97ec81c30fcea>`__ 
bool
`is\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#aff3b774c27e61c3c2ae97ec81c30fcea>`__\ ()
{return fire\_dr\_event;}

530 

532 
`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__\ (const
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &);

533  string &get\_name() {return name;}

534  Tango::AttrDataFormat get\_format() {return format;}

535  Tango::AttrWriteType get\_writable() {return writable;}

536  long get\_type() {return type;}

537  Tango::DispLevel get\_disp\_level() {return disp\_level;}

538  long get\_polling\_period() {return poll\_period;}

539  bool get\_memorized() {return mem;}

540  bool get\_memorized\_init() {return mem\_init;}

541  string &get\_assoc() {return assoc\_name;}

542  const string &get\_cl\_name() {return cl\_name;}

543  void set\_cl\_name(const string &cl) {cl\_name = cl;}

544  bool is\_assoc() {if (assoc\_name !=
`AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__)return
true;else return false;}

545 

546  vector<AttrProperty> &get\_class\_properties() {return
class\_properties;}

547  vector<AttrProperty> &get\_user\_default\_properties() {return
user\_default\_properties;}

548  void set\_class\_properties(vector<AttrProperty> &in\_prop)
{class\_properties=in\_prop;}

549  void check\_type();

550 

551  virtual bool is\_fwd() {return false;}

552 

553  virtual void read(DeviceImpl \*,Attribute &) {};

554  virtual void write(DeviceImpl \*,WAttribute &) {};

555  virtual bool is\_allowed(DeviceImpl
\*,\ `AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__)
{return true;}

556 

557  virtual bool same\_type(const type\_info &) {return false;}

558  virtual string get\_enum\_type() {return string("Unknown");}

559 

560 #ifndef TANGO\_HAS\_LOG4TANGO

561  friend ostream
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (ostream
&,const
`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__
&);

562 #endif

563 

564 protected:

566  string name;

567  Tango::AttrDataFormat format;

568  Tango::AttrWriteType writable;

569  long type;

570  string assoc\_name;

571  bool mem;

572  bool mem\_init;

573 

574 //

575 // Ported from the extension class

576 //

577 

578  Tango::DispLevel disp\_level; // Display level

579  long poll\_period; // Polling period

580 

581  bool fire\_change\_event;

582  bool fire\_archive\_event;

583  bool check\_change\_event;

584  bool check\_archive\_event;

585  bool fire\_dr\_event;

586 

587  vector<AttrProperty> class\_properties;

588  vector<AttrProperty> user\_default\_properties;

589 

590  void convert\_def\_prop(const string &, double &);

591  void validate\_def\_prop(const string &, const char \*);

592  void validate\_def\_change\_prop(const string &, const char \*);

593  void throw\_incoherent\_def\_prop(const char \*, const char \*);

594  void throw\_invalid\_def\_prop(const char \*, const char \*);

595 

596 private:

597  class AttrExt

598  {

599  public:

600  AttrExt() {}

601  };

602 

603 #ifdef HAS\_UNIQUE\_PTR

604  unique\_ptr<AttrExt> ext; // Class extension

605 #else

606  AttrExt \*ext;

607 #endif

608 

609  string cl\_name;

610 };

611 

`626 <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ class
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__: public
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__

627 {

628 public:

629 

643 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__\ (const
char \*name,long data\_type,long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__);

644 

655 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__\ (const
char \*name,long data\_type,Tango::AttrWriteType w\_type,long max\_x);

656 

667 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__\ (const
char \*name,long data\_type,long max\_x,DispLevel level);

668 

679 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__\ (const
char \*name,long data\_type,Tango::AttrWriteType w\_type,long
max\_x,DispLevel level);

680 

`681 <../../dd/de9/classTango_1_1SpectrumAttr.html#a9dcccb8a63b6343b1567098cc47cfb88>`__ 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a9dcccb8a63b6343b1567098cc47cfb88>`__\ (const
char \*\_n):\ `Attr <../../d5/dcd/classTango_1_1Attr.html>`__\ (\_n) {}

683 

`690 <../../dd/de9/classTango_1_1SpectrumAttr.html#a2204d147fb74aac1efeff7ea9ea5c7be>`__ 
`~SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a2204d147fb74aac1efeff7ea9ea5c7be>`__\ ()
{}

692 

694 
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__\ (const
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ &);

695  long get\_max\_x() {return
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__;}

696 

697 protected:

`698 <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__ 
long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__;

699 

700 private:

701  class SpectrumAttrExt

702  {

703  };

704 

705 #ifdef HAS\_UNIQUE\_PTR

706  unique\_ptr<SpectrumAttrExt> ext; // Class extension

707 #else

708  SpectrumAttrExt \*ext;

709 #endif

710 };

711 

712 

`727 <../../dd/dd1/classTango_1_1ImageAttr.html>`__ class
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__: public
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__

728 {

729 public:

730 

745 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__\ (const
char \*name,long data\_type,long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
long max\_y);

746 

759 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__\ (const
char \*name,long data\_type,Tango::AttrWriteType w\_type,long max\_x,
long max\_y);

760 

772 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__\ (const
char \*name,long data\_type,long max\_x,

773  long max\_y, Tango::DispLevel level);

774 

787 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__\ (const
char \*name,long data\_type,Tango::AttrWriteType w\_type,

788  long max\_x, long max\_y, Tango::DispLevel level);

789 

`790 <../../dd/dd1/classTango_1_1ImageAttr.html#a941b6e0f0409f199c6b86a18c40fb8f0>`__ 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a941b6e0f0409f199c6b86a18c40fb8f0>`__\ (const
char
\*name):\ `SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__\ (name)
{}

792 

`799 <../../dd/dd1/classTango_1_1ImageAttr.html#a86703e9efdc8c59dba36821dbbda31f8>`__ 
`~ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a86703e9efdc8c59dba36821dbbda31f8>`__\ ()
{}

801 

803 
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__\ (const
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__ &);

804  long get\_max\_y() {return max\_y;}

805 

806 protected:

808  long max\_y;

809 

810 private:

811  class ImageAttrExt

812  {

813  };

814 

815 #ifdef HAS\_UNIQUE\_PTR

816  unique\_ptr<ImageAttrExt> ext; // Class extension

817 #else

818  ImageAttrExt \*ext;

819 #endif

820 };

821 

822 } // End of Tango namespace

823 

824 #endif /\* \_ATTRDESC\_H \*/

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__

Pipe & operator<<(Pipe &, T &)

`Tango::SpectrumAttr::~SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a2204d147fb74aac1efeff7ea9ea5c7be>`__

~SpectrumAttr()

The object desctructor.

**Definition:** attrdesc.h:690

`Tango::Attr::is\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a9269546f4b25a6395efe8b93bdb8d07f>`__

bool is\_change\_event()

Check if the change event is fired manually for this attribute.

**Definition:** attrdesc.h:480

`Tango::Attr::set\_polling\_period <../../d5/dcd/classTango_1_1Attr.html#a5d0e17f5a1ce7263482bb3df5090f91d>`__

void set\_polling\_period(long update)

Set the attribute polling update period.

**Definition:** attrdesc.h:444

`Tango::Attr::is\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#aff00859f5da6a7f48e7abe079491f12c>`__

bool is\_archive\_event()

Check if the archive event is fired manually for this attribute.

**Definition:** attrdesc.h:508

`Tango::Attr::set\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#a6ba7dd409514e938cb2f530b767aa98c>`__

void set\_archive\_event(bool implemented, bool detect)

Set a flag to indicate that the server fires archive events manually
without the polling to be starte...

**Definition:** attrdesc.h:498

`Tango::Attr::set\_default\_properties <../../d5/dcd/classTango_1_1Attr.html#acca03caaac31c20e746a276ab033c174>`__

void set\_default\_properties(UserDefaultAttrProp &prop)

Set default attribute properties.

`Tango::Attr::set\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a68801b4629667565b9cceb6fefa413d7>`__

void set\_change\_event(bool implemented, bool detect)

Set a flag to indicate that the server fires change events manually
without the polling to be started...

**Definition:** attrdesc.h:470

`Tango::Attr::set\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#a7e18250ed88d997b603b308212eb7362>`__

void set\_data\_ready\_event(bool implemented)

Set a flag to indicate that the server fires data ready events.

**Definition:** attrdesc.h:522

`Tango::UserDefaultAttrProp::set\_format <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a72b9f9b0ca7a05bfa240fe3277ae6a07>`__

void set\_format(const char \*def\_format)

Set default format property.

**Definition:** attrdesc.h:134

`Tango::UserDefaultAttrProp::set\_standard\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ac42a9899badbfb874167ebed8c83e940>`__

void set\_standard\_unit(const char \*def\_std\_unit)

Set default standard unit property.

**Definition:** attrdesc.h:114

`Tango::ImageAttr::ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__

ImageAttr(const char \*name, long data\_type, long max\_x, long max\_y)

Constructs a newly allocated ImageAttr object.

`Tango::UserDefaultAttrProp::set\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a9b5db76187d86e112e6999cb34987616>`__

void set\_event\_period(const char \*def\_period)

Set default periodic event period property.

**Definition:** attrdesc.h:244

`Tango::ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__

User class to create a two dimensions attribute object.

**Definition:** attrdesc.h:727

`Tango::Attr::set\_memorized\_init <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__

void set\_memorized\_init(bool write\_on\_init)

Set the initialisation flag for memorized attributes true = the setpoint
value will be written to the...

**Definition:** attrdesc.h:459

`Tango::UserDefaultAttrProp::set\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a783f09ff9ef28cbe33c799437bf98e53>`__

void set\_event\_abs\_change(const char \*def\_abs\_change)

Set default change event abs\_change property.

**Definition:** attrdesc.h:224

`Tango::UserDefaultAttrProp::set\_delta\_t <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a254ef57c4a216d9bcd9287904017a266>`__

void set\_delta\_t(const char \*def\_delta\_t)

Set default RDS alarm delta\_t property.

**Definition:** attrdesc.h:204

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::UserDefaultAttrProp::set\_archive\_event\_period <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a26e889ad51bfe99d3c2442aeeb43b65c>`__

void set\_archive\_event\_period(const char \*def\_archive\_period)

Set default archive event period property.

**Definition:** attrdesc.h:274

`Tango::UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__

User class to set attribute default properties.

**Definition:** attrdesc.h:64

`Tango::Attr::set\_memorized <../../d5/dcd/classTango_1_1Attr.html#aac89c07e2033c13abf2222fd6cd089dc>`__

void set\_memorized()

Set the attribute as memorized in database (only for scalar and writable
attribute) By default the se...

`Tango::Attr::Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__

Attr(const char \*name, long data\_type, Tango::AttrWriteType
w\_type=Tango::READ, const char \*assoc=AssocWritNotSpec)

Constructs a newly allocated Attr object.

`Tango::UserDefaultAttrProp::set\_max\_value <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a38b3c0d094df7414b120a6824fd84092>`__

void set\_max\_value(const char \*def\_max\_value)

Set default max\_value property.

**Definition:** attrdesc.h:154

`Tango::SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__

User class to create a one dimension attribute object.

**Definition:** attrdesc.h:626

`Tango::Attr::is\_check\_change\_criteria <../../d5/dcd/classTango_1_1Attr.html#a3001dc4d14cbdc62a914a15ff3a86e49>`__

bool is\_check\_change\_criteria()

Check if the change event criteria should be checked when firing the
event manually.

**Definition:** attrdesc.h:487

`Tango::Attr::set\_disp\_level <../../d5/dcd/classTango_1_1Attr.html#a8f841afb6effc8384e49730550261378>`__

void set\_disp\_level(Tango::DispLevel level)

Set the attribute display level.

**Definition:** attrdesc.h:438

`Tango::AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__

const char \*const AssocWritNotSpec

**Definition:** tango\_const.h:299

`Tango::UserDefaultAttrProp::set\_max\_warning <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#abf63a7abea9f43c5fcd1235fe9c7935c>`__

void set\_max\_warning(const char \*def\_max\_warning)

Set default max\_warning property.

**Definition:** attrdesc.h:194

`Tango::UserDefaultAttrProp::set\_min\_value <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a0e4443532d4290042576edeee79b3778>`__

void set\_min\_value(const char \*def\_min\_value)

Set default min\_value property.

**Definition:** attrdesc.h:144

`Tango::Attr::is\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#aff3b774c27e61c3c2ae97ec81c30fcea>`__

bool is\_data\_ready\_event()

Check if the data ready event is fired for this attribute.

**Definition:** attrdesc.h:528

`Tango::UserDefaultAttrProp::set\_enum\_labels <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a12f0293d7ecf1d5c2451e30f1f333d6a>`__

void set\_enum\_labels(vector< string > &def\_enum\_labels)

Set default enumeration labels.

**Definition:** attrdesc.h:284

`Tango::UserDefaultAttrProp::set\_min\_warning <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a6c95988f618cc16db4eb6c0db54c6534>`__

void set\_min\_warning(const char \*def\_min\_warning)

Set default min\_warning property.

**Definition:** attrdesc.h:184

`Tango::UserDefaultAttrProp::set\_archive\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af66bf9dd5d2d61a6f3f0e2800d0138ff>`__

void set\_archive\_event\_rel\_change(const char
\*def\_archive\_rel\_change)

Set default archive event rel\_change property.

**Definition:** attrdesc.h:264

`Tango::UserDefaultAttrProp::set\_description <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afde6b2d24224c6cd96e7fd25841134bc>`__

void set\_description(const char \*def\_desc)

Set default description property.

**Definition:** attrdesc.h:94

`Tango::SpectrumAttr::SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__

SpectrumAttr(const char \*name, long data\_type, long max\_x)

Constructs a newly allocated SpectrumAttr object.

`Tango::UserDefaultAttrProp::set\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#af8ffda78fc0157d31ac4c7e0c73982d3>`__

void set\_unit(const char \*def\_unit)

Set default unit property.

**Definition:** attrdesc.h:104

`Tango::UserDefaultAttrProp::set\_label <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a570f0146ec61bdbb0a2115d905ea8547>`__

void set\_label(const char \*def\_label)

Set default label property.

**Definition:** attrdesc.h:84

`Tango::UserDefaultAttrProp::set\_delta\_val <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#ad572a7f7d8cde3526fc430e041596b88>`__

void set\_delta\_val(const char \*def\_delta\_val)

Set default RDS alarm delta\_val property.

**Definition:** attrdesc.h:214

`Tango::Attr <../../d5/dcd/classTango_1_1Attr.html>`__

User class to create a no dimension attribute object.

**Definition:** attrdesc.h:376

`Tango::SpectrumAttr::max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__

long max\_x

**Definition:** attrdesc.h:698

`Tango::AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__

AttReqType

**Definition:** tango\_const.h:971

`Tango::UserDefaultAttrProp::UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a49c378598e36618e83ef92dcd7a5f15b>`__

UserDefaultAttrProp()

Constructs a newly allocated UserDefaultAttrProp object.

**Definition:** attrdesc.h:74

`Tango::ImageAttr::~ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a86703e9efdc8c59dba36821dbbda31f8>`__

~ImageAttr()

The object desctructor.

**Definition:** attrdesc.h:799

`Tango::UserDefaultAttrProp::set\_min\_alarm <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#afede8f7057ccf59f46c7005cc8839db7>`__

void set\_min\_alarm(const char \*def\_min\_alarm)

Set default min\_alarm property.

**Definition:** attrdesc.h:164

`Tango::ImageAttr::ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a941b6e0f0409f199c6b86a18c40fb8f0>`__

ImageAttr(const char \*name)

**Definition:** attrdesc.h:790

`Tango::Attr::is\_check\_archive\_criteria <../../d5/dcd/classTango_1_1Attr.html#a8aa3318fe49d403969a59fe000352be8>`__

bool is\_check\_archive\_criteria()

Check if the archive event criteria should be checked when firing the
event manually.

**Definition:** attrdesc.h:515

`Tango::Attr::~Attr <../../d5/dcd/classTango_1_1Attr.html#af280714a1ec4254e7ad7009eb0e8feda>`__

virtual ~Attr()

The object desctructor.

`Tango::SpectrumAttr::SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a9dcccb8a63b6343b1567098cc47cfb88>`__

SpectrumAttr(const char \*\_n)

**Definition:** attrdesc.h:681

`Tango::UserDefaultAttrProp::set\_event\_rel\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a8ed40e206170172ae7d46dc2cb1f9dc4>`__

void set\_event\_rel\_change(const char \*def\_rel\_change)

Set default change event rel\_change property.

**Definition:** attrdesc.h:234

`Tango::UserDefaultAttrProp::set\_archive\_event\_abs\_change <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#aa6bcd12e3c581ff4d85b3608ca900199>`__

void set\_archive\_event\_abs\_change(const char
\*def\_archive\_abs\_change)

Set default archive event abs\_change property.

**Definition:** attrdesc.h:254

`Tango::UserDefaultAttrProp::set\_max\_alarm <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#a79734b5413a902711c436e5af1448789>`__

void set\_max\_alarm(const char \*def\_max\_alarm)

Set default max\_alarm property.

**Definition:** attrdesc.h:174

`Tango::UserDefaultAttrProp::set\_display\_unit <../../de/d9a/classTango_1_1UserDefaultAttrProp.html#acfcfafe14aaf559a6f9dbd4da4a44070>`__

void set\_display\_unit(const char \*def\_disp\_unit)

Set default display unit property.

**Definition:** attrdesc.h:124

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `attrdesc.h <../../d4/d18/attrdesc_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
