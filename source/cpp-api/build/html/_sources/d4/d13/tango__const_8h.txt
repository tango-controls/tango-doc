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
`Enumerations <#enum-members>`__ \| `Functions <#func-members>`__ \|
`Variables <#var-members>`__

tango\_const.h File Reference

This graph shows which files directly or indirectly include this file:

|image1|

`Go to the source code of this
file. <../../d4/d13/tango__const_8h_source.html>`__

Classes
-------

struct  

`Tango::\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html>`__

 

struct  

`Tango::\_OptAttrProp <../../d7/d60/structTango_1_1__OptAttrProp.html>`__

 

struct  

`Tango::\_PollDevice <../../d6/d66/structTango_1_1__PollDevice.html>`__

 

struct  

`Tango::\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html>`__

 

struct  

`Tango::ranges\_const2type< CmdArgType
> <../../db/d9e/structTango_1_1ranges__const2type.html>`__

 

struct  

`Tango::ranges\_type2const< T
> <../../df/d08/structTango_1_1ranges__type2const.html>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Macros
------

#define 

`RANGES\_TYPE2CONST <../../d4/d13/tango__const_8h.html#a296aaf5dc2f56ffa36c10c00ac960708>`__\ (type,
constant)

 

#define 

`TANGO\_BASE\_CLASS <../../d4/d13/tango__const_8h.html#a06713a84dc7dbebed1e9fcc0c960caf0>`__   `Tango::Device\_5Impl <../../d5/d94/classTango_1_1Device__5Impl.html>`__

 

#define 

`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__   9

 

#define 

`TANGO\_VERSION\_MINOR <../../d4/d13/tango__const_8h.html#a4e5ff4bd2809f455d91c21c9b7d0dae6>`__   2

 

#define 

`TANGO\_VERSION\_PATCH <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__   5

 

#define 

`TBS <../../d4/d13/tango__const_8h.html#aff6d5e6e29fea1b22c39408543862a08>`__\ (s)   #s

 

#define 

`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__\ (s)   `TBS <../../d4/d13/tango__const_8h.html#aff6d5e6e29fea1b22c39408543862a08>`__\ (s)

 

Typedefs
--------

| typedef struct
| 
`Tango::\_AttributeIdlData <../../d5/d25/structTango_1_1__AttributeIdlData.html>`__ 

`Tango::AttributeIdlData <../../de/ddf/namespaceTango.html#a79122420bb8fc15b17138ff0da9bad7d>`__

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr <../../de/ddf/namespaceTango.html#a9b273e65d1167410d37e077d47fd5dbf>`__
)()

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aabe1864de1d13890b8a201dfe142ab14>`__
)(DevBoolean)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49da5469fedd4d580d6ccbfef04a7406>`__
)(const DevVarCharArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5da61ac1cb4ba9650caa06374ee426c5>`__
)(DevDouble)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a5aa79d765795c06b664b0747b1c8fc39>`__
)(const DevVarDoubleArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a66fa830068c7251fac2b12f475e14ea5>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8bad15600c91ea8c9557207a260c0c84>`__
)(DevFloat)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad8e08cacfb2c9f5ac69b249e4b6c6544>`__
)(const DevVarFloatArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#afd6ff3d1074dfd50d5dee6a79748873b>`__
)(DevLong)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad0f37f7c2979ce46068a9d4111e84c37>`__
)(const DevVarLongArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a68110230bc59f281fa091779c8f89156>`__
)(const DevVarLongStringArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a68930b1508c917e4e2a876839868e7e8>`__
)(DevShort)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ac6d8073f3edef0766b7189dfc7ad35bb>`__
)(const DevVarShortArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a866f2904666005aa8ff5ef40dc432bd2>`__
)(DevState)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2ea13a66a0941979858e1cba87f0fe0e>`__
)(DevString)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a26342a5319609906e84d6e5a03046345>`__
)(const DevVarStringArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ae73e22a313ab738e86f97b9955113576>`__
)(DevULong)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ae744367a6987e86d0a322735ad861ec8>`__
)(const DevVarULongArray \*)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a863cdd3f5f94d6be0a920f3c96ddaa0e>`__
)(DevUShort)

 

typedef DevBoolean(DeviceImpl::\* 

`Tango::Bo\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a732887ac3a7cb5e04beb828a6704ee6b>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae606bbfe74776f0a801f9135cb6f91f2>`__
)()

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#ac5d761a62e1e70a4cb4cd56ac191e407>`__
)(DevBoolean)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a9178d3d7149c11b7855361d8e6835df9>`__
)(const DevVarCharArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5d3b787dc982495177cc4c8c15a4e21e>`__
)(DevDouble)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a445a95e38f8ccc7572c7d6a816cc4ad2>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6f5e67a58f92920da533a17ca55eee19>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a96f177aabd7459d676af9401a2297a0e>`__
)(DevFloat)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#abf1b1f8824e4e1ee0dbe5bf3d24743cf>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf0f2657a6aeeed1583fce1a90d5eb8b>`__
)(DevLong)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9dbc667893feeeeeebac90f89e1b8fcf>`__
)(const DevVarLongArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a45bce45e4f3aa8bf600d4f5cbc9197bb>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6c22f648270e1ba92fbddc8e3a830af2>`__
)(DevShort)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae3c3f3f7ec3d8cdcbebfd8d13fb9e359>`__
)(const DevVarShortArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aabddb254c3961a81c2ae529d9572fd1d>`__
)(DevState)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4d4a5e7cba67e879656879a31eae8847>`__
)(DevString)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a805a654c5cbb7b66cd6ad5f596a78e76>`__
)(const DevVarStringArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ab0795ad758790e3d488b1d5a3e4a103d>`__
)(DevULong)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a323da0256914bd98ae2cb15a3c598589>`__
)(const DevVarULongArray \*)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a8c38a987e4f5ec7694a1e3ea79a1e609>`__
)(DevUShort)

 

| typedef DevVarCharArray
|  \*(DeviceImpl::\* 

`Tango::ChA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac0264d94dbc37f7b325f48f9f0e2df43>`__
)(const DevVarUShortArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr <../../de/ddf/namespaceTango.html#aa8d5711e7c691caf3524baca40b9ab7c>`__
)()

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d826b2f939b87adf20cb02ca8c047b6>`__
)(DevBoolean)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a49503d5b26f69a614b6128025e27c7c9>`__
)(const DevVarCharArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aff18b55dba55a66275d7c5518366c7d0>`__
)(DevDouble)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a7fadd416ab137ac02e90f277f82756e5>`__
)(const DevVarDoubleArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0d668ee23b223beb0f39e65dc467a882>`__
)(const DevVarDoubleStringArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ad55ee490cc8123f90daf3d90732691d9>`__
)(DevFloat)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a13fa64927f4e9467a01f7ea04ff4795f>`__
)(const DevVarFloatArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a4b9ae3b66981ac4167d9959b0068fd9b>`__
)(DevLong)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a30795b211f347703f1e78d3a53419990>`__
)(const DevVarLongArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ae366eb5a5f2f842e5fafc8aafb5fa88c>`__
)(const DevVarLongStringArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6057a0b273689664d42521b8a3e0c5e0>`__
)(DevShort)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a6f460531420452c547678fe9a660789a>`__
)(const DevVarShortArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6d8931508939262d04735109f7303acb>`__
)(DevState)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ad5c6af4e436eab60c6f8101d3bc95f69>`__
)(DevString)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2d0553885eaaa7b6fa57d09b3692a975>`__
)(const DevVarStringArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a0862a2fc7c3157cadd8eb33085cf36cb>`__
)(DevULong)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e059c81670f1d7defd075ba8f0a5e9>`__
)(const DevVarULongArray \*)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a74c0e35f6c9083e52a6112f6f2eeae93>`__
)(DevUShort)

 

typedef void(DeviceImpl::\* 

`Tango::CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4622f449003b2446968a088011afd015>`__
)(const DevVarUShortArray \*)

 

typedef const char \* 

`Tango::ConstDevString <../../de/ddf/namespaceTango.html#a31a504495ecab5fd862cb6e60d40360c>`__

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr <../../de/ddf/namespaceTango.html#ad2e2a4a0be40a386b58fcbc178825738>`__
)()

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a1a6d2e94c31480bf510fe47a89dc2204>`__
)(DevBoolean)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a4ee2d25004efbef1341fd8f59308f1c8>`__
)(const DevVarCharArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5a7f4c36fb46a213d9a15fce26707946>`__
)(DevDouble)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ad47704b0b5773aa15020b53a4c068e4f>`__
)(const DevVarDoubleArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a95e5c9b9381da0ba104f2bda51822735>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a9b40b2dd80aa0086c9d90926fa93e3a2>`__
)(DevFloat)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed4dcaedde79872f636524026ba7c095>`__
)(const DevVarFloatArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5d0669880dd907a49d79f845f969410f>`__
)(DevLong)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ac78738c85f8dff43c42173b5be45b695>`__
)(const DevVarLongArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16e1ef6933c5a0930591770f4c60b101>`__
)(const DevVarLongStringArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a6a2bc0cc59bcb9d2b34bb52329f8dca6>`__
)(DevShort)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#af90c484f5cc58bb1b06f4332bf9d3a35>`__
)(const DevVarShortArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a9075c5a30da1df1363c51ef1789e2a81>`__
)(DevState)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a0f1a29f32a3f4e4422549bff700fc6a9>`__
)(DevString)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a1d0f5b26ec90105fbb663796311b95d0>`__
)(const DevVarStringArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abd084cf2858ebf46b18c8e327c39ee52>`__
)(DevULong)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#ac91ab97d9dbb0974fc009c45664bb918>`__
)(const DevVarULongArray \*)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#acfe424dee78842332193e03984aa7e53>`__
)(DevUShort)

 

typedef DevDouble(DeviceImpl::\* 

`Tango::Db\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a04d3cfbcdf481426498216fd0ce8e551>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a1bffde3bccf0d1d98b8304e02b18255b>`__
)()

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6818e79202b7706fd1077677547c79b7>`__
)(DevBoolean)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aa071b24bf0e05cf735319a6f04917b47>`__
)(const DevVarCharArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a973222d63ba4a7fb5cdbaa54226271c2>`__
)(DevDouble)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a061711ccdd6afbbdbb1e973e7341292d>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a91339b16565f187eba76fdb333acb7b7>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a8f5a35851e86bbf8dc1d0fce64c551d8>`__
)(DevFloat)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a58a708b78130c59874236651bf54fe14>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#aef3b3ef805b6b12ba4d9433e50486f3e>`__
)(DevLong)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ae3d6872bb2b99b3be2a54ee3caabd840>`__
)(const DevVarLongArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6a5f8b731e62e7c050c7d5cb53f21372>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a88c97ca59f8800f16f194fa9d26a9cb4>`__
)(DevShort)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ad0b5621ff445d78aae963af48a99ade2>`__
)(const DevVarShortArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2f96695d024caa9fb13ac7e79d0b90c8>`__
)(DevState)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a85dbb1d095f2cbee03b38b533c6c769f>`__
)(DevString)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abfccabdb91cf8123716c919c4183f890>`__
)(const DevVarStringArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a692637a79793edac686bcf3fbcc52eba>`__
)(DevULong)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a62b352bc859c6b9ef32092f63299a46c>`__
)(const DevVarULongArray \*)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a1242bc728e082bc284eebc5f7f3a5da9>`__
)(DevUShort)

 

| typedef DevVarDoubleArray
|  \*(DeviceImpl::\* 

`Tango::DbA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a15aecaff77a9e5ee9a0387b921e001b4>`__
)(const DevVarUShortArray \*)

 

typedef DevShort 

`Tango::DevEnum <../../de/ddf/namespaceTango.html#a6a9f2ce86c2eb45a059727bd9f71aac4>`__

 

typedef DevVarCharArray 

`Tango::DevVarUCharArray <../../de/ddf/namespaceTango.html#aa266359dac942f0a24499c61adcd0b7c>`__

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a212fc37118767813e46fb379cd10f33c>`__
)()

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5c7d41dae299baf8d1b6018f10c2a340>`__
)(DevBoolean)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a61c57d16dc7a3878d247ae41300faef5>`__
)(const DevVarCharArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a7d5075ed5894aabcd125e3dacdd6944a>`__
)(DevDouble)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac4870fee6c00778de39d3c91c6ef04f6>`__
)(const DevVarDoubleArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a296618d8c9168a46520e43d007f842c3>`__
)(const DevVarDoubleStringArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aac18e719cba0acd9758e1cc738a81d26>`__
)(DevFloat)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a80f0a2e894cb83ce221f3a7624b37881>`__
)(const DevVarFloatArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a1be5b8e40c2786dfe7894e32050cb3be>`__
)(DevLong)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a802d965a52b52ebfc1b291a9f2e3cead>`__
)(const DevVarLongArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a6be3d448da80b69433d6d39d745bfc19>`__
)(const DevVarLongStringArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a40419b07604cfcbbab16f9e32c9ac955>`__
)(DevShort)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1384ff007c9d1a8a04158f02d8883d9e>`__
)(const DevVarShortArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#afcd8fded693c7cfbb54083f44a9fe207>`__
)(DevState)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#aafb90d7188a7adc14a418effe7d97027>`__
)(DevString)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a38b5baa75448d5248e1ab478f5ac711d>`__
)(const DevVarStringArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5783faf10f3dbb63b91e590556c60d82>`__
)(DevULong)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af03a472d546249cf9f2fd0296a94bc98>`__
)(const DevVarULongArray \*)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a042c2f0070e4166a2f5cf0c275128bb3>`__
)(DevUShort)

 

