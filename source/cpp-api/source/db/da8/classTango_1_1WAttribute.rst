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

`Classes <#nested-classes>`__ \| `List of all
members <../../dd/dc6/classTango_1_1WAttribute-members.html>`__

Tango::WAttribute Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class represents a writable attribute.
`More... <../../db/da8/classTango_1_1WAttribute.html#details>`__

Inheritance diagram for Tango::WAttribute:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::WAttribute:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`WAttribute <../../db/da8/classTango_1_1WAttribute.html#ab08504608863f5dd88503e914d84027f>`__
(vector< AttrProperty > &prop\_list,
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &tmp\_attr, string
&dev\_name, long idx)

 

| Create a new Writable
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object.
`More... <#ab08504608863f5dd88503e914d84027f>`__

 

Destructor

Only one desctructor is defined for this class

 

`~WAttribute <../../db/da8/classTango_1_1WAttribute.html#a9d46d82cb48de388e34671f1276b3723>`__
()

 

| The `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
desctructor. `More... <#a9d46d82cb48de388e34671f1276b3723>`__

 

Attribute configuration methods

Miscellaneous methods dealing with attribute min and max value property

bool 

`is\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a07014d9f378998d66b12211ee78efe49>`__
()

 

| Check if the attribute has a minimum value.
`More... <#a07014d9f378998d66b12211ee78efe49>`__

 

template<typename T >

void 

`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__
(const T
&\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__)

 

| Set attribute minimum value.
`More... <#ae6f42c7b1ab74e7d6498aea31dbe90bc>`__

 

void 

`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a1607b5b07321e6d1867fb7f8b78b56c9>`__
(char
\*\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__)

 

void 

`set\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a6554f7bb0b05363282a11bb3ea2dd24f>`__
(const char
\*\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__)

 

template<typename T >

void 

`get\_min\_value <../../db/da8/classTango_1_1WAttribute.html#a6cf44ad3c1cd92d3a3c72399c1905115>`__
(T
&\ `min\_value <../../d6/dad/classTango_1_1Attribute.html#ac2d22b7b71dc4d800703c7d5400c811f>`__)

 

| Gets attribute minimum value or throws an exception if the attribute
does not have a minimum value.
`More... <#a6cf44ad3c1cd92d3a3c72399c1905115>`__

 

bool 

`is\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a75be52f036f4e7e4a0de5f6418a10cfd>`__
()

 

| Check if the attribute has a maximum value.
`More... <#a75be52f036f4e7e4a0de5f6418a10cfd>`__

 

template<typename T >

void 

`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#afad111e0f1db4e181a42739ef994bae9>`__
(const T
&\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__)

 

| Set attribute maximum value.
`More... <#afad111e0f1db4e181a42739ef994bae9>`__

 

void 

`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#aa1108fe16975a87b4b4509a09d0949ac>`__
(char
\*\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__)

 

void 

`set\_max\_value <../../db/da8/classTango_1_1WAttribute.html#add92cf6bfc1d74c4dde4da7ec0fc10cf>`__
(const char
\*\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__)

 

template<typename T >

void 

`get\_max\_value <../../db/da8/classTango_1_1WAttribute.html#a257f2909d2037875379471e1c05a0c20>`__
(T
&\ `max\_value <../../d6/dad/classTango_1_1Attribute.html#a1e939ae411dc4e427f03db87a79b78be>`__)

 

| Get attribute maximum value or throws an exception if the attribute
does not have a maximum value.
`More... <#a257f2909d2037875379471e1c05a0c20>`__

 

Get new value for attribute

Miscellaneous method to retrieve from the
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ object the
new value for the attribute.

long 

`get\_write\_value\_length <../../db/da8/classTango_1_1WAttribute.html#a86f808b64fd05cc0a7912ede8a746503>`__
()

 

| Retrieve the new value length (data number) for writable attribute.
`More... <#a86f808b64fd05cc0a7912ede8a746503>`__

 

struct timeval & 

`get\_write\_date <../../db/da8/classTango_1_1WAttribute.html#a68956bf1b7eebe867fda36e338d8d34e>`__
()

 

