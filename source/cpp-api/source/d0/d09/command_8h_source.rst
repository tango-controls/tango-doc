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

command.h

`Go to the documentation of this file. <../../d0/d09/command_8h.html>`__

1 //=============================================================================

2 //

3 // file : Command.h

4 //

5 // description : Include for the Device root classes.

6 // One class is declared in this file :

7 // The Command class

8 //

9 // project : TANGO

10 //

11 // author(s) : A.Gotz + E.Taurel

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

35 //=============================================================================

36 

37 #ifndef \_COMMAND\_H

38 #define \_COMMAND\_H

39 

40 #include <tango.h>

41 

42 namespace `Tango <../../de/ddf/namespaceTango.html>`__

43 {

44 

45 #ifndef HAS\_LAMBDA\_FUNC

46 //

47 // Binary function objects to be used by the find\_if algorithm.

48 // The find\_if algo. want to have a predicate, this means that the
return value

49 // must be a boolean (R is its name).

50 // The find\_if algo. needs a unary predicate. This function object
is a binary

51 // function object. It must be used with the bind2nd function adapter

52 //

53 

54 template <typename A1,typename A2,typename R>

`55 <../../db/d34/structTango_1_1WantedCmd.html>`__ struct
`WantedCmd <../../db/d34/structTango_1_1WantedCmd.html>`__ : public
binary\_function<A1,A2,R>

56 {

`57 <../../db/d34/structTango_1_1WantedCmd.html#a813791b48fbf1a2836510c305d61f5c6>`__ 
R
`operator() <../../db/d34/structTango_1_1WantedCmd.html#a813791b48fbf1a2836510c305d61f5c6>`__\ (A1
cmd\_ptr, A2 name) const

58  {

59  if (::strlen(name) != cmd\_ptr->get\_lower\_name().size())

60  return false;

61  string tmp\_name(name);

62 
transform(tmp\_name.begin(),tmp\_name.end(),tmp\_name.begin(),::tolower);

63  return cmd\_ptr->get\_lower\_name() == tmp\_name;

64  }

65 };

66 #endif

67 

`68 <../../de/ddf/namespaceTango.html#aa9a4f11e1e89ad0344f53eed576485f1>`__ typedef
bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`ALLO\_PTR <../../de/ddf/namespaceTango.html#aa9a4f11e1e89ad0344f53eed576485f1>`__)(const
CORBA::Any &);

69 

`83 <../../d2/d1d/classTango_1_1Command.html>`__ class
`Command <../../d2/d1d/classTango_1_1Command.html>`__

84 {

85 public:

86 

`95 <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__ 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ ():ext(new
CommandExt) {}

108 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (const
char
\*s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out);

109 

122 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (string
&s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out);

123 

136 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (const
char
\*s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

137  const char \*in\_desc,const char \*out\_desc);

138 

151 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (string
&s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

152  string &in\_desc,string &out\_desc);

165 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (const
char
\*s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

166  Tango::DispLevel level);

167 

180 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (string
&s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

181  Tango::DispLevel level);

182 

195 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (const
char
\*s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

196  const char \*in\_desc,const char \*out\_desc,

197  Tango::DispLevel level);

198 

211 
`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__\ (string
&s,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out,

212  string &in\_desc,string &out\_desc,

213  Tango::DispLevel level);

215 

222 #ifdef HAS\_UNIQUE\_PTR

223  virtual
`~Command <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__\ ()
{}

224 #else

`225 <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__ 
virtual
`~Command <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__\ ()
{delete ext;}

226 #endif

227 

228 

245  virtual CORBA::Any
\*\ `execute <../../d2/d1d/classTango_1_1Command.html#a24505e18425086e1c6b84d7ba1f92503>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any) = 0;

246 

`263 <../../d2/d1d/classTango_1_1Command.html#af634fd436701aca40fbcdaeb5d4691b1>`__ 
virtual bool
`is\_allowed <../../d2/d1d/classTango_1_1Command.html#af634fd436701aca40fbcdaeb5d4691b1>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any) {(void)dev;(void)in\_any;return true;}

264 

`273 <../../d2/d1d/classTango_1_1Command.html#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__ 
virtual void
`init\_types <../../d2/d1d/classTango_1_1Command.html#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__\ ()
{};

275 

`286 <../../d2/d1d/classTango_1_1Command.html#aa6bfd85b7ee91b2c492fce5938fdaebe>`__ 
string
&\ `get\_name <../../d2/d1d/classTango_1_1Command.html#aa6bfd85b7ee91b2c492fce5938fdaebe>`__\ ()
{return
`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__;}

287 

`293 <../../d2/d1d/classTango_1_1Command.html#a13a2bbf037579b576dcee0bc9b55d8f2>`__ 
void
`set\_name <../../d2/d1d/classTango_1_1Command.html#a13a2bbf037579b576dcee0bc9b55d8f2>`__\ (string
&new\_name)
{`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__\ =new\_name;}

294 

`300 <../../d2/d1d/classTango_1_1Command.html#a92e8a62375817d7e812132e49ee27dc3>`__ 
string
&\ `get\_lower\_name <../../d2/d1d/classTango_1_1Command.html#a92e8a62375817d7e812132e49ee27dc3>`__\ ()
{return
`lower\_name <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__;}

301 

`307 <../../d2/d1d/classTango_1_1Command.html#a66cba1d14a421998571b5d871e31c155>`__ 
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
`get\_in\_type <../../d2/d1d/classTango_1_1Command.html#a66cba1d14a421998571b5d871e31c155>`__\ ()
{return
`in\_type <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__;}

308 

`314 <../../d2/d1d/classTango_1_1Command.html#ad2b89784882a915431128712973939ee>`__ 
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
`get\_out\_type <../../d2/d1d/classTango_1_1Command.html#ad2b89784882a915431128712973939ee>`__\ ()
{return
`out\_type <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__;}

315 

`321 <../../d2/d1d/classTango_1_1Command.html#ae36c1e09f7be85f9bf88fbbf68ca436e>`__ 
string
&\ `get\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#ae36c1e09f7be85f9bf88fbbf68ca436e>`__\ ()
{return
`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__;}

322 

`328 <../../d2/d1d/classTango_1_1Command.html#a32334cc5b6977f362a6ea50da4924653>`__ 
string
&\ `get\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a32334cc5b6977f362a6ea50da4924653>`__\ ()
{return
`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__;}

329 

`335 <../../d2/d1d/classTango_1_1Command.html#a943bac0451ccabcb2e093911a6cf852f>`__ 
Tango::DispLevel
`get\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a943bac0451ccabcb2e093911a6cf852f>`__\ ()
{return cmd\_disp\_level;}

336 

`342 <../../d2/d1d/classTango_1_1Command.html#a47b22bb3cdfdc732c84a07b6db753aba>`__ 
void
`set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a47b22bb3cdfdc732c84a07b6db753aba>`__\ (const
char \*desc)
{`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__
= desc;}

343 

`349 <../../d2/d1d/classTango_1_1Command.html#aeb1db497ea77211071a7fd11cb2c9900>`__ 
void
`set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#aeb1db497ea77211071a7fd11cb2c9900>`__\ (string
&desc)
{`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__
= desc;}

350 

`356 <../../d2/d1d/classTango_1_1Command.html#af421f59ba21cb3300d8ed5cdc28114ad>`__ 
void
`set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#af421f59ba21cb3300d8ed5cdc28114ad>`__\ (const
char \*desc)
{`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__
= desc;}

357 

`363 <../../d2/d1d/classTango_1_1Command.html#a98bb11a3d9c82fd2e4bbde0ed28d3dcf>`__ 
void
`set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a98bb11a3d9c82fd2e4bbde0ed28d3dcf>`__\ (string
&desc)
{`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__
= desc;}

364 

`370 <../../d2/d1d/classTango_1_1Command.html#a9108e06b866948d8ea6a5de2cde80853>`__ 
void
`set\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a9108e06b866948d8ea6a5de2cde80853>`__\ (Tango::DispLevel
level) {cmd\_disp\_level = level;}

371 

`377 <../../d2/d1d/classTango_1_1Command.html#af8270bde5b9e4b9826419eabb8f8a3ec>`__ 
void
`set\_polling\_period <../../d2/d1d/classTango_1_1Command.html#af8270bde5b9e4b9826419eabb8f8a3ec>`__\ (long
per) {poll\_period = per;}

378 

`384 <../../d2/d1d/classTango_1_1Command.html#a1e60dcb1a8a89eb7e6596a2f0ecd87a7>`__ 
long
`get\_polling\_period <../../d2/d1d/classTango_1_1Command.html#a1e60dcb1a8a89eb7e6596a2f0ecd87a7>`__\ ()
{return poll\_period;}

386 

387 

403  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevBoolean &data);

404 

415  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevShort &data);

416 

427  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevLong &data);

428 

439  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevLong64 &data);

440 

451  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevFloat &data);

452 

463  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevDouble &data);

464 

475  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevUShort &data);

476 

487  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevULong &data);

488 

499  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevULong64 &data);

500 

511  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevString &data);

512 

523  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const char \*&data);

524 

535  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarCharArray \*&data);