| typedef
|  DevVarDoubleStringArray
|  \*(DeviceImpl::\* 

`Tango::DSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1654b8d1b277ddefcda32555548a4050>`__
)(const DevVarUShortArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac83dbacfeeb9dcef8e2c7bf934f483da>`__
)()

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a90e621d66b254ae39f48276d200ab3de>`__
)(DevBoolean)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#af67346e5a437bfb6f53d4a5793c8ae7f>`__
)(const DevVarCharArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#af02ada18999022a4761b7bcf5d26224a>`__
)(DevDouble)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a0729da8d6ceb405a1c3c3ee6a86c5822>`__
)(const DevVarDoubleArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab22a7008ea2d5693f4fa1d67fb5cc041>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a62072169d6338d1b3c57ca6fc14ccf82>`__
)(DevFloat)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2e74e2cbbd353d3107ab3e65c4c41e21>`__
)(const DevVarFloatArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a37239cd6d752eb2c2d6a52db1fc25d07>`__
)(DevLong)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a8aa460c356e7f762ff3baf882edf6998>`__
)(const DevVarLongArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ac717b41134caddbfc90b9b77cd645119>`__
)(const DevVarLongStringArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae9c71bf65f34b81374a2aa49a774f7db>`__
)(DevShort)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#abe08b96c40aca517f5270b9d10d98089>`__
)(const DevVarShortArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa1813a8ea494658abc7f57d523b4bea6>`__
)(DevState)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a7a7f6abcfe473f7807e1d0839df9ebf0>`__
)(DevString)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a702218083a878b5b1c4a534af20576d3>`__
)(const DevVarStringArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4373fd62d3b5fffb86db31d2d2d39bd6>`__
)(DevULong)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#af0e434e9063a4db9a5d175d128cbf39b>`__
)(const DevVarULongArray \*)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad6f255c8d64a2e172069888701170a9e>`__
)(DevUShort)

 

typedef DevFloat(DeviceImpl::\* 

`Tango::Fl\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a356ecdd62f178b5eb547ddba6eddfdce>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a8eade72ca84506d77b56895ce8b238de>`__
)()

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a552bc3e33b5300cd784892217b1d48bc>`__
)(DevBoolean)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab6f3c71e51213d48e8602689491e1421>`__
)(const DevVarCharArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a554958ba6088a065d290bf044243951e>`__
)(DevDouble)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1b8f556f14107eac612ab9fd65d83ded>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a2a0324510f9ca8366abc0be08fd4abbb>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4ac9bbb22169d14016643241d6cdae9d>`__
)(DevFloat)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aad88fd97f46fe72a9a30853e3b5c1dca>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a949eec48c348d7251eda1e8cb2c8597b>`__
)(DevLong)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a7bdae07e9af31bb99b110cee82036929>`__
)(const DevVarLongArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af3cf4a117477ce8cf3ab174ae40e77cb>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#afc7d2eaf3685d591951b5e7b2ed799ea>`__
)(DevShort)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a5a29e5d7d5f5f1e4dfae56fdfd9a5e29>`__
)(const DevVarShortArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aa6f4d629b33bb4912fa2f36c9114d3c0>`__
)(DevState)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a9ff925023cc9e8ebf63c8a42af440dee>`__
)(DevString)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a7e0a051d44833ee4db580ea1a5032076>`__
)(const DevVarStringArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a433d0ae93b52521c1b17bdd6557ed5f3>`__
)(DevULong)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#aeb265657e3fd3a016afd720469d9a0e3>`__
)(const DevVarULongArray \*)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a3b4e85bd14a1074b67b362283dcf68f9>`__
)(DevUShort)

 

| typedef DevVarFloatArray
|  \*(DeviceImpl::\* 

`Tango::FlA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#ac891ac799f88786a673c7dca09324788>`__
)(const DevVarUShortArray \*)

 

typedef enum
`Tango::\_FwdAttError <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545b>`__ 

`Tango::FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr <../../de/ddf/namespaceTango.html#a4b458309fd1d1569284660ea789b9886>`__
)()

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a9dacf339ae1040b04a331301c2375a00>`__
)(DevBoolean)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ae88ff03fc559bff1e0d41c459296e086>`__
)(const DevVarCharArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a819d1e3f4565c171584dbb668fc45ff1>`__
)(DevDouble)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a33fd79f1815515968e2e695462b7f657>`__
)(const DevVarDoubleArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6acd3241da1ae19b86f67a44f8d9b8e9>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a681be512bd1998e61011147ba15b3b14>`__
)(DevFloat)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1130ca5896a1390ea07ee0d9644cf25a>`__
)(const DevVarFloatArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a0acb4a982e1b98fe053bdcf94b63fbc9>`__
)(DevLong)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#adc2a9416df3d38ced1ec5c29edfbb85c>`__
)(const DevVarLongArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af8de21f05c662dc4dfd1fee2a04c6adf>`__
)(const DevVarLongStringArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a56a121f2c26f1ff8b1e2f52a0ed961eb>`__
)(DevShort)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a9d30d7d92eb416077a38b9bc224e1a61>`__
)(const DevVarShortArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ac6f5fe3044bdb6731854fc193ecf5271>`__
)(DevState)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a4c7b5b91d63fbb52332e0e55117ad82f>`__
)(DevString)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a6667c6075748027ce7d863db769e81d1>`__
)(const DevVarStringArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a44f82da7bcd31b5afeef17daab9386f2>`__
)(DevULong)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a74cbcd2ef477d7072a91317693998126>`__
)(const DevVarULongArray \*)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47e815f6f2ca7fd1308d19ce4eaa78bf>`__
)(DevUShort)

 

typedef DevLong(DeviceImpl::\* 

`Tango::Lg\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9dd9cc566f82c33ca8c4b7e05e22a130>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a347ef2989ae1565de4e1c52ea5215192>`__
)()

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a3f6156a7c49f97847df7dc214afeaa6b>`__
)(DevBoolean)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aba43697d1a4ea480ea3fc83e7528946f>`__
)(const DevVarCharArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a88c426c42fcd82727c47ce13573482de>`__
)(DevDouble)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aef40c6313f2bc5519c51222a55f78858>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afff024c7f63ab115f87b2f39149eb0f7>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa0917ab8eec462a32230d024ee9bf2db>`__
)(DevFloat)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8d86caa43aec090fd2cbd0c630c060aa>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a95cadafd34967e03eac7a86388585d8b>`__
)(DevLong)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#acd1484770a3cbfac1c9e468b44c4fd38>`__
)(const DevVarLongArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ad79c9b83cff71c8436e52167d01a5a9c>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#adf650ac3a63e6130b13a4cfbabb6866f>`__
)(DevShort)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#afb3dea7dd29cc9fa1954223ca4106238>`__
)(const DevVarShortArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a4486fc46e5e056a749756e3a3b79326c>`__
)(DevState)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a3562e98dae4db9176955368029ebe581>`__
)(DevString)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a2e4ac9120ed53437763e911d2399d50f>`__
)(const DevVarStringArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a6dc919f2fc2d5f382f6501bf8e747b00>`__
)(DevULong)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1dce6ec9750bd0ee87e63ff6434b182c>`__
)(const DevVarULongArray \*)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a32518cfc275adda69cb6d1506dbfb0ba>`__
)(DevUShort)

 

| typedef DevVarLongArray
|  \*(DeviceImpl::\* 

`Tango::LgA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a892d92bb8f8079591bc2b8eff4c4697f>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ae77b1842cc69c849e25cdaa438aeaafe>`__
)()

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a5b82af490025cb3c7bf47f7d0d745d9a>`__
)(DevBoolean)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#aeaab053de30874e20d90ddec392a2a17>`__
)(const DevVarCharArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aa5585f14cdc16510ffac8d6d547979fb>`__
)(DevDouble)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#abf1f347a1975690532972f336c1025db>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aa90dd6f6a952934368deefecf1f2766a>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a099fe79b75b7d473084dd9c68810f24e>`__
)(DevFloat)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a8b302641054eb58ac37ff348144b796b>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a2caba80f93a90fbca5553319477b76f2>`__
)(DevLong)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a1f29ec9095da2c6d9fbebec1a4dc9113>`__
)(const DevVarLongArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a2d75ce198c7291312e730c1ea627dc81>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a03f1c8acd7edabaf22088434d3a508f8>`__
)(DevShort)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#ae7c53c1f0eca4abc14716e575a50b726>`__
)(const DevVarShortArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ad38f8025096139587b80b68333428c5a>`__
)(DevState)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a10a2ee32a8b9975b5e90d904038195a4>`__
)(DevString)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e467078adbc93998535b58afcbd6a9>`__
)(const DevVarStringArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a7347383b7f761a15c2f514ee79df50ad>`__
)(DevULong)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a0a7f0e04602698f2334bf26bdceb3711>`__
)(const DevVarULongArray \*)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#afa41a9d249a2d25253b6a218a44b4c4f>`__
)(DevUShort)

 

| typedef DevVarLongStringArray
|  \*(DeviceImpl::\* 

`Tango::LSA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a01c48763b9173b9b9bd6ef4ae27b1bd9>`__
)(const DevVarUShortArray \*)

 

typedef struct
`Tango::\_OptAttrProp <../../d7/d60/structTango_1_1__OptAttrProp.html>`__ 

`Tango::OptAttrProp <../../de/ddf/namespaceTango.html#a4615642249b2a2e096a881367f3f2117>`__

 

typedef AttReqType 

`Tango::PipeReqType <../../de/ddf/namespaceTango.html#a7d278432a160e4e055a13a178b461aed>`__

 

typedef struct
`Tango::\_PollDevice <../../d6/d66/structTango_1_1__PollDevice.html>`__ 

`Tango::PollDevice <../../de/ddf/namespaceTango.html#acbbd6cfda6c92560b0783d216d90290b>`__

 

| typedef struct
| 
`Tango::\_SendEventType <../../d3/db5/structTango_1_1__SendEventType.html>`__ 

`Tango::SendEventType <../../de/ddf/namespaceTango.html#a3941141427c5165191753fbbcc549061>`__

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr <../../de/ddf/namespaceTango.html#af6ea4b8b550653b080089e2767a8500d>`__
)()

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a7d5e95448f85f3d5d5f164e5e1126cd8>`__
)(DevBoolean)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a170fff4bb4a88cb4b9afb88645eb3f77>`__
)(const DevVarCharArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ac719c1247cc42b0f09e8f5379a1656a8>`__
)(DevDouble)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#afa2a5b90b7f3aae3f1acbc9aea308682>`__
)(const DevVarDoubleArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a6a0c3fc14b5980c94da62496e4caeea5>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#aa15b4936bce76c1cf85d5655494a0ff8>`__
)(DevFloat)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a741ed159773995fb5355101372bd1c86>`__
)(const DevVarFloatArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af2f00df032a482005ee882a1b4762727>`__
)(DevLong)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a68037c5070635f8197ac049c7bf8c9d7>`__
)(const DevVarLongArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a28e19a81f68f5ecb36fb19b9159c2747>`__
)(const DevVarLongStringArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad7f4e3fd3c0ff5507d86a775d51c17cb>`__
)(DevShort)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#acecb5447ce6c0c373ee9779c28a3609e>`__
)(const DevVarShortArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aef796b5017bac7c655dc000a9808845e>`__
)(DevState)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8f2b534d496b737a323cad29bbce4ef2>`__
)(DevString)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#af8e0ed0e831ebb80da74189c81125e97>`__
)(const DevVarStringArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a423540e1c162e987914c49da9ab8fe52>`__
)(DevULong)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a268c6064301a869f9f6aa74e8cce403b>`__
)(const DevVarULongArray \*)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a5bf74bc71333b4c0df140a4b050ffb1b>`__
)(DevUShort)

 

typedef DevShort(DeviceImpl::\* 

`Tango::Sh\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a410835daa22e19b702377cdcde2c1f3e>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a164e6f1d2687ad05f946d67856bb0f83>`__
)()

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a23daa21a9f047afbf1b6d226ae6dcb6d>`__
)(DevBoolean)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#ab536dbec16fdc6aab3c00f20ae43599e>`__
)(const DevVarCharArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#aefed3c29345dee7e5fe2cae6e3a3094d>`__
)(DevDouble)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a22aac172c20bfdbbbb45d8cffd4e0686>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#aef15feb4d2302cd1eb8e622c71ec3688>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a97883276a816ee3c92f02155cbe9f614>`__
)(DevFloat)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aed3383a83a7af2f5eca4038f8e86c89f>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a041ffbd7ac59236f0d7ef2577a257309>`__
)(DevLong)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a9d1de323b47750050398563b93286e1f>`__
)(const DevVarLongArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ade779ac6b063ec3d874e1cd73035b29f>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a455f11cf6a5865934da33a3c28ec7285>`__
)(DevShort)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2de6d535c00e1420b4c6eed0e306b9f6>`__
)(const DevVarShortArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#ae1229e38ddd435fd9018df7d7741a78c>`__
)(DevState)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a2935b04f55581288a77879c473348f69>`__
)(DevString)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#afce3f10debd2aaa02412f71cf734ef05>`__
)(const DevVarStringArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a746ff0e93e2d258238e304aa47a5116b>`__
)(DevULong)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a9c9c3ee5bb7d38117f9817d94d7a63f8>`__
)(const DevVarULongArray \*)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ae3408867217dd634e9baa3b8b2e00b71>`__
)(DevUShort)

 

| typedef DevVarShortArray
|  \*(DeviceImpl::\* 

`Tango::ShA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a4a95f6528d2f1b677f794190c997f75a>`__
)(const DevVarUShortArray \*)

 

typedef DevState(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr <../../de/ddf/namespaceTango.html#a66828e7e85d00a2fd750ec30d1834121>`__
)()

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a6d8fd405c309dd0e779fd240185f5a0a>`__
)(DevBoolean)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a8617a1c3e46dedbe103e3954aead85f9>`__
)(const DevVarCharArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a8dff7e23b118cecc529dc4b92c030db2>`__
)(DevDouble)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ac39268602c7ff7d2864ce6d2d70ba596>`__
)(const DevVarDoubleArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a0e1ae10514222b3032d6988e140fe16e>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a4cefd0a65f8d7af25735d6d624795d33>`__
)(DevFloat)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#aaf571bc58c62d1a7b6774a864f864f0a>`__
)(const DevVarFloatArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#af4f31dc2bf3b271f187dd5f8da92c98b>`__
)(DevLong)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#af62f13f41cce4efa8b08326fb1462804>`__
)(const DevVarLongArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#af78a5787e615509655caf92e0ad10ab3>`__
)(const DevVarLongStringArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a7f148ac65a847c00105f1016485966c5>`__
)(DevShort)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#aaa493e82054e1c820c22930175ababe5>`__
)(const DevVarShortArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#aba8646e1e736a8c105cc266a9bd3fd35>`__
)(DevState)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a80e38ba637be885bd243378916802404>`__
)(DevString)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ad3b6fecd9648437dd3a5f303d096258d>`__
)(const DevVarStringArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a5b6e7d938c0eb341974f635f26451a66>`__
)(DevULong)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a45a2de0c071c8c15d10df028f5626981>`__
)(const DevVarULongArray \*)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#ad0525eec6583123226aa91844e04f58a>`__
)(DevUShort)

 

