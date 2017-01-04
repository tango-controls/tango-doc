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

pipe.h

`Go to the documentation of this file. <../../da/d3e/pipe_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : Pipe.h

4 //

5 // description : Include file for the Pipe class.

6 //

7 // project : TANGO

8 //

9 // author(s) : E.Taurel

10 //

11 // Copyright (C) : 2014,2015

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

31 //===================================================================================================================

32 

33 #ifndef \_PIPE\_H

34 #define \_PIPE\_H

35 

36 #include <tango.h>

37 

38 #include <stdarg.h>

39 

40 namespace `Tango <../../de/ddf/namespaceTango.html>`__

41 {

42 

43 #ifndef HAS\_LAMBDA\_FUNC

44 //

45 // Binary function objects to be used by the find\_if algorithm.

46 // The find\_if algo. want to have a predicate, this means that the
return value must be a boolean (R is its name).

47 // The find\_if algo. needs a unary predicate. This function object
is a binary function object.

48 // It must be used with the bind2nd function adapter

49 //

50 

51 template <typename A1,typename A2,typename R>

`52 <../../dd/d06/structTango_1_1WantedPipe.html>`__ struct
`WantedPipe <../../dd/d06/structTango_1_1WantedPipe.html>`__ : public
binary\_function<A1,A2,R>

53 {

`54 <../../dd/d06/structTango_1_1WantedPipe.html#a7ba811ef470b2d0349ad209cf30ea93a>`__ 
R
`operator() <../../dd/d06/structTango_1_1WantedPipe.html#a7ba811ef470b2d0349ad209cf30ea93a>`__\ (A1
pipe\_ptr, A2 name) const

55  {

56  if (::strlen(name) != pipe\_ptr->get\_lower\_name().size())

57  return false;

58  string tmp\_name(name);

59 
transform(tmp\_name.begin(),tmp\_name.end(),tmp\_name.begin(),::tolower);

60  return pipe\_ptr->get\_lower\_name() == tmp\_name;

61  }

62 };

63 #endif

64 

65 

`77 <../../d8/d14/classTango_1_1Pipe.html>`__ class
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

78 {

79 public:

80 

`89 <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__ 
`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__\ ():ext(new
PipeExt) {}

90 

100 
`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__\ (const
string
&\ `name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__,const
Tango::DispLevel level,const PipeWriteType pwt=PIPE\_READ);

102 

109 #ifdef HAS\_UNIQUE\_PTR

110  virtual
`~Pipe <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__\ ()
{}

111 #else

`112 <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__ 
virtual
`~Pipe <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__\ ()
{delete ext;}

113 #endif

114 

115 

118 

120 

`131 <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__ 
string
&\ `get\_name <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__\ ()
{return
`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__;}

132 

`138 <../../d8/d14/classTango_1_1Pipe.html#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__ 
void
`set\_name <../../d8/d14/classTango_1_1Pipe.html#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__\ (string
&new\_name)
{`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__\ =new\_name;}

139 

145  void
`set\_default\_properties <../../d8/d14/classTango_1_1Pipe.html#acf20d48edb9f74cf8268cc6cd5e0e4fa>`__\ (`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__
&prop);

146 