536 

547  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarShortArray \*&data);

548 

559  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarLongArray \*&data);

560 

571  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarLong64Array \*&data);

572 

583  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarFloatArray \*&data);

584 

595  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarDoubleArray \*&data);

596 

607  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarUShortArray \*&data);

608 

619  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarULongArray \*&data);

620 

631  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarULong64Array \*&data);

632 

643  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarStringArray \*&data);

644 

655  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarLongStringArray \*&data);

656 

667  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevVarDoubleStringArray \*&data);

668 

679  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,Tango::DevState &data);

680 

691  void
`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__\ (const
CORBA::Any &in,const Tango::DevEncoded \*&data);

693 

705  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ ();

706 

715  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevBoolean
data);

716 

725  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevShort
data);

726 

735  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevLong
data);

736 

745  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevLong64
data);

746 

755  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevFloat
data);

756 

765  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevDouble
data);

766 

775  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevUShort
data);

776 

785  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevULong
data);

786 

795  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevULong64
data);

796 

807  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevString
data);

808 

820  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (const
char \*data);

821 

832  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarCharArray
&data);

833 

847  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarCharArray
\*data);

848 

859  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarShortArray
&data);

860 

874  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarShortArray
\*data);

875 

886  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLongArray
&data);

887 

901  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLongArray
\*data);

902 

913  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLong64Array
&data);

914 

928  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLong64Array
\*data);

929 

940  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarFloatArray
&data);

941 

955  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarFloatArray
\*data);

956 

967  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarDoubleArray
&data);

968 

982  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarDoubleArray
\*data);

983 

994  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarUShortArray
&data);

995 

1009  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarUShortArray
\*data);

1010 

1021  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarULongArray
&data);

1022 

1036  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarULongArray
\*data);

1037 

1048  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarULong64Array
&data);

1049 

1063  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarULong64Array
\*data);

1064 

1075  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarStringArray
&data);

1076 

1090  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarStringArray
\*data);

1091 

1102  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLongStringArray
&data);

1103 

1117  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarLongStringArray
\*data);

1118 

1129  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarDoubleStringArray
&data);

1130 

1144  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevVarDoubleStringArray
\*data);

1145 

1154  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevState
data);

1155 

1169  CORBA::Any
\*\ `insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__\ (Tango::DevEncoded
\*data);

1171 

1172 protected:

`1178 <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__ 
string
`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__;

`1182 <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__ 
string
`lower\_name <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__;

`1186 <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__ 
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
`in\_type <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__;

`1190 <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__ 
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
`out\_type <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__;

`1194 <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__ 
string
`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__;

`1198 <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__ 
string
`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__;

1200 

1201 private:

1202  class CommandExt

1203  {

1204  public:

1205  CommandExt() {}

1206  };

1207 

1208  void alloc\_any(CORBA::Any \*&);

1209  void throw\_bad\_type(const char \*);

1210 

1211 #ifdef HAS\_UNIQUE\_PTR

1212  unique\_ptr<CommandExt> ext; // Class extension

1213 #else

1214  CommandExt \*ext;

1215 #endif

1216 

1217 //

1218 // Ported from the extension class

1219 //

1220 

1221  Tango::DispLevel cmd\_disp\_level; // Display level

1222  long poll\_period; // Polling period

1223 

1224 };

1225 

1226 //=============================================================================

1227 //

1228 // The TemplCommand class

1229 //

1230 //

1231 // description : This class is a derived class of the Command
class.

1232 // It is used to create a command from a pointer to a

1233 // object method which will execute the command.

1234 // This class is for command without inout nor output

1235 // paremeters.

1236 // This class is also a base class for the template Command

1237 // class

1238 //

1239 //=============================================================================

1240 

`1252 <../../de/de1/classTango_1_1TemplCommand.html>`__ class
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__:public
`Command <../../d2/d1d/classTango_1_1Command.html>`__