typedef DevState \*(DeviceImpl::\* 

`Tango::Sta\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3e665059db438c9e1c00a380472f2dbb>`__
)(const DevVarUShortArray \*)

 

typedef bool(DeviceImpl::\* 

`Tango::StateMethPtr <../../de/ddf/namespaceTango.html#a8fbaee078294ee08dc87e6ecbce2e1bf>`__
)(const CORBA::Any &)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr <../../de/ddf/namespaceTango.html#adc80802dc1ce4201e606d1c4e6444533>`__
)()

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a40a9814bcb6e221c75a391e83fbc6580>`__
)(DevBoolean)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a2dfca0a75e280ac696bb6b0cde41eb4b>`__
)(const DevVarCharArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5672ab56addf5b20bb085b59350d67cf>`__
)(DevDouble)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a1a09403e4efb8d50e7a94bc4fc6b44d7>`__
)(const DevVarDoubleArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#afd0db79248dafa09ca14d4ea72dbb8e9>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afc44056cbf2f1159ca565e613ae33f19>`__
)(DevFloat)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a1268957ae992d72850180d8faad74774>`__
)(const DevVarFloatArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9d5b34a841ed5ebda2865e06f101b985>`__
)(DevLong)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a98ebe9cdf0099a4eba8fd07d92569737>`__
)(const DevVarLongArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#adf81ecda3835b812596ca9cf3ef907cc>`__
)(const DevVarLongStringArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a1999b8e552e4afffafc3b47eea21a612>`__
)(DevShort)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a110147ab7b0abde659c86127eca3caf6>`__
)(const DevVarShortArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a6188547d1e81c9e1a791c606ea85974b>`__
)(DevState)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac0151f8c2ccbe9c19a9264ad85495ef0>`__
)(DevString)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a66239b227c33aa4bf90e882fbeb5d304>`__
)(const DevVarStringArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#ac548faf5341f41096048e05abd30aee6>`__
)(DevULong)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7c8180c37aa88c0fb127251bdd7ea7f5>`__
)(const DevVarULongArray \*)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a983682dbeba22a0c842979acfe3b2e8e>`__
)(DevUShort)

 

typedef DevString(DeviceImpl::\* 

`Tango::Str\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a9e24adbef58d2df3a8a72d5cbe2456c8>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr <../../de/ddf/namespaceTango.html#ac1451899a4eb2aafeb10406654dac341>`__
)()

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a42781244cb79430236b4982443a7453e>`__
)(DevBoolean)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abd614846a99e6c900eab2c5ca1a0a2af>`__
)(const DevVarCharArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a555dee748cf031c4f9c35a106107f61e>`__
)(DevDouble)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a529af943f0ba358e21e8e752994dc29d>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a019e5f75d68fdd1a5bc5482e6f6528a8>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a3e354d67229b352ec632f5d882e71dbf>`__
)(DevFloat)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a2b4466c2a950e858652a772f7e0d3f2d>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3c1ed43b6a4271e23edaa07b717da820>`__
)(DevLong)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a862ced750c1a7f269eaceb4c90e84c8e>`__
)(const DevVarLongArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a16efd1d060e1516e1c468b6c3afe1dcd>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ae4413ba74a63fbfedb51f47425103946>`__
)(DevShort)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a2d0db7b42b24f05e95ffc2ad02908a61>`__
)(const DevVarShortArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a2fbed6c7533bbd7d7e852ccc253910b2>`__
)(DevState)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a35b60241080818518fc170c8af09797b>`__
)(DevString)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#abce5e47b440d28f5c0a360e914c81c23>`__
)(const DevVarStringArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a92a9bf19f13524fe56682f7d9741bcbc>`__
)(DevULong)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a1a47aab5f31ddd6c224ff3bf0fb8e605>`__
)(const DevVarULongArray \*)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a47a62ad5d9d4000b52ee61eedd4e769a>`__
)(DevUShort)

 

| typedef DevVarStringArray
|  \*(DeviceImpl::\* 

`Tango::StrA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a637507c7ca306deb043f189f1c6279ae>`__
)(const DevVarUShortArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr <../../de/ddf/namespaceTango.html#a453cc05f298d2ddb29684d430c1f2e7d>`__
)()

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a8e46fac1aa6b30aac256a8bfcdb46866>`__
)(DevBoolean)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a5a40d15ef2d3bdf1b83b01ec26c52b9b>`__
)(const DevVarCharArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#ab2191ee90a48dd4db2ea1ffd6fbee1ba>`__
)(DevDouble)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#aa7cf5fc76918c8edf1be960b49031998>`__
)(const DevVarDoubleArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a1570a69fa50e363806916b930b5a4533>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#afe1f5223f16ddbea109f914fc80a991d>`__
)(DevFloat)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#adcce4067d006b1c3a7390c1017d5528d>`__
)(const DevVarFloatArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a9ccb3c40addbd095ca2702a7e8f45bf9>`__
)(DevLong)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a86ccc052e1b4918940658d197e906116>`__
)(const DevVarLongArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a820ac067a558280a79181a6757921a8c>`__
)(const DevVarLongStringArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a25cb4414b65aa1f75f4b3ee792afb4a3>`__
)(DevShort)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a02927005ed2fe26d5560a446ed690d74>`__
)(const DevVarShortArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0c4e10e65153cb72758d3268ab58650b>`__
)(DevState)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a8aa112660f6f56d04d97b7d031b5cd6c>`__
)(DevString)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab90c32729b784ae8b81988c81994b575>`__
)(const DevVarStringArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a20a18fcefe87f539a79361eaa7168409>`__
)(DevULong)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a7688361db16cdf5bc224e0ac0180e06d>`__
)(const DevVarULongArray \*)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a7046614fc8bd7eeb218380f20167f367>`__
)(DevUShort)

 

typedef DevULong(DeviceImpl::\* 

`Tango::UL\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a3bb524341a87ac831259a033742c508d>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr <../../de/ddf/namespaceTango.html#abd18290ec58ce093b7be1ac2f54968a9>`__
)()

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a54ccbd92b3f03fe71966fd2902f6c50c>`__
)(DevBoolean)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a38388820e592d7301290627c387256c9>`__
)(const DevVarCharArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a0d7fe901ca23754d58856538fa4f56e3>`__
)(DevDouble)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a4aa60f30887e6987cf84aacb1479ff59>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#ab1acf9d0cfb6b61741feb047ff91e4a2>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a1b18295c55f95416d8ff43654cdbdae8>`__
)(DevFloat)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#a6bdc151f110754cd8db22e6a9d0da411>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a5bb875c6a8e951bfa0572d995d539220>`__
)(DevLong)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ad91a30bf455dae012ea16cbe89f6d2cf>`__
)(const DevVarLongArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a3516033af2f5b9b4c067e2f1811473e1>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a95768ab0afefed8a3af059885d869ea4>`__
)(DevShort)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a1dfb2afc81e0fd7dab926225d6ab0575>`__
)(const DevVarShortArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a0f4f21efc54e67ed3d1f6faa0e0d5d32>`__
)(DevState)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a479357c0847479f17c502093c0631cb2>`__
)(DevString)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#a3e5fb6e53a831e518ba26a167a5416ea>`__
)(const DevVarStringArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#abac55dd89ec41601bbe588701f1c50c6>`__
)(DevULong)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a51e8661e75847bff177abac012c2446d>`__
)(const DevVarULongArray \*)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a2cfcd2c217a5101977aceea3ae04ffe7>`__
)(DevUShort)

 

| typedef DevVarULongArray
|  \*(DeviceImpl::\* 

`Tango::ULA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a12224ab05d77c35c35ae57e072c1f4f8>`__
)(const DevVarUShortArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr <../../de/ddf/namespaceTango.html#a3522ded92c13d7ddb6cbb1187684c38a>`__
)()

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#aa9410e35aa0ec77af2d0df45f1ae4fe8>`__
)(DevBoolean)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#abb0554168f870f1b3f6d8be752787b89>`__
)(const DevVarCharArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5556d60f05b12e8d7d048f27c372e5ba>`__
)(DevDouble)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#a6d29c9e4d01c197d8d9cdf26e8e80d23>`__
)(const DevVarDoubleArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a3fcc442f5043a6b51e96da4947d34867>`__
)(const DevVarDoubleStringArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#a6c96bc033b359884e35b34a4b3be1a89>`__
)(DevFloat)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad21220bbb3dac5beb352d663b5332185>`__
)(const DevVarFloatArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#abf1078d1954644fb95e767c042ec490a>`__
)(DevLong)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#a850180ce2eac858b61307e60e34eb0be>`__
)(const DevVarLongArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#ace1fa70bc6f0db372fb4fb6cde468fbe>`__
)(const DevVarLongStringArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#a5cc2ba2540da4d601aefc26241cd7d79>`__
)(DevShort)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a382f1790b6a539954e4e8827768574ae>`__
)(const DevVarShortArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a7492b2d15856a98b6c4dc3d56128fe88>`__
)(DevState)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#ac1fa783e614f73e2017fbfb4a324bc0f>`__
)(DevString)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#ab7f942005d40e768cdb6c73f381df476>`__
)(const DevVarStringArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a4c2499779c40b328abc81d9dbc84ac83>`__
)(DevULong)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a088b0addd2c61822d1ca3a8edd4c18d1>`__
)(const DevVarULongArray \*)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#abf3730241e2a34a13928143b015c20a3>`__
)(DevUShort)

 

typedef DevUShort(DeviceImpl::\* 

`Tango::US\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a1d3de8c2582a8a4689be2c0d61765893>`__
)(const DevVarUShortArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr <../../de/ddf/namespaceTango.html#a769c63fe0359d4235b1f4cb248715b67>`__
)()

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Bo <../../de/ddf/namespaceTango.html#a0828c914f3df39da3bf0059d627c6906>`__
)(DevBoolean)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_ChA <../../de/ddf/namespaceTango.html#a05ffe2ec11e661ee8b4c3ef5bfb56fd3>`__
)(const DevVarCharArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Db <../../de/ddf/namespaceTango.html#a5af02355146cf5e5b1913d250270e655>`__
)(DevDouble)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_DbA <../../de/ddf/namespaceTango.html#ab9e1a5ba2e69320bb0485bc233fb137c>`__
)(const DevVarDoubleArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_DSA <../../de/ddf/namespaceTango.html#a76911c4c228b99f2f18d9a5d8b2234c4>`__
)(const DevVarDoubleStringArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Fl <../../de/ddf/namespaceTango.html#ae81238bd9f048075d6aaaf4c12af79dc>`__
)(DevFloat)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_FlA <../../de/ddf/namespaceTango.html#ad5011e593cedad628081504420f6f7aa>`__
)(const DevVarFloatArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Lg <../../de/ddf/namespaceTango.html#a3333f3b8339bcd64877d85100e8e39f2>`__
)(DevLong)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_LgA <../../de/ddf/namespaceTango.html#ab660811f69a6bffdbe21999acf8e1c6d>`__
)(const DevVarLongArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_LSA <../../de/ddf/namespaceTango.html#a38cf8829fd4c12c3f414d9a77b84cd2a>`__
)(const DevVarLongStringArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Sh <../../de/ddf/namespaceTango.html#ad0ecb778178bf8c33e91d9c04ec9d55e>`__
)(DevShort)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_ShA <../../de/ddf/namespaceTango.html#a294f2e96ee27b9256e6d6f931358e51f>`__
)(const DevVarShortArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Sta <../../de/ddf/namespaceTango.html#a1ddcb4b268e5ef48598a6a3da104ae26>`__
)(DevState)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_Str <../../de/ddf/namespaceTango.html#a626d30f575e50ea80d8b3fc4d2c3eb77>`__
)(DevString)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_StrA <../../de/ddf/namespaceTango.html#aeb90324f4a1e89c7ac71c416b5f9f593>`__
)(const DevVarStringArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_UL <../../de/ddf/namespaceTango.html#a31a17b85f42a2502b72cdd8ddeba8d4b>`__
)(DevULong)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_ULA <../../de/ddf/namespaceTango.html#a5cdc80cde7ff434ef3dc2f808141f1a5>`__
)(const DevVarULongArray \*)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_US <../../de/ddf/namespaceTango.html#a9ab54159e793670d65f1dc258b2dbbe4>`__
)(DevUShort)

 

| typedef DevVarUShortArray
|  \*(DeviceImpl::\* 

`Tango::USA\_CmdMethPtr\_USA <../../de/ddf/namespaceTango.html#a563cc70a5fe8aed106a3a796ba60cb6a>`__
)(const DevVarUShortArray \*)

 

Enumerations
------------

enum  