`152 <../../d8/d14/classTango_1_1Pipe.html#af3201b786412b40011bbc4343e995ebe>`__ 
string
&\ `get\_lower\_name <../../d8/d14/classTango_1_1Pipe.html#af3201b786412b40011bbc4343e995ebe>`__\ ()
{return
`lower\_name <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__;}

153 

`159 <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__ 
const string
&\ `get\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__\ ();}

160 

`166 <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__ 
void
`set\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__\ (const
string
&\ `name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `set\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__\ (name);}

167 

`173 <../../d8/d14/classTango_1_1Pipe.html#a21c57287d00cae3a66f6cb9626f6324d>`__ 
string
&\ `get\_desc <../../d8/d14/classTango_1_1Pipe.html#a21c57287d00cae3a66f6cb9626f6324d>`__\ ()
{return
`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__;}

174 

`180 <../../d8/d14/classTango_1_1Pipe.html#ae66635efe0978d51fd62e73b34b24e5c>`__ 
string
&\ `get\_label <../../d8/d14/classTango_1_1Pipe.html#ae66635efe0978d51fd62e73b34b24e5c>`__\ ()
{return
`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__;}

181 

`187 <../../d8/d14/classTango_1_1Pipe.html#a6b6e9b53474dc7121ff7fb38942c1250>`__ 
Tango::DispLevel
`get\_disp\_level <../../d8/d14/classTango_1_1Pipe.html#a6b6e9b53474dc7121ff7fb38942c1250>`__\ ()
{return
`disp\_level <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__;}

188 

`194 <../../d8/d14/classTango_1_1Pipe.html#ad4981873f1e6f3d5e294f66d3b01b848>`__ 
Tango::PipeWriteType
`get\_writable <../../d8/d14/classTango_1_1Pipe.html#ad4981873f1e6f3d5e294f66d3b01b848>`__\ ()
{return
`writable <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__;}

195 

204  void
`set\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a77c6b9c413099b205da176541100659d>`__\ (`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__
ser\_model);

`212 <../../d8/d14/classTango_1_1Pipe.html#a131457c57f76313b0784d02228e423dd>`__ 
`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__
`get\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a131457c57f76313b0784d02228e423dd>`__\ ()
{return pipe\_serial\_model;}

`223 <../../d8/d14/classTango_1_1Pipe.html#acbe28a16686f044af10708792fddf245>`__ 
void
`set\_user\_pipe\_mutex <../../d8/d14/classTango_1_1Pipe.html#acbe28a16686f044af10708792fddf245>`__\ (omni\_mutex
\*mut\_ptr) {user\_pipe\_mutex = mut\_ptr;}

225 

229 #ifdef GEN\_DOC

230 

240  `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ & `operator
<< <../../d8/d14/classTango_1_1Pipe.html#ac67072c3bf8d26e547ea92aac9b7e260>`__\ (short
&datum);

241 #endif

242 

`249 <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__ 
void
`set\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__\ (size\_t
nb)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `set\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#aaca17726578d592076c6bad76a98e59c>`__\ (nb);}

`258 <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__ 
void
`set\_data\_elt\_names <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__\ (vector<string>
&names)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `set\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6c90f89d110cd3f7e7368346f4ae9e7>`__\ (names);}

`266 <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__ 
size\_t
`get\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__\ ();}

268 

269 

`295 <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__ 
void
`exceptions <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__\ (bitset<DevicePipeBlob::numFlags>
fl)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__\ (fl);}

`315 <../../d8/d14/classTango_1_1Pipe.html#a4fb5132f87eba2ccd54a392b0612a1fa>`__ 
bitset<DevicePipeBlob::numFlags>
`exceptions <../../d8/d14/classTango_1_1Pipe.html#a4fb5132f87eba2ccd54a392b0612a1fa>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__\ ();}

`323 <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__ 
void
`reset\_exceptions <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__\ (DevicePipeBlob::except\_flags
fl)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `reset\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ab54466d1b593e8e464957f19ef685ae2>`__\ (fl);}

`331 <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__ 
void
`set\_exceptions <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__\ (DevicePipeBlob::except\_flags
fl)
{`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `set\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6d904cd958cb22382ceefef4a4c8593>`__\ (fl);}

`340 <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__ 
bool
`has\_failed <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `has\_failed <../../df/dd9/classTango_1_1DevicePipeBlob.html#aefce9c5e97eb7a80197d1590a13c4f50>`__\ ();}

`367 <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__ 
bitset<DevicePipeBlob::numFlags>
`state <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `state <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__\ ();}

369 

374 

376 

378  virtual bool is\_allowed
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,\ `PipeReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__)
{(void)dev;return true;}

379  virtual void read(DeviceImpl \*) {}

380 

381 
`Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__
&operator[](const string &);

382 

383  bool get\_value\_flag() {return value\_flag;}

384  void set\_value\_flag(bool val) {value\_flag = val;}

385  void set\_time();

386  Tango::TimeVal &get\_when() {return when;}

387  void set\_returned\_data\_ptr(DevPipeData \*\_p) {ret\_data=\_p;}

388  void set\_label(const string &\_lab)
{`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__\ =\_lab;}

