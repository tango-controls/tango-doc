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

`Classes <#nested-classes>`__ \| `Public Member
Functions <#pub-methods>`__ \| `List of all
members <../../de/dec/classTango_1_1TemplCommand-members.html>`__

Tango::TemplCommand Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is a class representing a command in the template command
model without input or output parameter.
`More... <../../de/de1/classTango_1_1TemplCommand.html#details>`__

Inheritance diagram for Tango::TemplCommand:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::TemplCommand:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a3b58b596866ab711e4983d32ff9553e4>`__
(const char \*)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ac07fac7fb6ce5181b6b7f17accb718d1>`__
(string &)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7ef3cdac0079f8eb30a28c7d9e97bc68>`__
(const char \*, Tango::DispLevel)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ab24af318162958fe8dbe1ff9975a7008>`__
(string &, Tango::DispLevel)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a28603d382f1ffe0b9499f017ee3e2e51>`__
(const char \*, const char \*, const char \*)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#adafbaa8fc788b22d18706db99c929fbd>`__
(string &, string &, string &)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a92a9f351d1a503761acd6d2c1e2b2982>`__
(const char \*, const char \*, const char \*, DispLevel)

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ad5ac8566cca4a4fb11898a4f913c114b>`__
(string &, string &, string &, DispLevel)

 

Constructors

Miscellaneous constructors

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7a162c71679b1bb2ea3fc11db8b149bc>`__
()

 

| Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object.
`More... <#a7a162c71679b1bb2ea3fc11db8b149bc>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a4f42709104cd27eeb848a27ff44e6373>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)())

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.
`More... <#a4f42709104cd27eeb848a27ff44e6373>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a85c470b753e39501dcc643d2d24bb4c1>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)())

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.
`More... <#a85c470b753e39501dcc643d2d24bb4c1>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#aec6ec7d8e294853794e0751506094820>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &))

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method. `More... <#aec6ec7d8e294853794e0751506094820>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#aa501b4eeed5924c7b6b27b2d9a4f596a>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &))

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method. `More... <#aa501b4eeed5924c7b6b27b2d9a4f596a>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ac0572e0a8e56d8e0257eac2fca17eded>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(), const char
\*in\_desc, const char \*out\_desc)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.
`More... <#ac0572e0a8e56d8e0257eac2fca17eded>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a5761d50fa8cea0e8d0390c2fbeb323e9>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(), string &in\_desc,
string &out\_desc)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.
`More... <#a5761d50fa8cea0e8d0390c2fbeb323e9>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#ae7aeba83c3f09dbd37cd09dbbb2ce065>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), const char
\*in\_desc, const char \*out\_desc)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.
`More... <#ae7aeba83c3f09dbd37cd09dbbb2ce065>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#afe02e04d7b0962f0c1a90d3e1407d192>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), string &in\_desc,
string &out\_desc)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.
`More... <#afe02e04d7b0962f0c1a90d3e1407d192>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a913bafce3c537f63d7c4b1d8bdfa06a8>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(),
Tango::DispLevel level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.
`More... <#a913bafce3c537f63d7c4b1d8bdfa06a8>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a8dce45fed70a6a7413e343097717aec4>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(), Tango::DispLevel
level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.
`More... <#a8dce45fed70a6a7413e343097717aec4>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a672bee0db4d93ae7cc61b4f4addf5363>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), Tango::DispLevel
level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method. `More... <#a672bee0db4d93ae7cc61b4f4addf5363>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a7377dcddc8b874cc7aa791b341be199c>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), Tango::DispLevel
level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method. `More... <#a7377dcddc8b874cc7aa791b341be199c>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a9499afc773335b2217eab990d15aab53>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(), const char
\*in\_desc, const char \*out\_desc, Tango::DispLevel level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.
`More... <#a9499afc773335b2217eab990d15aab53>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a6555e408ea4516e7b7423d1c48a27358>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(), string &in\_desc,
string &out\_desc, Tango::DispLevel level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.
`More... <#a6555e408ea4516e7b7423d1c48a27358>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a90fef4d7838f8ee6ae045831467ce598>`__
(const char \*cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), const char
\*in\_desc, const char \*out\_desc, Tango::DispLevel level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.
`More... <#a90fef4d7838f8ee6ae045831467ce598>`__

 

 