1253 {

1254 public:

1255 

`1264 <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__ 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ ():ext(Tango\_nullptr)
{}

1265 

1278 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)());

1279 

1292 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)());

1293 

1307 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1308  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

1309 

1323 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1324  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

1325 

1338 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1339  const char \*in\_desc,const char \*out\_desc);

1340 

1353 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1354  string &in\_desc,string &out\_desc);

1355 

1370 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1371  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1372  const char \*in\_desc,const char \*out\_desc);

1373 

1388 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1389  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1390  string &in\_desc,string &out\_desc);

1391 

1404 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1405  Tango::DispLevel level);

1406 

1419 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1420  Tango::DispLevel level);

1421 

1435 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1436  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1437  Tango::DispLevel level);

1438 

1452 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1453  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1454  Tango::DispLevel level);

1455 

1468 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1469  const char \*in\_desc,const char \*out\_desc,

1470  Tango::DispLevel level);

1471 

1484 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1485  string &in\_desc,string &out\_desc,

1486  Tango::DispLevel level);

1487 

1502 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1503  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1504  const char \*in\_desc,const char \*out\_desc,

1505  Tango::DispLevel level);

1506 

1521 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&cmd\_name,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

1522  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1523  string &in\_desc,string &out\_desc,

1524  Tango::DispLevel level);

1526 

1527 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*);

1528 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&);

1529 

1530 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*,Tango::DispLevel);

1531 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&,Tango::DispLevel);

1532 

1533 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*,const char \*,const char \*);

1534 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&,string &,string &);

1535 

1536 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (const
char \*,const char \*,const char \*,DispLevel);

1537 
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__\ (string
&,string &,string &,DispLevel);

1538 

1554  void
`set\_type <../../de/de1/classTango_1_1TemplCommand.html#a95ab85ef01d98875e631a0fc40d1d414>`__\ (const
type\_info
&data\_type,\ `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
&type);

1555 

1572  CORBA::Any
\*\ `execute <../../de/de1/classTango_1_1TemplCommand.html#ac0f9217e1c13600d3ba449ceb6a25cd3>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any);

1573 

1591  bool
`is\_allowed <../../de/de1/classTango_1_1TemplCommand.html#a203f6dc3223fd20f230af555e34848fd>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any);

1593 

1594 private:

1595  class TemplCommandExt

1596  {

1597  };

1598 

1599  void (DeviceImpl::\*exe\_ptr)();

1600 #ifdef HAS\_UNIQUE\_PTR

1601  unique\_ptr<TemplCommandExt> ext; // Class extension

1602 #else

1603  TemplCommandExt \*ext;

1604 #endif

1605 

1606 protected:

`1612 <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__ 
bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__)(const
CORBA::Any &);

1614 };

1615 

1616 

1617 //=============================================================================

1618 //

1619 // The TemplCommandInOut class

1620 //

1621 //

1622 // description : This class is a derived class of the Command
class.

1623 // It is used to create a command from a pointer to a

1624 // object method which will execute the command.

1625 // This class is for command without inout nor output

1626 // paremeters.

1627 // This class is also a base class for the template Command

1628 // class

1629 //

1630 //=============================================================================

1631 

1632 

1648 template <typename INARG,typename OUTARG>

`1649 <../../db/dbb/classTango_1_1TemplCommandInOut.html>`__ class
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html>`__:public
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__

1650 {

1651 public:

1652 

1668 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1669  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG));

1670 

1683 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1684  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG));

1685 

1699 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1700  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1701  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

1702 

1716 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1717  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1718  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

1719 

1733 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1734  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1735  const char \*in\_desc,const char \*out\_desc);

1736 

1750 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1751  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1752  string &in\_desc,string &out\_desc);

1753 

1768 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1769  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1770  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1771  const char \*in\_desc,const char \*out\_desc);

1772 

1787 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1788  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1789  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1790  string &in\_desc,string &out\_desc);

1791 

1804 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1805  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1806  Tango::DispLevel level);

1807 

1820 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1821  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1822  Tango::DispLevel level);

1823 

1837 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1838  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1839  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1840  Tango::DispLevel level);

1841 

1855 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1856  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1857  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1858  Tango::DispLevel level);

1859 

1873 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1874  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1875  const char \*in\_desc,const char \*out\_desc,

1876  Tango::DispLevel level);

1877 

1891 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1892  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1893  string &in\_desc,string &out\_desc,

1894  Tango::DispLevel level);

1895 

1910 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*cmd\_name,

1911  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1912  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1913  const char \*in\_desc,const char \*out\_desc,

1914  Tango::DispLevel level);

1915 

1930 
`TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&cmd\_name,

1931  OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

1932  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

1933  string &in\_desc,string &out\_desc,

1934  Tango::DispLevel level);

1936 

`1937 <../../db/dbb/classTango_1_1TemplCommandInOut.html#afdd5a0253149e132d8f44945b9c18cb8>`__ 
`~TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#afdd5a0253149e132d8f44945b9c18cb8>`__\ ()
{}

1938 

1948  void
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

1949 

1966  CORBA::Any
\*\ `execute <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any);

1968 

1969 private:

1970  class TemplCommandInOutExt

1971  {

1972  };

1973 

1974  OUTARG (DeviceImpl::\*exe\_ptr\_inout)(INARG);

1975 #ifdef HAS\_UNIQUE\_PTR

1976  unique\_ptr<TemplCommandInOut> ext; // Class extension

1977 #else

1978  TemplCommandInOutExt \*ext;

1979 #endif

1980 };

1981 

1982 //+-------------------------------------------------------------------------

1983 //

1984 // method : TempCommandInOut class constructors

1985 //

1986 // description : instance constructor

1987 //

1988 //--------------------------------------------------------------------------

1989 

1990 template <typename INARG,typename OUTARG>

`1991 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG))

1992 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_inout(f),ext(Tango\_nullptr)

1993 {

1994 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

1995 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

1996 }

1997 

1998 template <typename INARG,typename OUTARG>

`1999 <../../db/dbb/classTango_1_1TemplCommandInOut.html#aec7f943e0412016b1c1063d3dde694f3>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

2000 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2001 {

2002 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2003 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2004 }

2005 

2006 template <typename INARG,typename OUTARG>

`2007 <../../db/dbb/classTango_1_1TemplCommandInOut.html#ae905b4db452b115ae3232d0a179deac7>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG))

2008 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2009 {

2010 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2011 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2012 }

2013 

2014 template <typename INARG,typename OUTARG>

`2015 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a2ba0d93006c6d776248f35dc26578b87>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

2016 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2017 {

2018 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2019 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2020 }

2021 

2022 template <typename INARG,typename OUTARG>

`2023 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a418733bc08eed3cc3fc7ce4ae2d36321>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),const
char \*in\_desc,const char \*out\_desc)

2024 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2025 {

2026 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2027 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2028 }

2029 

2030 template <typename INARG,typename OUTARG>

