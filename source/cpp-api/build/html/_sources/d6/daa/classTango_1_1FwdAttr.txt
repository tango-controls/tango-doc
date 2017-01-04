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
members <../../d2/dce/classTango_1_1FwdAttr-members.html>`__

Tango::FwdAttr Class Reference

`Server classes <../../da/d64/group__Server.html>`__

User class to create a forwarded attribute object.
`More... <../../d6/daa/classTango_1_1FwdAttr.html#details>`__

Inheritance diagram for Tango::FwdAttr:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::FwdAttr:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Only one constructor is defined for this class

 

`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html#a9a241a7b91325152d9cb29e339ed816d>`__
(const string &name, const string
&root\_attribute=\ `RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__)

 

| Constructs a newly allocated
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__ object.
`More... <#a9a241a7b91325152d9cb29e339ed816d>`__

 

Miscellaneous methods

void 

`set\_default\_properties <../../d6/daa/classTango_1_1FwdAttr.html#a4e03c27d8edac79cb48a9f2cb0170359>`__
(`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__
&prop)

 

| Set default attribute properties.
`More... <#a4e03c27d8edac79cb48a9f2cb0170359>`__

 

|-| Public Member Functions inherited from
`Tango::ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__

 

`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__
(const char \*name, long data\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
long max\_y)

 

| Constructs a newly allocated
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__ object.
`More... <#a4103de2b6a5f5bb187bcb6cdcfc210c5>`__

 

 

`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a5f0ff1d6eed2e33a40be144e25c7a80e>`__
(const char \*name, long data\_type, Tango::AttrWriteType w\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
long max\_y)

 

| Constructs a newly allocated
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__ object.
`More... <#a5f0ff1d6eed2e33a40be144e25c7a80e>`__

 

 

`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a54939c797ec3d63f84a18d0a54f45b51>`__
(const char \*name, long data\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
long max\_y, Tango::DispLevel level)

 

| Constructs a newly allocated
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__ object.
`More... <#a54939c797ec3d63f84a18d0a54f45b51>`__

 

 

`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a86863b65108a6098519bd19a2d7ac78e>`__
(const char \*name, long data\_type, Tango::AttrWriteType w\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
long max\_y, Tango::DispLevel level)

 

| Constructs a newly allocated
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__ object.
`More... <#a86863b65108a6098519bd19a2d7ac78e>`__

 

 

`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a941b6e0f0409f199c6b86a18c40fb8f0>`__
(const char \*name)

 

 

`~ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html#a86703e9efdc8c59dba36821dbbda31f8>`__
()

 

| The object desctructor.
`More... <#a86703e9efdc8c59dba36821dbbda31f8>`__

 

|-| Public Member Functions inherited from
`Tango::SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__

 

`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7615edf64261435e3a422f5757aa0946>`__
(const char \*name, long data\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__)

 

| Constructs a newly allocated
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ object.
`More... <#a7615edf64261435e3a422f5757aa0946>`__

 

 

`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a7e692cf26932a23e335ea1b7d3c8eb04>`__
(const char \*name, long data\_type, Tango::AttrWriteType w\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__)

 

| Constructs a newly allocated
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ object.
`More... <#a7e692cf26932a23e335ea1b7d3c8eb04>`__

 

 

`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#abd3b26a2c9335f121a9e461b4c305051>`__
(const char \*name, long data\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
DispLevel level)

 

| Constructs a newly allocated
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ object.
`More... <#abd3b26a2c9335f121a9e461b4c305051>`__

 

 

`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a671c9d94738e60668990494188032469>`__
(const char \*name, long data\_type, Tango::AttrWriteType w\_type, long
`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__,
DispLevel level)

 

| Constructs a newly allocated
`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__ object.
`More... <#a671c9d94738e60668990494188032469>`__

 

 

`SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a9dcccb8a63b6343b1567098cc47cfb88>`__
(const char \*\_n)

 

 

`~SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html#a2204d147fb74aac1efeff7ea9ea5c7be>`__
()

 

| The object desctructor.
`More... <#a2204d147fb74aac1efeff7ea9ea5c7be>`__

 

|-| Public Member Functions inherited from
`Tango::Attr <../../d5/dcd/classTango_1_1Attr.html>`__

 

`Attr <../../d5/dcd/classTango_1_1Attr.html#a7333f0eab1956673be866f4c7a2d44e8>`__
(const char \*name, long data\_type, Tango::AttrWriteType
w\_type=Tango::READ, const char
\*assoc=\ `AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__)

 

| Constructs a newly allocated
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object.
`More... <#a7333f0eab1956673be866f4c7a2d44e8>`__

 

 

`Attr <../../d5/dcd/classTango_1_1Attr.html#ad03a6014aeefda86d8ee4d52659a6c39>`__
(const char \*name, long data\_type, Tango::DispLevel disp,
Tango::AttrWriteType w\_type=Tango::READ, const char
\*assoc=\ `AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__)

 

| Constructs a newly allocated
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object.
`More... <#ad03a6014aeefda86d8ee4d52659a6c39>`__

 

 

`Attr <../../d5/dcd/classTango_1_1Attr.html#ad69e9aa5dcd4c22be0509ed72a01cd0d>`__
(const char \*name, Tango::DispLevel disp=Tango::OPERATOR)

 

virtual 

`~Attr <../../d5/dcd/classTango_1_1Attr.html#af280714a1ec4254e7ad7009eb0e8feda>`__
()

 

| The object desctructor.
`More... <#af280714a1ec4254e7ad7009eb0e8feda>`__

 

void 

`set\_default\_properties <../../d5/dcd/classTango_1_1Attr.html#acca03caaac31c20e746a276ab033c174>`__
(`UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__
&prop)

 

| Set default attribute properties.
`More... <#acca03caaac31c20e746a276ab033c174>`__

 

void 

`set\_disp\_level <../../d5/dcd/classTango_1_1Attr.html#a8f841afb6effc8384e49730550261378>`__
(Tango::DispLevel level)

 

| Set the attribute display level.
`More... <#a8f841afb6effc8384e49730550261378>`__

 

void 

`set\_polling\_period <../../d5/dcd/classTango_1_1Attr.html#a5d0e17f5a1ce7263482bb3df5090f91d>`__
(long update)

 

| Set the attribute polling update period.
`More... <#a5d0e17f5a1ce7263482bb3df5090f91d>`__

 

void 

`set\_memorized <../../d5/dcd/classTango_1_1Attr.html#aac89c07e2033c13abf2222fd6cd089dc>`__
()

 

| Set the attribute as memorized in database (only for scalar and
writable attribute) By default the setpoint will be written to the
attribute during initialisation! Use method
`set\_memorized\_init() <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__
with false as argument if you don't want this feature.
`More... <#aac89c07e2033c13abf2222fd6cd089dc>`__

 

void 

`set\_memorized\_init <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__
(bool write\_on\_init)

 

| Set the initialisation flag for memorized attributes true = the
setpoint value will be written to the attribute on initialisation false
= only the attribute setpoint is initialised.
`More... <#a5c1d94ccc3bacb8d728cf836df737889>`__

 

void 

`set\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a68801b4629667565b9cceb6fefa413d7>`__
(bool implemented, bool detect)

 

| Set a flag to indicate that the server fires change events manually
without the polling to be started for the attribute.
`More... <#a68801b4629667565b9cceb6fefa413d7>`__

 

bool 

`is\_change\_event <../../d5/dcd/classTango_1_1Attr.html#a9269546f4b25a6395efe8b93bdb8d07f>`__
()

 

| Check if the change event is fired manually for this attribute.
`More... <#a9269546f4b25a6395efe8b93bdb8d07f>`__

 

bool 

`is\_check\_change\_criteria <../../d5/dcd/classTango_1_1Attr.html#a3001dc4d14cbdc62a914a15ff3a86e49>`__
()

 

| Check if the change event criteria should be checked when firing the
event manually. `More... <#a3001dc4d14cbdc62a914a15ff3a86e49>`__

 

void 

`set\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#a6ba7dd409514e938cb2f530b767aa98c>`__
(bool implemented, bool detect)

 

| Set a flag to indicate that the server fires archive events manually
without the polling to be started for the attribute If the detect
parameter is set to true, the criteria specified for the archive event
are verified and the event is only pushed if they are fulfilled.
`More... <#a6ba7dd409514e938cb2f530b767aa98c>`__

 

bool 

`is\_archive\_event <../../d5/dcd/classTango_1_1Attr.html#aff00859f5da6a7f48e7abe079491f12c>`__
()

 

| Check if the archive event is fired manually for this attribute.
`More... <#aff00859f5da6a7f48e7abe079491f12c>`__

 

bool 

`is\_check\_archive\_criteria <../../d5/dcd/classTango_1_1Attr.html#a8aa3318fe49d403969a59fe000352be8>`__
()

 

| Check if the archive event criteria should be checked when firing the
event manually. `More... <#a8aa3318fe49d403969a59fe000352be8>`__

 

void 

`set\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#a7e18250ed88d997b603b308212eb7362>`__
(bool implemented)

 

| Set a flag to indicate that the server fires data ready events.
`More... <#a7e18250ed88d997b603b308212eb7362>`__

 

bool 

`is\_data\_ready\_event <../../d5/dcd/classTango_1_1Attr.html#aff3b774c27e61c3c2ae97ec81c30fcea>`__
()

 

| Check if the data ready event is fired for this attribute.
`More... <#aff3b774c27e61c3c2ae97ec81c30fcea>`__

 

Additional Inherited Members
----------------------------

|-| Protected Attributes inherited from
`Tango::SpectrumAttr <../../dd/de9/classTango_1_1SpectrumAttr.html>`__

long 

`max\_x <../../dd/de9/classTango_1_1SpectrumAttr.html#a74073e0d76cabe94dac96d926a4dcff4>`__

 

Detailed Description
--------------------

User class to create a forwarded attribute object.

Information from this class and information fetched out from the
`Tango <../../de/ddf/namespaceTango.html>`__ database allows the
`Tango <../../de/ddf/namespaceTango.html>`__ core software to create the
FwdAttribute object for the forwarded attribute created by the user.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+---------------------------+-----+-------------------+------------------------------------------+
| Tango::FwdAttr::FwdAttr   | (   | const string &    | *name*,                                  |
+---------------------------+-----+-------------------+------------------------------------------+
|                           |     | const string &    | *root\_attribute* = ``RootAttNotDef``    |
+---------------------------+-----+-------------------+------------------------------------------+
|                           | )   |                   |                                          |
+---------------------------+-----+-------------------+------------------------------------------+

Constructs a newly allocated
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__ object.

Parameters
    +-------------------+----------------------------------+
    | name              | The attribute name               |
    +-------------------+----------------------------------+
    | root\_attribute   | The root attribute name (FQAN)   |
    +-------------------+----------------------------------+

Member Function Documentation
-----------------------------

+-------------------------------------------------+-----+------------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::FwdAttr::set\_default\_properties   | (   | `UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__ &    | *prop*   | )   |    |
+-------------------------------------------------+-----+------------------------------------------------------------------------------------------+----------+-----+----+

Set default attribute properties.

Parameters
    +--------+-----------------------------------+
    | prop   | The user default property class   |
    +--------+-----------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `fwdattrdesc.h <../../d8/d3c/fwdattrdesc_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d1/dfc/classTango_1_1FwdAttr__inherit__graph.png
.. |Collaboration graph| image:: ../../de/d45/classTango_1_1FwdAttr__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