`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html#a8f48d5f24579df210d585604444cb629>`__
(string &cmd\_name, void(DeviceImpl::\*exe\_method)(),
bool(DeviceImpl::\*state\_method)(const CORBA::Any &), string &in\_desc,
string &out\_desc, Tango::DispLevel level)

 

| Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.
`More... <#a8f48d5f24579df210d585604444cb629>`__

 

Miscellaneous methods

void 

`set\_type <../../de/de1/classTango_1_1TemplCommand.html#a95ab85ef01d98875e631a0fc40d1d414>`__
(const type\_info &data\_type,
`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
&type)

 

| Choose the correct TANGO data type constant according to data type.
`More... <#a95ab85ef01d98875e631a0fc40d1d414>`__

 

CORBA::Any \* 

`execute <../../de/de1/classTango_1_1TemplCommand.html#ac0f9217e1c13600d3ba449ceb6a25cd3>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any)

 

| Invoke the command execution method given at object creation time.
`More... <#ac0f9217e1c13600d3ba449ceb6a25cd3>`__

 

bool 

`is\_allowed <../../de/de1/classTango_1_1TemplCommand.html#a203f6dc3223fd20f230af555e34848fd>`__
(`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev,
const CORBA::Any &in\_any)

 

| Invoke the command allowed method given at object creation time.
`More... <#a203f6dc3223fd20f230af555e34848fd>`__

 

|-| Public Member Functions inherited from
`Tango::Command <../../d2/d1d/classTango_1_1Command.html>`__

 

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

 

virtual 

`~Command <../../d2/d1d/classTango_1_1Command.html#a05ff827c05911f69e56e3835345f5e84>`__
()

 

| The object desctructor.
`More... <#a05ff827c05911f69e56e3835345f5e84>`__

 

virtual void 

`init\_types <../../d2/d1d/classTango_1_1Command.html#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__
()

 

| Init command parameters type.
`More... <#a9cd12d4e02a35bfdb896a7cc89fc7eb0>`__

 

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

bool(DeviceImpl::\* 

`allowed\_ptr <../../de/de1/classTango_1_1TemplCommand.html#a1e3db2bfcf9cb38f76d4465ac575db5a>`__
)(const CORBA::Any &)

 

| The command allowed method object reference.
`More... <#a1e3db2bfcf9cb38f76d4465ac575db5a>`__

 

|-| Protected Attributes inherited from
`Tango::Command <../../d2/d1d/classTango_1_1Command.html>`__

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

This class is a class representing a command in the template command
model without input or output parameter.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --+-----+----+-----+----+            |                                      |
| | Tango::TemplCommand::TemplCommand  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a newly allocated
`Command <../../d2/d1d/classTango_1_1Command.html>`__ object.

The default constructor

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*             | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*    |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +---------------+-------------------------------------------+
    | cmd\_name     | The command name                          |
    +---------------+-------------------------------------------+
    | exe\_method   | Pointer to the command execution method   |
    +---------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                  | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*    |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +---------------+-------------------------------------------+
    | cmd\_name     | The command name                          |
    +---------------+-------------------------------------------+
    | exe\_method   | Pointer to the command execution method   |
    +---------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*                               | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*    |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +-----------------+-------------------------------------------+
    | cmd\_name       | The command name                          |
    +-----------------+-------------------------------------------+
    | exe\_method     | Pointer to the command execution method   |
    +-----------------+-------------------------------------------+
    | state\_method   | Pointer to the command allowed method     |
    +-----------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                                    | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*    |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
The input and output parameter description are set to the default String
"Uninitialised". The command display level is set to OPERATOR.

Parameters
    +-----------------+-------------------------------------------+
    | cmd\_name       | The command name                          |
    +-----------------+-------------------------------------------+
    | exe\_method     | Pointer to the command execution method   |
    +-----------------+-------------------------------------------+
    | state\_method   | Pointer to the command allowed method     |
    +-----------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*             | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | const char \*             | *in\_desc*,      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | const char \*             | *out\_desc*      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.

The command display level is set to OPERATOR.

Parameters
    +---------------+--------------------------------------------+
    | cmd\_name     | The command name                           |
    +---------------+--------------------------------------------+
    | exe\_method   | Pointer to the command execution method    |
    +---------------+--------------------------------------------+
    | in\_desc      | The command input parameter description    |
    +---------------+--------------------------------------------+
    | out\_desc     | The command output parameter description   |
    +---------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                  | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | string &                  | *in\_desc*,      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | string &                  | *out\_desc*      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.

The command display level is set to OPERATOR.

Parameters
    +---------------+--------------------------------------------+
    | cmd\_name     | The command name                           |
    +---------------+--------------------------------------------+
    | exe\_method   | Pointer to the command execution method    |
    +---------------+--------------------------------------------+
    | in\_desc      | The command input parameter description    |
    +---------------+--------------------------------------------+
    | out\_desc     | The command output parameter description   |
    +---------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*                               | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | const char \*                               | *in\_desc*,        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | const char \*                               | *out\_desc*        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The command display level is set to OPERATOR.

Parameters
    +-----------------+--------------------------------------------+
    | cmd\_name       | The command name                           |
    +-----------------+--------------------------------------------+
    | exe\_method     | Pointer to the command execution method    |
    +-----------------+--------------------------------------------+
    | state\_method   | Pointer to the command allowed method      |
    +-----------------+--------------------------------------------+
    | in\_desc        | The command input parameter description    |
    +-----------------+--------------------------------------------+
    | out\_desc       | The command output parameter description   |
    +-----------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                                    | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | string &                                    | *in\_desc*,        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | string &                                    | *out\_desc*        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The command display level is set to OPERATOR.

Parameters
    +-----------------+--------------------------------------------+
    | cmd\_name       | The command name                           |
    +-----------------+--------------------------------------------+
    | exe\_method     | Pointer to the command execution method    |
    +-----------------+--------------------------------------------+
    | state\_method   | Pointer to the command allowed method      |
    +-----------------+--------------------------------------------+
    | in\_desc        | The command input parameter description    |
    +-----------------+--------------------------------------------+
    | out\_desc       | The command output parameter description   |
    +-----------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*             | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | Tango::DispLevel          | *level*          |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +---------------+-------------------------------------------+
    | cmd\_name     | The command name                          |
    +---------------+-------------------------------------------+
    | exe\_method   | Pointer to the command execution method   |
    +---------------+-------------------------------------------+
    | level         | The command display level                 |
    +---------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                  | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | Tango::DispLevel          | *level*          |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name and an execution method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.
The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +---------------+-------------------------------------------+
    | cmd\_name     | The command name                          |
    +---------------+-------------------------------------------+
    | exe\_method   | Pointer to the command execution method   |
    +---------------+-------------------------------------------+
    | level         | The command display level                 |
    +---------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*                               | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | Tango::DispLevel                            | *level*            |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +-----------------+-------------------------------------------+
    | cmd\_name       | The command name                          |
    +-----------------+-------------------------------------------+
    | exe\_method     | Pointer to the command execution method   |
    +-----------------+-------------------------------------------+
    | state\_method   | Pointer to the command allowed method     |
    +-----------------+-------------------------------------------+
    | level           | The command display level                 |
    +-----------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                                    | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | Tango::DispLevel                            | *level*            |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a command allowed
method.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
The input and output parameter description are set to the default String
"Uninitialised".

Parameters
    +-----------------+-------------------------------------------+
    | cmd\_name       | The command name                          |
    +-----------------+-------------------------------------------+
    | exe\_method     | Pointer to the command execution method   |
    +-----------------+-------------------------------------------+
    | state\_method   | Pointer to the command allowed method     |
    +-----------------+-------------------------------------------+
    | level           | The command display level                 |
    +-----------------+-------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*             | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | const char \*             | *in\_desc*,      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | const char \*             | *out\_desc*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | Tango::DispLevel          | *level*          |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.

Parameters
    +---------------+--------------------------------------------+
    | cmd\_name     | The command name                           |
    +---------------+--------------------------------------------+
    | exe\_method   | Pointer to the command execution method    |
    +---------------+--------------------------------------------+
    | in\_desc      | The command input parameter description    |
    +---------------+--------------------------------------------+
    | out\_desc     | The command output parameter description   |
    +---------------+--------------------------------------------+
    | level         | The command display level                  |
    +---------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------+------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                  | *cmd\_name*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | void(DeviceImpl::\*)()    | *exe\_method*,   |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | string &                  | *in\_desc*,      |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | string &                  | *out\_desc*,     |
+-------------------------------------+-----+---------------------------+------------------+
|                                     |     | Tango::DispLevel          | *level*          |
+-------------------------------------+-----+---------------------------+------------------+
|                                     | )   |                           |                  |
+-------------------------------------+-----+---------------------------+------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method and a description for the
input and output command parameters.

Parameters
    +---------------+--------------------------------------------+
    | cmd\_name     | The command name                           |
    +---------------+--------------------------------------------+
    | exe\_method   | Pointer to the command execution method    |
    +---------------+--------------------------------------------+
    | in\_desc      | The command input parameter description    |
    +---------------+--------------------------------------------+
    | out\_desc     | The command output parameter description   |
    +---------------+--------------------------------------------+
    | level         | The command display level                  |
    +---------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | const char \*                               | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | const char \*                               | *in\_desc*,        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | const char \*                               | *out\_desc*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | Tango::DispLevel                            | *level*            |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.

Parameters
    +-----------------+--------------------------------------------+
    | cmd\_name       | The command name                           |
    +-----------------+--------------------------------------------+
    | exe\_method     | Pointer to the command execution method    |
    +-----------------+--------------------------------------------+
    | state\_method   | Pointer to the command allowed method      |
    +-----------------+--------------------------------------------+
    | in\_desc        | The command input parameter description    |
    +-----------------+--------------------------------------------+
    | out\_desc       | The command output parameter description   |
    +-----------------+--------------------------------------------+
    | level           | The command display level                  |
    +-----------------+--------------------------------------------+

+-------------------------------------+-----+---------------------------------------------+--------------------+
| Tango::TemplCommand::TemplCommand   | (   | string &                                    | *cmd\_name*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | void(DeviceImpl::\*)()                      | *exe\_method*,     |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | bool(DeviceImpl::\*)(const CORBA::Any &)    | *state\_method*,   |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | string &                                    | *in\_desc*,        |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | string &                                    | *out\_desc*,       |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     |     | Tango::DispLevel                            | *level*            |
+-------------------------------------+-----+---------------------------------------------+--------------------+
|                                     | )   |                                             |                    |
+-------------------------------------+-----+---------------------------------------------+--------------------+

Constructs a newly allocated
`TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ object
for a command with a name, an execution method, a command allowed method
and a description for the input and output command parameters.

This constructor set the command input and output type to
`Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__.

Parameters
    +-----------------+--------------------------------------------+
    | cmd\_name       | The command name                           |
    +-----------------+--------------------------------------------+
    | exe\_method     | Pointer to the command execution method    |
    +-----------------+--------------------------------------------+
    | state\_method   | Pointer to the command allowed method      |
    +-----------------+--------------------------------------------+
    | in\_desc        | The command input parameter description    |
    +-----------------+--------------------------------------------+
    | out\_desc       | The command output parameter description   |
    +-----------------+--------------------------------------------+
    | level           | The command display level                  |
    +-----------------+--------------------------------------------+

+-------------------------------------+-----+------------------+----+-----+----+
| Tango::TemplCommand::TemplCommand   | (   | const char \*    |    | )   |    |
+-------------------------------------+-----+------------------+----+-----+----+

+-------------------------------------+-----+-------------+----+-----+----+
| Tango::TemplCommand::TemplCommand   | (   | string &    |    | )   |    |
+-------------------------------------+-----+-------------+----+-----+----+

+-------------------------------------+-----+---------------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | const char \*       | ,   |
+-------------------------------------+-----+---------------------+-----+
|                                     |     | Tango::DispLevel    |     |
+-------------------------------------+-----+---------------------+-----+
|                                     | )   |                     |     |
+-------------------------------------+-----+---------------------+-----+