`2031 <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac0845cca0f7b4a47f194dbe8741eeb4b>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char \*out\_desc)

2032 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2033 {

2034 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2035 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2036 }

2037 

2038 template <typename INARG,typename OUTARG>

`2039 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a7725331aba633cde2f26f23769896b5a>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),string
&in\_desc,string &out\_desc)

2040 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2041 {

2042 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2043 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2044 }

2045 

2046 template <typename INARG,typename OUTARG>

`2047 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a1d8eb4c66b7840913cee742e2138f10c>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc)

2048 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2049 {

2050 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2051 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2052 }

2053 

2054 template <typename INARG,typename OUTARG>

`2055 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a4cd8aa04392f1c2ef665cb5bdfa7bc86>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),Tango::DispLevel
level)

2056 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2057 {

2058 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2059 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2060 }

2061 

2062 template <typename INARG,typename OUTARG>

`2063 <../../db/dbb/classTango_1_1TemplCommandInOut.html#add11fefa6ae6dfb7e374d22c54eaedf0>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

2064 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2065 {

2066 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2067 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2068 }

2069 

2070 template <typename INARG,typename OUTARG>

`2071 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a29ec8158c25feb319848a876783fdc79>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),Tango::DispLevel
level)

2072 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2073 {

2074 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2075 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2076 }

2077 

2078 template <typename INARG,typename OUTARG>

`2079 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a2854675abd8fdbbcc63676db498195a1>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

2080 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2081 {

2082 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2083 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2084 }

2085 

2086 template <typename INARG,typename OUTARG>

`2087 <../../db/dbb/classTango_1_1TemplCommandInOut.html#abc84ec88a117f481e3b0ed8a6d273cce>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),const
char \*in\_desc,const char \*out\_desc,Tango::DispLevel level)

2088 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2089 {

2090 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2091 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2092 }

2093 

2094 template <typename INARG,typename OUTARG>

`2095 <../../db/dbb/classTango_1_1TemplCommandInOut.html#aaf2cfe422127533782d5e8b4073548e3>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char
\*out\_desc,Tango::DispLevel level)

2096 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2097 {

2098 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2099 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2100 }

2101 

2102 template <typename INARG,typename OUTARG>

`2103 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a0dd98b34ed11a4405f134969cf120152>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),string
&in\_desc,string &out\_desc,Tango::DispLevel level)

2104 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2105 {

2106 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2107 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2108 }

2109 

2110 template <typename INARG,typename OUTARG>

`2111 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a145be9fc116c50ae461f5b6a038e3483>`__ `TemplCommandInOut<INARG,OUTARG>::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc,Tango::DispLevel level)

2112 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_inout(f),ext(Tango\_nullptr)

2113 {

2114 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2115 
`init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ();

2116 }

2117 

2118 //+-------------------------------------------------------------------------

2119 //

2120 // method : init\_types

2121 //

2122 // description : Initialise input and output type from the template

2123 // class specialisation parameters.

2124 //

2125 //--------------------------------------------------------------------------

2126 

2127 template <typename INARG,typename OUTARG>

`2128 <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__ void
`TemplCommandInOut<INARG,OUTARG>::init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__\ ()

2129 {

2130 

2131 //

2132 // Set intput type

2133 //

2134  set\_type(typeid(INARG),in\_type);

2135 

2136 //

2137 // Set output type

2138 //

2139 

2140  set\_type(typeid(OUTARG),out\_type);

2141 }

2142 

2143 //+-------------------------------------------------------------------------

2144 //

2145 // method : execute

2146 //

2147 // description : Execute the method associated with the command

2148 // (stored in the exe\_ptr data)

2149 //

2150 // input : - dev\_ptr : pointer to the device on which the command
must be

2151 // executed

2152 // - in\_any : Incoming command data

2153 //

2154 // This method returns a pointer to an Any object with the command
outing

2155 // data.

2156 //

2157 //--------------------------------------------------------------------------

2158 

2159 template <typename INARG,typename OUTARG>

`2160 <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__ CORBA::Any
\*\ `TemplCommandInOut<INARG,OUTARG>::execute <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev\_ptr,const CORBA::Any &in\_any)

2161 {

2162 

2163 //

2164 // Execute the command associated method

2165 //

2166 

2167  INARG in\_data;

2168  extract(in\_any,in\_data);

2169  OUTARG out\_data = (dev\_ptr->\*exe\_ptr\_inout)(in\_data);

2170  return insert(out\_data);

2171 

2172 }

2173 

2174 //=============================================================================

2175 //

2176 // The TemplCommandIn class

2177 //

2178 //

2179 // description : This class is a derived class of the Command
class.

2180 // It is used to create a command from a pointer to a

2181 // object method which will execute the command.

2182 // This class is for command without inout nor output

2183 // paremeters.

2184 // This class is also a base class for the template Command

2185 // class

2186 //

2187 //=============================================================================

2188 

2189 

2205 template <typename INARG>

`2206 <../../d2/d50/classTango_1_1TemplCommandIn.html>`__ class
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html>`__:public
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__

2207 {

2208 public:

2209 

2225 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2226  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG));

2227 

2240 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2241  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG));

2242 

2256 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2257  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2258  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

2259 

2273 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2274  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2275  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

2276 

2290 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2291  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2292  const char \*in\_desc,const char \*out\_desc);

2293 

2307 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2308  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2309  string &in\_desc,string &out\_desc);

2310 

2325 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2326  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2327  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2328  const char \*in\_desc,const char \*out\_desc);

2329 

2344 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2345  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2346  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2347  string &in\_desc,string &out\_desc);

2348 

2361 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2362  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2363  Tango::DispLevel level);

2364 

2377 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2378  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2379  Tango::DispLevel level);

2380 

2394 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2395  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2396  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2397  Tango::DispLevel level);

2398 

2412 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2413  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2414  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2415  Tango::DispLevel level);

2416 

2430 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2431  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2432  const char \*in\_desc,const char \*out\_desc,

2433  Tango::DispLevel level);

2434 

2448 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2449  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2450  string &in\_desc,string &out\_desc,

2451  Tango::DispLevel level);

2452 

2467 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*cmd\_name,

2468  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2469  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2470  const char \*in\_desc,const char \*out\_desc,

2471  Tango::DispLevel level);

2472 

2487 
`TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&cmd\_name,

2488  void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(INARG),

2489  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2490  string &in\_desc,string &out\_desc,

2491  Tango::DispLevel level);

2493 

`2494 <../../d2/d50/classTango_1_1TemplCommandIn.html#a5f9d8e40b7114d5fa3f2de28cd63cfba>`__ 
`~TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a5f9d8e40b7114d5fa3f2de28cd63cfba>`__\ ()
{}

2495 

