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
members <../../d2/dd4/classTango_1_1DeviceImpl-members.html>`__

Tango::DeviceImpl Class Referenceabstract

`Server classes <../../da/d64/group__Server.html>`__

Base class for all TANGO device.
`More... <../../d3/d62/classTango_1_1DeviceImpl.html#details>`__

Inheritance diagram for Tango::DeviceImpl:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DeviceImpl:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html#a5cd151bc1016a1e0aaee47df1949fc03>`__
(`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*\ `device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__,
string &dev\_name)

 

| Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
its name. `More... <#a5cd151bc1016a1e0aaee47df1949fc03>`__

 

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html#a2b7b74d29766be8582b66bd70b18e670>`__
(`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*\ `device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__,
string &dev\_name, string
&\ `desc <../../d3/d62/classTango_1_1DeviceImpl.html#a480f48ff00c9d1aa8bd406323967df7d>`__)

 

| Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
its name and its description.
`More... <#a2b7b74d29766be8582b66bd70b18e670>`__

 

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html#a8159577740dda7690d6a9b416ee51721>`__
(`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*\ `device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__,
string &dev\_name, string
&\ `desc <../../d3/d62/classTango_1_1DeviceImpl.html#a480f48ff00c9d1aa8bd406323967df7d>`__,
Tango::DevState
`dev\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a1b5f98bd245bd7e94403eaebc2913283>`__,
string
&\ `dev\_status <../../d3/d62/classTango_1_1DeviceImpl.html#afcea586ff5d465e6f752fd256a66aeea>`__)

 

| Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
all its creation parameters.
`More... <#a8159577740dda7690d6a9b416ee51721>`__

 

 

`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html#a44ad2f0801d241cf16d84b629cb85b1a>`__
(`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*\ `device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__,
const char \*dev\_name, const char
\*\ `desc <../../d3/d62/classTango_1_1DeviceImpl.html#a480f48ff00c9d1aa8bd406323967df7d>`__\ ="A
TANGO device", Tango::DevState
`dev\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a1b5f98bd245bd7e94403eaebc2913283>`__\ =Tango::UNKNOWN,
const char
\*\ `dev\_status <../../d3/d62/classTango_1_1DeviceImpl.html#afcea586ff5d465e6f752fd256a66aeea>`__\ =\ `StatusNotSet <../../de/ddf/namespaceTango.html#ae1851ebaa91cbf1df9317e3f47f6190a>`__)

 

| Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
all its creation parameters with some default values.
`More... <#a44ad2f0801d241cf16d84b629cb85b1a>`__

 

Destructor

Only one desctructor is defined for this class

virtual 

`~DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html#a9a5ffdab6150008e52d87ea4c38ee9ff>`__
()

 

| The device desctructor.
`More... <#a9a5ffdab6150008e52d87ea4c38ee9ff>`__

 

Get/Set object members.

These methods allows the external world to get/set
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ instance
data members

string & 

`get\_status <../../d3/d62/classTango_1_1DeviceImpl.html#adc92cdf3a75da5ebc139b7bf7d9c7377>`__
()

 

| Get device status. `More... <#adc92cdf3a75da5ebc139b7bf7d9c7377>`__

 

void 

`set\_status <../../d3/d62/classTango_1_1DeviceImpl.html#a54f9d94ef1072a6cb19ee472ccf044d7>`__
(const string &new\_status)

 

| Set device status. `More... <#a54f9d94ef1072a6cb19ee472ccf044d7>`__

 

void 

`append\_status <../../d3/d62/classTango_1_1DeviceImpl.html#ab1c6dfb1ea310030cd464f9091a2b8b0>`__
(const string &stat, bool new\_line=false)

 

| Appends a string to the device status.
`More... <#ab1c6dfb1ea310030cd464f9091a2b8b0>`__

 

Tango::DevState & 

`get\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a5b53b4435a1ea8087849a9e505d70f2a>`__
()

 

| Get device state. `More... <#a5b53b4435a1ea8087849a9e505d70f2a>`__

 

Tango::DevState & 

`get\_prev\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a051cb13d94de8492f37a9b5f48e38e56>`__
()

 

| Get device's previous state.
`More... <#a051cb13d94de8492f37a9b5f48e38e56>`__

 

void 

`set\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a2123f00afdfa638c31399eb10efefd66>`__
(const Tango::DevState &new\_state)

 

| Set device state. `More... <#a2123f00afdfa638c31399eb10efefd66>`__

 

string & 

`get\_name <../../d3/d62/classTango_1_1DeviceImpl.html#ac337fcab0f8fa8647e817a9aedc87f0c>`__
()

 

| Get device name. `More... <#ac337fcab0f8fa8647e817a9aedc87f0c>`__

 

`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \* 

`get\_device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a61fa9524c2eba31eba7ba9ff3b48ef0a>`__
()

 

| Get device class singleton.
`More... <#a61fa9524c2eba31eba7ba9ff3b48ef0a>`__

 

`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__ \* 

`get\_device\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#a339ebeff825166048358919948782be8>`__
()

 

| Get device multi attribute object.
`More... <#a339ebeff825166048358919948782be8>`__

 

void 