+-------------------------------------+-----+---------------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | string &            | ,   |
+-------------------------------------+-----+---------------------+-----+
|                                     |     | Tango::DispLevel    |     |
+-------------------------------------+-----+---------------------+-----+
|                                     | )   |                     |     |
+-------------------------------------+-----+---------------------+-----+

+-------------------------------------+-----+------------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | const char \*    | ,   |
+-------------------------------------+-----+------------------+-----+
|                                     |     | const char \*    | ,   |
+-------------------------------------+-----+------------------+-----+
|                                     |     | const char \*    |     |
+-------------------------------------+-----+------------------+-----+
|                                     | )   |                  |     |
+-------------------------------------+-----+------------------+-----+

+-------------------------------------+-----+-------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | string &    | ,   |
+-------------------------------------+-----+-------------+-----+
|                                     |     | string &    | ,   |
+-------------------------------------+-----+-------------+-----+
|                                     |     | string &    |     |
+-------------------------------------+-----+-------------+-----+
|                                     | )   |             |     |
+-------------------------------------+-----+-------------+-----+

+-------------------------------------+-----+------------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | const char \*    | ,   |
+-------------------------------------+-----+------------------+-----+
|                                     |     | const char \*    | ,   |
+-------------------------------------+-----+------------------+-----+
|                                     |     | const char \*    | ,   |
+-------------------------------------+-----+------------------+-----+
|                                     |     | DispLevel        |     |
+-------------------------------------+-----+------------------+-----+
|                                     | )   |                  |     |
+-------------------------------------+-----+------------------+-----+