| `Tango::\_FwdAttError <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545b>`__
{
| 
  `Tango::FWD\_NO\_ERROR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bad36cb6edd7864475282bfc9d763b6f65>`__
= 0,
| 
  `Tango::FWD\_WRONG\_ATTR <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba2e2ee839d684948d99f124f9198910e6>`__,
| 
  `Tango::FWD\_WRONG\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bacfb374b81c1b820d7cab0f9ba9d3d5e8>`__,
| 
  `Tango::FWD\_ROOT\_DEV\_LOCAL\_DEV <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baf9135a3ecd78fa5e5019f716d50fafda>`__,
| 
  `Tango::FWD\_MISSING\_ROOT <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bac6627e0075173c41bdd629245def0881>`__,
| 
  `Tango::FWD\_WRONG\_SYNTAX <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545baee62419f4cda18bc63d4c0ae1de97140>`__,
| 
  `Tango::FWD\_ROOT\_DEV\_NOT\_STARTED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba497d85fca4a1f770eeb5f811c72e1600>`__,
| 
  `Tango::FWD\_DOUBLE\_USED <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bae1693a5c3bbc668e26a0d048eee8844b>`__,
| 
  `Tango::FWD\_TOO\_OLD\_LOCAL\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545bab81c88712a2f5c548de3d9b134572f36>`__,
| 
  `Tango::FWD\_TOO\_OLD\_ROOT\_DEVICE <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6ed8fe2bdb7c54bfe79926c16b2d4709>`__,
| 
  `Tango::FWD\_CONF\_LOOP <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba6b6460962ebda5fb0d44e87b92a4acbc>`__,
| 
  `Tango::FWD\_ERR\_UNKNOWN <../../de/ddf/namespaceTango.html#a6515f54b07dcc9fc575eb1bf8f02545ba84a50d28d511e508a2470ba5c34adea9>`__
|  }

 

enum  

| `Tango::AccessControlType <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7>`__
{
| 
  `Tango::ACCESS\_READ <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7a016fdcb56a610736d4ce1aae90d4a1e8>`__
= 0,
| 
  `Tango::ACCESS\_WRITE <../../de/ddf/namespaceTango.html#a327e64b5d3b15083922f4036cbf8d9f7ae04a28408b4323c2ef793dd64d497a05>`__
|  }

 

enum  

| `Tango::AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__
{
| 
  `Tango::READ\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da08ea97521ce92807b73e64f3b96a1529>`__
= 0,
| 
  `Tango::WRITE\_REQ <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969da81b4402123e0bf6c6e9277c65d9d5a32>`__
|  }

 

enum  

| `Tango::AttrSerialModel <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadc>`__
{
| 
  `Tango::ATTR\_NO\_SYNC <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca1d8e3cb03ab568f6dd038048ff2536f5>`__
=0,
| 
  `Tango::ATTR\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadcab71d75e8efdef836317a5b0667fd2599>`__,
| 
  `Tango::ATTR\_BY\_USER <../../de/ddf/namespaceTango.html#a204027cbeaf9340dad05439c8f5ecadca77a297f6bb10c7b17856dd3a8d5f29a8>`__
|  }

 

enum  

| `Tango::ChannelType <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7>`__
{
| 
  `Tango::ZMQ <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a7210a59f6c2bc764861a326add37a04e>`__
= 0,
| 
  `Tango::NOTIFD <../../de/ddf/namespaceTango.html#a9c408db056c1db3e584ec0a534209bf7a74986761b743aa7fb74e60a0e6f7ca4b>`__
|  }

 

enum  

| `Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
{
| 
  `Tango::DEV\_VOID <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae2d6e5fed693c328c4065339b843470b>`__
= 0,
| 
  `Tango::DEV\_BOOLEAN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab4efe3f5177bddfb8c6fed90a17167dd>`__,
| 
  `Tango::DEV\_SHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6e47f6c8e7593abe847768625cdea8f9>`__,
| 
  `Tango::DEV\_LONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6b94ef795dea2bcc6af9a2be4241a28b>`__,
| 
  `Tango::DEV\_FLOAT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3f8bc37fd7a5bbd4d88c8f60a2141239>`__,
| 
  `Tango::DEV\_DOUBLE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a37e0d615b5e42214a09aa70324a753b6>`__,
| 
  `Tango::DEV\_USHORT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a88dc7602b87653a436acca037b7bcee7>`__,
| 
  `Tango::DEV\_ULONG <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9eba5fa98fae4d2ea9e8643e2136d67d>`__,
| 
  `Tango::DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a9d8b9eb6fe094a24e27bdb2fc40ce79b>`__,
| 
  `Tango::DEVVAR\_CHARARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a29e20059f1446ac5d176698907bbd3a4>`__,
| 
  `Tango::DEVVAR\_SHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a3b1acccd8c06639df370a59e34b9ea28>`__,
| 
  `Tango::DEVVAR\_LONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4dd3df3cb7c2facc1c2bc9f5a9601267>`__,
| 
  `Tango::DEVVAR\_FLOATARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aadc0983bbe46b67d5a5c0b6fefd635f3>`__,
| 
  `Tango::DEVVAR\_DOUBLEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aec3cf6f38917b8a9736dfaeccda26e26>`__,
| 
  `Tango::DEVVAR\_USHORTARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a1d7d93136302878038c7d6e4d94c5a66>`__,
| 
  `Tango::DEVVAR\_ULONGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a8e9fc554e1804a6e415c45718e7b077a>`__,
| 
  `Tango::DEVVAR\_STRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abca6466d0c16ba364261e16d67b4408c>`__,
| 
  `Tango::DEVVAR\_LONGSTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a19f8a24bdf208a87bb31b217c1f6b261>`__,
| 
  `Tango::DEVVAR\_DOUBLESTRINGARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170aa4080a8a54b6e8a243aeb60541347723>`__,
| 
  `Tango::DEV\_STATE <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a7f46074346016dfb879ce3ff1ff78eb6>`__,
| 
  `Tango::CONST\_DEV\_STRING <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a671166fff99c137e11ce5702209ee430>`__,
| 
  `Tango::DEVVAR\_BOOLEANARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a90ce0d6685cb0ce6a7fd4b2ef67c9e72>`__,
| 
  `Tango::DEV\_UCHAR <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ab9c44c8136c7088c8585bd9ac165b0d0>`__,
| 
  `Tango::DEV\_LONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a4cd60a84823f849e8611f0e5b30ca830>`__,
| 
  `Tango::DEV\_ULONG64 <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170abac7cc9e831981d38ceeeccdbaebdd8c>`__,
| 
  `Tango::DEVVAR\_LONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a13f0d422e74541943d1fbbe9e1cad66b>`__,
| 
  `Tango::DEVVAR\_ULONG64ARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad83256c2570cc046d4c75b4244b9f546>`__,
| 
  `Tango::DEV\_INT <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a6f9719ad47c4371dc84e3af384926776>`__,
| 
  `Tango::DEV\_ENCODED <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ad63e132a76535a322f3cb4fba94c6612>`__,
| 
  `Tango::DEV\_ENUM <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a883d3175b4a1618cee9e43628eb0108b>`__,
| 
  `Tango::DEV\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a53b146beabe34367b2fab9b6b7920dbf>`__,
| 
  `Tango::DEVVAR\_STATEARRAY <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170a943b1f4763a27dbdd450e6ec9c2d6b89>`__,
| 
  `Tango::DATA\_TYPE\_UNKNOWN <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170ae51d5b5160e3a793758163127734aa59>`__
= 100
|  }

 

enum  

| `Tango::ErrorManagementType <../../d1/d45/group__Client.html#gac36915c08d6722e33f71f00b3b1d2ff0>`__
{
| 
  `Tango::ABORT\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a6665e08e2a44c93d713463e87c3ce840>`__
=0,
| 
  `Tango::CONTINUE\_ON\_ERROR <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0affe786884b0ac7bd7e6a4a623fd84e04>`__,
| 
  `Tango::numErrorManagementType <../../d1/d45/group__Client.html#ggac36915c08d6722e33f71f00b3b1d2ff0a0c53bbbc2ee4f2b367971b8ffebdb9f6>`__
|  }

 

| Possible error management with write\_read\_attribute call.
`More... <../../d1/d45/group__Client.html#gac36915c08d6722e33f71f00b3b1d2ff0>`__

 

enum  

| `Tango::EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
{
| 
  `Tango::CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a65a4e38e653bfce94ecc77f071e71eaf>`__
=0,
| 
  `Tango::QUALITY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2e5f1c2696e76501860ed84e06fdfa9b>`__,
| 
  `Tango::PERIODIC\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a56db5ee0e5d86d9a5e629c55edff2a83>`__,
| 
  `Tango::ARCHIVE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a2420bb7fba51c4471791ad71422a6bd4>`__,
| 
  `Tango::USER\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a24368c57cf5b762b7351edb9d21afd48>`__,
| 
  `Tango::ATTR\_CONF\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6ab955c951d7aac96b5c46f108f7d7ef18>`__,
| 
  `Tango::DATA\_READY\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a3f5f44f764a22bdb1bd809c711e9eefd>`__,
| 
  `Tango::INTERFACE\_CHANGE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6af0c6101bccdea12e40f8d6eb1b1ca7a3>`__,
| 
  `Tango::PIPE\_EVENT <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6add5e7619e42d25779bb3376e8f5cdb24>`__,
| 
  `Tango::numEventType <../../d1/d45/group__Client.html#gga5366e2a8cedf5aab5be8835974f787c6a0078fc3dc8b18ff1b352fd96edae5ba9>`__
|  }

 

| Possible event type.
`More... <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__

 

enum  

`Tango::KeepAliveCmdCode <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100b>`__
{
`Tango::EXIT\_TH <../../de/ddf/namespaceTango.html#a5210877f5f256e9b3abee0efccd4100ba50df4e51da121e2da9bf3df0f0f95111>`__
= 0 }

 

enum  

| `Tango::LockCmdCode <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4e>`__
{
| 
  `Tango::LOCK\_ADD\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea6b53bd238709b8614503054909ce5882>`__
= 0,
| 
  `Tango::LOCK\_REM\_DEV <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eaf9a342568f45e6895c595944065e9133>`__,
| 
  `Tango::LOCK\_UNLOCK\_ALL\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4ea1a84dc93be6b7297efbfee01fb35a884>`__,
| 
  `Tango::LOCK\_EXIT <../../de/ddf/namespaceTango.html#aafcb27349b09910b6d5ff17eb305fe4eab85fe93fa791544e2b82b13ab97b7b60>`__
|  }

 

enum  

| `Tango::LogLevel <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709>`__
{
| 
  `Tango::LOG\_OFF <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a8f14ec717b97c2d7ce592bb0ff06b444>`__
= 0,
| 
  `Tango::LOG\_FATAL <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a25692d6049c268fb4cb0e79b5706a07e>`__,
| 
  `Tango::LOG\_ERROR <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a16302cb4688478207991d1a22dd90a92>`__,
| 
  `Tango::LOG\_WARN <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a33a512ea286a55b62e5215b2f74a97e8>`__,
| 
  `Tango::LOG\_INFO <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709a9e8df731000d4d6f23b2340b1cab36fa>`__,
| 
  `Tango::LOG\_DEBUG <../../de/ddf/namespaceTango.html#aabcd429b4adb4aa375c03ae459824709ac86c1927287cc279ae0cf158de9af823>`__
|  }

 

enum  

| `Tango::LogTarget <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246da>`__
{
| 
  `Tango::LOG\_CONSOLE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daad7b8b9a14328c599975a890820eefb2a>`__
= 0,
| 
  `Tango::LOG\_FILE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daa303eef4691045883e00a452c355f4d95>`__,
| 
  `Tango::LOG\_DEVICE <../../de/ddf/namespaceTango.html#ae7705ba486077f5ce2091ad842b246daae9768c52a777abb959d3649aac301aa4>`__
|  }

 

enum  

| `Tango::MessBoxType <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4>`__
{
| 
  `Tango::STOP <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ab8e844c8af530408208f3f9e0b42e5d0>`__
= 0,
| 
  `Tango::INFO <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__
|  }

 

enum  

| `Tango::MinMaxValueCheck <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1e>`__
{
| 
  `Tango::MIN <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1eafdcdb139d7d951d8533147e44bd2fcf8>`__
= 0,
| 
  `Tango::MAX <../../de/ddf/namespaceTango.html#a804009a0e85b66c708a8b42b6a93fb1ea845e8f597c6beba9849b7273b3470868>`__
|  }

 

enum  

| `Tango::PipeSerialModel <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98>`__
{
| 
  `Tango::PIPE\_NO\_SYNC <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98a855089eea67f5b5f306b04d5eb7bc64d>`__
=0,
| 
  `Tango::PIPE\_BY\_KERNEL <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aaad121df2abea1d39eca3bd3ef413b37>`__,
| 
  `Tango::PIPE\_BY\_USER <../../de/ddf/namespaceTango.html#a65f765a424afb133707cfba235633f98aac61b4811475f0c262e8150131ee8ba1>`__
|  }

 

enum  

| `Tango::PollCmdCode <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580>`__
{
| 
  `Tango::POLL\_ADD\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a129486e9808fdd11b350fc1f3d473747>`__
= 0,
| 
  `Tango::POLL\_REM\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a14b163e8afff81eb1b355a7ae1efa60d>`__,
| 
  `Tango::POLL\_START <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a1995b035ee72464ca342766003bcd114>`__,
| 
  `Tango::POLL\_STOP <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a43446e4cb281938d5adee1cb61ae7cb3>`__,
| 
  `Tango::POLL\_UPD\_PERIOD <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a7506925713259a568be457ff4e84c9e8>`__,
| 
  `Tango::POLL\_REM\_DEV <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580af10b3c89d28dde3dd086ada851e07e68>`__,
| 
  `Tango::POLL\_EXIT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a9aeec243eb1cd5c06cba483049a2b270>`__,
| 
  `Tango::POLL\_REM\_EXT\_TRIG\_OBJ <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a34c2d3ff06161dd7bfeb83a635d765e3>`__,
| 
  `Tango::POLL\_ADD\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580ab1cd27e6967691263942fd76843701d9>`__,
| 
  `Tango::POLL\_REM\_HEARTBEAT <../../de/ddf/namespaceTango.html#a6147efabaebd3538a7bb3667cded7580a24fb79eedb927dc2ab9c8ac492abc99d>`__
|  }

 

enum  