2505  void
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2506 

2523  CORBA::Any
\*\ `execute <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any);

2525 

2526 private:

2527  class TemplCommandInExt

2528  {

2529  };

2530 

2531  void (DeviceImpl::\*exe\_ptr\_in)(INARG);

2532 #ifdef HAS\_UNIQUE\_PTR

2533  unique\_ptr<TemplCommandInExt> ext; // Class extension

2534 #else

2535  TemplCommandInExt \*ext;

2536 #endif

2537 };

2538 

2539 //+-------------------------------------------------------------------------

2540 //

2541 // method : TempCommandIn class constructors

2542 //

2543 // description : instance constructor

2544 //

2545 //--------------------------------------------------------------------------

2546 

2547 template <typename INARG>

`2548 <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG))

2549 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_in(f),ext(Tango\_nullptr)

2550 {

2551 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2552 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2553 }

2554 

2555 template <typename INARG>

`2556 <../../d2/d50/classTango_1_1TemplCommandIn.html#a2d1b7ab8622e3691b30f010adb506b11>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

2557 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_in(f),ext(Tango\_nullptr)

2558 {

2559 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2560 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2561 }

2562 

2563 template <typename INARG>

`2564 <../../d2/d50/classTango_1_1TemplCommandIn.html#a341511557f158fcb9264e44a23d6b937>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG))

2565 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_in(f),ext(Tango\_nullptr)

2566 {

2567 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2568 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2569 }

2570 

2571 template <typename INARG>

`2572 <../../d2/d50/classTango_1_1TemplCommandIn.html#abbc6d1ea42a506c4669f82cee32c3824>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

2573 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_in(f),ext(Tango\_nullptr)

2574 {

2575 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2576 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2577 }

2578 

2579 template <typename INARG>

`2580 <../../d2/d50/classTango_1_1TemplCommandIn.html#aadebfe9bac293025be183cccefe0efa0>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),const
char \*in\_desc,const char \*out\_desc)

2581 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_in(f),ext(Tango\_nullptr)

2582 {

2583 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2584 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2585 }

2586 

2587 template <typename INARG>

`2588 <../../d2/d50/classTango_1_1TemplCommandIn.html#a37ad05e7407ee50d42ad98d7c199178e>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char \*out\_desc)

2589 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_in(f),ext(Tango\_nullptr)

2590 {

2591 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2592 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2593 }

2594 

2595 template <typename INARG>

`2596 <../../d2/d50/classTango_1_1TemplCommandIn.html#ab9e0914829be048618b007a659e017f9>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),string
&in\_desc,string &out\_desc)

2597 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_in(f),ext(Tango\_nullptr)

2598 {

2599 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2600 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2601 }

2602 

2603 template <typename INARG>

`2604 <../../d2/d50/classTango_1_1TemplCommandIn.html#a073d83c60194f55a563c9d7e70828d2d>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc)

2605 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_in(f),ext(Tango\_nullptr)

2606 {

2607 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2608 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2609 }

2610 

2611 template <typename INARG>

`2612 <../../d2/d50/classTango_1_1TemplCommandIn.html#a137ba0664e58e8008b3c2e058e09f218>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),Tango::DispLevel
level)

2613 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2614 {

2615 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2616 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2617 }

2618 

2619 template <typename INARG>

`2620 <../../d2/d50/classTango_1_1TemplCommandIn.html#a8f988a11e4d110b4b7c227281f63a375>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

2621 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2622 {

2623 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2624 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2625 }

2626 

2627 template <typename INARG>

`2628 <../../d2/d50/classTango_1_1TemplCommandIn.html#a057e510fb0cf68e6695d29de386a3329>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),Tango::DispLevel
level)

2629 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2630 {

2631 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2632 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2633 }

2634 

2635 template <typename INARG>

`2636 <../../d2/d50/classTango_1_1TemplCommandIn.html#a059bcfebb4431750b9718eb869301544>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

2637 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2638 {

2639 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2640 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2641 }

2642 

2643 template <typename INARG>

`2644 <../../d2/d50/classTango_1_1TemplCommandIn.html#acdce293a3da6b437894d8fb6f567e2cf>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),const
char \*in\_desc,const char \*out\_desc,Tango::DispLevel level)

2645 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2646 {

2647 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2648 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2649 }

2650 

2651 template <typename INARG>

`2652 <../../d2/d50/classTango_1_1TemplCommandIn.html#a5ee7acb6de275a3994f5552cd5ae4443>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (const
char \*s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char
\*out\_desc,Tango::DispLevel level)

2653 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2654 {

2655 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2656 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2657 }

2658 

2659 template <typename INARG>

`2660 <../../d2/d50/classTango_1_1TemplCommandIn.html#a2c68153e4fead481de8c781823b6f515>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),string
&in\_desc,string &out\_desc,Tango::DispLevel level)

2661 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2662 {

2663 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

2664 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2665 }

2666 

2667 template <typename INARG>

`2668 <../../d2/d50/classTango_1_1TemplCommandIn.html#a2229c911a64cdae7ba7967cc66534dd9>`__ `TemplCommandIn<INARG>::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__\ (string
&s,void
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(INARG),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc,Tango::DispLevel level)

2669 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_in(f),ext(Tango\_nullptr)

2670 {

2671 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

2672 
`init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ();

2673 }

2674 //+-------------------------------------------------------------------------

2675 //

2676 // method : init\_types

2677 //

2678 // description : Initialise input and output type from the template

2679 // class specialisation parameters.

2680 //

2681 //--------------------------------------------------------------------------

2682 

2683 template <typename INARG>

`2684 <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__ void
`TemplCommandIn<INARG>::init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__\ ()

2685 {

2686 

2687  out\_type =
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__;

2688 //

2689 // Set intput type

2690 //

2691  set\_type(typeid(INARG),in\_type);

2692 

2693 }

2694 

2695 //+-------------------------------------------------------------------------

2696 //

2697 // method : execute

2698 //

2699 // description : Execute the method associated with the command

2700 // (stored in the exe\_ptr data)

2701 //

2702 // input : - dev\_ptr : pointer to the device on which the command
must be

2703 // executed

2704 // - in\_any : Incoming command data

2705 //

2706 // This method returns a pointer to an Any object with the command
outing

2707 // data.

2708 //

2709 //--------------------------------------------------------------------------

2710 

2711 template <typename INARG>

`2712 <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__ CORBA::Any
\*\ `TemplCommandIn<INARG>::execute <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev\_ptr,const CORBA::Any &in\_any)

2713 {

2714 

2715 //

2716 // Execute the command associated method

2717 //

2718 

2719  INARG in\_data;

2720  extract(in\_any,in\_data);

2721  (dev\_ptr->\*exe\_ptr\_in)(in\_data);

2722  return insert();

2723 }