+-------------------------------------+-----+--------------+-----+
| Tango::TemplCommand::TemplCommand   | (   | string &     | ,   |
+-------------------------------------+-----+--------------+-----+
|                                     |     | string &     | ,   |
+-------------------------------------+-----+--------------+-----+
|                                     |     | string &     | ,   |
+-------------------------------------+-----+--------------+-----+
|                                     |     | DispLevel    |     |
+-------------------------------------+-----+--------------+-----+
|                                     | )   |              |     |
+-------------------------------------+-----+--------------+-----+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------+         |                                      |
| | CORBA::Any\* Tango::TemplCommand:: |                                      |
| execute   | (   | `DeviceImpl <../.. |                                      |
| /d3/d62/classTango_1_1DeviceImpl.htm |                                      |
| l>`__ \*    | *dev*,       |         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------+         |                                      |
| |                                    |                                      |
|           |     | const CORBA::Any & |                                      |
|                                      |                                      |
|             | *in\_any*    |         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------+         |                                      |
| |                                    |                                      |
|           | )   |                    |                                      |
|                                      |                                      |
|             |              |         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Invoke the command execution method given at object creation time.

This method is automatically called by the TANGO core classes when the
associated command is requested by a client.

Parameters
    +-----------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev       | The device on which the command must be executed                                                                                                                                                           |
    +-----------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | in\_any   | The incoming data still packed in a CORBA Any object. For command created with this `TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ class, this Any object does not contain usefull data   |
    +-----------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Returns
    The CORBA Any object returned to the client. For command created
    with this
    `TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__
    class, this any object does not contain data.

