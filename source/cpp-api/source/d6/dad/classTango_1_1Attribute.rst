+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Class List <../../annotated.html>`__
-  `Class Hierarchy <../../inherits.html>`__
-  `Class Members <../../functions.html>`__

`Classes <#nested-classes>`__ \| `Friends <#friends>`__ \| `List of all
members <../../da/d25/classTango_1_1Attribute-members.html>`__

Tango::Attribute Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class represents a `Tango <../../de/ddf/namespaceTango.html>`__
attribute.
`More... <../../d6/dad/classTango_1_1Attribute.html#details>`__

Inheritance diagram for Tango::Attribute:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::Attribute:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`Attribute <../../d6/dad/classTango_1_1Attribute.html#ad92e54beedf8d29d088c2f6d5d70153f>`__
(vector< AttrProperty > &prop\_list,
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &tmp\_attr, string
&dev\_name, long idx)

 

| Create a new `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object. `More... <#ad92e54beedf8d29d088c2f6d5d70153f>`__

 

Destructor

Only one desctructor is defined for this class

virtual 

`~Attribute <../../d6/dad/classTango_1_1Attribute.html#ae2740fa1ac154feb7d50a85199991f42>`__
()

 

| The attribute destructor.
`More... <#ae2740fa1ac154feb7d50a85199991f42>`__

 

Check attribute methods

Miscellaneous method returning boolean flag according to attribute state

bool 

`is\_writ\_associated <../../d6/dad/classTango_1_1Attribute.html#a716551497af0ec7e9e9f22e27480158e>`__
()

 

| Check if the attribute has an associated writable attribute.
`More... <#a716551497af0ec7e9e9f22e27480158e>`__

 

bool 

`is\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a0df58ed810063ccfef7df02ac9851a94>`__
()

 

| Check if the attribute is in minimum alarm condition .
`More... <#a0df58ed810063ccfef7df02ac9851a94>`__

 

bool 

`is\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#a2db386476f2d728513af3f3e5342f90a>`__
()

 

| Check if the attribute is in maximum alarm condition .
`More... <#a2db386476f2d728513af3f3e5342f90a>`__

 

bool 

`is\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#aafbaa179c8445f29480f8bff031920de>`__
()

 

| Check if the attribute is in minimum warning condition .
`More... <#aafbaa179c8445f29480f8bff031920de>`__

 

bool 

`is\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2cf67df0c5a155df39156301582a98c9>`__
()

 

| Check if the attribute is in maximum warning condition .
`More... <#a2cf67df0c5a155df39156301582a98c9>`__

 

bool 

`is\_rds\_alarm <../../d6/dad/classTango_1_1Attribute.html#accac04b03b14bd2bc958e06cc8f3626c>`__
()

 

| Check if the attribute is in RDS alarm condition .
`More... <#accac04b03b14bd2bc958e06cc8f3626c>`__

 

bitset< numFlags > & 

`is\_alarmed <../../d6/dad/classTango_1_1Attribute.html#aa0c62a8753eca947531af2614e13b60d>`__
()

 

| Check if the attribute has an alarm defined.
`More... <#aa0c62a8753eca947531af2614e13b60d>`__

 

bool 

`is\_polled <../../d6/dad/classTango_1_1Attribute.html#a1ca81f8abd78d54ce8540ff0ccd3c6c1>`__
()

 

| Check if the attribute is polled .
`More... <#a1ca81f8abd78d54ce8540ff0ccd3c6c1>`__

 

bool 

`check\_alarm <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__
()

 

| Check if the attribute read value is below/above the alarm level.
`More... <#a64b4a569c810258ae52a2acaadf15d55>`__

 

Get/Set object members.

These methods allow the external world to get/set
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ instance
data members

Tango::AttrWriteType 

`get\_writable <../../d6/dad/classTango_1_1Attribute.html#a55b57b9d5abf6649e0f4e7854920d967>`__
()

 

| Get the attribute writable type (RO/WO/RW).
`More... <#a55b57b9d5abf6649e0f4e7854920d967>`__

 

string & 

`get\_name <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__
()

 

| Get attribute name. `More... <#afd4dfffdf08ea4c03a58f7e83977b152>`__

 

long 

`get\_data\_type <../../d6/dad/classTango_1_1Attribute.html#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__
()

 

| Get attribute data type.
`More... <#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__

 

Tango::AttrDataFormat 

`get\_data\_format <../../d6/dad/classTango_1_1Attribute.html#a4e23df40cb9be8d4213c0f87b67e5dd9>`__
()

 

| Get attribute data format.
`More... <#a4e23df40cb9be8d4213c0f87b67e5dd9>`__

 

string & 

`get\_assoc\_name <../../d6/dad/classTango_1_1Attribute.html#abe79d1339964153ad5144a53036fcd18>`__
()

 

| Get name of the associated writable attribute.
`More... <#abe79d1339964153ad5144a53036fcd18>`__

 

long 

`get\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a362cf02710511ea952ef3f8ff85cdd30>`__
()

 

| Get index of the associated writable attribute.
`More... <#a362cf02710511ea952ef3f8ff85cdd30>`__

 

void 

`set\_assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a3327bf363691bb60a285b72c9a170f52>`__
(long val)

 

| Set index of the associated writable attribute.
`More... <#a3327bf363691bb60a285b72c9a170f52>`__

 

Tango::TimeVal & 

`get\_date <../../d6/dad/classTango_1_1Attribute.html#a0e5d5c229031b939700a38728fbe08a4>`__
()

 

| Get attribute date. `More... <#a0e5d5c229031b939700a38728fbe08a4>`__

 

void 

`set\_date <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__
(Tango::TimeVal &new\_date)

 

| Set attribute date. `More... <#a04cfcc422925f19de52814a6d89b55a4>`__

 

void 

`set\_date <../../d6/dad/classTango_1_1Attribute.html#a535e525aa3be98940bed3b229b7dd1ae>`__
(struct timeval &t)

 

| Set attribute date. `More... <#a535e525aa3be98940bed3b229b7dd1ae>`__

 

void 

`set\_date <../../d6/dad/classTango_1_1Attribute.html#a174152e7af49d2da5644ddfb701d71a9>`__
(time\_t new\_date)

 

| Set attribute date. `More... <#a174152e7af49d2da5644ddfb701d71a9>`__

 

string & 

`get\_label <../../d6/dad/classTango_1_1Attribute.html#a1851ce2e2e30add8e826c39b462fe374>`__
()

 

| Get attribute label property.
`More... <#a1851ce2e2e30add8e826c39b462fe374>`__

 

Tango::AttrQuality & 

`get\_quality <../../d6/dad/classTango_1_1Attribute.html#af1dc4310844ce3fd7bdde02f6202b5ba>`__
()

 

| Get attribute data quality.
`More... <#af1dc4310844ce3fd7bdde02f6202b5ba>`__

 

void 

`set\_quality <../../d6/dad/classTango_1_1Attribute.html#aadb400c90467daf5c1ccfd36c2ea67e3>`__
(Tango::AttrQuality qua, bool send\_event=false)

 

| Set attribute data quality.
`More... <#aadb400c90467daf5c1ccfd36c2ea67e3>`__

 

long 

`get\_data\_size <../../d6/dad/classTango_1_1Attribute.html#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__
()

 

| Get attribute data size.
`More... <#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__

 

long 

`get\_x <../../d6/dad/classTango_1_1Attribute.html#a114b20637933d5a49c6dc7f7fbcb27f4>`__
()

 

| Get attribute data size in x dimension.
`More... <#a114b20637933d5a49c6dc7f7fbcb27f4>`__

 

long 

`get\_max\_dim\_x <../../d6/dad/classTango_1_1Attribute.html#ae5cd58a02dcf1a799d1261ed5d9c7532>`__
()

 

| Get attribute maximum data size in x dimension.
`More... <#ae5cd58a02dcf1a799d1261ed5d9c7532>`__

 

long 

`get\_y <../../d6/dad/classTango_1_1Attribute.html#ae724bd70b696700c422fe83826a7ba41>`__
()

 

| Get attribute data size in y dimension.
`More... <#ae724bd70b696700c422fe83826a7ba41>`__

 

long 

`get\_max\_dim\_y <../../d6/dad/classTango_1_1Attribute.html#ab4cfab2bee3ae1523ad8a3466afc37a2>`__
()

 

| Get attribute maximum data size in y dimension.
`More... <#ab4cfab2bee3ae1523ad8a3466afc37a2>`__

 

long 

`get\_polling\_period <../../d6/dad/classTango_1_1Attribute.html#a59bbd014fb3e06e3075cceed22aa1f94>`__
()

 

| Get attribute polling period.
`More... <#a59bbd014fb3e06e3075cceed22aa1f94>`__

 

template<typename T >

void 