| `Tango::PollObjType <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6e>`__
{
| 
  `Tango::POLL\_CMD <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eae60ca501d985d9a847032a32d7d984ee>`__
= 0,
| 
  `Tango::POLL\_ATTR <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea7d1660a3cb2f510eee84a52f9ab20610>`__,
| 
  `Tango::EVENT\_HEARTBEAT <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6eada1ff1bf7d933f2aa76a2294ed588940>`__,
| 
  `Tango::STORE\_SUBDEV <../../de/ddf/namespaceTango.html#ac5ffdb26e95e0c322c8ed79524ad9b6ea53590884fe15b5dcf088fdbddc449d52>`__
|  }

 

enum  

| `Tango::SerialModel <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6>`__
{
| 
  `Tango::BY\_DEVICE <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a4616aaf95bd5002833d37dc3e5f46ee3>`__
= 0,
| 
  `Tango::BY\_CLASS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6adbbc20e2fe105a06a22d17549aac04c4>`__,
| 
  `Tango::BY\_PROCESS <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6aedddb9d27b32016d9823e62f5db28785>`__,
| 
  `Tango::NO\_SYNC <../../de/ddf/namespaceTango.html#a0d80a625ea3e8339d930b249624ed0b6a1287827842e9fa6c85a468c7299f3042>`__
|  }

 

enum  

| `Tango::ZmqCmdCode <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315c>`__
{
| 
  `Tango::ZMQ\_END <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caf2b91f9249e4f9a3d75555cbbfae9a63>`__
= 0,
| 
  `Tango::ZMQ\_CONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca91847a3fe27dc06e3ae4f6d9f0aeb564>`__,
| 
  `Tango::ZMQ\_DISCONNECT\_HEARTBEAT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca1345e280dc07fcd026acd131b2a6c9b1>`__,
| 
  `Tango::ZMQ\_CONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa64a44722f54ea80b09805f829fe1374>`__,
| 
  `Tango::ZMQ\_DISCONNECT\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa1d09288e4fc9a02bef713d0fc3a43cf>`__,
| 
  `Tango::ZMQ\_CONNECT\_MCAST\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca9c222118af31e7af40cff64fee579f51>`__,
| 
  `Tango::ZMQ\_DELAY\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315caa10332851836fb7f97f58336eea6700a>`__,
| 
  `Tango::ZMQ\_RELEASE\_EVENT <../../de/ddf/namespaceTango.html#a5dfbc15776e2b782abbcef92e3c2315ca53912643cf1f41cdcbae03a98924b992>`__
|  }

 

Functions
---------

char \* 

`Tango::string\_dup <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__
(char \*s)

 

char \* 

`Tango::string\_dup <../../de/ddf/namespaceTango.html#a0709e050e70c50ae2211f97c45639198>`__
(const char \*s)

 

Variables
---------

const char \*const 

`Tango::ACCESS\_SERVICE <../../de/ddf/namespaceTango.html#a1f281953f4feb64a3d4fd078b832e0de>`__
= "AccessControl"

 

const int 

`Tango::ALL\_EVENTS <../../de/ddf/namespaceTango.html#a374c1134a17d1e50284d1a68cc4accc1>`__
= 0

 

const char \*const 

`Tango::AllAttr <../../de/ddf/namespaceTango.html#a565f91812b4edcc2c69c76462a6b9ee5>`__
= "All attributes"

 

const char \*const 

`Tango::AllAttr\_3 <../../de/ddf/namespaceTango.html#a3f8363d4faf2dad3d54964b214e677cf>`__
= "All attributes\_3"

 

const char \*const 

`Tango::AllCmd <../../de/ddf/namespaceTango.html#a71a690fd2e85a6d3eeeebb8cc99308ed>`__
= "All commands"

 

const char \*const 

`Tango::AllPipe <../../de/ddf/namespaceTango.html#a5b3095298bf49d8ca8f47eb1858a899e>`__
= "All pipes"

 

const char \*const 

`Tango::AlrmValueNotSpec <../../de/ddf/namespaceTango.html#a381c25abcd854845c2187de2d6402c4b>`__
= "Not specified"

 

const char \*const 

`Tango::API\_AlreadyPolled <../../de/ddf/namespaceTango.html#a598829f7cf84a1084688a22290888b66>`__
= "API\_AlreadyPolled"

 

const char \*const 

`Tango::API\_AsynReplyNotArrived <../../de/ddf/namespaceTango.html#aea49fc3a8f3cf1fbdf4e58684ccd772a>`__
= "API\_AsynReplyNotArrived"

 

const char \*const 

`Tango::API\_AttrConfig <../../de/ddf/namespaceTango.html#af6f16d3e2dd399970d8820c69cb9204d>`__
= "API\_AttrConfig"

 

const char \*const 

`Tango::API\_AttrEventProp <../../de/ddf/namespaceTango.html#a9f84a7fc80faeccc580211eaccf7fdce>`__
= "API\_AttrEventProp"

 

const char \*const 

`Tango::API\_AttributeFailed <../../de/ddf/namespaceTango.html#a4d7e9b3fcf6f84df8ccd7da466dc464c>`__
= "API\_AttributeFailed"

 

const char \*const 

`Tango::API\_AttributeNotDataReadyEnabled <../../de/ddf/namespaceTango.html#a412bbdd811dfe6bd7064be020d6c8237>`__
= "API\_AttributeNotDataReadyEnabled"

 

const char \*const 

`Tango::API\_AttributePollingNotStarted <../../de/ddf/namespaceTango.html#aaacd7c57faee0af4acc07aa4766182fe>`__
= "API\_AttributePollingNotStarted"

 

const char \*const 

`Tango::API\_AttrIncorrectDataNumber <../../de/ddf/namespaceTango.html#a75c3cde71e5fbf97e8f34a917e592b31>`__
= "API\_AttrIncorrectDataNumber"

 

const char \*const 

`Tango::API\_AttrNoAlarm <../../de/ddf/namespaceTango.html#a20550ebb1e28f43df0b2ad5962166ee0>`__
= "API\_AttrNoAlarm"

 

const char \*const 

`Tango::API\_AttrNotAllowed <../../de/ddf/namespaceTango.html#a9e9d457748b54b65233931f5f77bd7d0>`__
= "API\_AttrNotAllowed"

 

const char \*const 

`Tango::API\_AttrNotFound <../../de/ddf/namespaceTango.html#a2d9f8219f8eb47151f02bda7b2784f3e>`__
= "API\_AttrNotFound"

 

const char \*const 

`Tango::API\_AttrNotPolled <../../de/ddf/namespaceTango.html#affd54d4f5cd5e42d5030a5fc3d44eb2f>`__
= "API\_AttrNotPolled"

 

const char \*const 

`Tango::API\_AttrNotWritable <../../de/ddf/namespaceTango.html#a9a46d00f7e44e69913d9b37c57172e1a>`__
= "API\_AttrNotWritable"

 

const char \*const 

`Tango::API\_AttrOptProp <../../de/ddf/namespaceTango.html#a267abf7516e309135ab7f7901505ca9d>`__
= "API\_AttrOptProp"

 

const char \*const 

`Tango::API\_AttrPropValueNotSet <../../de/ddf/namespaceTango.html#a806ab0b083e69f25e0ad9a00c2ac511f>`__
= "API\_AttrPropValueNotSet"

 

const char \*const 

`Tango::API\_AttrValueNotSet <../../de/ddf/namespaceTango.html#affc0676b6e97629cd7a92ae9a438bf35>`__
= "API\_AttrValueNotSet"

 

const char \*const 

`Tango::API\_AttrWrongDefined <../../de/ddf/namespaceTango.html#ade324d58a59de866554b2374b8061049>`__
= "API\_AttrWrongDefined"

 

const char \*const 

`Tango::API\_AttrWrongMemValue <../../de/ddf/namespaceTango.html#a8b61b1fdd81b63e8cfc5ce1a0f3c52ad>`__
= "API\_AttrWrongMemValue"

 

const char \*const 

`Tango::API\_BadAsynReqType <../../de/ddf/namespaceTango.html#ae621e1d53db91520e20222a27058c3ea>`__
= "API\_BadAsynReqType"

 

const char \*const 

`Tango::API\_BadConfigurationProperty <../../de/ddf/namespaceTango.html#a51ae1dac8bc729864268a2739d262282>`__
= "API\_BadConfigurationProperty"

 

const char \*const 

`Tango::API\_BlackBoxArgument <../../de/ddf/namespaceTango.html#ada893b8f13e4324afdda4d329bf0d974>`__
= "API\_BlackBoxArgument"

 

const char \*const 

`Tango::API\_BlackBoxEmpty <../../de/ddf/namespaceTango.html#a53160500c33341b504d64ed0014ecb26>`__
= "API\_BlackBoxEmpty"

 

const char \*const 

`Tango::API\_CannotCheckAccessControl <../../de/ddf/namespaceTango.html#abbc95fb0aec509279b907a441f234c7f>`__
= "API\_CannotCheckAccessControl"

 

const char \*const 

`Tango::API\_CannotOpenFile <../../de/ddf/namespaceTango.html#accfb8bea6eecbcbed96fc15a8eefe6ed>`__
= "API\_CannotOpenFile"

 

const char \*const 

`Tango::API\_CantActivatePOAManager <../../de/ddf/namespaceTango.html#a7e08c459e5cba2eb75255c4c1dd696e8>`__
= "API\_CantActivatePOAManager"

 

const char \*const 

`Tango::API\_CantConnectToDevice <../../de/ddf/namespaceTango.html#abad3f6fd397ab9798d90e097ace0cc00>`__
= "API\_CantConnectToDevice"

 

const char \*const 

`Tango::API\_CantCreateClassPoa <../../de/ddf/namespaceTango.html#a5541eb1430b1668517f3f890fb0ab32e>`__
= "API\_CantCreateClassPoa"

 

const char \*const 

`Tango::API\_CantCreateLockingThread <../../de/ddf/namespaceTango.html#a559860b11e3f709db36dee068e12f501>`__
= "API\_CantCreateLockingThread"

 

const char \*const 

`Tango::API\_CantDestroyDevice <../../de/ddf/namespaceTango.html#ae40cae7ba5e62681693fb931bc036101>`__
= "API\_CantDestroyDevice"

 

const char \*const 

`Tango::API\_CantFindLockingThread <../../de/ddf/namespaceTango.html#a47f1787b07433186f7b4144d4adb4a78>`__
= "API\_CantFindLockingThread"

 

const char \*const 

`Tango::API\_CantGetClientIdent <../../de/ddf/namespaceTango.html#a4c85b6737187cbfd2d47874c31f78688>`__
= "API\_CantGetClientIdent"

 

const char \*const 

`Tango::API\_CantGetDevObjectId <../../de/ddf/namespaceTango.html#a8a8a65f17bee17a3c7ef4e81abc1876d>`__
= "API\_CantGetDevObjectId"

 

const char \*const 

`Tango::API\_CantInstallSignal <../../de/ddf/namespaceTango.html#a0e959c114559af4673b863546c6251b7>`__
= "API\_CantInstallSignal"

 

const char \*const 

`Tango::API\_CantRetrieveClass <../../de/ddf/namespaceTango.html#ab7bcedb0ded3de7c4165552db12c76e7>`__
= "API\_CantRetrieveClass"

 

const char \*const 

`Tango::API\_CantRetrieveClassList <../../de/ddf/namespaceTango.html#a54c1d08ea17e70fa6d222f1ae27bb1ca>`__
= "API\_CantRetrieveClassList"

 

const char \*const 

`Tango::API\_CantStoreDeviceClass <../../de/ddf/namespaceTango.html#a44b76427ee6339540bee839d328cdfce>`__
= "API\_CantStoreDeviceClass"

 

const char \*const 

`Tango::API\_ClassNotFound <../../de/ddf/namespaceTango.html#aa3be4093d5504f8bc73b163862cc309c>`__
= "API\_ClassNotFound"

 

const char \*const 

`Tango::API\_CmdArgumentTypeNotSupported <../../de/ddf/namespaceTango.html#ac8fb80b7d90b3b1c95576f4549328668>`__
= "API\_CmdArgumentTypeNotSupported"

 

const char \*const 

`Tango::API\_CmdNotPolled <../../de/ddf/namespaceTango.html#aff4db63e7cabc86cea88027cc2d4345e>`__
= "API\_CmdNotPolled"

 

const char \*const 

`Tango::API\_CommandFailed <../../de/ddf/namespaceTango.html#a637934aed55dfd38af6b23c0c5b29306>`__
= "API\_CommandFailed"

 

const char \*const 

`Tango::API\_CommandNotAllowed <../../de/ddf/namespaceTango.html#aa9a485028a7e3f9cab67fd341e0a8a33>`__
= "API\_CommandNotAllowed"

 

const char \*const 

`Tango::API\_CommandNotFound <../../de/ddf/namespaceTango.html#ac200c048fe7f41f1d631b30fec09d194>`__
= "API\_CommandNotFound"

 

const char \*const 

`Tango::API\_CommandTimedOut <../../de/ddf/namespaceTango.html#a65a8de572231c0792e0d9cca80fa0440>`__
= "API\_CommandTimedOut"

 

const char \*const 

`Tango::API\_ConnectionFailed <../../de/ddf/namespaceTango.html#a318ff939e96d1fc8e8a9411a873e07fd>`__
= "API\_ConnectionFailed"

 

const char \*const 

`Tango::API\_CorbaSysException <../../de/ddf/namespaceTango.html#a80b0db5242b5b0b41e847edd3a5631fd>`__
= "API\_CorbaSysException"

 

const char \*const 

`Tango::API\_CorruptedDatabase <../../de/ddf/namespaceTango.html#a12971fe66a9476a82dd9498cb1121dce>`__
= "API\_CorruptedDatabase"

 

const char \*const 

`Tango::API\_DatabaseAccess <../../de/ddf/namespaceTango.html#ad2f5b3b1ba2b0c831aad77cf7f299578>`__
= "API\_DatabaseAccess"

 

const char \*const 

`Tango::API\_DatabaseCacheAccess <../../de/ddf/namespaceTango.html#ab3ed208b6d5bfcaefcbbeb331105ed46>`__
= "API\_DatabaseCacheAccess"

 