Exceptions
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the execution method failed Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------------------------------------+

Implements
`Tango::Command <../../d2/d1d/classTango_1_1Command.html#a24505e18425086e1c6b84d7ba1f92503>`__.

Reimplemented in `Tango::TemplCommandOut< OUTARG
> <../../d3/d87/classTango_1_1TemplCommandOut.html#a4afcfcf600912c43d7e1ae6fc410fae3>`__,
`Tango::TemplCommandIn< INARG
> <../../d2/d50/classTango_1_1TemplCommandIn.html#a13a44e57280e667e24e14bdf58a24181>`__,
and `Tango::TemplCommandInOut< INARG, OUTARG
> <../../db/dbb/classTango_1_1TemplCommandInOut.html#ac5639e9122031a8e57887ff3411bb482>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| --------+--------------+             |                                      |
| | bool Tango::TemplCommand::is\_allo |                                      |
| wed   | (   | `DeviceImpl <../../d3/ |                                      |
| d62/classTango_1_1DeviceImpl.html>`_ |                                      |
| _ \*    | *dev*,       |             |                                      |
| +----------------------------------- |                                      |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| --------+--------------+             |                                      |
| |                                    |                                      |
|       |     | const CORBA::Any &     |                                      |
|                                      |                                      |
|         | *in\_any*    |             |                                      |
| +----------------------------------- |                                      |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| --------+--------------+             |                                      |
| |                                    |                                      |
|       | )   |                        |                                      |
|                                      |                                      |
|         |              |             |                                      |
| +----------------------------------- |                                      |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| --------+--------------+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Invoke the command allowed method given at object creation time.

This method is automtically called by the TANGO core classes when the
associated command is requested by a client to check if the command is
allowed in the actual device state. If the user give a command allowed
method at object creation time, this method will be invoked.

Parameters
    +-----------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | dev       | The device on which the command must be executed                                                                                                                                                   |
    +-----------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | in\_any   | The incoming data still packed in a CORBA Any object. For command created with this `TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__ class, this Any object does not contain data   |
    +-----------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Returns
    A boolean set to true is the command is allowed. Otherwise, the
    return value is false. This return value is always set to true if
    the user does not supply a method to be excuted. If a method has
    been supplied, the return value is the value returned by the user
    supplied mehod.

