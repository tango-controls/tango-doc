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

multiattribute.h

`Go to the documentation of this
file. <../../da/dd1/multiattribute_8h.html>`__

1 //=============================================================================

2 //

3 // file : MultiAttribute.h

4 //

5 // description : Include file for the MultiAttribute class.

6 // Each device has one object of this class. All device

7 // attribute objects are stored in this class

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

35 //

36 //=============================================================================

37 

38 #ifndef \_MULTIATTRIBUTE\_H

39 #define \_MULTIATTRIBUTE\_H

40 

41 #include <tango.h>

42 

43 namespace `Tango <../../de/ddf/namespaceTango.html>`__

44 {

45 

46 class AttrProperty;

47 class DeviceClass;

48 

`49 <../../de/d7e/structTango_1_1EventPar.html>`__ struct
`EventPar <../../de/d7e/structTango_1_1EventPar.html>`__

50 {

`51 <../../de/d7e/structTango_1_1EventPar.html#a7f8282b0fda96da968a7436431d80c4d>`__ 
long
`attr\_id <../../de/d7e/structTango_1_1EventPar.html#a7f8282b0fda96da968a7436431d80c4d>`__;

`52 <../../de/d7e/structTango_1_1EventPar.html#a96cc2d5fc3ca6f4166846014f499db4e>`__ 
vector<int>
`change <../../de/d7e/structTango_1_1EventPar.html#a96cc2d5fc3ca6f4166846014f499db4e>`__;

`53 <../../de/d7e/structTango_1_1EventPar.html#a718fed22a39807fccab5f958aa0e77f8>`__ 
vector<int>
`archive <../../de/d7e/structTango_1_1EventPar.html#a718fed22a39807fccab5f958aa0e77f8>`__;

`54 <../../de/d7e/structTango_1_1EventPar.html#a6d6102c967cc748de895ed3da36c9a37>`__ 
bool
`quality <../../de/d7e/structTango_1_1EventPar.html#a6d6102c967cc748de895ed3da36c9a37>`__;

`55 <../../de/d7e/structTango_1_1EventPar.html#a28d3f4b2042725d7e7c5e8e8ce7becf7>`__ 
vector<int>
`periodic <../../de/d7e/structTango_1_1EventPar.html#a28d3f4b2042725d7e7c5e8e8ce7becf7>`__;

`56 <../../de/d7e/structTango_1_1EventPar.html#a3e7fa324cd3f29916061fb214ad44eeb>`__ 
vector<int>
`user <../../de/d7e/structTango_1_1EventPar.html#a3e7fa324cd3f29916061fb214ad44eeb>`__;

`57 <../../de/d7e/structTango_1_1EventPar.html#a6aeb1616d5afed922b9a5a58871ab55e>`__ 
vector<int>
`att\_conf <../../de/d7e/structTango_1_1EventPar.html#a6aeb1616d5afed922b9a5a58871ab55e>`__;

`58 <../../de/d7e/structTango_1_1EventPar.html#a3853d98c41a9b22db63816f291ece906>`__ 
bool
`data\_ready <../../de/d7e/structTango_1_1EventPar.html#a3853d98c41a9b22db63816f291ece906>`__;

`59 <../../de/d7e/structTango_1_1EventPar.html#ae600a66836d594cdb317a73a2792d5c0>`__ 
bool
`dev\_intr\_change <../../de/d7e/structTango_1_1EventPar.html#ae600a66836d594cdb317a73a2792d5c0>`__;

`60 <../../de/d7e/structTango_1_1EventPar.html#ab31595ad7ebd9ab9eac44ba46932bd23>`__ 
bool
`notifd <../../de/d7e/structTango_1_1EventPar.html#ab31595ad7ebd9ab9eac44ba46932bd23>`__;

`61 <../../de/d7e/structTango_1_1EventPar.html#a1b2ea6f3cab007a367c7317e1976d548>`__ 
bool
`zmq <../../de/d7e/structTango_1_1EventPar.html#a1b2ea6f3cab007a367c7317e1976d548>`__;

62 };

63 

64 //=============================================================================

65 //

66 // The MultiAttribute class

67 //

68 //

69 // description : There is one instance of this class for each device.

70 // This is mainly a helper class. It maintains a vector

71 // of all the attribute for the device

72 //

73 //=============================================================================

74 

`87 <../../dc/d3b/classTango_1_1MultiAttribute.html>`__ class
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__

88 {

89 public:

106 
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#aafd0cc4e89eeef1687b827da72b2db34>`__\ (string
&dev\_name,\ `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*dev\_class,\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*dev);

108 

115 
`~MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#ad0f2a8d4aaff4735c71456d7ef6ba440>`__\ ();

117 

132  `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
&\ `get\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a7b35eb2625bb190393524de6971e2a84>`__\ (const
char \*attr\_name);

`142 <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__ 
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
&\ `get\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__\ (const
long ind) {return
\*(\ `attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__\ [ind]);}

