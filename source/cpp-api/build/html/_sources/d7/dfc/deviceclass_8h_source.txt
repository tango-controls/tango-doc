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

deviceclass.h

`Go to the documentation of this
file. <../../d7/dfc/deviceclass_8h.html>`__

1 //=============================================================================

2 //

3 // file : Deviceclass.h

4 //

5 // description : Include file for the DeviceClass root class.

6 //

7 // project : TANGO

8 //

9 // author(s) : E.Taurel

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

33 //

34 //=============================================================================

35 

36 #ifndef \_DEVICECLASS\_H

37 #define \_DEVICECLASS\_H

38 

39 namespace `Tango <../../de/ddf/namespaceTango.html>`__

40 {

41 

42 class Command;

43 class Pipe;

44 class DeviceClass;

45 class AutoTangoMonitor;

46 class NoSyncModelTangoMonitor;

47 class EventSupplier;

48 class Util;

49 class DServer;

50 

51 

52 //=============================================================================

53 //

54 // The DeviceClass class

55 //

56 //

57 // description : This class will act as root class for all other

58 // DeviceClass classes. Its job is to define all Device

59 // class related properties and methods which exist only

60 // once e.g. the command list.

61 //

62 //=============================================================================

63 

`76 <../../d4/dcd/classTango_1_1DeviceClass.html>`__ class

77 #ifdef \_TG\_WINDOWS\_

78  #ifndef \_TANGO\_LIB

79  \_\_declspec(dllexport)

80  #endif

81 #endif

82  `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__

83 {

`84 <../../d4/dcd/classTango_1_1DeviceClass.html#aa90445f0324fbdea288f7b41aa4a6790>`__ 
friend class Tango::AutoTangoMonitor;

85 public:

86 

93  virtual
~\ `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__\ ();

95 

117  CORBA::Any
\*command\_handler(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*device,

118  string &command,const CORBA::Any &in\_any);

127  virtual void command\_factory() = 0;

`136 <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__ 
virtual void
`attribute\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__\ (vector<Attr
\*> &) {};

`145 <../../d4/dcd/classTango_1_1DeviceClass.html#a09321e4257b799709d77f40ace03242a>`__ 
virtual void
`pipe\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a09321e4257b799709d77f40ace03242a>`__\ ()
{};

146 

160  virtual void device\_factory(const Tango::DevVarStringArray
\*dev\_list) = 0;

161 

`172 <../../d4/dcd/classTango_1_1DeviceClass.html#a2596f49733e5dc80d52d8d240f4f83cd>`__ 
virtual void
`device\_name\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a2596f49733e5dc80d52d8d240f4f83cd>`__\ (vector<string>
&list) {(void)list;};

173 

184  void device\_destroyer(const string &dev\_name);

185 

196  void device\_destroyer(const char \*dev\_name);

197 

199 

`210 <../../d4/dcd/classTango_1_1DeviceClass.html#a0577ce350035604373496d5d1fceee39>`__ 
string
&\ `get\_name <../../d4/dcd/classTango_1_1DeviceClass.html#a0577ce350035604373496d5d1fceee39>`__\ ()
{return name;}

`216 <../../d4/dcd/classTango_1_1DeviceClass.html#a66c9909cee0aba6e337d4b80ff1396c0>`__ 
string
&\ `get\_doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a66c9909cee0aba6e337d4b80ff1396c0>`__\ ()
{return doc\_url;}

`222 <../../d4/dcd/classTango_1_1DeviceClass.html#aca6317feaf809a2f18d0c28a6ae9df53>`__ 
string
&\ `get\_type <../../d4/dcd/classTango_1_1DeviceClass.html#aca6317feaf809a2f18d0c28a6ae9df53>`__\ ()
{return type;}

`228 <../../d4/dcd/classTango_1_1DeviceClass.html#ad6359a7f1e9677b65102224b84d0cb98>`__ 
vector<DeviceImpl \*>
&\ `get\_device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ad6359a7f1e9677b65102224b84d0cb98>`__\ ()
{return device\_list;}

`234 <../../d4/dcd/classTango_1_1DeviceClass.html#a9e37d56d78b31cbc5c767f65c1b2117f>`__ 
vector<Command \*>
&\ `get\_command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a9e37d56d78b31cbc5c767f65c1b2117f>`__\ ()
{return command\_list;}

242  vector<Pipe \*> &get\_pipe\_list(const string &dev\_name);

248  `Command <../../d2/d1d/classTango_1_1Command.html>`__
&get\_cmd\_by\_name(const string &);

257  `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__
&get\_pipe\_by\_name(const string &pipe\_name,const string &dev\_name);

`264 <../../d4/dcd/classTango_1_1DeviceClass.html#a0782567b9fa64959d5a3e41cdc893a6a>`__ 
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
\*\ `get\_db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a0782567b9fa64959d5a3e41cdc893a6a>`__\ ()
{return db\_class;}

`270 <../../d4/dcd/classTango_1_1DeviceClass.html#a82ce643e9668e99ab16c56f484e6284b>`__ 
MultiClassAttribute
\*\ `get\_class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a82ce643e9668e99ab16c56f484e6284b>`__\ ()
{return class\_attr;}

`276 <../../d4/dcd/classTango_1_1DeviceClass.html#a2a9c1c29d9d4dbf07d44630a5f729ee7>`__ 
MultiClassPipe
\*\ `get\_class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#a2a9c1c29d9d4dbf07d44630a5f729ee7>`__\ ()
{return class\_pipe;}

`282 <../../d4/dcd/classTango_1_1DeviceClass.html#ac51857831a8313233a91ec7baa91aff1>`__ 
void
`set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#ac51857831a8313233a91ec7baa91aff1>`__\ (string
&dev\_type) {type = dev\_type;}

`288 <../../d4/dcd/classTango_1_1DeviceClass.html#af84e5725fbc6e5d97219c3cdc9169ed9>`__ 
void
`set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#af84e5725fbc6e5d97219c3cdc9169ed9>`__\ (const
char \*dev\_type) {type = dev\_type;}

290 

291 

295 #if defined \_TG\_WINDOWS\_

296 

308  void register\_signal(long signo);

309 #else

310 

325  void register\_signal(long signo,bool own\_handler = false);

326 #endif

327 

342  void unregister\_signal(long signo);

343 

353  virtual void signal\_handler(long signo);

354 

356 

357 protected:

367 
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__\ (string
&s);

369 

387  void
export\_device(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev,const char\* corba\_dev\_name = "Unused");

388 

`400 <../../d4/dcd/classTango_1_1DeviceClass.html#abffecec6eb34eebaa56e8297e2999204>`__ 
void
`set\_default\_command <../../d4/dcd/classTango_1_1DeviceClass.html#abffecec6eb34eebaa56e8297e2999204>`__\ (`Command <../../d2/d1d/classTango_1_1Command.html>`__
\*cmd) {default\_cmd = cmd;}

402 

`408 <../../d4/dcd/classTango_1_1DeviceClass.html#a17e2d247caf604ac2f2ab8f69ec4261c>`__ 
string
`name <../../d4/dcd/classTango_1_1DeviceClass.html#a17e2d247caf604ac2f2ab8f69ec4261c>`__;

`412 <../../d4/dcd/classTango_1_1DeviceClass.html#a19e2e40c4a095e6f002fc8367d98cdff>`__ 
string
`doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a19e2e40c4a095e6f002fc8367d98cdff>`__;

`416 <../../d4/dcd/classTango_1_1DeviceClass.html#a04a29a0cd699e1100f9d69e7b6202039>`__ 
string
`type <../../d4/dcd/classTango_1_1DeviceClass.html#a04a29a0cd699e1100f9d69e7b6202039>`__;

`420 <../../d4/dcd/classTango_1_1DeviceClass.html#ac7c054f57761e8fdf84660008d1070b5>`__ 
vector<Command \*>
`command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ac7c054f57761e8fdf84660008d1070b5>`__;

`424 <../../d4/dcd/classTango_1_1DeviceClass.html#add35f135439357ce2815140a6e5ebb89>`__ 
vector<DeviceImpl \*>
`device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#add35f135439357ce2815140a6e5ebb89>`__;

`428 <../../d4/dcd/classTango_1_1DeviceClass.html#a94b87afbec24955aca456718488485ed>`__ 
`DbClass <../../dc/d38/classTango_1_1DbClass.html>`__
\*\ `db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a94b87afbec24955aca456718488485ed>`__;

`432 <../../d4/dcd/classTango_1_1DeviceClass.html#a4430e4458d46045ebd5a19ed472e2c59>`__ 
MultiClassAttribute
\*\ `class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a4430e4458d46045ebd5a19ed472e2c59>`__;

`436 <../../d4/dcd/classTango_1_1DeviceClass.html#ab664e50fbdb4a0843f11477011e962f8>`__ 
MultiClassPipe
\*\ `class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#ab664e50fbdb4a0843f11477011e962f8>`__;

`440 <../../d4/dcd/classTango_1_1DeviceClass.html#a2626f63ac4db19102480950a815fb549>`__ 
vector<Pipe \*>
`pipe\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a2626f63ac4db19102480950a815fb549>`__;

442 

443 public:

445  vector<string> &get\_nodb\_name\_list() {return nodb\_name\_list;}

446  void set\_memorized\_values(bool flag, long idx = 0,bool from\_init
= false);

447 

448  void add\_wiz\_dev\_prop(string &name,string &desc,string &def);

449  void add\_wiz\_dev\_prop(string &name,string &desc);

450 

451  void add\_wiz\_class\_prop(string &name,string &desc,string &def);

452  void add\_wiz\_class\_prop(string &name,string &desc);

453 

454  vector<string> &get\_wiz\_class\_prop() {return wiz\_class\_prop;}

455  vector<string> &get\_wiz\_dev\_prop() {return wiz\_dev\_prop;}

456 

457  string &get\_cvs\_tag() {return cvs\_tag;}

458  string &get\_cvs\_location() {return cvs\_location;}

459 

460  string &get\_svn\_tag() {return svn\_tag;}

461  string &get\_svn\_location() {return svn\_location;}

462 

463  void set\_cvs\_tag(string &str) {cvs\_tag=str;}

464  void set\_cvs\_location(string &str) {cvs\_location=str;}

465 

466  void add\_device(DeviceImpl \*dev) {device\_list.push\_back(dev);}

467  void delete\_dev(long
idx,\ `Tango::Util <../../d4/deb/classTango_1_1Util.html>`__
\*tg,PortableServer::POA\_ptr r\_poa);

468 

469  bool is\_py\_class() {return py\_class;}

470  void set\_py\_class(bool py) {py\_class=py;}

471  virtual void delete\_class() {}

472  void get\_mcast\_event(DServer \*);

473 

474  bool is\_command\_allowed(const char \*);

475 

476  bool get\_device\_factory\_done() {return device\_factory\_done;}

477  void set\_device\_factory\_done(bool val) {device\_factory\_done =
val;}

478 

479  void check\_att\_conf();

480  void release\_devices\_mon();

481 

482  void remove\_command(const string &);

483 

484  void create\_device\_pipe(DeviceClass \*,DeviceImpl \*);

485  vector<Pipe \*> &get\_pipe\_list() {return pipe\_list;}

486 

487 protected:

489  Command \*get\_default\_command() {return default\_cmd;}

490 

491 private:

492  class DeviceClassExt

493  {

494  public:

495  DeviceClassExt() {};

496 

497  map<string,vector<Pipe \*> > dev\_pipe\_list;

498  };

499 

500  void get\_class\_system\_resource();

501  void throw\_mem\_value(DeviceImpl \*,Attribute &);

502 

503  vector<string> wiz\_class\_prop;

504  vector<string> wiz\_dev\_prop;

505 

506  vector<string> allowed\_cmds;

507 

508 #ifdef HAS\_UNIQUE\_PTR

509  unique\_ptr<DeviceClassExt> ext; // Class extension

510 #else

511  DeviceClassExt \*ext;

512 #endif

513 

514 //

515 // Ported from the extension class

516 //

517 

518  vector<string> nodb\_name\_list;

519  TangoMonitor only\_one;

520  string cvs\_tag;

521  string cvs\_location;

522  Command \* default\_cmd;

523  bool py\_class;

524  string svn\_tag;

525  string svn\_location;

526  bool device\_factory\_done;

527 };