const char \*const 

`Tango::API\_DatabaseFileError <../../de/ddf/namespaceTango.html#a30638e36a66c20e24f41252ec9a9b9e1>`__
= "API\_DatabaseFileError"

 

const char \*const 

`Tango::API\_DecodeErr <../../de/ddf/namespaceTango.html#ab7665c68bc38b6e12abcecad06aa0271>`__
= "API\_DecodeErr"

 

const char \*const 

`Tango::API\_DeprecatedCommand <../../de/ddf/namespaceTango.html#a3e9646bc54625db3cbebbd936ef0da45>`__
= "API\_DeprecatedCommand"

 

const char \*const 

`Tango::API\_DeviceLocked <../../de/ddf/namespaceTango.html#a2505084b158db239b47f14f83932ca7b>`__
= "API\_DeviceLocked"

 

const char \*const 

`Tango::API\_DeviceNotExported <../../de/ddf/namespaceTango.html#a9aef726de48dbd963088f6ec9afda1ca>`__
= "API\_DeviceNotExported"

 

const char \*const 

`Tango::API\_DeviceNotFound <../../de/ddf/namespaceTango.html#af04e195158692b32eee6e93fdcbff284>`__
= "API\_DeviceNotFound"

 

const char \*const 

`Tango::API\_DeviceNotLocked <../../de/ddf/namespaceTango.html#a53e0d40a069f1e0dae8d9f62e8df5dc1>`__
= "API\_DeviceNotLocked"

 

const char \*const 

`Tango::API\_DeviceNotPolled <../../de/ddf/namespaceTango.html#aff093f1d3fc055d39c6857e28b2bbab0>`__
= "API\_DeviceNotPolled"

 

const char \*const 

`Tango::API\_DeviceUnlockable <../../de/ddf/namespaceTango.html#aeea24c842a2af2d82da63141e4d18a31>`__
= "API\_DeviceUnlockable"

 

const char \*const 

`Tango::API\_DeviceUnlocked <../../de/ddf/namespaceTango.html#afb625bb1e559a94823826fc3f4fb39b2>`__
= "API\_DeviceUnlocked"

 

const char \*const 

`Tango::API\_DServerClassNotInitialised <../../de/ddf/namespaceTango.html#a4f4372a5c9c22fd22e0d4d1db9a900ab>`__
= "API\_DServerClassNotInitialised"

 

const char \*const 

`Tango::API\_DSFailedRegisteringEvent <../../de/ddf/namespaceTango.html#a34f311c824d346fce7231c33bc97d77f>`__
= "API\_DSFailedRegisteringEvent"

 

const char \*const 

`Tango::API\_EmptyDataElement <../../de/ddf/namespaceTango.html#ae78da62d54b1fc36bb007d5172b380b3>`__
= "API\_EmptyDataElement"

 

const char \*const 

`Tango::API\_EmptyDeviceAttribute <../../de/ddf/namespaceTango.html#a8974afd8f6b9d4c5e09885846f806cfd>`__
= "API\_EmptyDeviceAttribute"

 

const char \*const 

`Tango::API\_EventConsumer <../../de/ddf/namespaceTango.html#ad3d754045df7893748ae23f9115055be>`__
= "API\_EventConsumer"

 

const char \*const 

`Tango::API\_EventPropertiesNotSet <../../de/ddf/namespaceTango.html#afae6d0087cdce4e22d2dc790418045e7>`__
= "API\_EventPropertiesNotSet"

 

const char \*const 

`Tango::API\_EventQueues <../../de/ddf/namespaceTango.html#a98a17638f72d6e841e996541e5a8d548>`__
= "API\_EventQueues"

 

const char \*const 

`Tango::API\_EventSupplierNotConstructed <../../de/ddf/namespaceTango.html#ae27e03994272a09e5e4f49789c2578c0>`__
= "API\_EventSupplierNotConstructed"

 

const char \*const 

`Tango::API\_FwdAttrInconsistency <../../de/ddf/namespaceTango.html#afe9f1ad89b2688b93790f8eb6251798b>`__
= "API\_FwdAttrInconsistency"

 

const char \*const 

`Tango::API\_FwdAttrNotConfigured <../../de/ddf/namespaceTango.html#a048ee67c10389be2d73fa011a57e9151>`__
= "API\_FwdAttrNotConfigured"

 

const char \*const 

`Tango::API\_IncoherentDbData <../../de/ddf/namespaceTango.html#a75a463e45c3ef4584366f2166c60846d>`__
= "API\_IncoherentDbData"

 

const char \*const 

`Tango::API\_IncoherentDevData <../../de/ddf/namespaceTango.html#a6221ad15c73aa7e01b76e64cc01698fa>`__
= "API\_IncoherentDevData"

 

const char \*const 

`Tango::API\_IncoherentValues <../../de/ddf/namespaceTango.html#a0b20d12d02e057f876e09bd2104a9606>`__
= "API\_IncoherentValues"

 

const char \*const 

`Tango::API\_IncompatibleArgumentType <../../de/ddf/namespaceTango.html#ab7b7818806cce14bb925618a276e4f10>`__
= "API\_IncompatibleArgumentType"

 

const char \*const 

`Tango::API\_IncompatibleAttrDataType <../../de/ddf/namespaceTango.html#a5d26ecf289a6aa5147d2578082a821ba>`__
= "API\_IncompatibleAttrDataType"

 

const char \*const 

`Tango::API\_IncompatibleCmdArgumentType <../../de/ddf/namespaceTango.html#a9f8061c5b3752e8cb8f4de9de6ab790c>`__
= "API\_IncompatibleCmdArgumentType"

 

const char \*const 

`Tango::API\_InitMethodNotFound <../../de/ddf/namespaceTango.html#a818b637e1145bce913d10fa8651184ca>`__
= "API\_InitMethodNotFound"

 

const char \*const 

`Tango::API\_InitNotPublic <../../de/ddf/namespaceTango.html#a0775603ffeeccc9f6a5b0a945ade137d>`__
= "API\_InitNotPublic"

 

const char \*const 

`Tango::API\_InitThrowsException <../../de/ddf/namespaceTango.html#aaad6a2e61b1ce56306dec28bc62970f7>`__
= "API\_InitThrowsException"

 

const char \*const 

`Tango::API\_InternalError <../../de/ddf/namespaceTango.html#a3ba812bf097eec3b255a533369e534b3>`__
= "API\_InternalError"

 

const char \*const 

`Tango::API\_InvalidArgs <../../de/ddf/namespaceTango.html#a5c69828a163c1f56b068666edf125870>`__
= "API\_InvalidArgs"

 

const char \*const 

`Tango::API\_JavaRuntimeSecurityException <../../de/ddf/namespaceTango.html#a8dc4ecff1585b33fe28a772f95ce87d7>`__
= "API\_JavaRuntimeSecurityException"

 

const char \*const 

`Tango::API\_MemAttFailedDuringInit <../../de/ddf/namespaceTango.html#a6435ddb6373dc6ee827891ad2af053eb>`__
= "API\_MemAttFailedDuringInit"

 

const char \*const 

`Tango::API\_MemoryAllocation <../../de/ddf/namespaceTango.html#ad2903a1aa0ddfe85d8b306a99351fefb>`__
= "API\_MemoryAllocation"

 

const char \*const 

`Tango::API\_MethodArgument <../../de/ddf/namespaceTango.html#a5ef89a7a60f38a9417dbed9cf5313b5d>`__
= "API\_MethodArgument"

 

const char \*const 

`Tango::API\_MethodNotFound <../../de/ddf/namespaceTango.html#a5ae02751e401ef281032de2b8ea1072d>`__
= "API\_MethodNotFound"

 

const char \*const 

`Tango::API\_MissedEvents <../../de/ddf/namespaceTango.html#a71962443cc1d623a84bb0cd5d04fc18f>`__
= "API\_MissedEvents"

 

const char \*const 

`Tango::API\_NoDataYet <../../de/ddf/namespaceTango.html#a0a0af5209f7892f59f04b42e77fdc04e>`__
= "API\_NoDataYet"

 

const char \*const 

`Tango::API\_NonDatabaseDevice <../../de/ddf/namespaceTango.html#a4758e5099c8864befc48b6b0b52a3af0>`__
= "API\_NonDatabaseDevice"

 

const char \*const 

`Tango::API\_NotificationServiceFailed <../../de/ddf/namespaceTango.html#a53d79f446de0c921d2508bf69aacff9c>`__
= "API\_NotificationServiceFailed"

 

const char \*const 

`Tango::API\_NotSupported <../../de/ddf/namespaceTango.html#ae8c41507f747e22653604428cc8c82ac>`__
= "API\_NotSupported"

 

const char \*const 

`Tango::API\_NotSupportedFeature <../../de/ddf/namespaceTango.html#ac8783d2d84e56f2a0a3ce73474062d84>`__
= "API\_NotSupportedFeature"

 

const char \*const 

`Tango::API\_NotUpdatedAnyMore <../../de/ddf/namespaceTango.html#ac4638e0fff1396065a562a7a1770922f>`__
= "API\_NotUpdatedAnyMore"

 

const char \*const 

`Tango::API\_NtDebugWindowError <../../de/ddf/namespaceTango.html#a1ac0e04e63b2ede5fe5e56ae7f61bb2b>`__
= "API\_NtDebugWindowError"

 

const char \*const 

`Tango::API\_OverloadingNotSupported <../../de/ddf/namespaceTango.html#a312032487531801329fa7ff62530c0f6>`__
= "API\_OverloadingNotSupported"

 

const char \*const 

`Tango::API\_PipeDataEltNotFound <../../de/ddf/namespaceTango.html#a6c4b7dc3912f7cbb6ce425c0c0162819>`__
= "API\_PipeDataEltNotFound"

 

const char \*const 

`Tango::API\_PipeDuplicateDEName <../../de/ddf/namespaceTango.html#a6844d260affeec7b2349786a5c7cf8cd>`__
= "API\_PipeDuplicateDEName"

 

const char \*const 

`Tango::API\_PipeFailed <../../de/ddf/namespaceTango.html#aba1f603b0dce0ab8e02993d9a81c3108>`__
= "API\_PipeFailed"

 

const char \*const 

`Tango::API\_PipeNoDataElement <../../de/ddf/namespaceTango.html#ae67d7487777249996436b1837b8daec0>`__
= "API\_PipeNoDataElement"

 

const char \*const 

`Tango::API\_PipeNotAllowed <../../de/ddf/namespaceTango.html#a4de7ec265953538d4a332d6cff0dc941>`__
= "API\_PipeNotAllowed"

 

const char \*const 

`Tango::API\_PipeNotFound <../../de/ddf/namespaceTango.html#a7cda58d523264fdc9c207fbeca63944c>`__
= "API\_PipeNotFound"

 

const char \*const 

`Tango::API\_PipeNotWritable <../../de/ddf/namespaceTango.html#acd70a42c2585e7f6e3892681e45e3d13>`__
= "API\_PipeNotWritable"

 

const char \*const 

`Tango::API\_PipeOptProp <../../de/ddf/namespaceTango.html#a90cdefad0e2748438b49563ff17c6ada>`__
= "API\_PipeOptProp"

 

const char \*const 

`Tango::API\_PipeValueNotSet <../../de/ddf/namespaceTango.html#a850f2c0b3b80513c45b9642bb48970ab>`__
= "API\_PipeValueNotSet"

 

const char \*const 

`Tango::API\_PipeWrongArg <../../de/ddf/namespaceTango.html#a6eb51dd41f3f691160ffb27779eb4733>`__
= "API\_PipeWrongArg"

 

const char \*const 

`Tango::API\_PipeWrongArgNumber <../../de/ddf/namespaceTango.html#aeb3c3b2f2d4e0f01aea7a0b7733df74f>`__
= "API\_PipeWrongArgNumber"

 

const char \*const 

`Tango::API\_PolledDeviceNotInPoolConf <../../de/ddf/namespaceTango.html#a9ded57d73abedbed85f21bc0af5cccd2>`__
= "API\_PolledDeviceNotInPoolConf"

 

const char \*const 

`Tango::API\_PolledDeviceNotInPoolMap <../../de/ddf/namespaceTango.html#a127aeafeaa2f90f9dc4cfa825de906de>`__
= "API\_PolledDeviceNotInPoolMap"

 

const char \*const 

`Tango::API\_PollingThreadNotFound <../../de/ddf/namespaceTango.html#a149ca5a577be29a05f287cc1227db2ca>`__
= "API\_PollingThreadNotFound"

 

const char \*const 

`Tango::API\_PollObjNotFound <../../de/ddf/namespaceTango.html#a710a71ec0ed36196fa2dfaa7208f23d0>`__
= "API\_PollObjNotFound"

 

const char \*const 

`Tango::API\_PollRingBufferEmpty <../../de/ddf/namespaceTango.html#a8a48a6e8f55bef8dfad79f2290a0d575>`__
= "API\_PollRingBufferEmpty"

 

const char \*const 

`Tango::API\_ReadOnlyMode <../../de/ddf/namespaceTango.html#ad215189a1b0c81fd66d5ea9b2da82ffa>`__
= "API\_ReadOnlyMode"

 

const char \*const 

`Tango::API\_RootAttrFailed <../../de/ddf/namespaceTango.html#a8bb8d6a61f1044b89530b2e88851bc8a>`__
= "API\_RootAttrFailed"

 

const char \*const 

`Tango::API\_ShutdownInProgress <../../de/ddf/namespaceTango.html#ad66399259e0659990d8ca0c35c0a0973>`__
= "API\_ShutdownInProgress"

 

const char \*const 

`Tango::API\_SignalOutOfRange <../../de/ddf/namespaceTango.html#acb442d8ddc4f3a34da536aa56c218373>`__
= "API\_SignalOutOfRange"

 

const char \*const 

`Tango::API\_StartupSequence <../../de/ddf/namespaceTango.html#a1332737231394d5be886efdbac42b778>`__
= "API\_StartupSequence"

 

const char \*const 

