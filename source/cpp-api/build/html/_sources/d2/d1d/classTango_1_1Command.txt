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
members <../../d3/d80/classTango_1_1Command-members.html>`__

Tango::Command Class Referenceabstract

`Server classes <../../da/d64/group__Server.html>`__

This class is a class representing a command in the TANGO device server
pattern. `More... <../../d2/d1d/classTango_1_1Command.html#details>`__

Inheritance diagram for Tango::Command:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`Command <../../d2/d1d/classTango_1_1Command.html#ac8aee54ed6b9c883f39a5a15a075c15f>`__
()

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object.
`More... <#ac8aee54ed6b9c883f39a5a15a075c15f>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#a3598206398bf3cb500d88bee3a1c76f4>`__
(const char \*s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.
`More... <#a3598206398bf3cb500d88bee3a1c76f4>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#af4b7d2ad7aa06b60eb273d9214b34af9>`__
(string &s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.
`More... <#af4b7d2ad7aa06b60eb273d9214b34af9>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#ac4e9596ebbf8ced45a8383185cbbeae4>`__
(const char \*s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, const char \*in\_desc, const char \*out\_desc)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description The command display level is set to OPERATOR.
`More... <#ac4e9596ebbf8ced45a8383185cbbeae4>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#a291c62e3e6d852b8c116b7b27c927a64>`__
(string &s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, string &in\_desc, string &out\_desc)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description The command display level is set to OPERATOR.
`More... <#a291c62e3e6d852b8c116b7b27c927a64>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#accaebfd69dc12dd6212a9228724c63a6>`__
(const char \*s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, Tango::DispLevel level)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.
`More... <#accaebfd69dc12dd6212a9228724c63a6>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#a99b6f06c975ad890fcb8f551ca6a42a7>`__
(string &s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, Tango::DispLevel level)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.
`More... <#a99b6f06c975ad890fcb8f551ca6a42a7>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#a34f9bd55d6766d58bc783000cfc3e908>`__
(const char \*s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, const char \*in\_desc, const char \*out\_desc, Tango::DispLevel
level)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description. `More... <#a34f9bd55d6766d58bc783000cfc3e908>`__

 

 

`Command <../../d2/d1d/classTango_1_1Command.html#a892d20cd88adcf27ccb7a5483027c856>`__
(string &s,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
in,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
out, string &in\_desc, string &out\_desc, Tango::DispLevel level)

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description. `More... <#a892d20cd88adcf27ccb7a5483027c856>`__

 

Destructor

Only one desctructor is defined for this class

virtual 

`~Command <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__
()

 

| The object desctructor.
`More... <#a05ff827c05911f69e56e3835345f5e84>`__

 

Miscellaneous methods

virtual CORBA::Any \* 

`execute <../../d2/d1d/classTango_1_1Command.html#a24505e18425086e1c6b84d7ba1f92503>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any)=0

 

| Execute the command. `More... <#a24505e18425086e1c6b84d7ba1f92503>`__

 

virtual bool 

`is\_allowed <../../d2/d1d/classTango_1_1Command.html#af634fd436701aca40fbcdaeb5d4691b1>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any)

 

| Check if the command is allowed in the actual device state.
`More... <#af634fd436701aca40fbcdaeb5d4691b1>`__

 

virtual void 

`init\_types <../../d2/d1d/classTango_1_1Command.html#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__
()

 

| Init command parameters type.
`More... <#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__

 

Get/Set object members.

These methods allows the external world to get/set
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ instance
data members

string & 

`get\_name <../../d2/d1d/classTango_1_1Command.html#aa6bfd85b7ee91b2c492fce5938fdaebe>`__
()

 

| Return the command name.
`More... <#aa6bfd85b7ee91b2c492fce5938fdaebe>`__

 

void 

`set\_name <../../d2/d1d/classTango_1_1Command.html#a13a2bbf037579b576dcee0bc9b55d8f2>`__
(string &new\_name)

 

| Set the command name. `More... <#a13a2bbf037579b576dcee0bc9b55d8f2>`__

 

string & 

`get\_lower\_name <../../d2/d1d/classTango_1_1Command.html#a92e8a62375817d7e812132e49ee27dc3>`__
()

 

| Return the command name in lower case letters.
`More... <#a92e8a62375817d7e812132e49ee27dc3>`__

 

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ 

`get\_in\_type <../../d2/d1d/classTango_1_1Command.html#a66cba1d14a421998571b5d871e31c155>`__
()

 

| Return the input parameter type.
`More... <#a66cba1d14a421998571b5d871e31c155>`__

 

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ 

`get\_out\_type <../../d2/d1d/classTango_1_1Command.html#ad2b89784882a915431128712973939ee>`__
()

 

| Return the output parameter type.
`More... <#ad2b89784882a915431128712973939ee>`__

 

string & 

`get\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#ae36c1e09f7be85f9bf88fbbf68ca436e>`__
()

 

| Return the input parameter description.
`More... <#ae36c1e09f7be85f9bf88fbbf68ca436e>`__

 

string & 

`get\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a32334cc5b6977f362a6ea50da4924653>`__
()

 

| Return the output parameter description.
`More... <#a32334cc5b6977f362a6ea50da4924653>`__

 

Tango::DispLevel 

`get\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a943bac0451ccabcb2e093911a6cf852f>`__
()

 

| Return the command display level.
`More... <#a943bac0451ccabcb2e093911a6cf852f>`__

 

void 

`set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a47b22bb3cdfdc732c84a07b6db753aba>`__
(const char \*desc)

 

| Set the input parameter description field.
`More... <#a47b22bb3cdfdc732c84a07b6db753aba>`__

 

void 

`set\_in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#aeb1db497ea77211071a7fd11cb2c9900>`__
(string &desc)

 

| Set the input parameter description field.
`More... <#aeb1db497ea77211071a7fd11cb2c9900>`__

 

void 

`set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#af421f59ba21cb3300d8ed5cdc28114ad>`__
(const char \*desc)

 

| Set the output parameter description field.
`More... <#af421f59ba21cb3300d8ed5cdc28114ad>`__

 

void 

`set\_out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a98bb11a3d9c82fd2e4bbde0ed28d3dcf>`__
(string &desc)

 

| Set the output parameter description field.
`More... <#a98bb11a3d9c82fd2e4bbde0ed28d3dcf>`__

 

void 

`set\_disp\_level <../../d2/d1d/classTango_1_1Command.html#a9108e06b866948d8ea6a5de2cde80853>`__
(Tango::DispLevel level)

 

| Set the command display level.
`More... <#a9108e06b866948d8ea6a5de2cde80853>`__

 

void 

`set\_polling\_period <../../d2/d1d/classTango_1_1Command.html#af8270bde5b9e4b9826419eabb8f8a3ec>`__
(long per)

 

| Set the command polling period.
`More... <#af8270bde5b9e4b9826419eabb8f8a3ec>`__

 

long 

`get\_polling\_period <../../d2/d1d/classTango_1_1Command.html#a1e60dcb1a8a89eb7e6596a2f0ecd87a7>`__
()

 

| Get the command polling period.
`More... <#a1e60dcb1a8a89eb7e6596a2f0ecd87a7>`__

 

Extract methods.

All these methods extract data from the CORBA Any object received as
command input data

void 

`extract <../../d2/d1d/classTango_1_1Command.html#aa8a75d6b22f8fd09e07d46982855d233>`__
(const CORBA::Any &in, Tango::DevBoolean &data)

 

| Extract a boolean data from a CORBA Any object.
`More... <#aa8a75d6b22f8fd09e07d46982855d233>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#af279abb75028ddd1d96950963fad06eb>`__
(const CORBA::Any &in, Tango::DevShort &data)

 

| Extract a short data from a CORBA Any object.
`More... <#af279abb75028ddd1d96950963fad06eb>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a1c95b781a6cf51bc330d89228a9e6526>`__
(const CORBA::Any &in, Tango::DevLong &data)

 

| Extract a long data from a CORBA Any object.
`More... <#a1c95b781a6cf51bc330d89228a9e6526>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a14a8016a57b8828deda2530119d650f3>`__
(const CORBA::Any &in, Tango::DevLong64 &data)

 

| Extract a 64 bits long data from a CORBA Any object.
`More... <#a14a8016a57b8828deda2530119d650f3>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#aeb2d6fcfa3acf6d4031af18884d22da7>`__
(const CORBA::Any &in, Tango::DevFloat &data)

 

| Extract a float data from a CORBA Any object.
`More... <#aeb2d6fcfa3acf6d4031af18884d22da7>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#af920614d03b5e1df3d7c7d74019ddc0e>`__
(const CORBA::Any &in, Tango::DevDouble &data)

 

| Extract a double data from a CORBA Any object.
`More... <#af920614d03b5e1df3d7c7d74019ddc0e>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a56cd878bc00bd6ca125b55e63d87528e>`__
(const CORBA::Any &in, Tango::DevUShort &data)

 

| Extract an unsigned short data from a CORBA Any object.
`More... <#a56cd878bc00bd6ca125b55e63d87528e>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#ad728692954b432d7eacdaaef88b23e34>`__
(const CORBA::Any &in, Tango::DevULong &data)

 

| Extract an unsigned long data from a CORBA Any object.
`More... <#ad728692954b432d7eacdaaef88b23e34>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#aa0cef124e525bf10049e549381d92e2d>`__
(const CORBA::Any &in, Tango::DevULong64 &data)

 

| Extract an unsigned 64 bits long data from a CORBA Any object.
`More... <#aa0cef124e525bf10049e549381d92e2d>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a422a40ed06a240af34d47ad01c82caee>`__
(const CORBA::Any &in, Tango::DevString &data)

 

| Extract a string from a CORBA Any object.
`More... <#a422a40ed06a240af34d47ad01c82caee>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#ac7af73b7e2addf8e28a4286b9f454957>`__
(const CORBA::Any &in, const char \*&data)

 

| Extract a const string from a CORBA Any object.
`More... <#ac7af73b7e2addf8e28a4286b9f454957>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#ae350209b019e0e27b72da229b701cfcb>`__
(const CORBA::Any &in, const Tango::DevVarCharArray \*&data)

 

| Extract a char array from a CORBA Any object.
`More... <#ae350209b019e0e27b72da229b701cfcb>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a3431556a6fc4fa01552f29b82cce7a8f>`__
(const CORBA::Any &in, const Tango::DevVarShortArray \*&data)

 

| Extract a short array from a CORBA Any object.
`More... <#a3431556a6fc4fa01552f29b82cce7a8f>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a490eab9fa4a80f25a9ee4b032c3cd3a8>`__
(const CORBA::Any &in, const Tango::DevVarLongArray \*&data)

 

| Extract a long array from a CORBA Any object.
`More... <#a490eab9fa4a80f25a9ee4b032c3cd3a8>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a5cd810f135a01c1872c03245d2636c1f>`__
(const CORBA::Any &in, const Tango::DevVarLong64Array \*&data)

 

| Extract a 64 bits long array from a CORBA Any object.
`More... <#a5cd810f135a01c1872c03245d2636c1f>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a71bce528c2210b2599afc8c656af333d>`__
(const CORBA::Any &in, const Tango::DevVarFloatArray \*&data)

 

| Extract a float array from a CORBA Any object.
`More... <#a71bce528c2210b2599afc8c656af333d>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#ab965311c14dafd6dc1d6e52af4378c62>`__
(const CORBA::Any &in, const Tango::DevVarDoubleArray \*&data)

 

| Extract a double array from a CORBA Any object.
`More... <#ab965311c14dafd6dc1d6e52af4378c62>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a1ab6c6ec18eb1cba2fee960c66cd8817>`__
(const CORBA::Any &in, const Tango::DevVarUShortArray \*&data)

 

| Extract a unsigned short array from a CORBA Any object.
`More... <#a1ab6c6ec18eb1cba2fee960c66cd8817>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#af21e73695aa983ae0ce584008db56208>`__
(const CORBA::Any &in, const Tango::DevVarULongArray \*&data)

 

| Extract a unsigned long array from a CORBA Any object.
`More... <#af21e73695aa983ae0ce584008db56208>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a1d4f0266427dc4ef7cfbeaf931771553>`__
(const CORBA::Any &in, const Tango::DevVarULong64Array \*&data)

 

| Extract a unsigned 64 bits long array from a CORBA Any object.
`More... <#a1d4f0266427dc4ef7cfbeaf931771553>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a80c2ff23d561a93f06ea7a869734de4a>`__
(const CORBA::Any &in, const Tango::DevVarStringArray \*&data)

 

| Extract a string array from a CORBA Any object.
`More... <#a80c2ff23d561a93f06ea7a869734de4a>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a048a55e9d37d70f3e1120b37c730baab>`__
(const CORBA::Any &in, const Tango::DevVarLongStringArray \*&data)

 

| Extract a DevVarLongStringArray data from a CORBA Any object.
`More... <#a048a55e9d37d70f3e1120b37c730baab>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#ab1ee52c490c42f9a0727d778892bdc3c>`__
(const CORBA::Any &in, const Tango::DevVarDoubleStringArray \*&data)

 

| Extract a DevVarDoubleStringArray data from a CORBA Any object.
`More... <#ab1ee52c490c42f9a0727d778892bdc3c>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#acb2054505f53b0b638b3aab737289e8d>`__
(const CORBA::Any &in, Tango::DevState &data)

 

| Extract a `Tango <../../de/ddf/namespaceTango.html>`__ device state
data from a CORBA Any object.
`More... <#acb2054505f53b0b638b3aab737289e8d>`__

 

void 

`extract <../../d2/d1d/classTango_1_1Command.html#a1cc83923947f3305ddcc4980767121ea>`__
(const CORBA::Any &in, const Tango::DevEncoded \*&data)

 

| Extract a `Tango <../../de/ddf/namespaceTango.html>`__ DevEncoded data
from a CORBA Any object.
`More... <#a1cc83923947f3305ddcc4980767121ea>`__

 

Insert methods.

All these methods create a CORBA Any object and insert data into this
object

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a665614cc771db2aeeef0f5a0ac1a1903>`__
()

 

| Create an empty CORBA Any object.
`More... <#a665614cc771db2aeeef0f5a0ac1a1903>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a7c8f1595a81d800beb9845377716c29a>`__
(Tango::DevBoolean data)

 

| Create a CORBA Any object and insert a Tango::DevBoolean data in it.
`More... <#a7c8f1595a81d800beb9845377716c29a>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#ab515b6bc55aedf12258d5487589f7eb6>`__
(Tango::DevShort data)

 

| Create a CORBA Any object and insert a Tango::DevShort data in it.
`More... <#ab515b6bc55aedf12258d5487589f7eb6>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#ac7d5016d95647f8a68fef9e15bffbe90>`__
(Tango::DevLong data)

 

| Create a CORBA Any object and insert a Tango::DevLong data in it.
`More... <#ac7d5016d95647f8a68fef9e15bffbe90>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#ac1488aec40ba1e78d7cd1b3dc426f9b6>`__
(Tango::DevLong64 data)

 

| Create a CORBA Any object and insert a Tango::DevLong64 data in it.
`More... <#ac1488aec40ba1e78d7cd1b3dc426f9b6>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a5f3653dc4a432fea2fb66c7e7dc2e136>`__
(Tango::DevFloat data)

 

| Create a CORBA Any object and insert a Tango::DevFloat data in it.
`More... <#a5f3653dc4a432fea2fb66c7e7dc2e136>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#aa7b766f514c72b9da575685673ceb77c>`__
(Tango::DevDouble data)

 

| Create a CORBA Any object and insert a Tango::DevDouble data in it.
`More... <#aa7b766f514c72b9da575685673ceb77c>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a3b7333363e69cd16b89fdfcdd54cab3c>`__
(Tango::DevUShort data)

 

| Create a CORBA Any object and insert a Tango::DevUShort data in it.
`More... <#a3b7333363e69cd16b89fdfcdd54cab3c>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a8a9a2a06e2afcf9b1824bbe2ba2687ff>`__
(Tango::DevULong data)

 

| Create a CORBA Any object and insert a Tango::DevULong data in it.
`More... <#a8a9a2a06e2afcf9b1824bbe2ba2687ff>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a2a2c6e4f5434446cf3a1aec4412b7b0f>`__
(Tango::DevULong64 data)

 

| Create a CORBA Any object and insert a Tango::DevULong64 data in it.
`More... <#a2a2c6e4f5434446cf3a1aec4412b7b0f>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a06b833d3639d8f24d8f5cfb7480c94bb>`__
(Tango::DevString data)

 

| Create a CORBA Any object and insert a Tango::DevString data in it.
`More... <#a06b833d3639d8f24d8f5cfb7480c94bb>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a6c16c497b7eef06ed4ff880ce02d5894>`__
(const char \*data)

 

| Create a CORBA Any object and insert a Tango::DevString data in it.
`More... <#a6c16c497b7eef06ed4ff880ce02d5894>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a4c5c0bc9b364c5d2f377143597aec833>`__
(Tango::DevVarCharArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarCharArray data in
it. `More... <#a4c5c0bc9b364c5d2f377143597aec833>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#aa7457591f2ef2b110535fc8e9bff81aa>`__
(Tango::DevVarCharArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarCharArray data in
it. `More... <#aa7457591f2ef2b110535fc8e9bff81aa>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a42fcd1d6068dee4f2640be160afe8af6>`__
(Tango::DevVarShortArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarShortArray data in
it. `More... <#a42fcd1d6068dee4f2640be160afe8af6>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a37ddcc3509f439e9994d985310075a69>`__
(Tango::DevVarShortArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarShortArray data in
it. `More... <#a37ddcc3509f439e9994d985310075a69>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a7d8c4de9c8010994f58d0571b4bf9863>`__
(Tango::DevVarLongArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarLongArray data in
it. `More... <#a7d8c4de9c8010994f58d0571b4bf9863>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a1f1ddff524fd99c2878062a4c3f451ea>`__
(Tango::DevVarLongArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarLongArray data in
it. `More... <#a1f1ddff524fd99c2878062a4c3f451ea>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a1961e3fa4dd9f3b4034b01b896936b01>`__
(Tango::DevVarLong64Array &data)

 

| Create a CORBA Any object and insert a Tango::DevVarLong64Array data
in it. `More... <#a1961e3fa4dd9f3b4034b01b896936b01>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#aaebcc600e513cc5370ee2c827c401da1>`__
(Tango::DevVarLong64Array \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarLong64Array data
in it. `More... <#aaebcc600e513cc5370ee2c827c401da1>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#acb1861ed6136daedc511ad7fac6cbd47>`__
(Tango::DevVarFloatArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarFloatArray data in
it. `More... <#acb1861ed6136daedc511ad7fac6cbd47>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#adb44f35e4d13c44f3ca855c8d4ca82fd>`__
(Tango::DevVarFloatArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarFloatArray data in
it. `More... <#adb44f35e4d13c44f3ca855c8d4ca82fd>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a93be182d51d3cf48c1bde5effe7e75a8>`__
(Tango::DevVarDoubleArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarDoubleArray data
in it. `More... <#a93be182d51d3cf48c1bde5effe7e75a8>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a6ed55e2aa4d58c6cdd79e610a1364238>`__
(Tango::DevVarDoubleArray \*data)

 

| Create a CORBA CORBA::Any object and insert a Tango::DevVarDoubleArray
data in it. `More... <#a6ed55e2aa4d58c6cdd79e610a1364238>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a36a523ad2ca65bf8d60f571fcc465f0b>`__
(Tango::DevVarUShortArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarUShortArray data
in it. `More... <#a36a523ad2ca65bf8d60f571fcc465f0b>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a2ffc06bc6da1dc9021bdf736a9e48312>`__
(Tango::DevVarUShortArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarUShortArray data
in it. `More... <#a2ffc06bc6da1dc9021bdf736a9e48312>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#afee3e64ef79c31468ee691bec989e02f>`__
(Tango::DevVarULongArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarULongArray data in
it. `More... <#afee3e64ef79c31468ee691bec989e02f>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a2825c793c7d4fb598ab4d4161d332943>`__
(Tango::DevVarULongArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarULongArray data in
it. `More... <#a2825c793c7d4fb598ab4d4161d332943>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#ad18d9ad16a986040425e13c3f96e64dd>`__
(Tango::DevVarULong64Array &data)

 

| Create a CORBA Any object and insert a Tango::DevVarULong64Array data
in it. `More... <#ad18d9ad16a986040425e13c3f96e64dd>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a5905a365cafebb13ff514c0526ab1a35>`__
(Tango::DevVarULong64Array \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarULong64Array data
in it. `More... <#a5905a365cafebb13ff514c0526ab1a35>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a759ae1a8f289ea77001650e0dd9dc73b>`__
(Tango::DevVarStringArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarStringArray data
in it. `More... <#a759ae1a8f289ea77001650e0dd9dc73b>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a14366c96e3d99893fb8daac9fb6639c1>`__
(Tango::DevVarStringArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarStringArray data
in it. `More... <#a14366c96e3d99893fb8daac9fb6639c1>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a72142fc4ebb29ff2b176cbbdae61034a>`__
(Tango::DevVarLongStringArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarLongStringArray
data in it. `More... <#a72142fc4ebb29ff2b176cbbdae61034a>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a2678ebf879cf014aa55fff6f2bdc10bb>`__
(Tango::DevVarLongStringArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarLongStringArray
data in it. `More... <#a2678ebf879cf014aa55fff6f2bdc10bb>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#ab44d0a90519efd1f357ca0875d98f4e7>`__
(Tango::DevVarDoubleStringArray &data)

 

| Create a CORBA Any object and insert a Tango::DevVarDoubleStringArray
data in it. `More... <#ab44d0a90519efd1f357ca0875d98f4e7>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#afe5aa741af2de317e44cdafe65e2f3a4>`__
(Tango::DevVarDoubleStringArray \*data)

 

| Create a CORBA Any object and insert a Tango::DevVarDoubleStringArray
data in it. `More... <#afe5aa741af2de317e44cdafe65e2f3a4>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#af4c02c4968ea0fa878424507d6edb8d3>`__
(Tango::DevState data)

 

| Create a CORBA Any object and insert a Tango::DevState data in it.
`More... <#af4c02c4968ea0fa878424507d6edb8d3>`__

 

CORBA::Any \* 

`insert <../../d2/d1d/classTango_1_1Command.html#a21a6cda05b9c4182c7d0ef2e6bb01c0a>`__
(Tango::DevEncoded \*data)

 

| Create a CORBA Any object and insert a Tango::DevEncoded data in it.
`More... <#a21a6cda05b9c4182c7d0ef2e6bb01c0a>`__

 

Protected Attributes
--------------------

Class data members

string 

`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__

 

| The command name. `More... <#afd9067bb0dcbcf46ca658ce7710ae025>`__

 

string 

`lower\_name <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__

 

| The command name in lower case.
`More... <#a7187d828d36d73bc501bb9ab69772c44>`__

 

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ 

`in\_type <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__

 

| The command input parameter type.
`More... <#aea59b62f46dc56304b2f99fa05a70109>`__

 

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ 

`out\_type <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__

 

| The command output parameter type.
`More... <#a61071f19ab2f13b56d820c71bb6635b2>`__

 

string 

`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__

 

| The command input parameter description.
`More... <#abe71e67349296d10e641bf246a258fd7>`__

 

string 

`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__

 

| The command output parameter type.
`More... <#a835b44d92d834adfb87606ba5073cb15>`__

 

Detailed Description
--------------------

This class is a class representing a command in the TANGO device server
pattern.

it is an abstract class. It is the root class for all command related
classes for command implemented with the inheritance model or with the
template command model

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +---------------------------+-----+- | inline                               |
| ---+-----+----+                      |                                      |
| | Tango::Command::Command   | (   |  |                                      |
|    | )   |    |                      |                                      |
| +---------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object.

The default constructor

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
| Tango::Command::Command   | (   | const char \*                                                                                 | *s*,     |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           | )   |                                                                                               |          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.

The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +-------+-------------------------------------+
    | s     | The command name                    |
    +-------+-------------------------------------+
    | in    | The command input parameter type    |
    +-------+-------------------------------------+
    | out   | The command output parameter type   |
    +-------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
| Tango::Command::Command   | (   | string &                                                                                      | *s*,     |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+
|                           | )   |                                                                                               |          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.

The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +-------+-------------------------------------+
    | s     | The command name                    |
    +-------+-------------------------------------+
    | in    | The command input parameter type    |
    +-------+-------------------------------------+
    | out   | The command output parameter type   |
    +-------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
| Tango::Command::Command   | (   | const char \*                                                                                 | *s*,           |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,         |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | const char \*                                                                                 | *in\_desc*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | const char \*                                                                                 | *out\_desc*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           | )   |                                                                                               |                |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description The command display level is set to OPERATOR.

Parameters
    +-------------+-------------------------------------+
    | s           | The command name                    |
    +-------------+-------------------------------------+
    | in          | The command input parameter type    |
    +-------------+-------------------------------------+
    | out         | The command output parameter type   |
    +-------------+-------------------------------------+
    | in\_desc    | The input parameter description     |
    +-------------+-------------------------------------+
    | out\_desc   | The output parameter description    |
    +-------------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
| Tango::Command::Command   | (   | string &                                                                                      | *s*,           |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,         |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | string &                                                                                      | *in\_desc*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | string &                                                                                      | *out\_desc*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           | )   |                                                                                               |                |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description The command display level is set to OPERATOR.

Parameters
    +-------------+-------------------------------------+
    | s           | The command name                    |
    +-------------+-------------------------------------+
    | in          | The command input parameter type    |
    +-------------+-------------------------------------+
    | out         | The command output parameter type   |
    +-------------+-------------------------------------+
    | in\_desc    | The input parameter description     |
    +-------------+-------------------------------------+
    | out\_desc   | The output parameter description    |
    +-------------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
| Tango::Command::Command   | (   | const char \*                                                                                 | *s*,       |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,      |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,     |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | Tango::DispLevel                                                                              | *level*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           | )   |                                                                                               |            |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.

The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +---------+-------------------------------------+
    | s       | The command name                    |
    +---------+-------------------------------------+
    | in      | The command input parameter type    |
    +---------+-------------------------------------+
    | out     | The command output parameter type   |
    +---------+-------------------------------------+
    | level   | The command display level           |
    +---------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
| Tango::Command::Command   | (   | string &                                                                                      | *s*,       |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,      |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,     |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           |     | Tango::DispLevel                                                                              | *level*    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+
|                           | )   |                                                                                               |            |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name and its input and output parameter types.

The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +---------+-------------------------------------+
    | s       | The command name                    |
    +---------+-------------------------------------+
    | in      | The command input parameter type    |
    +---------+-------------------------------------+
    | out     | The command output parameter type   |
    +---------+-------------------------------------+
    | level   | The command display level           |
    +---------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
| Tango::Command::Command   | (   | const char \*                                                                                 | *s*,           |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,         |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | const char \*                                                                                 | *in\_desc*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | const char \*                                                                                 | *out\_desc*,   |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | Tango::DispLevel                                                                              | *level*        |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           | )   |                                                                                               |                |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description.

Parameters
    +-------------+-------------------------------------+
    | s           | The command name                    |
    +-------------+-------------------------------------+
    | in          | The command input parameter type    |
    +-------------+-------------------------------------+
    | out         | The command output parameter type   |
    +-------------+-------------------------------------+
    | in\_desc    | The input parameter description     |
    +-------------+-------------------------------------+
    | out\_desc   | The output parameter description    |
    +-------------+-------------------------------------+
    | level       | The command display level           |
    +-------------+-------------------------------------+

+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
| Tango::Command::Command   | (   | string &                                                                                      | *s*,           |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *in*,          |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__    | *out*,         |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | string &                                                                                      | *in\_desc*,    |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | string &                                                                                      | *out\_desc*,   |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           |     | Tango::DispLevel                                                                              | *level*        |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+
|                           | )   |                                                                                               |                |
+---------------------------+-----+-----------------------------------------------------------------------------------------------+----------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object for a
command from its name, its input and output parameter types plus
parameters description.

Parameters
    +-------------+-------------------------------------+
    | s           | The command name                    |
    +-------------+-------------------------------------+
    | in          | The command input parameter type    |
    +-------------+-------------------------------------+
    | out         | The command output parameter type   |
    +-------------+-------------------------------------+
    | in\_desc    | The input parameter description     |
    +-------------+-------------------------------------+
    | out\_desc   | The output parameter description    |
    +-------------+-------------------------------------+
    | level       | The command display level           |
    +-------------+-------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -+-----+----+-----+----+             |                                      |
| | virtual Tango::Command::~Command   |                                      |
|  | (   |    | )   |    |             |                                      |
| +----------------------------------- |                                      |
| -+-----+----+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The object desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------------+      |                                      |
| | virtual CORBA::Any\* Tango::Comman |                                      |
| d::execute   | (   | `DeviceImpl <.. |                                      |
| /../d3/d62/classTango_1_1DeviceImpl. |                                      |
| html>`__ \*    | *dev*,       |      |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------------+      |                                      |
| |                                    |                                      |
|              |     | const CORBA::An |                                      |
| y &                                  |                                      |
|                | *in\_any*    |      |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------------+      |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                |              |      |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------------+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Execute the command.

This method is automtically called by the TANGO core classes when the
associated command is requested by a client. This method is abstract and
must be redefined in each sub-class

Parameters
    +-----------+---------------------------------------------------------+
    | dev       | The device on which the command must be executed        |
    +-----------+---------------------------------------------------------+
    | in\_any   | The incoming data still packed in a CORBA Any object.   |
    +-----------+---------------------------------------------------------+

Returns
    The CORBA Any object returned to the client.

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the execution method failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------+

Implemented in `Tango::TemplCommandOut< OUTARG
> <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__,
`Tango::TemplCommandIn< INARG
> <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__,
`Tango::TemplCommandInOut< INARG, OUTARG
> <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__,
and
`Tango::TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ac0f9217e1c13600d3ba449ceb6a25cd3>`__.

+--------------------------------+-----+------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &     | *in*,     |
+--------------------------------+-----+------------------------+-----------+
|                                |     | Tango::DevBoolean &    | *data*    |
+--------------------------------+-----+------------------------+-----------+
|                                | )   |                        |           |
+--------------------------------+-----+------------------------+-----------+

Extract a boolean data from a CORBA Any object.

Parameters
    +--------+-------------------------------------------+
    | in     | The CORBA Any object                      |
    +--------+-------------------------------------------+
    | data   | Reference to the extracted boolean data   |
    +--------+-------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevShort &     | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a short data from a CORBA Any object.

Parameters
    +--------+-----------------------------------------+
    | in     | The CORBA Any object                    |
    +--------+-----------------------------------------+
    | data   | Reference to the extracted short data   |
    +--------+-----------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevLong &      | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a long data from a CORBA Any object.

Parameters
    +--------+----------------------------------------+
    | in     | The CORBA Any object                   |
    +--------+----------------------------------------+
    | data   | Reference to the extracted long data   |
    +--------+----------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevLong64 &    | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a 64 bits long data from a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | in     | The CORBA Any object                           |
    +--------+------------------------------------------------+
    | data   | Reference to the extracted 64 bits long data   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevFloat &     | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a float data from a CORBA Any object.

Parameters
    +--------+-----------------------------------------+
    | in     | The CORBA Any object                    |
    +--------+-----------------------------------------+
    | data   | Reference to the extracted float data   |
    +--------+-----------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevDouble &    | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a double data from a CORBA Any object.

Parameters
    +--------+------------------------------------------+
    | in     | The CORBA Any object                     |
    +--------+------------------------------------------+
    | data   | Reference to the extracted double data   |
    +--------+------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevUShort &    | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract an unsigned short data from a CORBA Any object.

Parameters
    +--------+--------------------------------------------------+
    | in     | The CORBA Any object                             |
    +--------+--------------------------------------------------+
    | data   | Reference to the extracted unsigned short data   |
    +--------+--------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contanis a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevULong &     | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract an unsigned long data from a CORBA Any object.

Parameters
    +--------+-------------------------------------------------+
    | in     | The CORBA Any object                            |
    +--------+-------------------------------------------------+
    | data   | Reference to the extracted unsigned long data   |
    +--------+-------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contanis a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &     | *in*,     |
+--------------------------------+-----+------------------------+-----------+
|                                |     | Tango::DevULong64 &    | *data*    |
+--------------------------------+-----+------------------------+-----------+
|                                | )   |                        |           |
+--------------------------------+-----+------------------------+-----------+

Extract an unsigned 64 bits long data from a CORBA Any object.

Parameters
    +--------+---------------------------------------------------------+
    | in     | The CORBA Any object                                    |
    +--------+---------------------------------------------------------+
    | data   | Reference to the extracted unsigned 64 bits long data   |
    +--------+---------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contanis a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevString &    | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a string from a CORBA Any object.

Parameters
    +--------+------------------------------------------+
    | in     | The CORBA Any object                     |
    +--------+------------------------------------------+
    | data   | Reference to the extracted string data   |
    +--------+------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | const char \*&        | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a const string from a CORBA Any object.

Parameters
    +--------+------------------------------------------+
    | in     | The CORBA Any object                     |
    +--------+------------------------------------------+
    | data   | Reference to the extracted string data   |
    +--------+------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                  | *in*,     |
+--------------------------------+-----+-------------------------------------+-----------+
|                                |     | const Tango::DevVarCharArray \*&    | *data*    |
+--------------------------------+-----+-------------------------------------+-----------+
|                                | )   |                                     |           |
+--------------------------------+-----+-------------------------------------+-----------+

Extract a char array from a CORBA Any object.

Parameters
    +--------+-----------------------------------------+
    | in     | The CORBA Any object                    |
    +--------+-----------------------------------------+
    | data   | Reference to the extracted char array   |
    +--------+-----------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+--------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                   | *in*,     |
+--------------------------------+-----+--------------------------------------+-----------+
|                                |     | const Tango::DevVarShortArray \*&    | *data*    |
+--------------------------------+-----+--------------------------------------+-----------+
|                                | )   |                                      |           |
+--------------------------------+-----+--------------------------------------+-----------+

Extract a short array from a CORBA Any object.

Parameters
    +--------+------------------------------------------+
    | in     | The CORBA Any object                     |
    +--------+------------------------------------------+
    | data   | Reference to the extracted short array   |
    +--------+------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                  | *in*,     |
+--------------------------------+-----+-------------------------------------+-----------+
|                                |     | const Tango::DevVarLongArray \*&    | *data*    |
+--------------------------------+-----+-------------------------------------+-----------+
|                                | )   |                                     |           |
+--------------------------------+-----+-------------------------------------+-----------+

Extract a long array from a CORBA Any object.

Parameters
    +--------+-----------------------------------------+
    | in     | The CORBA Any object                    |
    +--------+-----------------------------------------+
    | data   | Reference to the extracted long array   |
    +--------+-----------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+---------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                    | *in*,     |
+--------------------------------+-----+---------------------------------------+-----------+
|                                |     | const Tango::DevVarLong64Array \*&    | *data*    |
+--------------------------------+-----+---------------------------------------+-----------+
|                                | )   |                                       |           |
+--------------------------------+-----+---------------------------------------+-----------+

Extract a 64 bits long array from a CORBA Any object.

Parameters
    +--------+-------------------------------------------------+
    | in     | The CORBA Any object                            |
    +--------+-------------------------------------------------+
    | data   | Reference to the extracted 64 bits long array   |
    +--------+-------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+--------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                   | *in*,     |
+--------------------------------+-----+--------------------------------------+-----------+
|                                |     | const Tango::DevVarFloatArray \*&    | *data*    |
+--------------------------------+-----+--------------------------------------+-----------+
|                                | )   |                                      |           |
+--------------------------------+-----+--------------------------------------+-----------+

Extract a float array from a CORBA Any object.

Parameters
    +--------+------------------------------------------+
    | in     | The CORBA Any object                     |
    +--------+------------------------------------------+
    | data   | Reference to the extracted float array   |
    +--------+------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+---------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                    | *in*,     |
+--------------------------------+-----+---------------------------------------+-----------+
|                                |     | const Tango::DevVarDoubleArray \*&    | *data*    |
+--------------------------------+-----+---------------------------------------+-----------+
|                                | )   |                                       |           |
+--------------------------------+-----+---------------------------------------+-----------+

Extract a double array from a CORBA Any object.

Parameters
    +--------+-------------------------------------------+
    | in     | The CORBA Any object                      |
    +--------+-------------------------------------------+
    | data   | Reference to the extracted double array   |
    +--------+-------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+---------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                    | *in*,     |
+--------------------------------+-----+---------------------------------------+-----------+
|                                |     | const Tango::DevVarUShortArray \*&    | *data*    |
+--------------------------------+-----+---------------------------------------+-----------+
|                                | )   |                                       |           |
+--------------------------------+-----+---------------------------------------+-----------+

Extract a unsigned short array from a CORBA Any object.

Parameters
    +--------+--------------------------------------------------+
    | in     | The CORBA Any object                             |
    +--------+--------------------------------------------------+
    | data   | Reference to the extracted unsigned char array   |
    +--------+--------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+--------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                   | *in*,     |
+--------------------------------+-----+--------------------------------------+-----------+
|                                |     | const Tango::DevVarULongArray \*&    | *data*    |
+--------------------------------+-----+--------------------------------------+-----------+
|                                | )   |                                      |           |
+--------------------------------+-----+--------------------------------------+-----------+

Extract a unsigned long array from a CORBA Any object.

Parameters
    +--------+--------------------------------------------------+
    | in     | The CORBA Any object                             |
    +--------+--------------------------------------------------+
    | data   | Reference to the extracted unsigned long array   |
    +--------+--------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+----------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                     | *in*,     |
+--------------------------------+-----+----------------------------------------+-----------+
|                                |     | const Tango::DevVarULong64Array \*&    | *data*    |
+--------------------------------+-----+----------------------------------------+-----------+
|                                | )   |                                        |           |
+--------------------------------+-----+----------------------------------------+-----------+

Extract a unsigned 64 bits long array from a CORBA Any object.

Parameters
    +--------+----------------------------------------------------------+
    | in     | The CORBA Any object                                     |
    +--------+----------------------------------------------------------+
    | data   | Reference to the extracted unsigned 64 bits long array   |
    +--------+----------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+---------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                    | *in*,     |
+--------------------------------+-----+---------------------------------------+-----------+
|                                |     | const Tango::DevVarStringArray \*&    | *data*    |
+--------------------------------+-----+---------------------------------------+-----------+
|                                | )   |                                       |           |
+--------------------------------+-----+---------------------------------------+-----------+

Extract a string array from a CORBA Any object.

Parameters
    +--------+-------------------------------------------+
    | in     | The CORBA Any object                      |
    +--------+-------------------------------------------+
    | data   | Reference to the extracted string array   |
    +--------+-------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-------------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                        | *in*,     |
+--------------------------------+-----+-------------------------------------------+-----------+
|                                |     | const Tango::DevVarLongStringArray \*&    | *data*    |
+--------------------------------+-----+-------------------------------------------+-----------+
|                                | )   |                                           |           |
+--------------------------------+-----+-------------------------------------------+-----------+

Extract a DevVarLongStringArray data from a CORBA Any object.

Parameters
    +--------+---------------------------------------------------------+
    | in     | The CORBA Any object                                    |
    +--------+---------------------------------------------------------+
    | data   | Reference to the extracted DevVarLongStringArray data   |
    +--------+---------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+---------------------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &                          | *in*,     |
+--------------------------------+-----+---------------------------------------------+-----------+
|                                |     | const Tango::DevVarDoubleStringArray \*&    | *data*    |
+--------------------------------+-----+---------------------------------------------+-----------+
|                                | )   |                                             |           |
+--------------------------------+-----+---------------------------------------------+-----------+

Extract a DevVarDoubleStringArray data from a CORBA Any object.

Parameters
    +--------+-----------------------------------------------------------+
    | in     | The CORBA Any object                                      |
    +--------+-----------------------------------------------------------+
    | data   | Reference to the extracted DevVarDoubleStringArray data   |
    +--------+-----------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+-----------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &    | *in*,     |
+--------------------------------+-----+-----------------------+-----------+
|                                |     | Tango::DevState &     | *data*    |
+--------------------------------+-----+-----------------------+-----------+
|                                | )   |                       |           |
+--------------------------------+-----+-----------------------+-----------+

Extract a `Tango <../../de/ddf/namespaceTango.html>`__ device state data
from a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | in     | The CORBA Any object                           |
    +--------+------------------------------------------------+
    | data   | Reference to the extracted device state data   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------+-----+--------------------------------+-----------+
| void Tango::Command::extract   | (   | const CORBA::Any &             | *in*,     |
+--------------------------------+-----+--------------------------------+-----------+
|                                |     | const Tango::DevEncoded \*&    | *data*    |
+--------------------------------+-----+--------------------------------+-----------+
|                                | )   |                                |           |
+--------------------------------+-----+--------------------------------+-----------+

Extract a `Tango <../../de/ddf/namespaceTango.html>`__ DevEncoded data
from a CORBA Any object.

Parameters
    +--------+----------------------------------------------+
    | in     | The CORBA Any object                         |
    +--------+----------------------------------------------+
    | data   | Reference to the extracted DevEncoded data   |
    +--------+----------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object does not contains a data of the waited type. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | Tango::DispLevel Tango::Command::g |                                      |
| et\_disp\_level   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the command display level.

Returns
    The command display level

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
| | `Tango::CmdArgType <../../de/ddf/n |                                      |
| amespaceTango.html#a86ed7ac243c13a78 |                                      |
| 13f08c3b899af170>`__ Tango::Command: |                                      |
| :get\_in\_type   | (   |    | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+----+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the input parameter type.

Returns
    The input parameter type

References
`in\_type <../../d2/d1d/classTango_1_1Command.html#aea59b62f46dc56304b2f99fa05a70109>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+----+-----+----+  |                                      |
| | string& Tango::Command::get\_in\_t |                                      |
| ype\_desc   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the input parameter description.

Returns
    The input parameter description

References
`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | string& Tango::Command::get\_lower |                                      |
| \_name   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the command name in lower case letters.

Returns
    The command name

References
`lower\_name <../../d2/d1d/classTango_1_1Command.html#a7187d828d36d73bc501bb9ab69772c44>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+----+-----+----+            |                                      |
| | string& Tango::Command::get\_name  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the command name.

Returns
    The command name

References
`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | `Tango::CmdArgType <../../de/ddf/n |                                      |
| amespaceTango.html#a86ed7ac243c13a78 |                                      |
| 13f08c3b899af170>`__ Tango::Command: |                                      |
| :get\_out\_type   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the output parameter type.

Returns
    The output parameter type

References
`out\_type <../../d2/d1d/classTango_1_1Command.html#a61071f19ab2f13b56d820c71bb6635b2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------+-----+----+-----+----+ |                                      |
| | string& Tango::Command::get\_out\_ |                                      |
| type\_desc   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the output parameter description.

Returns
    The output parameter description

References
`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+----+-----+----+    |                                      |
| | long Tango::Command::get\_polling\ |                                      |
| _period   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the command polling period.

Returns
    The command polling period (in mS)

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+----+-----+----+     |                                      |
| | virtual void Tango::Command::init\ |                                      |
| _types   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Init command parameters type.

This method is used only for command implemented using the
`Tango <../../de/ddf/namespaceTango.html>`__ template command model. In
this base class, it does nothing and is re-define in sub-classes.

Reimplemented in `Tango::TemplCommandOut< OUTARG
> <../../d3/d87/classTango_1_1TemplCommandOut.html#a1b5ec68cc6e225868dc3d56186eb7605>`__,
`Tango::TemplCommandIn< INARG
> <../../d2/d50/classTango_1_1TemplCommandIn.html#af3e93eb4babf25ea9552dc0e8f0789c3>`__,
and `Tango::TemplCommandInOut< INARG, OUTARG
> <../../db/dbb/classTango_1_1TemplCommandInOut.html#a9d173fb2b7578838e94f9a94d6d98757>`__.

+---------------------------------------+-----+----+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   |    | )   |    |
+---------------------------------------+-----+----+-----+----+

Create an empty CORBA Any object.

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+----------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevBoolean    | *data*   | )   |    |
+---------------------------------------+-----+----------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevBoolean data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevShort    | *data*   | )   |    |
+---------------------------------------+-----+--------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevShort data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevLong    | *data*   | )   |    |
+---------------------------------------+-----+-------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevLong data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+---------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevLong64    | *data*   | )   |    |
+---------------------------------------+-----+---------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevLong64 data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevFloat    | *data*   | )   |    |
+---------------------------------------+-----+--------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevFloat data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+---------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevDouble    | *data*   | )   |    |
+---------------------------------------+-----+---------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevDouble data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+---------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevUShort    | *data*   | )   |    |
+---------------------------------------+-----+---------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevUShort data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevULong    | *data*   | )   |    |
+---------------------------------------+-----+--------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevULong data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+----------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevULong64    | *data*   | )   |    |
+---------------------------------------+-----+----------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevULong64 data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+---------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevString    | *data*   | )   |    |
+---------------------------------------+-----+---------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevString data in it.

This method will also de-allocate the string passed as parameter.

Parameters
    +--------+-------------------------------------------------+
    | data   | The string to be inserted into the Any object   |
    +--------+-------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | const char \*    | *data*   | )   |    |
+---------------------------------------+-----+------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevString data in it.

Te parameter type is char \* and not Tango::DevString because the const
C++ modifier applied to a Tango::DevString make the pointer constant and
not the pointed to characters to be constant.

Parameters
    +--------+-------------------------------------------------+
    | data   | The string to be inserted into the Any object   |
    +--------+-------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarCharArray &    | *data*   | )   |    |
+---------------------------------------+-----+-----------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarCharArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarCharArray \*    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarCharArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarCharArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarShortArray &    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarShortArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarShortArray \*    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarShortArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarShortArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLongArray &    | *data*   | )   |    |
+---------------------------------------+-----+-----------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLongArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLongArray \*    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLongArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarLongArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLong64Array &    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLong64Array data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLong64Array \*    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLong64Array data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarLongArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarFloatArray &    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarFloatArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarFloatArray \*    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarFloatArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarFloatArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarDoubleArray &    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarDoubleArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarDoubleArray \*    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------+----------+-----+----+

Create a CORBA CORBA::Any object and insert a Tango::DevVarDoubleArray
data in it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarDoubleArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarUShortArray &    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarUShortArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarUShortArray \*    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarUShortArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarUShortArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarULongArray &    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarULongArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarULongArray \*    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarULongArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarULongArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarULong64Array &    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarULong64Array data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+---------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarULong64Array \*    | *data*   | )   |    |
+---------------------------------------+-----+---------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarULong64Array data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarULongArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarStringArray &    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarStringArray data in
it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarStringArray \*    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarStringArray data in
it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarStringArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLongStringArray &    | *data*   | )   |    |
+---------------------------------------+-----+-----------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLongStringArray data
in it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarLongStringArray \*    | *data*   | )   |    |
+---------------------------------------+-----+------------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarLongStringArray data
in it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarLongStringArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarDoubleStringArray &    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarDoubleStringArray
data in it.

This method will do a **deep copy** of the array into the Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevVarDoubleStringArray \*    | *data*   | )   |    |
+---------------------------------------+-----+--------------------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevVarDoubleStringArray
data in it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarDoubleStringArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+--------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevState    | *data*   | )   |    |
+---------------------------------------+-----+--------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevState data in it.

Parameters
    +--------+-----------------------------------------------+
    | data   | The data to be inserted into the Any object   |
    +--------+-----------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+----------+-----+----+
| CORBA::Any\* Tango::Command::insert   | (   | Tango::DevEncoded \*    | *data*   | )   |    |
+---------------------------------------+-----+-------------------------+----------+-----+----+

Create a CORBA Any object and insert a Tango::DevEncoded data in it.

This method **consumes** the memory used by the array. When the CORBA
layer will destroy the Any object, the memory alloacted for the array
will also be freed. This is the recommended method to insert
Tango::DevVarDoubleStringArray data type into a CORBA Any object.

Parameters
    +--------+------------------------------------------------+
    | data   | The array to be inserted into the Any object   |
    +--------+------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the Any object creation failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------------+          |                                      |
| | virtual bool Tango::Command::is\_a |                                      |
| llowed   | (   | `DeviceImpl <../../ |                                      |
| d3/d62/classTango_1_1DeviceImpl.html |                                      |
| >`__ \*    | *dev*,       |          |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------------+          |                                      |
| |                                    |                                      |
|          |     | const CORBA::Any &  |                                      |
|                                      |                                      |
|            | *in\_any*    |          |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------------+          |                                      |
| |                                    |                                      |
|          | )   |                     |                                      |
|                                      |                                      |
|            |              |          |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -----------+--------------+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the command is allowed in the actual device state.

This method is automtically called by the TANGO core classes when the
associated command is requested by a client to check if the command is
allowed in the actual device state. This method is the default
is\_allowed method which always allows the command to be executed. It is
possible to re-define it if this default behaviour does not fulfill the
device needs.

Parameters
    +-----------+---------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev       | The device on which the command must be executed                                                                                                        |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------------------------------+
    | in\_any   | The incoming data still packed in a CORBA Any object. This data is passed to this method in case it is necessary to take the command allowed decision   |
    +-----------+---------------------------------------------------------------------------------------------------------------------------------------------------------+

Returns
    A boolean set to true is the command is allowed. Otherwise, the
    return value is false.

Reimplemented in
`Tango::TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a203f6dc3223fd20f230af555e34848fd>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+---------------------+- |                                      |
| ----------+-----+----+               |                                      |
| | void Tango::Command::set\_disp\_le |                                      |
| vel   | (   | Tango::DispLevel    |  |                                      |
| *level*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------+-----+---------------------+- |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the command display level.

Parameters
    +---------+-----------------------------+
    | level   | The command display level   |
    +---------+-----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+------------------+- |                                      |
| ---------+-----+----+                |                                      |
| | void Tango::Command::set\_in\_type |                                      |
| \_desc   | (   | const char \*    |  |                                      |
| *desc*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ---------+-----+------------------+- |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the input parameter description field.

Parameters
    +--------+-----------------------------------+
    | desc   | The input parameter description   |
    +--------+-----------------------------------+

References
`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+-------------+------ |                                      |
| ----+-----+----+                     |                                      |
| | void Tango::Command::set\_in\_type |                                      |
| \_desc   | (   | string &    | *desc |                                      |
| *   | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------+------ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the input parameter description field.

Parameters
    +--------+-----------------------------------+
    | desc   | The input parameter description   |
    +--------+-----------------------------------+

References
`in\_type\_desc <../../d2/d1d/classTango_1_1Command.html#abe71e67349296d10e641bf246a258fd7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | inline                               |
| -----+-------------+---------------+ |                                      |
| -----+----+                          |                                      |
| | void Tango::Command::set\_name   | |                                      |
|  (   | string &    | *new\_name*   | |                                      |
|  )   |    |                          |                                      |
| +----------------------------------+ |                                      |
| -----+-------------+---------------+ |                                      |
| -----+----+                          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the command name.

Parameters
    +-------------+------------------------+
    | new\_name   | The new command name   |
    +-------------+------------------------+

References
`name <../../d2/d1d/classTango_1_1Command.html#afd9067bb0dcbcf46ca658ce7710ae025>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------+ |                                      |
| ----------+-----+----+               |                                      |
| | void Tango::Command::set\_out\_typ |                                      |
| e\_desc   | (   | const char \*    | |                                      |
|  *desc*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------+ |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the output parameter description field.

Parameters
    +--------+------------------------------------+
    | desc   | The output parameter description   |
    +--------+------------------------------------+

References
`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+-------------+----- |                                      |
| -----+-----+----+                    |                                      |
| | void Tango::Command::set\_out\_typ |                                      |
| e\_desc   | (   | string &    | *des |                                      |
| c*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+-------------+----- |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the output parameter description field.

Parameters
    +--------+------------------------------------+
    | desc   | The output parameter description   |
    +--------+------------------------------------+

References
`out\_type\_desc <../../d2/d1d/classTango_1_1Command.html#a835b44d92d834adfb87606ba5073cb15>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+--------- |                                      |
| +-----+----+                         |                                      |
| | void Tango::Command::set\_polling\ |                                      |
| _period   | (   | long    | *per*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the command polling period.

Parameters
    +-------+--------------------------------------+
    | per   | The command polling period (in mS)   |
    +-------+--------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+                        |                                      |
| | `Tango::CmdArgType <../../de/ddf/n |                                      |
| amespaceTango.html#a86ed7ac243c13a78 |                                      |
| 13f08c3b899af170>`__ Tango::Command: |                                      |
| :in\_type   |                        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command input parameter type.

Referenced by
`get\_in\_type() <../../d2/d1d/classTango_1_1Command.html#a66cba1d14a421998571b5d871e31c155>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------+                              |                                      |
| | string Tango::Command::in\_type\_d |                                      |
| esc   |                              |                                      |
| +----------------------------------- |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command input parameter description.

Referenced by
`get\_in\_type\_desc() <../../d2/d1d/classTango_1_1Command.html#ae36c1e09f7be85f9bf88fbbf68ca436e>`__,
and
`set\_in\_type\_desc() <../../d2/d1d/classTango_1_1Command.html#a47b22bb3cdfdc732c84a07b6db753aba>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---+                                 |                                      |
| | string Tango::Command::lower\_name |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command name in lower case.

Referenced by
`get\_lower\_name() <../../d2/d1d/classTango_1_1Command.html#a92e8a62375817d7e812132e49ee27dc3>`__.

+--------------------------------------+--------------------------------------+
| +-------------------------------+    | protected                            |
| | string Tango::Command::name   |    |                                      |
| +-------------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command name.

Referenced by
`get\_name() <../../d2/d1d/classTango_1_1Command.html#aa6bfd85b7ee91b2c492fce5938fdaebe>`__,
and
`set\_name() <../../d2/d1d/classTango_1_1Command.html#a13a2bbf037579b576dcee0bc9b55d8f2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
| | `Tango::CmdArgType <../../de/ddf/n |                                      |
| amespaceTango.html#a86ed7ac243c13a78 |                                      |
| 13f08c3b899af170>`__ Tango::Command: |                                      |
| :out\_type   |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command output parameter type.

Referenced by
`get\_out\_type() <../../d2/d1d/classTango_1_1Command.html#ad2b89784882a915431128712973939ee>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------+                             |                                      |
| | string Tango::Command::out\_type\_ |                                      |
| desc   |                             |                                      |
| +----------------------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command output parameter type.

Referenced by
`get\_out\_type\_desc() <../../d2/d1d/classTango_1_1Command.html#a32334cc5b6977f362a6ea50da4924653>`__,
and
`set\_out\_type\_desc() <../../d2/d1d/classTango_1_1Command.html#af421f59ba21cb3300d8ed5cdc28114ad>`__.

--------------

The documentation for this class was generated from the following file:

-  `command.h <../../d0/d09/command_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Command <../../d2/d1d/classTango_1_1Command.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d0/db1/classTango_1_1Command__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