528 

529 

530 } // End of Tango namespace

531 

532 #endif // \_DEVICECLASS\_H

`Tango::Util <../../d4/deb/classTango_1_1Util.html>`__

This class is a used to store TANGO device server process data and to
provide the user with a set of ...

**Definition:** utils.h:153

`Tango::DbClass <../../dc/d38/classTango_1_1DbClass.html>`__

A database object for a class which can be used to query or modify class
properties.

**Definition:** dbapi.h:267

`Tango::DeviceClass::name <../../d4/dcd/classTango_1_1DeviceClass.html#a17e2d247caf604ac2f2ab8f69ec4261c>`__

string name

The TANGO device class name.

**Definition:** deviceclass.h:408

`Tango::DeviceClass::get\_type <../../d4/dcd/classTango_1_1DeviceClass.html#aca6317feaf809a2f18d0c28a6ae9df53>`__

string & get\_type()

Get the TANGO device type name.

**Definition:** deviceclass.h:222

`Tango::DeviceClass::set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#af84e5725fbc6e5d97219c3cdc9169ed9>`__

void set\_type(const char \*dev\_type)

Set the TANGO device type name.

**Definition:** deviceclass.h:288

`Tango::DeviceClass::get\_db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a0782567b9fa64959d5a3e41cdc893a6a>`__

