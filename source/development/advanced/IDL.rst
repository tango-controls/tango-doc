.. raw:: latex

    \clearpage

The TANGO IDL file : Module Tango
=================================

The fundamental idea of a device as a network object which has methods
and data has been retained for TANGO. In TANGO objects are real C++/Java
objects which can be instantiated and accessed via their methods and
data by the client as if they were local objects. This interface is
defined in CORBA IDL. The fundamental interface is Device. All TANGO
control objects will be of this type i.e. they will implement and offer
the Device interface. Some wrapper classes group in an API will hide the
calls to the Device interface from the client so that the client will
only see the wrapper classes. All CORBA details will be hidden from the
client as far as possible.

Aliases
-------

**AttributeConfigList**

| typedef sequence<AttributeConfig> AttributeConfigList;

**AttributeConfigList\_2**

| typedef sequence<AttributeConfig\_2> AttributeConfigList\_2;

**AttributeConfigList\_3**

| typedef sequence<AttributeConfig\_3> AttributeConfigList\_3;

**AttributeConfigList\_5**

| typedef sequence<AttributeConfig\_5> AttributeConfigList\_5;

**AttributeDimList**

| typedef sequence<AttributeDim> AttributeDimList;

**AttributeValueList**

| typedef sequence<AttributeValue> AttributeValueList;

**AttributeValueList\_3**

| typedef sequence<AttributeValue\_3> AttributeValueList\_3;

**AttributeValueList\_4**

| typedef sequence<AttributeValue\_4> AttributeValueList\_4;

**AttributeValueList\_5**

| typedef sequence<AttributeValue\_5> AttributeValueList\_5;

**AttrQualityList**

| typedef sequence<AttrQuality> AttrQualityList;

**CppClntIdent**

| typedef unsigned long CppClntIdent;

**DevAttrHistoryList**

| typedef sequence<DevAttrHistory> DevAttrHistoryList;

**DevAttrHistoryList\_3**

| typedef sequence<DevAttrHistory\_3> DevAttrHistoryList\_3;

**DevBoolean**

| typedef boolean DevBoolean;

**DevCmdHistoryList**

| typedef sequence<DevCmdHistory> DevCmdHistoryList

**DevCmdInfoList**

| typedef sequence<DevCmdInfo> DevCmdInfoList;

**DevCmdInfoList\_2**

| typedef sequence<DevCmdInfo\_2> DevCmdInfoList\_2;

**DevDouble**

| typedef double DevDouble;

**DevErrorList**

| typedef sequence<DevError> DevErrorList;

**DevErrorListList**

| typedef sequence<DevErrorList> DevErrorListList;

**DevFloat**

| typedef float DevFloat;

**DevLong**

| typedef long DevLong;

**DevShort**

| typedef short DevShort;

**DevString**

| typedef string DevString;

**DevULong**

| typedef unsigned long DevULong;

**DevUShort**

| typedef unsigned short DevUShort;

**DevVarCharArray**

| typedef sequence<octet> DevVarCharArray;

**DevVarDoubleArray**

| typedef sequence<double> DevVarDoubleArray;

**DevVarEncodedArray**

| typedef sequence<DevEncoded> DevVarEncodedArray;

**DevVarFloatArray**

| typedef sequence<float> DevVarFloatArray;

**DevVarLongArray**

| typedef sequence<long> DevVarLongArray;

**DevVarPipeDataEltArray**

| typedef sequence<DevPipeDataElt> DevVarPipeDataEltArray;

**DevVarShortArray**

| typedef sequence<short> DevVarShortArray;
| **DevVarStateArray**

| typedef sequence<DevState> DevVarStateArray;

**DevVarStringArray**

| typedef sequence<string> DevVarStringArray;

**DevVarULongArray**

| typedef sequence<unsigned long> DevVarULongArray;

**DevVarUShortArray**

| typedef sequence<unsigned short> DevVarUShortArray;