`set\_device\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#abfe5f92400f24bcfed94bc7a0d731233>`__
(`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
\*ptr)

 

| Set device multi attribute object.
`More... <#abfe5f92400f24bcfed94bc7a0d731233>`__

 

`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ \* 

`get\_db\_device <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__
()

 

| Get a pointer to the associated
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object.
`More... <#a6a5e05c240b76db97a357703bdd30552>`__

 

void 

`set\_d\_var <../../d3/d62/classTango_1_1DeviceImpl.html#ae4071b4df6b9398e890d8dea51365383>`__
(Tango::Device\_ptr d)

 

| Set the associated CORBA object reference.
`More... <#ae4071b4df6b9398e890d8dea51365383>`__

 

Tango::Device\_var 

`get\_d\_var <../../d3/d62/classTango_1_1DeviceImpl.html#af57cb03749073660df2f1515204d17aa>`__
()

 

| Get the associated CORBA object reference.
`More... <#af57cb03749073660df2f1515204d17aa>`__

 

void 

`set\_obj\_id <../../d3/d62/classTango_1_1DeviceImpl.html#a99aba4af5cd29838f50956a75427d5f7>`__
(PortableServer::ObjectId\_var o)

 

| Set the associated CORBA object identifier.
`More... <#a99aba4af5cd29838f50956a75427d5f7>`__

 

PortableServer::ObjectId\_var & 

`get\_obj\_id <../../d3/d62/classTango_1_1DeviceImpl.html#a59b8a8053b36fe6eb5058342f77829ab>`__
()

 

| Get the associated CORBA object identifier.
`More... <#a59b8a8053b36fe6eb5058342f77829ab>`__

 

virtual PortableServer::POA\_ptr 

`\_default\_POA <../../d3/d62/classTango_1_1DeviceImpl.html#a0895eb0df1a110eba046df7200d86f48>`__
()

 

| Return device POA. `More... <#a0895eb0df1a110eba046df7200d86f48>`__

 

Miscellaneous methods

virtual void 

`init\_device <../../d3/d62/classTango_1_1DeviceImpl.html#afaa3632ea04076bb5614a98ff944ef8c>`__
()=0

 

| Intialise a device. `More... <#afaa3632ea04076bb5614a98ff944ef8c>`__

 

virtual void 

`delete\_device <../../d3/d62/classTango_1_1DeviceImpl.html#ac2cf9bd6e0a5da8c121c65b068d36463>`__
()

 

| Delete a device. `More... <#ac2cf9bd6e0a5da8c121c65b068d36463>`__

 

virtual void 

`always\_executed\_hook <../../d3/d62/classTango_1_1DeviceImpl.html#a086fe46c88aed6e2aff70a9cb6c26e84>`__
(void)

 

| Hook method. `More... <#a086fe46c88aed6e2aff70a9cb6c26e84>`__

 

virtual void 

`read\_attr\_hardware <../../d3/d62/classTango_1_1DeviceImpl.html#a934daa7bef5a3f01c50ba304006fdda4>`__
(vector< long > &attr\_list)

 

| Read the hardware to return attribute value(s).
`More... <#a934daa7bef5a3f01c50ba304006fdda4>`__

 

virtual void 

`read\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#a7c6302cff47fca241560187e1c178701>`__
(`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ &attr)

 

| Set the attribute read value.
`More... <#a7c6302cff47fca241560187e1c178701>`__

 

virtual void 

`write\_attr\_hardware <../../d3/d62/classTango_1_1DeviceImpl.html#a7aee6ee9fee2feb7f358972ec1677328>`__
(vector< long > &attr\_list)

 

| Write the hardware for attributes.
`More... <#a7aee6ee9fee2feb7f358972ec1677328>`__

 

virtual Tango::DevState 

`dev\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a1b5f98bd245bd7e94403eaebc2913283>`__
()

 

| Get device state. `More... <#a1b5f98bd245bd7e94403eaebc2913283>`__

 

virtual
`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__ 

`dev\_status <../../d3/d62/classTango_1_1DeviceImpl.html#afcea586ff5d465e6f752fd256a66aeea>`__
()

 

| Get device status. `More... <#afcea586ff5d465e6f752fd256a66aeea>`__

 

void 

`add\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a9f130650c3a9da5190001adfbc2dc50c>`__
(`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \*new\_attr)

 

| Add a new attribute to the device attribute list.
`More... <#a9f130650c3a9da5190001adfbc2dc50c>`__

 

void 

`remove\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#aa88509d4d6bba29d28a6c124cf0349a6>`__
(`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \*rem\_attr, bool
free\_it=false, bool clean\_db=true)

 

| Remove one attribute from the device attribute list.
`More... <#aa88509d4d6bba29d28a6c124cf0349a6>`__

 

void 

`remove\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a5fe45df27c5a6a2d9ff951f9f0861d5e>`__
(string &rem\_attr\_name, bool free\_it=false, bool clean\_db=true)

 

| Remove one attribute from the device attribute list.
`More... <#a5fe45df27c5a6a2d9ff951f9f0861d5e>`__

 

void 

`add\_command <../../d3/d62/classTango_1_1DeviceImpl.html#a64f3aafd381cd25bb562cdb4074932d9>`__
(`Command <../../d2/d1d/classTango_1_1Command.html>`__ \*new\_cmd, bool
device=false)

 

| Add a new command to the device command list.
`More... <#a64f3aafd381cd25bb562cdb4074932d9>`__

 

void 

`remove\_command <../../d3/d62/classTango_1_1DeviceImpl.html#ae57fcb9d357314f6e4f159a62de3fb8d>`__
(`Command <../../d2/d1d/classTango_1_1Command.html>`__ \*rem\_cmd, bool
free\_it=false, bool clean\_db=true)

 

| Remove one command from the device command list.
`More... <#ae57fcb9d357314f6e4f159a62de3fb8d>`__

 

void 

`remove\_command <../../d3/d62/classTango_1_1DeviceImpl.html#a3ae8333e1349c4691bf46712afd6f221>`__
(const string &rem\_cmd\_name, bool free\_it=false, bool clean\_db=true)

 

| Remove one command from the device command list.
`More... <#a3ae8333e1349c4691bf46712afd6f221>`__

 

vector< PollObj \* >::iterator 

`get\_polled\_obj\_by\_type\_name <../../d3/d62/classTango_1_1DeviceImpl.html#ac47d75934efad28b5668ee8b90df0999>`__
(`Tango::PollObjType <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__
obj\_type, const string &obj\_name)

 

| Retrieve a polled object from the polled object list.
`More... <#ac47d75934efad28b5668ee8b90df0999>`__

 

bool 

`is\_there\_subscriber <../../d3/d62/classTango_1_1DeviceImpl.html#ab7ccad84e75ab8e91ada91bb49a028ba>`__
(const string &att\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event\_type)

 

| Check if there is subscriber(s) listening for the event.
`More... <#ab7ccad84e75ab8e91ada91bb49a028ba>`__

 

Methods to build Tango array types.

These methods are helper methods to build
`Tango <../../de/ddf/namespaceTango.html>`__ array types from an already
existing buffer (`Tango <../../de/ddf/namespaceTango.html>`__ array
types are CORBA sequences)

Tango::DevVarCharArray \* 

`create\_DevVarCharArray <../../d3/d62/classTango_1_1DeviceImpl.html#ab4b7bdcca9c83603da302783c86553bc>`__
(unsigned char \*ptr, long length)

 

| Create a DevVarCharArray type.
`More... <#ab4b7bdcca9c83603da302783c86553bc>`__

 

Tango::DevVarShortArray \* 

`create\_DevVarShortArray <../../d3/d62/classTango_1_1DeviceImpl.html#aa4c9e98e8b3fa64328eca74a4d1e07d3>`__
(short \*ptr, long length)

 

| Create a DevVarShortArray type.
`More... <#aa4c9e98e8b3fa64328eca74a4d1e07d3>`__

 

Tango::DevVarLongArray \* 

`create\_DevVarLongArray <../../d3/d62/classTango_1_1DeviceImpl.html#ac094cb1f6aaf9f8672e7a508ac561e6b>`__
(DevLong \*ptr, long length)

 

| Create a DevVarLongArray type.
`More... <#ac094cb1f6aaf9f8672e7a508ac561e6b>`__

 

Tango::DevVarLong64Array \* 

`create\_DevVarLong64Array <../../d3/d62/classTango_1_1DeviceImpl.html#a78a091f645e75c006f856adde52c1c50>`__
(DevLong64 \*ptr, long length)

 

| Create a DevVarLong64Array type.
`More... <#a78a091f645e75c006f856adde52c1c50>`__

 

Tango::DevVarFloatArray \* 

`create\_DevVarFloatArray <../../d3/d62/classTango_1_1DeviceImpl.html#ab0cee831dc51482a9b16f49406a796c4>`__
(float \*ptr, long length)

 

| Create a DevVarFloatArray type.
`More... <#ab0cee831dc51482a9b16f49406a796c4>`__

 

Tango::DevVarDoubleArray \* 

`create\_DevVarDoubleArray <../../d3/d62/classTango_1_1DeviceImpl.html#a11715eb4830c827fed3b0e5592cfd1a0>`__
(double \*ptr, long length)

 

| Create a DevVarDoubleArray type.
`More... <#a11715eb4830c827fed3b0e5592cfd1a0>`__

 

Tango::DevVarUShortArray \* 

`create\_DevVarUShortArray <../../d3/d62/classTango_1_1DeviceImpl.html#ad08bf54e4603f07b21a522047626ffef>`__
(unsigned short \*ptr, long length)

 

| Create a DevVarUShortArray type.
`More... <#ad08bf54e4603f07b21a522047626ffef>`__

 

Tango::DevVarULongArray \* 

`create\_DevVarULongArray <../../d3/d62/classTango_1_1DeviceImpl.html#a408b4dd2c4b27caf1ffdefdc5fdde784>`__
(DevULong \*ptr, long length)

 

| Create a DevVarULongArray type.
`More... <#a408b4dd2c4b27caf1ffdefdc5fdde784>`__

 

Tango::DevVarULong64Array \* 

`create\_DevVarULong64Array <../../d3/d62/classTango_1_1DeviceImpl.html#aa00f880d45531edc57cf3f070ce9e757>`__
(DevULong64 \*ptr, long length)

 

| Create a DevVarULong64Array type.
`More... <#aa00f880d45531edc57cf3f070ce9e757>`__

 

Tango::DevVarStringArray \* 

`create\_DevVarStringArray <../../d3/d62/classTango_1_1DeviceImpl.html#abe7b41d84597f3e9327c2a8fdc2eff2b>`__
(char \*\*ptr, long length)

 

| Create a DevVarStringArray type.
`More... <#abe7b41d84597f3e9327c2a8fdc2eff2b>`__

 

Push change event methods.

These methods allow to fire change events for attributes manually,
without the polling to be started.

void 

`set\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__
(string attr\_name, bool implemented, bool detect=true)

 

| Set an implemented flag for the attribute to indicate that the server
fires change events manually, without the polling to be started.
`More... <#acc288d1cf858125abe0e6e4e154e9f43>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a6c789211496cd65dd417ea4fe633c85a>`__
(string attr\_name, DevFailed \*except=NULL)

 

| Push a change event for a state or status attribute or return an
exception as change event for any attribute.
`More... <#a6c789211496cd65dd417ea4fe633c85a>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a25b61671395cd833817d073449d2a240>`__
(string attr\_name, Tango::DevShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevShort attribute
data type. `More... <#a25b61671395cd833817d073449d2a240>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a188894e6cce3c43e0ee2dc6197cf6b8d>`__
(string attr\_name, Tango::DevLong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevLong attribute
data type. `More... <#a188894e6cce3c43e0ee2dc6197cf6b8d>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a09d665b63b701372e4f2ea71750db462>`__
(string attr\_name, Tango::DevLong64 \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevLong64 attribute
data type. `More... <#a09d665b63b701372e4f2ea71750db462>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a11d1533d2eb6d80ec41100b71605284a>`__
(string attr\_name, Tango::DevFloat \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevFloat attribute
data type. `More... <#a11d1533d2eb6d80ec41100b71605284a>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#af12b9042dffbceb6462b151eeb01f6f8>`__
(string attr\_name, Tango::DevDouble \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevDouble attribute
data type. `More... <#af12b9042dffbceb6462b151eeb01f6f8>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a65aaa57d7ae064487cebf48eee239401>`__
(string attr\_name, Tango::DevString \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevString attribute
data type. `More... <#a65aaa57d7ae064487cebf48eee239401>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ad46f18d53f1d78430bf0113ba4b0d8d2>`__
(string attr\_name, Tango::DevBoolean \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push a change event for an attribute with Tango::DevBoolean attribute
data type. `More... <#ad46f18d53f1d78430bf0113ba4b0d8d2>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a3c0f829c573f5da1674d3e02aff2fce3>`__
(string attr\_name, Tango::DevUShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| void push\_change\_event (string attr\_name, Tango::DevBoolea Push a
change event for an attribute with Tango::DevUShort attribute data type.
`More... <#a3c0f829c573f5da1674d3e02aff2fce3>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a54443f0082d8903d300677f587589d4d>`__
(string attr\_name, Tango::DevUChar \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevUChar attribute
data type. `More... <#a54443f0082d8903d300677f587589d4d>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aa915d01687a0fd1739a1dadcac78ef31>`__
(string attr\_name, Tango::DevULong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevULong attribute
data type. `More... <#aa915d01687a0fd1739a1dadcac78ef31>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#adf7a4e85571cd258a27a2dc8ea25fd49>`__
(string attr\_name, Tango::DevULong64 \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push a change event for an attribute with Tango::DevULong64 attribute
data type. `More... <#adf7a4e85571cd258a27a2dc8ea25fd49>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a74931b906e58ca078cb93746ee620016>`__
(string attr\_name, Tango::DevState \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a change event for an attribute with Tango::DevState attribute
data type. `More... <#a74931b906e58ca078cb93746ee620016>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8aca443b2753cd3258bafa05ad534d4b>`__
(string attr\_name, Tango::DevEncoded \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push a change event for an attribute with Tango::DevEncoded attribute
data type. `More... <#a8aca443b2753cd3258bafa05ad534d4b>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#af08f98bd4d9f40b3359b1a54ddfeae30>`__
(string attr\_name, Tango::DevString \*p\_str\_data, Tango::DevUChar
\*p\_data, long size, bool release=false)

 

| Push a change event for an attribute with Tango::DevEncoded attribute
data type when the DevEncoded data are specified by two pointers.
`More... <#af08f98bd4d9f40b3359b1a54ddfeae30>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a036f0e21df2369343321838be2368e79>`__
(string attr\_name, Tango::DevShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevShort attribute
data type. `More... <#a036f0e21df2369343321838be2368e79>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a5f4b6031c439b9a6ff7e6e933bc60e82>`__
(string attr\_name, Tango::DevLong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevLong attribute
data type. `More... <#a5f4b6031c439b9a6ff7e6e933bc60e82>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a1a78d899253dc8be6c44866dc8dd055f>`__
(string attr\_name, Tango::DevLong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevLong64 attribute
data type. `More... <#a1a78d899253dc8be6c44866dc8dd055f>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a3a57944f25d7478ac59f8d3861c5696a>`__
(string attr\_name, Tango::DevFloat \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevFloat attribute
data type. `More... <#a3a57944f25d7478ac59f8d3861c5696a>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ab2eb1193f346084132ec037add29c55f>`__
(string attr\_name, Tango::DevDouble \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevDouble attribute
data type. `More... <#ab2eb1193f346084132ec037add29c55f>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a7e5d6d6a6e2f15baad7a76465b93b1a6>`__
(string attr\_name, Tango::DevString \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevString attribute
data type. `More... <#a7e5d6d6a6e2f15baad7a76465b93b1a6>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a94e5ed83c55f047f2871f5e1bee985fa>`__
(string attr\_name, Tango::DevBoolean \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevBoolean attribute
data type. `More... <#a94e5ed83c55f047f2871f5e1bee985fa>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#abb808eb7ddf3444c8cc411dc74f15c01>`__
(string attr\_name, Tango::DevUShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevUShort attribute
data type. `More... <#abb808eb7ddf3444c8cc411dc74f15c01>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a4da73eb21138da11e156c018ceff3810>`__
(string attr\_name, Tango::DevUChar \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevUChar attribute
data type. `More... <#a4da73eb21138da11e156c018ceff3810>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ae747f15a580daaa2977402598b2e5550>`__
(string attr\_name, Tango::DevULong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevULong attribute
data type. `More... <#ae747f15a580daaa2977402598b2e5550>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a23bfcd091ac32924cb96d5a64e4dbd95>`__
(string attr\_name, Tango::DevULong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevULong64 attribute
data type. `More... <#a23bfcd091ac32924cb96d5a64e4dbd95>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a111da256603495d6eb8e2ec2c35ae639>`__
(string attr\_name, Tango::DevState \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevState attribute
data type. `More... <#a111da256603495d6eb8e2ec2c35ae639>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a37eb1710cf8c1f44d8990ebfbec5c6b5>`__
(string attr\_name, Tango::DevEncoded \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a change event for an attribute with Tango::DevEncoded attribute
data type. `More... <#a37eb1710cf8c1f44d8990ebfbec5c6b5>`__

 

void 

`push\_change\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a00fa2ee4c3603f919c7aef49b107b053>`__
(string attr\_name, Tango::DevString \*p\_str\_data, Tango::DevUChar
\*p\_data, long size, struct timeval &t, Tango::AttrQuality qual, bool
release=false)

 

| Push a change event for an attribute with Tango::DevEncoded attribute
data type when the data rea specified with two pointers.
`More... <#a00fa2ee4c3603f919c7aef49b107b053>`__

 

Push archive event methods.

These methods allow to fire archive events for attributes manually,
without the polling to be started.

void 

`set\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__
(string attr\_name, bool implemented, bool detect=true)

 

| Set an implemented flag for the attribute to indicate that the server
fires archive events manually, without the polling to be started.
`More... <#ad90289326211e05632a245a87bab11bb>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a5db64e22096acbd28c24e4c0eb91ae8f>`__
(string attr\_name, DevFailed \*except=NULL)

 

| Push an archive event for state or status attribute or push an
exception as archive event for any attribute.
`More... <#a5db64e22096acbd28c24e4c0eb91ae8f>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a2178a2b731db74bcbee66e774dff4d9a>`__
(string attr\_name, Tango::DevShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevShort attribute
data type. `More... <#a2178a2b731db74bcbee66e774dff4d9a>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8fa59e2bc965e66a9ca4611b7632bfd5>`__
(string attr\_name, Tango::DevLong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevLong attribute
data type. `More... <#a8fa59e2bc965e66a9ca4611b7632bfd5>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ac05ed03092d65731a1089c46f4b2fda9>`__
(string attr\_name, Tango::DevLong64 \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevLong64 attribute
data type. `More... <#ac05ed03092d65731a1089c46f4b2fda9>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a635750d8940f09287bf50883a26bc021>`__
(string attr\_name, Tango::DevFloat \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevFloat attribute
data type. `More... <#a635750d8940f09287bf50883a26bc021>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8b2f401ee83720c7d51887617258b8a1>`__
(string attr\_name, Tango::DevDouble \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevDouble attribute
data type. `More... <#a8b2f401ee83720c7d51887617258b8a1>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aa23b3a45fbff170bb26e7d7ac601184c>`__
(string attr\_name, Tango::DevString \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevString attribute
data type. `More... <#aa23b3a45fbff170bb26e7d7ac601184c>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a49d509f24520272f94c3b62f05f0f2f4>`__
(string attr\_name, Tango::DevBoolean \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push an archive event for an attribute with Tango::DevBoolean
attribute data type. `More... <#a49d509f24520272f94c3b62f05f0f2f4>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a07bc41aaf4b0c07c6ed0eab8c619d83f>`__
(string attr\_name, Tango::DevUShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevUShort attribute
data type. `More... <#a07bc41aaf4b0c07c6ed0eab8c619d83f>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a6ccc427017496027aa8f050e002e065e>`__
(string attr\_name, Tango::DevUChar \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevUChar attribute
data type. `More... <#a6ccc427017496027aa8f050e002e065e>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a7091e910df2b9b91311f009b3911c915>`__
(string attr\_name, Tango::DevULong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevULong attribute
data type. `More... <#a7091e910df2b9b91311f009b3911c915>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#abba65795f545e527852cdb9c0629a641>`__
(string attr\_name, Tango::DevULong64 \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push an archive event for an attribute with Tango::DevLong64 attribute
data type. `More... <#abba65795f545e527852cdb9c0629a641>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a5bd5bb3ec090a5313ee8489b7c7567d2>`__
(string attr\_name, Tango::DevState \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevState attribute
data type. `More... <#a5bd5bb3ec090a5313ee8489b7c7567d2>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a46a4961a1752697ae17e35ad90722c13>`__
(string attr\_name, Tango::DevEncoded \*p\_data, long x=1, long y=0,
bool release=false)

 

| Push an archive event for an attribute with Tango::DevEncoded
attribute data type. `More... <#a46a4961a1752697ae17e35ad90722c13>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#af9784d0a0460bd5c2c6fa3ef9817ed27>`__
(string attr\_name, Tango::DevString \*p\_str\_data, Tango::DevUChar
\*p\_data, long size, bool release=false)

 

| Push an archive event for an attribute with Tango::DevEncoded
attribute data type when the data are specified using two pointers.
`More... <#af9784d0a0460bd5c2c6fa3ef9817ed27>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ab569d4dbbb2005a7073fc331035bea88>`__
(string attr\_name, Tango::DevShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevShort attribute
data type. `More... <#ab569d4dbbb2005a7073fc331035bea88>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0a405f3f33a489bd943795cdca916506>`__
(string attr\_name, Tango::DevLong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevLong attribute
data type. `More... <#a0a405f3f33a489bd943795cdca916506>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a9d97a4c743bd5d7df0418f19ab31c68b>`__
(string attr\_name, Tango::DevLong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevLong64 attribute
data type. `More... <#a9d97a4c743bd5d7df0418f19ab31c68b>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ac077d834876215e373c5904ae438ac03>`__
(string attr\_name, Tango::DevFloat \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevFloat attribute
data type. `More... <#ac077d834876215e373c5904ae438ac03>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#af12a4fcc2686eafc5766a92471318c90>`__
(string attr\_name, Tango::DevDouble \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevDouble attribute
data type. `More... <#af12a4fcc2686eafc5766a92471318c90>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a5a14133c408b27f7bb1ea58ade98eb9f>`__
(string attr\_name, Tango::DevString \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevString attribute
data type. `More... <#a5a14133c408b27f7bb1ea58ade98eb9f>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a98a556bc3f307877add6dfb511174d06>`__
(string attr\_name, Tango::DevBoolean \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevBoolean
attribute data type. `More... <#a98a556bc3f307877add6dfb511174d06>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a82ae5e5698a922ad745ec885d3be5d60>`__
(string attr\_name, Tango::DevUShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevUShort attribute
data type. `More... <#a82ae5e5698a922ad745ec885d3be5d60>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0548aefd3fec998fcd006dd5b3f21909>`__
(string attr\_name, Tango::DevUChar \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevUChar attribute
data type. `More... <#a0548aefd3fec998fcd006dd5b3f21909>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a4e2c6e3b95067910f1e3fd091985ba68>`__
(string attr\_name, Tango::DevULong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevULong attribute
data type. `More... <#a4e2c6e3b95067910f1e3fd091985ba68>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0270cdbc600f7f614708175e7f2c674b>`__
(string attr\_name, Tango::DevULong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevULong64
attribute data type. `More... <#a0270cdbc600f7f614708175e7f2c674b>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ae9eed5a3b6fd5dd301c1bbf37a12172a>`__
(string attr\_name, Tango::DevState \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevState attribute
data type. `More... <#ae9eed5a3b6fd5dd301c1bbf37a12172a>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a489ed63de4130e0e9ba98d9a08b2b9b8>`__
(string attr\_name, Tango::DevEncoded \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push an archive event for an attribute with Tango::DevEncoded
attribute data type. `More... <#a489ed63de4130e0e9ba98d9a08b2b9b8>`__

 

void 

`push\_archive\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0fd048e5cfeab65ae3c29eaea1f22ab9>`__
(string attr\_name, Tango::DevString \*p\_str\_data, Tango::DevUChar
\*p\_data, long size, struct timeval &t, Tango::AttrQuality qual, bool
release=false)

 

| Push an archive event for an attribute with Tango::DevEncoded
attribute data type when it is specified using two pointers.
`More... <#a0fd048e5cfeab65ae3c29eaea1f22ab9>`__

 

Push user event methods.

These methods allow to fire user events for attributes manually, without
the polling to be started.

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a002bc27747f35517048b5b87169c52c8>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, DevFailed \*except=NULL)

 

| Push a user event for a state or status attribute or return an
exception as user event for any attribute.
`More... <#a002bc27747f35517048b5b87169c52c8>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#abea2bef4a09d8c32e00d52b42dcb1519>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevShort attribute data
type. `More... <#abea2bef4a09d8c32e00d52b42dcb1519>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a57e7b6629cb3b1b6a025f290b3950747>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevLong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevLong attribute data
type. `More... <#a57e7b6629cb3b1b6a025f290b3950747>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a67ca044f6c93e871d8964b4b60f741cf>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevLong64 \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevLong64 attribute
data type. `More... <#a67ca044f6c93e871d8964b4b60f741cf>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#abe5a15e693deaa18fe61a0445c463635>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevFloat \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevFloat attribute data
type. `More... <#abe5a15e693deaa18fe61a0445c463635>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ae33711bbb1c5fa7ac69d7b569d85153e>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevDouble \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevDouble attribute
data type. `More... <#ae33711bbb1c5fa7ac69d7b569d85153e>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a4da3dedd55a7f7208543db0fda31e741>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevString \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevString attribute
data type. `More... <#a4da3dedd55a7f7208543db0fda31e741>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aa50f68d34b10b33c56588040a16d9767>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevBoolean \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevBoolean attribute
data type. `More... <#aa50f68d34b10b33c56588040a16d9767>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a277a59839649739fc734cf797e7b494f>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevUShort \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevUShort attribute
data type. `More... <#a277a59839649739fc734cf797e7b494f>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a36c9c565106b8730986e1ce889bed8ac>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevUChar \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevUChar attribute data
type. `More... <#a36c9c565106b8730986e1ce889bed8ac>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a4f81154a4b42d6b7ae853af50fa9b1a9>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevULong \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevULong attribute data
type. `More... <#a4f81154a4b42d6b7ae853af50fa9b1a9>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a286e1bc0c636bcac6b75a42caacb31c6>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevULong64 \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevULong64 attribute
data type. `More... <#a286e1bc0c636bcac6b75a42caacb31c6>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aba816f038f5fb56bed646118c86b5528>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevState \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevState attribute data
type. `More... <#aba816f038f5fb56bed646118c86b5528>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a80d07794e70f84930fc1125237659a5d>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevEncoded \*p\_data, long x=1, long y=0, bool
release=false)

 

| Push a user event for an attribute with Tango::DevEncoded attribute
data type. `More... <#a80d07794e70f84930fc1125237659a5d>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a349cda6696deb45ea5ac82f9d0f16efe>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevString \*p\_str\_data, Tango::DevUChar \*p\_data,
long size, bool release=false)

 

| Push a user event for an attribute with Tango::DevEncoded attribute
data type when the attribute data are specified with 2 pointers.
`More... <#a349cda6696deb45ea5ac82f9d0f16efe>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8be4ec9b7b5c9d085a47da0679cbc7fb>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevShort attribute data
type. `More... <#a8be4ec9b7b5c9d085a47da0679cbc7fb>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a79d790e27316aca2aaa355c11f46a97c>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevLong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevLong attribute data
type. `More... <#a79d790e27316aca2aaa355c11f46a97c>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8a7c19733896179f5282f9009468263f>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevLong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevLong64 attribute
data type. `More... <#a8a7c19733896179f5282f9009468263f>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a5907485e9673b050add68908f868305a>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevFloat \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevFloat attribute data
type. `More... <#a5907485e9673b050add68908f868305a>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a8b6ea9ea8ffb0e688010e7b3804db3e2>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevDouble \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevDouble attribute
data type. `More... <#a8b6ea9ea8ffb0e688010e7b3804db3e2>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a4999198b1a726c85867eadac47d14494>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevString \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevString attribute
data type. `More... <#a4999198b1a726c85867eadac47d14494>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a75a48ed53e504fc4a72de34053203c0e>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevBoolean \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevBoolean attribute
data type. `More... <#a75a48ed53e504fc4a72de34053203c0e>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ab5a7d7c3b8e890a814505aafdad79734>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevUShort \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevUShort attribute
data type. `More... <#ab5a7d7c3b8e890a814505aafdad79734>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a6a551682fe5936c4364e33fd162da35b>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevUChar \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevUChar attribute data
type. `More... <#a6a551682fe5936c4364e33fd162da35b>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#af852d77c72a39a73187f491c993d39b9>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevULong \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevULong attribute data
type. `More... <#af852d77c72a39a73187f491c993d39b9>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a14ac401d247b784b1bd06a485af4f094>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevULong64 \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevULong64 attribute
data type. `More... <#a14ac401d247b784b1bd06a485af4f094>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ac77151d73d38e817568ae535b1f0ddb8>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevState \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevState attribute data
type. `More... <#ac77151d73d38e817568ae535b1f0ddb8>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aee05a449a784d6d7c5fef37c573ef831>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevEncoded \*p\_data, struct timeval &t,
Tango::AttrQuality qual, long x=1, long y=0, bool release=false)

 

| Push a user event for an attribute with Tango::DevEncoded attribute
data type. `More... <#aee05a449a784d6d7c5fef37c573ef831>`__

 

void 

`push\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0706ab09666f888c28803f0ffc3ac62d>`__
(string attr\_name, vector< string > &filt\_names, vector< double >
&filt\_vals, Tango::DevString \*p\_str\_data, Tango::DevUChar \*p\_data,
long size, struct timeval &t, Tango::AttrQuality qual, bool
release=false)

 

| Push a user event for an attribute with Tango::DevEncoded attribute
data type when the string part and the data part of the DevEncoded data
are specified separately.
`More... <#a0706ab09666f888c28803f0ffc3ac62d>`__

 

Push data ready event methods

This method allows the user to push a data ready event

void 

`set\_data\_ready\_event <../../d3/d62/classTango_1_1DeviceImpl.html#ae1ac32627a6ec783de529ddb26e5d900>`__
(string attr\_name, bool implemented)

 

| Set an implemented flag for the attribute to indicate that the server
fires data ready event for this attribute.
`More... <#ae1ac32627a6ec783de529ddb26e5d900>`__

 

void 

`push\_data\_ready\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a0de42a80d6d1fc464b142dae308671b4>`__
(const string &attr\_name, Tango::DevLong ctr=0)

 

| Push a data ready event for the attribute with name specified as the
first parameter. `More... <#a0de42a80d6d1fc464b142dae308671b4>`__

 

Push pipe event methods.

These methods allow to fire pipe events

void 

`push\_pipe\_event <../../d3/d62/classTango_1_1DeviceImpl.html#aedd422cbede721279f2bbac705e34017>`__
(const string &pipe\_name, DevFailed \*except)

 

| Push a pipe event with exception data as value The method needs the
pipe name as input. `More... <#aedd422cbede721279f2bbac705e34017>`__

 

void 

`push\_pipe\_event <../../d3/d62/classTango_1_1DeviceImpl.html#abfe94a1987a8d5db4b69e9cc2c05c294>`__
(const string &pipe\_name,
`Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
\*p\_data, bool reuse\_it=false)

 

| Push a pipe event. `More... <#abfe94a1987a8d5db4b69e9cc2c05c294>`__

 

void 

`push\_pipe\_event <../../d3/d62/classTango_1_1DeviceImpl.html#a058f5747705f5bda88f1357dc9b2865e>`__
(const string &pipe\_name,
`Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__
\*p\_data, struct timeval &t, bool reuse\_it=false)

 

| Push a pipe event with a specified timestamp.
`More... <#a058f5747705f5bda88f1357dc9b2865e>`__

 

Signal related methods

These methods allow a signal management at device level

void 

`register\_signal <../../d3/d62/classTango_1_1DeviceImpl.html#a1066d2fe5f4d45bf12a38c667d02bdb8>`__
(long signo, bool own\_handler=false)

 

| Register a signal to be executed in a signal handler.
`More... <#a1066d2fe5f4d45bf12a38c667d02bdb8>`__

 

void 

`unregister\_signal <../../d3/d62/classTango_1_1DeviceImpl.html#a9bbea9d3b6cf43f467a56d8866b343ca>`__
(long signo)

 

| Unregister a signal. `More... <#a9bbea9d3b6cf43f467a56d8866b343ca>`__

 

virtual void 

`signal\_handler <../../d3/d62/classTango_1_1DeviceImpl.html#a2f387fb75b3427fc661a4f9b829b1491>`__
(long signo)

 

| Signal handler. `More... <#a2f387fb75b3427fc661a4f9b829b1491>`__

 

Protected Member Functions
--------------------------

Polling related methods

bool 

`is\_attribute\_polled <../../d3/d62/classTango_1_1DeviceImpl.html#ab6434f2fd256b10b21ba38ba80b7231c>`__
(const string &att\_name)

 

| Check if attribute is polled.
`More... <#ab6434f2fd256b10b21ba38ba80b7231c>`__

 

bool 

`is\_command\_polled <../../d3/d62/classTango_1_1DeviceImpl.html#ab3075b4e266562181c28d33be817ec0d>`__
(const string &cmd\_name)

 

| Check if command is polled.
`More... <#ab3075b4e266562181c28d33be817ec0d>`__

 

int 

`get\_attribute\_poll\_period <../../d3/d62/classTango_1_1DeviceImpl.html#ab4b52ce4ebdfb338399dc146cc629529>`__
(const string &att\_name)

 

| Get attribute polling period.
`More... <#ab4b52ce4ebdfb338399dc146cc629529>`__

 

int 

`get\_command\_poll\_period <../../d3/d62/classTango_1_1DeviceImpl.html#a00f3e7b568926d1e09b1dff8f574979f>`__
(const string &cmd\_name)

 

| Get command polling period.
`More... <#a00f3e7b568926d1e09b1dff8f574979f>`__

 

void 

`poll\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a6a748b41d85396d38cd004a30a10bda1>`__
(const string &att\_name, int period)

 

| Start polling one attribute.
`More... <#a6a748b41d85396d38cd004a30a10bda1>`__

 

void 

`poll\_command <../../d3/d62/classTango_1_1DeviceImpl.html#a96a247ceb8f389dbb02e8e693847fcdf>`__
(const string &cmd\_name, int period)

 

| Start polling a command.
`More... <#a96a247ceb8f389dbb02e8e693847fcdf>`__

 

void 

`stop\_poll\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a70d7f89e019fa63535ab7815a0cb4552>`__
(const string &att\_name)

 

| Stop polling one attribute.
`More... <#a70d7f89e019fa63535ab7815a0cb4552>`__

 

void 

`stop\_poll\_command <../../d3/d62/classTango_1_1DeviceImpl.html#acbf6090c2400d6c44a6474b458c58b36>`__
(const string &cmd\_name)

 

| Stop polling one command.
`More... <#acbf6090c2400d6c44a6474b458c58b36>`__

 

Protected Attributes
--------------------

Class data members

BlackBox \* 

`blackbox\_ptr <../../d3/d62/classTango_1_1DeviceImpl.html#afdc166bd02d4723a09861bfbbf285c77>`__

 

| The device black box pointer.
`More... <#afdc166bd02d4723a09861bfbbf285c77>`__

 

long 

`blackbox\_depth <../../d3/d62/classTango_1_1DeviceImpl.html#ac1b1c0e44d43f83e9b6a1633dbfe2967>`__

 

| The device black box depth.
`More... <#ac1b1c0e44d43f83e9b6a1633dbfe2967>`__

 

string 

`device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#af2649629d515c38fc5a19c44f07e2f40>`__

 

| The device name. `More... <#af2649629d515c38fc5a19c44f07e2f40>`__

 

string 

`desc <../../d3/d62/classTango_1_1DeviceImpl.html#a480f48ff00c9d1aa8bd406323967df7d>`__

 

| The device description.
`More... <#a480f48ff00c9d1aa8bd406323967df7d>`__

 

string 

`device\_status <../../d3/d62/classTango_1_1DeviceImpl.html#aa66233801c127f96878d701259739383>`__

 

| The device status. `More... <#aa66233801c127f96878d701259739383>`__

 

Tango::DevState 

`device\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a214ba0a5741c52165869ae11219d414a>`__

 

| The device state. `More... <#a214ba0a5741c52165869ae11219d414a>`__

 

long 

`version <../../d3/d62/classTango_1_1DeviceImpl.html#ab3bdf85a2faf1fe98ecd9253c1a51d77>`__

 

| The device version. `More... <#ab3bdf85a2faf1fe98ecd9253c1a51d77>`__

 

`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \* 

`device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__

 

| Pointer to the device-class object associated with the device.
`More... <#a103c3527a529f7a40ecadf227a8a7990>`__

 

`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__ \* 

`dev\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#aed3e20a35c92335be9ba742abdd9d60b>`__

 

| Pointer to the multi attribute object.
`More... <#aed3e20a35c92335be9ba742abdd9d60b>`__

 

`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ \* 

`db\_dev <../../d3/d62/classTango_1_1DeviceImpl.html#ae063e45a3778e7241d74f7270461cbb4>`__

 

| Pointer to the associated
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object.
`More... <#ae063e45a3778e7241d74f7270461cbb4>`__

 

string 

`adm\_device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#a57b6296e483e01cb62ffdce4eca0261a>`__

 

| The administration device name.
`More... <#a57b6296e483e01cb62ffdce4eca0261a>`__

 

Friends
-------

class 

`Tango::AutoTangoMonitor <../../d3/d62/classTango_1_1DeviceImpl.html#aa90445f0324fbdea288f7b41aa4a6790>`__

 

class 

`Tango::EventSubscriptionChangeCmd <../../d3/d62/classTango_1_1DeviceImpl.html#a38c76f8655cb5af13615b7a2ea89d1fe>`__

 

class 

`Tango::EventSupplier <../../d3/d62/classTango_1_1DeviceImpl.html#a4cdabe9798a15fab2e519f9c4471e32c>`__

 

class 

`Tango::NoSyncModelTangoMonitor <../../d3/d62/classTango_1_1DeviceImpl.html#a2902621019fa17e307d9093137d0d4e7>`__

 

Detailed Description
--------------------

Base class for all TANGO device.

This class inherits from CORBA classes where all the network layer is
implemented.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
| Tango::DeviceImpl::DeviceImpl   | (   | `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*    | *device\_class*,   |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *dev\_name*        |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 | )   |                                                                     |                    |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+

Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
its name.

The device description field is set to *A
`Tango <../../de/ddf/namespaceTango.html>`__ device*. The device state
is set to unknown and the device status is set to **Not Initialised**

Parameters
    +-----------------+--------------------------------------+
    | device\_class   | Pointer to the device class object   |
    +-----------------+--------------------------------------+
    | dev\_name       | The device name                      |
    +-----------------+--------------------------------------+

+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
| Tango::DeviceImpl::DeviceImpl   | (   | `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*    | *device\_class*,   |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *dev\_name*,       |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *desc*             |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 | )   |                                                                     |                    |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+

Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
its name and its description.

The device state is set to unknown and the device status is set to *Not
Initialised*

Parameters
    +-----------------+--------------------------------------+
    | device\_class   | Pointer to the device class object   |
    +-----------------+--------------------------------------+
    | dev\_name       | The device name                      |
    +-----------------+--------------------------------------+
    | desc            | The device description               |
    +-----------------+--------------------------------------+

+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
| Tango::DeviceImpl::DeviceImpl   | (   | `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*    | *device\_class*,   |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *dev\_name*,       |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *desc*,            |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | Tango::DevState                                                     | *dev\_state*,      |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 |     | string &                                                            | *dev\_status*      |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+
|                                 | )   |                                                                     |                    |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------+

Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
all its creation parameters.

The device is constructed from its name, its description, an original
state and status

Parameters
    +-----------------+--------------------------------------+
    | device\_class   | Pointer to the device class object   |
    +-----------------+--------------------------------------+
    | dev\_name       | The device name                      |
    +-----------------+--------------------------------------+
    | desc            | The device description               |
    +-----------------+--------------------------------------+
    | dev\_state      | The device initial state             |
    +-----------------+--------------------------------------+
    | dev\_status     | The device initial status            |
    +-----------------+--------------------------------------+

+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
| Tango::DeviceImpl::DeviceImpl   | (   | `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*    | *device\_class*,                     |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
|                                 |     | const char \*                                                       | *dev\_name*,                         |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
|                                 |     | const char \*                                                       | *desc* = ``"A TANGO device"``,       |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
|                                 |     | Tango::DevState                                                     | *dev\_state* = ``Tango::UNKNOWN``,   |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
|                                 |     | const char \*                                                       | *dev\_status* = ``StatusNotSet``     |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+
|                                 | )   |                                                                     |                                      |
+---------------------------------+-----+---------------------------------------------------------------------+--------------------------------------+

Constructs a newly allocated
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ object from
all its creation parameters with some default values.

The device is constructed from its name, its description, an original
state and status. This constructor defined default values for the
description, state and status parameters. The default device description
is *A TANGO device*. The default device state is *UNKNOWN* and the
default device status is *Not initialised*.

Parameters
    +-----------------+--------------------------------------+
    | device\_class   | Pointer to the device class object   |
    +-----------------+--------------------------------------+
    | dev\_name       | The device name                      |
    +-----------------+--------------------------------------+
    | desc            | The device desc                      |
    +-----------------+--------------------------------------+
    | dev\_state      | The device initial state             |
    +-----------------+--------------------------------------+
    | dev\_status     | The device initial status            |
    +-----------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------+-----+----+-----+----+       |                                      |
| | virtual Tango::DeviceImpl::~Device |                                      |
| Impl   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------------------+ |                                      |
| -----+----+-----+----+               |                                      |
| | virtual PortableServer::POA\_ptr T |                                      |
| ango::DeviceImpl::\_default\_POA   | |                                      |
|  (   |    | )   |    |               |                                      |
| +----------------------------------- |                                      |
| -----------------------------------+ |                                      |
| -----+----+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return device POA.

Return a pointer to the device POA. This method is necessary for the
CORBA object implicit activation by the \_this() method.

Returns
    Pointer to the device POA

+------------------------------------------+-----+-------------------------------------------------------+---------------+-----+----+
| void Tango::DeviceImpl::add\_attribute   | (   | `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \*    | *new\_attr*   | )   |    |
+------------------------------------------+-----+-------------------------------------------------------+---------------+-----+----+

Add a new attribute to the device attribute list.

Attributes are normally constructed in the
`DeviceClass::attribute\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__
method. Nevertheless, it is still possible to add a new attribute to a
device with this method. Please, note that if you add an attribute to a
device at device creation time, this attribute will be added to the
device class attribute list. Therefore, all devices belonging to the
same class created after this attribute addition will also have this
attribute.

Parameters
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | new\_attr   | Pointer to the new attribute to be added to the list. This pointer must point to "heap" allocated memory (or to static memory) and not to "stack" allocated memory   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------+-----+-------------------------------------------------------------+-------------------------+
| void Tango::DeviceImpl::add\_command   | (   | `Command <../../d2/d1d/classTango_1_1Command.html>`__ \*    | *new\_cmd*,             |
+----------------------------------------+-----+-------------------------------------------------------------+-------------------------+
|                                        |     | bool                                                        | *device* = ``false``    |
+----------------------------------------+-----+-------------------------------------------------------------+-------------------------+
|                                        | )   |                                                             |                         |
+----------------------------------------+-----+-------------------------------------------------------------+-------------------------+

Add a new command to the device command list.

Commands are normally constructed in the
`DeviceClass::command\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#ac86eef5f7d53b5291a034f7bb6fd289a>`__
method. Nevertheless, it is still possible to add a new command to a
device with this method. Please, note that if you add a command to a
device at device creation time, this command will be added to the device
class command list. Therefore, all devices belonging to the same class
created after this command addition will also have this command.

Parameters
    +------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | new\_cmd   | Pointer to the new command to be added to the list. This pointer must point to "heap" allocated memory (or to static memory) and not to "stack" allocated memory   |
    +------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | device     | Set this flag to true if the command must be added for only this device Default is false (command added for the device class)                                      |
    +------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| ---+----+-----+----+                 |                                      |
| | virtual void Tango::DeviceImpl::al |                                      |
| ways\_executed\_hook   | (   | void  |                                      |
|    |    | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ---+----+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Hook method.

Default method to implement an action necessary on a device before any
command is executed. This method can be redefined in sub-classes in case
of the default behaviour does not fulfill the needs

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+-------------------+-- |                                      |
| --------------------------+          |                                      |
| | void Tango::DeviceImpl::append\_st |                                      |
| atus   | (   | const string &    | * |                                      |
| stat*,                    |          |                                      |
| +----------------------------------- |                                      |
| -------+-----+-------------------+-- |                                      |
| --------------------------+          |                                      |
| |                                    |                                      |
|        |     | bool              | * |                                      |
| new\_line* = ``false``    |          |                                      |
| +----------------------------------- |                                      |
| -------+-----+-------------------+-- |                                      |
| --------------------------+          |                                      |
| |                                    |                                      |
|        | )   |                   |   |                                      |
|                           |          |                                      |
| +----------------------------------- |                                      |
| -------+-----+-------------------+-- |                                      |
| --------------------------+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Appends a string to the device status.

Parameters
    +-------------+-----------------------------------------------------------+
    | stat        | The string to be appened to the device status             |
    +-------------+-----------------------------------------------------------+
    | new\_line   | If true, appends a new line character before the string   |
    +-------------+-----------------------------------------------------------+

References
`device\_status <../../d3/d62/classTango_1_1DeviceImpl.html#aa66233801c127f96878d701259739383>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| +-----+---------------------+------- |                                      |
| ------+                              |                                      |
| | Tango::DevVarCharArray\* Tango::De |                                      |
| viceImpl::create\_DevVarCharArray    |                                      |
| | (   | unsigned char \*    | *ptr*, |                                      |
|       |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------------+------- |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                                      |                                      |
| |     | long                | *lengt |                                      |
| h*    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------------+------- |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                                      |                                      |
| | )   |                     |        |                                      |
|       |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------------+------- |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarCharArray type.

Create a DevVarCharArray type data and return a pointer to it. The array
is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarCharArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| | Tango::DevVarDoubleArray\* Tango:: |                                      |
| DeviceImpl::create\_DevVarDoubleArra |                                      |
| y   | (   | double \*    | *ptr*,    |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|     |     | long         | *length*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|     | )   |              |           |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarDoubleArray type.

Create a DevVarDoubleArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarDoubleArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| | Tango::DevVarFloatArray\* Tango::D |                                      |
| eviceImpl::create\_DevVarFloatArray  |                                      |
|   | (   | float \*    | *ptr*,       |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|   |     | long        | *length*     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|   | )   |             |              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarFloatArray type.

Create a DevVarFloatArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarFloatArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----+-----+-----------------+------- |                                      |
| ------+                              |                                      |
| | Tango::DevVarLong64Array\* Tango:: |                                      |
| DeviceImpl::create\_DevVarLong64Arra |                                      |
| y   | (   | DevLong64 \*    | *ptr*, |                                      |
|       |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+-----------------+------- |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                                      |                                      |
|     |     | long            | *lengt |                                      |
| h*    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+-----------------+------- |                                      |
| ------+                              |                                      |
| |                                    |                                      |
|                                      |                                      |
|     | )   |                 |        |                                      |
|       |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+-----------------+------- |                                      |
| ------+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarLong64Array type.

Create a DevVarLong64Array type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarLong64Array type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| +-----+---------------+------------- |                                      |
| +                                    |                                      |
| | Tango::DevVarLongArray\* Tango::De |                                      |
| viceImpl::create\_DevVarLongArray    |                                      |
| | (   | DevLong \*    | *ptr*,       |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
| |     | long          | *length*     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
| | )   |               |              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| +-----+---------------+------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarLongArray type.

Create a DevVarLongArray type data and return a pointer to it. The array
is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarLongArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| | Tango::DevVarShortArray\* Tango::D |                                      |
| eviceImpl::create\_DevVarShortArray  |                                      |
|   | (   | short \*    | *ptr*,       |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|   |     | long        | *length*     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|   | )   |             |              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+-------------+------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarShortArray type.

Create a DevVarShortArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarShortArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| | Tango::DevVarStringArray\* Tango:: |                                      |
| DeviceImpl::create\_DevVarStringArra |                                      |
| y   | (   | char \*\*    | *ptr*,    |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|     |     | long         | *length*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|     | )   |              |           |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+--------------+---------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarStringArray type.

Create a DevVarStringArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarStringArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------+-----+------------------+---- |                                      |
| ---------+                           |                                      |
| | Tango::DevVarULong64Array\* Tango: |                                      |
| :DeviceImpl::create\_DevVarULong64Ar |                                      |
| ray   | (   | DevULong64 \*    | *pt |                                      |
| r*,      |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------+-----+------------------+---- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                                      |                                      |
|       |     | long             | *le |                                      |
| ngth*    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------+-----+------------------+---- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                                      |                                      |
|       | )   |                  |     |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------+-----+------------------+---- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarULong64Array type.

Create a DevVarULong64Array type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarULong64Array type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --+-----+----------------+---------- |                                      |
| ---+                                 |                                      |
| | Tango::DevVarULongArray\* Tango::D |                                      |
| eviceImpl::create\_DevVarULongArray  |                                      |
|   | (   | DevULong \*    | *ptr*,    |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+----------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|   |     | long           | *length*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+----------------+---------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                                      |                                      |
|   | )   |                |           |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --+-----+----------------+---------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarULongArray type.

Create a DevVarULongArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarULongArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ----+-----+----------------------+-- |                                      |
| -----------+                         |                                      |
| | Tango::DevVarUShortArray\* Tango:: |                                      |
| DeviceImpl::create\_DevVarUShortArra |                                      |
| y   | (   | unsigned short \*    | * |                                      |
| ptr*,      |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+----------------------+-- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|                                      |                                      |
|     |     | long                 | * |                                      |
| length*    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+----------------------+-- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|                                      |                                      |
|     | )   |                      |   |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ----+-----+----------------------+-- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a DevVarUShortArray type.

Create a DevVarUShortArray type data and return a pointer to it. The
array is build using the input pointer with the given length

Parameters
    +----------+--------------------------------------------+
    | ptr      | Pointer to the basic type data buffer      |
    +----------+--------------------------------------------+
    | length   | Number of element in the previous buffer   |
    +----------+--------------------------------------------+

Returns
    Pointer to the created DevVarUShortArray type data

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual void Tango::DeviceImpl::de |                                      |
| lete\_device   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete a device.

In the `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
class, this method is virtual and can be defined in sub-class. Its rule
is to delete memory allocated in the init\_device method. This method is
called by the device destructor and by the device Init command.

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
| | virtual Tango::DevState Tango::Dev |                                      |
| iceImpl::dev\_state   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device state.

Default method to get device state. The behaviour of this method depends
on the device state. If the device state is ON or ALARM, it reads the
attribute(s) with an alarm level defined, check if the read value is
above/below the alarm and eventually change the state to ALARM, return
the device state. For all the other device state, this method simply
returns the state This method can be redefined in sub-classes in case of
the default behaviour does not fulfill the needs

Returns
    The device state

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If it is necessary to read attribute(s) and a problem occurs during the reading. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
| | virtual `Tango::ConstDevString <.. |                                      |
| /../de/ddf/namespaceTango.html#a31a5 |                                      |
| 04495ecab5fd862cb6e60d40360c>`__ Tan |                                      |
| go::DeviceImpl::dev\_status   | (    |                                      |
| |    | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device status.

Default method to get device status. It returns the contents of the
device dev\_status field. If the device state is ALARM, alarm messages
are added to the device status. This method can be redefined in
sub-classes in case of the default behaviour does not fulfill the needs

Returns
    The device status

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------------+-----+--------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
| | int Tango::DeviceImpl::get\_attrib |                                      |
| ute\_poll\_period   | (   | const st |                                      |
| ring &    | *att\_name*   | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute polling period.

Returns attribute polling period (in mS) or 0 if the attribute is not
polled

Parameters
    +-------------+----------------------+
    | att\_name   | The attribute name   |
    +-------------+----------------------+

Returns
    The attribute polling period in mS

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
| | int Tango::DeviceImpl::get\_comman |                                      |
| d\_poll\_period   | (   | const stri |                                      |
| ng &    | *cmd\_name*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get command polling period.

Returns command polling period (in mS) or 0 if the command is not polled

Parameters
    +-------------+--------------------+
    | cmd\_name   | The command name   |
    +-------------+--------------------+

Returns
    The command polling period in mS

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
| | Tango::Device\_var Tango::DeviceIm |                                      |
| pl::get\_d\_var   | (   |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the associated CORBA object reference.

Get the associated CORBA object reference.
`Tango <../../de/ddf/namespaceTango.html>`__ supports only a one to one
servant-CORBA object link.

Returns
    The CORBA object reference

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
| | `DbDevice <../../da/dbb/classTango |                                      |
| _1_1DbDevice.html>`__ \* Tango::Devi |                                      |
| ceImpl::get\_db\_device   | (   |    |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+-----+--- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a pointer to the associated
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object.

Return a pointer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object
associated with the device

Returns
    Pointer to the
    `DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object

References
`Tango::Util::\_UseDb <../../d4/deb/classTango_1_1Util.html#a194cd965fd1aebe1800adbe076558742>`__,
`Tango::API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__,
`db\_dev <../../d3/d62/classTango_1_1DeviceImpl.html#ae063e45a3778e7241d74f7270461cbb4>`__,
`device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#af2649629d515c38fc5a19c44f07e2f40>`__,
and
`Tango::Except::throw\_exception() <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+----+-----+----+         |                                      |
| | `MultiAttribute <../../dc/d3b/clas |                                      |
| sTango_1_1MultiAttribute.html>`__\ \ |                                      |
| * Tango::DeviceImpl::get\_device\_at |                                      |
| tr   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device multi attribute object.

Return a pointer to the device multi attribute object

Returns
    Pointer to the device multi attribute object

References
`dev\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#aed3e20a35c92335be9ba742abdd9d60b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+----+-----+----+              |                                      |
| | `DeviceClass <../../d4/dcd/classTa |                                      |
| ngo_1_1DeviceClass.html>`__\ \* Tang |                                      |
| o::DeviceImpl::get\_device\_class    |                                      |
| | (   |    | )   |    |              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----+----+-----+----+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device class singleton.

Return the device class singleton (device\_class field)

Returns
    Pointer to the device class singleton

References
`device\_class <../../d3/d62/classTango_1_1DeviceImpl.html#a103c3527a529f7a40ecadf227a8a7990>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+----+-----+----+         |                                      |
| | string& Tango::DeviceImpl::get\_na |                                      |
| me   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device name.

Return the device name (dev\_name field)

Returns
    Device name

References
`device\_name <../../d3/d62/classTango_1_1DeviceImpl.html#af2649629d515c38fc5a19c44f07e2f40>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
| | PortableServer::ObjectId\_var& Tan |                                      |
| go::DeviceImpl::get\_obj\_id   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| -------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the associated CORBA object identifier.

Return the CORBA object identifier as a \_var type variable

Returns
    The CORBA object identifier

+------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------------+----------------+
| vector<PollObj \*>::iterator Tango::DeviceImpl::get\_polled\_obj\_by\_type\_name   | (   | `Tango::PollObjType <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__    | *obj\_type*,   |
+------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------------+----------------+
|                                                                                    |     | const string &                                                                                 | *obj\_name*    |
+------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------------+----------------+
|                                                                                    | )   |                                                                                                |                |
+------------------------------------------------------------------------------------+-----+------------------------------------------------------------------------------------------------+----------------+

Retrieve a polled object from the polled object list.

Retrieve in the device polled object list, the specified polled object
(command or attribute).

Parameters
    +-------------+------------------------------------------+
    | obj\_type   | The object type (command or attribute)   |
    +-------------+------------------------------------------+
    | obj\_name   | The object name                          |
    +-------------+------------------------------------------+

Returns
    An iterator pointing to the polled object in the polled object list

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the object is not found. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
| | Tango::DevState& Tango::DeviceImpl |                                      |
| ::get\_prev\_state   | (   |    | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+----+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device's previous state.

Return the device dev\_prev\_state field. This method is used for the
on\_state\_change event

Returns
    Device previous state

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | Tango::DevState& Tango::DeviceImpl |                                      |
| ::get\_state   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device state.

Return the device dev\_state field. This method does the same thing than
the default state\_cmd method.

Returns
    Device state

References
`device\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a214ba0a5741c52165869ae11219d414a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+----+-----+----+       |                                      |
| | string& Tango::DeviceImpl::get\_st |                                      |
| atus   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device status.

Return the device dev\_status field. This method does the same thing
than the default status\_cmd method.

Returns
    Device status

References
`device\_status <../../d3/d62/classTango_1_1DeviceImpl.html#aa66233801c127f96878d701259739383>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------------+-----+----+-----+----+ |                                      |
| | virtual void Tango::DeviceImpl::in |                                      |
| it\_device   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Intialise a device.

In the `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
class, this method is pure abstract and must be defined in sub-class.
Its rule is to initialise a device. This method is called during device
creation by the device constructor.

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------+-----+--------------- |                                      |
| ----+---------------+-----+----+     |                                      |
| | bool Tango::DeviceImpl::is\_attrib |                                      |
| ute\_polled   | (   | const string & |                                      |
|     | *att\_name*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ----+---------------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if attribute is polled.

Returns true if attribute with name given as parameter is polled.

Parameters
    +-------------+----------------------+
    | att\_name   | The attribute name   |
    +-------------+----------------------+

Returns
    Boolean set to true if attribute is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------+-----+----------------- |                                      |
| --+---------------+-----+----+       |                                      |
| | bool Tango::DeviceImpl::is\_comman |                                      |
| d\_polled   | (   | const string &   |                                      |
|   | *cmd\_name*   | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| --+---------------+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if command is polled.

Returns true if command with name given as parameter is polled.

Parameters
    +-------------+--------------------+
    | cmd\_name   | The command name   |
    +-------------+--------------------+

Returns
    Boolean set to true if command is polled

+-------------------------------------------------+-----+---------------------------------------------------------------------------------------+------------------+
| bool Tango::DeviceImpl::is\_there\_subscriber   | (   | const string &                                                                        | *att\_name*,     |
+-------------------------------------------------+-----+---------------------------------------------------------------------------------------+------------------+
|                                                 |     | `EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__    | *event\_type*    |
+-------------------------------------------------+-----+---------------------------------------------------------------------------------------+------------------+
|                                                 | )   |                                                                                       |                  |
+-------------------------------------------------+-----+---------------------------------------------------------------------------------------+------------------+

Check if there is subscriber(s) listening for the event.

This method returns a boolean set to true if there are some
subscriber(s) listening on the event specified by the two method
arguments. Be aware that there is some delay (up to 600 sec) between
this method returning false and the last subscriber unsubscription or
crash... The device interface change event is not supported by this
method.

Parameters
    +---------------+----------------------+
    | att\_name     | The attribute name   |
    +---------------+----------------------+
    | event\_type   | The event type       |
    +---------------+----------------------+

Returns
    A boolean set to true if there are some subscriber listening on this
    event

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the attribute is not found. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------+-----+-------------------+- |                                      |
| ---------------+                     |                                      |
| | void Tango::DeviceImpl::poll\_attr |                                      |
| ibute   | (   | const string &    |  |                                      |
| *att\_name*,   |                     |                                      |
| +----------------------------------- |                                      |
| --------+-----+-------------------+- |                                      |
| ---------------+                     |                                      |
| |                                    |                                      |
|         |     | int               |  |                                      |
| *period*       |                     |                                      |
| +----------------------------------- |                                      |
| --------+-----+-------------------+- |                                      |
| ---------------+                     |                                      |
| |                                    |                                      |
|         | )   |                   |  |                                      |
|                |                     |                                      |
| +----------------------------------- |                                      |
| --------+-----+-------------------+- |                                      |
| ---------------+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Start polling one attribute.

Ask `Tango <../../de/ddf/namespaceTango.html>`__ polling system to poll
one attribute

Parameters
    +-------------+---------------------------+
    | att\_name   | The attribute name        |
    +-------------+---------------------------+
    | period      | The polling period (mS)   |
    +-------------+---------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------+-----+-------------------+--- |                                      |
| -------------+                       |                                      |
| | void Tango::DeviceImpl::poll\_comm |                                      |
| and   | (   | const string &    | *c |                                      |
| md\_name*,   |                       |                                      |
| +----------------------------------- |                                      |
| ------+-----+-------------------+--- |                                      |
| -------------+                       |                                      |
| |                                    |                                      |
|       |     | int               | *p |                                      |
| eriod*       |                       |                                      |
| +----------------------------------- |                                      |
| ------+-----+-------------------+--- |                                      |
| -------------+                       |                                      |
| |                                    |                                      |
|       | )   |                   |    |                                      |
|              |                       |                                      |
| +----------------------------------- |                                      |
| ------+-----+-------------------+--- |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Start polling a command.

Ask `Tango <../../de/ddf/namespaceTango.html>`__ polling system to poll
a command

Parameters
    +-------------+---------------------------+
    | cmd\_name   | The command name          |
    +-------------+---------------------------+
    | period      | The polling period (mS)   |
    +-------------+---------------------------+

+------------------------------------------------+-----+-----------------+------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string          | *attr\_name*,          |
+------------------------------------------------+-----+-----------------+------------------------+
|                                                |     | DevFailed \*    | *except* = ``NULL``    |
+------------------------------------------------+-----+-----------------+------------------------+
|                                                | )   |                 |                        |
+------------------------------------------------+-----+-----------------+------------------------+

Push an archive event for state or status attribute or push an exception
as archive event for any attribute.

The event is pushed to the event system.

The method needs the attribue name as input. For the state and status
attributes the actual state and status values are pushed. In case of an
exception, the exception is pushed as an archive event for the
attribute.

Parameters
    +--------------+-------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                         |
    +--------------+-------------------------------------------------------------------+
    | except       | Pointer to a Tango::DevFailed exception. Default value is NULL.   |
    +--------------+-------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevShort \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevShort attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string               | *attr\_name*,            |
+------------------------------------------------+-----+----------------------+--------------------------+
|                                                |     | Tango::DevLong \*    | *p\_data*,               |
+------------------------------------------------+-----+----------------------+--------------------------+
|                                                |     | long                 | *x* = ``1``,             |
+------------------------------------------------+-----+----------------------+--------------------------+
|                                                |     | long                 | *y* = ``0``,             |
+------------------------------------------------+-----+----------------------+--------------------------+
|                                                |     | bool                 | *release* = ``false``    |
+------------------------------------------------+-----+----------------------+--------------------------+
|                                                | )   |                      |                          |
+------------------------------------------------+-----+----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevLong attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevLong64 \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevLong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevFloat \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevFloat attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevDouble \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevDouble attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevString \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevString attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevBoolean \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevBoolean attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevUShort \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevUShort attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevUChar \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevUChar attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevULong \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevULong attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevULong64 \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevLong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevState \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevState attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevEncoded \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevEncoded attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevString \*    | *p\_str\_data*,          |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevUChar \*     | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *size*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevEncoded attribute
data type when the data are specified using two pointers.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the archive event criteria depending on the
configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the data string part to be pushed                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data part to be pushed                                                                                           |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the data to be pushed (Pointed to by p\_data)                                                                           |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevShort \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevShort attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevLong \*     | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevLong attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevLong64 \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | struct timeval &       | *t*,                     |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::AttrQuality     | *qual*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevLong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevFloat \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevFloat attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevDouble \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | struct timeval &       | *t*,                     |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::AttrQuality     | *qual*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevDouble attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevString \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | struct timeval &       | *t*,                     |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::AttrQuality     | *qual*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevString attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevBoolean \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | struct timeval &        | *t*,                     |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::AttrQuality      | *qual*,                  |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevBoolean attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevUShort \*    | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | struct timeval &       | *t*,                     |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::AttrQuality     | *qual*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *x* = ``1``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *y* = ``0``,             |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevUShort attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevUChar \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevUChar attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevULong \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevULong attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevULong64 \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | struct timeval &        | *t*,                     |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::AttrQuality      | *qual*,                  |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevULong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                | *attr\_name*,            |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::DevState \*    | *p\_data*,               |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | struct timeval &      | *t*,                     |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | Tango::AttrQuality    | *qual*,                  |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *x* = ``1``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | long                  | *y* = ``0``,             |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                |     | bool                  | *release* = ``false``    |
+------------------------------------------------+-----+-----------------------+--------------------------+
|                                                | )   |                       |                          |
+------------------------------------------------+-----+-----------------------+--------------------------+

Push an archive event for an attribute with Tango::DevState attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                  | *attr\_name*,            |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::DevEncoded \*    | *p\_data*,               |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | struct timeval &        | *t*,                     |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | Tango::AttrQuality      | *qual*,                  |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *x* = ``1``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | long                    | *y* = ``0``,             |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                |     | bool                    | *release* = ``false``    |
+------------------------------------------------+-----+-------------------------+--------------------------+
|                                                | )   |                         |                          |
+------------------------------------------------+-----+-------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevEncoded attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_archive\_event   | (   | string                 | *attr\_name*,            |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevString \*    | *p\_str\_data*,          |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::DevUChar \*     | *p\_data*,               |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | long                   | *size*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | struct timeval &       | *t*,                     |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | Tango::AttrQuality     | *qual*,                  |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                |     | bool                   | *release* = ``false``    |
+------------------------------------------------+-----+------------------------+--------------------------+
|                                                | )   |                        |                          |
+------------------------------------------------+-----+------------------------+--------------------------+

Push an archive event for an attribute with Tango::DevEncoded attribute
data type when it is specified using two pointers.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the archive
event criteria depending on the configuration choosen with
`set\_archive\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#ad90289326211e05632a245a87bab11bb>`__.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the data string part to be pushed                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data to be pushed                                                                                                |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the data to be pushed (Pointed to by p\_data)                                                                           |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t              | The time stamp                                                                                                                  |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual           | The attribute quality factor                                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------+------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string          | *attr\_name*,          |
+-----------------------------------------------+-----+-----------------+------------------------+
|                                               |     | DevFailed \*    | *except* = ``NULL``    |
+-----------------------------------------------+-----+-----------------+------------------------+
|                                               | )   |                 |                        |
+-----------------------------------------------+-----+-----------------+------------------------+

Push a change event for a state or status attribute or return an
exception as change event for any attribute.

The event is pushed to the event system.

The method needs the attribue name as input. For the state and status
attributes the actual state and status values are pushed. In case of an
exception, the exception is pushed as a change event for the attribute.

Parameters
    +--------------+-------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                         |
    +--------------+-------------------------------------------------------------------+
    | except       | Pointer to a Tango::DevFailed exception. Default value is NULL.   |
    +--------------+-------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevShort \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string               | *attr\_name*,            |
+-----------------------------------------------+-----+----------------------+--------------------------+
|                                               |     | Tango::DevLong \*    | *p\_data*,               |
+-----------------------------------------------+-----+----------------------+--------------------------+
|                                               |     | long                 | *x* = ``1``,             |
+-----------------------------------------------+-----+----------------------+--------------------------+
|                                               |     | long                 | *y* = ``0``,             |
+-----------------------------------------------+-----+----------------------+--------------------------+
|                                               |     | bool                 | *release* = ``false``    |
+-----------------------------------------------+-----+----------------------+--------------------------+
|                                               | )   |                      |                          |
+-----------------------------------------------+-----+----------------------+--------------------------+

Push a change event for an attribute with Tango::DevLong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevLong64 \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevLong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevFloat \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevFloat attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevDouble \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevDouble attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevString \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevString attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevBoolean \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevBoolean attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevUShort \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

void push\_change\_event (string attr\_name, Tango::DevBoolea Push a
change event for an attribute with Tango::DevUShort attribute data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevUChar \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevUChar attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevULong \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevULong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevULong64 \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevULong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevState \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevState attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevEncoded \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevEncoded attribute
data type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevString \*    | *p\_str\_data*,          |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevUChar \*     | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *size*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevEncoded attribute
data type when the DevEncoded data are specified by two pointers.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid. The event is triggered
with or without checking of the change event criteria depending on the
configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the data string part to be pushed                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data to be pushed                                                                                                |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | The data number (pointed to by p\_data)                                                                                         |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevShort \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevLong \*     | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevLong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevLong64 \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | struct timeval &       | *t*,                     |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::AttrQuality     | *qual*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevLong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevFloat \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevFloat attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevDouble \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | struct timeval &       | *t*,                     |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::AttrQuality     | *qual*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevDouble attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevString \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | struct timeval &       | *t*,                     |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::AttrQuality     | *qual*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevString attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevBoolean \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | struct timeval &        | *t*,                     |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::AttrQuality      | *qual*,                  |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevBoolean attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevUShort \*    | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | struct timeval &       | *t*,                     |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::AttrQuality     | *qual*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *x* = ``1``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *y* = ``0``,             |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevUShort attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevUChar \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevUChar attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevULong \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevULong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevULong64 \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | struct timeval &        | *t*,                     |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::AttrQuality      | *qual*,                  |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevULong64 attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                | *attr\_name*,            |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::DevState \*    | *p\_data*,               |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | struct timeval &      | *t*,                     |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | Tango::AttrQuality    | *qual*,                  |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *x* = ``1``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | long                  | *y* = ``0``,             |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               |     | bool                  | *release* = ``false``    |
+-----------------------------------------------+-----+-----------------------+--------------------------+
|                                               | )   |                       |                          |
+-----------------------------------------------+-----+-----------------------+--------------------------+

Push a change event for an attribute with Tango::DevState attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                  | *attr\_name*,            |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::DevEncoded \*    | *p\_data*,               |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | struct timeval &        | *t*,                     |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | Tango::AttrQuality      | *qual*,                  |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *x* = ``1``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | long                    | *y* = ``0``,             |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               |     | bool                    | *release* = ``false``    |
+-----------------------------------------------+-----+-------------------------+--------------------------+
|                                               | )   |                         |                          |
+-----------------------------------------------+-----+-------------------------+--------------------------+

Push a change event for an attribute with Tango::DevEncoded attribute
data type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name   | The name of the attribute                                                                                                       |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                  |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual         | The attribute quality factor                                                                                                    |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x            | The attribute x length. Default value is 1                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y            | The attribute y length. Default value is 0                                                                                      |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release      | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_change\_event   | (   | string                 | *attr\_name*,            |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevString \*    | *p\_str\_data*,          |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::DevUChar \*     | *p\_data*,               |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | long                   | *size*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | struct timeval &       | *t*,                     |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | Tango::AttrQuality     | *qual*,                  |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               |     | bool                   | *release* = ``false``    |
+-----------------------------------------------+-----+------------------------+--------------------------+
|                                               | )   |                        |                          |
+-----------------------------------------------+-----+------------------------+--------------------------+

Push a change event for an attribute with Tango::DevEncoded attribute
data type when the data rea specified with two pointers.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given. The event is triggered with or without checking of the change
event criteria depending on the configuration choosen with
`set\_change\_event() <../../d3/d62/classTango_1_1DeviceImpl.html#acc288d1cf858125abe0e6e4e154e9f43>`__.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the data string part to be pushed                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data to be pushed                                                                                                |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | Size of the data to be ushed (pointed to be p\_data                                                                             |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t              | The time stamp                                                                                                                  |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual           | The attribute quality factor                                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+----------------------------------------------------+-----+-------------------+------------------+
| void Tango::DeviceImpl::push\_data\_ready\_event   | (   | const string &    | *attr\_name*,    |
+----------------------------------------------------+-----+-------------------+------------------+
|                                                    |     | Tango::DevLong    | *ctr* = ``0``    |
+----------------------------------------------------+-----+-------------------+------------------+
|                                                    | )   |                   |                  |
+----------------------------------------------------+-----+-------------------+------------------+

Push a data ready event for the attribute with name specified as the
first parameter.

The event is pushed to the event system.

The method needs only the attribue name and an optional "counter" which
will be passed unchanged within the event

Parameters
    +--------------+-----------------------------+
    | attr\_name   | The name of the attribute   |
    +--------------+-----------------------------+
    | ctr          | The user counter            |
    +--------------+-----------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute name is unknown. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,          |
+---------------------------------------+-----+-----------------------+------------------------+
|                                       |     | vector< string > &    | *filt\_names*,         |
+---------------------------------------+-----+-----------------------+------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,          |
+---------------------------------------+-----+-----------------------+------------------------+
|                                       |     | DevFailed \*          | *except* = ``NULL``    |
+---------------------------------------+-----+-----------------------+------------------------+
|                                       | )   |                       |                        |
+---------------------------------------+-----+-----------------------+------------------------+

Push a user event for a state or status attribute or return an exception
as user event for any attribute.

The event is pushed to the event system.

The method needs the attribue name as input. For the state and status
attributes the actual state and status values are pushed. In case of an
exception, the exception is pushed as a user event for the attribute.

Parameters
    +---------------+-------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                         |
    +---------------+-------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                        |
    +---------------+-------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                           |
    +---------------+-------------------------------------------------------------------+
    | except        | Pointer to a Tango::DevFailed exception. Default value is NULL.   |
    +---------------+-------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevShort \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevLong \*     | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevLong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevLong64 \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevLong64 attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevFloat \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevFloat attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevDouble \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevDouble attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevString \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevString attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevBoolean \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevBoolean attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevUShort \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevUShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevUChar \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevUChar attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevULong \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevULong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevULong64 \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevULong64 attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevState \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevState attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevEncoded \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevEncoded attribute data
type.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevString \*    | *p\_str\_data*,          |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevUChar \*     | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *size*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevEncoded attribute data
type when the attribute data are specified with 2 pointers.

The event is pushed to the event system.

The method needs the attribue name and a pointer to the data to be
pushed as input. Depending on the attribute type the dimensions x and
why need to be given. The time stamp of the event is set to the actual
time and the attribute quality is set to valid.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names    | The filterable fields name                                                                                                      |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals     | The filterable fields value (as double)                                                                                         |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the string sent with the data                                                                                        |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data to be pushed                                                                                                |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | The data number (pointed to by p\_data)                                                                                         |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevShort \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevLong \*     | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevLong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevLong64 \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | struct timeval &       | *t*,                     |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::AttrQuality     | *qual*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevLong64 attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevFloat \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevFloat attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevDouble \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | struct timeval &       | *t*,                     |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::AttrQuality     | *qual*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevDouble attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevString \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | struct timeval &       | *t*,                     |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::AttrQuality     | *qual*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevString attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevBoolean \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | struct timeval &        | *t*,                     |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::AttrQuality      | *qual*,                  |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevBoolean attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevUShort \*    | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | struct timeval &       | *t*,                     |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::AttrQuality     | *qual*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *x* = ``1``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *y* = ``0``,             |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevUShort attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevUChar \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevUChar attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevULong \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevULong attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevULong64 \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | struct timeval &        | *t*,                     |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::AttrQuality      | *qual*,                  |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevULong64 attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-----------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                | *attr\_name*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< string > &    | *filt\_names*,           |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | vector< double > &    | *filt\_vals*,            |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::DevState \*    | *p\_data*,               |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | struct timeval &      | *t*,                     |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | Tango::AttrQuality    | *qual*,                  |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *x* = ``1``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | long                  | *y* = ``0``,             |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       |     | bool                  | *release* = ``false``    |
+---------------------------------------+-----+-----------------------+--------------------------+
|                                       | )   |                       |                          |
+---------------------------------------+-----+-----------------------+--------------------------+

Push a user event for an attribute with Tango::DevState attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+-------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                  | *attr\_name*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< string > &      | *filt\_names*,           |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | vector< double > &      | *filt\_vals*,            |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::DevEncoded \*    | *p\_data*,               |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | struct timeval &        | *t*,                     |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | Tango::AttrQuality      | *qual*,                  |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *x* = ``1``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | long                    | *y* = ``0``,             |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       |     | bool                    | *release* = ``false``    |
+---------------------------------------+-----+-------------------------+--------------------------+
|                                       | )   |                         |                          |
+---------------------------------------+-----+-------------------------+--------------------------+

Push a user event for an attribute with Tango::DevEncoded attribute data
type.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                                                       |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names   | The filterable fields name                                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals    | The filterable fields value (as double)                                                                                         |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data       | Pointer to the data to be pushed                                                                                                |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t             | The time stamp                                                                                                                  |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual          | The attribute quality factor                                                                                                    |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | x             | The attribute x length. Default value is 1                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | y             | The attribute y length. Default value is 0                                                                                      |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release       | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +---------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------+-----+------------------------+--------------------------+
| void Tango::DeviceImpl::push\_event   | (   | string                 | *attr\_name*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< string > &     | *filt\_names*,           |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | vector< double > &     | *filt\_vals*,            |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevString \*    | *p\_str\_data*,          |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::DevUChar \*     | *p\_data*,               |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | long                   | *size*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | struct timeval &       | *t*,                     |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | Tango::AttrQuality     | *qual*,                  |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       |     | bool                   | *release* = ``false``    |
+---------------------------------------+-----+------------------------+--------------------------+
|                                       | )   |                        |                          |
+---------------------------------------+-----+------------------------+--------------------------+

Push a user event for an attribute with Tango::DevEncoded attribute data
type when the string part and the data part of the DevEncoded data are
specified separately.

The event is pushed to the event system.

The method needs the attribue name, a pointer to the data to be pushed,
the time stamp for the data and the attribute quality factor as input.
Depending on the attribute type the dimensions x and why need to be
given.

Parameters
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | attr\_name     | The name of the attribute                                                                                                       |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_names    | The filterable fields name                                                                                                      |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | filt\_vals     | The filterable fields value (as double)                                                                                         |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_str\_data   | Pointer to the data string part                                                                                                 |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | p\_data        | Pointer to the data to be pushed                                                                                                |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | size           | The data number (pointed to by p\_data)                                                                                         |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | t              | The time stamp                                                                                                                  |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | qual           | The attribute quality factor                                                                                                    |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+
    | release        | The release flag. If true, memory pointed to by p\_data will be freed after being send to the client. Default value is false.   |
    +----------------+---------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------------+-----+-------------------+-----------------+
| void Tango::DeviceImpl::push\_pipe\_event   | (   | const string &    | *pipe\_name*,   |
+---------------------------------------------+-----+-------------------+-----------------+
|                                             |     | DevFailed \*      | *except*        |
+---------------------------------------------+-----+-------------------+-----------------+
|                                             | )   |                   |                 |
+---------------------------------------------+-----+-------------------+-----------------+

Push a pipe event with exception data as value The method needs the pipe
name as input.

Parameters
    +--------------+--------------------------------------------+
    | pipe\_name   | The name of the pipe                       |
    +--------------+--------------------------------------------+
    | except       | Pointer to a Tango::DevFailed exception.   |
    +--------------+--------------------------------------------+

+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
| void Tango::DeviceImpl::push\_pipe\_event   | (   | const string &                                                                   | *pipe\_name*,              |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             |     | `Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ \*    | *p\_data*,                 |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             |     | bool                                                                             | *reuse\_it* = ``false``    |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             | )   |                                                                                  |                            |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+

Push a pipe event.

The method needs the pipe name and a pointer to the pipe blob to be
pushed as input. The time stamp of the event is set to the actual time.

Parameters
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | pipe\_name   | The name of the pipe                                                                                                                                                                      |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ blob to be sent with the event                                                                                             |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | reuse\_it    | Flag set to true if you don want the push\_pipe\_event to consume `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ internal memory. Default value is false which covers 95% of use cases   |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the pipe data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
| void Tango::DeviceImpl::push\_pipe\_event   | (   | const string &                                                                   | *pipe\_name*,              |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             |     | `Tango::DevicePipeBlob <../../df/dd9/classTango_1_1DevicePipeBlob.html>`__ \*    | *p\_data*,                 |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             |     | struct timeval &                                                                 | *t*,                       |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             |     | bool                                                                             | *reuse\_it* = ``false``    |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+
|                                             | )   |                                                                                  |                            |
+---------------------------------------------+-----+----------------------------------------------------------------------------------+----------------------------+

Push a pipe event with a specified timestamp.

The method needs the pipe name, a pointer to the pipe blob to be pushed
and the time stamp for the data as input.

Parameters
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | pipe\_name   | The name of the pipe                                                                                                                                                                      |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | p\_data      | Pointer to the data to be pushed                                                                                                                                                          |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | t            | The time stamp                                                                                                                                                                            |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | reuse\_it    | Flag set to true if you don want the push\_pipe\_event to consume `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ internal memory. Default value is false which covers 95% of use cases   |
    +--------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the pipe data type is not coherent. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------+-----+------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+----------+-----+----+    |                                      |
| | virtual void Tango::DeviceImpl::re |                                      |
| ad\_attr   | (   | `Attribute <../.. |                                      |
| /d6/dad/classTango_1_1Attribute.html |                                      |
| >`__ &    | *attr*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| -----------+-----+------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+----------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the attribute read value.

Default method to set an attribute read value. This method must be
redefined in sub-classes when attributes are needed

Parameters
    +--------+------------------------+
    | attr   | The attribute object   |
    +--------+------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------+-----+-------- |                                      |
| -------------+----------------+----- |                                      |
| +----+                               |                                      |
| | virtual void Tango::DeviceImpl::re |                                      |
| ad\_attr\_hardware   | (   | vector< |                                      |
|  long > &    | *attr\_list*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -------------+----------------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read the hardware to return attribute value(s).

Default method to implement an action necessary on a device to read the
hardware involved in a a read attribute CORBA call. This method must be
redefined in sub-classes in order to support attribute reading

Parameters
    +--------------+---------------------------------------------------------------------------------------------------------------------------------------------------------+
    | attr\_list   | Reference to a vector with Integer object. Each element in this vector is the index in the device object attribute vector of an attribute to be read.   |
    +--------------+---------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------------+-----+---------+-------------------------------+
| void Tango::DeviceImpl::register\_signal   | (   | long    | *signo*,                      |
+--------------------------------------------+-----+---------+-------------------------------+
|                                            |     | bool    | *own\_handler* = ``false``    |
+--------------------------------------------+-----+---------+-------------------------------+
|                                            | )   |         |                               |
+--------------------------------------------+-----+---------+-------------------------------+

Register a signal to be executed in a signal handler.

Register this device as device to be informed when signal signo is sent
to to the device server process. This method is available only under
Linux.

Parameters
    +----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | signo          | The signal number                                                                                                                                                                                                                                                       |
    +----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | own\_handler   | A boolean set to true if you want the device signal handler to be executed in its own handler instead of being executed by the signal thread. If this parameter is set to true, care should be taken on how the handler is written. A default false value is provided   |
    +----------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the signal number is out of range or if the operating system failed to register a signal for the process. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------------+-----+-------------------------------------------------------+---------------------------+
| void Tango::DeviceImpl::remove\_attribute   | (   | `Attr <../../d5/dcd/classTango_1_1Attr.html>`__ \*    | *rem\_attr*,              |
+---------------------------------------------+-----+-------------------------------------------------------+---------------------------+
|                                             |     | bool                                                  | *free\_it* = ``false``,   |
+---------------------------------------------+-----+-------------------------------------------------------+---------------------------+
|                                             |     | bool                                                  | *clean\_db* = ``true``    |
+---------------------------------------------+-----+-------------------------------------------------------+---------------------------+
|                                             | )   |                                                       |                           |
+---------------------------------------------+-----+-------------------------------------------------------+---------------------------+

Remove one attribute from the device attribute list.

Attributes are normally constructed in the
`DeviceClass::attribute\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__
method. Nevertheless, it is still possible to add a new attribute to a
device with the
`DeviceImpl::add\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a9f130650c3a9da5190001adfbc2dc50c>`__
method. This remove\_attribute method delete the attribute from the
device attribute list.

Parameters
    +-------------+------------------------------------------------------------------------------------------------------------------------------------+
    | rem\_attr   | Pointer to the attribute to be removed                                                                                             |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------+
    | free\_it    | Boolean set to true if the object passed as first argument must be freed. Default value is false.                                  |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------+
    | clean\_db   | Clean all attributes related information (included polling info if the attribute is polled) from database. Default value is true   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+---------------------------------------------+-----+-------------+---------------------------+
| void Tango::DeviceImpl::remove\_attribute   | (   | string &    | *rem\_attr\_name*,        |
+---------------------------------------------+-----+-------------+---------------------------+
|                                             |     | bool        | *free\_it* = ``false``,   |
+---------------------------------------------+-----+-------------+---------------------------+
|                                             |     | bool        | *clean\_db* = ``true``    |
+---------------------------------------------+-----+-------------+---------------------------+
|                                             | )   |             |                           |
+---------------------------------------------+-----+-------------+---------------------------+

Remove one attribute from the device attribute list.

Attributes are normally constructed in the
`DeviceClass::attribute\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#a0ea1a3848a3d59f55a6734772859c4ec>`__
method. Nevertheless, it is still possible to add a new attribute to a
device with the
`DeviceImpl::add\_attribute <../../d3/d62/classTango_1_1DeviceImpl.html#a9f130650c3a9da5190001adfbc2dc50c>`__
method. This remove\_attribute method delete the attribute from the
device attribute list.

Parameters
    +-------------------+------------------------------------------------------------------------------------------------------------------------------------+
    | rem\_attr\_name   | The name of the attribute to be removed                                                                                            |
    +-------------------+------------------------------------------------------------------------------------------------------------------------------------+
    | free\_it          | Boolean set to true if the attribute object must be freed. Default value is false.                                                 |
    +-------------------+------------------------------------------------------------------------------------------------------------------------------------+
    | clean\_db         | Clean all attributes related information (included polling info if the attribute is polled) from database. Default value is true   |
    +-------------------+------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------------+-----+-------------------------------------------------------------+---------------------------+
| void Tango::DeviceImpl::remove\_command   | (   | `Command <../../d2/d1d/classTango_1_1Command.html>`__ \*    | *rem\_cmd*,               |
+-------------------------------------------+-----+-------------------------------------------------------------+---------------------------+
|                                           |     | bool                                                        | *free\_it* = ``false``,   |
+-------------------------------------------+-----+-------------------------------------------------------------+---------------------------+
|                                           |     | bool                                                        | *clean\_db* = ``true``    |
+-------------------------------------------+-----+-------------------------------------------------------------+---------------------------+
|                                           | )   |                                                             |                           |
+-------------------------------------------+-----+-------------------------------------------------------------+---------------------------+

Remove one command from the device command list.

Commands are normally constructed in the
`DeviceClass::command\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#ac86eef5f7d53b5291a034f7bb6fd289a>`__
method. Nevertheless, it is still possible to add a new command to a
device with the
`DeviceImpl::add\_command <../../d3/d62/classTango_1_1DeviceImpl.html#a64f3aafd381cd25bb562cdb4074932d9>`__
method. This remove\_command method delete the command from the device
command list.

Parameters
    +-------------+---------------------------------------------------------------------------------------------------------------------------+
    | rem\_cmd    | Pointer to the command to be removed                                                                                      |
    +-------------+---------------------------------------------------------------------------------------------------------------------------+
    | free\_it    | Boolean set to true if the object passed as first argument must be freed. Default value is false.                         |
    +-------------+---------------------------------------------------------------------------------------------------------------------------+
    | clean\_db   | Clean command related information (included polling info if the command is polled) from database. Default value is true   |
    +-------------+---------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------------+-----+-------------------+---------------------------+
| void Tango::DeviceImpl::remove\_command   | (   | const string &    | *rem\_cmd\_name*,         |
+-------------------------------------------+-----+-------------------+---------------------------+
|                                           |     | bool              | *free\_it* = ``false``,   |
+-------------------------------------------+-----+-------------------+---------------------------+
|                                           |     | bool              | *clean\_db* = ``true``    |
+-------------------------------------------+-----+-------------------+---------------------------+
|                                           | )   |                   |                           |
+-------------------------------------------+-----+-------------------+---------------------------+

Remove one command from the device command list.

Commands are normally constructed in the
`DeviceClass::command\_factory() <../../d4/dcd/classTango_1_1DeviceClass.html#ac86eef5f7d53b5291a034f7bb6fd289a>`__
method. Nevertheless, it is still possible to add a new command to a
device with the
`DeviceImpl::add\_command <../../d3/d62/classTango_1_1DeviceImpl.html#a64f3aafd381cd25bb562cdb4074932d9>`__
method. This remove\_command method delete the command from the device
command list.

Parameters
    +------------------+---------------------------------------------------------------------------------------------------------------------------+
    | rem\_cmd\_name   | The name of the command to be removed                                                                                     |
    +------------------+---------------------------------------------------------------------------------------------------------------------------+
    | free\_it         | Boolean set to true if the command object must be freed. Default value is false.                                          |
    +------------------+---------------------------------------------------------------------------------------------------------------------------+
    | clean\_db        | Clean command related information (included polling info if the command is polled) from database. Default value is true   |
    +------------------+---------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+--------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+--------------------------------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------+------------------------+
| void Tango::DeviceImpl::set\_archive\_event   | (   | string    | *attr\_name*,          |
+-----------------------------------------------+-----+-----------+------------------------+
|                                               |     | bool      | *implemented*,         |
+-----------------------------------------------+-----+-----------+------------------------+
|                                               |     | bool      | *detect* = ``true``    |
+-----------------------------------------------+-----+-----------+------------------------+
|                                               | )   |           |                        |
+-----------------------------------------------+-----+-----------+------------------------+

Set an implemented flag for the attribute to indicate that the server
fires archive events manually, without the polling to be started.

If the detect parameter is set to true, the criteria specified for the
archive event are verified and the event is only pushed if they are
fulfilled. If detect is set to false the event is fired without any
value checking!

Parameters
    +---------------+------------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                            |
    +---------------+------------------------------------------------------------------------------------------------------+
    | implemented   | True when the server fires archive events manually.                                                  |
    +---------------+------------------------------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the archive event properties when set to true. Default value is true.   |
    +---------------+------------------------------------------------------------------------------------------------------+

+----------------------------------------------+-----+-----------+------------------------+
| void Tango::DeviceImpl::set\_change\_event   | (   | string    | *attr\_name*,          |
+----------------------------------------------+-----+-----------+------------------------+
|                                              |     | bool      | *implemented*,         |
+----------------------------------------------+-----+-----------+------------------------+
|                                              |     | bool      | *detect* = ``true``    |
+----------------------------------------------+-----+-----------+------------------------+
|                                              | )   |           |                        |
+----------------------------------------------+-----+-----------+------------------------+

Set an implemented flag for the attribute to indicate that the server
fires change events manually, without the polling to be started.

If the detect parameter is set to true, the criteria specified for the
change event are verified and the event is only pushed if they are
fulfilled. If detect is set to false the event is fired without any
value checking!

Parameters
    +---------------+-----------------------------------------------------------------------------------------------------+
    | attr\_name    | The name of the attribute                                                                           |
    +---------------+-----------------------------------------------------------------------------------------------------+
    | implemented   | True when the server fires change events manually.                                                  |
    +---------------+-----------------------------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the change event properties when set to true. Default value is true.   |
    +---------------+-----------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+-----------------------+- |                                      |
| ------+-----+----+                   |                                      |
| | void Tango::DeviceImpl::set\_d\_va |                                      |
| r   | (   | Tango::Device\_ptr    |  |                                      |
| *d*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ----+-----+-----------------------+- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the associated CORBA object reference.

Set the associated CORBA object reference.
`Tango <../../de/ddf/namespaceTango.html>`__ supports only a one to one
servant-CORBA object link.

Parameters
    +-----+------------------------------+
    | d   | The CORBA object reference   |
    +-----+------------------------------+

+---------------------------------------------------+-----+-----------+------------------+
| void Tango::DeviceImpl::set\_data\_ready\_event   | (   | string    | *attr\_name*,    |
+---------------------------------------------------+-----+-----------+------------------+
|                                                   |     | bool      | *implemented*    |
+---------------------------------------------------+-----+-----------+------------------+
|                                                   | )   |           |                  |
+---------------------------------------------------+-----+-----------+------------------+

Set an implemented flag for the attribute to indicate that the server
fires data ready event for this attribute.

Parameters
    +---------------+------------------------------------------------+
    | attr\_name    | The name of the attribute                      |
    +---------------+------------------------------------------------+
    | implemented   | True when the server fires data ready event.   |
    +---------------+------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+---------+----- |                                      |
| +----+                               |                                      |
| | void Tango::DeviceImpl::set\_devic |                                      |
| e\_attr   | (   | `MultiAttribute <. |                                      |
| ./../dc/d3b/classTango_1_1MultiAttri |                                      |
| bute.html>`__ \*    | *ptr*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+---------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device multi attribute object.

Set the pointer to the device multi attribute object

Returns
    Pointer to the device multi attribute object

References
`dev\_attr <../../d3/d62/classTango_1_1DeviceImpl.html#aed3e20a35c92335be9ba742abdd9d60b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------------------ |                                      |
| ----------+-------+-----+----+       |                                      |
| | void Tango::DeviceImpl::set\_obj\_ |                                      |
| id   | (   | PortableServer::ObjectI |                                      |
| d\_var    | *o*   | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------------------ |                                      |
| ----------+-------+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the associated CORBA object identifier.

Set the associated CORBA object identifier.

Parameters
    +-----+-------------------------------+
    | o   | The CORBA object identifier   |
    +-----+-------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+-------------------------- |                                      |
| --+----------------+-----+----+      |                                      |
| | void Tango::DeviceImpl::set\_state |                                      |
|    | (   | const Tango::DevState &   |                                      |
|   | *new\_state*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ---+-----+-------------------------- |                                      |
| --+----------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device state.

Parameters
    +--------------+------------------------+
    | new\_state   | The new device state   |
    +--------------+------------------------+

References
`device\_state <../../d3/d62/classTango_1_1DeviceImpl.html#a214ba0a5741c52165869ae11219d414a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+-------------------+----- |                                      |
| ------------+-----+----+             |                                      |
| | void Tango::DeviceImpl::set\_statu |                                      |
| s   | (   | const string &    | *new |                                      |
| \_status*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ----+-----+-------------------+----- |                                      |
| ------------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set device status.

Parameters
    +---------------+-------------------------+
    | new\_status   | The new device status   |
    +---------------+-------------------------+

References
`device\_status <../../d3/d62/classTango_1_1DeviceImpl.html#aa66233801c127f96878d701259739383>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------+-----+---------+--- |                                      |
| --------+-----+----+                 |                                      |
| | virtual void Tango::DeviceImpl::si |                                      |
| gnal\_handler   | (   | long    | *s |                                      |
| igno*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+---------+--- |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Signal handler.

The method executed when the signal arrived in the device server
process. This method is defined as virtual and then, can be redefined
following device needs.

Parameters
    +---------+---------------------+
    | signo   | The signal number   |
    +---------+---------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------------+-----+--------------- |                                      |
| ----+---------------+-----+----+     |                                      |
| | void Tango::DeviceImpl::stop\_poll |                                      |
| \_attribute   | (   | const string & |                                      |
|     | *att\_name*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ----+---------------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling one attribute.

Ask `Tango <../../de/ddf/namespaceTango.html>`__ polling system to stop
polling one attribute

Parameters
    +-------------+----------------------+
    | att\_name   | The attribute name   |
    +-------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------+-----+----------------- |                                      |
| --+---------------+-----+----+       |                                      |
| | void Tango::DeviceImpl::stop\_poll |                                      |
| \_command   | (   | const string &   |                                      |
|   | *cmd\_name*   | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| --+---------------+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling one command.

Ask `Tango <../../de/ddf/namespaceTango.html>`__ polling system to stop
polling one command

Parameters
    +-------------+--------------------+
    | cmd\_name   | The command name   |
    +-------------+--------------------+

+----------------------------------------------+-----+---------+-----------+-----+----+
| void Tango::DeviceImpl::unregister\_signal   | (   | long    | *signo*   | )   |    |
+----------------------------------------------+-----+---------+-----------+-----+----+

Unregister a signal.

Unregister this device as device to be informed when signal signo is
sent to to the device server process

Parameters
    +---------+---------------------+
    | signo   | The signal number   |
    +---------+---------------------+

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | Thrown if the signal number is out of range or if the operating system failed to unregister a signal for the process. Unregister a device for a signal number for a device not previously registered is not an error. This simply will do nothing. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------------+-----+------- |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
| | virtual void Tango::DeviceImpl::wr |                                      |
| ite\_attr\_hardware   | (   | vector |                                      |
| < long > &    | *attr\_list*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+------- |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write the hardware for attributes.

Default method to implement an action necessary on a device to write the
hardware involved in a a write attribute. This method must be redefined
in sub-classes in order to support writable attribute

Parameters
    +--------------+--------------------------------------------------------------------------------------------------------------------------------------------------+
    | attr\_list   | Reference to a vector of Integer objects. Each element in this vector is the index in the main attribute vector of an attribute to be written.   |
    +--------------+--------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | This method does not throw exception but a redefined method can. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| -----+                               |                                      |
| | friend class Tango::AutoTangoMonit |                                      |
| or   |                               |                                      |
| +----------------------------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ---------------+                     |                                      |
| | friend class Tango::EventSubscript |                                      |
| ionChangeCmd   |                     |                                      |
| +----------------------------------- |                                      |
| ---------------+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| --+                                  |                                      |
| | friend class Tango::EventSupplier  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------+                        |                                      |
| | friend class Tango::NoSyncModelTan |                                      |
| goMonitor   |                        |                                      |
| +----------------------------------- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------+                        |                                      |
| | string Tango::DeviceImpl::adm\_dev |                                      |
| ice\_name   |                        |                                      |
| +----------------------------------- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The administration device name.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --------+                            |                                      |
| | long Tango::DeviceImpl::blackbox\_ |                                      |
| depth   |                            |                                      |
| +----------------------------------- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device black box depth.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------+                        |                                      |
| | BlackBox\* Tango::DeviceImpl::blac |                                      |
| kbox\_ptr   |                        |                                      |
| +----------------------------------- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device black box pointer.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| -------------------+                 |                                      |
| | `DbDevice <../../da/dbb/classTango |                                      |
| _1_1DbDevice.html>`__\ \* Tango::Dev |                                      |
| iceImpl::db\_dev   |                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Pointer to the associated
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__ object.

Referenced by
`get\_db\_device() <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | protected                            |
| | string Tango::DeviceImpl::desc   | |                                      |
| +----------------------------------+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device description.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ---------------------------------+   |                                      |
| | `MultiAttribute <../../dc/d3b/clas |                                      |
| sTango_1_1MultiAttribute.html>`__\ \ |                                      |
| * Tango::DeviceImpl::dev\_attr   |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------------------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Pointer to the multi attribute object.

Referenced by
`get\_device\_attr() <../../d3/d62/classTango_1_1DeviceImpl.html#a339ebeff825166048358919948782be8>`__,
and
`set\_device\_attr() <../../d3/d62/classTango_1_1DeviceImpl.html#abfe5f92400f24bcfed94bc7a0d731233>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| -------------------------------+     |                                      |
| | `DeviceClass <../../d4/dcd/classTa |                                      |
| ngo_1_1DeviceClass.html>`__\ \* Tang |                                      |
| o::DeviceImpl::device\_class   |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Pointer to the device-class object associated with the device.

Referenced by
`get\_device\_class() <../../d3/d62/classTango_1_1DeviceImpl.html#a61fa9524c2eba31eba7ba9ff3b48ef0a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------+                             |                                      |
| | string Tango::DeviceImpl::device\_ |                                      |
| name   |                             |                                      |
| +----------------------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device name.

Referenced by
`get\_db\_device() <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__,
and
`get\_name() <../../d3/d62/classTango_1_1DeviceImpl.html#ac337fcab0f8fa8647e817a9aedc87f0c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------------+                   |                                      |
| | Tango::DevState Tango::DeviceImpl: |                                      |
| :device\_state   |                   |                                      |
| +----------------------------------- |                                      |
| -----------------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device state.

Referenced by
`get\_state() <../../d3/d62/classTango_1_1DeviceImpl.html#a5b53b4435a1ea8087849a9e505d70f2a>`__,
and
`set\_state() <../../d3/d62/classTango_1_1DeviceImpl.html#a2123f00afdfa638c31399eb10efefd66>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ---------+                           |                                      |
| | string Tango::DeviceImpl::device\_ |                                      |
| status   |                           |                                      |
| +----------------------------------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device status.

Referenced by
`append\_status() <../../d3/d62/classTango_1_1DeviceImpl.html#ab1c6dfb1ea310030cd464f9091a2b8b0>`__,
`get\_status() <../../d3/d62/classTango_1_1DeviceImpl.html#adc92cdf3a75da5ebc139b7bf7d9c7377>`__,
and
`set\_status() <../../d3/d62/classTango_1_1DeviceImpl.html#a54f9d94ef1072a6cb19ee472ccf044d7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| +                                    |                                      |
| | long Tango::DeviceImpl::version    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The device version.

--------------

The documentation for this class was generated from the following files:

-  `device.h <../../db/de9/device_8h_source.html>`__
-  `utils.h <../../d5/d60/utils_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../df/df5/classTango_1_1DeviceImpl__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/da6/classTango_1_1DeviceImpl__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