DbClass \* get\_db\_class()

Get a pointer to the associated DbClass object.

**Definition:** deviceclass.h:264

`Tango::DeviceClass::set\_default\_command <../../d4/dcd/classTango_1_1DeviceClass.html#abffecec6eb34eebaa56e8297e2999204>`__

void set\_default\_command(Command \*cmd)

Set a Tango classs default command.

**Definition:** deviceclass.h:400

`Tango::DeviceClass::get\_class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#a2a9c1c29d9d4dbf07d44630a5f729ee7>`__

MultiClassPipe \* get\_class\_pipe()

Get a pointer to the class pipes object.

**Definition:** deviceclass.h:276

`Tango::DeviceClass::get\_class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a82ce643e9668e99ab16c56f484e6284b>`__

MultiClassAttribute \* get\_class\_attr()

Get a pointer to the class attributes object.

**Definition:** deviceclass.h:270

`Tango::DeviceClass::pipe\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a09321e4257b799709d77f40ace03242a>`__

virtual void pipe\_factory()

Create all the pipes supported by this class of device.

**Definition:** deviceclass.h:145

`Tango::DeviceClass::pipe\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a2626f63ac4db19102480950a815fb549>`__

vector< Pipe \* > pipe\_list

The pipe(s) list.

**Definition:** deviceclass.h:440