389  void set\_desc(const string &\_desc)
{`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__\ =\_desc;}

390  bool is\_label\_lib\_default() {return
`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__\ ==\ `name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__;}

391  bool is\_desc\_lib\_default() {return
`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__\ ==\ `DescNotSpec <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__;}

392  void set\_upd\_properties(const PipeConfig &,DeviceImpl \*);

393  void set\_properties(const Tango::PipeConfig &,DeviceImpl
\*,vector<Attribute::AttPropDb> &);

394  void upd\_database(vector<Attribute::AttPropDb> &,string &);

395  vector<PipeProperty> &get\_user\_default\_properties() {return
user\_def\_prop;}

396  void set\_one\_str\_prop(const char \*,const CORBA::String\_member
&,string &,vector<Attribute::AttPropDb> &,vector<PipeProperty>
&,vector<PipeProperty> &,const char \*);

397  bool prop\_in\_list(const char \*,string
&,size\_t,vector<PipeProperty> &);

398 

399  DevicePipeBlob &get\_blob() {return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__;}

400 

401  omni\_mutex \*get\_pipe\_mutex() {return &pipe\_mutex;}

402  omni\_mutex \*get\_user\_pipe\_mutex() {return user\_pipe\_mutex;}

403 

404  void fire\_event(DeviceImpl \*,DevFailed \*);

405 #ifdef \_TG\_WINDOWS\_

406  void fire\_event(DeviceImpl \*,DevicePipeBlob \*,bool);

407 #else

408  void fire\_event(DeviceImpl \*\_dev,DevicePipeBlob \*\_dat,bool bo)
{struct timeval
now;gettimeofday(&now,NULL);fire\_event(\_dev,\_dat,now,bo);}

409 #endif

410  void fire\_event(DeviceImpl \*,DevicePipeBlob \*,struct timeval
&,bool);

411 

412  void set\_event\_subscription(time\_t \_t) {event\_subscription =
\_t;}

413 

`414 <../../d8/d14/classTango_1_1Pipe.html#a113a5beda9b94ad235073dd9cfd3504a>`__ 
friend class
`EventSupplier <../../d8/d14/classTango_1_1Pipe.html#a113a5beda9b94ad235073dd9cfd3504a>`__;

`415 <../../d8/d14/classTango_1_1Pipe.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__ 
friend class
`ZmqEventSupplier <../../d8/d14/classTango_1_1Pipe.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__;

416 

417 protected:

`423 <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__ 
string
`name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__;

`427 <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__ 
string
`lower\_name <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__;

`431 <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__ 
string
`desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__;

`435 <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__ 
string
`label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__;

`439 <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__ 
Tango::DispLevel
`disp\_level <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__;

`443 <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__ 
Tango::PipeWriteType
`writable <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__;

445 

`446 <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__ 
`DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__;

447 

448 private:

449  class PipeExt

450  {

451  public:

452  PipeExt() {}

453  };

454 

455 #ifdef HAS\_UNIQUE\_PTR

456  unique\_ptr<PipeExt> ext; // Class extension

457 #else

458  PipeExt \*ext;

459 #endif

460 

461  bool value\_flag; // Flag set when pipe value is set

462  Tango::TimeVal when; // Date associated to the pipe

463  Tango::DevPipeData \*ret\_data; // Pointer for read data

464 

465  vector<string> pe\_out\_names; // Data elements name

466  int rec\_count; // Data elements ctr

467 

468 
`PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__
pipe\_serial\_model; // Flag for attribute serialization model

469 

470  omni\_mutex pipe\_mutex; // Mutex to protect the pipe shared data
buffer

471  omni\_mutex \*user\_pipe\_mutex; // Ptr for user mutex in case he
manages exclusion

472 

473  time\_t event\_subscription; // Last time() a subscription was made

474  vector<PipeProperty> user\_def\_prop; // User default properties

475 };

476 

477 template <typename T>

478 Pipe
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (Pipe
&,T &);

479 

480 template <typename T>

481 Pipe
&\ `operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__\ (Pipe
&,T \*);

482 

483 template <typename T>

484 Pipe &operator<<(Pipe &, DataElement<T> &);

485 

486 

487 //

488 // Throw exception if pointer is null

489 //

490 

`491 <../../da/d3e/pipe_8h.html#a137d9d2c4e4a865274b4fbbb0327cb4b>`__ #define
PIPE\_CHECK\_PTR(A,B,C) \\

492  if (A == NULL) \\

493  { \\

494  stringstream o; \\

495  o << "Data pointer for pipe " << B << ", data element " << C << "
is NULL!"; \\

496 
Except::throw\_exception(API\_PipeOptProp,o.str(),"Pipe::set\_value()");
\\

497  } \\

498  else \\

499  (void)0

500 

501 

502 //

503 // Some inline methods

504 //

505 

506 //+------------------------------------------------------------------------------------------------------------------

507 //

508 // method :

509 // Pipe::prop\_in\_list

510 //

511 // description :

512 // Search for a property in a list

513 // A similar method exists in Attribute class!!

514 //

515 // args:

516 // in :

517 // - prop\_name : The property name

518 // - list\_size : The size list

519 // - list : The list

520 // out :

521 // - prop\_str : String initialized with prop. value (if found)

522 //

523 //------------------------------------------------------------------------------------------------------------------

524 

525 inline bool Pipe::prop\_in\_list(const char \*prop\_name,string
&prop\_str,size\_t list\_size,vector<PipeProperty> &list)

526 {

527  bool ret = false;

528 

529  if (list\_size != 0)

530  {

531  size\_t i;

532  for (i = 0;i < list\_size;i++)

533  {

534  if
(list[i].\ `get\_name <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__\ ()
== prop\_name)

535  break;

536  }

537  if (i != list\_size)

538  {

539  prop\_str = list[i].get\_value();

540  ret = true;

541  }

542  }

543 

544  return ret;

545 }

546 

547 } // End of Tango namespace

548 

549 #endif // \_PIPE\_H

`Tango::Pipe::get\_desc <../../d8/d14/classTango_1_1Pipe.html#a21c57287d00cae3a66f6cb9626f6324d>`__

string & get\_desc()

Return the pipe description.

**Definition:** pipe.h:173

`Tango::operator<< <../../de/ddf/namespaceTango.html#aa688eba2e41c677db31e4805ae230cef>`__

Pipe & operator<<(Pipe &, T &)

`Tango::WantedPipe::operator() <../../dd/d06/structTango_1_1WantedPipe.html#a7ba811ef470b2d0349ad209cf30ea93a>`__

R operator()(A1 pipe\_ptr, A2 name) const

**Definition:** pipe.h:54

`Tango::Pipe::get\_writable <../../d8/d14/classTango_1_1Pipe.html#ad4981873f1e6f3d5e294f66d3b01b848>`__

Tango::PipeWriteType get\_writable()

Get the pipe writable type (RO/RW).

**Definition:** pipe.h:194

`Tango::Pipe::get\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a131457c57f76313b0784d02228e423dd>`__

PipeSerialModel get\_pipe\_serial\_model()

Get pipe serialization model.

**Definition:** pipe.h:212

`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__

DevicePipeBlob the\_blob

**Definition:** pipe.h:446

`Tango::DevicePipeBlob::set\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#aa16f3e082d2d6f7ee4f12135a9f63cb7>`__

void set\_name(const string &blob\_name)

Set blob name.

**Definition:** devapi.h:156

`Tango::Pipe::set\_user\_pipe\_mutex <../../d8/d14/classTango_1_1Pipe.html#acbe28a16686f044af10708792fddf245>`__

void set\_user\_pipe\_mutex(omni\_mutex \*mut\_ptr)

Set pipe user mutex.

**Definition:** pipe.h:223

`Tango::DevicePipeBlob::set\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#aaca17726578d592076c6bad76a98e59c>`__

void set\_data\_elt\_nb(size\_t nb)

Set blob data element number.

`Tango::Pipe::get\_label <../../d8/d14/classTango_1_1Pipe.html#ae66635efe0978d51fd62e73b34b24e5c>`__

string & get\_label()

Return the pipe label.

**Definition:** pipe.h:180

`Tango::Pipe::get\_lower\_name <../../d8/d14/classTango_1_1Pipe.html#af3201b786412b40011bbc4343e995ebe>`__

string & get\_lower\_name()

Return the pipe name in lower case letters.

**Definition:** pipe.h:152

`Tango::Pipe::get\_name <../../d8/d14/classTango_1_1Pipe.html#a00bb2112e4e81c63ff5e55ffa046c9d7>`__

string & get\_name()

Return the pipe name.

**Definition:** pipe.h:131

`Tango::DevicePipeBlob::has\_failed <../../df/dd9/classTango_1_1DevicePipeBlob.html#aefce9c5e97eb7a80197d1590a13c4f50>`__

bool has\_failed()

Check insertion/extraction success.

`Tango::Pipe::ZmqEventSupplier <../../d8/d14/classTango_1_1Pipe.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__

friend class ZmqEventSupplier

**Definition:** pipe.h:415

`Tango::Pipe::get\_disp\_level <../../d8/d14/classTango_1_1Pipe.html#a6b6e9b53474dc7121ff7fb38942c1250>`__

Tango::DispLevel get\_disp\_level()

Return the pipe display level.

**Definition:** pipe.h:187

`Tango::UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__

User class to set pipe default properties.

**Definition:** pipedesc.h:58

`Tango::Pipe::name <../../d8/d14/classTango_1_1Pipe.html#af3cae1c6cb5f44b9a51e45b61d67cfdb>`__

string name

The pipe name.

**Definition:** pipe.h:423

`Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__

A device pipe blob.

**Definition:** devapi.h:112

`Tango::Pipe::set\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#afc0f382d5d6c6d03abb2e25ceb4456e6>`__

void set\_root\_blob\_name(const string &name)

Set the root data blob name.

**Definition:** pipe.h:166

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::Pipe::disp\_level <../../d8/d14/classTango_1_1Pipe.html#a58da366eded254dd357432105a5fd645>`__

Tango::DispLevel disp\_level

The pipe display level.

**Definition:** pipe.h:439

`Tango::DevicePipeBlob::exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ac1573563218260fa5211c66c367d85df>`__

void exceptions(bitset< numFlags > fl)

Set exception flag.

**Definition:** devapi.h:543

`Tango::Pipe::reset\_exceptions <../../d8/d14/classTango_1_1Pipe.html#ad0961a4c770ff42b0b672907268b6c14>`__

void reset\_exceptions(DevicePipeBlob::except\_flags fl)

Reset one exception flag.

**Definition:** pipe.h:323

`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

This class is a class representing a pipe in the TANGO device server
pattern.

**Definition:** pipe.h:77

`Tango::DevicePipeBlob::get\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__

const string & get\_name()

Get blob name.

**Definition:** devapi.h:164

`Tango::Pipe::set\_name <../../d8/d14/classTango_1_1Pipe.html#ac70b0bcbaf0f31a91fd27f21fe05fef6>`__

void set\_name(string &new\_name)

Set the pipe name.

**Definition:** pipe.h:138

`Tango::Pipe::label <../../d8/d14/classTango_1_1Pipe.html#a139a571b46d6f4911fae84269d0beff6>`__

string label

The pipe label.

**Definition:** pipe.h:435

`Tango::WantedPipe <../../dd/d06/structTango_1_1WantedPipe.html>`__

**Definition:** pipe.h:52

`Tango::Pipe::desc <../../d8/d14/classTango_1_1Pipe.html#a317ab27c21563fc4d279007991c8080b>`__

string desc

The pipe description.

**Definition:** pipe.h:431

`Tango::Pipe::get\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a85b5e99f841bc2a6f6fe2c7dce9f2928>`__

size\_t get\_data\_elt\_nb()

Get blob data element number.

**Definition:** pipe.h:266

`Tango::Pipe::exceptions <../../d8/d14/classTango_1_1Pipe.html#a4fb5132f87eba2ccd54a392b0612a1fa>`__

bitset< DevicePipeBlob::numFlags > exceptions()

Get exception flag.

**Definition:** pipe.h:315

`Tango::Pipe::~Pipe <../../d8/d14/classTango_1_1Pipe.html#a4b23ac2255767c1effe26d4a3bd26cab>`__

virtual ~Pipe()

The object desctructor.

**Definition:** pipe.h:112

`Tango::Pipe::EventSupplier <../../d8/d14/classTango_1_1Pipe.html#a113a5beda9b94ad235073dd9cfd3504a>`__

friend class EventSupplier

**Definition:** pipe.h:414

`Tango::Pipe::has\_failed <../../d8/d14/classTango_1_1Pipe.html#a5de39890365fd35d887d66ef8fe5bae7>`__

bool has\_failed()

Check insertion/extraction success.

**Definition:** pipe.h:340

`Tango::DescNotSpec <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__

const char \*const DescNotSpec

**Definition:** tango\_const.h:301

`Tango::DevicePipeBlob::get\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__

size\_t get\_data\_elt\_nb()

Get blob data element number.

`Tango::Pipe::writable <../../d8/d14/classTango_1_1Pipe.html#afaec591f0261e13cb7df7277c9f09ece>`__

Tango::PipeWriteType writable

The pipe R/W type.

**Definition:** pipe.h:443

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Pipe::set\_data\_elt\_names <../../d8/d14/classTango_1_1Pipe.html#a90537af700f9c8f7bbbe4540e0b9542b>`__

void set\_data\_elt\_names(vector< string > &names)

Set blob data element number and names.

**Definition:** pipe.h:258

`Tango::Pipe::Pipe <../../d8/d14/classTango_1_1Pipe.html#a48f8fa0e8e169fd8f278407b771dc27d>`__

Pipe()

Constructs a newly allocated Pipe object.

**Definition:** pipe.h:89

`Tango::Pipe::set\_default\_properties <../../d8/d14/classTango_1_1Pipe.html#acf20d48edb9f74cf8268cc6cd5e0e4fa>`__

void set\_default\_properties(UserDefaultPipeProp &prop)

Set default attribute properties.

`Tango::Pipe::lower\_name <../../d8/d14/classTango_1_1Pipe.html#af7c22f717b75210fcb5328a38be95e7c>`__

string lower\_name

The pipe name in lower case.

**Definition:** pipe.h:427

`Tango::AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__

AttReqType

**Definition:** tango\_const.h:971

`Tango::PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__

PipeSerialModel

**Definition:** tango\_const.h:1124

`Tango::Pipe::state <../../d8/d14/classTango_1_1Pipe.html#a124f05b1125ea60be231ded98f27d303>`__

bitset< DevicePipeBlob::numFlags > state()

Get instance insertion/extraction state.

**Definition:** pipe.h:367

`Tango::Pipe::operator<< <../../d8/d14/classTango_1_1Pipe.html#ac67072c3bf8d26e547ea92aac9b7e260>`__

Pipe & operator<<(short &datum)

Insert data into a device pipe.

`Tango::DevicePipeBlob::set\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6c90f89d110cd3f7e7368346f4ae9e7>`__

void set\_data\_elt\_names(vector< string > &names)

Set blob data element number and names.

`Tango::Pipe::set\_exceptions <../../d8/d14/classTango_1_1Pipe.html#a6362521002ff86cf970661a7699b5c54>`__

void set\_exceptions(DevicePipeBlob::except\_flags fl)

Set one exception flag.

**Definition:** pipe.h:331

`Tango::Pipe::set\_data\_elt\_nb <../../d8/d14/classTango_1_1Pipe.html#a9e73adb9661dd91811af627d701d8832>`__

void set\_data\_elt\_nb(size\_t nb)

Set blob data element number.

**Definition:** pipe.h:249

`Tango::DevicePipeBlob::set\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ae6d904cd958cb22382ceefef4a4c8593>`__

void set\_exceptions(except\_flags fl)

Set one exception flag.

**Definition:** devapi.h:579

`Tango::Pipe::get\_root\_blob\_name <../../d8/d14/classTango_1_1Pipe.html#a03818186cd3b89c123db978ec735174b>`__

const string & get\_root\_blob\_name()

Return the root data blob name.

**Definition:** pipe.h:159

`Tango::Pipe::exceptions <../../d8/d14/classTango_1_1Pipe.html#abd430c1ee08d7d19ebbf469974c62dc4>`__

void exceptions(bitset< DevicePipeBlob::numFlags > fl)

Set exception flag.

**Definition:** pipe.h:295

`Tango::Pipe::set\_pipe\_serial\_model <../../d8/d14/classTango_1_1Pipe.html#a77c6b9c413099b205da176541100659d>`__

void set\_pipe\_serial\_model(PipeSerialModel ser\_model)

Set pipe serialization model.

`Tango::DevicePipeBlob::state <../../df/dd9/classTango_1_1DevicePipeBlob.html#ad0ef655afc8a1d0a59a44091892b017f>`__

bitset< numFlags > state()

Get instance insertion/extraction state.

**Definition:** devapi.h:615

`Tango::DevicePipeBlob::reset\_exceptions <../../df/dd9/classTango_1_1DevicePipeBlob.html#ab54466d1b593e8e464957f19ef685ae2>`__

void reset\_exceptions(except\_flags fl)

Reset one exception flag.

**Definition:** devapi.h:571

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `pipe.h <../../da/d3e/pipe_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