`Tango::API\_StdException <../../de/ddf/namespaceTango.html#ae9a0b6c371656538d2fe7adc4f47d1ac>`__
= "API\_StdException"

 

const char \*const 

`Tango::API\_SystemCallFailed <../../de/ddf/namespaceTango.html#a2f24922d31c27b5e586d336369e48e98>`__
= "API\_SystemCallFailed"

 

const char \*const 

`Tango::API\_TangoHostNotSet <../../de/ddf/namespaceTango.html#a3860ba9e93c51e5508c38fe0aabb50f2>`__
= "API\_TangoHostNotSet"

 

const char \*const 

`Tango::API\_UnsupportedFeature <../../de/ddf/namespaceTango.html#a61e3a549e4af3321da46cbd40dc86642>`__
= "API\_UnsupportedFeature"

 

const char \*const 

`Tango::API\_WAttrOutsideLimit <../../de/ddf/namespaceTango.html#ad1dfd06214be90b120481414352756bf>`__
= "API\_WAttrOutsideLimit"

 

const char \*const 

`Tango::API\_WizardConfError <../../de/ddf/namespaceTango.html#a5447fcca78e6cd1deaaab78c94b44c64>`__
= "API\_WizardConfError"

 

const char \*const 

`Tango::API\_WrongAttributeNameSyntax <../../de/ddf/namespaceTango.html#a60aecefe61f636e89e905d344496d13a>`__
= "API\_WrongAttributeNameSyntax"

 

const char \*const 

`Tango::API\_WrongCmdLineArgs <../../de/ddf/namespaceTango.html#a0f02db6182e7898d7c7cef893460b11f>`__
= "API\_WrongCmdLineArgs"

 

const char \*const 

`Tango::API\_WrongDeviceNameSyntax <../../de/ddf/namespaceTango.html#abd8bdbb7ceaf1070d07ae3b071600c60>`__
= "API\_WrongDeviceNameSyntax"

 

const char \*const 

`Tango::API\_WrongEventData <../../de/ddf/namespaceTango.html#af79b5df1a13d18f326b2e3382abcbf2a>`__
= "API\_WrongEventData"

 

const char \*const 

`Tango::API\_WrongFormat <../../de/ddf/namespaceTango.html#a454ba11d1da2f007395e7bc8d8b35911>`__
= "API\_WrongFormat"

 

const char \*const 

`Tango::API\_WrongHistoryDataBuffer <../../de/ddf/namespaceTango.html#a27d7a7bd98dd02abffcb313fc547d0b2>`__
= "API\_WrongHistoryDataBuffer"

 

const char \*const 

`Tango::API\_WrongLockingStatus <../../de/ddf/namespaceTango.html#ab044b999a28507325a270391dc54efdc>`__
= "API\_WrongLockingStatus"

 

const char \*const 

`Tango::API\_WrongNumberOfArgs <../../de/ddf/namespaceTango.html#a3b37165a6d772cef81d9e3f41fa835eb>`__
= "API\_WrongNumberOfArgs"

 

const char \*const 

`Tango::API\_ZmqFailed <../../de/ddf/namespaceTango.html#a17556fe34cd8e046d5f8c57b5bfd483f>`__
= "API\_ZmqFailed"

 

const char \*const 

`Tango::API\_ZmqInitFailed <../../de/ddf/namespaceTango.html#aec28088d995919f796b44d062c250101>`__
= "API\_ZmqInitFailed"

 

const char \*const 

`Tango::ARRAY\_PIPE <../../de/ddf/namespaceTango.html#ae620b5476087612faa68423a59bdcbab>`__
= "Array"

 

const char \*const 

`Tango::AssocWritNotSpec <../../de/ddf/namespaceTango.html#a49f7e5107a03b9a0d20982ea9393956b>`__
= "None"

 

const int 

`Tango::ATT\_CONF\_REL\_NB <../../de/ddf/namespaceTango.html#a29de5d1a870e15287b55b2f3653cbd9d>`__
= 1

 

const int 

`Tango::CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#abe8c0ba9a0f18b778477b1df2ffa2227>`__
= 3000

 

const char \*const 

`Tango::CLNT\_TIMEOUT\_STR <../../de/ddf/namespaceTango.html#a391adb957de83d43090c59de92eb7f30>`__
= "3000"

 

const char \*const 

`Tango::CmdArgTypeName <../../de/ddf/namespaceTango.html#acebf8a42ed82b59c4eb5c4ba718297fe>`__
[]

 

const char \*const 

`Tango::CONF\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aabb3218da6deceb81899a5f116e0b508>`__
= EventName[ATTR\_CONF\_EVENT]

 

const char \*const 

`Tango::CONTROL\_SYSTEM <../../de/ddf/namespaceTango.html#aed8a549dc231ff341d74d86482da1da7>`__
= "CtrlSystem"

 

const char \*const 

`Tango::CTRL\_SOCK\_ENDPOINT <../../de/ddf/namespaceTango.html#a8a076a4c53258bf22563d97e20dc840b>`__
= "inproc://control"

 

const char \*const 

`Tango::DATA\_READY\_TYPE\_EVENT <../../de/ddf/namespaceTango.html#aeb31db5fae14a4c3b3c0e0375e9de05a>`__
= EventName[DATA\_READY\_EVENT]

 

const char \*const 

`Tango::DATABASE\_CLASS <../../de/ddf/namespaceTango.html#aaa8f81c3a53d35a3f315e8580b2e3877>`__
= "DataBase"

 

const int 

`Tango::DB\_CONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#ae812eafd87e66f1907751a4c93220b69>`__
= 25000

 

const int 

`Tango::DB\_RECONNECT\_TIMEOUT <../../de/ddf/namespaceTango.html#a3e4956ede899062bc5eed5ac841df5e2>`__
= 20000

 

const int 

`Tango::DB\_START\_PHASE\_RETRIES <../../de/ddf/namespaceTango.html#a59c7aeb94cdf416368942c459feabc66>`__
= 3

 

const int 

`Tango::DB\_TIMEOUT <../../de/ddf/namespaceTango.html#a86c45a7d5efc2c77708c639d1512d646>`__
= 13000

 

const char \*const 

`Tango::DbObjName <../../de/ddf/namespaceTango.html#a036a32581f413a3bcfb72a98def0a0b9>`__
= "database"

 

const int 

`Tango::DEFAULT\_EVENT\_PERIOD <../../de/ddf/namespaceTango.html#a129d2bcb7e86bc4770ceedd7762939c3>`__
= 1000

 

const int 

`Tango::DEFAULT\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#ae75357a2687b2f264cc1f811f887de37>`__
= 10

 

const char \*const 

`Tango::DEFAULT\_OMNI\_CONF\_FILE <../../de/ddf/namespaceTango.html#aa6e02f61c2aa84d728aac32b88bf97ec>`__
= "/etc/omniORB.cfg"

 

const int 

`Tango::DEFAULT\_POLL\_OLD\_FACTOR <../../de/ddf/namespaceTango.html#afa27b589e2b5994a0a27059613720c19>`__
= 4

 

const int 

`Tango::DEFAULT\_POLLING\_THREADS\_POOL\_SIZE <../../de/ddf/namespaceTango.html#a00b829391f3f0dedda2e2529a99928c3>`__
= 1

 

const int 

`Tango::DEFAULT\_TIMEOUT <../../de/ddf/namespaceTango.html#a72476a792a49b56f9e81ecae1200ac9c>`__
= 3200

 

const int 

`Tango::DefaultBlackBoxDepth <../../de/ddf/namespaceTango.html#a6a0017e7b8b49bf40d3e4ab5f2e2a41d>`__
= 50

 

const char \*const 

`Tango::DefaultDocUrl <../../de/ddf/namespaceTango.html#a53dfa761bdefadf3fc6ab76646e172bf>`__
= "http://www.tango-controls.org"

 

const int 

`Tango::DefaultMaxSeq <../../de/ddf/namespaceTango.html#a8257e84ebbbc07c75939779e551f9af8>`__
= 20

 

const int 

`Tango::DefaultPollRingDepth <../../de/ddf/namespaceTango.html#a8ad5d0ca81ff07ada111334b43cfd869>`__
= 10

 

const bool 

`Tango::DefaultWritAttrProp <../../de/ddf/namespaceTango.html#a9560b2deaa08619f6fbda8d581cafa72>`__
= false

 

const double 

`Tango::DELTA\_PERIODIC <../../de/ddf/namespaceTango.html#a3a8fa543b8852eadbf549c6c7ea6f4ee>`__
= 0.98

 

const int 

`Tango::DELTA\_PERIODIC\_LONG <../../de/ddf/namespaceTango.html#a0bdf3e69b11c6b5d5edfdb4a63f911b9>`__
= 100

 

const int 

`Tango::DELTA\_T <../../de/ddf/namespaceTango.html#a71d99b6666d67ef9beaf98304f850c45>`__
= 1002000000

 

const char \*const 

`Tango::DescNotSpec <../../de/ddf/namespaceTango.html#afc637002b6beb9ee21bfec6985df5889>`__
= "No description"

 

const int 

`Tango::DEV\_INTR\_THREAD\_SLEEP\_TIME <../../de/ddf/namespaceTango.html#aa3d98efd1957111718e521bf487acae1>`__
= 50

 

const char \*const 

`Tango::DEVICE\_UNLOCKED\_REASON <../../de/ddf/namespaceTango.html#a7aeabbefcf13f428c65e2ee34bd73ce8>`__
= "API\_DeviceUnlocked"

 

const char \*const 

`Tango::DevStateName <../../de/ddf/namespaceTango.html#af9b307743a569b68bb46f6bc79f893cf>`__
[]

 

const int 

`Tango::DevVersion <../../de/ddf/namespaceTango.html#a7d400cb5df81070fd9c0ea469656f9f0>`__
= 5

 

const double 

`Tango::DISCARD\_THRESHOLD <../../de/ddf/namespaceTango.html#a0ebcc7eba0f252786b8dafd5f49bea95>`__
= 0.02

 

const char \*const 

`Tango::DispUnitNotSpec <../../de/ddf/namespaceTango.html#a4f1f3e6107d45eb51dd6d5a309773d83>`__
= "No display unit"

 

const char \*const 

`Tango::DSDeviceDomain <../../de/ddf/namespaceTango.html#ad2b9c23d9d5246c836a2c425b4b6e1bb>`__
= "dserver"

 

const char \*const 

`Tango::EnvVariable <../../de/ddf/namespaceTango.html#a210b1892b97601243a4a343949345251>`__
= "TANGO\_HOST"

 

const char \*const 

`Tango::EVENT\_COMPAT <../../de/ddf/namespaceTango.html#a1385bcefaaafad1d87abf07eeb98af59>`__
= "idl"

 

const char \*const 

`Tango::EVENT\_COMPAT\_IDL5 <../../de/ddf/namespaceTango.html#a23978bc0013b2a550b37f19c453c0e2f>`__
= "idl5\_"

 

const int 

`Tango::EVENT\_COMPAT\_IDL5\_SIZE <../../de/ddf/namespaceTango.html#a6a6e46f8f1eaf33643b0138b3e73182b>`__
= 5

 

const int 

`Tango::EVENT\_HEARTBEAT\_PERIOD <../../de/ddf/namespaceTango.html#a3e398ae4d333de1ef159e763ab1500e8>`__
= 10

 

const char \*const 

`Tango::EVENT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#a6e89c689e8165e99e49832f73ecb245c>`__
= "push\_zmq\_event"

 

const int 

`Tango::EVENT\_RESUBSCRIBE\_PERIOD <../../de/ddf/namespaceTango.html#a966bd63dc204670cd22634518139c1a5>`__
= 600

 

const char \*const 

`Tango::EventName <../../de/ddf/namespaceTango.html#aba76022ad39c2bbc38b6fe99e1245b2b>`__
[]

 

const char \*const 

`Tango::FormatNotSpec <../../de/ddf/namespaceTango.html#a413a1755e5c074a8acc4efcd6ecf75c0>`__
= FormatNotSpec\_FL

 

const char \*const 

`Tango::FormatNotSpec\_FL <../../de/ddf/namespaceTango.html#ad005a1df5ed11ae4466521a0dc93c529>`__
= "%6.2f"

 

const char \*const 

`Tango::FormatNotSpec\_INT <../../de/ddf/namespaceTango.html#a713bec3ecfb92d7bf1e874d0a0a76460>`__
= "%d"

 

const char \*const 

`Tango::FormatNotSpec\_STR <../../de/ddf/namespaceTango.html#a76d5ff904af5bbfe50ac6d70ec891fff>`__
= "%s"

 

const char \*const 

`Tango::HEARTBEAT <../../de/ddf/namespaceTango.html#a1c0fa779fadf42ac0833b68f3b7e78bf>`__
= "Event heartbeat"

 

const char \*const 

`Tango::HEARTBEAT\_EVENT\_NAME <../../de/ddf/namespaceTango.html#af81944eafbad16a35007f5cd5749db75>`__
= "heartbeat"

 

const char \*const 

`Tango::HEARTBEAT\_METHOD\_NAME <../../de/ddf/namespaceTango.html#ac9df8e7375815227c373e65fe07151c2>`__
= "push\_heartbeat\_event"

 

const char \*const 

`Tango::InitialOutput <../../de/ddf/namespaceTango.html#afac56d33cd8fe564b28ff51a92cce28f>`__
= "Initial Output"

 

const size\_t 

`Tango::kDefaultRollingThreshold <../../de/ddf/namespaceTango.html#a68d9866a76c56521e564b3eee8d34a62>`__
= 20 \* 1024

 

const char \*const 

`Tango::kLogTargetConsole <../../de/ddf/namespaceTango.html#ad2107b91b06192b71648e74670638f86>`__
= "console"

 

const char \*const 

`Tango::kLogTargetDevice <../../de/ddf/namespaceTango.html#a2acbafeec497c249467ae813dad02e57>`__
= "device"

 

const char \*const 

`Tango::kLogTargetFile <../../de/ddf/namespaceTango.html#a2357fa42ac2cfc2e8ab530e5c7d876a4>`__
= "file"

 

const char \*const 