**EltInArrayList**

| typedef sequence<EltInArray> EltInArrayList;\

**JavaUUID**

| typedef unsigned long long JavaUUID[2];
| **PipeConfigList**

| typedef sequence<PipeConfig> PipeConfigList;
| **NamedDevErrorList**

| typedef sequence<NamedDevError> NamedDevErrorList;

**TimeValList**

| typedef sequence<TimeVal> TimeValList;\

Enums
-----

**AttrDataFormat**

enum AttrDataFormat

{

   SCALAR,

   SPECTRUM,

   IMAGE,

   FMT\_UNKNOWN

| };

**AttributeDataType**

enum AttributeDataType

{

   ATT\_BOOL,

   ATT\_SHORT,

   ATT\_LONG,

   ATT\_LONG64,

   ATT\_FLOAT,

   ATT\_DOUBLE,

   ATT\_UCHAR,

   ATT\_USHORT,

   ATT\_ULONG,

   ATT\_ULONG64,

   ATT\_STRING,

   ATT\_STATE,

   DEVICE\_STATE,

   ATT\_ENCODED,

   ATT\_NO\_DATA

| };

**AttrQuality**

enum AttrQuality

{

   ATTR\_VALID,

   ATTR\_INVALID,

   ATTR\_ALARM,

   ATTR\_CHANGING,

   ATTR\_WARNING

| };

**AttrWriteType**

enum AttrWriteType

{

   READ,

   READ\_WITH\_WRITE,

   WRITE,

   READ\_WRITE,

   WT\_UNKNOWN

| };

**DispLevel**

enum DispLevel

{

   OPERATOR,

   EXPERT,

   DL\_UNKNOWN

| };

**DevSource**

enum DevSource

{

   DEV,

   CACHE,

   CACHE\_DEV

| };

**DevState**

enum DevState

{

   ON,

   OFF,

   CLOSE,

   OPEN,

   INSERT,

   EXTRACT,

   MOVING,

   STANDBY,

   FAULT,

   INIT,

   RUNNING,

   ALARM,

   DISABLE,

   UNKNOWN

| };

**ErrSeverity**

enum ErrSeverity

{

   WARN,

   ERR,

   PANIC

| };

**LockerLanguage**

enum LockerLanguage

{

   CPP,

   JAVA

| };
| **PipeWriteType**

enum PipeWriteType

{

   PIPE\_READ,

   PIPE\_READ\_WRITE,

   PIPE\_WT\_UNKNOWN

};

Structs
-------

**ArchiveEventProp**

struct ArchiveEventProp

{

   string rel\_change;

   string abs\_change;

   string period;

   DevVarStringArray extensions;

 };

**AttributeAlarm**

struct AttributeAlarm

{

   string min\_alarm;

   string max\_alarm;

   string min\_warning;

   string max\_warning;

   string delta\_t;

   string delta\_val;

   DevVarStringArray extensions;

 };

**AttDataReady**

struct AttributeAlarm
{

   string name;

   long data\_type;

   long ctr;

}

**AttributeConfig**

struct AttributeConfig

{

   string name;

   AttrWriteType writable;

   AttrDataFormat data\_format;

   long data\_type;

   long max\_dim\_x;

   long max\_dim\_y;

   string description;

   string label;

   string unit;

   string standard\_unit;

   string display\_unit;

   string format;

   string min\_value;

   string max\_value;

   string min\_alarm;

   string max\_alarm;

   string writable\_attr\_name;

   DevVarStringArray extensions;

};

**AttributeConfig\_2**

struct AttributeConfig\_2

{

   string name;

   AttrWriteType writable;

   AttrDataFormat data\_format;

   long data\_type;

   long max\_dim\_x;

   long max\_dim\_y;

   string description;

   string label;

   string unit;

   string standard\_unit;

   string display\_unit;

   string format;

   string min\_value;

   string max\_value;