2724 

2725 

2726 //=============================================================================

2727 //

2728 // The TemplCommandOut class

2729 //

2730 //

2731 // description : This class is a derived class of the Command
class.

2732 // It is used to create a command from a pointer to a

2733 // object method which will execute the command.

2734 // This class is for command without inout nor output

2735 // paremeters.

2736 // This class is also a base class for the template Command

2737 // class

2738 //

2739 //=============================================================================

2740 

2741 

2756 template <typename OUTARG>

`2757 <../../d3/d87/classTango_1_1TemplCommandOut.html>`__ class
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html>`__:public
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__

2758 {

2759 public:

2760 

2776 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)());

2777 

2790 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)());

2791 

2805 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2806  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

2807 

2821 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2822  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &));

2823 

2837 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2838  const char \*in\_desc,const char \*out\_desc);

2839 

2853 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2854  string &in\_desc,string &out\_desc);

2855 

2870 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2871  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2872  const char \*in\_desc,const char \*out\_desc);

2873 

2888 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2889  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2890  string &in\_desc,string &out\_desc);

2891 

2904 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2905  Tango::DispLevel level);

2906 

2919 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2920  Tango::DispLevel level);

2921 

2935 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2936  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2937  Tango::DispLevel level);

2938 

2952 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2953  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

2954  Tango::DispLevel level);

2955 

2969 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2970  const char \*in\_desc,const char \*out\_desc,

2971  Tango::DispLevel level);

2972 

2986 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

2987  string &in\_desc,string &out\_desc,

2988  Tango::DispLevel level);

2989 

3004 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

3005  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

3006  const char \*in\_desc,const char \*out\_desc,

3007  Tango::DispLevel level);

3008 

3023 
`TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&cmd\_name,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*exe\_method)(),

3024  bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*state\_method)(const
CORBA::Any &),

3025  string &in\_desc,string &out\_desc,

3026  Tango::DispLevel level);

3028 

`3029 <../../d3/d87/classTango_1_1TemplCommandOut.html#a0eb5dbc7eb79c6d8cb72f979cc4a557e>`__ 
`~TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#a0eb5dbc7eb79c6d8cb72f979cc4a557e>`__\ ()
{}

3030 

3040  void
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3041 

3059  CORBA::Any
\*\ `execute <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any);

3061 

3062 private:

3063  class TemplCommandOutExt

3064  {

3065  };

3066 

3067  OUTARG (DeviceImpl::\*exe\_ptr\_out)();

3068 #ifdef HAS\_UNIQUE\_PTR

3069  unique\_ptr<TemplCommandOutExt> ext; // Class extension

3070 #else

3071  TemplCommandOutExt \*ext;

3072 #endif

3073 };

3074 

3075 //+-------------------------------------------------------------------------

3076 //

3077 // method : TempCommandOut class constructors

3078 //

3079 // description : instance constructor

3080 //

3081 //--------------------------------------------------------------------------

3082 

3083 template <typename OUTARG>

`3084 <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)())

3085 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_out(f),ext(Tango\_nullptr)

3086 {

3087 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3088 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3089 }

3090 

3091 template <typename OUTARG>

`3092 <../../d3/d87/classTango_1_1TemplCommandOut.html#a9e5293459cb6ed33331fbb290eaec9c9>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

3093 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_out(f),ext(Tango\_nullptr)

3094 {

3095 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3096 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3097 }

3098 

3099 template <typename OUTARG>

`3100 <../../d3/d87/classTango_1_1TemplCommandOut.html#adaf597eba94b56ab2ba93c4d6a69f205>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)())

3101 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_out(f),ext(Tango\_nullptr)

3102 {

3103 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3104 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3105 }

3106 

3107 template <typename OUTARG>

`3108 <../../d3/d87/classTango_1_1TemplCommandOut.html#a5673152dfc935f450caea8d1d2a22e52>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &))

3109 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s),exe\_ptr\_out(f),ext(Tango\_nullptr)

3110 {

3111 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3112 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3113 }

3114 

3115 template <typename OUTARG>

`3116 <../../d3/d87/classTango_1_1TemplCommandOut.html#abb25bf3e3ad5c6789d76cd8dc5e36867>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),const
char \*in\_desc,const char \*out\_desc)

3117 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_out(f),ext(Tango\_nullptr)

3118 {

3119 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3120 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3121 }

3122 

3123 template <typename OUTARG>

`3124 <../../d3/d87/classTango_1_1TemplCommandOut.html#a6690c380e46526d17fe488226fd0c861>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char \*out\_desc)

3125 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_out(f),ext(Tango\_nullptr)

3126 {

3127 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3128 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3129 }

3130 

3131 template <typename OUTARG>

`3132 <../../d3/d87/classTango_1_1TemplCommandOut.html#a09f46f5af2dd7d2a7315309259975a76>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),string
&in\_desc,string &out\_desc)

3133 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_out(f),ext(Tango\_nullptr)

3134 {

3135 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3136 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3137 }

3138 

3139 template <typename OUTARG>

`3140 <../../d3/d87/classTango_1_1TemplCommandOut.html#ab45fcaab09c05a24788e40f8a8c7a671>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc)

3141 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc),exe\_ptr\_out(f),ext(Tango\_nullptr)

3142 {

3143 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3144 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3145 }

3146 

3147 template <typename OUTARG>

`3148 <../../d3/d87/classTango_1_1TemplCommandOut.html#ab1994f704a66631bc3fea790074749fe>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),Tango::DispLevel
level)

3149 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3150 {

3151 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3152 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3153 }

3154 

3155 template <typename OUTARG>

`3156 <../../d3/d87/classTango_1_1TemplCommandOut.html#aa38e3d4d0b6fb395da911ccb80997209>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

3157 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3158 {

3159 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3160 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3161 }

3162 

3163 template <typename OUTARG>

`3164 <../../d3/d87/classTango_1_1TemplCommandOut.html#a8a73c454b3a5920c3b6a6067c6aca35f>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),Tango::DispLevel
level)

3165 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3166 {

3167 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3168 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3169 }

3170 

3171 template <typename OUTARG>

`3172 <../../d3/d87/classTango_1_1TemplCommandOut.html#ad11ab11480631f2e48117681b2f4fb26>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),Tango::DispLevel level)

3173 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3174 {

3175 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3176 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3177 }

3178 

3179 template <typename OUTARG>

`3180 <../../d3/d87/classTango_1_1TemplCommandOut.html#a9005d432b9156bcf1aa91f175f383a20>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),const
char \*in\_desc,const char \*out\_desc,Tango::DispLevel level)