`Tango::kLogTargetSep <../../de/ddf/namespaceTango.html#ac960726f00862579dd09e6f792bfd1c6>`__
= "::"

 

const size\_t 

`Tango::kMaxRollingThreshold <../../de/ddf/namespaceTango.html#a1988f359e5761c26c9c6b340e5186265>`__
= 1024 \* 1024

 

const size\_t 

`Tango::kMinRollingThreshold <../../de/ddf/namespaceTango.html#a6a5a347a440c989db5eca047b8bc2b6e>`__
= 500

 

const char \*const 

`Tango::LabelNotSpec <../../de/ddf/namespaceTango.html#aa03500f78edeb91bf53eea42ef9b34ee>`__
= "No label"

 

const char \*const 

`Tango::LOCAL\_POLL\_REQUEST <../../de/ddf/namespaceTango.html#a35ae382f171e3cc895c1b8091495bad8>`__
= "\_local"

 

const int 

`Tango::LOCAL\_REQUEST\_STR\_SIZE <../../de/ddf/namespaceTango.html#a943b554c8b51645b3ffe4f984317af69>`__
= 6

 

const int 

`Tango::MAX\_DATA\_ELT\_IN\_PIPE\_BLOB <../../de/ddf/namespaceTango.html#af39ca888bd7f44ad3c7c0600920f4344>`__
= 20

 

const char \*const 

`Tango::MAX\_GIOP\_PER\_SERVER <../../de/ddf/namespaceTango.html#ac677a7f571cd285c98d5ed0e6978a87b>`__
= "128"

 

const int 

`Tango::MAX\_SOCKET\_SUB <../../de/ddf/namespaceTango.html#a72f4218c4dd771081c848699c6c10b96>`__
= 10

 

const char \*const 

`Tango::MAX\_TRANSFER\_SIZE <../../de/ddf/namespaceTango.html#aed016c0842de7eb43bd60e4beae64333>`__
= "268435456"

 

const int 

`Tango::MaxDevPropLength <../../de/ddf/namespaceTango.html#a9fb19c21a4f0589f66a53f9e884cdab5>`__
= 255

 

const unsigned int 

`Tango::MaxServerNameLength <../../de/ddf/namespaceTango.html#a3e719a41954f2ade54cc857c4c08de8a>`__
= 255

 

const int 

`Tango::MCAST\_HOPS <../../de/ddf/namespaceTango.html#a98def3b6214d3a9cc86253fc03e8b6df>`__
= 5

 

const char \*const 

`Tango::MCAST\_PROT <../../de/ddf/namespaceTango.html#a7f5b4edcb569c81b588e41fa9e3955e3>`__
= "epgm://"

 

const char \*const 

`Tango::MemAttrPropName <../../de/ddf/namespaceTango.html#aa2c8d63d609e4b4812d28a9da220a804>`__
= "\_\_value"

 

const char \*const 

`Tango::MemNotUsed <../../de/ddf/namespaceTango.html#a0f48b35f3b59827d6f3ebd0cf5db277e>`__
= "Not used yet"

 

const char \*const 

`Tango::MessBoxTitle <../../de/ddf/namespaceTango.html#aa3c6540af05d1f19c28d5ae3a655abe3>`__
= "Tango Device Server"

 

const int 

`Tango::MIN\_DELTA\_WORK <../../de/ddf/namespaceTango.html#af982d7c45093855da559e24390399d74>`__
= 20000

 

const int 

`Tango::MIN\_IDL\_CONF5 <../../de/ddf/namespaceTango.html#a011c4a515d3ccb2598f8056fe7547c2a>`__
= 5

 

const int 

`Tango::MIN\_IDL\_DEV\_INTR <../../de/ddf/namespaceTango.html#afff5df79f04c351d63cd703c68e1c6b0>`__
= 5

 

const int 

`Tango::MIN\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#a9925dc4036809c0c82c6faa04715ee0c>`__
= 2

 

const int 

`Tango::MIN\_POLL\_PERIOD <../../de/ddf/namespaceTango.html#a13e2f637722da725edd0291910561a5e>`__
= 5

 

const int 

`Tango::NARROW\_CLNT\_TIMEOUT <../../de/ddf/namespaceTango.html#ad922e360c668c83ea8123b7ac1591874>`__
= 100

 

const char \*const 

`Tango::NoClass <../../de/ddf/namespaceTango.html#afb100d0df5cc0a0573218b0d37a6bd4f>`__
= "noclass"

 

const char \*const 

`Tango::NotANumber <../../de/ddf/namespaceTango.html#a986c54e23d75257917fe8cae1a79c234>`__
= "NaN"

 

const char \*const 

`Tango::NOTIFD\_CHANNEL <../../de/ddf/namespaceTango.html#a6b13c6213547e62515edfdf8bd2907bc>`__
= "notifd\_channel"

 

const char \*const 

`Tango::NotSet <../../de/ddf/namespaceTango.html#ae64ef651969a4f0a99205c23085a3a7f>`__
= "Uninitialised"

 

const int 

`Tango::ONE\_SECOND <../../de/ddf/namespaceTango.html#ae174df1c78e4bd2bc2c2a74371b58754>`__
= 1000000

 

const int 

`Tango::PGM\_IVL <../../de/ddf/namespaceTango.html#aef72f4f74b319ee73ff550b0d697c058>`__
= 20 \* 1000

 

const int 

`Tango::PGM\_RATE <../../de/ddf/namespaceTango.html#abb7acc6cb1454cbca0f7aa05342d8571>`__
= 80 \* 1024

 

const int 

`Tango::POLL\_LOOP\_NB <../../de/ddf/namespaceTango.html#a34f9803acabf31717db66602986603d7>`__
= 500

 

const char \*const 

`Tango::PollAttribute <../../de/ddf/namespaceTango.html#a9b54136531ae9c9950cc188e20997e5e>`__
= "attribute"

 

const char \*const 

`Tango::PollCommand <../../de/ddf/namespaceTango.html#a7a3c5bbd36efa6c2d482917570ade6ff>`__
= "command"

 

const int 

`Tango::PUB\_HWM <../../de/ddf/namespaceTango.html#a82d3d32737d2d1e086d995fda3e746d9>`__
= 1000

 

const int 

`Tango::RECONNECTION\_DELAY <../../de/ddf/namespaceTango.html#a1218bbe047a7b8663c2ad2a48d911581>`__
= 1000

 

const char \*const 

`Tango::ResNotDefined <../../de/ddf/namespaceTango.html#afc8bf12ed1c936bfae762578dcc48e73>`__
= "0"

 

const char \*const 

`Tango::RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__
= "Not defined"

 

const char \*const 

`Tango::RootAttrPropName <../../de/ddf/namespaceTango.html#a7fc39c748986b54ea6c3100e22ac6931>`__
= "\_\_root\_att"

 

const char \*const 

`Tango::SCALAR\_PIPE <../../de/ddf/namespaceTango.html#a30435ff467857bda6eb59245667a451f>`__
= "Scalar"

 

const char \*const 

`Tango::SERVICE\_PROP\_NAME <../../de/ddf/namespaceTango.html#a580b13677820a4ff01ab7837909b641f>`__
= "Services"

 

const char \*const 

`Tango::StatusNotSet <../../de/ddf/namespaceTango.html#ae1851ebaa91cbf1df9317e3f47f6190a>`__
= "Not initialised"

 

const char \*const 

`Tango::StdUnitNotSpec <../../de/ddf/namespaceTango.html#af3e38fec687ce6e48d29e7f15d48b5b2>`__
= "No standard unit"

 

const int 

`Tango::SUB\_HWM <../../de/ddf/namespaceTango.html#a1ce854fb3e526b633b07d2014ad5cd69>`__
= 1000

 

const int 

`Tango::SUB\_SEND\_HWM <../../de/ddf/namespaceTango.html#a99ca4b41d1558e732a575815fa0aa505>`__
= 10000

 

const int 

`Tango::TANGO\_FLOAT\_PRECISION <../../de/ddf/namespaceTango.html#a6d108418692d852f68842cf1ce7c576b>`__
= 15

 

const char \*const 

`Tango::TANGO\_PY\_MOD\_NAME <../../de/ddf/namespaceTango.html#aef7da385ddf3f46afe79163a0f666795>`__
= "\_PyTango.pyd"

 

const char \*const 

`Tango::TANGO\_RC\_FILE <../../de/ddf/namespaceTango.html#a2774bda98bacb6fc74177152af565833>`__
= "/etc/tangorc"

 

const char \*const 

`Tango::TangoHostNotSet <../../de/ddf/namespaceTango.html#a7f2387175232a41bb05aebf49f49d49d>`__
= "Undef"

 

const int 

`Tango::TG\_IMP\_MINOR\_DEVFAILED <../../de/ddf/namespaceTango.html#a6d15f636ee420576140717db7ca83d62>`__
= 11

 

const int 

`Tango::TG\_IMP\_MINOR\_NON\_DEVFAILED <../../de/ddf/namespaceTango.html#ab093f2ad96560b13cb4648c148f23bc4>`__
= 12

 

const int 

`Tango::TG\_IMP\_MINOR\_TO <../../de/ddf/namespaceTango.html#af2e652825c984d817a22f92efac11a5b>`__
= 10

 

const char \*const 

`Tango::TG\_LOCAL\_HOST <../../de/ddf/namespaceTango.html#ab5eb9175281bdc695bcfcc85b43311f2>`__
= "localhost"

 

const char \*const 

`Tango::TgLibMajorVers <../../de/ddf/namespaceTango.html#ae7168d398e7627f1083c3b090427fb89>`__
=
`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__\ (`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__)

 

const char \*const 

`Tango::TgLibVers <../../de/ddf/namespaceTango.html#a04517655cec6d73a7bec0989a59780cd>`__
=
`XTBS <../../d4/d13/tango__const_8h.html#a88e47bbac6db5d5f19eb30896129765c>`__\ (`TANGO\_VERSION\_MAJOR.TANGO\_VERSION\_MINOR.TANGO\_VERSION\_PATCH <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__)

 

const int 

`Tango::TgLibVersNb <../../de/ddf/namespaceTango.html#a57f955df970c64f91e641f08ad8a8e22>`__
=
`TANGO\_VERSION\_MAJOR <../../d4/d13/tango__const_8h.html#a0d461e2c51f30bb4bd9c5bfc0ddd0d95>`__\ \*10000
+
`TANGO\_VERSION\_MINOR <../../d4/d13/tango__const_8h.html#a4e5ff4bd2809f455d91c21c9b7d0dae6>`__\ \*100
+
`TANGO\_VERSION\_PATCH <../../d4/d13/tango__const_8h.html#afe8ee17b8359ff561a5372c15114d465>`__

 

const int 

`Tango::TIME\_HEARTBEAT <../../de/ddf/namespaceTango.html#a1dc91cb42cfae6d95865a79bcacf5659>`__
= 2000

 

const char \*const 

`Tango::UnitNotSpec <../../de/ddf/namespaceTango.html#af12c56283ff5db515a61f2a1bfe2be74>`__
= ""

 

const char \*const 

`Tango::USER\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#a5cfdbd082b1b9c1ec5494903b342300c>`__
= ".tangorc"

 

const char \*const 

`Tango::WINDOWS\_ENV\_VAR\_FILE <../../de/ddf/namespaceTango.html#afe46eae3cff24b7e2916d9ea8b477135>`__
= "tangorc"

 

const char \*const 

`Tango::WindowsEnvVariable <../../de/ddf/namespaceTango.html#a03f880f9471b49474dfadd428ab11c53>`__
= "TANGO\_ROOT"

 

const int 

`Tango::ZMQ\_EVENT\_PROT\_VERSION <../../de/ddf/namespaceTango.html#a43f21283b8b61819a1fa7328a2a56ce4>`__
= 1

 

Macro Definition Documentation
------------------------------

+------------------------------+-----+-----+-------------+
| #define RANGES\_TYPE2CONST   | (   |     | type,       |
+------------------------------+-----+-----+-------------+
|                              |     |     | constant    |
+------------------------------+-----+-----+-------------+
|                              | )   |     |             |
+------------------------------+-----+-----+-------------+

**Value:**

template <> \\

struct ranges\_type2const<type> \\

{ \\

static
`CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
enu; \\

TANGO\_CXX11\_ABI static string str; \\

};
`\\ <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__

`CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__
ranges\_type2const<type>::enu = constant; \\

TANGO\_CXX11\_ABI string ranges\_type2const<type>::str = #type; \\

template<> \\

struct ranges\_const2type<Tango::constant> \\

{ \\

typedef type Type; \\

TANGO\_CXX11\_ABI static string str; \\

}; \\

TANGO\_CXX11\_ABI string ranges\_const2type<Tango::constant>::str =
#type;

`Tango::CmdArgType <../../de/ddf/namespaceTango.html#a86ed7ac243c13a7813f08c3b899af170>`__

CmdArgType

**Definition:** tango\_const.h:903

+-----------------------------------------------------------------------------------------------------------+
| #define TANGO\_BASE\_CLASS   \ `Tango::Device\_5Impl <../../d5/d94/classTango_1_1Device__5Impl.html>`__   |
+-----------------------------------------------------------------------------------------------------------+

+-------------------------------------+
| #define TANGO\_VERSION\_MAJOR   9   |
+-------------------------------------+

+-------------------------------------+
| #define TANGO\_VERSION\_MINOR   2   |
+-------------------------------------+

+-------------------------------------+
| #define TANGO\_VERSION\_PATCH   5   |
+-------------------------------------+

+---------------+-----+-----+-----+-----+---------+
| #define TBS   | (   |     | s   | )   |    #s   |
+---------------+-----+-----+-----+-----+---------+

+----------------+-----+-----+-----+-----+-----------------------------------------------------------------------------------------+
| #define XTBS   | (   |     | s   | )   |    `TBS <../../d4/d13/tango__const_8h.html#aff6d5e6e29fea1b22c39408543862a08>`__\ (s)   |
+----------------+-----+-----+-----+-----+-----------------------------------------------------------------------------------------+

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `tango\_const.h <../../d4/d13/tango__const_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../dd/d73/tango__const_8h__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
