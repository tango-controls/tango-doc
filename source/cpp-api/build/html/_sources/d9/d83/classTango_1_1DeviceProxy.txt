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
members <../../da/dd1/classTango_1_1DeviceProxy-members.html>`__

Tango::DeviceProxy Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

High level class which provides the client with an easy-to-use interface
to TANGO devices.
`More... <../../d9/d83/classTango_1_1DeviceProxy.html#details>`__

Inheritance diagram for Tango::DeviceProxy:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for Tango::DeviceProxy:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

 

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
(string
&\ `name <../../d9/d83/classTango_1_1DeviceProxy.html#a4f628cc35233a6269f22ac50033dce42>`__,
CORBA::ORB \*orb=NULL)

 

| Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
instance. `More... <#a2e4fa0ea2f3c016c47d31a788911a6b1>`__

 

 

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a16a52119368b7c0b9473f2059b9c77a3>`__
(const char
\*\ `name <../../d9/d83/classTango_1_1DeviceProxy.html#a4f628cc35233a6269f22ac50033dce42>`__,
CORBA::ORB \*orb=NULL)

 

| Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
instance. `More... <#a16a52119368b7c0b9473f2059b9c77a3>`__

 

Miscellaneous methods

virtual
`DeviceInfo <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__
const & 

`info <../../d9/d83/classTango_1_1DeviceProxy.html#a47c570748174ff9cb4f4d0c7431dd5d3>`__
()

 

| Get device info. `More... <#a47c570748174ff9cb4f4d0c7431dd5d3>`__

 

virtual DevState 

`state <../../d9/d83/classTango_1_1DeviceProxy.html#ac173ba95be20afec6d5e836cddc98ce9>`__
()

 

| Get device state. `More... <#ac173ba95be20afec6d5e836cddc98ce9>`__

 

virtual string 

`status <../../d9/d83/classTango_1_1DeviceProxy.html#a2ffd167a049b60027c4fc8e529f844c9>`__
()

 

| Get device status. `More... <#a2ffd167a049b60027c4fc8e529f844c9>`__

 

virtual int 

`ping <../../d9/d83/classTango_1_1DeviceProxy.html#a326eda7fff8a36cfcc999fec9552625d>`__
()

 

| Ping a device. `More... <#a326eda7fff8a36cfcc999fec9552625d>`__

 

virtual vector< string > \* 

`black\_box <../../d9/d83/classTango_1_1DeviceProxy.html#a11b7d307b87a97d0196b8133b612b16a>`__
(int nb)

 

| Get device black box content.
`More... <#a11b7d307b87a97d0196b8133b612b16a>`__

 

virtual string 

`name <../../d9/d83/classTango_1_1DeviceProxy.html#a4f628cc35233a6269f22ac50033dce42>`__
()

 

| Return the device name (from the device itself)
`More... <#a4f628cc35233a6269f22ac50033dce42>`__

 

virtual string 

`adm\_name <../../d9/d83/classTango_1_1DeviceProxy.html#a226a137b3f763634d2d086abb96895b8>`__
()

 

| Return the administrator device name.
`More... <#a226a137b3f763634d2d086abb96895b8>`__

 

virtual string 

`dev\_name <../../d9/d83/classTango_1_1DeviceProxy.html#ab15752441b18db41acd47930af8d2fa7>`__
()

 

| Return the device name as it is stored locally.
`More... <#ab15752441b18db41acd47930af8d2fa7>`__

 

virtual string 

`description <../../d9/d83/classTango_1_1DeviceProxy.html#a34a3c96b2fa13b809f8b2818958bfc1b>`__
()

 

| Returns the device description as a string.
`More... <#a34a3c96b2fa13b809f8b2818958bfc1b>`__

 

virtual string 

`alias <../../d9/d83/classTango_1_1DeviceProxy.html#af7055281741adb8aa737e0b11d55f66c>`__
()

 

| Returns device alias. `More... <#af7055281741adb8aa737e0b11d55f66c>`__

 

virtual
`DbDevImportInfo <../../d0/d4b/classTango_1_1DbDevImportInfo.html>`__ 

`import\_info <../../d9/d83/classTango_1_1DeviceProxy.html#a5746c63f1c1e602ce2a945337cfc441e>`__
()

 

| Query the device for import info from the database.
`More... <#a5746c63f1c1e602ce2a945337cfc441e>`__

 

virtual int 

`get\_tango\_lib\_version <../../d9/d83/classTango_1_1DeviceProxy.html#a95c99610ef6c9ba172a0b3fcb8f2f6f8>`__
()

 

| Get device `Tango <../../de/ddf/namespaceTango.html>`__ lib version.
`More... <#a95c99610ef6c9ba172a0b3fcb8f2f6f8>`__

 

Synchronous command related methods

virtual `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ 

`command\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a8d12bb3833933c404a5b16e1793d797b>`__
(string cmd\_name)

 

| Query the device for single command information.
`More... <#a8d12bb3833933c404a5b16e1793d797b>`__

 

virtual
`CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__
\* 

`command\_list\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a851a4e738873aaa58b2bfb79b17e875d>`__
()

 

| Query the device for all commands information.
`More... <#a851a4e738873aaa58b2bfb79b17e875d>`__

 

virtual vector< string > \* 

`get\_command\_list <../../d9/d83/classTango_1_1DeviceProxy.html#ad42c9ee0ce868bb7f54b10f7d4cea2f9>`__
()

 

| Query all commands name.
`More... <#ad42c9ee0ce868bb7f54b10f7d4cea2f9>`__

 

virtual `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ 

`get\_command\_config <../../d9/d83/classTango_1_1DeviceProxy.html#a8e81a9cdaba63b632f47acd62936ad3b>`__
(const string &cmd\_name)

 

| Get command information for a single command.
`More... <#a8e81a9cdaba63b632f47acd62936ad3b>`__

 

virtual
`CommandInfoList <../../d1/d45/group__Client.html#ga702913bccb1c2d427d7a6f046602d657>`__
\* 

`get\_command\_config <../../d9/d83/classTango_1_1DeviceProxy.html#ab9d325e57ea939812cc3adb4c843a51b>`__
(vector< string > &cmd\_names)

 

| Get information for a set of commands.
`More... <#ab9d325e57ea939812cc3adb4c843a51b>`__

 

| virtual vector
|  <
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
> \* 

`command\_history <../../d9/d83/classTango_1_1DeviceProxy.html#ab1c671d97be277bdf875088693ba6eb1>`__
(string &cmd\_name, int depth)

 

| Retrieve command history from polling buffer.
`More... <#ab1c671d97be277bdf875088693ba6eb1>`__

 

| virtual vector
|  <
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
> \* 

`command\_history <../../d9/d83/classTango_1_1DeviceProxy.html#a5c362996e56c723d7d2959a974b9aacc>`__
(const char \*cmd\_name, int depth)

 

| Retrieve command history from polling buffer.
`More... <#a5c362996e56c723d7d2959a974b9aacc>`__

 

Synchronous attribute related methods

virtual
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ 

`attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
(string att\_name)

 

| Query the device for attribute information.
`More... <#a86d45a2c6d13ceff780b96854a095920>`__

 

virtual
`AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__
\* 

`attribute\_list\_query <../../d9/d83/classTango_1_1DeviceProxy.html#af30ae974b0dd6ea2e9c7a5dddbcc3fc9>`__
()

 

| Query the device for information on all attributes.
`More... <#af30ae974b0dd6ea2e9c7a5dddbcc3fc9>`__

 

virtual
`AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__
\* 

`attribute\_list\_query\_ex <../../d9/d83/classTango_1_1DeviceProxy.html#a379c04c3a3bfabe7324cda9c3d7c47eb>`__
()

 

| Query the device for information on all attributes.
`More... <#a379c04c3a3bfabe7324cda9c3d7c47eb>`__

 

virtual vector< string > \* 

`get\_attribute\_list <../../d9/d83/classTango_1_1DeviceProxy.html#a255baafbbd2312af92b53a55d3d73b41>`__
()

 

| Query all attributes name.
`More... <#a255baafbbd2312af92b53a55d3d73b41>`__

 

virtual
`AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__
\* 

`get\_attribute\_config <../../d9/d83/classTango_1_1DeviceProxy.html#a865b4c2fea05b06c6dded1de7174b5a2>`__
(vector< string > &att\_names)

 

| Get attribute configuration for a list of attributes.
`More... <#a865b4c2fea05b06c6dded1de7174b5a2>`__

 

virtual
`AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__
\* 

`get\_attribute\_config\_ex <../../d9/d83/classTango_1_1DeviceProxy.html#adbe7b3df29ada6c0e924f09a2537b8a9>`__
(vector< string > &att\_names)

 

| Get attribute configuration (extended) for a list of attributes.
`More... <#adbe7b3df29ada6c0e924f09a2537b8a9>`__

 

virtual
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__ 

`get\_attribute\_config <../../d9/d83/classTango_1_1DeviceProxy.html#a8f82994f65d0093c54f8c9183e0a6a1d>`__
(const string &att\_name)

 

| Get attribute configuration (extended) for a single attribute.
`More... <#a8f82994f65d0093c54f8c9183e0a6a1d>`__

 

virtual void 

`set\_attribute\_config <../../d9/d83/classTango_1_1DeviceProxy.html#ac729ab3d20dbebaf34ab523307770a08>`__
(`AttributeInfoList <../../de/ddf/namespaceTango.html#a87d0e8cd391e8df4af01f2a2cd66b2d3>`__
&atts)

 

| Set attribute configuration.
`More... <#ac729ab3d20dbebaf34ab523307770a08>`__

 

virtual void 

`set\_attribute\_config <../../d9/d83/classTango_1_1DeviceProxy.html#aa9f8bd287abfbcae5e47fe7c8924ea70>`__
(`AttributeInfoListEx <../../d1/d45/group__Client.html#ga7175e05437edf640b8e555d1a601335c>`__
&atts)

 

| Set extended attribute configuration.
`More... <#aa9f8bd287abfbcae5e47fe7c8924ea70>`__

 

virtual vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
\* 

`read\_attributes <../../d9/d83/classTango_1_1DeviceProxy.html#a427b1c62ac2eb6f2607c7dfe5de2f59c>`__
(vector< string > &att\_names)

 

| Read the list of specified attributes.
`More... <#a427b1c62ac2eb6f2607c7dfe5de2f59c>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ 

`read\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a7c9bf0a749418ec33ccaf5759d35abdb>`__
(string &att\_name)

 

| Read a single attribute.
`More... <#a7c9bf0a749418ec33ccaf5759d35abdb>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ 

`read\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a018166664ab04036946d69807a0a0ef8>`__
(const char \*att\_name)

 

| Read the list of specified attributes.
`More... <#a018166664ab04036946d69807a0a0ef8>`__

 

virtual void 

`write\_attributes <../../d9/d83/classTango_1_1DeviceProxy.html#aaab2ae4e4035fe95f2562613a9a94f88>`__
(vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&attr\_in)

 

| Write the specified attributes.
`More... <#aaab2ae4e4035fe95f2562613a9a94f88>`__

 

virtual void 

`write\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a481900c72e89964b6158b9d07b372f96>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&attr\_in)

 

| Write a single attribute.
`More... <#a481900c72e89964b6158b9d07b372f96>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ 

`write\_read\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#aac5658edff479352961318f3523d6a5b>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&attr\_in)

 

| Write and read a single attribute.
`More... <#aac5658edff479352961318f3523d6a5b>`__

 

virtual vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
\* 

`write\_read\_attributes <../../d9/d83/classTango_1_1DeviceProxy.html#a5a0e4a6186704960d061eb5cc53331ad>`__
(vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&attr\_in, vector< string > &r\_names)

 

| Write and read attribute(s)
`More... <#a5a0e4a6186704960d061eb5cc53331ad>`__

 

| virtual vector
|  <
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
> \* 

`attribute\_history <../../d9/d83/classTango_1_1DeviceProxy.html#a65c474df2233e1e77932ffeec951ebd4>`__
(string &att\_name, int depth)

 

| Retrieve attribute history from polling buffer.
`More... <#a65c474df2233e1e77932ffeec951ebd4>`__

 

| virtual vector
|  <
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
> \* 

`attribute\_history <../../d9/d83/classTango_1_1DeviceProxy.html#a50002daad4dc97b0651680e5f2b7a655>`__
(const char \*att\_name, int depth)

 

| Retrieve attribute history from polling buffer.
`More... <#a50002daad4dc97b0651680e5f2b7a655>`__

 

Pipe related methods

virtual
`PipeInfoList <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__
\* 

`get\_pipe\_config <../../d9/d83/classTango_1_1DeviceProxy.html#a8f7184260e935f8f299a90755e328a8f>`__
(vector< string > &pipe\_names)

 

| Get pipe configuration for a list of pipes.
`More... <#a8f7184260e935f8f299a90755e328a8f>`__

 

virtual `PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__ 

`get\_pipe\_config <../../d9/d83/classTango_1_1DeviceProxy.html#a52a28d42e973f478417f14ca17fef85f>`__
(const string &pipe\_name)

 

| Get pipe configuration for a single pipe.
`More... <#a52a28d42e973f478417f14ca17fef85f>`__

 

virtual void 

`set\_pipe\_config <../../d9/d83/classTango_1_1DeviceProxy.html#af3d0074df73ed0eb8512a88e98c0e053>`__
(`PipeInfoList <../../de/ddf/namespaceTango.html#a40adbc36986b3444fcde63126e4a011e>`__
&pipes)

 

| Set pipe configuration.
`More... <#af3d0074df73ed0eb8512a88e98c0e053>`__

 

virtual vector< string > \* 

`get\_pipe\_list <../../d9/d83/classTango_1_1DeviceProxy.html#a675b8134e200fdd9e790597fc8e8ec36>`__
()

 

| Query all pipes name. `More... <#a675b8134e200fdd9e790597fc8e8ec36>`__

 

virtual `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ 

`read\_pipe <../../d9/d83/classTango_1_1DeviceProxy.html#ac9074138f6b8479bfa03258ed1ff86bc>`__
(const string &pipe\_name)

 

| Read a pipe. `More... <#ac9074138f6b8479bfa03258ed1ff86bc>`__

 

virtual void 

