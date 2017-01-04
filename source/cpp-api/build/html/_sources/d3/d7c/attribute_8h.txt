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

`Classes <#nested-classes>`__ \| `Namespaces <#namespaces>`__ \|
`Macros <#define-members>`__ \| `Typedefs <#typedef-members>`__ \|
`Enumerations <#enum-members>`__

attribute.h File Reference

| ``#include <tango.h>``
|  ``#include <tango/server/attrdesc.h>``
|  ``#include <tango/server/fwdattrdesc.h>``
|  ``#include <tango/server/encoded_attribute.h>``
|  ``#include <functional>``
|  ``#include <time.h>``
|  ``#include <iterator>``

Include dependency graph for attribute.h:

|image1|

This graph shows which files directly or indirectly include this file:

|image2|

`Go to the source code of this
file. <../../d3/d7c/attribute_8h_source.html>`__

Classes
-------

union  

`Tango::\_Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__

 

union  

`Tango::\_Attr\_Value <../../dd/d79/unionTango_1_1__Attr__Value.html>`__

 

class  

`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

 

| This class represents a `Tango <../../de/ddf/namespaceTango.html>`__
attribute.
`More... <../../d6/dad/classTango_1_1Attribute.html#details>`__

 

struct  

`Tango::last\_attr\_value <../../de/db2/structTango_1_1last__attr__value.html>`__

 

struct  

`Tango::WantedAttr< A1, A2, R
> <../../d8/dc8/structTango_1_1WantedAttr.html>`__

 

struct  

`Tango::WantedProp< A1, A2, R
> <../../d0/d82/structTango_1_1WantedProp.html>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`CHECK\_PTR <../../d3/d7c/attribute_8h.html#a86080a0078b929bc35e2d8c044d0a4dd>`__\ (A,
B)

 

#define 

`GIVE\_ATT\_MUTEX <../../d3/d7c/attribute_8h.html#a49a84efc29860d9ab37801ffad2161aa>`__\ (A,
B, C)

 

#define 

`GIVE\_ATT\_MUTEX\_5 <../../d3/d7c/attribute_8h.html#af0f93f7328b3a53b5ecd014d616a92d1>`__\ (A,
B, C)

 

#define 

`GIVE\_USER\_ATT\_MUTEX <../../d3/d7c/attribute_8h.html#afff88d532747db2961039390b82fea31>`__\ (A,
B, C)

 

#define 

`GIVE\_USER\_ATT\_MUTEX\_5 <../../d3/d7c/attribute_8h.html#a0a7e572bb744b8fcb4db86c3e740d421>`__\ (A,
B, C)

 

#define 

`MEM\_STREAM\_2\_CORBA <../../d3/d7c/attribute_8h.html#a05862c978fd6420159002c5979f82e9b>`__\ (A,
B)

 

#define 

`REL\_ATT\_MUTEX <../../d3/d7c/attribute_8h.html#afc98311131c866e04e8eae8cffabb32c>`__\ (A,
B, C)

 

#define 

`REL\_ATT\_MUTEX\_5 <../../d3/d7c/attribute_8h.html#a3672a37cceae0d096fe1866444aca1f8>`__\ (A,
B, C)

 

#define 

`SAFE\_DELETE <../../d3/d7c/attribute_8h.html#ad45c5447fa213228e8493458c1770e91>`__\ (ptr)

 

Typedefs
--------

typedef union
`Tango::\_Attr\_CheckVal <../../d4/d1d/unionTango_1_1__Attr__CheckVal.html>`__ 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__

 

typedef union
`Tango::\_Attr\_Value <../../dd/d79/unionTango_1_1__Attr__Value.html>`__ 

`Tango::Attr\_Value <../../de/ddf/namespaceTango.html#a41a53e618e4c9135b25512260eebe538>`__

 

| typedef struct
| 
`Tango::last\_attr\_value <../../de/db2/structTango_1_1last__attr__value.html>`__ 

`Tango::LastAttrValue <../../de/ddf/namespaceTango.html#a25be46acdd9b3ae50462f1ef5044fa85>`__

 

typedef enum
`Tango::prop\_type <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__ 

`Tango::PropType <../../de/ddf/namespaceTango.html#adab12914708b27ce524f38a571bdd156>`__

 

Enumerations
------------

enum  

| `Tango::prop\_type <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055d>`__
{
| 
  `Tango::MIN\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da914c8479a1e8d46bc9883c794e65049b>`__
= 0,
| 
  `Tango::MAX\_VALUE <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dabce4729450a33c4ac0fe873058148572>`__,
| 
  `Tango::MIN\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da72712aef1c716ce755552bc40534e784>`__,
| 
  `Tango::MAX\_WARNING <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055dac9ec25306c829a964c29ddb38bbcf5ae>`__,
| 
  `Tango::MIN\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da870f38bb3472276d779767000c2e8821>`__,
| 
  `Tango::MAX\_ALARM <../../de/ddf/namespaceTango.html#a71541721209ec60301e263083462055da2316cc2dfac70c9ca231be7ba37d30d4>`__
|  }

 

Macro Definition Documentation
------------------------------

+----------------------+-----+-----+------+
| #define CHECK\_PTR   | (   |     | A,   |
+----------------------+-----+-----+------+
|                      |     |     | B    |
+----------------------+-----+-----+------+
|                      | )   |     |      |
+----------------------+-----+-----+------+