3181 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3182 {

3183 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3184 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3185 }

3186 

3187 template <typename OUTARG>

`3188 <../../d3/d87/classTango_1_1TemplCommandOut.html#aaf3bef1d3b665788994dee565404e4a6>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (const
char \*s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),const char \*in\_desc,const char
\*out\_desc,Tango::DispLevel level)

3189 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3190 {

3191 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3192 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3193 }

3194 

3195 template <typename OUTARG>

`3196 <../../d3/d87/classTango_1_1TemplCommandOut.html#a67307221fb947ce222040eaaf6b2a808>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),string
&in\_desc,string &out\_desc,Tango::DispLevel level)

3197 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3198 {

3199 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= NULL;

3200 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3201 }

3202 

3203 template <typename OUTARG>

`3204 <../../d3/d87/classTango_1_1TemplCommandOut.html#a66580fc7ec414d46ef45dafb3556bc63>`__ `TemplCommandOut<OUTARG>::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__\ (string
&s,OUTARG
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*f)(),bool
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__::\*a)(const
CORBA::Any &),string &in\_desc,string &out\_desc,Tango::DispLevel level)

3205 :`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__\ (s,in\_desc,out\_desc,level),exe\_ptr\_out(f),ext(Tango\_nullptr)

3206 {

3207 
`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
= a;

3208 
`init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ();

3209 }

3210 

3211 //+-------------------------------------------------------------------------

3212 //

3213 // method : init\_types

3214 //

3215 // description : Initialise input and output type from the template

3216 // class specialisation parameters.

3217 //

3218 //--------------------------------------------------------------------------

3219 

3220 template <typename OUTARG>

`3221 <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__ void
`TemplCommandOut<OUTARG>::init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__\ ()

3222 {

3223  in\_type =
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__;

3224 //

3225 // Set output type

3226 //

3227 

3228  set\_type(typeid(OUTARG),out\_type);

3229 }

3230 

3231 //+-------------------------------------------------------------------------

3232 //

3233 // method : execute

3234 //

3235 // description : Execute the method associated with the command

3236 // (stored in the exe\_ptr data)

3237 //

3238 // input : - dev\_ptr : pointer to the device on which the command
must be

3239 // executed

3240 // - in\_any : Incoming command data

3241 //

3242 // This method returns a pointer to an Any object with the command
outing

3243 // data.

3244 //

3245 //--------------------------------------------------------------------------

3246 

3247 template <typename OUTARG>