`write\_pipe <../../d9/d83/classTango_1_1DeviceProxy.html#a33bea1b0b93b394c47cf8a933f42f801>`__
(`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
&pipe\_data)

 

| Write a pipe. `More... <#a33bea1b0b93b394c47cf8a933f42f801>`__

 

virtual `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ 

`write\_read\_pipe <../../d9/d83/classTango_1_1DeviceProxy.html#a3720e15a6cddb1f5ed4ad24f59b3abf7>`__
(`DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__
&pipe\_data)

 

| Write then read a pipe.
`More... <#a3720e15a6cddb1f5ed4ad24f59b3abf7>`__

 

Asynchronous attribute related methods

virtual long 

`read\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a0d17d64c5dc3be505edf593527a7c88e>`__
(string &att\_name)

 

| Read a single attribute asynchronously.
`More... <#a0d17d64c5dc3be505edf593527a7c88e>`__

 

virtual long 

`read\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a2152d80457a5fc501be7a3d7f4127b90>`__
(const char \*att\_name)

 

| Read a single attribute asynchronously.
`More... <#a2152d80457a5fc501be7a3d7f4127b90>`__

 

virtual long 

`read\_attributes\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a3f2be79d1e7e925814b1920077c51de5>`__
(vector< string > &att\_names)

 

| Read asynchronously alist of attributes.
`More... <#a3f2be79d1e7e925814b1920077c51de5>`__

 

virtual vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
\* 

`read\_attributes\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#ad604e7b59d68d08e6b14068503e1677f>`__
(long id)

 

| Check if an asynchronous read\_attributes call is arrived.
`More... <#ad604e7b59d68d08e6b14068503e1677f>`__

 

virtual vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
\* 

`read\_attributes\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#a1840d3b20a28ea3bda5cbff7f6b3dac3>`__
(long id, long timeout)

 

| Check if an asynchronous read\_attributes call is arrived (with
timeout) `More... <#a1840d3b20a28ea3bda5cbff7f6b3dac3>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\* 

`read\_attribute\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#ad4e6e92f4e83f836e9adfab7e937d269>`__
(long id)

 

| Check if an asynchronous read\_attribute (single attribute) call is
arrived. `More... <#ad4e6e92f4e83f836e9adfab7e937d269>`__

 

virtual
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\* 

`read\_attribute\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#a4a742508785623a198dd38f893854321>`__
(long id, long timeout)

 

| Check if an asynchronous read\_attribute (single attribute) call is
arrived (with timeout) `More... <#a4a742508785623a198dd38f893854321>`__

 

virtual long 

`write\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a33a6bcf336aa1a48a948dabbea86505a>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&argin)

 

| Write a single attribute asynchronously.
`More... <#a33a6bcf336aa1a48a948dabbea86505a>`__

 

virtual long 

`write\_attributes\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a869c985564157acb69bd768f7e9e95a3>`__
(vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&argin)

 

| Write asynchronously alist of attributes.
`More... <#a869c985564157acb69bd768f7e9e95a3>`__

 

virtual void 

`write\_attribute\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#a3fb6b9689379712d6e3b59aaed264d38>`__
(long id)

 

| Check if the answer of one asynchronous write\_attribute (single
attribute) call is arrived.
`More... <#a3fb6b9689379712d6e3b59aaed264d38>`__

 

virtual void 

`write\_attribute\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#ab8349ba8a4803cfcdbb1ae0f370f55fd>`__
(long id, long timeout)

 

| Check if the answer of one asynchronous write\_attribute call (single
attribute) is arrived with timeout.
`More... <#ab8349ba8a4803cfcdbb1ae0f370f55fd>`__

 

virtual void 

`write\_attributes\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#a9013e39887c772bb93052dac53e004c8>`__
(long id)

 

| Check if the answer of one asynchronous write\_attributes call is
arrived. `More... <#a9013e39887c772bb93052dac53e004c8>`__

 

virtual void 

`write\_attributes\_reply <../../d9/d83/classTango_1_1DeviceProxy.html#a7d10446a601fcaa1297c160745d83f8b>`__
(long id, long timeout)

 

| Check if the answer of one asynchronous write\_attributes call is
arrived with timeout. `More... <#a7d10446a601fcaa1297c160745d83f8b>`__

 

virtual void 

`read\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#ac7c591f4abe2a12667704b4911d49678>`__
(const char \*att\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Read a single attribute asynchronously in callback model.
`More... <#ac7c591f4abe2a12667704b4911d49678>`__

 

virtual void 

`read\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a76274245067a3bf14a2a897e1952ebc6>`__
(string &att\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Read a single attribute asynchronously in callback model.
`More... <#a76274245067a3bf14a2a897e1952ebc6>`__

 

virtual void 

`read\_attributes\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a235632165dcbeb1528b6993133630ad8>`__
(vector< string > &att\_names,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Read asynchronously in callback model a list of attributes.
`More... <#a235632165dcbeb1528b6993133630ad8>`__

 

virtual void 

`write\_attribute\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#ac41de9fee354be77cbfd76df056e05dd>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
&argin, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Write asynchronously in callback model a single attribute.
`More... <#ac41de9fee354be77cbfd76df056e05dd>`__

 

virtual void 

`write\_attributes\_asynch <../../d9/d83/classTango_1_1DeviceProxy.html#a59d6fcbc09facf6c17a8650498a433bf>`__
(vector<
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ >
&argin, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Write asynchronously in callback model a list of attributes.
`More... <#a59d6fcbc09facf6c17a8650498a433bf>`__

 

Asynchronous related methods

virtual long 

`pending\_asynch\_call <../../d9/d83/classTango_1_1DeviceProxy.html#a9ff908df6f1663a79fd589c87f967094>`__
(`asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__
req)

 

| Get pending asynchronous request number.
`More... <#a9ff908df6f1663a79fd589c87f967094>`__

 

Polling related methods

virtual bool 

`is\_command\_polled <../../d9/d83/classTango_1_1DeviceProxy.html#a5a81fd1191d15e466f0035202e901085>`__
(string &cmd\_name)

 

| Check if a command is polled.
`More... <#a5a81fd1191d15e466f0035202e901085>`__

 

virtual bool 

`is\_command\_polled <../../d9/d83/classTango_1_1DeviceProxy.html#a19f9fb092c6dafdd7e7326feae8d392f>`__
(const char \*cmd\_name)

 

| Check if a command is polled.
`More... <#a19f9fb092c6dafdd7e7326feae8d392f>`__

 

virtual bool 

`is\_attribute\_polled <../../d9/d83/classTango_1_1DeviceProxy.html#ad58561f9af43929f58f962fc5443840b>`__
(string &att\_name)

 

| Check if one attribute is polled.
`More... <#ad58561f9af43929f58f962fc5443840b>`__

 

virtual bool 

`is\_attribute\_polled <../../d9/d83/classTango_1_1DeviceProxy.html#af84d3df1d23560071a23fae661747b11>`__
(const char \*att\_name)

 

| Check if one attribute is polled.
`More... <#af84d3df1d23560071a23fae661747b11>`__

 

virtual int 

`get\_command\_poll\_period <../../d9/d83/classTango_1_1DeviceProxy.html#a9cf011dbc347ce8b2b3bd03014451ca5>`__
(string &cmd\_name)

 

| Get command polling period.
`More... <#a9cf011dbc347ce8b2b3bd03014451ca5>`__

 

virtual int 

`get\_command\_poll\_period <../../d9/d83/classTango_1_1DeviceProxy.html#a8090ccc6ceb0e1b12beeece35d363060>`__
(const char \*cmd\_name)

 

| Get command polling period.
`More... <#a8090ccc6ceb0e1b12beeece35d363060>`__

 

virtual int 

`get\_attribute\_poll\_period <../../d9/d83/classTango_1_1DeviceProxy.html#a24b64bafcec21587aa2b691f5b77ba27>`__
(string &att\_name)

 

| Get attribute polling period.
`More... <#a24b64bafcec21587aa2b691f5b77ba27>`__

 

virtual int 

`get\_attribute\_poll\_period <../../d9/d83/classTango_1_1DeviceProxy.html#ae9da824d70061b4879d5b079785b48da>`__
(const char \*att\_name)

 

| Get attribute polling period.
`More... <#ae9da824d70061b4879d5b079785b48da>`__

 

virtual vector< string > \* 

`polling\_status <../../d9/d83/classTango_1_1DeviceProxy.html#a588c2d243bd52435283851f01b93ffcd>`__
()

 

| Get polling status. `More... <#a588c2d243bd52435283851f01b93ffcd>`__

 

virtual void 

`poll\_command <../../d9/d83/classTango_1_1DeviceProxy.html#ac89e6b7452f18ae0ad62746fb8eaa72e>`__
(string &cmd\_name, int polling\_period)

 

| Poll a command. `More... <#ac89e6b7452f18ae0ad62746fb8eaa72e>`__

 

virtual void 

`poll\_command <../../d9/d83/classTango_1_1DeviceProxy.html#acafadb30994e2433e5da0d317e5032a5>`__
(const char \*cmd\_name, int polling\_period)

 

| Poll a command. `More... <#acafadb30994e2433e5da0d317e5032a5>`__

 

virtual void 

`poll\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a1a6ffd3a950ede67b8658742838ce403>`__
(string &att\_name, int polling\_period)

 

| Poll an attribute. `More... <#a1a6ffd3a950ede67b8658742838ce403>`__

 

virtual void 

`poll\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#ab5e92a19ce8f69b13c2aba1a8bc7b6e8>`__
(const char \*att\_name, int polling\_period)

 

| Poll an attribute. `More... <#ab5e92a19ce8f69b13c2aba1a8bc7b6e8>`__

 

virtual void 

`stop\_poll\_command <../../d9/d83/classTango_1_1DeviceProxy.html#a8549d7f29b371fc6e057d23f91ef08e6>`__
(string &cmd\_name)

 

| Stop polling a command.
`More... <#a8549d7f29b371fc6e057d23f91ef08e6>`__

 

virtual void 

`stop\_poll\_command <../../d9/d83/classTango_1_1DeviceProxy.html#a825e655557a1cdee4e82b11a9bcba5a6>`__
(const char \*cmd\_name)

 

| Stop polling a command.
`More... <#a825e655557a1cdee4e82b11a9bcba5a6>`__

 

virtual void 

`stop\_poll\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a0133c5b8e2671394a83c3b03a0e0168b>`__
(string &att\_name)

 

| Stop polling an attribute.
`More... <#a0133c5b8e2671394a83c3b03a0e0168b>`__

 

virtual void 

`stop\_poll\_attribute <../../d9/d83/classTango_1_1DeviceProxy.html#a89b2d5d3226b4bf4ddb85ce1c141012b>`__
(const char \*att\_name)

 

| Stop polling an attribute.
`More... <#a89b2d5d3226b4bf4ddb85ce1c141012b>`__

 

Event related methods

virtual int 

`subscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
(const string &att\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb)

 

| Subscribe for event reception.
`More... <#af1b71ba4bd5427c2effd7321d53a7af4>`__

 

virtual int 

`subscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#a80c449b725a134b1e9aac6771b70ed5c>`__
(const string &att\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb,
bool stateless)

 

| Subscribe for event reception with stateless support.
`More... <#a80c449b725a134b1e9aac6771b70ed5c>`__

 

virtual int 

`subscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#a5fef157c74708fa54acde839749b9449>`__
(const string &att\_name,
`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, int
`event\_queue\_size <../../d9/d83/classTango_1_1DeviceProxy.html#ad50a2c7c5f0e23706bc51c7cce3c062e>`__,
bool stateless=false)

 

| Subscribe for event reception with event queue.
`More... <#a5fef157c74708fa54acde839749b9449>`__

 

virtual int 

`subscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#ac33ae96ec8f69bdd5a16020fd799293c>`__
(`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ \*cb,
bool stateless=false)

 

| Subscribe for device event reception with stateless support.
`More... <#ac33ae96ec8f69bdd5a16020fd799293c>`__

 

virtual int 

`subscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#aae0f3dc703f45b779d834443a8747772>`__
(`EventType <../../d1/d45/group__Client.html#ga5366e2a8cedf5aab5be8835974f787c6>`__
event, int
`event\_queue\_size <../../d9/d83/classTango_1_1DeviceProxy.html#ad50a2c7c5f0e23706bc51c7cce3c062e>`__,
bool stateless=false)

 

| Subscribe for device event reception with stateless support and event
queue. `More... <#aae0f3dc703f45b779d834443a8747772>`__

 

virtual void 

`unsubscribe\_event <../../d9/d83/classTango_1_1DeviceProxy.html#a150d8e7e5bba2d8948bbb780387963b9>`__
(int event\_id)

 

| Unsubscribe for event reception.
`More... <#a150d8e7e5bba2d8948bbb780387963b9>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#a5adc5bb8a4c8501c9ff4565d74ae7c4c>`__
(int event\_id, `CallBack <../../d4/ded/classTango_1_1CallBack.html>`__
\*cb)

 

| Fire event callback in event pull model.
`More... <#a5adc5bb8a4c8501c9ff4565d74ae7c4c>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#ad0e707643fc76d052f82858842e5e65d>`__
(int event\_id,
`EventDataList <../../d3/d57/classTango_1_1EventDataList.html>`__
&event\_list)

 

| Get arrived events from the event queue in event pull model.
`More... <#ad0e707643fc76d052f82858842e5e65d>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#a5406953407b26896932b6864f6374499>`__
(int event\_id,
`AttrConfEventDataList <../../d5/d4a/classTango_1_1AttrConfEventDataList.html>`__
&event\_list)

 

| Get arrived events from event queue in event pull model.
`More... <#a5406953407b26896932b6864f6374499>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#ad716b12fed42528ecb9849e80c552caa>`__
(int event\_id,
`DataReadyEventDataList <../../d0/d3e/classTango_1_1DataReadyEventDataList.html>`__
&event\_list)

 

| Get arrived events from event queue in event pull model.
`More... <#ad716b12fed42528ecb9849e80c552caa>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#a85fbfdef5706f204ef8bb073015c49f4>`__
(int event\_id,
`DevIntrChangeEventDataList <../../dc/d3b/classTango_1_1DevIntrChangeEventDataList.html>`__
&event\_list)

 

| Get arrived events from event queue in event pull model.
`More... <#a85fbfdef5706f204ef8bb073015c49f4>`__

 

virtual void 

`get\_events <../../d9/d83/classTango_1_1DeviceProxy.html#aa8921e89183efb2125aae0fc5d594921>`__
(int event\_id,
`PipeEventDataList <../../d1/d12/classTango_1_1PipeEventDataList.html>`__
&event\_list)

 

| Get arrived events from event queue in event pull model.
`More... <#aa8921e89183efb2125aae0fc5d594921>`__

 

virtual int 

`event\_queue\_size <../../d9/d83/classTango_1_1DeviceProxy.html#ad50a2c7c5f0e23706bc51c7cce3c062e>`__
(int event\_id)

 

| Get event number in event queue.
`More... <#ad50a2c7c5f0e23706bc51c7cce3c062e>`__

 

virtual TimeVal 

`get\_last\_event\_date <../../d9/d83/classTango_1_1DeviceProxy.html#a2ec8d64a3d908ee8370d2ef835b9234b>`__
(int event\_id)

 

| Get date of the last event in queue.
`More... <#a2ec8d64a3d908ee8370d2ef835b9234b>`__

 

virtual bool 

`is\_event\_queue\_empty <../../d9/d83/classTango_1_1DeviceProxy.html#ab559dda4e1539bd77cbe5617275bcf23>`__
(int event\_id)

 

| Check if the event queue is empty.
`More... <#ab559dda4e1539bd77cbe5617275bcf23>`__

 

Property related methods

virtual void 

`get\_property <../../d9/d83/classTango_1_1DeviceProxy.html#afe7a028be773f0bd7cfbf7b5f3d0fc03>`__
(string &prop\_name,
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get a single device property.
`More... <#afe7a028be773f0bd7cfbf7b5f3d0fc03>`__

 

virtual void 

`get\_property <../../d9/d83/classTango_1_1DeviceProxy.html#ad0ca005ff41311109bef21b60ae38af5>`__
(vector< string > &prop\_names,
`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get a list of device properties.
`More... <#ad0ca005ff41311109bef21b60ae38af5>`__

 

virtual void 

`get\_property <../../d9/d83/classTango_1_1DeviceProxy.html#a7f830c43ea3382d47c8b13b50230e334>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Get property(ies) for a device.
`More... <#a7f830c43ea3382d47c8b13b50230e334>`__

 

virtual void 

`put\_property <../../d9/d83/classTango_1_1DeviceProxy.html#a98d7a6e56b47f851551a773c8aff8bcd>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Put property(ies) for a device.
`More... <#a98d7a6e56b47f851551a773c8aff8bcd>`__

 

virtual void 

`delete\_property <../../d9/d83/classTango_1_1DeviceProxy.html#acc165c22d5b08d1d7083723f3b551a5f>`__
(string &prop\_name)

 

| Delete a single device property.
`More... <#acc165c22d5b08d1d7083723f3b551a5f>`__

 

virtual void 

`delete\_property <../../d9/d83/classTango_1_1DeviceProxy.html#ad6f95010e7074d582cfc01b4cd6a08d0>`__
(vector< string > &prop\_names)

 

| Delete a list of device properties.
`More... <#ad6f95010e7074d582cfc01b4cd6a08d0>`__

 

virtual void 

`delete\_property <../../d9/d83/classTango_1_1DeviceProxy.html#aa28d968ac832fd25a1493fc68fa82220>`__
(`DbData <../../de/ddf/namespaceTango.html#a99fa459235396b406532406b562984c0>`__
&db)

 

| Delete property(ies) for a device.
`More... <#aa28d968ac832fd25a1493fc68fa82220>`__

 

virtual void 

`get\_property\_list <../../d9/d83/classTango_1_1DeviceProxy.html#ad1c0e6f8c6212b984d26463ba4088581>`__
(const string &filter, vector< string > &prop\_list)

 

| Get list of property names for a device.
`More... <#ad1c0e6f8c6212b984d26463ba4088581>`__

 

Logging related methods

virtual void 

`add\_logging\_target <../../d9/d83/classTango_1_1DeviceProxy.html#ae45f51b6020e72195a2f00b11629aa13>`__
(const string &target\_type\_name)

 

| Add a logging target to the device.
`More... <#ae45f51b6020e72195a2f00b11629aa13>`__

 

virtual void 

`add\_logging\_target <../../d9/d83/classTango_1_1DeviceProxy.html#a5af2f2566a2e8e70ce99b13ab0560696>`__
(const char \*target\_type\_name)

 

| Add a logging target to the device.
`More... <#a5af2f2566a2e8e70ce99b13ab0560696>`__

 

virtual void 

`remove\_logging\_target <../../d9/d83/classTango_1_1DeviceProxy.html#ac0d0d1901cb2d3089d2770dc9e891e8e>`__
(const string &target\_type\_name)

 

| Remove a logging target from the device.
`More... <#ac0d0d1901cb2d3089d2770dc9e891e8e>`__

 

virtual void 

`remove\_logging\_target <../../d9/d83/classTango_1_1DeviceProxy.html#a88c9ad5c6e2245f609972758251398dc>`__
(const char \*target\_type\_name)

 

| Remove a logging target from the device.
`More... <#a88c9ad5c6e2245f609972758251398dc>`__

 

virtual vector< string > 

`get\_logging\_target <../../d9/d83/classTango_1_1DeviceProxy.html#a6629ccfb78b4da94bf4444168509f863>`__
(void)

 

| Get current device's logging targets.
`More... <#a6629ccfb78b4da94bf4444168509f863>`__

 

virtual int 

`get\_logging\_level <../../d9/d83/classTango_1_1DeviceProxy.html#a7bed3468688fb6b52cb6ce398effdc51>`__
(void)

 

| Get current device's logging level.
`More... <#a7bed3468688fb6b52cb6ce398effdc51>`__

 

virtual void 

`set\_logging\_level <../../d9/d83/classTango_1_1DeviceProxy.html#aecfb3d6b456f915f0800a36de98c51f9>`__
(int level)

 

| Set the device logging level.
`More... <#aecfb3d6b456f915f0800a36de98c51f9>`__

 

Locking related methods

virtual void 

`lock <../../d9/d83/classTango_1_1DeviceProxy.html#a925f2c12bbf98141ee52ead34ff7c00d>`__
(int
lock\_validity=\ `DEFAULT\_LOCK\_VALIDITY <../../de/ddf/namespaceTango.html#ae75357a2687b2f264cc1f811f887de37>`__)

 

| Lock a device. `More... <#a925f2c12bbf98141ee52ead34ff7c00d>`__

 

virtual void 

`unlock <../../d9/d83/classTango_1_1DeviceProxy.html#a32be62e932d5ab4dbc97bdc11cd49591>`__
(bool force=false)

 

| Unlock a device. `More... <#a32be62e932d5ab4dbc97bdc11cd49591>`__

 

virtual string 

`locking\_status <../../d9/d83/classTango_1_1DeviceProxy.html#a1b65bf198b684a4994b9e27606a4e137>`__
()

 

| Get device locking status.
`More... <#a1b65bf198b684a4994b9e27606a4e137>`__

 

virtual bool 

`is\_locked <../../d9/d83/classTango_1_1DeviceProxy.html#ae6e863ee03896f7783a84af048095f0d>`__
()

 

| Check if the device is locked.
`More... <#ae6e863ee03896f7783a84af048095f0d>`__

 

virtual bool 

`is\_locked\_by\_me <../../d9/d83/classTango_1_1DeviceProxy.html#a6f41f2fa087bca0140e0341f2295ec70>`__
()

 

| Check if the device is locked by the caller.
`More... <#a6f41f2fa087bca0140e0341f2295ec70>`__

 

virtual bool 

`get\_locker <../../d9/d83/classTango_1_1DeviceProxy.html#a8b33fe97f4c0ee808a1a50bf9f6fd124>`__
(`LockerInfo <../../dd/d39/structTango_1_1LockerInfo.html>`__ &li)

 

| Get device locking information.
`More... <#a8b33fe97f4c0ee808a1a50bf9f6fd124>`__

 

|-| Public Member Functions inherited from
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__

virtual void 

`set\_timeout\_millis <../../d7/de8/classTango_1_1Connection.html#a0a05fa878281ae0665274d481ed1bfe4>`__
(int timeout)

 

| Set device timeout. `More... <#a0a05fa878281ae0665274d481ed1bfe4>`__

 

virtual int 

`get\_timeout\_millis <../../d7/de8/classTango_1_1Connection.html#af911bbab02b415ebd3dc8faeb7d687a7>`__
()

 

| Get device timeout. `More... <#af911bbab02b415ebd3dc8faeb7d687a7>`__

 

int 

`get\_idl\_version <../../d7/de8/classTango_1_1Connection.html#a5d1843ba0973d0845939a4f106dbad28>`__
()

 

| Get device IDL version.
`More... <#a5d1843ba0973d0845939a4f106dbad28>`__

 

virtual Tango::DevSource 

`get\_source <../../d7/de8/classTango_1_1Connection.html#afcaee3ed7d1a75a21749ad64fbee8700>`__
()

 

| Get device source. `More... <#afcaee3ed7d1a75a21749ad64fbee8700>`__

 

virtual void 

`set\_source <../../d7/de8/classTango_1_1Connection.html#adaeaaf890490018e714dc1a92516b76f>`__
(Tango::DevSource sou)

 

| Set device source. `More... <#adaeaaf890490018e714dc1a92516b76f>`__

 

virtual void 

`set\_transparency\_reconnection <../../d7/de8/classTango_1_1Connection.html#af1fa8c85c338781be7d16a99581cf383>`__
(bool val)

 

| Set device transparency (reconnection) mode.
`More... <#af1fa8c85c338781be7d16a99581cf383>`__

 

virtual bool 

`get\_transparency\_reconnection <../../d7/de8/classTango_1_1Connection.html#ab9dad67ef6e9ba3268ac9d5627f70ea0>`__
()

 

| Get device transparency (reconnection) mode.
`More... <#ab9dad67ef6e9ba3268ac9d5627f70ea0>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#ad878054e953c5288ac0bc137c6307347>`__
(string &cmd\_name)

 

| Execute a command (without input data)
`More... <#ad878054e953c5288ac0bc137c6307347>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#affa1c0fff97f714eddf69ebdb17c6665>`__
(const char \*cmd\_name)

 

| Execute a command (without input data)
`More... <#affa1c0fff97f714eddf69ebdb17c6665>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#af5d9faa2fff08068c579202d29404df5>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d\_in)

 

| Execute a command (with input data)
`More... <#af5d9faa2fff08068c579202d29404df5>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout <../../d7/de8/classTango_1_1Connection.html#a484969b4553471d1f15d873cc638cc1d>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &d\_in)

 

| Execute a command (with input data)
`More... <#a484969b4553471d1f15d873cc638cc1d>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a253afbec47129a1f235e5642648fb9ae>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin, bool
forget=false)

 

| Execute a command asynchronously (with input argument)
`More... <#a253afbec47129a1f235e5642648fb9ae>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a05d55e0b38d0af49f77cbf1ccb3fbe56>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin, bool
forget=false)

 

| Execute a command asynchronously (with input argument)
`More... <#a05d55e0b38d0af49f77cbf1ccb3fbe56>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a13709d9e18276ce038e358e9ef7e54e0>`__
(const char \*cmd\_name, bool forget=false)

 

| Execute a command asynchronously.
`More... <#a13709d9e18276ce038e358e9ef7e54e0>`__

 

virtual long 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a3ac6eaa4960de354249d9d9fa6c09b32>`__
(string &cmd\_name, bool forget=false)

 

| Execute a command asynchronously.
`More... <#a3ac6eaa4960de354249d9d9fa6c09b32>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout\_reply <../../d7/de8/classTango_1_1Connection.html#afae0ebefc88ab77671fc717f30b53c8f>`__
(long id)

 

| Check an asynchronous command\_inout answer is arrived.
`More... <#afae0ebefc88ab77671fc717f30b53c8f>`__

 

virtual `DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ 

`command\_inout\_reply <../../d7/de8/classTango_1_1Connection.html#a02eedd172fbcb947d0a93f10d4f8def1>`__
(long id, long timeout)

 

| Check an asynchronous command\_inout answer is arrived with timeout.
`More... <#a02eedd172fbcb947d0a93f10d4f8def1>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#ab15806ba65762f244739c66e6a978fcc>`__
(string &cmd\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with callback.
`More... <#ab15806ba65762f244739c66e6a978fcc>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a1b7ee02774b5ce6263539bbc62c20966>`__
(const char \*cmd\_name,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with callback.
`More... <#a1b7ee02774b5ce6263539bbc62c20966>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#af29ba99c37cb252ab1d386d192f2721f>`__
(string &cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with input value and callback.
`More... <#af29ba99c37cb252ab1d386d192f2721f>`__

 

virtual void 

`command\_inout\_asynch <../../d7/de8/classTango_1_1Connection.html#a0bb2ab58c99eb35b86f069a2a41c111c>`__
(const char \*cmd\_name,
`DeviceData <../../df/d22/classTango_1_1DeviceData.html>`__ &argin,
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ &cb)

 

| Execute a command asynchronously with input value and callback.
`More... <#a0bb2ab58c99eb35b86f069a2a41c111c>`__

 

virtual void 

`get\_asynch\_replies <../../d7/de8/classTango_1_1Connection.html#aab2655c9b8626777ab54dc795a4f0738>`__
()

 

| Fire callback methods.
`More... <#aab2655c9b8626777ab54dc795a4f0738>`__

 

virtual void 

`get\_asynch\_replies <../../d7/de8/classTango_1_1Connection.html#a860bae40f4ad7866c78d4408bb76fa74>`__
(long timeout)

 

| Fire callback methds with timeout.
`More... <#a860bae40f4ad7866c78d4408bb76fa74>`__

 

virtual void 

`cancel\_asynch\_request <../../d7/de8/classTango_1_1Connection.html#aa340cda55c9be5ba4c87b92b6213f6f1>`__
(long id)

 

| Cancel a pending asynchronous request.
`More... <#aa340cda55c9be5ba4c87b92b6213f6f1>`__

 

virtual void 

`cancel\_all\_polling\_asynch\_request <../../d7/de8/classTango_1_1Connection.html#a7e596bb67ca070748f501ab990d5f880>`__
()

 

| Cancel all pending asynchronous request.
`More... <#a7e596bb67ca070748f501ab990d5f880>`__

 

Friends
-------

class 

`AttributeProxy <../../d9/d83/classTango_1_1DeviceProxy.html#af7e5f3e23d25e03f0f21824a5015c5bf>`__

 

Detailed Description
--------------------

High level class which provides the client with an easy-to-use interface
to TANGO devices.

The high level object which provides the client with an easy-to-use
interface to TANGO devices.
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ is a
handle to the real Device (hence the name Proxy) and is not the real
Device (of course).
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ provides
interfaces to all TANGO devices. The
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ manages
timeouts, stateless connections (new DeviceProxy() nearly always works),
and reconnection if the device server is restarted.

Author
    taurel

Revision
    1

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------+-----+------------------+---------------------+
| Tango::DeviceProxy::DeviceProxy   | (   | string &         | *name*,             |
+-----------------------------------+-----+------------------+---------------------+
|                                   |     | CORBA::ORB \*    | *orb* = ``NULL``    |
+-----------------------------------+-----+------------------+---------------------+
|                                   | )   |                  |                     |
+-----------------------------------+-----+------------------+---------------------+

Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
instance.

Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
to a device of the specified name. The TANGO\_HOST environment variable
is used to determine which TANGO database to connect to. The client can
specify an ORB as argument if she wants to. The constructor will connect
to the TANGO database, query for the client’s network address and build
a connection to the device. If the device is defined in the TANGO
database but the device server is not running
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ will try
to build a connection every time the client tries to access the device.
If the device is not defined an exception is thrown. Example :

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
\*my\_device = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ (“my/own/device”);

See appendix on device naming in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details about `Tango <../../de/ddf/namespaceTango.html>`__
device naming syntax. If an alias name is defined for the device, this
alias name can be used to create the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance.

Parameters
    +--------+--------+---------------------------------------------------------------+
    | [in]   | name   | The device name                                               |
    +--------+--------+---------------------------------------------------------------+
    | [in]   | orb    | Pointer to the ORB. Default value is fine for 99 % of cases   |
    +--------+--------+---------------------------------------------------------------+

Exceptions
    +------------------------------------+----+
    | WrongNameSyntax,ConnectionFailed   |    |
    +------------------------------------+----+

+-----------------------------------+-----+------------------+---------------------+
| Tango::DeviceProxy::DeviceProxy   | (   | const char \*    | *name*,             |
+-----------------------------------+-----+------------------+---------------------+
|                                   |     | CORBA::ORB \*    | *orb* = ``NULL``    |
+-----------------------------------+-----+------------------+---------------------+
|                                   | )   |                  |                     |
+-----------------------------------+-----+------------------+---------------------+

Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
instance.

Create a `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
to a device of the specified name. The TANGO\_HOST environment variable
is used to determine which TANGO database to connect to. The client can
specify an ORB as argument if she wants to. The constructor will connect
to the TANGO database, query for the client’s network address and build
a connection to the device. If the device is defined in the TANGO
database but the device server is not running
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ will try
to build a connection every time the client tries to access the device.
If the device is not defined an exception is thrown. Example :

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
\*my\_device = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ (“my/own/device”);

See appendix on device naming in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details about `Tango <../../de/ddf/namespaceTango.html>`__
device naming syntax. If an alias name is defined for the device, this
alias name can be used to create the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance.

Parameters
    +--------+--------+---------------------------------------------------------------+
    | [in]   | name   | The device name                                               |
    +--------+--------+---------------------------------------------------------------+
    | [in]   | orb    | Pointer to the ORB. Default value is fine for 99 % of cases   |
    +--------+--------+---------------------------------------------------------------+

Exceptions
    +------------------------------------+----+
    | WrongNameSyntax,ConnectionFailed   |    |
    +------------------------------------+----+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------------+-----+------- |                                      |
| ------------+----------------------- |                                      |
| -+-----+----+                        |                                      |
| | virtual void Tango::DeviceProxy::a |                                      |
| dd\_logging\_target   | (   | const  |                                      |
| string &    | *target\_type\_name*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+------- |                                      |
| ------------+----------------------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Add a logging target to the device.

Adds a new logging target to the device. The target\_type\_name input
parameter must follow the format: **target\_type::target\_name**.
Supported target types are:

-  console
-  file
-  device

For a device target, the target\_name part of the
target\_type\_target\_name parameter must contain the name of a log
consumer device (as defined in A.8). For a file target, target\_name is
the full path to the file to log to. If omitted, the device’s name is
used to build the file name (which is something like
domain\_family\_member.log). Finally, the target\_name part of the
target\_type\_target\_name input parameter is ignored in case of a
console target and can be omitted.

Parameters
    +--------+----------------------+----------------------------+
    | [in]   | target\_type\_name   | The target type and name   |
    +--------+----------------------+----------------------------+

Exceptions
    +-------------+---------------+
    | DevFailed   | from device   |
    +-------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ----------------------+-----+------- |                                      |
| -----------+------------------------ |                                      |
| +-----+----+                         |                                      |
| | virtual void Tango::DeviceProxy::a |                                      |
| dd\_logging\_target   | (   | const  |                                      |
| char \*    | *target\_type\_name*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+------- |                                      |
| -----------+------------------------ |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Add a logging target to the device.

Adds a new logging target to the device. The target\_type\_name input
parameter must follow the format: **target\_type::target\_name**.
Supported target types are:

-  console
-  file
-  device

For a device target, the target\_name part of the
target\_type\_target\_name parameter must contain the name of a log
consumer device (as defined in A.8). For a file target, target\_name is
the full path to the file to log to. If omitted, the device’s name is
used to build the file name (which is something like
domain\_family\_member.log). Finally, the target\_name part of the
target\_type\_target\_name input parameter is ignored in case of a
console target and can be omitted.

Parameters
    +--------+----------------------+----------------------------+
    | [in]   | target\_type\_name   | The target type and name   |
    +--------+----------------------+----------------------------+

Exceptions
    +-------------+---------------+
    | DevFailed   | from device   |
    +-------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+----+-----+----+ |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :adm\_name   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the administrator device name.

Returns the name of the corresponding administrator device. This is
useful if you need to send an administration command to the device
server e.g. restart it.

Returns
    The administrator device name

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------+-----+----+-----+----+     |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :alias   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns device alias.

Returns the device alias name if one is defined otherwise, throws a
DevFailed exception with the reason field set to Db\_AliasNotDefined.

Returns
    The device alias

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+-------------+------------ |                                      |
| ----+                                |                                      |
| | virtual vector<`DeviceAttributeHis |                                      |
| tory <../../d8/d41/classTango_1_1Dev |                                      |
| iceAttributeHistory.html>`__\ >\* Ta |                                      |
| ngo::DeviceProxy::attribute\_history |                                      |
|    | (   | string &    | *att\_name* |                                      |
| ,   |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+-------------+------------ |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|    |     | int         | *depth*     |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+-------------+------------ |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|    | )   |             |             |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+-------------+------------ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve attribute history from polling buffer.

Retrieve attribute history from the attribute polling buffer. The first
argument is the attribute name. The second argument is the wanted
history depth. This method returns a vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
types. This method allocates memory for the vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
returned to the caller. It is the caller responsibility to delete this
memory. See chapter on Advanced Feature in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding polling.

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
dev = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ ("...");

vector<DeviceAttributeHistory> \*hist;

hist = dev->attribute\_history("Current",5);

for (int i = 0;i < 5;i++)

{

bool fail = (\*hist)[i].has\_failed();

if (fail == false)

{

cout << "Attribute name = " << (\*hist)[i].get\_name() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Attribute quality factor = " << (\*hist)[i].get\_quality() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

long value;

(\*hist)[i] >> value;

cout << "Current = " << value <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

else

{

cout << "Attribute failed !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Error level 0 desc = " <<
((\*hist)[i].get\_err\_stack())[0].desc << endl;

}

cout << "Date = " << (\*hist)[i].get\_date().tv\_sec <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | att\_name   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name   |
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | depth       | The required history depth                                       |
    +--------+-------------+------------------------------------------------------------------+

Returns
    The read attribute history data

Exceptions
    +----------------------------------------------------------------------+---------------+
    | NonSupportedFeature,ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +----------------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------+------- |                                      |
| ---------+                           |                                      |
| | virtual vector<`DeviceAttributeHis |                                      |
| tory <../../d8/d41/classTango_1_1Dev |                                      |
| iceAttributeHistory.html>`__\ >\* Ta |                                      |
| ngo::DeviceProxy::attribute\_history |                                      |
|    | (   | const char \*    | *att\_ |                                      |
| name*,   |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------+------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|    |     | int              | *depth |                                      |
| *        |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------+------- |                                      |
| ---------+                           |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|    | )   |                  |        |                                      |
|          |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+-----+------------------+------- |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve attribute history from polling buffer.

Retrieve attribute history from the attribute polling buffer. The first
argument is the attribute name. The second argument is the wanted
history depth. This method returns a vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
types. This method allocates memory for the vector of
`DeviceAttributeHistory <../../d8/d41/classTango_1_1DeviceAttributeHistory.html>`__
returned to the caller. It is the caller responsibility to delete this
memory. See chapter on Advanced Feature in `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding polling.

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
dev = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ ("...");

vector<DeviceAttributeHistory> \*hist;

hist = dev->attribute\_history("Current",5);

for (int i = 0;i < 5;i++)

{

bool fail = (\*hist)[i].has\_failed();

if (fail == false)

{

cout << "Attribute name = " << (\*hist)[i].get\_name() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Attribute quality factor = " << (\*hist)[i].get\_quality() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

long value;

(\*hist)[i] >> value;

cout << "Current = " << value <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

else

{

cout << "Attribute failed !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Error level 0 desc = " <<
((\*hist)[i].get\_err\_stack())[0].desc << endl;

}

cout << "Date = " << (\*hist)[i].get\_date().tv\_sec <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | att\_name   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name   |
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | depth       | The required history depth                                       |
    +--------+-------------+------------------------------------------------------------------+

Returns
    The read attribute history data

Exceptions
    +----------------------------------------------------------------------+---------------+
    | NonSupportedFeature,ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +----------------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+----+-----+----+        |                                      |
| | virtual `AttributeInfoList <../../ |                                      |
| de/ddf/namespaceTango.html#a87d0e8cd |                                      |
| 391e8df4af01f2a2cd66b2d3>`__\ \* Tan |                                      |
| go::DeviceProxy::attribute\_list\_qu |                                      |
| ery   | (   |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for information on all attributes.

| Query the device for info on all attributes. This method returns a
vector of
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
types. This method allocates memory for the vector of
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
structures returned to the caller. It is the caller responsibility to
delete this memory.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Returns
    A vector of
    `AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
    structures with one element per attribute

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
| | virtual `AttributeInfoListEx <../. |                                      |
| ./d1/d45/group__Client.html#ga7175e0 |                                      |
| 5437edf640b8e555d1a601335c>`__\ \* T |                                      |
| ango::DeviceProxy::attribute\_list\_ |                                      |
| query\_ex   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for information on all attributes.

| Query the device for info on all attributes. This method returns a
vector of
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
types. This method allocates memory for the vector of
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
structures returned to the caller. It is the caller responsibility to
delete this memory.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Returns
    A vector of
    `AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
    structures with one element per attribute

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+-----------+----- |                                      |
| ----------+-----+----+               |                                      |
| | virtual `AttributeInfoEx <../../d3 |                                      |
| /d71/structTango_1_1AttributeInfoEx. |                                      |
| html>`__ Tango::DeviceProxy::attribu |                                      |
| te\_query   | (   | string    | *att |                                      |
| \_name*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+-----------+----- |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for attribute information.

Query the device for information about a single attribute. This command
returns a single
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
type.

| **NOTE** on compatibility between
`Tango <../../de/ddf/namespaceTango.html>`__ V4 and
`Tango <../../de/ddf/namespaceTango.html>`__ V5 regarding attribute
properties:
|  Between `Tango <../../de/ddf/namespaceTango.html>`__ V4 and
`Tango <../../de/ddf/namespaceTango.html>`__ V5, attribute configuration
has been modified to incorporate alarm and event related parameters.
This explains why it exists two structure types for attribute
configuration parameters. All
`Tango <../../de/ddf/namespaceTango.html>`__ V4 parameters are defined
in a structure called
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__ and a
new structure called
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
has been defined for all `Tango <../../de/ddf/namespaceTango.html>`__ V5
parameters. Nevertheless,
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
inherits from
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__ and
it is always possible to call the
`Tango <../../de/ddf/namespaceTango.html>`__ V5
`DeviceProxy::attribute\_query() <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
method and to store its result in one
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
structure thus allowing compatibility for client written for
`Tango <../../de/ddf/namespaceTango.html>`__ V4 but linked with
`Tango <../../de/ddf/namespaceTango.html>`__ V5. It is also possible for
a client written and linked with
`Tango <../../de/ddf/namespaceTango.html>`__ V5 to call
`Tango <../../de/ddf/namespaceTango.html>`__ V5
`DeviceProxy::attribute\_query() <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
method to all kind of `Tango <../../de/ddf/namespaceTango.html>`__
devices. For device using `Tango <../../de/ddf/namespaceTango.html>`__
V4, the alarm and event related parameters will be retrieved from the
database instead of from the device

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

Returns
    The attribute information structure

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------+-----+----- |                                      |
| ---+--------+-----+----+             |                                      |
| | virtual vector<string>\* Tango::De |                                      |
| viceProxy::black\_box   | (   | int  |                                      |
|    | *nb*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device black box content.

Get the last n commands executed on the device server and return a
pointer to a vector of strings containing the date, time, command, and
from which client computer the command was executed. This method
allocates memory for the vector of strings returned to the caller. It is
the caller responsibility to delete this memory.

Parameters
    +--------+------+---------------------------------------------------------------------------------------------------------------------+
    | [in]   | nb   | Number of requested records. If more records than available is requested, only the available records are returned   |
    +--------+------+---------------------------------------------------------------------------------------------------------------------+

Returns
    Black box content

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| -----------+----------------+        |                                      |
| | virtual vector<`DeviceDataHistory  |                                      |
| <../../d8/dc0/classTango_1_1DeviceDa |                                      |
| taHistory.html>`__\ >\* Tango::Devic |                                      |
| eProxy::command\_history   | (   | s |                                      |
| tring &    | *cmd\_name*,   |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| -----------+----------------+        |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                            |     | i |                                      |
| nt         | *depth*        |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| -----------+----------------+        |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                            | )   |   |                                      |
|            |                |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| -----------+----------------+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve command history from polling buffer.

Retrieve command history from the command polling buffer. The first
argument is the command name. The second argument is the wanted history
depth. This method returns a vector of
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
types. This method allocates memory for the vector of
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
returned to the caller. It is the caller responsibility to delete this
memory. See chapter "Advanced Feature" `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding polling.

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
dev = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ ("...");

vector<DeviceDataHistory> \*hist;

hist = dev->command\_history("Status",5);

for (int i = 0;i < 5;i++)

{

bool fail = (\*hist)[i].has\_failed();

if (fail == false)

{

string str;

(\*hist)[i] >> str;

cout << "Status = " << str <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

else

{

cout << "Command failed !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Error level 0 desc = " << ((\*hist)[i].errors())[0].desc <<
endl;

}

cout << "Date = " << (\*hist)[i].date().tv\_sec <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+-------------+------------------------------+
    | [in]   | cmd\_name   | The command name             |
    +--------+-------------+------------------------------+
    | [in]   | depth       | The required history depth   |
    +--------+-------------+------------------------------+

Returns
    The command information list: One
    `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__
    structure per command

Exceptions
    +----------------------------------------------------------------------+---------------+
    | NonSupportedFeature,ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +----------------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| ----------------+----------------+   |                                      |
| | virtual vector<`DeviceDataHistory  |                                      |
| <../../d8/dc0/classTango_1_1DeviceDa |                                      |
| taHistory.html>`__\ >\* Tango::Devic |                                      |
| eProxy::command\_history   | (   | c |                                      |
| onst char \*    | *cmd\_name*,   |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| ----------------+----------------+   |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                            |     | i |                                      |
| nt              | *depth*        |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| ----------------+----------------+   |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                            | )   |   |                                      |
|                 |                |   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------------+-----+-- |                                      |
| ----------------+----------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve command history from polling buffer.

Retrieve command history from the command polling buffer. The first
argument is the command name. The second argument is the wanted history
depth. This method returns a vector of
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
types. This method allocates memory for the vector of
`DeviceDataHistory <../../d8/dc0/classTango_1_1DeviceDataHistory.html>`__
returned to the caller. It is the caller responsibility to delete this
memory. See chapter "Advanced Feature" `Tango
book <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/ds_prog/index.html>`__
for all details regarding polling.

`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__
dev = new
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html#a2e4fa0ea2f3c016c47d31a788911a6b1>`__\ ("...");

vector<DeviceDataHistory> \*hist;

hist = dev->command\_history("Status",5);

for (int i = 0;i < 5;i++)

{

bool fail = (\*hist)[i].has\_failed();

if (fail == false)

{

string str;

(\*hist)[i] >> str;

cout << "Status = " << str <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

else

{

cout << "Command failed !" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << "Error level 0 desc = " << ((\*hist)[i].errors())[0].desc <<
endl;

}

cout << "Date = " << (\*hist)[i].date().tv\_sec <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

}

delete hist;

Parameters
    +--------+-------------+------------------------------+
    | [in]   | cmd\_name   | The command name             |
    +--------+-------------+------------------------------+
    | [in]   | depth       | The required history depth   |
    +--------+-------------+------------------------------+

Returns
    The command information list: One
    `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__
    structure per command

Exceptions
    +----------------------------------------------------------------------+---------------+
    | NonSupportedFeature,ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +----------------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
| | virtual `CommandInfoList <../../d1 |                                      |
| /d45/group__Client.html#ga702913bccb |                                      |
| 1c2d427d7a6f046602d657>`__\ \* Tango |                                      |
| ::DeviceProxy::command\_list\_query  |                                      |
|   | (   |    | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+----+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for all commands information.

Query the device for info on all commands. This method returns a vector
of `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ types.
This method allocates memory for the vector of
`CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ returned
to the caller. It is the caller responsibility to delete this memory

Returns
    The command information list: One
    `CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__
    structure per command

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+-----------+--------------- |                                      |
| +-----+----+                         |                                      |
| | virtual `CommandInfo <../../d3/d96 |                                      |
| /structTango_1_1CommandInfo.html>`__ |                                      |
|  Tango::DeviceProxy::command\_query  |                                      |
|   | (   | string    | *cmd\_name*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+-----------+--------------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for single command information.

Query the device for information about a single command. This command
returns a single
`CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ type.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    The command information structure

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| --+----------------+-----+----+      |                                      |
| | virtual void Tango::DeviceProxy::d |                                      |
| elete\_property   | (   | string &   |                                      |
|   | *prop\_name*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| --+----------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete a single device property.

Delete a single property for a device. The property to delete is
specified as a string.

Parameters
    +--------+--------------+---------------------+
    | [in]   | prop\_name   | The property name   |
    +--------+--------------+---------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------+-----------------+----- |                                      |
| +----+                               |                                      |
| | virtual void Tango::DeviceProxy::d |                                      |
| elete\_property   | (   | vector< st |                                      |
| ring > &    | *prop\_names*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------+-----------------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete a list of device properties.

Delete a list of properties for a device. The properties to delete are
specified as a vector of strings.

Parameters
    +--------+---------------+---------------------------+
    | [in]   | prop\_names   | The property names list   |
    +--------+---------------+---------------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
| | virtual void Tango::DeviceProxy::d |                                      |
| elete\_property   | (   | `DbData <. |                                      |
| ./../de/ddf/namespaceTango.html#a99f |                                      |
| a459235396b406532406b562984c0>`__ &  |                                      |
|    | *db*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+--------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Delete property(ies) for a device.

Delete property(ies) for a device. Properties to delete are specified
using the DbData type. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`get\_property() <../../d9/d83/classTango_1_1DeviceProxy.html#afe7a028be773f0bd7cfbf7b5f3d0fc03>`__
and DbData sections below for details.

Parameters
    +--------+------+----------------------+
    | [in]   | db   | The property names   |
    +--------+------+----------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :description   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the device description as a string.

Returns the device description as a string.

Returns
    The device description

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------+-----+----+-----+----+ |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :dev\_name   | (   |    | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+----+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the device name as it is stored locally.

Return the device name as it is stored locally

Returns
    The device name

Implements
`Tango::Connection <../../d7/de8/classTango_1_1Connection.html>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------+-----+--------+- |                                      |
| --------------+-----+----+           |                                      |
| | virtual int Tango::DeviceProxy::ev |                                      |
| ent\_queue\_size   | (   | int    |  |                                      |
| *event\_id*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+--------+- |                                      |
| --------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get event number in event queue.

Returns the number of stored events in the event reception buffer. After
every call to
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__:`get\_events() <../../d9/d83/classTango_1_1DeviceProxy.html#a5adc5bb8a4c8501c9ff4565d74ae7c4c>`__,
the event queue size is 0. During event subscription the client must
have chosen the **pull model** for this event. event\_id is the event
identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    The event number in queue

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+----------------------- |                                      |
| +----------------+-----+----+        |                                      |
| | virtual `AttributeInfoList <../../ |                                      |
| de/ddf/namespaceTango.html#a87d0e8cd |                                      |
| 391e8df4af01f2a2cd66b2d3>`__\ \* Tan |                                      |
| go::DeviceProxy::get\_attribute\_con |                                      |
| fig   | (   | vector< string > &     |                                      |
| | *att\_names*   | )   |    |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+-----+----------------------- |                                      |
| +----------------+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute configuration for a list of attributes.

| Return the attribute configuration for the list of specified
attributes. To get all the attributes pass a vector containing the
string AllAttr (defined in
`tango\_const.h <../../d4/d13/tango__const_8h.html>`__). This method
allocates memory for the vector of
`AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
returned to the caller. It is the caller responsibility to delete this
memory.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Parameters
    +--------+--------------+------------------------+
    | [in]   | att\_names   | Attributes name list   |
    +--------+--------------+------------------------+

Returns
    A vector of
    `AttributeInfo <../../df/dab/structTango_1_1AttributeInfo.html>`__
    structures with one element per attribute

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
| | virtual `AttributeInfoEx <../../d3 |                                      |
| /d71/structTango_1_1AttributeInfoEx. |                                      |
| html>`__ Tango::DeviceProxy::get\_at |                                      |
| tribute\_config   | (   | const stri |                                      |
| ng &    | *att\_name*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------+-----+----------- |                                      |
| --------+---------------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute configuration (extended) for a single attribute.

| Return the attribute configuration for a single attribute.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Parameters
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | att\_name   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name   |
    +--------+-------------+------------------------------------------------------------------+

Returns
    The extended attribute information

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------+-----+----+  |                                      |
| | virtual `AttributeInfoListEx <../. |                                      |
| ./d1/d45/group__Client.html#ga7175e0 |                                      |
| 5437edf640b8e555d1a601335c>`__\ \* T |                                      |
| ango::DeviceProxy::get\_attribute\_c |                                      |
| onfig\_ex   | (   | vector< string > |                                      |
|  &    | *att\_names*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute configuration (extended) for a list of attributes.

| Return the extended attribute configuration for the list of specified
attributes. To get all the attributes pass a vector containing the
define AllAttr (defined in
`tango\_const.h <../../d4/d13/tango__const_8h.html>`__). This method
allocates memory for the vector of
`AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
returned to the caller. It is the caller responsibility to delete this
memory.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Parameters
    +--------+--------------+------------------------+
    | [in]   | att\_names   | Attributes name list   |
    +--------+--------------+------------------------+

Returns
    A vector of
    `AttributeInfoEx <../../d3/d71/structTango_1_1AttributeInfoEx.html>`__
    structures with one element per attribute

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
| | virtual vector<string>\* Tango::De |                                      |
| viceProxy::get\_attribute\_list   |  |                                      |
| (   |    | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ----------------------------------+- |                                      |
| ----+----+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query all attributes name.

Return the names of all attributes implemented for this device as a
vector of strings. This method allocates memory for the vector of
strings returned to the caller. It is the caller responsibility to
delete this memory.

Returns
    A vector of string with one string per attribute

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------------+-----+ |                                      |
| -------------+---------------+-----+ |                                      |
| ----+                                |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_attribute\_poll\_period   | (   | |                                      |
|  string &    | *att\_name*   | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| -------------+---------------+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute polling period.

Returns the attribute "att\_name" polling period in mS. If the attribute
is not polled, it returns 0.

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

Returns
    The attribute polling period

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------------+-----+ |                                      |
| ------------------+---------------+- |                                      |
| ----+----+                           |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_attribute\_poll\_period   | (   | |                                      |
|  const char \*    | *att\_name*   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| ------------------+---------------+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute polling period.

Returns the attribute "att\_name" polling period in mS. If the attribute
is not polled, it returns 0.

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

Returns
    The attribute polling period

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+-------------------+- |                                      |
| --------------+-----+----+           |                                      |
| | virtual `CommandInfo <../../d3/d96 |                                      |
| /structTango_1_1CommandInfo.html>`__ |                                      |
|  Tango::DeviceProxy::get\_command\_c |                                      |
| onfig   | (   | const string &    |  |                                      |
| *cmd\_name*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------+-----+-------------------+- |                                      |
| --------------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get command information for a single command.

Return the command information for a single command.

Parameters
    +--------+-------------+--------------------------------------------------------------+
    | [in]   | cmd\_name   | `Command <../../d2/d1d/classTango_1_1Command.html>`__ name   |
    +--------+-------------+--------------------------------------------------------------+

Returns
    The command information

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+-----------------------+--- |                                      |
| -------------+-----+----+            |                                      |
| | virtual `CommandInfoList <../../d1 |                                      |
| /d45/group__Client.html#ga702913bccb |                                      |
| 1c2d427d7a6f046602d657>`__\ \* Tango |                                      |
| ::DeviceProxy::get\_command\_config  |                                      |
|   | (   | vector< string > &    | *c |                                      |
| md\_names*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+-----------------------+--- |                                      |
| -------------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get information for a set of commands.

Return command information for the list of specified commands. This
method allocates memory for the vector of
`CommandInfo <../../d3/d96/structTango_1_1CommandInfo.html>`__ returned
to the caller. It is the caller responsibility to delete this memory.

Parameters
    +--------+--------------+-------------------------------------------------------------------+
    | [in]   | cmd\_names   | `Command <../../d2/d1d/classTango_1_1Command.html>`__ name list   |
    +--------+--------------+-------------------------------------------------------------------+

Returns
    A vector of CommadnInfo srtuctures with one element per command

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
| | virtual vector<string>\* Tango::De |                                      |
| viceProxy::get\_command\_list   | (  |                                      |
|   |    | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+----+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query all commands name.

Return the names of all commands implemented for this device as a vector
of strings. This method allocates memory for the vector of strings
returned to the caller. It is the caller responsibility to delete this
memory.

Returns
    A vector of string with one string per command

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------------+-----+-- |                                      |
| -----------+---------------+-----+-- |                                      |
| --+                                  |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_command\_poll\_period   | (   | s |                                      |
| tring &    | *cmd\_name*   | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| -----------+---------------+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get command polling period.

Returns the command "cmd\_name" polling period in mS. If the command is
not polled, it returns 0.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    The command polling period

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------------+-----+-- |                                      |
| ----------------+---------------+--- |                                      |
| --+----+                             |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_command\_poll\_period   | (   | c |                                      |
| onst char \*    | *cmd\_name*   | )  |                                      |
|   |    |                             |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ----------------+---------------+--- |                                      |
| --+----+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get command polling period.

Returns the command "cmd\_name" polling period in mS. If the command is
not polled, it returns 0.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    The command polling period

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------+----------------+        |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|            | *event\_id*,   |        |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------+----------------+        |                                      |
| |                                    |                                      |
|              |     | `CallBack <../. |                                      |
| ./d4/ded/classTango_1_1CallBack.html |                                      |
| >`__ \*    | *cb*           |        |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------+----------------+        |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|            |                |        |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| -----------+----------------+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Fire event callback in event pull model.

The method extracts all waiting events from the event reception buffer
and executes the callback method cb for every event. During event
subscription the client must have chosen the **pull model** for this
event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+
    | [in]   | cb          | The callback object    |
    +--------+-------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|                     | *event\_id*,   |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|              |     | `EventDataList  |                                      |
| <../../d3/d57/classTango_1_1EventDat |                                      |
| aList.html>`__ &    | *event\_list*  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                     |                |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------------+--------------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get arrived events from the event queue in event pull model.

The method extracts all waiting events from the event reception buffer.
The returned event\_list is a vector of
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ pointers. The
`EventData <../../d7/d5f/classTango_1_1EventData.html>`__ object
contains the event information as for the callback methods. During event
subscription the client must have chosen the **pull model** for this
event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event(s) list      |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|                                      |                                      |
| | *event\_id*,     |                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| |                                    |                                      |
|              |     | `AttrConfEventD |                                      |
| ataList <../../d5/d4a/classTango_1_1 |                                      |
| AttrConfEventDataList.html>`__ &     |                                      |
| | *event\_list*    |                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                                      |                                      |
| |                  |                 |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get arrived events from event queue in event pull model.

The method extracts all waiting attribute configuration events from the
event reception buffer. The returned event\_list is a vector of
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
pointers. The
`AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
object contains the event information as for the callback methods.
During event subscription the client must have chosen the **pull model**
for this event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event(s) list      |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+------------------+               |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|                                      |                                      |
|   | *event\_id*,     |               |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+------------------+               |                                      |
| |                                    |                                      |
|              |     | `DataReadyEvent |                                      |
| DataList <../../d0/d3e/classTango_1_ |                                      |
| 1DataReadyEventDataList.html>`__ &   |                                      |
|   | *event\_list*    |               |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+------------------+               |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                                      |                                      |
|   |                  |               |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+------------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get arrived events from event queue in event pull model.

The method extracts all waiting attribute configuration events from the
event reception buffer. The returned event\_list is a vector of
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
pointers. The
`DataReadyEventData <../../df/d39/classTango_1_1DataReadyEventData.html>`__
object contains the event information as for the callback methods.
During event subscription the client must have chosen the **pull model**
for this event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event(s) list      |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+------------------+       |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|                                      |                                      |
|           | *event\_id*,     |       |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+------------------+       |                                      |
| |                                    |                                      |
|              |     | `DevIntrChangeE |                                      |
| ventDataList <../../dc/d3b/classTang |                                      |
| o_1_1DevIntrChangeEventDataList.html |                                      |
| >`__ &    | *event\_list*    |       |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+------------------+       |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                                      |                                      |
|           |                  |       |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+------------------+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get arrived events from event queue in event pull model.

The method extracts all waiting attribute configuration events from the
event reception buffer. The returned event\_list is a vector of
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
pointers. The
`DevIntrChangeEventData <../../db/d47/classTango_1_1DevIntrChangeEventData.html>`__
object contains the event information as for the callback methods.
During event subscription the client must have chosen the **pull model**
for this event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event(s) list      |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -----------+                         |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_events   | (   | int             |                                      |
|                                      |                                      |
|                             | *event |                                      |
| \_id*,     |                         |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|              |     | `PipeEventDataL |                                      |
| ist <../../d1/d12/classTango_1_1Pipe |                                      |
| EventDataList.html>`__ &    | *event |                                      |
| \_list*    |                         |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -----------+                         |                                      |
| |                                    |                                      |
|              | )   |                 |                                      |
|                                      |                                      |
|                             |        |                                      |
|            |                         |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get arrived events from event queue in event pull model.

The method extracts all waiting pipe events from the event reception
buffer. The returned event\_list is a vector of
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__
pointers. The
`PipeEventData <../../d8/d0d/classTango_1_1PipeEventData.html>`__ object
contains the event information as for the callback methods. During event
subscription the client must have chosen the **pull model** for this
event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +---------+---------------+------------------------+
    | [in]    | event\_id     | The event identifier   |
    +---------+---------------+------------------------+
    | [out]   | event\_list   | The event(s) list      |
    +---------+---------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------------+-----+-- |                                      |
| ------+---------------+-----+----+   |                                      |
| | virtual TimeVal Tango::DeviceProxy |                                      |
| ::get\_last\_event\_date   | (   | i |                                      |
| nt    | *event\_id*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ------+---------------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get date of the last event in queue.

Returns the arrival time of the last event stored in the event reception
buffer. After every call to Device-
Proxy:\ `get\_events() <../../d9/d83/classTango_1_1DeviceProxy.html#a5adc5bb8a4c8501c9ff4565d74ae7c4c>`__,
the event reception buffer is empty. In this case an exception will be
returned. During event subscription the client must have chosen the
**pull model** for this event. event\_id is the event identifier
returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    The last event date

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------+-----+----+ |                                      |
| | virtual bool Tango::DeviceProxy::g |                                      |
| et\_locker   | (   | `LockerInfo <.. |                                      |
| /../dd/d39/structTango_1_1LockerInfo |                                      |
| .html>`__ &    | *li*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+--------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device locking information.

If the device is locked, this method returns true an set some locker
process informations in the structure passed as argument. If the device
is not locked, the method returns false. The
`LockerInfo <../../dd/d39/structTango_1_1LockerInfo.html>`__ structure
definition is

typedef union

{

pid\_t LockerPid;

unsigned long UUID[4];

}LockerId;

enum LockerLanguage

{

CPP,

JAVA

};

struct LockerInfo

{

LockerLanguage ll;

LockerId li;

string locker\_host;

string locker\_class;

};

Parameters
    +---------+------+------------------------------+
    | [out]   | li   | Device locking information   |
    +---------+------+------------------------------+

Returns
    The device locked flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+--------- |                                      |
| +----+-----+----+                    |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_logging\_level   | (   | void     |                                      |
| |    | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------- |                                      |
| +----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get current device's logging level.

Returns the current device’s logging level (0=OFF, 1=FATAL, 2=ERROR,
3=WARNING, 4=INFO, 5=DEBUG).

Returns
    The device logging level

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
| | virtual vector<string> Tango::Devi |                                      |
| ceProxy::get\_logging\_target   | (  |                                      |
|   | void    |    | )   |    |        |                                      |
| +----------------------------------- |                                      |
| --------------------------------+--- |                                      |
| --+---------+----+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get current device's logging targets.

Returns a vector of string containing the current device’s logging
targets. Each vector element has the following format:
target\_type::target\_name. An empty vector is returned is the device
has no logging targets.

Returns
    List of loggin target

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+-----------------------+--------- |                                      |
| --------+-----+----+                 |                                      |
| | virtual `PipeInfoList <../../de/dd |                                      |
| f/namespaceTango.html#a40adbc36986b3 |                                      |
| 444fcde63126e4a011e>`__\ \* Tango::D |                                      |
| eviceProxy::get\_pipe\_config   | (  |                                      |
|   | vector< string > &    | *pipe\_n |                                      |
| ames*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| --+-----------------------+--------- |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pipe configuration for a list of pipes.

Return the pipe configuration for the list of specified pipes. To get
all the pipes pass a vector containing the define AllPipe (defined in
`tango\_const.h <../../d4/d13/tango__const_8h.html>`__). This method
allocates memory for the vector of
`PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__ returned to the
caller. It is the caller responsibility to delete this memory.

Parameters
    +--------+---------------+-------------------+
    | [in]   | pipe\_names   | Pipes name list   |
    +--------+---------------+-------------------+

Returns
    A vector of `PipeInfo <../../d8/d04/structTango_1_1PipeInfo.html>`__
    structures with one element per pipe

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+-------------------+---------- |                                      |
| ------+-----+----+                   |                                      |
| | virtual `PipeInfo <../../d8/d04/st |                                      |
| ructTango_1_1PipeInfo.html>`__ Tango |                                      |
| ::DeviceProxy::get\_pipe\_config   | |                                      |
|  (   | const string &    | *pipe\_na |                                      |
| me*   | )   |    |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+-------------------+---------- |                                      |
| ------+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pipe configuration for a single pipe.

Return the pipe configuration for a single pipe.

Parameters
    +--------+--------------+--------------------------------------------------------+
    | [in]   | pipe\_name   | `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ name   |
    +--------+--------------+--------------------------------------------------------+

Returns
    The pipe information

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
| | virtual vector<string>\* Tango::De |                                      |
| viceProxy::get\_pipe\_list   | (   | |                                      |
|     | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query all pipes name.

Return the names of all pipes implemented for this device as a vector of
strings. This method allocates memory for the vector of strings returned
to the caller. It is the caller responsibility to delete this memory.

Returns
    A vector of string with one string per pipe

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----------------+                  |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_property   | (   | string &      |                                      |
|                                      |                                      |
|                                      |                                      |
| | *prop\_name*,   |                  |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----------------+                  |                                      |
| |                                    |                                      |
|                |     | `DbData <../. |                                      |
| ./de/ddf/namespaceTango.html#a99fa45 |                                      |
| 9235396b406532406b562984c0>`__ &     |                                      |
| | *db*            |                  |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----------------+                  |                                      |
| |                                    |                                      |
|                | )   |               |                                      |
|                                      |                                      |
|                                      |                                      |
| |                 |                  |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +-----------------+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a single device property.

Get a single property for a device. The property to get is specified as
a string. Refer to
`DbDevice::get\_property() <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
and DbData sections below for details on the DbData type.

Parameters
    +---------+--------------+----------------------+
    | [in]    | prop\_name   | The property name    |
    +---------+--------------+----------------------+
    | [out]   | db           | The property value   |
    +---------+--------------+----------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_property   | (   | vector< strin |                                      |
| g > &                                |                                      |
|                                      |                                      |
| | *prop\_names*,   |                 |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| |                                    |                                      |
|                |     | `DbData <../. |                                      |
| ./de/ddf/namespaceTango.html#a99fa45 |                                      |
| 9235396b406532406b562984c0>`__ &     |                                      |
| | *db*             |                 |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
| |                                    |                                      |
|                | )   |               |                                      |
|                                      |                                      |
|                                      |                                      |
| |                  |                 |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +------------------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get a list of device properties.

Get a list of properties for a device. The properties to get are
specified as a vector of strings. Refer to
`DbDevice::get\_property() <../../da/dbb/classTango_1_1DbDevice.html#a86b8f41493e382aac14b5013e792d019>`__
and DbData sections below for details on the DbData type.

Parameters
    +---------+---------------+-------------------------+
    | [in]    | prop\_names   | The property names      |
    +---------+---------------+-------------------------+
    | [out]   | db            | The properties values   |
    +---------+---------------+-------------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +--------+-----+----+                |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_property   | (   | `DbData <../. |                                      |
| ./de/ddf/namespaceTango.html#a99fa45 |                                      |
| 9235396b406532406b562984c0>`__ &     |                                      |
| | *db*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +--------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get property(ies) for a device.

Get property(ies) for a device. Properties to get are specified using
the DbData type. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`get\_property() <../../d9/d83/classTango_1_1DeviceProxy.html#afe7a028be773f0bd7cfbf7b5f3d0fc03>`__
and DbData sections below for details.

Parameters
    +------------+------+--------------------------------------+
    | [in,out]   | db   | The property(ies) names and values   |
    +------------+------+--------------------------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+   |                                      |
| | virtual void Tango::DeviceProxy::g |                                      |
| et\_property\_list   | (   | const s |                                      |
| tring &        | *filter*,       |   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+   |                                      |
| |                                    |                                      |
|                      |     | vector< |                                      |
|  string > &    | *prop\_list*    |   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+   |                                      |
| |                                    |                                      |
|                      | )   |         |                                      |
|                |                 |   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ---------------+-----------------+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get list of property names for a device.

Get the list of property names for the device. The parameter filter
allows the user to filter the returned name list. The wildcard character
is ’\*’. Only one wildcard character is allowed in the filter parameter.
The name list is returned in the vector of strings passed as the method
second argument.

Parameters
    +---------+--------------+----------------------------+
    | [in]    | filter       | The filter                 |
    +---------+--------------+----------------------------+
    | [out]   | prop\_list   | The device property list   |
    +---------+--------------+----------------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
| | virtual int Tango::DeviceProxy::ge |                                      |
| t\_tango\_lib\_version   | (   |     |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device `Tango <../../de/ddf/namespaceTango.html>`__ lib version.

Get the version of the `Tango <../../de/ddf/namespaceTango.html>`__
library used by the device

Returns
    The device `Tango <../../de/ddf/namespaceTango.html>`__ lib version

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----+----+-----+----+       |                                      |
| | virtual `DbDevImportInfo <../../d0 |                                      |
| /d4b/classTango_1_1DbDevImportInfo.h |                                      |
| tml>`__ Tango::DeviceProxy::import\_ |                                      |
| info   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Query the device for import info from the database.

Query the device for import info from the database.

Returns
    The device import info

Exceptions
    +----------------------------------------------------+----+
    | ConnectionFailed,CommunicationFailed,NonDbDevice   |    |
    +----------------------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | virtual `DeviceInfo <../../de/ddf/ |                                      |
| namespaceTango.html#a6e79cf63803c534 |                                      |
| 5bbccc9c3a8573efe>`__ const& Tango:: |                                      |
| DeviceProxy::info   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device info.

A method which returns information on the device in a DeviceInfo
structure. Example :

cout << " device info : " << endl

`DeviceInfo <../../de/ddf/namespaceTango.html#a6e79cf63803c5345bbccc9c3a8573efe>`__
dev\_info = my\_device->info() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

cout << " dev\_class " << dev\_info.dev\_class;

cout << " server\_id " << dev\_info.server\_id;

cout << " server\_host " << dev\_info.server\_host;

cout << " server\_version " << dev\_info.server\_version;

cout << " doc\_url " << dev\_info.doc\_url;

cout << " device\_type " << dev\_info.dev\_type;

All DeviceInfo fields are strings except server\_version which is a long
integer.

Returns
    Device information structure

Exceptions
    +--------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| -------+---------------+-----+----+  |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_attribute\_polled   | (   | strin |                                      |
| g &    | *att\_name*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -------+---------------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if one attribute is polled.

Returns true if the attribute "att\_name" is polled. Otherwise, returns
false.

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

Returns
    Flag set to true if the attribute is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| ------------+---------------+-----+- |                                      |
| ---+                                 |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_attribute\_polled   | (   | const |                                      |
|  char \*    | *att\_name*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------+---------------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if one attribute is polled.

Returns true if the attribute "att\_name" is polled. Otherwise, returns
false.

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

Returns
    Flag set to true if the attribute is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| -----+---------------+-----+----+    |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_command\_polled   | (   | string  |                                      |
| &    | *cmd\_name*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -----+---------------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if a command is polled.

Returns true if the command "cmd\_name" is polled. Otherwise, returns
false.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    Flag set to true if the command is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------+-----+-------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_command\_polled   | (   | const c |                                      |
| har \*    | *cmd\_name*   | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if a command is polled.

Returns true if the command "cmd\_name" is polled. Otherwise, returns
false.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

Returns
    Flag set to true if the command is polled

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------+-----+---- |                                      |
| ----+---------------+-----+----+     |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_event\_queue\_empty   | (   | int |                                      |
|     | *event\_id*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ----+---------------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the event queue is empty.

Returns true when the event reception buffer is empty. During event
subscription the client must have chosen the **pull model** for this
event. event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Returns
    true if the event queue is empty

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------+-----+----+-----+----+  |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_locked   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the device is locked.

Returns true if the device is locked. Otherwise, returns false

Returns
    The device locked flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | virtual bool Tango::DeviceProxy::i |                                      |
| s\_locked\_by\_me   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the device is locked by the caller.

Returns true if the device is locked by the caller. Otherwise, returns
false (device not locked or locked by someone else)

Returns
    The device locked flag

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------+-----+--------+-------------- |                                      |
| ----------------------------------+- |                                      |
| ----+----+                           |                                      |
| | virtual void Tango::DeviceProxy::l |                                      |
| ock   | (   | int    | *lock\_validi |                                      |
| ty* = ``DEFAULT_LOCK_VALIDITY``   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------+-----+--------+-------------- |                                      |
| ----------------------------------+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Lock a device.

Lock a device. The lock\_validity is the time (in seconds) the lock is
kept valid after the previous lock call. A default value of 10 seconds
is provided and should be fine in most cases. In case it is necessary to
change the lock validity, it’s not possible to ask for a validity less
than a minimum value set to 2 seconds. The library provided an automatic
system to periodically re lock the device until an unlock call. No code
is needed to start/stop this automatic re-locking system. The locking
system is re-entrant. It is then allowed to call this method on a device
already locked by the same process. The locking system has the following
features:

-  It is impossible to lock the database device or any device server
   process admin device
-  Destroying a locked
   `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ unlocks
   the device
-  Restarting a locked device keeps the lock
-  It is impossible to restart a device locked by someone else
-  Restarting a server breaks the lock

A locked device is protected against the following calls when executed
by another client:

-  command\_inout call except for device state and status requested via
   command and for the set of commands defined as allowed following the
   definition of allowed command in the
   `Tango <../../de/ddf/namespaceTango.html>`__ control access schema.
-  write\_attribute call
-  write\_pipe call
-  write\_read\_attribute call
-  write\_read\_pipe call
-  set\_attribute\_config call
-  set\_pipe\_config call

Parameters
    +--------+------------------+----------------------------------+
    | [in]   | lock\_validity   | The lock validity (in seconds)   |
    +--------+------------------+----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :locking\_status   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device locking status.

This method returns a plain string describing the device locking status.
This string can be:

-  "Device <device name> is not locked" in case the device is not locked
-  "Device <device name> is locked by CPP or Python client with PID
   <pid> from host <host name>" in case the device is locked by a CPP
   client
-  "Device <device name> is locked by JAVA client class <main class>
   from host <host name>" in case the device is locked by a JAVA client

Returns
    The device locking status

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------+-----+----+-----+----+      |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :name   | (   |    | )   |    |      |                                      |
| +----------------------------------- |                                      |
| --------+-----+----+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Return the device name (from the device itself)

Return the device name (from the device itself)

Returns
    The device name

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+---------+-----+---- |                                      |
| +                                    |                                      |
| | virtual long Tango::DeviceProxy::p |                                      |
| ending\_asynch\_call   | (   | `asyn |                                      |
| \_req\_type <../../d1/d45/group__Cli |                                      |
| ent.html#ga6c80e2130b95642d5c39ee8db |                                      |
| 7a25620>`__    | *req*   | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------+---------+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pending asynchronous request number.

Return number of device asynchronous pending requests. The input
parameter is an enumeration with three values which are:

-  POLLING : Returns only device polling model asynchronous request
   number
-  CALLBACK : Returns only device callback model asynchronous request
   number
-  ALL\_ASYNCH : Returns device asynchronous request number

Parameters
    +--------+-------+---------------------------------+
    | [in]   | req   | The asynchronous request type   |
    +--------+-------+---------------------------------+

Returns
    Pending asynchronous request number

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----+-----+----+-----+----+         |                                      |
| | virtual int Tango::DeviceProxy::pi |                                      |
| ng   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Ping a device.

A method which sends a ping to the device and returns the time elapsed
as microseconds. Example :

cout << " device ping took " << my\_device->ping() << " microseconds" <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------+-----+------------ |                                      |
| -+----------------------+            |                                      |
| | virtual void Tango::DeviceProxy::p |                                      |
| oll\_attribute   | (   | string &    |                                      |
|  | *att\_name*,         |            |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| -+----------------------+            |                                      |
| |                                    |                                      |
|                  |     | int         |                                      |
|  | *polling\_period*    |            |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| -+----------------------+            |                                      |
| |                                    |                                      |
|                  | )   |             |                                      |
|  |                      |            |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| -+----------------------+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Poll an attribute.

Add the attribute "att\_name" to the list of polled attributes. The
polling period is specified by "polling\_period" (in mS). If the
attribute is already polled, this method will update the polling period
according to "polling\_period".

Parameters
    +--------+-------------------+----------------------+
    | [in]   | att\_name         | The attribute name   |
    +--------+-------------------+----------------------+
    | [in]   | polling\_period   | The polling period   |
    +--------+-------------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------+-----+------------ |                                      |
| ------+----------------------+       |                                      |
| | virtual void Tango::DeviceProxy::p |                                      |
| oll\_attribute   | (   | const char  |                                      |
| \*    | *att\_name*,         |       |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------+----------------------+       |                                      |
| |                                    |                                      |
|                  |     | int         |                                      |
|       | *polling\_period*    |       |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------+----------------------+       |                                      |
| |                                    |                                      |
|                  | )   |             |                                      |
|       |                      |       |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------+----------------------+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Poll an attribute.

Add the attribute "att\_name" to the list of polled attributes. The
polling period is specified by "polling\_period" (in mS). If the
attribute is already polled, this method will update the polling period
according to "polling\_period".

Parameters
    +--------+-------------------+----------------------+
    | [in]   | att\_name         | The attribute name   |
    +--------+-------------------+----------------------+
    | [in]   | polling\_period   | The polling period   |
    +--------+-------------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+-------------+ |                                      |
| ----------------------+              |                                      |
| | virtual void Tango::DeviceProxy::p |                                      |
| oll\_command   | (   | string &    | |                                      |
|  *cmd\_name*,         |              |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------+ |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                |     | int         | |                                      |
|  *polling\_period*    |              |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------+ |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                | )   |             | |                                      |
|                       |              |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------+ |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Poll a command.

Add the command "cmd\_name" to the list of polled command. The polling
period is specified by "polling\_period" (in mS). If the command is
already polled, this method will update the polling period according to
"polling\_period".

Parameters
    +--------+-------------------+----------------------+
    | [in]   | cmd\_name         | The command name     |
    +--------+-------------------+----------------------+
    | [in]   | polling\_period   | The polling period   |
    +--------+-------------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------+-----+-------------- |                                      |
| ----+----------------------+         |                                      |
| | virtual void Tango::DeviceProxy::p |                                      |
| oll\_command   | (   | const char \* |                                      |
|     | *cmd\_name*,         |         |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ----+----------------------+         |                                      |
| |                                    |                                      |
|                |     | int           |                                      |
|     | *polling\_period*    |         |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ----+----------------------+         |                                      |
| |                                    |                                      |
|                | )   |               |                                      |
|     |                      |         |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ----+----------------------+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Poll a command.

Add the command "cmd\_name" to the list of polled command. The polling
period is specified by "polling\_period" (in mS). If the command is
already polled, this method will update the polling period according to
"polling\_period".

Parameters
    +--------+-------------------+----------------------+
    | [in]   | cmd\_name         | The command name     |
    +--------+-------------------+----------------------+
    | [in]   | polling\_period   | The polling period   |
    +--------+-------------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
| | virtual vector<string>\* Tango::De |                                      |
| viceProxy::polling\_status   | (   | |                                      |
|     | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| -----------------------------+-----+ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get polling status.

Returns the device polling status. There is one string for each polled
command/attribute. Each string is multi-line string with :

-  The attribute/command name
-  The attribute/command polling period (in mS)
-  The attribute/command polling ring buffer depth
-  The time needed for the last command/attribute execution (in mS)
-  The time since data in the ring buffer has not been updated
-  The delta time between the last records in the ring buffer
-  The exception parameters in case of the last command/attribute
   execution failed

This method allocates memory for the vector of string(s) returned to the
caller. It is the caller responsibility to delete this memory.

Returns
    The polling status

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +--------+-----+----+                |                                      |
| | virtual void Tango::DeviceProxy::p |                                      |
| ut\_property   | (   | `DbData <../. |                                      |
| ./de/ddf/namespaceTango.html#a99fa45 |                                      |
| 9235396b406532406b562984c0>`__ &     |                                      |
| | *db*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| +--------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Put property(ies) for a device.

Put property(ies) for a device. Properties to put are specified using
the DbData type. Refer to
`DbDevice <../../da/dbb/classTango_1_1DbDevice.html>`__::
`put\_property() <../../d9/d83/classTango_1_1DeviceProxy.html#a98d7a6e56b47f851551a773c8aff8bcd>`__
and DbData sections below for details.

Parameters
    +--------+------+--------------------------------------+
    | [in]   | db   | The property(ies) names and values   |
    +--------+------+--------------------------------------+

Exceptions
    +--------------------------------------------------------------+------------------------+
    | NonDbDevice,ConnectionFailed,CommunicationFailed,DevFailed   | from database device   |
    +--------------------------------------------------------------+------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+-------------+----- |                                      |
| ----------+-----+----+               |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ Tango::DeviceProxy::read\_at |                                      |
| tribute   | (   | string &    | *att |                                      |
| \_name*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+-------------+----- |                                      |
| ----------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a single attribute.

Read a single attribute. To extract the value you have to use the
operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double
(this will return 0) you have to extract it as a short. See usage eample
in
`DeviceProxy::read\_attributes <../../d9/d83/classTango_1_1DeviceProxy.html#a427b1c62ac2eb6f2607c7dfe5de2f59c>`__

Parameters
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | att\_name   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name   |
    +--------+-------------+------------------------------------------------------------------+

Returns
    The attribute value in a
    `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
    instance

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+------------------+ |                                      |
| ---------------+-----+----+          |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ Tango::DeviceProxy::read\_at |                                      |
| tribute   | (   | const char \*    | |                                      |
|  *att\_name*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----+------------------+ |                                      |
| ---------------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read the list of specified attributes.

Read a single attribute. To extract the value you have to use the
operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double
(this will return 0) you have to extract it as a short. See usage eample
in
`DeviceProxy::read\_attributes <../../d9/d83/classTango_1_1DeviceProxy.html#a427b1c62ac2eb6f2607c7dfe5de2f59c>`__

Parameters
    +--------+-------------+------------------------------------------------------------------+
    | [in]   | att\_name   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name   |
    +--------+-------------+------------------------------------------------------------------+

Returns
    The attribute value in a
    `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
    instance

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------+-----+---- |                                      |
| ---------+---------------+-----+---- |                                      |
| +                                    |                                      |
| | virtual long Tango::DeviceProxy::r |                                      |
| ead\_attribute\_asynch   | (   | str |                                      |
| ing &    | *att\_name*   | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ---------+---------------+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a single attribute asynchronously.

Read asynchronously (polling model) a single attribute. This call
returns an asynchronous call identifier which is needed to get the
attribute value.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | att\_name   | The attributes name   |
    +--------+-------------+-----------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| --------------+---------------+----- |                                      |
| +----+                               |                                      |
| | virtual long Tango::DeviceProxy::r |                                      |
| ead\_attribute\_asynch   | (   | con |                                      |
| st char \*    | *att\_name*   | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| --------------+---------------+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a single attribute asynchronously.

Read asynchronously (polling model) a single attribute. This call
returns an asynchronous call identifier which is needed to get the
attribute value.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | att\_name   | The attributes name   |
    +--------+-------------+-----------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::DeviceProxy::r |                                      |
| ead\_attribute\_asynch   | (   | con |                                      |
| st char \*                           |                                      |
|                       | *att\_name*, |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                          |     | `Ca |                                      |
| llBack <../../d4/ded/classTango_1_1C |                                      |
| allBack.html>`__ &    | *cb*         |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                          | )   |     |                                      |
|                                      |                                      |
|                       |              |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a single attribute asynchronously in callback model.

Read asynchronously (callback model) a single attribute. The last
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the *attr\_read()* method overloaded.

Parameters
    +--------+-------------+------------------------+
    | [in]   | att\_name   | The attribute name     |
    +--------+-------------+------------------------+
    | [in]   | cb          | The call-back object   |
    +--------+-------------+------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::DeviceProxy::r |                                      |
| ead\_attribute\_asynch   | (   | str |                                      |
| ing &                                |                                      |
|                       | *att\_name*, |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                          |     | `Ca |                                      |
| llBack <../../d4/ded/classTango_1_1C |                                      |
| allBack.html>`__ &    | *cb*         |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
| |                                    |                                      |
|                          | )   |     |                                      |
|                                      |                                      |
|                       |              |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ------------------------------------ |                                      |
| ----------------------+------------- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a single attribute asynchronously in callback model.

Read asynchronously (callback model) a single attribute. The last
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the *attr\_read()* method overloaded.

Parameters
    +--------+-------------+------------------------+
    | [in]   | att\_name   | The attribute name     |
    +--------+-------------+------------------------+
    | [in]   | cb          | The call-back object   |
    +--------+-------------+------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------+-----+----+               |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__\ \* Tango::DeviceProxy::read |                                      |
| \_attribute\_reply   | (   | long    |                                      |
|  | *id*   | )   |    |               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an asynchronous read\_attribute (single attribute) call is
arrived.

Check if the answer of an asynchronous read\_attribute is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__.
If the reply is an exception, it is re-thrown by this call. An exception
is also thrown in case of the reply is not yet arrived. To extract
attribute value, you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Returns
    The attribute data

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------------+                    |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__\ \* Tango::DeviceProxy::read |                                      |
| \_attribute\_reply   | (   | long    |                                      |
|  | *id*,        |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                      |     | long    |                                      |
|  | *timeout*    |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------------+                    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                      | )   |         |                                      |
|  |              |                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------------------+-----+-------- |                                      |
| -+--------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an asynchronous read\_attribute (single attribute) call is
arrived (with timeout)

Check if the answer of an asynchronous read\_attributes is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__.
If the reply is an exception, it is re-thrown by this call. If the reply
is not yet arrived, the call will wait (blocking the process) for the
time specified in timeout. If after timeout milliseconds, the reply is
still not there, an exception is thrown. If timeout is set to 0, the
call waits until the reply arrived. To extract attribute value, you have
to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+-----------+-----------------------+
    | [in]   | id        | The call identifier   |
    +--------+-----------+-----------------------+
    | [in]   | timeout   | The timeout value     |
    +--------+-----------+-----------------------+

Returns
    The attribute data

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------+-----+------ |                                      |
| -----------------+----------------+- |                                      |
| ----+----+                           |                                      |
| | virtual vector<`DeviceAttribute <. |                                      |
| ./../d7/dca/classTango_1_1DeviceAttr |                                      |
| ibute.html>`__\ >\* Tango::DevicePro |                                      |
| xy::read\_attributes   | (   | vecto |                                      |
| r< string > &    | *att\_names*   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------------+-----+------ |                                      |
| -----------------+----------------+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read the list of specified attributes.

Read the list of specified attributes. To extract the value you have to
use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. By default, if the server reports
error for one of the attribute in the list, this error will be passed to
the user using exception when he (she) will try to extract the data form
the corresponding See sub-chapter on
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ to
learn how to change this default behaviour.
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. This method allocates memory for the vector of
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
objects returned to the caller. This is the caller responsibility to
delete this memory. Example :

vector<DeviceAttribute> \*devattr;

vector<string> attr\_names;

attr\_names.push\_back("attribute\_1");

attr\_names.push\_back("attribute\_2");

devattr = device->read\_attributes(attr\_names);

short short\_attr\_1;

long long\_attr\_2;

(\*devattr)[0] >> short\_attr\_1;

(\*devattr)[1] >> long\_attr\_2;

cout << "my\_attribute value " << short\_attr;

delete devattr;

Parameters
    +--------+--------------+-------------------------------------------------------------------+
    | [in]   | att\_names   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ names   |
    +--------+--------------+-------------------------------------------------------------------+

Returns
    A vector of
    `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
    instances with one element for each read attribute

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| --------------------+--------------- |                                      |
| -+-----+----+                        |                                      |
| | virtual long Tango::DeviceProxy::r |                                      |
| ead\_attributes\_asynch   | (   | ve |                                      |
| ctor< string > &    | *att\_names*   |                                      |
|  | )   |    |                        |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| --------------------+--------------- |                                      |
| -+-----+----+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read asynchronously alist of attributes.

Read asynchronously (polling model) the list of specified attributes.
This call returns an asynchronous call identifier which is needed to get
attributes value.

Parameters
    +--------+--------------+------------------------+
    | [in]   | att\_names   | The attributes names   |
    +--------+--------------+------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| -----+                               |                                      |
| | virtual void Tango::DeviceProxy::r |                                      |
| ead\_attributes\_asynch   | (   | ve |                                      |
| ctor< string > &                     |                                      |
|                        | *att\_names |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                           |     | `C |                                      |
| allBack <../../d4/ded/classTango_1_1 |                                      |
| CallBack.html>`__ &    | *cb*        |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                           | )   |    |                                      |
|                                      |                                      |
|                        |             |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| -----------------------+------------ |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read asynchronously in callback model a list of attributes.

Read asynchronously (callback model) an attribute list. The last
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the *attr\_read()* method overloaded.

Parameters
    +--------+--------------+---------------------------+
    | [in]   | att\_names   | The attribute name list   |
    +--------+--------------+---------------------------+
    | [in]   | cb           | The call-back object      |
    +--------+--------------+---------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------+-----+----+      |                                      |
| | virtual vector<`DeviceAttribute <. |                                      |
| ./../d7/dca/classTango_1_1DeviceAttr |                                      |
| ibute.html>`__\ >\* Tango::DevicePro |                                      |
| xy::read\_attributes\_reply   | (    |                                      |
| | long    | *id*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an asynchronous read\_attributes call is arrived.

Check if the answer of an asynchronous read\_attribute is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. If the reply is an exception, it is re-thrown by this call. An
exception is also thrown in case of the reply is not yet arrived. To
extract attribute value, you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Returns
    The attribute(s) data

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------------+           |                                      |
| | virtual vector<`DeviceAttribute <. |                                      |
| ./../d7/dca/classTango_1_1DeviceAttr |                                      |
| ibute.html>`__\ >\* Tango::DevicePro |                                      |
| xy::read\_attributes\_reply   | (    |                                      |
| | long    | *id*,        |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------------+           |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                               |      |                                      |
| | long    | *timeout*    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------------+           |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                               | )    |                                      |
| |         |              |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +---------+--------------+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if an asynchronous read\_attributes call is arrived (with timeout)

Check if the answer of an asynchronous read\_attribute is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, it is returned to the caller in a
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object. If the reply is an exception, it is re-thrown by this call. If
the reply is not yet arrived, the call will wait (blocking the process)
for the time specified in timeout. If after timeout milliseconds, the
reply is still not there, an exception is thrown. If timeout is set to
0, the call waits until the reply arrived. To extract attribute value,
you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the attribute native type to user type
e.g. if an attribute returns a short you cannot extract it as a double,
you have to extract it as a short. Memory has been allocated for the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
object returned to the caller. This is the caller responsibility to
delete this memory.

Parameters
    +--------+-----------+-----------------------+
    | [in]   | id        | The call identifier   |
    +--------+-----------+-----------------------+
    | [in]   | timeout   | The timeout value     |
    +--------+-----------+-----------------------+

Returns
    The attribute(s) data

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+-------------------+-------------- |                                      |
| --+-----+----+                       |                                      |
| | virtual `DevicePipe <../../da/dc5/ |                                      |
| classTango_1_1DevicePipe.html>`__ Ta |                                      |
| ngo::DeviceProxy::read\_pipe   | (   |                                      |
|  | const string &    | *pipe\_name*  |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| -+-------------------+-------------- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Read a pipe.

Read a pipe.

Parameters
    +--------+--------------+--------------------------------------------------------+
    | [in]   | pipe\_name   | `Pipe <../../d8/d14/classTango_1_1Pipe.html>`__ name   |
    +--------+--------------+--------------------------------------------------------+

Returns
    The pipe value in a
    `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ instance

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------------+-----+---- |                                      |
| ---------------+-------------------- |                                      |
| ----+-----+----+                     |                                      |
| | virtual void Tango::DeviceProxy::r |                                      |
| emove\_logging\_target   | (   | con |                                      |
| st string &    | *target\_type\_name |                                      |
| *   | )   |    |                     |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| ---------------+-------------------- |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Remove a logging target from the device.

Removes a logging target from the device’s target list. The
target\_type\_name input parameter must follow the format:
target\_type::target\_name. Supported target types are:

-  console
-  file
-  device

For a device target, the target\_name part of the
target\_type\_target\_name parameter must contain the name of a log
consumer device (as defined in ). For a file target, target\_name is the
full path to the file to remove. If omitted, the default log file is
removed. Finally, the target\_name part of the
target\_type\_target\_name input parameter is ignored in case of a
console target and can be omitted. If target\_name is set to "\*", all
targets of the specified target\_type are removed.

Parameters
    +--------+----------------------+----------------------------+
    | [in]   | target\_type\_name   | The target type and name   |
    +--------+----------------------+----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| --------------+--------------------- |                                      |
| ---+-----+----+                      |                                      |
| | virtual void Tango::DeviceProxy::r |                                      |
| emove\_logging\_target   | (   | con |                                      |
| st char \*    | *target\_type\_name* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| --------------+--------------------- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Remove a logging target from the device.

Removes a logging target from the device’s target list. The
target\_type\_name input parameter must follow the format:
target\_type::target\_name. Supported target types are:

-  console
-  file
-  device

For a device target, the target\_name part of the
target\_type\_target\_name parameter must contain the name of a log
consumer device (as defined in ). For a file target, target\_name is the
full path to the file to remove. If omitted, the default log file is
removed. Finally, the target\_name part of the
target\_type\_target\_name input parameter is ignored in case of a
console target and can be omitted. If target\_name is set to "\*", all
targets of the specified target\_type are removed.

Parameters
    +--------+----------------------+----------------------------+
    | [in]   | target\_type\_name   | The target type and name   |
    +--------+----------------------+----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+----------+---- |                                      |
| -+----+                              |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| et\_attribute\_config   | (   | `Att |                                      |
| ributeInfoList <../../de/ddf/namespa |                                      |
| ceTango.html#a87d0e8cd391e8df4af01f2 |                                      |
| a2cd66b2d3>`__ &    | *atts*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+----------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set attribute configuration.

| Change the attribute configuration for the specified attributes.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Parameters
    +--------+--------+--------------------------------+
    | [in]   | atts   | New attributes configuration   |
    +--------+--------+--------------------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevUnlocked,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+----------+-- |                                      |
| ---+----+                            |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| et\_attribute\_config   | (   | `Att |                                      |
| ributeInfoListEx <../../d1/d45/group |                                      |
| __Client.html#ga7175e05437edf640b8e5 |                                      |
| 55d1a601335c>`__ &    | *atts*   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ------------------------+-----+----- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+----------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set extended attribute configuration.

| Change the extended attribute configuration for the specified
attributes.
|  See
`DeviceProxy::attribute\_query <../../d9/d83/classTango_1_1DeviceProxy.html#a86d45a2c6d13ceff780b96854a095920>`__
for a note about compatibility between attribute properties structure

Parameters
    +--------+--------+-----------------------------------------+
    | [in]   | atts   | New extended attributes configuration   |
    +--------+--------+-----------------------------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevUnlocked,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| +-----------+-----+----+             |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| et\_logging\_level   | (   | int     |                                      |
| | *level*   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| +-----------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the device logging level.

Changes the device’s logging level. (0=OFF, 1=FATAL, 2=ERROR, 3=WARNING,
4=INFO, 5=DEBUG).

Parameters
    +--------+---------+--------------------------------+
    | [in]   | level   | The new device logging level   |
    +--------+---------+--------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----------+-----+----+   |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| et\_pipe\_config   | (   | `PipeInfo |                                      |
| List <../../de/ddf/namespaceTango.ht |                                      |
| ml#a40adbc36986b3444fcde63126e4a011e |                                      |
| >`__ &    | *pipes*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------+-----------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set pipe configuration.

Change the pipe configuration for the specified pipes.

Parameters
    +--------+---------+---------------------------+
    | [in]   | pipes   | New pipes configuration   |
    +--------+---------+---------------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DevUnlocked,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------+-----+----+-----+----+   |                                      |
| | virtual DevState Tango::DeviceProx |                                      |
| y::state   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device state.

A method which returns the state of the device as a Tango::DevState
type. Example :

Tango::DevState dev\_state = my\_device->state();

Returns
    Device state enumeration

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------+-----+----+-----+----+    |                                      |
| | virtual string Tango::DeviceProxy: |                                      |
| :status   | (   |    | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ----------+-----+----+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get device status.

A method which returns the status of the device as a string. Example :

cout << "device status: " << my\_device->status() <<
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__;

Returns
    Device status

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------------+-----+------ |                                      |
| -------+---------------+-----+----+  |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| top\_poll\_attribute   | (   | strin |                                      |
| g &    | *att\_name*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| -------+---------------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling an attribute.

Remove attribute "att\_name" from the list of polled attributes

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -----------------------+-----+------ |                                      |
| ------------+---------------+-----+- |                                      |
| ---+                                 |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| top\_poll\_attribute   | (   | const |                                      |
|  char \*    | *att\_name*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| -----------------------+-----+------ |                                      |
| ------------+---------------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling an attribute.

Remove attribute "att\_name" from the list of polled attributes

Parameters
    +--------+-------------+----------------------+
    | [in]   | att\_name   | The attribute name   |
    +--------+-------------+----------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------+-----+-------- |                                      |
| -----+---------------+-----+----+    |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| top\_poll\_command   | (   | string  |                                      |
| &    | *cmd\_name*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| -----+---------------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling a command.

Remove command "cmd\_name" from the list of polled command.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------------------+-----+-------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
| | virtual void Tango::DeviceProxy::s |                                      |
| top\_poll\_command   | (   | const c |                                      |
| har \*    | *cmd\_name*   | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------------+-----+-------- |                                      |
| ----------+---------------+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Stop polling a command.

Remove command "cmd\_name" from the list of polled command.

Parameters
    +--------+-------------+--------------------+
    | [in]   | cmd\_name   | The command name   |
    +--------+-------------+--------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| | int Tango::DeviceProxy::subscribe\ |                                      |
| _event   | (   | const string &      |                                      |
|                                      |                                      |
|                                | *at |                                      |
| t\_name*,   |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | `EventType <../../d |                                      |
| 1/d45/group__Client.html#ga5366e2a8c |                                      |
| edf5aab5be8835974f787c6>`__    | *ev |                                      |
| ent*,       |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | `CallBack <../../d4 |                                      |
| /ded/classTango_1_1CallBack.html>`__ |                                      |
|  \*                            | *cb |                                      |
| *           |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          | )   |                     |                                      |
|                                      |                                      |
|                                |     |                                      |
|             |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe for event reception.

The client call to subscribe for event reception in the push model. The
client implements a callback method which is triggered when the event is
received. Filtering is done based on the event type. For example when
reading the state and the reason specified is "change" the event will be
fired only when the state changes. Events consist of an attribute name
and the event reason. A standard set of reasons are implemented by the
system, additional device specific reasons can be implemented by device
servers programmers. The attribute parameter is the device attribute
name which will be sent as an event e.g. “current”, event parameter is
the event reason, cb is a pointer to a class inheriting from the
`Tango <../../de/ddf/namespaceTango.html>`__
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class and
implementing a push\_event() method. The
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
call returns an event id which has to be specified when unsubscribing
from this event. Please, note that the cb parameter is a pointer. The
lifetime of the pointed to object must at least be equal to the time
when events are requested because only the pointer is stored into the
event machinery. The same thing is true for the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance
on which the
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method is called.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | att\_name   | The attribute name    |
    +--------+-------------+-----------------------+
    | [in]   | event       | The event type        |
    +--------+-------------+-----------------------+
    | [in]   | cb          | The callback object   |
    +--------+-------------+-----------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| | int Tango::DeviceProxy::subscribe\ |                                      |
| _event   | (   | const string &      |                                      |
|                                      |                                      |
|                                | *at |                                      |
| t\_name*,   |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | `EventType <../../d |                                      |
| 1/d45/group__Client.html#ga5366e2a8c |                                      |
| edf5aab5be8835974f787c6>`__    | *ev |                                      |
| ent*,       |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | `CallBack <../../d4 |                                      |
| /ded/classTango_1_1CallBack.html>`__ |                                      |
|  \*                            | *cb |                                      |
| *,          |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          |     | bool                |                                      |
|                                      |                                      |
|                                | *st |                                      |
| ateless*    |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
| |                                    |                                      |
|          | )   |                     |                                      |
|                                      |                                      |
|                                |     |                                      |
|             |                        |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------+                        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe for event reception with stateless support.

The client call to subscribe for event reception in the push model. The
client implements a callback method which is triggered when the event is
received. Filtering is done based on the event type. For example when
reading the state and the reason specified is "change" the event will be
fired only when the state changes. Events consist of an attribute name
and the event reason. A standard set of reasons are implemented by the
system, additional device specific reasons can be implemented by device
servers programmers. The attribute parameter is the device attribute
name which will be sent as an event e.g. “current”, event parameter is
the event reason, cb is a pointer to a class inheriting from the
`Tango <../../de/ddf/namespaceTango.html>`__
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class and
implementing a push\_event() method. The last call parameter is named
stateless. When the stateless flag is set to false, an exception will be
thrown when the event subscription encounters a problem. With the
stateless flag set to true, the event subscription will always succeed,
even if the corresponding device server is not running. The keep alive
thread will try every 10 seconds to subscribe for the specified event.
At every subscription retry, a callback is executed which contains the
corresponding exception. The
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
call returns an event id which has to be specified when unsubscribing
from this event. Please, note that the cb parameter is a pointer. The
lifetime of the pointed to object must at least be equal to the time
when events are requested because only the pointer is stored into the
event machinery. The same thing is true for the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance
on which the
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method is called.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | att\_name   | The attribute name    |
    +--------+-------------+-----------------------+
    | [in]   | event       | The event type        |
    +--------+-------------+-----------------------+
    | [in]   | cb          | The callback object   |
    +--------+-------------+-----------------------+
    | [in]   | stateless   | The stateless flag    |
    +--------+-------------+-----------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
| | int Tango::DeviceProxy::subscribe\ |                                      |
| _event   | (   | const string &      |                                      |
|                                      |                                      |
|                                | *at |                                      |
| t\_name*,               |            |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
| |                                    |                                      |
|          |     | `EventType <../../d |                                      |
| 1/d45/group__Client.html#ga5366e2a8c |                                      |
| edf5aab5be8835974f787c6>`__    | *ev |                                      |
| ent*,                   |            |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
| |                                    |                                      |
|          |     | int                 |                                      |
|                                      |                                      |
|                                | *ev |                                      |
| ent\_queue\_size*,      |            |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
| |                                    |                                      |
|          |     | bool                |                                      |
|                                      |                                      |
|                                | *st |                                      |
| ateless* = ``false``    |            |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
| |                                    |                                      |
|          | )   |                     |                                      |
|                                      |                                      |
|                                |     |                                      |
|                         |            |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+---- |                                      |
| ------------------------+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe for event reception with event queue.

The client call to subscribe for event reception in the pull model.
Instead of a callback method the client has to specify the size of the
event reception buffer. The event reception buffer is implemented as a
round robin buffer. This way the client can set-up different ways to
receive events.

-  Event reception buffer size = 1 : The client is interested only in
   the value of the last event received. All other events that have been
   received since the last reading are discarded.
-  Event reception buffer size > 1 : The client has chosen to keep an
   event history of a given size. When more events arrive since the last
   reading, older events will be discarded.
-  Event reception buffer size = ALL\_EVENTS : The client buffers all
   received events. The buffer size is unlimited and only restricted by
   the available memory for the client.

All other parameters (att\_name, event, stateless) are similar to those
described in `DeviceProxy::subscribe\_event(const string
&,EventType,CallBack
\*,bool) <../../d9/d83/classTango_1_1DeviceProxy.html#a80c449b725a134b1e9aac6771b70ed5c>`__

Parameters
    +--------+----------------------+------------------------+
    | [in]   | att\_name            | The attribute name     |
    +--------+----------------------+------------------------+
    | [in]   | event                | The event type         |
    +--------+----------------------+------------------------+
    | [in]   | event\_queue\_size   | The event queue size   |
    +--------+----------------------+------------------------+
    | [in]   | stateless            | The stateless flag     |
    +--------+----------------------+------------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| | virtual int Tango::DeviceProxy::su |                                      |
| bscribe\_event   | (   | `EventType  |                                      |
| <../../d1/d45/group__Client.html#ga5 |                                      |
| 366e2a8cedf5aab5be8835974f787c6>`__  |                                      |
|    | *event*,                   |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  |     | `CallBack < |                                      |
| ../../d4/ded/classTango_1_1CallBack. |                                      |
| html>`__ \*                          |                                      |
|    | *cb*,                      |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  |     | bool        |                                      |
|                                      |                                      |
|                                      |                                      |
|    | *stateless* = ``false``    |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  | )   |             |                                      |
|                                      |                                      |
|                                      |                                      |
|    |                            |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe for device event reception with stateless support.

The client call to subscribe for **device** event reception in the push
model. The client implements a callback method which is triggered when
the event is received. Filtering is done based on the event type. Today,
only one event type is supported for **device** event. This event type
is a device interface change event. cb is a pointer to a class
inheriting from the `Tango <../../de/ddf/namespaceTango.html>`__
`CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class and
implementing a push\_event() method. The last call parameter is named
stateless. When the stateless flag is set to false, an exception will be
thrown when the event subscription encounters a problem. With the
stateless flag set to true, the event subscription will always succeed,
even if the corresponding device server is not running. The keep alive
thread will try every 10 seconds to subscribe for the specified event.
At every subscription retry, a callback is executed which contains the
corresponding exception. The
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
call returns an event id which has to be specified when unsubscribing
from this event. Please, note that the cb parameter is a pointer. The
lifetime of the pointed to object must at least be equal to the time
when events are requested because only the pointer is stored into the
event machinery. The same thing is true for the
`DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__ instance
on which the
`subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method is called.

Parameters
    +--------+-------------+-----------------------+
    | [in]   | event       | The event type        |
    +--------+-------------+-----------------------+
    | [in]   | cb          | The callback object   |
    +--------+-------------+-----------------------+
    | [in]   | stateless   | The stateless flag    |
    +--------+-------------+-----------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| | virtual int Tango::DeviceProxy::su |                                      |
| bscribe\_event   | (   | `EventType  |                                      |
| <../../d1/d45/group__Client.html#ga5 |                                      |
| 366e2a8cedf5aab5be8835974f787c6>`__  |                                      |
|    | *event*,                   |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  |     | int         |                                      |
|                                      |                                      |
|                                      |                                      |
|    | *event\_queue\_size*,      |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  |     | bool        |                                      |
|                                      |                                      |
|                                      |                                      |
|    | *stateless* = ``false``    |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
| |                                    |                                      |
|                  | )   |             |                                      |
|                                      |                                      |
|                                      |                                      |
|    |                            |    |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---+----------------------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Subscribe for device event reception with stateless support and event
queue.

The client call to subscribe for **device** event reception in the pull
model. Today, only one event type is supported for **device** event.
This event type is a device interface change event. Instead of a
callback method the client has to specify the size of the event
reception buffer. The event reception buffer is implemented as a round
robin buffer. This way the client can set-up different ways to receive
events.

-  Event reception buffer size = 1 : The client is interested only in
   the value of the last event received. All other events that have been
   received since the last reading are discarded.
-  Event reception buffer size > 1 : The client has chosen to keep an
   event history of a given size. When more events arrive since the last
   reading, older events will be discarded.
-  Event reception buffer size = ALL\_EVENTS : The client buffers all
   received events. The buffer size is unlimited and only restricted by
   the available memory for the client. The last call parameter is named
   stateless. When the stateless flag is set to false, an exception will
   be thrown when the event subscription encounters a problem. With the
   stateless flag set to true, the event subscription will always
   succeed.

Parameters
    +--------+----------------------+------------------------+
    | [in]   | event                | The event type         |
    +--------+----------------------+------------------------+
    | [in]   | event\_queue\_size   | The event queue size   |
    +--------+----------------------+------------------------+
    | [in]   | stateless            | The stateless flag     |
    +--------+----------------------+------------------------+

Returns
    The event identifier

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------+-----+---------+----------- |                                      |
| ------------+-----+----+             |                                      |
| | virtual void Tango::DeviceProxy::u |                                      |
| nlock   | (   | bool    | *force* =  |                                      |
| ``false``   | )   |    |             |                                      |
| +----------------------------------- |                                      |
| --------+-----+---------+----------- |                                      |
| ------------+-----+----+             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Unlock a device.

Unlock a device. If used, the method argument provides a back door on
the locking system. If this argument is set to true, the device will be
unlocked even if the caller is not the locker. This feature is provided
for administration purpose and should be used very carefully. If this
feature is used, the locker will receive a DeviceUnlocked exception
during the next call which is normally protected by the locking
`Tango <../../de/ddf/namespaceTango.html>`__ system.

Parameters
    +--------+---------+-------------------------+
    | [in]   | force   | The force unlock flag   |
    +--------+---------+-------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------+-----+--------+ |                                      |
| ---------------+-----+----+          |                                      |
| | virtual void Tango::DeviceProxy::u |                                      |
| nsubscribe\_event   | (   | int    | |                                      |
|  *event\_id*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+--------+ |                                      |
| ---------------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Unsubscribe for event reception.

Unsubscribe a client from receiving the event specified by event\_id.
event\_id is the event identifier returned by the
`DeviceProxy::subscribe\_event() <../../d9/d83/classTango_1_1DeviceProxy.html#af1b71ba4bd5427c2effd7321d53a7af4>`__
method.

Parameters
    +--------+-------------+------------------------+
    | [in]   | event\_id   | The event identifier   |
    +--------+-------------+------------------------+

Exceptions
    +---------------------+----+
    | EventSystemFailed   |    |
    +---------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| --------+-----+----+                 |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attribute   | (   | `DeviceAtt |                                      |
| ribute <../../d7/dca/classTango_1_1D |                                      |
| eviceAttribute.html>`__ &    | *attr |                                      |
| \_in*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+------ |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write a single attribute.

Write a single attribute. To insert the value to write you have to use
the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.
See Deviceproxy::write\_attributes for a usage example.

Parameters
    +--------+------------+----------------------------------------------------------------------------+
    | [in]   | attr\_in   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name and value   |
    +--------+------------+----------------------------------------------------------------------------+

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+-----------+-----+----+            |                                      |
| | virtual long Tango::DeviceProxy::w |                                      |
| rite\_attribute\_asynch   | (   | `D |                                      |
| eviceAttribute <../../d7/dca/classTa |                                      |
| ngo_1_1DeviceAttribute.html>`__ &    |                                      |
|  | *argin*   | )   |    |            |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+-----------+-----+----+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write a single attribute asynchronously.

Write asynchronously (polling model) a single attribute. To insert the
value to write you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.
This call returns an asynchronous call identifier which is needed to get
the server reply.

Parameters
    +--------+---------+--------------------------------+
    | [in]   | argin   | The attribute name and value   |
    +--------+---------+--------------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+------------+                      |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attribute\_asynch   | (   | `D |                                      |
| eviceAttribute <../../d7/dca/classTa |                                      |
| ngo_1_1DeviceAttribute.html>`__ &    |                                      |
|  | *argin*,   |                      |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+------------+                      |                                      |
| |                                    |                                      |
|                           |     | `C |                                      |
| allBack <../../d4/ded/classTango_1_1 |                                      |
| CallBack.html>`__ &                  |                                      |
|  | *cb*       |                      |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+------------+                      |                                      |
| |                                    |                                      |
|                           | )   |    |                                      |
|                                      |                                      |
|                                      |                                      |
|  |            |                      |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+------------+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write asynchronously in callback model a single attribute.

Write asynchronously (callback model) a single attribute. The last
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the *attr\_written()* method overloaded.

Parameters
    +--------+---------+--------------------------------+
    | [in]   | argin   | The attribute name and value   |
    +--------+---------+--------------------------------+
    | [in]   | cb      | The call-back object           |
    +--------+---------+--------------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| -----+--------+-----+----+           |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attribute\_reply   | (   | lon |                                      |
| g    | *id*   | )   |    |           |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| -----+--------+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the answer of one asynchronous write\_attribute (single
attribute) call is arrived.

Check if the answer of an asynchronous write\_attribute is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, the call returned. If the reply is
an exception, it is re-thrown by this call. An exception is also thrown
in case of the reply is not yet arrived.

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinevirtual                        |
| -------------------------+-----+---- |                                      |
| -----+--------------+                |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attribute\_reply   | (   | lon |                                      |
| g    | *id*,        |                |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| -----+--------------+                |                                      |
| |                                    |                                      |
|                          |     | lon |                                      |
| g    | *timeout*    |                |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| -----+--------------+                |                                      |
| |                                    |                                      |
|                          | )   |     |                                      |
|      |              |                |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| -----+--------------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the answer of one asynchronous write\_attribute call (single
attribute) is arrived with timeout.

Check if the answer of an asynchronous write\_attribute is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, the call returned. If the reply is
an exception, it is re-thrown by this call. If the reply is not yet
arrived, the call will wait (blocking the process) for the time
specified in timeout. If after timeout milliseconds, the reply is still
not there, an exception is thrown. If timeout is set to 0, the call
waits until the reply arrived.

Parameters
    +--------+-----------+-----------------------+
    | [in]   | id        | The call identifier   |
    +--------+-----------+-----------------------+
    | [in]   | timeout   | The timeout value     |
    +--------+-----------+-----------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+--------------+-----+----+      |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attributes   | (   | vector< ` |                                      |
| DeviceAttribute <../../d7/dca/classT |                                      |
| ango_1_1DeviceAttribute.html>`__ > & |                                      |
|     | *attr\_in*   | )   |    |      |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+--------------+-----+----+      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write the specified attributes.

Write the specified attributes. To insert the values to write you have
to use the operator of the
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
class which corresponds to the data type of the attribute. NOTE: There
is no automatic type conversion from the user type to the attribute
native type e.g. if an attribute expects a short you cannot insert it as
a double (this will throw an exception) you have to insert it as a
short. Note that this is the only API call which could throw a
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__
exception. See except to get all the details on this exception. Example
:

vector<DeviceAttribute> attr\_in;

string att1\_name("First\_attr");

string att2\_name("Second\_attr");

short short\_attr = ...;

double double\_attr = ...;

attr\_in.push\_back(DeviceAttribute(att1\_name,short\_attr));

attr\_in.push\_back(DeviceAttribute(att2\_name,double\_attr));

device->write\_attributes(attr\_in);

Parameters
    +--------+------------+-----------------------------+
    | [in]   | attr\_in   | Attributes name and value   |
    +--------+------------+-----------------------------+

Exceptions
    +-----------------------------------------------------------------+----------------------------------------------------------------------------------------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | or `NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__ from device   |
    +-----------------------------------------------------------------+----------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----------+-----+----+ |                                      |
| | virtual long Tango::DeviceProxy::w |                                      |
| rite\_attributes\_asynch   | (   | v |                                      |
| ector< `DeviceAttribute <../../d7/dc |                                      |
| a/classTango_1_1DeviceAttribute.html |                                      |
| >`__ > &    | *argin*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write asynchronously alist of attributes.

Write asynchronously (polling model) the specified attributes. To insert
the value to write you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.
This call returns an asynchronous call identifier which is needed to get
the server reply.

Parameters
    +--------+---------+---------------------------------+
    | [in]   | argin   | The attributes name and value   |
    +--------+---------+---------------------------------+

Returns
    The call identifier

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attributes\_asynch   | (   | v |                                      |
| ector< `DeviceAttribute <../../d7/dc |                                      |
| a/classTango_1_1DeviceAttribute.html |                                      |
| >`__ > &    | *argin*,   |           |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| |                                    |                                      |
|                            |     | ` |                                      |
| CallBack <../../d4/ded/classTango_1_ |                                      |
| 1CallBack.html>`__ &                 |                                      |
|             | *cb*       |           |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
| |                                    |                                      |
|                            | )   |   |                                      |
|                                      |                                      |
|                                      |                                      |
|             |            |           |                                      |
| +----------------------------------- |                                      |
| ---------------------------+-----+-- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+------------+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write asynchronously in callback model a list of attributes.

Write asynchronously (callback model) an attribute list. The last
argument is a reference to a callback object. This callback object
should be an instance of a user class inheriting from the
`Tango::CallBack <../../d4/ded/classTango_1_1CallBack.html>`__ class
with the *attr\_written()* method overloaded.

Parameters
    +--------+---------+----------------------------------+
    | [in]   | argin   | The attribute names and values   |
    +--------+---------+----------------------------------+
    | [in]   | cb      | The call-back object             |
    +--------+---------+----------------------------------+

Exceptions
    +--------------------+----+
    | ConnectionFailed   |    |
    +--------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| ------+--------+-----+----+          |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attributes\_reply   | (   | lo |                                      |
| ng    | *id*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------+--------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the answer of one asynchronous write\_attributes call is
arrived.

Check if the answer of an asynchronous write\_attributes is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, the call returned. If the reply is
an exception, it is re-thrown by this call. An exception is also thrown
in case of the reply is not yet arrived.

Parameters
    +--------+------+-----------------------+
    | [in]   | id   | The call identifier   |
    +--------+------+-----------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------------------------+-----+--- |                                      |
| ------+--------------+               |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_attributes\_reply   | (   | lo |                                      |
| ng    | *id*,        |               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------+--------------+               |                                      |
| |                                    |                                      |
|                           |     | lo |                                      |
| ng    | *timeout*    |               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------+--------------+               |                                      |
| |                                    |                                      |
|                           | )   |    |                                      |
|       |              |               |                                      |
| +----------------------------------- |                                      |
| --------------------------+-----+--- |                                      |
| ------+--------------+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the answer of one asynchronous write\_attributes call is
arrived with timeout.

Check if the answer of an asynchronous write\_attributes is arrived
(polling model). id is the asynchronous call identifier. If the reply is
arrived and if it is a valid reply, the call returned. If the reply is
an exception, it is re-thrown by this call. If the reply is not yet
arrived, the call will wait (blocking the process) for the time
specified in timeout. If after timeout milliseconds, the reply is still
not there, an exception is thrown. If timeout is set to 0, the call
waits until the reply arrived.

Parameters
    +--------+-----------+-----------------------+
    | [in]   | id        | The call identifier   |
    +--------+-----------+-----------------------+
    | [in]   | timeout   | The timeout value     |
    +--------+-----------+-----------------------+

Exceptions
    +--------------------------------------------------------------+---------------+
    | AsynCall,AsynReplyNotArrived,CommunicationFailed,DevFailed   | from device   |
    +--------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
| | virtual void Tango::DeviceProxy::w |                                      |
| rite\_pipe   | (   | `DevicePipe <.. |                                      |
| /../da/dc5/classTango_1_1DevicePipe. |                                      |
| html>`__ &    | *pipe\_data*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| -------------+-----+---------------- |                                      |
| ------------------------------------ |                                      |
| --------------+----------------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write a pipe.

Write a pipe.

Parameters
    +--------+--------------+--------------------------------------------------+
    | [in]   | pipe\_data   | Data to be sent to the device through the pipe   |
    +--------+--------------+--------------------------------------------------+

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -------+-----+----+                  |                                      |
| | virtual `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ Tango::DeviceProxy::write\_r |                                      |
| ead\_attribute   | (   | `DeviceAttr |                                      |
| ibute <../../d7/dca/classTango_1_1De |                                      |
| viceAttribute.html>`__ &    | *attr\ |                                      |
| _in*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------------+-----+------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write and read a single attribute.

Write then read a single attribute in a single network call. By default
(serialisation by device), the execution of this call in the server
can’t be interrupted by other clients. To insert/extract the value to
write/read you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.

Parameters
    +--------+------------+--------------------------------------------------------------------------------------------+
    | [in]   | attr\_in   | `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ name and value (to be written)   |
    +--------+------------+--------------------------------------------------------------------------------------------+

Returns
    The read attribute data

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------------+     |                                      |
| | virtual vector<`DeviceAttribute <. |                                      |
| ./../d7/dca/classTango_1_1DeviceAttr |                                      |
| ibute.html>`__\ >\* Tango::DevicePro |                                      |
| xy::write\_read\_attributes   | (    |                                      |
| | vector< `DeviceAttribute <../../d7 |                                      |
| /dca/classTango_1_1DeviceAttribute.h |                                      |
| tml>`__ > &    | *attr\_in*,   |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------------+     |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                               |      |                                      |
| | vector< string > &                 |                                      |
|                                      |                                      |
|                | *r\_names*    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------------+     |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                               | )    |                                      |
| |                                    |                                      |
|                                      |                                      |
|                |               |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------+----- |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------------+---------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write and read attribute(s)

Write then read attribute(s) in a single network call. By default
(serialisation by device), the execution of this call in the server
can’t be interrupted by other clients. On the server side, attribute(s)
are first written and if no exception has been thrown during the write
phase, attributes will be read. To insert/extract the value to
write/read you have to use the operator of the class
`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
which corresponds to the data type of the attribute. NOTE: There is no
automatic type conversion from the user type to the attribute native
type e.g. if an attribute expects a short you cannot insert it as a
double (this will throw an exception) you have to insert it as a short.

Parameters
    +--------+------------+---------------------------------------------------+
    | [in]   | attr\_in   | The attribute(s) name and value (to be written)   |
    +--------+------------+---------------------------------------------------+
    | [in]   | r\_names   | Names of attribute to be read                     |
    +--------+------------+---------------------------------------------------+

Returns
    The read attribute(s) data

Exceptions
    +-----------------------------------------------------------------+---------------+
    | ConnectionFailed,CommunicationFailed,DeviceUnlocked,DevFailed   | from device   |
    +-----------------------------------------------------------------+---------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| ---+----------------+-----+----+     |                                      |
| | virtual `DevicePipe <../../da/dc5/ |                                      |
| classTango_1_1DevicePipe.html>`__ Ta |                                      |
| ngo::DeviceProxy::write\_read\_pipe  |                                      |
|   | (   | `DevicePipe <../../da/dc5/ |                                      |
| classTango_1_1DevicePipe.html>`__ &  |                                      |
|    | *pipe\_data*   | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --+-----+--------------------------- |                                      |
| ------------------------------------ |                                      |
| ---+----------------+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Write then read a pipe.

Write then read a pipe in a single network call. By default
(serialisation by device), the execution of this call in the server
can’t be interrupted by other clients.

Parameters
    +--------+--------------+--------------------------------------------------+
    | [in]   | pipe\_data   | Data to be sent to the device through the pipe   |
    +--------+--------------+--------------------------------------------------+

Returns
    The pipe value in a
    `DevicePipe <../../da/dc5/classTango_1_1DevicePipe.html>`__ instance

Exceptions
    +----------------------------------------+----+
    | ConnectionFailed,CommunicationFailed   |    |
    +----------------------------------------+----+

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
| | friend class `AttributeProxy <../. |                                      |
| ./d3/d4b/classTango_1_1AttributeProx |                                      |
| y.html>`__   |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceProxy <../../d9/d83/classTango_1_1DeviceProxy.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d4/db5/classTango_1_1DeviceProxy__inherit__graph.png
.. |Collaboration graph| image:: ../../da/d61/classTango_1_1DeviceProxy__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