**Value:**

if (A == NULL) \\

{ \\

stringstream o; \\

o << "Data pointer for attribute " << B << " is NULL!"; \\

Except::throw\_exception(\ `API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__,o.str(),"Attribute::set\_value()");
\\

} \\

else \\

(void)0

`Tango::API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__

const char \*const API\_AttrOptProp

**Definition:** tango\_const.h:340

+----------------------------+-----+-----+------+
| #define GIVE\_ATT\_MUTEX   | (   |     | A,   |
+----------------------------+-----+-----+------+
|                            |     |     | B,   |
+----------------------------+-----+-----+------+
|                            |     |     | C    |
+----------------------------+-----+-----+------+
|                            | )   |     |      |
+----------------------------+-----+-----+------+

**Value:**

if (true) \\

{\\

Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->set\_attr\_mutex(C.get\_attr\_mutex()); \\

} \\

else \\

(void)0

+-------------------------------+-----+-----+------+
| #define GIVE\_ATT\_MUTEX\_5   | (   |     | A,   |
+-------------------------------+-----+-----+------+
|                               |     |     | B,   |
+-------------------------------+-----+-----+------+
|                               |     |     | C    |
+-------------------------------+-----+-----+------+
|                               | )   |     |      |
+-------------------------------+-----+-----+------+

**Value:**

if (true) \\

{\\

Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->set\_attr\_mutex(C.get\_attr\_mutex()); \\

} \\

else \\

(void)0

+----------------------------------+-----+-----+------+
| #define GIVE\_USER\_ATT\_MUTEX   | (   |     | A,   |
+----------------------------------+-----+-----+------+
|                                  |     |     | B,   |
+----------------------------------+-----+-----+------+
|                                  |     |     | C    |
+----------------------------------+-----+-----+------+
|                                  | )   |     |      |
+----------------------------------+-----+-----+------+

**Value:**

if (true) \\

{ \\

Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->set\_attr\_mutex(C.get\_user\_attr\_mutex()); \\

} \\

else \\

(void)0

+-------------------------------------+-----+-----+------+
| #define GIVE\_USER\_ATT\_MUTEX\_5   | (   |     | A,   |
+-------------------------------------+-----+-----+------+
|                                     |     |     | B,   |
+-------------------------------------+-----+-----+------+
|                                     |     |     | C    |
+-------------------------------------+-----+-----+------+
|                                     | )   |     |      |
+-------------------------------------+-----+-----+------+

**Value:**

if (true) \\

{ \\

Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->set\_attr\_mutex(C.get\_user\_attr\_mutex()); \\

} \\

else \\

(void)0

+---------------------------------+-----+-----+------+
| #define MEM\_STREAM\_2\_CORBA   | (   |     | A,   |
+---------------------------------+-----+-----+------+
|                                 |     |     | B    |
+---------------------------------+-----+-----+------+
|                                 | )   |     |      |
+---------------------------------+-----+-----+------+

**Value:**

if (true) \\

{ \\

string s = B.str(); \\

A =
`CORBA::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__\ (s.c\_str());
\\

B.str(""); \\

B.clear(); \\

} \\

else \\

(void)0

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__

char \* string\_dup(char \*s)

**Definition:** tango\_const.h:462

+---------------------------+-----+-----+------+
| #define REL\_ATT\_MUTEX   | (   |     | A,   |
+---------------------------+-----+-----+------+
|                           |     |     | B,   |
+---------------------------+-----+-----+------+
|                           |     |     | C    |
+---------------------------+-----+-----+------+
|                           | )   |     |      |
+---------------------------+-----+-----+------+

**Value:**

if (C.get\_attr\_serial\_model() !=
`ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__)
\\

{ \\

Tango::AttributeValue\_4 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->rel\_attr\_mutex(); \\

} \\

else \\

(void)0

`Tango::ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__

**Definition:** tango\_const.h:1119

+------------------------------+-----+-----+------+
| #define REL\_ATT\_MUTEX\_5   | (   |     | A,   |
+------------------------------+-----+-----+------+
|                              |     |     | B,   |
+------------------------------+-----+-----+------+
|                              |     |     | C    |
+------------------------------+-----+-----+------+
|                              | )   |     |      |
+------------------------------+-----+-----+------+

**Value:**

if (C.get\_attr\_serial\_model() !=
`ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__)
\\

{ \\

Tango::AttributeValue\_5 \*tmp\_ptr = &((\*A)[B]); \\

(tmp\_ptr)->rel\_attr\_mutex(); \\

} \\

else \\

(void)0

`Tango::ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__

**Definition:** tango\_const.h:1119

+------------------------+-----+-----+-------+-----+----+
| #define SAFE\_DELETE   | (   |     | ptr   | )   |    |
+------------------------+-----+-----+-------+-----+----+

**Value:**

if (release == true) \\

{ \\

if (is\_fwd\_att() == true) \\

delete [] ptr; \\

else \\

delete ptr; \\

} \\

else \\

(void)0

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `attribute.h <../../d3/d7c/attribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d0/d89/attribute_8h__incl.png
.. |image2| image:: ../../d0/d7a/attribute_8h__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