`get\_properties <../../d6/dad/classTango_1_1Attribute.html#ad96d3fee2727281724051fe49e3b7d98>`__
(`Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__\ <
T > &props)

 

| Get all modifiable attribute properties in one call.
`More... <#ad96d3fee2727281724051fe49e3b7d98>`__

 

template<typename T >

void 

`set\_properties <../../d6/dad/classTango_1_1Attribute.html#aa2de0a6f8fd759c0fd9d999dc248fc18>`__
(`Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__\ <
T > &props)

 

| Set all modifiable attribute properties in one call.
`More... <#aa2de0a6f8fd759c0fd9d999dc248fc18>`__

 

void 

`set\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#abc67fbc105dc54f7cb685e137074b2d9>`__
(`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__
ser\_model)

 

| Set attribute serialization model.
`More... <#abc67fbc105dc54f7cb685e137074b2d9>`__

 

`AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__ 

`get\_attr\_serial\_model <../../d6/dad/classTango_1_1Attribute.html#ac2d93bbbc1b0019e81691c14dc13bc0d>`__
()

 

| Get attribute serialization model.
`More... <#ac2d93bbbc1b0019e81691c14dc13bc0d>`__

 

void 

`set\_user\_attr\_mutex <../../d6/dad/classTango_1_1Attribute.html#a938e182ff0b0c1664b30b713f3d11d3f>`__
(omni\_mutex \*mut\_ptr)

 

| Set attribute user mutex.
`More... <#a938e182ff0b0c1664b30b713f3d11d3f>`__

 

Set attribute value methods.

These methods allows the external world to set attribute object internal
value

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
(Tango::DevShort \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevShort attribute data
type). `More... <#a21669c4af43fe5584e3f52a8012a35f6>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a0ce80d387752b5473a45cadeb4e3e8a8>`__
(Tango::DevLong \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevLong attribute data type).
`More... <#a0ce80d387752b5473a45cadeb4e3e8a8>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a15477da4adc5bf319908594236ab20c5>`__
(Tango::DevLong64 \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevLong64 attribute data
type). `More... <#a15477da4adc5bf319908594236ab20c5>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#ad90541ac064c2e2a5d5f12939babda6b>`__
(Tango::DevFloat \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevFloat attribute data
type). `More... <#ad90541ac064c2e2a5d5f12939babda6b>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a7dab9c107befc343e81a5ec852fdce73>`__
(Tango::DevDouble \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevDouble attribute data
type). `More... <#a7dab9c107befc343e81a5ec852fdce73>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a7b93f82b0ddd0fd7ad705cce8b6e0d44>`__
(Tango::DevString \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevString attribute data
type). `More... <#a7b93f82b0ddd0fd7ad705cce8b6e0d44>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a4bf3ac8ffbd3ccf57985a3ce54d5b7ca>`__
(Tango::DevBoolean \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevBoolean attribute data
type). `More... <#a4bf3ac8ffbd3ccf57985a3ce54d5b7ca>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a15cbe1942cc9ab477374e4658abffd6d>`__
(Tango::DevUShort \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevUShort attribute data
type). `More... <#a15cbe1942cc9ab477374e4658abffd6d>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#aca7f1f8e88a8f2786cfd68e726fc193b>`__
(Tango::DevUChar \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevUChar attribute data
type). `More... <#aca7f1f8e88a8f2786cfd68e726fc193b>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#af88071e8300eb9aa6e910d64b0807b4c>`__
(Tango::DevULong \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevULong attribute data
type). `More... <#af88071e8300eb9aa6e910d64b0807b4c>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#ad37028ab970c5ba3d9e81c42058101cc>`__
(Tango::DevULong64 \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevULong64 attribute data
type). `More... <#ad37028ab970c5ba3d9e81c42058101cc>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#ad58a0880f3396fd819f888d9b9973b17>`__
(Tango::DevState \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevState attribute data
type). `More... <#ad58a0880f3396fd819f888d9b9973b17>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#a52127f337bae2300bb8cd54d0f865218>`__
(Tango::DevEncoded \*p\_data, long x=1, long y=0, bool release=false)

 

| Set internal attribute value (for Tango::DevEncoded attribute data
type). `More... <#a52127f337bae2300bb8cd54d0f865218>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#ad11fc5f3271373a24226e7c15df298e7>`__
(Tango::DevString \*p\_data\_str, Tango::DevUChar \*p\_data, long size,
bool release=false)

 

| Set internal attribute value (for Tango::DevEncoded attribute data
type). `More... <#ad11fc5f3271373a24226e7c15df298e7>`__

 

void 

`set\_value <../../d6/dad/classTango_1_1Attribute.html#aadf8b5a62912164ea0bb5980b18913b6>`__
(`Tango::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
\*attr)

 

| Set internal attribute value (for Tango::DevEncoded attribute data
type). `More... <#aadf8b5a62912164ea0bb5980b18913b6>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a7d6618e1774033a5105239fb5644c518>`__
(Tango::DevShort \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevShort attribute data type).
`More... <#a7d6618e1774033a5105239fb5644c518>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ac62c704bb07d09cea79699a73f1dc23d>`__
(Tango::DevShort \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevShort attribute data type).
`More... <#ac62c704bb07d09cea79699a73f1dc23d>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ac06f7061e019528f11d64508cc75c9fa>`__
(Tango::DevLong \*p\_data, time\_t t, Tango::AttrQuality qual, long x=1,
long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevLong attribute data type).
`More... <#ac06f7061e019528f11d64508cc75c9fa>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ab3560bd76b085770dde4dfde96894508>`__
(Tango::DevLong \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevLong attribute data type).
`More... <#ab3560bd76b085770dde4dfde96894508>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ab31c4d5cc31783674b6eb6c2e35cfcb5>`__
(Tango::DevLong64 \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevLong64 attribute data type).
`More... <#ab31c4d5cc31783674b6eb6c2e35cfcb5>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a34f910bc086cee62e81c60466770b2da>`__
(Tango::DevLong64 \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevLong64 attribute data type).
`More... <#a34f910bc086cee62e81c60466770b2da>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a38000ca2f8fdf6725e42616703e87431>`__
(Tango::DevFloat \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevFloat attribute data type).
`More... <#a38000ca2f8fdf6725e42616703e87431>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#abf0e456156f281b9c0ca54d2596e13d0>`__
(Tango::DevFloat \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevFloat attribute data type).
`More... <#abf0e456156f281b9c0ca54d2596e13d0>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a329cc674e81156475dbb2aa05092fc6a>`__
(Tango::DevDouble \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevDouble attribute data type).
`More... <#a329cc674e81156475dbb2aa05092fc6a>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a9a8da26ce34873a146402e894f669f6e>`__
(Tango::DevDouble \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevDouble attribute data type).
`More... <#a9a8da26ce34873a146402e894f669f6e>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a5d36d8fd36c3d3de00002d5cc08b973c>`__
(Tango::DevString \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevString attribute data type).
`More... <#a5d36d8fd36c3d3de00002d5cc08b973c>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#af9fa522b02c2947cedc57263edab336b>`__
(Tango::DevString \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevString attribute data type).
`More... <#af9fa522b02c2947cedc57263edab336b>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#afa456c561fee62b67983de24c4318bc5>`__
(Tango::DevBoolean \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevBoolean attribute data type).
`More... <#afa456c561fee62b67983de24c4318bc5>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a656428fba37441bf251c705f51677890>`__
(Tango::DevBoolean \*p\_data, struct timeval &t, Tango::AttrQuality
qual, long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevBoolean attribute data type).
`More... <#a656428fba37441bf251c705f51677890>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ad68ca8b387ab739034d67d2f2eddc946>`__
(Tango::DevUShort \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevUShort attribute data type).
`More... <#ad68ca8b387ab739034d67d2f2eddc946>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a70b96df39e22b6226059d9a4ea6d74ef>`__
(Tango::DevUShort \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevUShort attribute data type).
`More... <#a70b96df39e22b6226059d9a4ea6d74ef>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a5e787d86c8378c65fca5a0f0f73b88b6>`__
(Tango::DevUChar \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevUChar attribute data type).
`More... <#a5e787d86c8378c65fca5a0f0f73b88b6>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a378e774b6d2b286c9fc3bea7a70cb334>`__
(Tango::DevUChar \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevUChar attribute data type).
`More... <#a378e774b6d2b286c9fc3bea7a70cb334>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#aa05a5dce384a7f85b4047670652f39db>`__
(Tango::DevULong \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevULong attribute data type).
`More... <#aa05a5dce384a7f85b4047670652f39db>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ab988c1a4a045b94423c106ad9bb70dc5>`__
(Tango::DevULong \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevULong attribute data type).
`More... <#ab988c1a4a045b94423c106ad9bb70dc5>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a32efdb0d1df4e7875a5c871b0c4da0a6>`__
(Tango::DevULong64 \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevULong64 attribute data type).
`More... <#a32efdb0d1df4e7875a5c871b0c4da0a6>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#aac67b352ca65dc640dc8e562f1dbbcd7>`__
(Tango::DevULong64 \*p\_data, struct timeval &t, Tango::AttrQuality
qual, long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevULong64 attribute data type).
`More... <#aac67b352ca65dc640dc8e562f1dbbcd7>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ad03030559ea0edca37dddd0b0d6e7322>`__
(Tango::DevState \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevState attribute data type).
`More... <#ad03030559ea0edca37dddd0b0d6e7322>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#acf43a72957fbaa9242913a228160b6d7>`__
(Tango::DevState \*p\_data, struct timeval &t, Tango::AttrQuality qual,
long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevState attribute data type).
`More... <#acf43a72957fbaa9242913a228160b6d7>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a88023ee1c06fd63427114879fa2e4493>`__
(Tango::DevEncoded \*p\_data, time\_t t, Tango::AttrQuality qual, long
x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type).
`More... <#a88023ee1c06fd63427114879fa2e4493>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a3d829d22a9cf4de68694eed25ab7577e>`__
(Tango::DevString \*p\_data\_str, Tango::DevUChar \*p\_data, long size,
time\_t t, Tango::AttrQuality qual, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type when splitted in format and data).
`More... <#a3d829d22a9cf4de68694eed25ab7577e>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#a476ad919dd1612260296276050f6aae0>`__
(Tango::DevEncoded \*p\_data, struct timeval &t, Tango::AttrQuality
qual, long x=1, long y=0, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type).
`More... <#a476ad919dd1612260296276050f6aae0>`__

 

void 

`set\_value\_date\_quality <../../d6/dad/classTango_1_1Attribute.html#ac4e21533e214cd8064b2b3979bc4cae9>`__
(Tango::DevString \*p\_data\_str, Tango::DevUChar \*p\_data, long size,
struct timeval &t, Tango::AttrQuality qual, bool release=false)

 

| Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type when splitted in data format and
data themselves). `More... <#ac4e21533e214cd8064b2b3979bc4cae9>`__

 

void 

`fire\_change\_event <../../d6/dad/classTango_1_1Attribute.html#ae023edda1e0bf70d5fda7c3dc8160351>`__
(DevFailed \*except=NULL)

 

| Fire a change event for the attribute value.
`More... <#ae023edda1e0bf70d5fda7c3dc8160351>`__

 

void 

`set\_change\_event <../../d6/dad/classTango_1_1Attribute.html#a25f157fedeb2f37741b1e41ce6422fcd>`__
(bool implemented, bool detect=true)

 

| Set a flag to indicate that the server fires change events manually,
without the polling to be started for the attribute.
`More... <#a25f157fedeb2f37741b1e41ce6422fcd>`__

 

bool 

`is\_change\_event <../../d6/dad/classTango_1_1Attribute.html#accf20392305b3fe4b4f3cf6c2158950c>`__
()

 

| Check if the change event is fired manually (without polling) for this
attribute. `More... <#accf20392305b3fe4b4f3cf6c2158950c>`__

 

bool 

`is\_check\_change\_criteria <../../d6/dad/classTango_1_1Attribute.html#a29cd3ae6823c5627969248873042ae46>`__
()

 

| Check if the change event criteria should be checked when firing the
event manually. `More... <#a29cd3ae6823c5627969248873042ae46>`__

 

void 

`fire\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ab008123b44bdb2a13e2cd2c362617e1e>`__
(DevFailed \*except=NULL)

 

| Fire an archive event for the attribute value.
`More... <#ab008123b44bdb2a13e2cd2c362617e1e>`__

 

void 

`set\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#a48b92dbec415b3f2589456fde7899175>`__
(bool implemented, bool detect=true)

 

| Set a flag to indicate that the server fires archive events manually,
without the polling to be started for the attribute If the detect
parameter is set to true, the criteria specified for the archive event
are verified and the event is only pushed if they are fulfilled.
`More... <#a48b92dbec415b3f2589456fde7899175>`__

 

bool 

`is\_archive\_event <../../d6/dad/classTango_1_1Attribute.html#ad69a25209bb113694f8aef7acb49ed80>`__
()

 

| Check if the archive event is fired manually for this attribute.
`More... <#ad69a25209bb113694f8aef7acb49ed80>`__

 

bool 

`is\_check\_archive\_criteria <../../d6/dad/classTango_1_1Attribute.html#a90a062ce092265b748d951e9b4b77250>`__
()

 

| Check if the archive event criteria should be checked when firing the
event manually. `More... <#a90a062ce092265b748d951e9b4b77250>`__

 

void 

`set\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a111d02f6d34acbd29a9b396b1ce026ad>`__
(bool implemented)

 

| Set a flag to indicate that the server fires data ready events.
`More... <#a111d02f6d34acbd29a9b396b1ce026ad>`__

 

bool 

`is\_data\_ready\_event <../../d6/dad/classTango_1_1Attribute.html#a9fbdd3152f79233b68704f3fbe295ecd>`__
()

 

| Check if the data ready event is fired for this attribute.
`More... <#a9fbdd3152f79233b68704f3fbe295ecd>`__

 

void 

`fire\_event <../../d6/dad/classTango_1_1Attribute.html#a13234bb32ef355601e45e6e942082873>`__
(vector< string > &filt\_names, vector< double > &filt\_vals, DevFailed
\*except=NULL)

 

| Fire a user event for the attribute value.
`More... <#a13234bb32ef355601e45e6e942082873>`__

 

void 

`remove\_configuration <../../d6/dad/classTango_1_1Attribute.html#afcc46b14e965bc2d0a38e4102b14af64>`__
()

 

| Remove the attribute configuration from the database.
`More... <#afcc46b14e965bc2d0a38e4102b14af64>`__

 

Set/Get attribute ranges (min\_alarm, min\_warning, max\_warning,
max\_alarm) methods.

These methods allow the external world to set attribute object
min\_alarm, min\_warning, max\_warning and max\_alarm values

template<typename T >

void 

`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a1dbbd85b4fab593886300ef5b938e0ef>`__
(const T &new\_min\_alarm)

 

| Set attribute minimum alarm.
`More... <#a1dbbd85b4fab593886300ef5b938e0ef>`__

 

void 

`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#ad19cadedfa731b8f31513dd3584cf956>`__
(char \*new\_min\_alarm)

 

void 

`set\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a29e50bf4cafda0d224c670e342a0d50c>`__
(const char \*new\_min\_alarm)

 

template<typename T >

void 

`get\_min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a19e43a51a3101a12abc55eeac83a431e>`__
(T &min\_al)

 

| Get attribute minimum alarm or throw an exception if the attribute
does not have the minimum alarm.
`More... <#a19e43a51a3101a12abc55eeac83a431e>`__

 

template<typename T >

void 

`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#aef913d2fcf95bff30086b34b8f827234>`__
(const T &new\_max\_alarm)

 

| Set attribute maximum alarm.
`More... <#aef913d2fcf95bff30086b34b8f827234>`__

 

void 

`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#a0883ff3d91d5d10f6501d244ae0af240>`__
(char \*new\_max\_alarm)

 

void 

`set\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#a2f99ee34d41eaef4fcec47143f904a46>`__
(const char \*new\_max\_alarm)

 

template<typename T >

void 

`get\_max\_alarm <../../d6/dad/classTango_1_1Attribute.html#ab4214177cfddd2acfe4c98e6fcb7b563>`__
(T &max\_al)

 

| Get attribute maximum alarm or throw an exception if the attribute
does not have the maximum alarm set.
`More... <#ab4214177cfddd2acfe4c98e6fcb7b563>`__

 

template<typename T >

void 

`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#ab2eb29b7e13a95246eb1b3211ba12d8c>`__
(const T &new\_min\_warning)

 

| Set attribute minimum warning.
`More... <#ab2eb29b7e13a95246eb1b3211ba12d8c>`__

 

void 

`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#a848f8cc8e7563c1f84c5960d72eac007>`__
(char \*new\_min\_warning)

 

void 

`set\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#a0cfba122c474f13d36dca26e23f0b424>`__
(const char \*new\_min\_warning)

 

template<typename T >

void 

`get\_min\_warning <../../d6/dad/classTango_1_1Attribute.html#a670533e5338107f959d7cf01f3e88a5a>`__
(T &min\_war)

 

| Get attribute minimum warning or throw an exception if the attribute
does not have the minimum warning set.
`More... <#a670533e5338107f959d7cf01f3e88a5a>`__

 

template<typename T >

void 

`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a54eeed935c4a62f2d4774e186201adac>`__
(const T &new\_max\_warning)

 

| Set attribute maximum warning.
`More... <#a54eeed935c4a62f2d4774e186201adac>`__

 

void 

`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#aaac81a25b5e20b80d35eade9792769fc>`__
(char \*new\_max\_warning)

 

void 

`set\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a11c4d8b3605e998f665dc9f8dc1bf5ef>`__
(const char \*new\_max\_warning)

 

template<typename T >

void 

`get\_max\_warning <../../d6/dad/classTango_1_1Attribute.html#a2246b2de4a4cb23031975fac5a17ea66>`__
(T &max\_war)

 

| Get attribute maximum warning or throw an exception if the attribute
does not have the maximum warning set.
`More... <#a2246b2de4a4cb23031975fac5a17ea66>`__

 

Protected Attributes
--------------------

Class data members

bool 

`value\_flag <../../d6/dad/classTango_1_1Attribute.html#af64882f2e722896cb9e0f66ab3a958bd>`__

 

| A flag set to true if the attribute value has been updated.
`More... <#af64882f2e722896cb9e0f66ab3a958bd>`__

 

Tango::TimeVal 

`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__

 

| The date when attribute was read.
`More... <#acb0a80ff6cb4dc37363353a939bde293>`__

 

bool 

`date <../../d6/dad/classTango_1_1Attribute.html#a481ba9ea923659f40de010804c3600ec>`__

 

| Flag set to true if the date must be set.
`More... <#a481ba9ea923659f40de010804c3600ec>`__

 

Tango::AttrQuality 

`quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__

 

| The attribute quality factor.
`More... <#a866d36253829bbe94d56715750faf4c6>`__

 

string 

`name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__

 

| The attribute name. `More... <#a7da43499f310d3a527c1463a4fcbb018>`__

 

Tango::AttrWriteType 

`writable <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__

 

| The attribute writable flag.
`More... <#a064bab1238d345d9efeddfafc0372cde>`__

 

long 

`data\_type <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__

 

| The attribute data type.
`More... <#a537c8a5b3fcf31230910963a31cf97e7>`__

 

Tango::AttrDataFormat 

`data\_format <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__

 

| The attribute data format.
`More... <#a8379945709c239b5089c002141b479ef>`__

 

long 

`max\_x <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__

 

| The attribute maximum x dimension.
`More... <#af71885f1fcffb4d46b6b8cad3520d375>`__

 

long 

`max\_y <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__

 

| The attribute maximum y dimension.
`More... <#addac2c052ae6a9ec227c574a5a8dbab4>`__

 

string 

`label <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__

 

| The attribute label. `More... <#afbad259f80fd1ebe611d2088e7b1b515>`__

 

string 

`description <../../d6/dad/classTango_1_1Attribute.html#a87011b5bf8737c50ac9dcd03d2635223>`__

 

| The attribute description.
`More... <#a87011b5bf8737c50ac9dcd03d2635223>`__

 

string 

`unit <../../d6/dad/classTango_1_1Attribute.html#ab44a3c2cbd59c9318dc252472db94b01>`__

 

| The attribute unit. `More... <#ab44a3c2cbd59c9318dc252472db94b01>`__

 

string 

`standard\_unit <../../d6/dad/classTango_1_1Attribute.html#ac6aa3f2dcfb375b83d8dc8a13fb3d34f>`__

 

| The attribute standard unit.
`More... <#ac6aa3f2dcfb375b83d8dc8a13fb3d34f>`__

 

string 

`display\_unit <../../d6/dad/classTango_1_1Attribute.html#a53ee065e6d6ad2bee616b90337787b8d>`__

 

| The attribute display unit.
`More... <#a53ee065e6d6ad2bee616b90337787b8d>`__

 

string 

`format <../../d6/dad/classTango_1_1Attribute.html#aa588971cf9c8a26a836c94c15de4d259>`__

 

| The attribute format. `More... <#aa588971cf9c8a26a836c94c15de4d259>`__

 

string 

`writable\_attr\_name <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__

 

| The name of the associated writable attribute.
`More... <#a5583f47c9b0542e915cb7fc19cb1250b>`__

 

string 

`min\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ae425ecb760c55a0be7880d8a0850a35e>`__

 

| The attribute minimum alarm level.
`More... <#ae425ecb760c55a0be7880d8a0850a35e>`__

 

string 

`max\_alarm\_str <../../d6/dad/classTango_1_1Attribute.html#ac28534e7605d151d45d1807399104476>`__

 

| The attribute maximun alarm level.
`More... <#ac28534e7605d151d45d1807399104476>`__

 

string 

`min\_value\_str <../../d6/dad/classTango_1_1Attribute.html#a5b92008335e38687b1e019b7e4f5cf89>`__

 

| The attribute minimum value.
`More... <#a5b92008335e38687b1e019b7e4f5cf89>`__

 

string 

`max\_value\_str <../../d6/dad/classTango_1_1Attribute.html#ae09dac6e118991d347cf555e97790ebf>`__

 

| The attribute maximum value.
`More... <#ae09dac6e118991d347cf555e97790ebf>`__

 

string 

`min\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#aa8dae56da901c89854855281f80585b4>`__

 

| The attribute minimun warning.
`More... <#aa8dae56da901c89854855281f80585b4>`__

 

string 

`max\_warning\_str <../../d6/dad/classTango_1_1Attribute.html#ae7508d4f6560a228e9969e2110194d80>`__

 

| The attribute maximum warning.
`More... <#ae7508d4f6560a228e9969e2110194d80>`__

 

string 

`delta\_val\_str <../../d6/dad/classTango_1_1Attribute.html#a1805001ddd756d0a930d839a444bbd1c>`__

 

| The attribute delta value RDS alarm.
`More... <#a1805001ddd756d0a930d839a444bbd1c>`__

 

string 

`delta\_t\_str <../../d6/dad/classTango_1_1Attribute.html#a33c34a6c11460c540c7b62cd9133540c>`__

 

| The attribute delta time RDS alarm.
`More... <#a33c34a6c11460c540c7b62cd9133540c>`__

 

long 

`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__

 

| Index in the main attribute vector of the associated writable
attribute (if any) `More... <#a8a0518c6215b0be3f488e9ece88eb7ec>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`min\_alarm <../../d6/dad/classTango_1_1Attribute.html#a8b02f5316431ee1e3de6a8061789feb0>`__

 

| The attribute minimum alarm in binary format.
`More... <#a8b02f5316431ee1e3de6a8061789feb0>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`max\_alarm <../../d6/dad/classTango_1_1Attribute.html#af0644d2b606ef6dfaf88431c535c726f>`__

 

| The attribute maximum alarm in binary format.
`More... <#af0644d2b606ef6dfaf88431c535c726f>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`min\_warning <../../d6/dad/classTango_1_1Attribute.html#a6f6121a07bb9790577d70a1ab9e3d0a5>`__

 

| The attribute minimum warning in binary format.
`More... <#a6f6121a07bb9790577d70a1ab9e3d0a5>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`max\_warning <../../d6/dad/classTango_1_1Attribute.html#aeef1c0723b72bc2386cc0d62aea14e44>`__

 

| The attribute maximum warning in binary format.
`More... <#aeef1c0723b72bc2386cc0d62aea14e44>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__

 

| The attribute minimum value in binary format.
`More... <#ac2d22b7b71dc4d800703c7d5400c811f>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__

 

| The attribute maximum value in binary format.
`More... <#a1e939ae411dc4e427f03db87a79b78be>`__

 

`Tango::Attr\_Value <../../de/ddf/namespaceTango.html#a41a53e618e4c9135b25512260eebe538>`__ 

`value <../../d6/dad/classTango_1_1Attribute.html#ad6a7bc5a3e07635c9d94ec686d508181>`__

 

| The attribute value. `More... <#ad6a7bc5a3e07635c9d94ec686d508181>`__

 

long 

`data\_size <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__

 

| The attribute data size.
`More... <#a03d6e131ef8a42e63934ade770c64a58>`__

 

bool 

`check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__

 

| Flag set to true if a minimum value is defined.
`More... <#a918731e8ed902c983bf5045b2e27e9f9>`__

 

bool 

`check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__

 

| Flag set to true if a maximum alarm is defined.
`More... <#a79996bd7b057dc08983b40e5aac86207>`__

 

`Tango::Attr\_CheckVal <../../de/ddf/namespaceTango.html#aab045c9a2576fa85dd8ddb71803bdf18>`__ 

`delta\_val <../../d6/dad/classTango_1_1Attribute.html#aad3e96f12716d9f1e3df93c85902cfb9>`__

 

| Authorized delta between the last written value and the actual read.
`More... <#aad3e96f12716d9f1e3df93c85902cfb9>`__

 

long 

`delta\_t <../../d6/dad/classTango_1_1Attribute.html#a0f7226cbcd313093428a764167ef5b8d>`__

 

| Delta time after which the read value must be checked again the last
written value if the attribute has an alarm on Read Different Than Set
(RDS) `More... <#a0f7226cbcd313093428a764167ef5b8d>`__

 

vector< string > 

`enum\_labels <../../d6/dad/classTango_1_1Attribute.html#a748e164f49ffe7f85132f1380cd6835e>`__

 

| Enumeration labels when the attribute data type is DevEnum.
`More... <#a748e164f49ffe7f85132f1380cd6835e>`__

 

Friends
-------

class 

`DServer <../../d6/dad/classTango_1_1Attribute.html#ac4a83d6bf023caf5fb2002b96e33cef9>`__

 

class 

`EventSupplier <../../d6/dad/classTango_1_1Attribute.html#a113a5beda9b94ad235073dd9cfd3504a>`__

 

class 

`ZmqEventSupplier <../../d6/dad/classTango_1_1Attribute.html#a89ef1b5b0e914a3b89e77cebe6dd8ce8>`__

 

Detailed Description
--------------------

This class represents a `Tango <../../de/ddf/namespaceTango.html>`__
attribute.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+-------------------------------+-----+------------------------------------------------------+-----------------+
| Tango::Attribute::Attribute   | (   | vector< AttrProperty > &                             | *prop\_list*,   |
+-------------------------------+-----+------------------------------------------------------+-----------------+
|                               |     | `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &    | *tmp\_attr*,    |
+-------------------------------+-----+------------------------------------------------------+-----------------+
|                               |     | string &                                             | *dev\_name*,    |
+-------------------------------+-----+------------------------------------------------------+-----------------+
|                               |     | long                                                 | *idx*           |
+-------------------------------+-----+------------------------------------------------------+-----------------+
|                               | )   |                                                      |                 |
+-------------------------------+-----+------------------------------------------------------+-----------------+

Create a new `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object.

Parameters
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | prop\_list   | The attribute properties list. Each property is an object of the AttrProperty class                                                                                           |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | tmp\_attr    | Temporary attribute object built from user parameters                                                                                                                         |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev\_name    | The device name                                                                                                                                                               |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | idx          | The index of the related `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object in the MultiClassAttribute vector of `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object   |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----+-----+----+-----+----+         |                                      |
| | virtual Tango::Attribute::~Attribu |                                      |
| te   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute destructor.

Member Function Documentation
-----------------------------

+---------------------------------------+-----+----+-----+----+
| bool Tango::Attribute::check\_alarm   | (   |    | )   |    |
+---------------------------------------+-----+----+-----+----+

Check if the attribute read value is below/above the alarm level.

Returns
    A boolean set to true if the attribute is in alarm condition.

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If no alarm level is defined. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------+

Referenced by
`Tango::MultiAttribute::check\_alarm() <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__.

+-----------------------------------------------+-----+-----------------+-----------------------+-----+----+
| void Tango::Attribute::fire\_archive\_event   | (   | DevFailed \*    | *except* = ``NULL``   | )   |    |
+-----------------------------------------------+-----+-----------------+-----------------------+-----+----+

Fire an archive event for the attribute value.

The event is pushed to the notification daemon. The attibute data must
be set with one of the
`Attribute::set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
or Attribute::setvalue\_date\_quality methods before fireing the event.
The event is triggered with or without the archive event criteria
depending on the configuration choosen with
`set\_archive\_event() <../../d6/dad/classTango_1_1Attribute.html#a48b92dbec415b3f2589456fde7899175>`__.
ATTENTION: The couple
`set\_value() <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
and
`fire\_archive\_event() <../../d6/dad/classTango_1_1Attribute.html#ab008123b44bdb2a13e2cd2c362617e1e>`__
needs to be protected against concurrent accesses to the same attribute.
Such an access might happen during a synchronous read or by a reading
from the polling thread. Inside all methods reading or writing commands
and attributes this protection is automatically done by the
`Tango <../../de/ddf/namespaceTango.html>`__ serialisation monitor. When
fireing archive events in your own code, you should use the
push\_archive\_event methods of the
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ class or
protect your code with the Tango::AutoTangoMonitor on your device.
Example:

{ Tango::AutoTangoMonitor synch(this); att\_temp\_seq.set\_value
(temp\_seq, 100); att\_temp\_seq.fire\_archive\_event (); }

Parameters
    +----------+---------------------------------------------------------------------+
    | except   | A pointer to a DevFailed exception to be thrown as archive event.   |
    +----------+---------------------------------------------------------------------+

+----------------------------------------------+-----+-----------------+-----------------------+-----+----+
| void Tango::Attribute::fire\_change\_event   | (   | DevFailed \*    | *except* = ``NULL``   | )   |    |
+----------------------------------------------+-----+-----------------+-----------------------+-----+----+

Fire a change event for the attribute value.

The event is pushed to the notification daemon. The attibute data must
be set with one of the
`Attribute::set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
or Attribute::setvalue\_date\_quality methods before fireing the event.
The event is triggered with or without the change event criteria
depending on the configuration choosen with
`set\_change\_event() <../../d6/dad/classTango_1_1Attribute.html#a25f157fedeb2f37741b1e41ce6422fcd>`__.
ATTENTION: The couple
`set\_value() <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
and
`fire\_change\_event() <../../d6/dad/classTango_1_1Attribute.html#ae023edda1e0bf70d5fda7c3dc8160351>`__
needs to be protected against concurrent accesses to the same attribute.
Such an access might happen during a synchronous read or by a reading
from the polling thread. Inside all methods reading or writing commands
and attributes this protection is automatically done by the
`Tango <../../de/ddf/namespaceTango.html>`__ serialisation monitor. When
fireing change events in your own code, you should use the
push\_change\_event methods of the
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ class or
protect your code with the Tango::AutoTangoMonitor on your device.
Example:

{ Tango::AutoTangoMonitor synch(this); att\_temp\_seq.set\_value
(temp\_seq, 100); att\_temp\_seq.fire\_archive\_event (); }

Parameters
    +----------+---------------------------------------------------------------------+
    | except   | A pointer to a DevFailed exception to be thrown as archive event.   |
    +----------+---------------------------------------------------------------------+

+--------------------------------------+-----+-----------------------+------------------------+
| void Tango::Attribute::fire\_event   | (   | vector< string > &    | *filt\_names*,         |
+--------------------------------------+-----+-----------------------+------------------------+
|                                      |     | vector< double > &    | *filt\_vals*,          |
+--------------------------------------+-----+-----------------------+------------------------+
|                                      |     | DevFailed \*          | *except* = ``NULL``    |
+--------------------------------------+-----+-----------------------+------------------------+
|                                      | )   |                       |                        |
+--------------------------------------+-----+-----------------------+------------------------+

Fire a user event for the attribute value.

The event is pushed to the notification daemon. The attibute data must
be set with one of the
`Attribute::set\_value <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
or Attribute::setvalue\_date\_quality methods before fireing the event.
ATTENTION: The couple
`set\_value() <../../d6/dad/classTango_1_1Attribute.html#a21669c4af43fe5584e3f52a8012a35f6>`__
and
`fire\_event() <../../d6/dad/classTango_1_1Attribute.html#a13234bb32ef355601e45e6e942082873>`__
needs to be protected against concurrent accesses to the same attribute.
Such an access might happen during a synchronous read or by a reading
from the polling thread. Inside all methods reading or writing commands
and attributes this protection is automatically done by the
`Tango <../../de/ddf/namespaceTango.html>`__ serialisation monitor. When
fireing archive events in your own code, you should use the push\_event
methods of the
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ class or
protect your code with the Tango::AutoTangoMonitor on your device.
Example:

{ Tango::AutoTangoMonitor synch(this); att\_temp\_seq.set\_value
(temp\_seq, 100); att\_temp\_seq.fire\_event (); }

Parameters
    +---------------+---------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                          |
    +---------------+---------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                             |
    +---------------+---------------------------------------------------------------------+
    | except        | A pointer to a DevFailed exception to be thrown as archive event.   |
    +---------------+---------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | long Tango::Attribute::get\_assoc\ |                                      |
| _ind   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get index of the associated writable attribute.

Returns
    The index in the main attribute vector of the associated writable
    attribute

References
`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+----+-----+----+   |                                      |
| | string& Tango::Attribute::get\_ass |                                      |
| oc\_name   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get name of the associated writable attribute.

Returns
    The associated writable attribute name

References
`writable\_attr\_name <../../d6/dad/classTango_1_1Attribute.html#a5583f47c9b0542e915cb7fc19cb1250b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
| | `AttrSerialModel <../../de/ddf/nam |                                      |
| espaceTango.html#a204027cbeaf9340dad |                                      |
| 05439c8f5ecadc>`__ Tango::Attribute: |                                      |
| :get\_attr\_serial\_model   | (   |  |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute serialization model.

Get the attribute serialization model

Returns
    The attribute serialization model

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | Tango::AttrDataFormat Tango::Attri |                                      |
| bute::get\_data\_format   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data format.

Returns
    The attribute data format

References
`data\_format <../../d6/dad/classTango_1_1Attribute.html#a8379945709c239b5089c002141b479ef>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | long Tango::Attribute::get\_data\_ |                                      |
| size   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data size.

Returns
    The attribute data size

References
`data\_size <../../d6/dad/classTango_1_1Attribute.html#a03d6e131ef8a42e63934ade770c64a58>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | long Tango::Attribute::get\_data\_ |                                      |
| type   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data type.

Returns
    The attribute data type

References
`data\_type <../../d6/dad/classTango_1_1Attribute.html#a537c8a5b3fcf31230910963a31cf97e7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----+-----+----+  |                                      |
| | Tango::TimeVal& Tango::Attribute:: |                                      |
| get\_date   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute date.

Returns
    The attribute date

References
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+----+-----+----+         |                                      |
| | string& Tango::Attribute::get\_lab |                                      |
| el   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute label property.

Returns
    The attribute label

References
`label <../../d6/dad/classTango_1_1Attribute.html#afbad259f80fd1ebe611d2088e7b1b515>`__.

template<typename T >

+------------------------------------------+-----+--------+-------------+-----+----+
| void Tango::Attribute::get\_max\_alarm   | (   | T &    | *max\_al*   | )   |    |
+------------------------------------------+-----+--------+-------------+-----+----+

Get attribute maximum alarm or throw an exception if the attribute does
not have the maximum alarm set.

Parameters
    +-----------+------------------------------------------------------------------------------------+
    | max\_al   | Reference to a variable which value will be set to the attribute's maximum alarm   |
    +-----------+------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | long Tango::Attribute::get\_max\_d |                                      |
| im\_x   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute maximum data size in x dimension.

Returns
    The attribute maximum data size in x dimension. Set to 1 for scalar
    attribute

References
`max\_x <../../d6/dad/classTango_1_1Attribute.html#af71885f1fcffb4d46b6b8cad3520d375>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | long Tango::Attribute::get\_max\_d |                                      |
| im\_y   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute maximum data size in y dimension.

Returns
    The attribute maximum data size in y dimension. Set to 0 for scalar
    and spectrum attribute

References
`max\_y <../../d6/dad/classTango_1_1Attribute.html#addac2c052ae6a9ec227c574a5a8dbab4>`__.

template<typename T >

+--------------------------------------------+-----+--------+--------------+-----+----+
| void Tango::Attribute::get\_max\_warning   | (   | T &    | *max\_war*   | )   |    |
+--------------------------------------------+-----+--------+--------------+-----+----+

Get attribute maximum warning or throw an exception if the attribute
does not have the maximum warning set.

Parameters
    +------------+--------------------------------------------------------------------------------------+
    | max\_war   | Reference to a variable which value will be set to the attribute's maximum warning   |
    +------------+--------------------------------------------------------------------------------------+

template<typename T >

+------------------------------------------+-----+--------+-------------+-----+----+
| void Tango::Attribute::get\_min\_alarm   | (   | T &    | *min\_al*   | )   |    |
+------------------------------------------+-----+--------+-------------+-----+----+

Get attribute minimum alarm or throw an exception if the attribute does
not have the minimum alarm.

Parameters
    +-----------+------------------------------------------------------------------------------------+
    | min\_al   | Reference to a variable which value will be set to the attribute's minimum alarm   |
    +-----------+------------------------------------------------------------------------------------+

template<typename T >

+--------------------------------------------+-----+--------+--------------+-----+----+
| void Tango::Attribute::get\_min\_warning   | (   | T &    | *min\_war*   | )   |    |
+--------------------------------------------+-----+--------+--------------+-----+----+

Get attribute minimum warning or throw an exception if the attribute
does not have the minimum warning set.

Parameters
    +------------+--------------------------------------------------------------------------------------+
    | min\_war   | Reference to a variable which value will be set to the attribute's minimum warning   |
    +------------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | string& Tango::Attribute::get\_nam |                                      |
| e   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute name.

Returns
    The attribute name

References
`name <../../d6/dad/classTango_1_1Attribute.html#a7da43499f310d3a527c1463a4fcbb018>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----+-----+----+  |                                      |
| | long Tango::Attribute::get\_pollin |                                      |
| g\_period   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute polling period.

Returns
    The attribute polling period in mS. Set to 0 when the attribute is
    not polled

template<typename T >

+------------------------------------------+-----+--------------------------------------------------------------------------------------+-----------+-----+----+
| void Tango::Attribute::get\_properties   | (   | `Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__\ < T > &    | *props*   | )   |    |
+------------------------------------------+-----+--------------------------------------------------------------------------------------+-----------+-----+----+

Get all modifiable attribute properties in one call.

This method initializes the members of a
`MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__ object
with the modifiable attribute properties values

Parameters
    +---------+-------------------------------------------------------------------------------+
    | props   | A `MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__ object.   |
    +---------+-------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | Tango::AttrQuality& Tango::Attribu |                                      |
| te::get\_quality   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data quality.

Returns
    The attribute data quality

References
`quality <../../d6/dad/classTango_1_1Attribute.html#a866d36253829bbe94d56715750faf4c6>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | Tango::AttrWriteType Tango::Attrib |                                      |
| ute::get\_writable   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the attribute writable type (RO/WO/RW).

Returns
    The attribute write type.

References
`writable <../../d6/dad/classTango_1_1Attribute.html#a064bab1238d345d9efeddfafc0372cde>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+----+-----+----+                |                                      |
| | long Tango::Attribute::get\_x   |  |                                      |
| (   |    | )   |    |                |                                      |
| +---------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data size in x dimension.

Returns
    The attribute data size in x dimension. Set to 1 for scalar
    attribute

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | inline                               |
| ----+----+-----+----+                |                                      |
| | long Tango::Attribute::get\_y   |  |                                      |
| (   |    | )   |    |                |                                      |
| +---------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute data size in y dimension.

Returns
    The attribute data size in y dimension. Set to 0 for scalar and
    spectrum attribute

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
| | bitset<numFlags>& Tango::Attribute |                                      |
| ::is\_alarmed   | (   |    | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+----+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute has an alarm defined.

This method returns a set of bits. Each alarm type is defined by one
bit.

Returns
    A bitset. Each bit is set if the coresponding alarm is on

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | bool Tango::Attribute::is\_archive |                                      |
| \_event   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the archive event is fired manually for this attribute.

Returns
    A boolean set to true if a manual fire archive event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | bool Tango::Attribute::is\_change\ |                                      |
| _event   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the change event is fired manually (without polling) for this
attribute.

Returns
    A boolean set to true if a manual fire change event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | bool Tango::Attribute::is\_check\_ |                                      |
| archive\_criteria   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the archive event criteria should be checked when firing the
event manually.

Returns
    A boolean set to true if a archive event criteria will be checked.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | bool Tango::Attribute::is\_check\_ |                                      |
| change\_criteria   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the change event criteria should be checked when firing the
event manually.

Returns
    A boolean set to true if a change event criteria will be checked.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | bool Tango::Attribute::is\_data\_r |                                      |
| eady\_event   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the data ready event is fired for this attribute.

Returns
    A boolean set to true if a fire data ready event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | bool Tango::Attribute::is\_max\_al |                                      |
| arm   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is in maximum alarm condition .

Returns
    A boolean set to true if the attribute is in alarm condition (read
    value above the max. alarm).

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | bool Tango::Attribute::is\_max\_wa |                                      |
| rning   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is in maximum warning condition .

Returns
    A boolean set to true if the attribute is in warning condition (read
    value above the max. warning).

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | bool Tango::Attribute::is\_min\_al |                                      |
| arm   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is in minimum alarm condition .

Returns
    A boolean set to true if the attribute is in alarm condition (read
    value below the min. alarm).

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------+-----+----+-----+----+      |                                      |
| | bool Tango::Attribute::is\_min\_wa |                                      |
| rning   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is in minimum warning condition .

Returns
    A boolean set to true if the attribute is in warning condition (read
    value below the min. warning).

+-------------------------------------+-----+----+-----+----+
| bool Tango::Attribute::is\_polled   | (   |    | )   |    |
+-------------------------------------+-----+----+-----+----+

Check if the attribute is polled .

Returns
    A boolean set to true if the attribute is polled.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+----+-----+----+        |                                      |
| | bool Tango::Attribute::is\_rds\_al |                                      |
| arm   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute is in RDS alarm condition .

Returns
    A boolean set to true if the attribute is in RDS condition (Read
    Different than Set).

+-----------------------------------------------+-----+----+-----+----+
| bool Tango::Attribute::is\_writ\_associated   | (   |    | )   |    |
+-----------------------------------------------+-----+----+-----+----+

Check if the attribute has an associated writable attribute.

This method returns a boolean set to true if the attribute has a
writable attribute associated to it.

Returns
    A boolean set to true if there is an associated writable attribute

+------------------------------------------------+-----+----+-----+----+
| void Tango::Attribute::remove\_configuration   | (   |    | )   |    |
+------------------------------------------------+-----+----+-----+----+

Remove the attribute configuration from the database.

This method can be used to clean-up all the configuration of an
attribute to come back to its default values or the remove all
configuration of a dynamic attribute before deleting it.

The method removes all configured attribute properties and removes the
attribute from the list of polled attributes.

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | In case of database access problems. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----------+-----+---------+-------- |                                      |
| ----------------+                    |                                      |
| | void Tango::Attribute::set\_archiv |                                      |
| e\_event   | (   | bool    | *implem |                                      |
| ented*,         |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+-------- |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|            |     | bool    | *detect |                                      |
| * = ``true``    |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+-------- |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
|            | )   |         |         |                                      |
|                 |                    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+---------+-------- |                                      |
| ----------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires archive events manually,
without the polling to be started for the attribute If the detect
parameter is set to true, the criteria specified for the archive event
are verified and the event is only pushed if they are fulfilled.

If detect is set to false the event is fired without any value checking!

Parameters
    +---------------+-------------------------------------------------------------------------------+
    | implemented   | True when the server fires archive events manually.                           |
    +---------------+-------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the archive event properties when set to true.   |
    +---------------+-------------------------------------------------------------------------------+

References
`Tango::last\_attr\_value::err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__,
and
`Tango::last\_attr\_value::quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------+---------+-- |                                      |
| ---+----+                            |                                      |
| | void Tango::Attribute::set\_assoc\ |                                      |
| _ind   | (   | long    | *val*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------+---------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set index of the associated writable attribute.

Parameters
    +-------+-----------------------------------------------------------------------------------+
    | val   | The new index in the main attribute vector of the associated writable attribute   |
    +-------+-----------------------------------------------------------------------------------+

References
`assoc\_ind <../../d6/dad/classTango_1_1Attribute.html#a8a0518c6215b0be3f488e9ece88eb7ec>`__.

+---------------------------------------------------+-----+---------------------------------------------------------------------------------------------+----------------+-----+----+
| void Tango::Attribute::set\_attr\_serial\_model   | (   | `AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__    | *ser\_model*   | )   |    |
+---------------------------------------------------+-----+---------------------------------------------------------------------------------------------+----------------+-----+----+

Set attribute serialization model.

This method allows the user to choose the attribute serialization model.

Parameters
    +--------------+--------------------------------------------------------------------------------------------------------------------------+
    | ser\_model   | The new serialisation model. The serialization model must be one of ATTR\_BY\_KERNEL, ATTR\_BY\_USER or ATTR\_NO\_SYNC   |
    +--------------+--------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+--------- |                                      |
| ---------------+                     |                                      |
| | void Tango::Attribute::set\_change |                                      |
| \_event   | (   | bool    | *impleme |                                      |
| nted*,         |                     |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| ---------------+                     |                                      |
| |                                    |                                      |
|           |     | bool    | *detect* |                                      |
|  = ``true``    |                     |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| ---------------+                     |                                      |
| |                                    |                                      |
|           | )   |         |          |                                      |
|                |                     |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| ---------------+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires change events manually,
without the polling to be started for the attribute.

If the detect parameter is set to true, the criteria specified for the
change event are verified and the event is only pushed if they are
fulfilled. If detect is set to false the event is fired without any
value checking!

Parameters
    +---------------+------------------------------------------------------------------------------+
    | implemented   | True when the server fires change events manually.                           |
    +---------------+------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the change event properties when set to true.   |
    +---------------+------------------------------------------------------------------------------+

References
`Tango::last\_attr\_value::err <../../de/db2/structTango_1_1last__attr__value.html#af487fd6770e15dc987c30a671d0799ce>`__,
and
`Tango::last\_attr\_value::quality <../../de/db2/structTango_1_1last__attr__value.html#a704042371c2de3dcb8814e71f8888eec>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+---------+---- |                                      |
| -------------+-----+----+            |                                      |
| | void Tango::Attribute::set\_data\_ |                                      |
| ready\_event   | (   | bool    | *im |                                      |
| plemented*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+---------+---- |                                      |
| -------------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires data ready events.

Parameters
    +---------------+------------------------------------------------------+
    | implemented   | True when the server fires change events manually.   |
    +---------------+------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -+-----+---------------------+------ |                                      |
| ---------+-----+----+                |                                      |
| | void Tango::Attribute::set\_date   |                                      |
|  | (   | Tango::TimeVal &    | *new\ |                                      |
| _date*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| -+-----+---------------------+------ |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute date.

Parameters
    +-------------+----------------------+
    | new\_date   | The attribute date   |
    +-------------+----------------------+

References
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -+-----+---------------------+------ |                                      |
| -+-----+----+                        |                                      |
| | void Tango::Attribute::set\_date   |                                      |
|  | (   | struct timeval &    | *t*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| -+-----+---------------------+------ |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute date.

Parameters
    +-----+----------------------+
    | t   | The attribute date   |
    +-----+----------------------+

References
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -+-----+------------+--------------- |                                      |
| +-----+----+                         |                                      |
| | void Tango::Attribute::set\_date   |                                      |
|  | (   | time\_t    | *new\_date*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -+-----+------------+--------------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute date.

Parameters
    +-------------+----------------------+
    | new\_date   | The attribute date   |
    +-------------+----------------------+

References
`when <../../d6/dad/classTango_1_1Attribute.html#acb0a80ff6cb4dc37363353a939bde293>`__.

template<typename T >

+------------------------------------------+-----+--------------+---------------------+-----+----+
| void Tango::Attribute::set\_max\_alarm   | (   | const T &    | *new\_max\_alarm*   | )   |    |
+------------------------------------------+-----+--------------+---------------------+-----+----+

Set attribute maximum alarm.

This method sets the attribute maximum alarm.

Parameters
    +-------------------+-----------------------------------------+
    | new\_max\_alarm   | The new attribute maximum alarm value   |
    +-------------------+-----------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------+-----+------------+---------------------+-----+----+
| void Tango::Attribute::set\_max\_alarm   | (   | char \*    | *new\_max\_alarm*   | )   |    |
+------------------------------------------+-----+------------+---------------------+-----+----+

+------------------------------------------+-----+------------------+---------------------+-----+----+
| void Tango::Attribute::set\_max\_alarm   | (   | const char \*    | *new\_max\_alarm*   | )   |    |
+------------------------------------------+-----+------------------+---------------------+-----+----+

template<typename T >

+--------------------------------------------+-----+--------------+-----------------------+-----+----+
| void Tango::Attribute::set\_max\_warning   | (   | const T &    | *new\_max\_warning*   | )   |    |
+--------------------------------------------+-----+--------------+-----------------------+-----+----+

Set attribute maximum warning.

This method sets the attribute maximum warning.

Parameters
    +---------------------+-------------------------------------------+
    | new\_max\_warning   | The new attribute maximum warning value   |
    +---------------------+-------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------------+-----+------------+-----------------------+-----+----+
| void Tango::Attribute::set\_max\_warning   | (   | char \*    | *new\_max\_warning*   | )   |    |
+--------------------------------------------+-----+------------+-----------------------+-----+----+

+--------------------------------------------+-----+------------------+-----------------------+-----+----+
| void Tango::Attribute::set\_max\_warning   | (   | const char \*    | *new\_max\_warning*   | )   |    |
+--------------------------------------------+-----+------------------+-----------------------+-----+----+

template<typename T >

+------------------------------------------+-----+--------------+---------------------+-----+----+
| void Tango::Attribute::set\_min\_alarm   | (   | const T &    | *new\_min\_alarm*   | )   |    |
+------------------------------------------+-----+--------------+---------------------+-----+----+

Set attribute minimum alarm.

This method sets the attribute minimum alarm.

Parameters
    +-------------------+-----------------------------------------+
    | new\_min\_alarm   | The new attribute minimum alarm value   |
    +-------------------+-----------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------+-----+------------+---------------------+-----+----+
| void Tango::Attribute::set\_min\_alarm   | (   | char \*    | *new\_min\_alarm*   | )   |    |
+------------------------------------------+-----+------------+---------------------+-----+----+

+------------------------------------------+-----+------------------+---------------------+-----+----+
| void Tango::Attribute::set\_min\_alarm   | (   | const char \*    | *new\_min\_alarm*   | )   |    |
+------------------------------------------+-----+------------------+---------------------+-----+----+

template<typename T >

+--------------------------------------------+-----+--------------+-----------------------+-----+----+
| void Tango::Attribute::set\_min\_warning   | (   | const T &    | *new\_min\_warning*   | )   |    |
+--------------------------------------------+-----+--------------+-----------------------+-----+----+

Set attribute minimum warning.

This method sets the attribute minimum warning.

Parameters
    +---------------------+-------------------------------------------+
    | new\_min\_warning   | The new attribute minimum warning value   |
    +---------------------+-------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------------+-----+------------+-----------------------+-----+----+
| void Tango::Attribute::set\_min\_warning   | (   | char \*    | *new\_min\_warning*   | )   |    |
+--------------------------------------------+-----+------------+-----------------------+-----+----+

+--------------------------------------------+-----+------------------+-----------------------+-----+----+
| void Tango::Attribute::set\_min\_warning   | (   | const char \*    | *new\_min\_warning*   | )   |    |
+--------------------------------------------+-----+------------------+-----------------------+-----+----+

template<typename T >

+------------------------------------------+-----+--------------------------------------------------------------------------------------+-----------+-----+----+
| void Tango::Attribute::set\_properties   | (   | `Tango::MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__\ < T > &    | *props*   | )   |    |
+------------------------------------------+-----+--------------------------------------------------------------------------------------+-----------+-----+----+

Set all modifiable attribute properties in one call.

This method sets the modifiable attribute properties with the values
provided as members of MultiAttrProps object

Parameters
    +---------+-------------------------------------------------------------------------------+
    | props   | A `MultiAttrProp <../../d7/d41/classTango_1_1MultiAttrProp.html>`__ object.   |
    +---------+-------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+------------------------------+
| void Tango::Attribute::set\_quality   | (   | Tango::AttrQuality    | *qua*,                       |
+---------------------------------------+-----+-----------------------+------------------------------+
|                                       |     | bool                  | *send\_event* = ``false``    |
+---------------------------------------+-----+-----------------------+------------------------------+
|                                       | )   |                       |                              |
+---------------------------------------+-----+-----------------------+------------------------------+

Set attribute data quality.

Parameters
    +---------------+--------------------------------------------------------+
    | qua           | The new attribute data quality                         |
    +---------------+--------------------------------------------------------+
    | send\_event   | Boolean set to true if a change event should be sent   |
    +---------------+--------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+--------------- |                                      |
| ----+--------------+-----+----+      |                                      |
| | void Tango::Attribute::set\_user\_ |                                      |
| attr\_mutex   | (   | omni\_mutex \* |                                      |
|     | *mut\_ptr*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ----+--------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute user mutex.

This method allows the user to give to the attribute object the pointer
to the omni\_mutex used to protect its buffer. The mutex has to be
locked when passed to this method. The
`Tango <../../de/ddf/namespaceTango.html>`__ kernel will unlock it when
the data will be transferred to the client.

Parameters
    +------------+--------------------------+
    | mut\_ptr   | The user mutex pointer   |
    +------------+--------------------------+

+-------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevShort \*    | *p\_data*,               |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *x* = ``1``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *y* = ``0``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | bool                  | *release* = ``false``    |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     | )   |                       |                          |
+-------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value (for Tango::DevShort attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevLong \*    | *p\_data*,               |
+-------------------------------------+-----+----------------------+--------------------------+
|                                     |     | long                 | *x* = ``1``,             |
+-------------------------------------+-----+----------------------+--------------------------+
|                                     |     | long                 | *y* = ``0``,             |
+-------------------------------------+-----+----------------------+--------------------------+
|                                     |     | bool                 | *release* = ``false``    |
+-------------------------------------+-----+----------------------+--------------------------+
|                                     | )   |                      |                          |
+-------------------------------------+-----+----------------------+--------------------------+

Set internal attribute value (for Tango::DevLong attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevLong64 \*    | *p\_data*,               |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *x* = ``1``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *y* = ``0``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | bool                   | *release* = ``false``    |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     | )   |                        |                          |
+-------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value (for Tango::DevLong64 attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevFloat \*    | *p\_data*,               |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *x* = ``1``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *y* = ``0``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | bool                  | *release* = ``false``    |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     | )   |                       |                          |
+-------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value (for Tango::DevFloat attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevDouble \*    | *p\_data*,               |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *x* = ``1``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *y* = ``0``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | bool                   | *release* = ``false``    |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     | )   |                        |                          |
+-------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value (for Tango::DevDouble attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevString \*    | *p\_data*,               |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *x* = ``1``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *y* = ``0``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | bool                   | *release* = ``false``    |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     | )   |                        |                          |
+-------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value (for Tango::DevString attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevBoolean \*    | *p\_data*,               |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *x* = ``1``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *y* = ``0``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | bool                    | *release* = ``false``    |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     | )   |                         |                          |
+-------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value (for Tango::DevBoolean attribute data
type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevUShort \*    | *p\_data*,               |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *x* = ``1``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *y* = ``0``,             |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | bool                   | *release* = ``false``    |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     | )   |                        |                          |
+-------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value (for Tango::DevUShort attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevUChar \*    | *p\_data*,               |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *x* = ``1``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *y* = ``0``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | bool                  | *release* = ``false``    |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     | )   |                       |                          |
+-------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value (for Tango::DevUChar attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevULong \*    | *p\_data*,               |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *x* = ``1``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *y* = ``0``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | bool                  | *release* = ``false``    |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     | )   |                       |                          |
+-------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value (for Tango::DevULong attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevULong64 \*    | *p\_data*,               |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *x* = ``1``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *y* = ``0``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | bool                    | *release* = ``false``    |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     | )   |                         |                          |
+-------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value (for Tango::DevULong64 attribute data
type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevState \*    | *p\_data*,               |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *x* = ``1``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | long                  | *y* = ``0``,             |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     |     | bool                  | *release* = ``false``    |
+-------------------------------------+-----+-----------------------+--------------------------+
|                                     | )   |                       |                          |
+-------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value (for Tango::DevState attribute data type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevEncoded \*    | *p\_data*,               |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *x* = ``1``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | long                    | *y* = ``0``,             |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     |     | bool                    | *release* = ``false``    |
+-------------------------------------+-----+-------------------------+--------------------------+
|                                     | )   |                         |                          |
+-------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value (for Tango::DevEncoded attribute data
type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value   | (   | Tango::DevString \*    | *p\_data\_str*,          |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | Tango::DevUChar \*     | *p\_data*,               |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | long                   | *size*,                  |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     |     | bool                   | *release* = ``false``    |
+-------------------------------------+-----+------------------------+--------------------------+
|                                     | )   |                        |                          |
+-------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value (for Tango::DevEncoded attribute data
type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data\_str   | The attribute string part read value                                                                                            |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | The attribute raw data part read value                                                                                          |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the attribute raw data part                                                                                             |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------+-----+--------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::Attribute::set\_value   | (   | `Tango::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__ \*    | *attr*   | )   |    |
+-------------------------------------+-----+--------------------------------------------------------------------------------------+----------+-----+----+

Set internal attribute value (for Tango::DevEncoded attribute data
type).

This method stores the attribute read value inside the object. This data
will be returned to the caller. This method also stores the date when it
is called and initialise the attribute quality factor.

Parameters
    +--------+--------------------------------------------------------------------------------------------+
    | attr   | Handle to `EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__ object   |
    +--------+--------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevShort \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevShort attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevShort \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevShort attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevLong \*     | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevLong attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevLong \*     | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevLong attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevLong64 \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | time\_t                | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevLong64 attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevLong64 \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | struct timeval &       | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevLong64 attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevFloat \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevFloat attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevFloat \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevFloat attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevDouble \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | time\_t                | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevDouble attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevDouble \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | struct timeval &       | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevDouble attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevString \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | time\_t                | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevString attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevString \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | struct timeval &       | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevString attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevBoolean \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | time\_t                 | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevBoolean attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevBoolean \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | struct timeval &        | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevBoolean attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevUShort \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | time\_t                | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevUShort attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevUShort \*    | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | struct timeval &       | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *x* = ``1``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *y* = ``0``,             |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevUShort attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevUChar \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevUChar attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevUChar \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevUChar attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevULong \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevULong attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevULong \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevULong attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevULong64 \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | time\_t                 | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevULong64 attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevULong64 \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | struct timeval &        | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevULong64 attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevState \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | time\_t               | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevState attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevState \*    | *p\_data*,               |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | struct timeval &      | *t*,                     |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | Tango::AttrQuality    | *qual*,                  |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *x* = ``1``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | long                  | *y* = ``0``,             |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    |     | bool                  | *release* = ``false``    |
+----------------------------------------------------+-----+-----------------------+--------------------------+
|                                                    | )   |                       |                          |
+----------------------------------------------------+-----+-----------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevState attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevEncoded \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | time\_t                 | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevString \*    | *p\_data\_str*,          |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::DevUChar \*     | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *size*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | time\_t                | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type when splitted in format and data).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data\_str   | The attribute coded format string                                                                                               |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | The attribute raw data                                                                                                          |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the attribute raw data part                                                                                             |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t              | The date                                                                                                                        |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual           | The attribute quality factor                                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevEncoded \*    | *p\_data*,               |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | struct timeval &        | *t*,                     |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality      | *qual*,                  |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *x* = ``1``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | long                    | *y* = ``0``,             |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    |     | bool                    | *release* = ``false``    |
+----------------------------------------------------+-----+-------------------------+--------------------------+
|                                                    | )   |                         |                          |
+----------------------------------------------------+-----+-------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data   | The attribute read value                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | t         | The date                                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                                                                    |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | x         | The attribute x length. Default value is 1                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | y         | The attribute y length. Default value is 0                                                                                      |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+
    | release   | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::Attribute::set\_value\_date\_quality   | (   | Tango::DevString \*    | *p\_data\_str*,          |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::DevUChar \*     | *p\_data*,               |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | long                   | *size*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | struct timeval &       | *t*,                     |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | Tango::AttrQuality     | *qual*,                  |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    |     | bool                   | *release* = ``false``    |
+----------------------------------------------------+-----+------------------------+--------------------------+
|                                                    | )   |                        |                          |
+----------------------------------------------------+-----+------------------------+--------------------------+

Set internal attribute value, date and quality factor (for
Tango::DevEncoded attribute data type when splitted in data format and
data themselves).

This method stores the attribute read value, the date and the attribute
quality factor inside the object. This data will be returned to the
caller.

Please note that for Win32 user, the same method is defined using a
"\_timeb" structure instead of a "timeval" structure to set date.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data\_str   | The attribute format string                                                                                                     |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | The attribute raw data                                                                                                          |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the attribute raw data part                                                                                             |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t              | The date                                                                                                                        |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual           | The attribute quality factor                                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +------------------------+           | friend                               |
| | friend class DServer   |           |                                      |
| +------------------------+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +------------------------------+     | friend                               |
| | friend class EventSupplier   |     |                                      |
| +------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | friend                               |
| | friend class ZmqEventSupplier   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --+                                  |                                      |
| | long Tango::Attribute::assoc\_ind  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Index in the main attribute vector of the associated writable attribute
(if any)

Referenced by
`get\_assoc\_ind() <../../d6/dad/classTango_1_1Attribute.html#a362cf02710511ea952ef3f8ff85cdd30>`__,
and
`set\_assoc\_ind() <../../d6/dad/classTango_1_1Attribute.html#a3327bf363691bb60a285b72c9a170f52>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | bool Tango::Attribute::check\_max\ |                                      |
| _value   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Flag set to true if a maximum alarm is defined.

Referenced by
`Tango::WAttribute::is\_max\_value() <../../db/da8/classTango_1_1WAttribute.html#a75be52f036f4e7e4a0de5f6418a10cfd>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | bool Tango::Attribute::check\_min\ |                                      |
| _value   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Flag set to true if a minimum value is defined.

Referenced by
`Tango::WAttribute::is\_min\_value() <../../db/da8/classTango_1_1WAttribute.html#a07014d9f378998d66b12211ee78efe49>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------------------+               |                                      |
| | Tango::AttrDataFormat Tango::Attri |                                      |
| bute::data\_format   |               |                                      |
| +----------------------------------- |                                      |
| ---------------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute data format.

Three data formats are supported. They are SCALAR, SPECTRUM and IMAGE

Referenced by
`get\_data\_format() <../../d6/dad/classTango_1_1Attribute.html#a4e23df40cb9be8d4213c0f87b67e5dd9>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --+                                  |                                      |
| | long Tango::Attribute::data\_size  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute data size.

Referenced by
`get\_data\_size() <../../d6/dad/classTango_1_1Attribute.html#a0a59f7d799a3c8ab8cdd7e6cd611607d>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --+                                  |                                      |
| | long Tango::Attribute::data\_type  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute data type.

Forteen types are suported. They are Tango::DevShort, Tango::DevUShort,
Tango::DevLong, Tango::DevULong, Tango::DevLong64, Tango::DevULong64,
Tango::DevDouble, Tango::DevString, , Tango::DevUChar, Tango::DevFloat,
Tango::DevBoolean, Tango::DevState, Tango::DevEncoded and
`Tango::DevEnum <../../de/ddf/namespaceTango.html#a6a9f2ce86c2eb45a059727bd9f71aac4>`__

Referenced by
`get\_data\_type() <../../d6/dad/classTango_1_1Attribute.html#a8b59c84da16d3b914cf8bf4fd37d8c1e>`__.

+--------------------------------------+--------------------------------------+
| +-------------------------------+    | protected                            |
| | bool Tango::Attribute::date   |    |                                      |
| +-------------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Flag set to true if the date must be set.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | long Tango::Attribute::delta\_t    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delta time after which the read value must be checked again the last
written value if the attribute has an alarm on Read Different Than Set
(RDS)

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------+                             |                                      |
| | string Tango::Attribute::delta\_t\ |                                      |
| _str   |                             |                                      |
| +----------------------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute delta time RDS alarm.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::delta\_val   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Authorized delta between the last written value and the actual read.

Used if the attribute has an alarm on Read Different Than Set (RDS)

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::Attribute::delta\_va |                                      |
| l\_str   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute delta value RDS alarm.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----+                               |                                      |
| | string Tango::Attribute::descripti |                                      |
| on   |                               |                                      |
| +----------------------------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute description.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------+                             |                                      |
| | string Tango::Attribute::display\_ |                                      |
| unit   |                             |                                      |
| +----------------------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute display unit.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------+                      |                                      |
| | vector<string> Tango::Attribute::e |                                      |
| num\_labels   |                      |                                      |
| +----------------------------------- |                                      |
| --------------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Enumeration labels when the attribute data type is DevEnum.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | string Tango::Attribute::format    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute format.

This string specifies how an attribute value must be printed

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | protected                            |
| | string Tango::Attribute::label   | |                                      |
| +----------------------------------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute label.

Referenced by
`get\_label() <../../d6/dad/classTango_1_1Attribute.html#a1851ce2e2e30add8e826c39b462fe374>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::max\_alarm   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum alarm in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::Attribute::max\_alar |                                      |
| m\_str   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximun alarm level.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::max\_value   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum value in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::Attribute::max\_valu |                                      |
| e\_str   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum value.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::max\_warning   |              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum warning in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------+                         |                                      |
| | string Tango::Attribute::max\_warn |                                      |
| ing\_str   |                         |                                      |
| +----------------------------------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum warning.

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | protected                            |
| | long Tango::Attribute::max\_x   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum x dimension.

It is needed for SPECTRUM or IMAGE data format

Referenced by
`get\_max\_dim\_x() <../../d6/dad/classTango_1_1Attribute.html#ae5cd58a02dcf1a799d1261ed5d9c7532>`__.

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | protected                            |
| | long Tango::Attribute::max\_y   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute maximum y dimension.

It is necessary only for IMAGE data format

Referenced by
`get\_max\_dim\_y() <../../d6/dad/classTango_1_1Attribute.html#ab4cfab2bee3ae1523ad8a3466afc37a2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::min\_alarm   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimum alarm in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::Attribute::min\_alar |                                      |
| m\_str   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimum alarm level.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::min\_value   |                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimum value in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::Attribute::min\_valu |                                      |
| e\_str   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimum value.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
| | `Tango::Attr\_CheckVal <../../de/d |                                      |
| df/namespaceTango.html#aab045c9a2576 |                                      |
| fa85dd8ddb71803bdf18>`__ Tango::Attr |                                      |
| ibute::min\_warning   |              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimum warning in binary format.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------+                         |                                      |
| | string Tango::Attribute::min\_warn |                                      |
| ing\_str   |                         |                                      |
| +----------------------------------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute minimun warning.

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | protected                            |
| | string Tango::Attribute::name   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute name.

Referenced by
`get\_name() <../../d6/dad/classTango_1_1Attribute.html#afd4dfffdf08ea4c03a58f7e83977b152>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------------+                       |                                      |
| | Tango::AttrQuality Tango::Attribut |                                      |
| e::quality   |                       |                                      |
| +----------------------------------- |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute quality factor.

Referenced by
`get\_quality() <../../d6/dad/classTango_1_1Attribute.html#af1dc4310844ce3fd7bdde02f6202b5ba>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------+                            |                                      |
| | string Tango::Attribute::standard\ |                                      |
| _unit   |                            |                                      |
| +----------------------------------- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute standard unit.

+--------------------------------------+--------------------------------------+
| +---------------------------------+  | protected                            |
| | string Tango::Attribute::unit   |  |                                      |
| +---------------------------------+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute unit.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+                        |                                      |
| | `Tango::Attr\_Value <../../de/ddf/ |                                      |
| namespaceTango.html#a41a53e618e4c913 |                                      |
| 5b25512260eebe538>`__ Tango::Attribu |                                      |
| te::value   |                        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute value.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---+                                 |                                      |
| | bool Tango::Attribute::value\_flag |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

A flag set to true if the attribute value has been updated.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------+                              |                                      |
| | Tango::TimeVal Tango::Attribute::w |                                      |
| hen   |                              |                                      |
| +----------------------------------- |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The date when attribute was read.

Referenced by
`get\_date() <../../d6/dad/classTango_1_1Attribute.html#a0e5d5c229031b939700a38728fbe08a4>`__,
and
`set\_date() <../../d6/dad/classTango_1_1Attribute.html#a04cfcc422925f19de52814a6d89b55a4>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----------------+                    |                                      |
| | Tango::AttrWriteType Tango::Attrib |                                      |
| ute::writable   |                    |                                      |
| +----------------------------------- |                                      |
| ----------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The attribute writable flag.

Referenced by
`get\_writable() <../../d6/dad/classTango_1_1Attribute.html#a55b57b9d5abf6649e0f4e7854920d967>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------+                      |                                      |
| | string Tango::Attribute::writable\ |                                      |
| _attr\_name   |                      |                                      |
| +----------------------------------- |                                      |
| --------------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The name of the associated writable attribute.

Referenced by
`get\_assoc\_name() <../../d6/dad/classTango_1_1Attribute.html#abe79d1339964153ad5144a53036fcd18>`__.

--------------

The documentation for this class was generated from the following file:

-  `attribute.h <../../d3/d7c/attribute_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d2/dcb/classTango_1_1Attribute__inherit__graph.png
.. |Collaboration graph| image:: ../../d9/db3/classTango_1_1Attribute__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