Reimplemented from
`Tango::Command <../../d2/d1d/classTango_1_1Command.html#af634fd436701aca40fbcdaeb5d4691b1>`__.

+---------------------------------------+-----+-------------------------------------------------------------------------------------------------+-----------------+
| void Tango::TemplCommand::set\_type   | (   | const type\_info &                                                                              | *data\_type*,   |
+---------------------------------------+-----+-------------------------------------------------------------------------------------------------+-----------------+
|                                       |     | `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__ &    | *type*          |
+---------------------------------------+-----+-------------------------------------------------------------------------------------------------+-----------------+
|                                       | )   |                                                                                                 |                 |
+---------------------------------------+-----+-------------------------------------------------------------------------------------------------+-----------------+

Choose the correct TANGO data type constant according to data type.

The TANGO constant is determined using the type\_info object passed as
first argument of the method. This data is compared to each defined
`Tango <../../de/ddf/namespaceTango.html>`__ type.

Parameters
    +--------------+----------------------------------------------------------------------------------------------------+
    | data\_type   | The type to be analysed                                                                            |
    +--------------+----------------------------------------------------------------------------------------------------+
    | type         | A reference where `Tango <../../de/ddf/namespaceTango.html>`__ data type constant must be stored   |
    +--------------+----------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the type is not a `Tango <../../de/ddf/namespaceTango.html>`__ data type Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| -------+                             |                                      |
| | bool(DeviceImpl::\* Tango::TemplCo |                                      |
| mmand::allowed\_ptr)(const CORBA::An |                                      |
| y &)   |                             |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The command allowed method object reference.

Referenced by `Tango::TemplCommandIn< INARG
>::TemplCommandIn() <../../d2/d50/classTango_1_1TemplCommandIn.html#a8e007c87ec6e6734b6af677e2e21c757>`__,
`Tango::TemplCommandInOut< INARG, OUTARG
>::TemplCommandInOut() <../../db/dbb/classTango_1_1TemplCommandInOut.html#a09bbe5a98cff5425a5627af76435f309>`__,
and `Tango::TemplCommandOut< OUTARG
>::TemplCommandOut() <../../d3/d87/classTango_1_1TemplCommandOut.html#af068c10a1723d67577d8c7c0f6a7b5aa>`__.

--------------

The documentation for this class was generated from the following file:

-  `command.h <../../d0/d09/command_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../dd/df6/classTango_1_1TemplCommand__inherit__graph.png
.. |Collaboration graph| image:: ../../d3/d35/classTango_1_1TemplCommand__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