155  `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
&\ `get\_w\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a3023529c543ed802a58c9e1eb2b12ff3>`__\ (const
char \*attr\_name);

`165 <../../dc/d3b/classTango_1_1MultiAttribute.html#a1e02cdb7576f1758143226efabcc374c>`__ 
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
&\ `get\_w\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a1e02cdb7576f1758143226efabcc374c>`__\ (const
long ind) {return
static\_cast<\ `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
&>(\*(`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__\ [ind]));}

179  long
`get\_attr\_ind\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a63ae2f2c06d88bb8b641a37898fdefdf>`__\ (const
char \*attr\_name);

`186 <../../dc/d3b/classTango_1_1MultiAttribute.html#a18553cf9309d7a92f2f8d1fe96b7c637>`__ 
vector<long>
&\ `get\_alarm\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a18553cf9309d7a92f2f8d1fe96b7c637>`__\ ()
{return
`alarm\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__;}

`192 <../../dc/d3b/classTango_1_1MultiAttribute.html#a1eeb8abbdd3e3a44d60410758a0d0535>`__ 
unsigned long
`get\_attr\_nb <../../dc/d3b/classTango_1_1MultiAttribute.html#a1eeb8abbdd3e3a44d60410758a0d0535>`__\ ()
{return (unsigned
long)\ `attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__.size();}

193 

`207 <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__ 
bool
`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__\ (const
char \*attr\_name) {return
`get\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a7b35eb2625bb190393524de6971e2a84>`__\ (attr\_name).\ `check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__\ ();}

`221 <../../dc/d3b/classTango_1_1MultiAttribute.html#a11c6b528f663726ccc8b39f0e0ddf967>`__ 
bool
`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a11c6b528f663726ccc8b39f0e0ddf967>`__\ (const
long ind) {return
`get\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__\ (ind).\ `check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__\ ();}

235  bool
`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a4293e644ee659ccc6796f8bf4bea8e5a>`__\ ();

244  void
`read\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a5f848b890a266861a0dced1add52fe88>`__\ (string
&status);

`251 <../../dc/d3b/classTango_1_1MultiAttribute.html#a1cb698e75ba5417305de17409fbeb1b3>`__ 
vector<Attribute \*>
&\ `get\_attribute\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a1cb698e75ba5417305de17409fbeb1b3>`__\ (){return
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__;}

253 

254 protected:

`262 <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__ 
vector<Attribute \*>
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__;

`268 <../../dc/d3b/classTango_1_1MultiAttribute.html#aa256d20e115d7c13a17d82fa7fbdd2d5>`__ 
vector<long>
`writable\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aa256d20e115d7c13a17d82fa7fbdd2d5>`__;

`274 <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__ 
vector<long>
`alarm\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__;

276 

277 public:

279 

280  void
add\_write\_value(\ `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
&);

281  void add\_attribute(string
&,\ `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*,long);

282  void add\_fwd\_attribute(string
&,\ `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*,long,\ `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \*);

283  void remove\_attribute(string &,bool);

284  vector<long> &get\_w\_attr\_list() {return
`writable\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aa256d20e115d7c13a17d82fa7fbdd2d5>`__;}

285  bool is\_att\_quality\_alarmed();

286  void get\_event\_param(vector<EventPar> &);

287  void set\_event\_param(vector<EventPar> &);

288  void add\_alarmed\_quality\_factor(string &);

289  void add\_default(vector<AttrProperty> &,string &,string &,long);

290  void
add\_attr(\ `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
\*att) {attr\_list.push\_back(att);}

291  void update(Attribute &,string &);

292  void check\_idl\_release(DeviceImpl \*);

293  bool is\_opt\_prop(const string &);

294 

295 private:

296  class MultiAttributeExt

297  {

298  };

299 

300  void concat(vector<AttrProperty> &,vector<AttrProperty>
&,vector<AttrProperty> &);

301  void add\_user\_default(vector<AttrProperty> &,vector<AttrProperty>
&);

302  void check\_associated(long,string &);

303 

304 #ifdef HAS\_UNIQUE\_PTR

305  unique\_ptr<MultiAttributeExt> ext; // Class extension

306 #else

307  MultiAttributeExt \*ext;

308 #endif

309 };

310 

311 

312 } // End of Tango namespace

313 

314 #endif // \_MULTIATTRIBUTE\_H

`Tango::MultiAttribute::alarm\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__

vector< long > alarm\_attr\_list

The list of attribute with an alarm level defined.

**Definition:** multiattribute.h:274

`Tango::MultiAttribute::get\_w\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a3023529c543ed802a58c9e1eb2b12ff3>`__

WAttribute & get\_w\_attr\_by\_name(const char \*attr\_name)

Get Writable Attribute object from its name.

`Tango::MultiAttribute::get\_attribute\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a1cb698e75ba5417305de17409fbeb1b3>`__

vector< Attribute \* > & get\_attribute\_list()

Get the vector of attribute objects.

**Definition:** multiattribute.h:251

`Tango::MultiAttribute::read\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a5f848b890a266861a0dced1add52fe88>`__

void read\_alarm(string &status)

Add alarm message to device status.

`Tango::EventPar::periodic <../../de/d7e/structTango_1_1EventPar.html#a28d3f4b2042725d7e7c5e8e8ce7becf7>`__

vector< int > periodic

**Definition:** multiattribute.h:55

`Tango::MultiAttribute::check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__

bool check\_alarm(const char \*attr\_name)

Check alarm for one attribute with a given name.

**Definition:** multiattribute.h:207

`Tango::MultiAttribute::attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__

vector< Attribute \* > attr\_list

The Attribute objects vector.

**Definition:** multiattribute.h:262

`Tango::MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__

There is one instance of this class for each device.

**Definition:** multiattribute.h:87

`Tango::EventPar::archive <../../de/d7e/structTango_1_1EventPar.html#a718fed22a39807fccab5f958aa0e77f8>`__

vector< int > archive

**Definition:** multiattribute.h:53

`Tango::EventPar::user <../../de/d7e/structTango_1_1EventPar.html#a3e7fa324cd3f29916061fb214ad44eeb>`__

vector< int > user

**Definition:** multiattribute.h:56

`Tango::EventPar::quality <../../de/d7e/structTango_1_1EventPar.html#a6d6102c967cc748de895ed3da36c9a37>`__

bool quality

**Definition:** multiattribute.h:54

`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

This class represents a Tango attribute.

**Definition:** attribute.h:163

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::EventPar <../../de/d7e/structTango_1_1EventPar.html>`__

**Definition:** multiattribute.h:49

`Tango::MultiAttribute::~MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#ad0f2a8d4aaff4735c71456d7ef6ba440>`__

~MultiAttribute()

The MultiAttribute desctructor.

`Tango::EventPar::notifd <../../de/d7e/structTango_1_1EventPar.html#ab31595ad7ebd9ab9eac44ba46932bd23>`__

bool notifd

**Definition:** multiattribute.h:60

`Tango::MultiAttribute::check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a4293e644ee659ccc6796f8bf4bea8e5a>`__

bool check\_alarm()

Check alarm on all attribute(s) with an alarm defined.

`Tango::EventPar::change <../../de/d7e/structTango_1_1EventPar.html#a96cc2d5fc3ca6f4166846014f499db4e>`__

vector< int > change

**Definition:** multiattribute.h:52

`Tango::EventPar::att\_conf <../../de/d7e/structTango_1_1EventPar.html#a6aeb1616d5afed922b9a5a58871ab55e>`__

vector< int > att\_conf

**Definition:** multiattribute.h:57

`Tango::MultiAttribute::MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#aafd0cc4e89eeef1687b827da72b2db34>`__

MultiAttribute(string &dev\_name, DeviceClass \*dev\_class, DeviceImpl
\*dev)

Create a new MultiAttribute object.

`Tango::WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__

This class represents a writable attribute.

**Definition:** w\_attribute.h:68

`Tango::EventPar::zmq <../../de/d7e/structTango_1_1EventPar.html#a1b2ea6f3cab007a367c7317e1976d548>`__

bool zmq

**Definition:** multiattribute.h:61

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::Attr <../../d5/dcd/classTango_1_1Attr.html>`__

User class to create a no dimension attribute object.

**Definition:** attrdesc.h:376

`Tango::MultiAttribute::check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a11c6b528f663726ccc8b39f0e0ddf967>`__

bool check\_alarm(const long ind)

Check alarm for one attribute from its index in the main attributes
vector.

**Definition:** multiattribute.h:221

`Tango::EventPar::attr\_id <../../de/d7e/structTango_1_1EventPar.html#a7f8282b0fda96da968a7436431d80c4d>`__

long attr\_id

**Definition:** multiattribute.h:51

`Tango::EventPar::dev\_intr\_change <../../de/d7e/structTango_1_1EventPar.html#ae600a66836d594cdb317a73a2792d5c0>`__

bool dev\_intr\_change

**Definition:** multiattribute.h:59

`Tango::EventPar::data\_ready <../../de/d7e/structTango_1_1EventPar.html#a3853d98c41a9b22db63816f291ece906>`__

bool data\_ready

**Definition:** multiattribute.h:58

`Tango::MultiAttribute::writable\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aa256d20e115d7c13a17d82fa7fbdd2d5>`__

vector< long > writable\_attr\_list

The list of writable attribute.

**Definition:** multiattribute.h:268

`Tango::Attribute::check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__

bool check\_alarm()

Check if the attribute read value is below/above the alarm level.

`Tango::MultiAttribute::get\_w\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a1e02cdb7576f1758143226efabcc374c>`__

WAttribute & get\_w\_attr\_by\_ind(const long ind)

Get Writable Attribute object from its index.

**Definition:** multiattribute.h:165

`Tango::MultiAttribute::get\_attr\_ind\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a63ae2f2c06d88bb8b641a37898fdefdf>`__

long get\_attr\_ind\_by\_name(const char \*attr\_name)

Get Attribute index into the main attribute vector from its name.

`Tango::DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__

Base class for all TANGO device-class class.

**Definition:** deviceclass.h:76

`Tango::MultiAttribute::get\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a7b35eb2625bb190393524de6971e2a84>`__

Attribute & get\_attr\_by\_name(const char \*attr\_name)

Get Attribute object from its name.

`Tango::MultiAttribute::get\_attr\_nb <../../dc/d3b/classTango_1_1MultiAttribute.html#a1eeb8abbdd3e3a44d60410758a0d0535>`__

unsigned long get\_attr\_nb()

Get attribute number.

**Definition:** multiattribute.h:192

`Tango::MultiAttribute::get\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__

Attribute & get\_attr\_by\_ind(const long ind)

Get Attribute object from its index.

**Definition:** multiattribute.h:142

`Tango::MultiAttribute::get\_alarm\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a18553cf9309d7a92f2f8d1fe96b7c637>`__

vector< long > & get\_alarm\_list()

Get list of attribute with an alarm level defined.

**Definition:** multiattribute.h:186

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `multiattribute.h <../../da/dd1/multiattribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