   string min\_alarm;

   string max\_alarm;

   string writable\_attr\_name;

   DispLevel level;

   DevVarStringArray extensions;

};

**AttributeConfig\_3**

struct AttributeConfig\_3

{

   string name;

   AttrWriteType writable;

   AttrDataFormat data\_format;

   long data\_type;

   long max\_dim\_x;

   long max\_dim\_y;

   string description;

   string label;

   string unit;

   string standard\_unit;

   string display\_unit;

   string format;

   string min\_value;

   string max\_value;

   string writable\_attr\_name;

   DispLevel level;

   AttributeAlarm alarm;

   EventProperties event\_prop;

   DevVarStringArray extensions;

   DevVarStringArray sys\_extensions;

};

**AttributeConfig\_5**

struct AttributeConfig\_5

{

   string name;

   AttrWriteType writable;

   AttrDataFormat data\_format;

   long data\_type;

   boolean memorized;

   boolean mem\_init;

   long max\_dim\_x;

   long max\_dim\_y;

   string description;

   string label;

   string unit;

   string standard\_unit;

   string display\_unit;

   string format;

   string min\_value;

   string max\_value;

   string writable\_attr\_name;

   DispLevel level;

   string root\_attr\_name;

   DevVarStringArray enum\_labels;

   AttributeAlarm att\_alarm;

   EventProperties event\_prop;

   DevVarStringArray extensions;

   DevVarStringArray sys\_extensions;

};

**AttributeDim**

struct AttributeDim

{

   long dim\_x;

   long dim\_y;

| };

**AttributeValue**

struct AttributeValue

{

   any value;

   AttrQuality quality;

   TimeVal time;

   string name;

   long dim\_x;

   long dim\_y;

| };

**AttributeValue\_3**

struct AttributeValue\_3

{

   any value;

   AttrQuality quality;

   TimeVal time;

   string name;

   AttributeDim r\_dim;

   AttributeDim w\_dim;

   DevErrorList err\_list;

};

**AttributeValue\_4**

struct AttributeValue\_4

{

   AttrValUnion value;

   AttrQuality quality;

   AttrDataFormat data\_format;

   TimeVal time;

   string name;

   AttributeDim r\_dim;

   AttributeDim w\_dim;

   DevErrorList err\_list;

};

**AttributeValue\_5**

struct AttributeValue\_5

{

   AttrValUnion value;

   AttrQuality quality;

   AttrDataFormat data\_format;

   long data\_type;

   TimeVal time;

   string name;

   AttributeDim r\_dim;

   AttributeDim w\_dim;

   DevErrorList err\_list;

};

**ChangeEventProp**

struct ChangeEventProp

{

   string rel\_change;

   string abs\_change;

   DevVarStringArray extensions;

};

**DevAttrHistory**

struct DevAttrHistory

{

   boolean attr\_failed;

   AttributeValue value;

   DevErrorList errors;

| };

**DevAttrHistory\_3**

struct DevAttrHistory\_3

{

   boolean attr\_failed;

   AttributeValue\_3 value;

};

**DevAttrHistory\_4**

struct DevAttrHistory\_4

{

   string name;

   TimeValList dates;

   any value;

   AttrQualityList quals;

   EltInArrayList quals\_array;

   AttributeDimList r\_dims;

   EltInArrayList r\_dims\_array;

   AttributeDimList w\_dims;

   EltInArrayList w\_dims\_array;

   DevErrorListList errors;

   EltInArrayList errors\_array;

};

**DevAttrHistory\_5**

struct DevAttrHistory\_5

{

   string name;

   AttrDataFormat data\_format;

   long data\_type;

   TimeValList dates;

   any value;

   AttrQualityList quals;

   EltInArrayList quals\_array;

   AttributeDimList r\_dims;

   EltInArrayList r\_dims\_array;

   AttributeDimList w\_dims;

   EltInArrayList w\_dims\_array;