| Retrieve the date of the last attribute writing.
`More... <#a68956bf1b7eebe867fda36e338d8d34e>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a534a115e8c1aebdb3c2553d706ab9eed>`__
(Tango::DevShort &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort. `More... <#a534a115e8c1aebdb3c2553d706ab9eed>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad6dd31d7f2e1d0b61a02d0cef36f3f40>`__
(const Tango::DevShort \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort and the attribute is SPECTRUM or IMAGE.
`More... <#ad6dd31d7f2e1d0b61a02d0cef36f3f40>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a9a4f1224a1413145f1217224846f6769>`__
(Tango::DevLong &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong. `More... <#a9a4f1224a1413145f1217224846f6769>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#adb5b6c5a41e64f332780d427b8dc6b48>`__
(const Tango::DevLong \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong and the attribute is SPECTRUM or IMAGE.
`More... <#adb5b6c5a41e64f332780d427b8dc6b48>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a1730f61d25e6c17b1f73f456c85b71b4>`__
(Tango::DevLong64 &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64. `More... <#a1730f61d25e6c17b1f73f456c85b71b4>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a47d8dc15428a7af9a51568c3e3f14c88>`__
(const Tango::DevLong64 \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.
`More... <#a47d8dc15428a7af9a51568c3e3f14c88>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aaa70e99095ff936a466557500ce80d7c>`__
(Tango::DevFloat &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat. `More... <#aaa70e99095ff936a466557500ce80d7c>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#affccdd1fa0fd1510c433ee646ca7d6b5>`__
(const Tango::DevFloat \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat and the attribute is SPECTRUM or IMAGE.
`More... <#affccdd1fa0fd1510c433ee646ca7d6b5>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5d3b6c042f4247f6875bd31b7131a504>`__
(Tango::DevDouble &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble. `More... <#a5d3b6c042f4247f6875bd31b7131a504>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a7ec8e0f56008cf8b7eb8081880d89088>`__
(const Tango::DevDouble \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble and the attribute is SPECTRUM or IMAGE.
`More... <#a7ec8e0f56008cf8b7eb8081880d89088>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af03e9a1cc30010efbc8d6f4f5a0a1e90>`__
(Tango::DevString &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevString. `More... <#af03e9a1cc30010efbc8d6f4f5a0a1e90>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad56e6c3da60658694a2109539ab21eb9>`__
(const
`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__
\*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevString and the attribute is SPECTRUM or IMAGE.
`More... <#ad56e6c3da60658694a2109539ab21eb9>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a450912b6c7d969e30a860b61e33feefc>`__
(Tango::DevBoolean &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean. `More... <#a450912b6c7d969e30a860b61e33feefc>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a0cbba0e559000c0f1219ab17f157a11d>`__
(const Tango::DevBoolean \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean and the attribute is SPECTRUM or IMAGE.
`More... <#a0cbba0e559000c0f1219ab17f157a11d>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a6fe68e2c6d8a9554c7672d397d5552f8>`__
(Tango::DevUShort &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort. `More... <#a6fe68e2c6d8a9554c7672d397d5552f8>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a072b84cc51584a41264643264d5bb6c2>`__
(const Tango::DevUShort \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort and the attribute is SPECTRUM or IMAGE.
`More... <#a072b84cc51584a41264643264d5bb6c2>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4a89cf4ea54ec94c484c70bae6ceb75b>`__
(Tango::DevUChar &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar. `More... <#a4a89cf4ea54ec94c484c70bae6ceb75b>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4463f984b296692b9a949a940db4bf1d>`__
(const Tango::DevUChar \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar and the attribute is SPECTRUM or IMAGE.
`More... <#a4463f984b296692b9a949a940db4bf1d>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a3d237324e8a665bd683072541739a535>`__
(Tango::DevULong &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong. `More... <#a3d237324e8a665bd683072541739a535>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a2a2f07b43086da7db6969effac4f1d92>`__
(const Tango::DevULong \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong and the attribute is SPECTRUM or IMAGE.
`More... <#a2a2f07b43086da7db6969effac4f1d92>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af547b58cb53a0fd8aa50ab00c4fe6189>`__
(Tango::DevULong64 &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong64. `More... <#af547b58cb53a0fd8aa50ab00c4fe6189>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af7cb9701c05c9d259a00ce971f78f819>`__
(const Tango::DevULong64 \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.
`More... <#af7cb9701c05c9d259a00ce971f78f819>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a51b4f9ded3cd084865544c278c2662c6>`__
(Tango::DevState &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevState. `More... <#a51b4f9ded3cd084865544c278c2662c6>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae2cb72cb6cae7e768125ad46abab5cba>`__
(const Tango::DevState \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.
`More... <#ae2cb72cb6cae7e768125ad46abab5cba>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a735b032e880d25f09c026a1118e17027>`__
(Tango::DevEncoded &val)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded. `More... <#a735b032e880d25f09c026a1118e17027>`__

 

void 

`get\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a4da04db21379786d29ab52d4ad5d154c>`__
(const Tango::DevEncoded \*&ptr)

 

| Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded and the attribute is SPECTRUM or IMAGE.
`More... <#a4da04db21379786d29ab52d4ad5d154c>`__

 

Set new value for attribute

Miscellaneous method to set a
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ value

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac043703571819fa917837f1ec7487200>`__
(Tango::DevShort val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevShort. `More... <#ac043703571819fa917837f1ec7487200>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac8837082bd748c6a0df617be155bccb5>`__
(Tango::DevShort \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevShort.
`More... <#ac8837082bd748c6a0df617be155bccb5>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5b18a2dc2f653a0083fee3f8ddd8cd07>`__
(vector< Tango::DevShort > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevShort.
`More... <#a5b18a2dc2f653a0083fee3f8ddd8cd07>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a6e67990a32fbd3cdf92fd443e58794da>`__
(Tango::DevLong val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevLong. `More... <#a6e67990a32fbd3cdf92fd443e58794da>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac6ccda4e4e3d4f41729321d799ba129d>`__
(Tango::DevLong \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong.
`More... <#ac6ccda4e4e3d4f41729321d799ba129d>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a702d60f6de8cf288b20718a5d050bba6>`__
(vector< Tango::DevLong > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong.
`More... <#a702d60f6de8cf288b20718a5d050bba6>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af189acf4d580c8620bdcf53fff78dd7e>`__
(Tango::DevLong64 val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevLong64. `More... <#af189acf4d580c8620bdcf53fff78dd7e>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae612cf88f649f533e6a2a94ed70ba566>`__
(Tango::DevLong64 \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong64.
`More... <#ae612cf88f649f533e6a2a94ed70ba566>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#afd076c04de010e592f5b82ae4b942e1a>`__
(vector< Tango::DevLong64 > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong64.
`More... <#afd076c04de010e592f5b82ae4b942e1a>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a225893975628f79230a1babeec0920c9>`__
(Tango::DevDouble val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevDouble. `More... <#a225893975628f79230a1babeec0920c9>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af4fbbbf029ac57483ed71f791298d613>`__
(Tango::DevDouble \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevDouble.
`More... <#af4fbbbf029ac57483ed71f791298d613>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a05a374c5d01bb17927f83539becd5f7c>`__
(vector< Tango::DevDouble > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevDouble.
`More... <#a05a374c5d01bb17927f83539becd5f7c>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ac352afe44c4875da164cf3e8b03e3674>`__
(Tango::DevString val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevString. `More... <#ac352afe44c4875da164cf3e8b03e3674>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af574b032aa6e39f3850937dc77bb66d6>`__
(string &val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevString. `More... <#af574b032aa6e39f3850937dc77bb66d6>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a75962109e6a00f7dc26352a5f45c6189>`__
(Tango::DevString \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevString.
`More... <#a75962109e6a00f7dc26352a5f45c6189>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a24cb01f398049158618a90ab542d0a78>`__
(vector< string > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevString.
`More... <#a24cb01f398049158618a90ab542d0a78>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a6da3393da53b40b8752a41dc83d61244>`__
(Tango::DevFloat val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevFloat. `More... <#a6da3393da53b40b8752a41dc83d61244>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a968e3ce78022bc4271e6282ea22d849b>`__
(Tango::DevFloat \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevFloat.
`More... <#a968e3ce78022bc4271e6282ea22d849b>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5a92c8f5f3fcf61d5b2e6aa2a44ae254>`__
(vector< Tango::DevFloat > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevFloat.
`More... <#a5a92c8f5f3fcf61d5b2e6aa2a44ae254>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a8948ff77fa43c7aae07319da46c6c9c7>`__
(Tango::DevBoolean val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevBoolean. `More... <#a8948ff77fa43c7aae07319da46c6c9c7>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aa6ea91ce0efaff2157921a631c947832>`__
(Tango::DevBoolean \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevBoolean.
`More... <#aa6ea91ce0efaff2157921a631c947832>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a945408c7272400dd5f18a02d55f5556c>`__
(vector< Tango::DevBoolean > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevBoolean.
`More... <#a945408c7272400dd5f18a02d55f5556c>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a67160972ce80e9129185a12738764c9f>`__
(Tango::DevUShort val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevUShort. `More... <#a67160972ce80e9129185a12738764c9f>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae7b396f4d4826a55fbfe8a8e5411fec4>`__
(Tango::DevUShort \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUShort.
`More... <#ae7b396f4d4826a55fbfe8a8e5411fec4>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a679baf66324b46a5c6148c4d33eaea0a>`__
(vector< Tango::DevUShort > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUShort.
`More... <#a679baf66324b46a5c6148c4d33eaea0a>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aedcbd30214591b860e54cc57a7f2d02a>`__
(Tango::DevUChar val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevUChar. `More... <#aedcbd30214591b860e54cc57a7f2d02a>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ada02a5151c555b9003397eecb5615f46>`__
(Tango::DevUChar \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUChar.
`More... <#ada02a5151c555b9003397eecb5615f46>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ad51eea3b5a0227e1bf757eee1056ee0b>`__
(vector< Tango::DevUChar > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUChar.
`More... <#ad51eea3b5a0227e1bf757eee1056ee0b>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af529e62052c10de946e2676280831dcf>`__
(Tango::DevULong val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevULong. `More... <#af529e62052c10de946e2676280831dcf>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#af8c1eb391707047ab73104e5cb7cb58b>`__
(Tango::DevULong \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong.
`More... <#af8c1eb391707047ab73104e5cb7cb58b>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a0a28b5dc44906444c6b3c2b876754c94>`__
(vector< Tango::DevULong > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong.
`More... <#a0a28b5dc44906444c6b3c2b876754c94>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#adfbf95b83e7b9b629b5d90b7fdb27ec4>`__
(Tango::DevULong64 val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevULong64. `More... <#adfbf95b83e7b9b629b5d90b7fdb27ec4>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#affe0b225dd59ad4bf634d88cde687be1>`__
(Tango::DevULong64 \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong64.
`More... <#affe0b225dd59ad4bf634d88cde687be1>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#aa635b4e37492454f43e37ca6ad876958>`__
(vector< Tango::DevULong64 > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong64.
`More... <#aa635b4e37492454f43e37ca6ad876958>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#a5391cdd7089db0435c485300bfaf0fcc>`__
(Tango::DevState val)

 

| Set the writable scalar attribute value when the attribute data type
is Tango::DevState. `More... <#a5391cdd7089db0435c485300bfaf0fcc>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae63794d119642e93f6c3637c37a2b3cf>`__
(Tango::DevState \*val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevState.
`More... <#ae63794d119642e93f6c3637c37a2b3cf>`__

 

void 

`set\_write\_value <../../db/da8/classTango_1_1WAttribute.html#ae8fe8157bfa438e359e39cdc0093e0b2>`__
(vector< Tango::DevState > &val, long x=1, long y=0)

 

| Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevState.
`More... <#ae8fe8157bfa438e359e39cdc0093e0b2>`__

 

|-| Public Member Functions inherited from
`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

 

`Attribute <../../d6/dad/classTango_1_1Attribute.html#ad92e54beedf8d29d088c2f6d5d70153f>`__
(vector< AttrProperty > &prop\_list,
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &tmp\_attr, string
&dev\_name, long idx)

 

| Create a new `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object. `More... <#ad92e54beedf8d29d088c2f6d5d70153f>`__

 

virtual 

`~Attribute <../../d6/dad/classTango_1_1Attribute.html#ae2740fa1ac154feb7d50a85199991f42>`__
()

 

| The attribute destructor.
`More... <#ae2740fa1ac154feb7d50a85199991f42>`__

 

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

 

Additional Inherited Members
----------------------------

|-| Protected Attributes inherited from
`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

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

 

Detailed Description
--------------------

This class represents a writable attribute.

It inherits from the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ class and only
add what is specific to writable attribute.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------+-----+------------------------------------------------------+-----------------+
| Tango::WAttribute::WAttribute   | (   | vector< AttrProperty > &                             | *prop\_list*,   |
+---------------------------------+-----+------------------------------------------------------+-----------------+
|                                 |     | `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ &    | *tmp\_attr*,    |
+---------------------------------+-----+------------------------------------------------------+-----------------+
|                                 |     | string &                                             | *dev\_name*,    |
+---------------------------------+-----+------------------------------------------------------+-----------------+
|                                 |     | long                                                 | *idx*           |
+---------------------------------+-----+------------------------------------------------------+-----------------+
|                                 | )   |                                                      |                 |
+---------------------------------+-----+------------------------------------------------------+-----------------+

Create a new Writable
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object.

Parameters
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | prop\_list   | The attribute properties list. Each property is an object of the AttrProperty class                                                                                           |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | tmp\_attr    | The temporary attribute object built from user parameters                                                                                                                     |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev\_name    | The device name                                                                                                                                                               |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | idx          | The index of the related `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object in the MultiClassAttribute vector of `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object   |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------+-----+----+-----+----+
| Tango::WAttribute::~WAttribute   | (   |    | )   |    |
+----------------------------------+-----+----+-----+----+

The `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
desctructor.

Member Function Documentation
-----------------------------

template<typename T >

+-------------------------------------------+-----+--------+----------------+-----+----+
| void Tango::WAttribute::get\_max\_value   | (   | T &    | *max\_value*   | )   |    |
+-------------------------------------------+-----+--------+----------------+-----+----+

Get attribute maximum value or throws an exception if the attribute does
not have a maximum value.

Parameters
    +--------------+------------------------------------------------------------------------------------+
    | max\_value   | Reference to a variable which value will be set to the attribute's maximum value   |
    +--------------+------------------------------------------------------------------------------------+

template<typename T >

+-------------------------------------------+-----+--------+----------------+-----+----+
| void Tango::WAttribute::get\_min\_value   | (   | T &    | *min\_value*   | )   |    |
+-------------------------------------------+-----+--------+----------------+-----+----+

Gets attribute minimum value or throws an exception if the attribute
does not have a minimum value.

Parameters
    +--------------+------------------------------------------------------------------------------------+
    | min\_value   | Reference to a variable which value will be set to the attribute's minimum value   |
    +--------------+------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | struct timeval& Tango::WAttribute: |                                      |
| :get\_write\_date   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the date of the last attribute writing.

This is set only if the attribute has a read different than set alarm.
Otherwise, date is set to 0.

Returns
    The written date

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevShort &  |                                      |
|    | *val*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort.

Parameters
    +-------+--------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevShort data which will be initialised with the new value   |
    +-------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevSh |                                      |
| ort \*&    | *ptr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevShort and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer wich will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| --+---------+-----+----+             |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevLong &   |                                      |
|   | *val*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| --+---------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong.

Parameters
    +-------+-------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevLong data which will be initialised with the new value   |
    +-------+-------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ----------+---------+-----+----+     |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevLo |                                      |
| ng \*&    | *ptr*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ----------+---------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevLong64 & |                                      |
|     | *val*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64.

Parameters
    +-------+---------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevLong64 data which will be initialised with the new value   |
    +-------+---------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevLo |                                      |
| ng64 \*&    | *ptr*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevFloat &  |                                      |
|    | *val*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat.

Parameters
    +-------+--------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevFloat data which will be initialised with the new value   |
    +-------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevFl |                                      |
| oat \*&    | *ptr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevFloat and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevDouble & |                                      |
|     | *val*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble.

Parameters
    +-------+---------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevDouble data which will be initialised with the new value   |
    +-------+---------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevDo |                                      |
| uble \*&    | *ptr*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevDouble and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevString & |                                      |
|     | *val*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevString.

Parameters
    +-------+---------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevString data which will be initialised with the new value   |
    +-------+---------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+---------+-----+- |                                      |
| ---+                                 |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const `Tango::Cons |                                      |
| tDevString <../../de/ddf/namespaceTa |                                      |
| ngo.html#a31a504495ecab5fd862cb6e60d |                                      |
| 40360c>`__ \*&    | *ptr*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+---------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevString and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevBoolean  |                                      |
| &    | *val*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean.

Parameters
    +-------+----------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevBoolean data which will be initialised with the new value   |
    +-------+----------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevBo |                                      |
| olean \*&    | *ptr*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevBoolean and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevUShort & |                                      |
|     | *val*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ----+---------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort.

Parameters
    +-------+---------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevUShort data which will be initialised with the new value   |
    +-------+---------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevUS |                                      |
| hort \*&    | *ptr*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------+---------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUShort and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevUChar &  |                                      |
|    | *val*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar.

Parameters
    +-------+--------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevUChar data which will be initialised with the new value   |
    +-------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevUC |                                      |
| har \*&    | *ptr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevUChar and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevULong &  |                                      |
|    | *val*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong.

Parameters
    +-------+--------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevULong data which will be initialised with the new value   |
    +-------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevUL |                                      |
| ong \*&    | *ptr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevULong64  |                                      |
| &    | *val*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevULong64.

Parameters
    +-------+----------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevULong64 data which will be initialised with the new value   |
    +-------+----------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevUL |                                      |
| ong64 \*&    | *ptr*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevState &  |                                      |
|    | *val*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ---+---------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevState.

Parameters
    +-------+--------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevState data which will be initialised with the new value   |
    +-------+--------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevSt |                                      |
| ate \*&    | *ptr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----------+---------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevLong64 and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | Tango::DevEncoded  |                                      |
| &    | *val*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -----+---------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded.

Parameters
    +-------+----------------------------------------------------------------------------------------+
    | val   | A reference to a Tango::DevEncoded data which will be initialised with the new value   |
    +-------+----------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
| | void Tango::WAttribute::get\_write |                                      |
| \_value   | (   | const Tango::DevEn |                                      |
| coded \*&    | *ptr*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| -------------+---------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the new value for writable attribute when attribute data type
is Tango::DevEncoded and the attribute is SPECTRUM or IMAGE.

Parameters
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ptr   | Reference to a pointer which will be set to point to the data to be written into the attribute. This pointer points into attribute internal memory which must not be freed.   |
    +-------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------------+-----+----+-----+----+
| long Tango::WAttribute::get\_write\_value\_length   | (   |    | )   |    |
+-----------------------------------------------------+-----+----+-----+----+

Retrieve the new value length (data number) for writable attribute.

Returns
    The new value data length

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | bool Tango::WAttribute::is\_max\_v |                                      |
| alue   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute has a maximum value.

Returns
    check\_max\_value A boolean set to true if the attribute has a
    maximum value defined

References
`Tango::Attribute::check\_max\_value <../../d6/dad/classTango_1_1Attribute.html#a79996bd7b057dc08983b40e5aac86207>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | bool Tango::WAttribute::is\_min\_v |                                      |
| alue   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the attribute has a minimum value.

Returns
    A boolean set to true if the attribute has a minimum value defined

References
`Tango::Attribute::check\_min\_value <../../d6/dad/classTango_1_1Attribute.html#a918731e8ed902c983bf5045b2e27e9f9>`__.

template<typename T >

+-------------------------------------------+-----+--------------+----------------+-----+----+
| void Tango::WAttribute::set\_max\_value   | (   | const T &    | *max\_value*   | )   |    |
+-------------------------------------------+-----+--------------+----------------+-----+----+

Set attribute maximum value.

Parameters
    +--------------+--------------------------------------------------------------+
    | max\_value   | Reference to a variable which represents the new max value   |
    +--------------+--------------------------------------------------------------+

+-------------------------------------------+-----+------------+----------------+-----+----+
| void Tango::WAttribute::set\_max\_value   | (   | char \*    | *max\_value*   | )   |    |
+-------------------------------------------+-----+------------+----------------+-----+----+

+-------------------------------------------+-----+------------------+----------------+-----+----+
| void Tango::WAttribute::set\_max\_value   | (   | const char \*    | *max\_value*   | )   |    |
+-------------------------------------------+-----+------------------+----------------+-----+----+

template<typename T >

+-------------------------------------------+-----+--------------+----------------+-----+----+
| void Tango::WAttribute::set\_min\_value   | (   | const T &    | *min\_value*   | )   |    |
+-------------------------------------------+-----+--------------+----------------+-----+----+

Set attribute minimum value.

Parameters
    +--------------+--------------------------------------------------------------+
    | min\_value   | Reference to a variable which represents the new min value   |
    +--------------+--------------------------------------------------------------+

+-------------------------------------------+-----+------------+----------------+-----+----+
| void Tango::WAttribute::set\_min\_value   | (   | char \*    | *min\_value*   | )   |    |
+-------------------------------------------+-----+------------+----------------+-----+----+

+-------------------------------------------+-----+------------------+----------------+-----+----+
| void Tango::WAttribute::set\_min\_value   | (   | const char \*    | *min\_value*   | )   |    |
+-------------------------------------------+-----+------------------+----------------+-----+----+

+---------------------------------------------+-----+--------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevShort    | *val*   | )   |    |
+---------------------------------------------+-----+--------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevShort.

Parameters
    +-------+-----------------------------------------+
    | val   | A reference to a Tango::DevShort data   |
    +-------+-----------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevShort \*    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevShort.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevShort > &    | *val*,         |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *x* = ``1``,   |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *y* = ``0``    |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             | )   |                                |                |
+---------------------------------------------+-----+--------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevShort.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+-------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevLong    | *val*   | )   |    |
+---------------------------------------------+-----+-------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevLong.

Parameters
    +-------+----------------------------------------+
    | val   | A reference to a Tango::DevLong data   |
    +-------+----------------------------------------+

+---------------------------------------------+-----+----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevLong \*    | *val*,         |
+---------------------------------------------+-----+----------------------+----------------+
|                                             |     | long                 | *x* = ``1``,   |
+---------------------------------------------+-----+----------------------+----------------+
|                                             |     | long                 | *y* = ``0``    |
+---------------------------------------------+-----+----------------------+----------------+
|                                             | )   |                      |                |
+---------------------------------------------+-----+----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+-------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevLong > &    | *val*,         |
+---------------------------------------------+-----+-------------------------------+----------------+
|                                             |     | long                          | *x* = ``1``,   |
+---------------------------------------------+-----+-------------------------------+----------------+
|                                             |     | long                          | *y* = ``0``    |
+---------------------------------------------+-----+-------------------------------+----------------+
|                                             | )   |                               |                |
+---------------------------------------------+-----+-------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevLong64    | *val*   | )   |    |
+---------------------------------------------+-----+---------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevLong64.

Parameters
    +-------+------------------------------------------+
    | val   | A reference to a Tango::DevLong64 data   |
    +-------+------------------------------------------+

+---------------------------------------------+-----+------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevLong64 \*    | *val*,         |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *x* = ``1``,   |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *y* = ``0``    |
+---------------------------------------------+-----+------------------------+----------------+
|                                             | )   |                        |                |
+---------------------------------------------+-----+------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong64.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevLong64 > &    | *val*,         |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *x* = ``1``,   |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *y* = ``0``    |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             | )   |                                 |                |
+---------------------------------------------+-----+---------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevLong64.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevDouble    | *val*   | )   |    |
+---------------------------------------------+-----+---------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevDouble.

Parameters
    +-------+-------------------------------------+
    | val   | A reference to a Tango::DevDouble   |
    +-------+-------------------------------------+

+---------------------------------------------+-----+------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevDouble \*    | *val*,         |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *x* = ``1``,   |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *y* = ``0``    |
+---------------------------------------------+-----+------------------------+----------------+
|                                             | )   |                        |                |
+---------------------------------------------+-----+------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevDouble.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevDouble > &    | *val*,         |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *x* = ``1``,   |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *y* = ``0``    |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             | )   |                                 |                |
+---------------------------------------------+-----+---------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevDouble.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevString    | *val*   | )   |    |
+---------------------------------------------+-----+---------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevString.

Parameters
    +-------+-------------------------------------+
    | val   | A reference to a Tango::DevString   |
    +-------+-------------------------------------+

+---------------------------------------------+-----+-------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | string &    | *val*   | )   |    |
+---------------------------------------------+-----+-------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevString.

Parameters
    +-------+--------------------------------+
    | val   | A reference to a std::string   |
    +-------+--------------------------------+

+---------------------------------------------+-----+------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevString \*    | *val*,         |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *x* = ``1``,   |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *y* = ``0``    |
+---------------------------------------------+-----+------------------------+----------------+
|                                             | )   |                        |                |
+---------------------------------------------+-----+------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevString.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< string > &    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevString.

Parameters
    +-------+---------------------------------------------------------+
    | val   | A vector of string containing the attribute set value   |
    +-------+---------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1    |
    +-------+---------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0    |
    +-------+---------------------------------------------------------+

+---------------------------------------------+-----+--------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevFloat    | *val*   | )   |    |
+---------------------------------------------+-----+--------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevFloat.

Parameters
    +-------+------------------------------------+
    | val   | A reference to a Tango::DevFloat   |
    +-------+------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevFloat \*    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevFloat.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevFloat > &    | *val*,         |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *x* = ``1``,   |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *y* = ``0``    |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             | )   |                                |                |
+---------------------------------------------+-----+--------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevFloat.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+----------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevBoolean    | *val*   | )   |    |
+---------------------------------------------+-----+----------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevBoolean.

Parameters
    +-------+--------------------------------------+
    | val   | A reference to a Tango::DevBoolean   |
    +-------+--------------------------------------+

+---------------------------------------------+-----+-------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevBoolean \*    | *val*,         |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             |     | long                    | *x* = ``1``,   |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             |     | long                    | *y* = ``0``    |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             | )   |                         |                |
+---------------------------------------------+-----+-------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevBoolean.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+----------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevBoolean > &    | *val*,         |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             |     | long                             | *x* = ``1``,   |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             |     | long                             | *y* = ``0``    |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             | )   |                                  |                |
+---------------------------------------------+-----+----------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevBoolean.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevUShort    | *val*   | )   |    |
+---------------------------------------------+-----+---------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevUShort.

Parameters
    +-------+-------------------------------------+
    | val   | A reference to a Tango::DevUShort   |
    +-------+-------------------------------------+

+---------------------------------------------+-----+------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevUShort \*    | *val*,         |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *x* = ``1``,   |
+---------------------------------------------+-----+------------------------+----------------+
|                                             |     | long                   | *y* = ``0``    |
+---------------------------------------------+-----+------------------------+----------------+
|                                             | )   |                        |                |
+---------------------------------------------+-----+------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUShort.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+---------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevUShort > &    | *val*,         |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *x* = ``1``,   |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             |     | long                            | *y* = ``0``    |
+---------------------------------------------+-----+---------------------------------+----------------+
|                                             | )   |                                 |                |
+---------------------------------------------+-----+---------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUShort.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevUChar    | *val*   | )   |    |
+---------------------------------------------+-----+--------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevUChar.

Parameters
    +-------+------------------------------------+
    | val   | A reference to a Tango::DevUChar   |
    +-------+------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevUChar \*    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUChar.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevUChar > &    | *val*,         |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *x* = ``1``,   |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *y* = ``0``    |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             | )   |                                |                |
+---------------------------------------------+-----+--------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevUChar.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevULong    | *val*   | )   |    |
+---------------------------------------------+-----+--------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevULong.

Parameters
    +-------+-----------------------------------------+
    | val   | A reference to a Tango::DevULong data   |
    +-------+-----------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevULong \*    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevULong > &    | *val*,         |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *x* = ``1``,   |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *y* = ``0``    |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             | )   |                                |                |
+---------------------------------------------+-----+--------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+----------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevULong64    | *val*   | )   |    |
+---------------------------------------------+-----+----------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevULong64.

Parameters
    +-------+-------------------------------------------+
    | val   | A reference to a Tango::DevULong64 data   |
    +-------+-------------------------------------------+

+---------------------------------------------+-----+-------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevULong64 \*    | *val*,         |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             |     | long                    | *x* = ``1``,   |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             |     | long                    | *y* = ``0``    |
+---------------------------------------------+-----+-------------------------+----------------+
|                                             | )   |                         |                |
+---------------------------------------------+-----+-------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong64.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+----------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevULong64 > &    | *val*,         |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             |     | long                             | *x* = ``1``,   |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             |     | long                             | *y* = ``0``    |
+---------------------------------------------+-----+----------------------------------+----------------+
|                                             | )   |                                  |                |
+---------------------------------------------+-----+----------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevULong64.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------+---------+-----+----+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevState    | *val*   | )   |    |
+---------------------------------------------+-----+--------------------+---------+-----+----+

Set the writable scalar attribute value when the attribute data type is
Tango::DevState.

Parameters
    +-------+-----------------------------------------+
    | val   | A reference to a Tango::DevState data   |
    +-------+-----------------------------------------+

+---------------------------------------------+-----+-----------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | Tango::DevState \*    | *val*,         |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *x* = ``1``,   |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             |     | long                  | *y* = ``0``    |
+---------------------------------------------+-----+-----------------------+----------------+
|                                             | )   |                       |                |
+---------------------------------------------+-----+-----------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevState.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A reference to the attribute set value                 |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

+---------------------------------------------+-----+--------------------------------+----------------+
| void Tango::WAttribute::set\_write\_value   | (   | vector< Tango::DevState > &    | *val*,         |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *x* = ``1``,   |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             |     | long                           | *y* = ``0``    |
+---------------------------------------------+-----+--------------------------------+----------------+
|                                             | )   |                                |                |
+---------------------------------------------+-----+--------------------------------+----------------+

Set the writable spectrum or image attribute value when the attribute
data type is Tango::DevState.

Parameters
    +-------+--------------------------------------------------------+
    | val   | A vector containing the attribute set value            |
    +-------+--------------------------------------------------------+
    | x     | The attribute set value x length. Default value is 1   |
    +-------+--------------------------------------------------------+
    | y     | The attribute set value y length. Default value is 0   |
    +-------+--------------------------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `w\_attribute.h <../../df/da4/w__attribute_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d5/d94/classTango_1_1WAttribute__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/dc8/classTango_1_1WAttribute__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