`3248 <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__ CORBA::Any
\*\ `TemplCommandOut<OUTARG>::execute <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__\ (`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev\_ptr,const CORBA::Any &in\_any)

3249 {

3250 

3251 //

3252 // Execute the command associated method

3253 //

3254 

3255  return insert((dev\_ptr->\*exe\_ptr\_out)());

3256 }

3257 

3258 } // End of Tango namespace

3259 

3260 #endif // \_COMMAND\_H

`Tango::TemplCommand::TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__

TemplCommand()

Constructs a newly allocated Command object.

**Definition:** command.h:1264

`Tango::Command::set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a47b22bb3cdfdc732c84a07b6db753aba>`__

void set\_in\_type\_desc(const char \*desc)

Set the input parameter description field.

**Definition:** command.h:342

`Tango::Command::name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__

string name

The command name.

**Definition:** command.h:1178

`Tango::TemplCommand::allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__

bool(DeviceImpl::\* allowed\_ptr)(const CORBA::Any &)

The command allowed method object reference.

**Definition:** command.h:1612

`Tango::Command::init\_types <../../d2/d1d/classTango_1_1Command.html#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__

virtual void init\_types()

Init command parameters type.

**Definition:** command.h:273

`Tango::TemplCommandIn::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__

TemplCommandIn(const char \*cmd\_name,
void(DeviceImpl::\*exe\_method)(INARG))

Constructs a newly allocated TemplCommandIn object for a command with a
name and an execution method...

**Definition:** command.h:2548

`Tango::Command::execute <../../d2/d1d/classTango_1_1Command.html#a24505e18425086e1c6b84d7ba1f92503>`__

virtual CORBA::Any \* execute(DeviceImpl \*dev, const CORBA::Any
&in\_any)=0

Execute the command.

`Tango::Command::get\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#ae36c1e09f7be85f9bf88fbbf68ca436e>`__

string & get\_in\_type\_desc()

Return the input parameter description.

**Definition:** command.h:321

`Tango::TemplCommand::execute <../../de/de1/classTango_1_1TemplCommand.html#ac0f9217e1c13600d3ba449ceb6a25cd3>`__

CORBA::Any \* execute(DeviceImpl \*dev, const CORBA::Any &in\_any)

Invoke the command execution method given at object creation time.

`Tango::TemplCommandIn::execute <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__

CORBA::Any \* execute(DeviceImpl \*dev, const CORBA::Any &in\_any)

Invoke the command execution method given at object creation time.

**Definition:** command.h:2712

`Tango::Command::set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#aeb1db497ea77211071a7fd11cb2c9900>`__

void set\_in\_type\_desc(string &desc)

Set the input parameter description field.

**Definition:** command.h:349

`Tango::Command::lower\_name <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__

string lower\_name

The command name in lower case.

**Definition:** command.h:1182

`Tango::Command::set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a98bb11a3d9c82fd2e4bbde0ed28d3dcf>`__

void set\_out\_type\_desc(string &desc)

Set the output parameter description field.

**Definition:** command.h:363

`Tango::Command::insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__

CORBA::Any \* insert()

Create an empty CORBA Any object.

`Tango::Command::set\_polling\_period <../../d2/d1d/classTango_1_1Command.html#af8270bde5b9e4b9826419eabb8f8a3ec>`__

void set\_polling\_period(long per)

Set the command polling period.

**Definition:** command.h:377

`Tango::TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__

This class is a class representing a command in the template command
model without input or output pa...

**Definition:** command.h:1252

`Tango::Command::in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__

string in\_type\_desc

The command input parameter description.

**Definition:** command.h:1194

`Tango::WantedCmd::operator() <../../db/d34/structTango_1_1WantedCmd.html#a813791b48fbf1a2836510c305d61f5c6>`__

R operator()(A1 cmd\_ptr, A2 name) const

**Definition:** command.h:57

`Tango::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html>`__

This class is a class representing a command in the template command
model with output parameter but ...

**Definition:** command.h:2757

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::TemplCommandInOut::~TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#afdd5a0253149e132d8f44945b9c18cb8>`__

~TemplCommandInOut()

**Definition:** command.h:1937

`Tango::Command::set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#af421f59ba21cb3300d8ed5cdc28114ad>`__

void set\_out\_type\_desc(const char \*desc)

Set the output parameter description field.

**Definition:** command.h:356

`Tango::TemplCommandInOut::execute <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__

CORBA::Any \* execute(DeviceImpl \*dev, const CORBA::Any &in\_any)

Invoke the command execution method given at object creation time.

**Definition:** command.h:2160

`Tango::TemplCommand::set\_type <../../de/de1/classTango_1_1TemplCommand.html#a95ab85ef01d98875e631a0fc40d1d414>`__

void set\_type(const type\_info &data\_type, Tango::CmdArgType &type)

Choose the correct TANGO data type constant according to data type.

`Tango::WantedCmd <../../db/d34/structTango_1_1WantedCmd.html>`__

**Definition:** command.h:55

`Tango::Command::get\_in\_type <../../d2/d1d/classTango_1_1Command.html#a66cba1d14a421998571b5d871e31c155>`__

Tango::CmdArgType get\_in\_type()

Return the input parameter type.

**Definition:** command.h:307

`Tango::TemplCommandOut::execute <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__

CORBA::Any \* execute(DeviceImpl \*dev, const CORBA::Any &in\_any)

Invoke the command execution method given at object creation time.

**Definition:** command.h:3248

`Tango::Command::set\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a9108e06b866948d8ea6a5de2cde80853>`__

void set\_disp\_level(Tango::DispLevel level)

Set the command display level.

**Definition:** command.h:370

`Tango::Command::get\_polling\_period <../../d2/d1d/classTango_1_1Command.html#a1e60dcb1a8a89eb7e6596a2f0ecd87a7>`__

long get\_polling\_period()

Get the command polling period.

**Definition:** command.h:384

`Tango::TemplCommandInOut::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__

TemplCommandInOut(const char \*cmd\_name,
OUTARG(DeviceImpl::\*exe\_method)(INARG))

Constructs a newly allocated TemplCommandInOut object for a command with
a name and an execution meth...

**Definition:** command.h:1991

`Tango::Command::Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__

Command()

Constructs a newly allocated Command object.

**Definition:** command.h:95

`Tango::Command::get\_lower\_name <../../d2/d1d/classTango_1_1Command.html#a92e8a62375817d7e812132e49ee27dc3>`__

string & get\_lower\_name()

Return the command name in lower case letters.

**Definition:** command.h:300

`Tango::TemplCommandIn::init\_types <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__

void init\_types()

Initialise command input and output types.

**Definition:** command.h:2684

`Tango::TemplCommandOut::~TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#a0eb5dbc7eb79c6d8cb72f979cc4a557e>`__

~TemplCommandOut()

**Definition:** command.h:3029

`Tango::Command::set\_name <../../d2/d1d/classTango_1_1Command.html#a13a2bbf037579b576dcee0bc9b55d8f2>`__

void set\_name(string &new\_name)

Set the command name.

**Definition:** command.h:293

`Tango::TemplCommand::is\_allowed <../../de/de1/classTango_1_1TemplCommand.html#a203f6dc3223fd20f230af555e34848fd>`__

bool is\_allowed(DeviceImpl \*dev, const CORBA::Any &in\_any)

Invoke the command allowed method given at object creation time.

`Tango::Command::extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__

void extract(const CORBA::Any &in, Tango::DevBoolean &data)

Extract a boolean data from a CORBA Any object.

`Tango::Command::get\_out\_type <../../d2/d1d/classTango_1_1Command.html#ad2b89784882a915431128712973939ee>`__

Tango::CmdArgType get\_out\_type()

Return the output parameter type.

**Definition:** command.h:314

`Tango::Command <../../d2/d1d/classTango_1_1Command.html>`__

This class is a class representing a command in the TANGO device server
pattern.

**Definition:** command.h:83

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::TemplCommandIn::~TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html#a5f9d8e40b7114d5fa3f2de28cd63cfba>`__

~TemplCommandIn()

**Definition:** command.h:2494

`Tango::Command::get\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a943bac0451ccabcb2e093911a6cf852f>`__

Tango::DispLevel get\_disp\_level()

Return the command display level.

**Definition:** command.h:335

`Tango::Command::get\_name <../../d2/d1d/classTango_1_1Command.html#aa6bfd85b7ee91b2c492fce5938fdaebe>`__

string & get\_name()

Return the command name.

**Definition:** command.h:286

`Tango::TemplCommandIn <../../d2/d50/classTango_1_1TemplCommandIn.html>`__

This class is a class representing a command in the template command
model with input parameter but w...

**Definition:** command.h:2206

`Tango::Command::get\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a32334cc5b6977f362a6ea50da4924653>`__

string & get\_out\_type\_desc()

Return the output parameter description.

**Definition:** command.h:328

`Tango::TemplCommandInOut <../../db/dbb/classTango_1_1TemplCommandInOut.html>`__

This class is a class representing a command in the template command
model with output and input para...

**Definition:** command.h:1649

`Tango::Command::out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__

string out\_type\_desc

The command output parameter type.

**Definition:** command.h:1198

`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__

**Definition:** tango\_const.h:904

`Tango::ALLO\_PTR <../../de/ddf/namespaceTango.html#aa9a4f11e1e89ad0344f53eed576485f1>`__

bool(DeviceImpl::\* ALLO\_PTR)(const CORBA::Any &)

**Definition:** command.h:68

`Tango::Command::out\_type <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__

Tango::CmdArgType out\_type

The command output parameter type.

**Definition:** command.h:1190

`Tango::TemplCommandOut::TemplCommandOut <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__

TemplCommandOut(const char \*cmd\_name,
OUTARG(DeviceImpl::\*exe\_method)())

Constructs a newly allocated TemplCommandOut object for a command with a
name and an execution method...

**Definition:** command.h:3084

`Tango::Command::in\_type <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__

Tango::CmdArgType in\_type

The command input parameter type.

**Definition:** command.h:1186

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__

CmdArgType

**Definition:** tango\_const.h:903

`Tango::TemplCommandInOut::init\_types <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__

void init\_types()

Initialise command input and output types.

**Definition:** command.h:2128

`Tango::Command::is\_allowed <../../d2/d1d/classTango_1_1Command.html#af634fd436701aca40fbcdaeb5d4691b1>`__

virtual bool is\_allowed(DeviceImpl \*dev, const CORBA::Any &in\_any)

Check if the command is allowed in the actual device state.

**Definition:** command.h:263

`Tango::TemplCommandOut::init\_types <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__

void init\_types()

Initialise command input and output types.

**Definition:** command.h:3221

`Tango::Command::~Command <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__

virtual ~Command()

The object desctructor.

**Definition:** command.h:225

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `command.h <../../d0/d09/command_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