   DevErrorListList errors;

   EltInArrayList errors\_array;

| };

**DevCmdHistory**

struct DevCmdHistory

{

   TimeVal time;

   boolean cmd\_failed;

   any value;

   DevErrorList errors;

| };

**DevCmdHistory\_4**

struct DevCmdHistory\_4

{

   TimeValList dates;

   any value;

   AttributeDimList dims;

   EltInArrayList dims\_array;

   DevErrorListList errors;

   EltInArrayList errors\_array;

   long cmd\_type;

| };

**DevCmdInfo**

struct DevCmdInfo

{

   string cmd\_name;

   long cmd\_tag;

   long in\_type;

   long out\_type;

   string in\_type\_desc;

   string out\_type\_desc;

| };

**DevCmdInfo\_2**

struct DevCmdInfo\_2

{

   string cmd\_name;

   DispLevel level;

   long cmd\_tag;

   long in\_type;

   long out\_type;

   string in\_type\_desc;

   string out\_type\_desc;

};

**DevEncoded**

struct DevEncoded

{

   DevString encoded\_format;

   DevVarCharArray encoded\_data;

};

**DevError**

struct DevError

{

   string reason;

   ErrSeverity severity;

   string desc;

   string origin;

};

**DevInfo**

struct DevInfo

{

   string dev\_class;

   string server\_id;

   string server\_host;

   long server\_version;

   string doc\_url;

};

**DevInfo\_3**

struct DevInfo\_3

{

   string dev\_class;

   string server\_id;

   string server\_host;

   long server\_version;

   string doc\_url;

   string dev\_type;

};

**DevIntrChange**

struct DevIntrChange

{

   boolean dev\_started;

   DevCmdInfoList\_2 cmds;

   AttributeConfigList\_5 atts;

};

**DevPipeBlob**

struct DevPipeBlob

{

   string name;

   DevVarPipeDataEltArray blob\_data;

| };

**DevPipeData**

struct DevPipeData

{

   string name;

   TimeVal time;

   DevPipeBlob data\_blob;

};

**DevPipeDataElt**

struct DevPipeDataElt

{

   string name;

   AttrValUnion value;

   DevVarPipeDataEltArray inner\_blob;

   string inner\_blob\_name;

};

**DevVarDoubleStringArray**

struct DevVarDoubleStringArray

{

   DevVarDoubleArray dvalue;

   DevVarStringArray svalue;

};

**DevVarLongStringArray**

struct DevVarLongStringArray

{

   DevVarLongArray lvalue;

   DevVarStringArray svalue;

};

**EltInArray**

struct EltInArray

{

   long start;

   long nb\_elt;

| };

**EventProperties**

struct EventProperties

{

   ChangeEventProp ch\_event;

   PeriodicEventProp per\_event;

   ArchiveEventProp arch\_event;

};

**JavaClntIdent**

struct JavaClntIdent

{

   string MainClass;

   JavaUUID uuid;

};

**NamedDevError**

struct NamedDevError

{

   string name;

   long index\_in\_call;

   DevErrorList err\_list;

};

**PeriodicEventProp**

struct PeriodicEventProp

{

   string period;

   DevVarStringArray extensions;

};

**PipeConfig**

struct PipeConfig

{

   string name;

   string description;

   string label;

   DispLevel level;

   PipeWriteType writable;

   DevVarStringArray extensions;

};

**TimeVal**

struct TimeVal

{

   long tv\_sec;

   long tv\_usec;

   long tv\_nsec;

| };

**ZmqCallInfo**

struct ZmqCallInfo

{

   long version;

   unsigned long ctr;

   string method\_name;

   DevVarCharArray oid;

   boolean call\_is\_except;

};

Unions
------

**AttrValUnion**

union AttrValUnion switch (AttributeDataType)

{

case ATT\_BOOL:

   DevVarBooleanArray bool\_att\_value;

case ATT\_SHORT:

   DevVarShortArray short\_att\_value;

case ATT\_LONG:

   DevVarLongArray long\_att\_value;

case ATT\_LONG64:

   DevVarLong64Array long64\_att\_value;

case ATT\_FLOAT:

   DevVarFloatArray float\_att\_value;

case ATT\_DOUBLE:

   DevVarDoubleArray double\_att\_value;

case ATT\_UCHAR

   DevVarCharArray uchar\_att\_value;

case ATT\_USHORT:

   DevVarUShortArray ushort\_att\_value;

case ATT\_ULONG:

   DevVarULongArray ulong\_att\_value;

case ATT\_ULONG64:

   DevVarULong64Array ulong64\_att\_value;

case ATT\_STRING:

   DevVarStringArray string\_att\_value;

case ATT\_STATE:

   DevVarStateArray state\_att\_value;

case DEVICE\_STATE:

   DevState dev\_state\_att;

case ATT\_ENCODED:

   DevVarEncodedArray encoded\_att\_value;

case ATT\_NO\_DATA:

   DevBoolean union\_no\_data;

};

**ClntIdent**

union ClntIdent switch (LockerLanguage)

{

case CPP:

   CppClntIdent cpp\_clnt;

case JAVA:

   JavaClntIdent java\_clnt;

};

Exceptions
----------

**DevFailed**

exception DevFailed

{

   DevErrorList errors;

};

**MultiDevFailed**

exception MultiDevFailed

{

   NamedDevErrorList errors;

};

Interface Tango::Device
-----------------------

The fundamental interface for all TANGO objects. Each Device is a
network object which can be accessed locally or via network. The network
protocol on the wire will be IIOP. The Device interface implements all
the basic functions needed for doing generic synchronous and
asynchronous I/O on a device. A Device object has data and actions. Data
are represented in the form of Attributes. Actions are represented in
the form of Commands. The CORBA Device interface offers attributes and
methods to access the attributes and commands. A client will either use
these methods directly from C++ or Java or access them via wrapper
classes implemented in a API. The Device interface describes only the
remote network interface. Implementation features like threads, command
security, priority etc. are dealt with in server side of the device
server model.

Attributes
~~~~~~~~~~

**adm\_name**

readonly attribute string adm\_name;

| adm\_name (readonly) - administrator device unique ascii identifier

**description**

readonly attribute string description;

| description (readonly) - general description of device

**name**

readonly attribute string name;

| name (readonly) - unique ascii identifier

**state**

readonly attribute DevState state;

| state (readonly) - device state

**status**

readonly attribute string status;

status (readonly) - device state as ascii string

Operations
~~~~~~~~~~

**black\_box**

DevVarStringArray black\_box(in long number)

| raises(DevFailed);
| read list of last N commands executed by clients
| *Parameters*:

   number – of commands to return

*Returns*:

|    list of command and clients

**command\_inout**

any command\_inout(in string command, in any argin)

| raises(DevFailed);
| execute a command on a device synchronously with no input parameter
  and one one output parameter
| *Parameters:*

   command – ascii string e.g. On

   argin – command input parameter e.g. float

*Returns*:

|    command result.

**command\_list\_query**

DevCmdInfoList command\_list\_query()

| raises(DevFailed);
| query device to see what commands it supports
| *Returns*:

|    list of commands and their types

**command\_query**

DevCmdInfo command\_query(in string command)

| raises(DevFailed);
| query device to see command argument
| *Parameters*:

   command – name

*Returns*:

|    command and its types

**get\_attribute\_config**

AttributeConfigList get\_attribute\_config(in DevVarStringArray names)

| raises(DevFailed);
| read the configuration for a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute configurations read

**info**

DevInfo info()

| raises(DevFailed);
| return general information about object e.g. class, type, ...
| *Returns*:

|    device info

**ping**

void ping()

| raises(DevFailed);
| ping a device to see if it alive

