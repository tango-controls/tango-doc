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

`List of all
members <../../d4/d5d/classTango_1_1TimedAttrData-members.html>`__

Tango::TimedAttrData< T > Class Template Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is used to store one element of an attribute history stack.
`More... <../../da/d12/classTango_1_1TimedAttrData.html#details>`__

Inheritance diagram for Tango::TimedAttrData< T >:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::TimedAttrData< T >:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Miscellaneous constructors for scalar attribute

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a2d4169ef4a760ac37755aea53f9c5de8>`__
(const T \*p\_data, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a2d4169ef4a760ac37755aea53f9c5de8>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a3f141191cabfb22c0d472968ca78010f>`__
(const T \*p\_data, const T \*p\_wr\_data, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a3f141191cabfb22c0d472968ca78010f>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a5b4fbde2e8e1147285c8489d15cb37e1>`__
(const T \*p\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a5b4fbde2e8e1147285c8489d15cb37e1>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a49f601bb51212d75870f0b4319a4a795>`__
(const T \*p\_data, const T \*p\_wr\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a49f601bb51212d75870f0b4319a4a795>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#aadf938e45266eca4a828cbbf653c752b>`__
(const T \*p\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#aadf938e45266eca4a828cbbf653c752b>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ac165c5c9f094cba4cadf32bd8947b469>`__
(const T \*p\_data, const T \*p\_wr\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#ac165c5c9f094cba4cadf32bd8947b469>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ad302f54d4d70c534bdf50466a5719c55>`__
(const T \*p\_data, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#ad302f54d4d70c534bdf50466a5719c55>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ae060ee002aff45f67590f1f1fa61d35b>`__
(const T \*p\_data, const T \*p\_wr\_data, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#ae060ee002aff45f67590f1f1fa61d35b>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a21807ab571c0766770a3ff5e77bae3d5>`__
(const T \*p\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a21807ab571c0766770a3ff5e77bae3d5>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#accd5bf91bd215da16f89f548b1a8a175>`__
(const T \*p\_data, const T \*p\_wr\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#accd5bf91bd215da16f89f548b1a8a175>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ae0d7a1f16bb0a9f9588c423b69bad81e>`__
(const T \*p\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#ae0d7a1f16bb0a9f9588c423b69bad81e>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a813e4a279f6af2c4e519ce9cbc4b6cd5>`__
(const T \*p\_data, const T \*p\_wr\_data, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a813e4a279f6af2c4e519ce9cbc4b6cd5>`__

 

Miscellaneous constructors for spectrum attribute

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a172705abeceda80074eb21daf80a7d63>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a172705abeceda80074eb21daf80a7d63>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a0a3a74a999370bc1c9086f0c734e5f8f>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a0a3a74a999370bc1c9086f0c734e5f8f>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a0325f0beaf8b469637e4c91e1e33d1a8>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a0325f0beaf8b469637e4c91e1e33d1a8>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a40805ec38830616c3b97ed213c8a8193>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a40805ec38830616c3b97ed213c8a8193>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a03898ae2fc843b772b16ff17a80befb1>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a03898ae2fc843b772b16ff17a80befb1>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a93fc81581fdb0e9a762d46275a24f1eb>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a93fc81581fdb0e9a762d46275a24f1eb>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a8656fb5f0a393b01b5296184ec551e14>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a8656fb5f0a393b01b5296184ec551e14>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a4bb287b0748db345ea2b8162cbf78c38>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a4bb287b0748db345ea2b8162cbf78c38>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ab31e6d4572d06f1d737c83ab724a749b>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#ab31e6d4572d06f1d737c83ab724a749b>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#abaa2cc0289526f4f1fc6b2a4819097ff>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#abaa2cc0289526f4f1fc6b2a4819097ff>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#af109ad029acf390960952d2eaa34df33>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#af109ad029acf390960952d2eaa34df33>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a274182798f9747dc21f1ac5541993ae8>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
const T \*p\_wr\_data, long x\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a274182798f9747dc21f1ac5541993ae8>`__

 

Miscellaneous constructors for image attribute

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a9657cdf98f7daf2d4503eb2997485b64>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a9657cdf98f7daf2d4503eb2997485b64>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#aa4c8599532109015ec2393cc6d56d0b0>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#aa4c8599532109015ec2393cc6d56d0b0>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ad399b03ab42777930915e841a477a9b0>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#ad399b03ab42777930915e841a477a9b0>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a817a35162cd7bb5de957fb5ff05b80e4>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a817a35162cd7bb5de957fb5ff05b80e4>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#aa6a402171eb2a57350f77d4e62cd073b>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#aa6a402171eb2a57350f77d4e62cd073b>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a3e44fa81a94702b8c4e3709a826ed24a>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a3e44fa81a94702b8c4e3709a826ed24a>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a26c2a4fbbd27bc92c6a61ab062954c1b>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#a26c2a4fbbd27bc92c6a61ab062954c1b>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a1853de77aff71717a14f72c6ce9caaa7>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a1853de77aff71717a14f72c6ce9caaa7>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#af4f5186582aec35104a81cb2eb847e8c>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#af4f5186582aec35104a81cb2eb847e8c>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a88488896f84cd62f714512b33de6dff1>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a88488896f84cd62f714512b33de6dff1>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#ab9ce89a140afbbb6061f1444da0d8996>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object. `More... <#ab9ce89a140afbbb6061f1444da0d8996>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a95330dc8f32bac365450639712600785>`__
(const T \*p\_data, long
`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__,
long
`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__,
const T \*p\_wr\_data, long x\_wr, long y\_wr, Tango::AttrQuality
`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__,
bool rel, struct timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute. `More... <#a95330dc8f32bac365450639712600785>`__

 

Miscellaneous constructors for errors

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a941a405e2f77f182adbac4e2736276cb>`__
(DevErrorList &errs, time\_t when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for errors. `More... <#a941a405e2f77f182adbac4e2736276cb>`__

 

 

`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html#a152bf703a398c86e681916585b416a6a>`__
(DevErrorList &errs, timeval when)

 

| Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for errors. `More... <#a152bf703a398c86e681916585b416a6a>`__

 

|-| Public Member Functions inherited from `Tango::AttrData< T
> <../../d4/d7a/classTango_1_1AttrData.html>`__

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a97d6362673f427ed067853bb30545dc9>`__
(const T \*)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a35477beee075a315c5118430162e3959>`__
(const T \*, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#af1ba132401121168a2a75dc9a6ccb43d>`__
(const T \*, Tango::AttrQuality, bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a09ec5a2d0a49dae4154c0c65c1ea7467>`__
(const T \*, const T \*)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a23f77731b9643f850b82550051e7f3fc>`__
(const T \*, const T \*, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a7c2cc5ed211c0160bb5c39bc552eb6c2>`__
(const T \*, const T \*, Tango::AttrQuality, bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#ac6934d712c617ed7ca14fe752287a86f>`__
(const T \*, long)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#af70c92f305dab9345b21f140e2aab14c>`__
(const T \*, long, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#aefe26194ddcd73f753cda5f77e57efd5>`__
(const T \*, long, Tango::AttrQuality, bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a991650baf427403a53a2215786823c05>`__
(const T \*, long, const T \*, long)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#ace6844f8fa2dae824a4d3708fed31d65>`__
(const T \*, long, const T \*, long, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a0a1e3c95b2c91413a9c98f9456d64fc2>`__
(const T \*, long, const T \*, long, Tango::AttrQuality, bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a932366bb0fa645b0a217ffd5aab39d0e>`__
(const T \*, long, long)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a1f12cb1988acd991de591cb79a0ee5cc>`__
(const T \*, long, long, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#af9d47850f3a6927772cd51aedf14c55c>`__
(const T \*, long, long, Tango::AttrQuality, bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#ace0ed907fa69d41fdb582f2256ccb20a>`__
(const T \*, long, long, const T \*, long, long)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a6254034efb611e0ae19bbf294694c4af>`__
(const T \*, long, long, const T \*, long, long, Tango::AttrQuality)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#af353a8ab0ced284a769a69d2ddf8a621>`__
(const T \*, long, long, const T \*, long, long, Tango::AttrQuality,
bool)

 

 

`AttrData <../../d4/d7a/classTango_1_1AttrData.html#a91406bc4fd607acb4f3217980c3b5dd5>`__
(DevErrorList &e)

 

Additional Inherited Members
----------------------------

|-| Public Attributes inherited from `Tango::AttrData< T
> <../../d4/d7a/classTango_1_1AttrData.html>`__

DevErrorList 

`err <../../d4/d7a/classTango_1_1AttrData.html#aceb0e1fb88c6dd0be29bd7f8a4064611>`__

 

const T \* 

`ptr <../../d4/d7a/classTango_1_1AttrData.html#a2226b793c3a7c4791a9839e5bfa2473f>`__

 

Tango::AttrQuality 

`qual <../../d4/d7a/classTango_1_1AttrData.html#a51eecbb56d5db1c611ad459017cc03c2>`__

 

bool 

`release <../../d4/d7a/classTango_1_1AttrData.html#abc8bb23d7b5e8b2c4c1bd1c67b16ef04>`__

 

const T \* 

`wr\_ptr <../../d4/d7a/classTango_1_1AttrData.html#a0677f54f22a900522ffe72bd38cd530a>`__

 

long 

`wr\_x <../../d4/d7a/classTango_1_1AttrData.html#afaaa975dbd7e67efedfc0932d163d9ce>`__

 

long 

`wr\_y <../../d4/d7a/classTango_1_1AttrData.html#ac4720964bc4cfe1441dbc0e25c368d5a>`__

 

long 

`x <../../d4/d7a/classTango_1_1AttrData.html#a8e08e9668434a58b543989599dd82ecc>`__

 

long 

`y <../../d4/d7a/classTango_1_1AttrData.html#a32c887ce84b2549b5c597134a8f989a4>`__

 

Detailed Description
--------------------

template<typename T>
 class Tango::TimedAttrData< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This class is used to store one element of an attribute history stack.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | time\_t       | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        | )   |               |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | const T \*    | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | time\_t       | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        | )   |               |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* and *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | struct timeval    | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        | )   |                   |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | const T \*        | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | struct timeval    | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        | )   |                   |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* and *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | long          | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | time\_t       | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        | )   |               |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | const T \*    | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | time\_t       | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        | )   |               |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | x         | The attribute x length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x             | The attribute x length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x\_wr         | The attribute written part x length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* and *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | long              | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | struct timeval    | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        | )   |                   |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | const T \*        | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | struct timeval    | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        | )   |                   |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | x         | The attribute x length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x             | The attribute x length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x\_wr         | The attribute written part x length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* and *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | long          | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | long          | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        |     | time\_t       | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+
|                                                                                                                                                        | )   |               |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | y         | The attribute y length           |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*    | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | const T \*    | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | long          | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        |     | time\_t       | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+
|                                                                                                                                                        | )   |               |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | y             | The attribute y length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | y\_wr         | The attribute written part y length                  |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | y         | The attribute y length           |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | y             | The attribute y length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | y\_wr         | The attribute written part y length                  |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | time\_t               | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | x         | The attribute x length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | y         | The attribute y length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | time\_t               | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x             | The attribute x length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | y             | The attribute y length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x\_wr         | The attribute written part x length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | y\_wr         | The attribute written part y length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* and *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | long              | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | long              | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        |     | struct timeval    | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                        | )   |                   |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed The
attribute quality factor will be set to ATTR\_VALID

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | y         | The attribute y length           |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*        | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | const T \*        | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | long              | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        |     | struct timeval    | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+
|                                                                                                                                                        | )   |                   |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed The attribute quality factor will be set to ATTR\_VALID

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | y             | The attribute y length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | y\_wr         | The attribute written part y length                  |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+----------------------------------+
    | p\_data   | Pointer to the attribute value   |
    +-----------+----------------------------------+
    | x         | The attribute x length           |
    +-----------+----------------------------------+
    | y         | The attribute y length           |
    +-----------+----------------------------------+
    | qual      | The attribute quality factor     |
    +-----------+----------------------------------+
    | when      | The date                         |
    +-----------+----------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

The memory pointed to by the *p\_data* and *p\_wr\_data* parameters will
not be freed

Parameters
    +---------------+------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                       |
    +---------------+------------------------------------------------------+
    | x             | The attribute x length                               |
    +---------------+------------------------------------------------------+
    | y             | The attribute y length                               |
    +---------------+------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value   |
    +---------------+------------------------------------------------------+
    | x\_wr         | The attribute written part x length                  |
    +---------------+------------------------------------------------------+
    | y\_wr         | The attribute written part y length                  |
    +---------------+------------------------------------------------------+
    | qual          | The attribute quality factor                         |
    +---------------+------------------------------------------------------+
    | when          | The date                                             |
    +---------------+------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *x*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | long                  | *y*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,      |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | bool                  | *rel*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        |     | struct timeval        | *when*       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+
|                                                                                                                                                        | )   |                       |              |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+--------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
object.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the attribute value                                                  |
    +-----------+---------------------------------------------------------------------------------+
    | x         | The attribute x length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | y         | The attribute y length                                                          |
    +-----------+---------------------------------------------------------------------------------+
    | qual      | The attribute quality factor                                                    |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | const T \*            | *p\_data*,       |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y*,             |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | const T \*            | *p\_wr\_data*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *x\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | long                  | *y\_wr*,         |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | Tango::AttrQuality    | *qual*,          |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | bool                  | *rel*,           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        |     | struct timeval        | *when*           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+
|                                                                                                                                                        | )   |                       |                  |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-----------------------+------------------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for a R/W attribute.

Parameters
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the attribute value                                                                     |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x             | The attribute x length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | y             | The attribute y length                                                                             |
    +---------------+----------------------------------------------------------------------------------------------------+
    | p\_wr\_data   | Pointer to the written part of the attribute value                                                 |
    +---------------+----------------------------------------------------------------------------------------------------+
    | x\_wr         | The attribute written part x length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | y\_wr         | The attribute written part y length                                                                |
    +---------------+----------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                       |
    +---------------+----------------------------------------------------------------------------------------------------+
    | rel           | Set to true if the memory pointed to by the *p\_data* abd *p\_wr\_data* parameters must be freed   |
    +---------------+----------------------------------------------------------------------------------------------------+
    | when          | The date                                                                                           |
    +---------------+----------------------------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | DevErrorList &    | *errs*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
|                                                                                                                                                        |     | time\_t           | *when*    |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
|                                                                                                                                                        | )   |                   |           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for errors.

The created
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ is
used to store attribute errors in the attribute history stack

Parameters
    +--------+-------------------+
    | errs   | The error stack   |
    +--------+-------------------+
    | when   | The date          |
    +--------+-------------------+

template<typename T>

+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
| `Tango::TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__\ < T >::\ `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__   | (   | DevErrorList &    | *errs*,   |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
|                                                                                                                                                        |     | timeval           | *when*    |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+
|                                                                                                                                                        | )   |                   |           |
+--------------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+-----------+

Create a new
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ object
for errors.

The created
`TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__ is
used to store attribute errors in the attribute history stack

Parameters
    +--------+-------------------+
    | errs   | The error stack   |
    +--------+-------------------+
    | when   | The date          |
    +--------+-------------------+

--------------

The documentation for this class was generated from the following file:

-  `pollext.h <../../db/d17/pollext_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `TimedAttrData <../../da/d12/classTango_1_1TimedAttrData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../dc/d74/classTango_1_1TimedAttrData__inherit__graph.png
.. |Collaboration graph| image:: ../../d0/ded/classTango_1_1TimedAttrData__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