`Tango::DeviceClass::db\_class <../../d4/dcd/classTango_1_1DeviceClass.html#a94b87afbec24955aca456718488485ed>`__

DbClass \* db\_class

The associated DbClass object.

**Definition:** deviceclass.h:428

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::DeviceClass::get\_name <../../d4/dcd/classTango_1_1DeviceClass.html#a0577ce350035604373496d5d1fceee39>`__

string & get\_name()

Get the TANGO device class name.

**Definition:** deviceclass.h:210

`Tango::DeviceClass::class\_pipe <../../d4/dcd/classTango_1_1DeviceClass.html#ab664e50fbdb4a0843f11477011e962f8>`__

MultiClassPipe \* class\_pipe

Pointer to the class multi pipe object.

**Definition:** deviceclass.h:436

`Tango::DeviceClass::get\_device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ad6359a7f1e9677b65102224b84d0cb98>`__

vector< DeviceImpl \* > & get\_device\_list()

Get the device object vector.

**Definition:** deviceclass.h:228

`Tango::DeviceClass::command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#ac7c054f57761e8fdf84660008d1070b5>`__

vector< Command \* > command\_list

The command(s) list.

**Definition:** deviceclass.h:420

`Tango::DeviceClass::device\_name\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a2596f49733e5dc80d52d8d240f4f83cd>`__

virtual void device\_name\_factory(vector< string > &list)

Create device(s) name list (for no database device server).

**Definition:** deviceclass.h:172

`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

This class is a class representing a pipe in the TANGO device server
pattern.

**Definition:** pipe.h:77

`Tango::DeviceClass::attribute\_factory <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__

virtual void attribute\_factory(vector< Attr \* > &)

Create all the attributes name supported by this class of device.

**Definition:** deviceclass.h:136

`Tango::Command <../../d2/d1d/classTango_1_1Command.html>`__

This class is a class representing a command in the TANGO device server
pattern.

**Definition:** command.h:83

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::DeviceClass::set\_type <../../d4/dcd/classTango_1_1DeviceClass.html#ac51857831a8313233a91ec7baa91aff1>`__

void set\_type(string &dev\_type)

Set the TANGO device type name.

**Definition:** deviceclass.h:282

`Tango::DeviceClass::doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a19e2e40c4a095e6f002fc8367d98cdff>`__

string doc\_url

The TANGO device class documentation URL.

**Definition:** deviceclass.h:412

`Tango::DeviceClass::class\_attr <../../d4/dcd/classTango_1_1DeviceClass.html#a4430e4458d46045ebd5a19ed472e2c59>`__

MultiClassAttribute \* class\_attr

Pointer to the class multi attribute object.

**Definition:** deviceclass.h:432

`Tango::DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__

Base class for all TANGO device-class class.

**Definition:** deviceclass.h:76

`Tango::DeviceClass::type <../../d4/dcd/classTango_1_1DeviceClass.html#a04a29a0cd699e1100f9d69e7b6202039>`__

string type

The TANGO device type name.

**Definition:** deviceclass.h:416

`Tango::DeviceClass::get\_command\_list <../../d4/dcd/classTango_1_1DeviceClass.html#a9e37d56d78b31cbc5c767f65c1b2117f>`__

vector< Command \* > & get\_command\_list()

Get the command object vector.

**Definition:** deviceclass.h:234

`Tango::DeviceClass::get\_doc\_url <../../d4/dcd/classTango_1_1DeviceClass.html#a66c9909cee0aba6e337d4b80ff1396c0>`__

string & get\_doc\_url()

Get the TANGO device class documentation URL.

**Definition:** deviceclass.h:216

`Tango::DeviceClass::device\_list <../../d4/dcd/classTango_1_1DeviceClass.html#add35f135439357ce2815140a6e5ebb89>`__

vector< DeviceImpl \* > device\_list

The device(s) list.

**Definition:** deviceclass.h:424

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `deviceclass.h <../../d7/dfc/deviceclass_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