**read\_attributes**

AttributeValueList read\_attributes(in DevVarStringArray names)

| raises(DevFailed);
| read a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute values read

**set\_attribute\_config**

void set\_attribute\_config(in AttributeConfigList new\_conf)

| raises(DevFailed);
| set the configuration for a variable list of attributes from the
  device
| *Parameters*:

|    new\_conf – list of attribute configuration to be set

**write\_attributes**

void write\_attributes(in AttributeValueList values)

| raises(DevFailed);
| write a variable list of attributes to a device
| *Parameters*:

   values – list of attribute values to write

Interface Tango::Device\_2
--------------------------

  interface Device\_2 inherits from Tango::Device
  The updated Tango device interface. It inherits from Tango::Device and
  therefore supports all attribute/operation defined in the
  Tango::Device interface. Two CORBA operations have been modified to
  support more parameters (command\_inout\_2 and read\_attribute\_2).
  Three CORBA operations now retrun a different data type
  (command\_list\_query\_2, command\_query\_2 and
  get\_attribute\_config)

Operations
~~~~~~~~~~

**command\_inout\_2**

any command\_inout\_2(in string command, in any argin, in DevSource
source)

  raises(DevFailed);
  execute a command on a device synchronously with no input parameter
  and one one output parameter

*Parameters:*

   command – ascii string e.g. On

   argin – command input parameter

   source – data source

*Returns*:

|    command result.

**command\_inout\_history\_2**

DevCmdHistoryList command\_inout\_history\_2(in string command, in long
n)

| raises(DevFailed);
| Get command result history from polling buffer. Obviously, the command
  must be polled.
| *Parameters:*

   command – ascii string e.g. On

   n – record number

*Returns*:

|    list of command result (or exception parameters if the command
  failed).

**command\_list\_query\_2**

DevCmdInfoList\_2 command\_list\_query\_2()

| raises(DevFailed);
| query device to see what commands it supports
| *Returns*:

|    list of commands and their types

**command\_query\_2**

DevCmdInfo\_2 command\_query\_2(in string command)

| raises(DevFailed);
| query device to see command argument
| *Parameters*:

   command – name

*Returns*:

|    command and its types

**get\_attribute\_config\_2**

AttributeConfigList\_2 get\_attribute\_config\_2(in DevVarStringArray
names)

| raises(DevFailed);
| read the configuration for a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute configurations read

**read\_attributes\_2**

AttributeValueList read\_attributes\_2(in DevVarStringArray names, in
DevSource source)

| raises(DevFailed)
| read a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute values read

**read\_attribute\_history\_2**

DevAttrHistoryList read\_attributes\_history\_2(in string name, in long
n)

| raises(DevFailed)
| Get attribute value history from polling buffer. Obviously, the
  attribute must be polled.
| *Parameters*:

   name – Attribute name to read history

   n – Record number

*Returns*:

|    list of attribute value (or exception parameters if the attribute
  failed).

Interface Tango::Device\_3
--------------------------

| interface Device\_3 inherits from Tango::Device\_2
| The updated Tango device interface for Tango release 5. It inherits
  from Tango::Device\_2 and therefore supports all attribute/operation
  defined in the Tango::Device\_2 interface. Six CORBA operations now
  return a different data type (read\_attributes\_3,
  write\_attributes\_3, read\_attribute\_history\_3, info\_3,
  get\_attribute\_config\_3 and set\_attribute\_config\_3)

Operations
~~~~~~~~~~

**read\_attributes\_3**

AttributeValueList\_3 read\_attributes\_3(in DevVarStringArray names, in
DevSource source)

| raises(DevFailed);
| read a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

   source – data source

*Returns*:

|    list of attribute values read

**write\_attributes\_3**

void write\_attributes\_3(in AttributeValueList values)

| raises(DevFailed, MultiDevFailed);
| write a variable list of attributes to a device
| *Parameters*:

|    values – list of attribute values to write

**read\_attribute\_history\_3**

DevAttrHistoryList\_3 read\_attributes\_history\_3(in string name, in
long n)

| raises(DevFailed)
| Get attribute value history from polling buffer. Obviously, the
  attribute must be polled.
| *Parameters*:

   name – Attribute name to read history

   n – Record number

*Returns*:

|    list of attribute value (or exception parameters if the attribute
  failed).

**info\_3**

DevInfo\_3 info()

| raises(DevFailed);
| return general information about object e.g. class, type, ...
| *Returns*:

|    device info

**get\_attribute\_config\_3**

AttributeConfigList\_3 get\_attribute\_config\_3(in DevVarStringArray
names)

| raises(DevFailed);
| read the configuration for a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute configurations read

**set\_attribute\_config\_3**

void set\_attribute\_config\_3(in AttributeConfigList\_3 new\_conf)

| raises(DevFailed);
| set the configuration for a variable list of attributes from the
  device
| *Parameters*:

|    new\_conf – list of attribute configuration to be set

Interface Tango::Device\_4
--------------------------

| interface Device\_4 inherits from Tango::Device\_3
| The updated Tango device interface for Tango release 7. It inherits
  from Tango::Device\_3 and therefore supports all attribute/operation
  defined in the Tango::Device\_3 interface.

Operations
~~~~~~~~~~

**read\_attributes\_4**

AttributeValueList\_4 read\_attributes\_4(in DevVarStringArray names, in
DevSource source,in ClntIdent cl\_ident)

| raises(DevFailed);
| read a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

   source – data source

   cl\_ident – client identificator

*Returns*:

|    list of attribute values read

**write\_attributes\_4**

void write\_attributes\_3(in AttributeValueList\_4 values, in ClniIdent
cl\_ident)

| raises(DevFailed, MultiDevFailed);
| write a variable list of attributes to a device
| *Parameters*:

   values – list of attribute values to write

|    cl\_ident – client identificator

**command\_inout\_4**

any command\_inout\_4(in string command, in any argin, in DevSource
source, In ClntIdent cl\_ident)

| raises(DevFailed);
| Execute a command on a device synchronously with one input parameter
  and one one output parameter
| *Parameters:*

   command – ascii string e.g. On

   argin – command input parameter

   source – data source

   cl\_ident – client identificator

*Returns*:

|    command result

**read\_attribute\_history\_4**

DevAttrHistory\_4 read\_attributes\_history\_4(in string name, in long
n)

| raises(DevFailed)
| Get attribute value history from polling buffer. Obviously, the
  attribute must be polled.
| *Parameters*:

   name – Attribute name to read history

   n – Record number

*Returns*:

|    Attribute value (or exception parameters if the attribute failed)
  coded in a structure.

**command\_inout\_history\_4**

DevCmdHistory\_4 command\_inout\_history\_4(in string command, in long
n)

| raises(DevFailed);
| Get command value history from polling buffer. Obviously, the command
  must be polled.
| Parameters:

   name – Command name to read history

   n – Record number

*Returns*:

|    Command value (or exception paramteters) coded in a structure

**write\_read\_attribute\_4**

AttributeValueList\_4 write\_read\_attribute\_4(in AttributeValueList\_4
values, in ClntIdent cl\_ident)

| raises(DevFailed,MultiDevFailed);
| Write then read a variable list of attributes from a device
| *Parameters*:

   values – list of attribute values to write

   cl\_ident – client identificator

*Returns*:

|    list of attribute values read

**set\_attribute\_config\_4**

void set\_attribute\_config\_4(in AttributeConfigList\_3 new\_conf, in
ClntIdent cl\_ident)

| raises(DevFailed);
| set the configuration for a variable list of attributes from the
  device
| *Parameters*:

   new\_conf – list of attribute configuration to be set

|    cl\_ident – client identificator
| Interface Tango::Device\_4

| interface Device\_4 inherits from Tango::Device\_3
| The updated Tango device interface for Tango release 7. It inherits
  from Tango::Device\_3 and therefore supports all attribute/operation
  defined in the Tango::Device\_3 interface.

Interface Tango::Device\_5
--------------------------

| interface Device\_5 inherits from Tango::Device\_4
| The updated Tango device interface for Tango release 9. It inherits
  from Tango::Device\_4 and therefore supports all attribute/operation
  defined in the Tango::Device\_4 interface.

operations
~~~~~~~~~~

**get\_attribute\_config\_5**

AttributeConfigList\_5 get\_attribute\_config\_5(in DevVarStringArray
names)

| raises(DevFailed);
| read the configuration for a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

*Returns*:

|    list of attribute configurations read

**set\_attribute\_config\_5**

void set\_attribute\_config\_5(in AttributeConfigList\_5 new\_conf, in
ClntIdent cl\_ident)

| raises(DevFailed);
| set the configuration for a variable list of attributes from the
  device
| *Parameters*:

   new\_conf – list of attribute configuration to be set

|    cl\_ident – client identificator
| **read\_attributes\_5**

AttributeValueList\_5 read\_attributes\_5(in DevVarStringArray names, in
DevSource source,in ClntIdent cl\_ident)

| raises(DevFailed);
| read a variable list of attributes from a device
| *Parameters*:

   name – list of attribute names to read

   source – data source

   cl\_ident – client identificator

*Returns*:

|    list of attribute values read
| **write\_read\_attributes\_5**

AttributeValueList\_5 write\_read\_attributes\_5(in
AttributeValueList\_4 values, in DevVarStringArray r\_names, in
ClntIdent cl\_ident)

| raises(DevFailed,MultiDevFailed);
| Write then read a variable list of attributes from a device
| *Parameters*:

   values – list of attribute values to write

   r\_names – list of attribute to read

   cl\_ident – client identificator

*Returns*:

|    list of attribute values read\
| **read\_attribute\_history\_5**

DevAttrHistory\_5 read\_attributes\_history\_5(in string name, in long
n)

| raises(DevFailed)
| Get attribute value history from polling buffer. Obviously, the
  attribute must be polled.
| *Parameters*:

   name – Attribute name to read history

   n – Record number

*Returns*:

|    Attribute value (or exception parameters if the attribute failed)
  coded in a structure.
| **get\_pipe\_config\_5**

PipeConfigList get\_pipe\_config\_5(in DevVarStringArray names)

| raises(DevFailed);
| read the configuration for a variable list of pipes from a device
| *Parameters*:

   name – list of pipe names to read

*Returns*:

|    list of pipe configurations
| **set\_pipe\_config\_5**

void set\_pipe\_config\_5(in PipeConfigList new\_conf, in ClntIdent
cl\_ident)

| raises(DevFailed);
| set the configuration for a variable list of pipes from the device
| *Parameters*:

   new\_conf – list of pipe configuration to be set

|    cl\_ident – client identificator\
| **read\_pipe\_5**

DevPipeData read\_pipe\_5(in string name, in ClntIdent cl\_ident)

| raises(DevFailed);
| read a pipe from a device
| *Parameters*:

   name – pipe name to read

   cl\_ident – client identificator

*Returns*:

|    Pipe value

**write\_pipe\_5**

void write\_pipe\_5(in DevPipeData value, in ClniIdent cl\_ident)

| raises(DevFailed);
| write a pipe to a device
| *Parameters*:

   value – new pipe value to write

|    cl\_ident – client identificator
| **write\_read\_pipe\_5**

DevPipeData write\_read\_pipe\_5(in DevPipeData value, in ClntIdent
cl\_ident)

| raises(DevFailed);
| Write then read a pipe from a device
| *Parameters*:

   value – New pipe value to write

   cl\_ident – client identificator

*Returns*:

   pipe values read

