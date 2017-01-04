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
Functions <#pub-methods>`__ \| `Static Public Member
Functions <#pub-static-methods>`__ \| `List of all
members <../../da/d48/classTango_1_1ApiUtil-members.html>`__

Tango::ApiUtil Class Reference

`Client classes <../../d1/d45/group__Client.html>`__

Miscellaneous utility methods usefull in a
`Tango <../../de/ddf/namespaceTango.html>`__ client.
`More... <../../d7/d2a/classTango_1_1ApiUtil.html#details>`__

Public Member Functions
-----------------------

`cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__ 

`get\_asynch\_cb\_sub\_model <../../d7/d2a/classTango_1_1ApiUtil.html#af7dd5dc2e904f8af4d12d56386165624>`__
()

 

| Get asynchronous callback sub-model.
`More... <#af7dd5dc2e904f8af4d12d56386165624>`__

 

void 

`get\_asynch\_replies <../../d7/d2a/classTango_1_1ApiUtil.html#a5c4038939143cab55c417982b4b896fb>`__
()

 

| Fire callback methods for asynchronous request(s)
`More... <#a5c4038939143cab55c417982b4b896fb>`__

 

void 

`get\_asynch\_replies <../../d7/d2a/classTango_1_1ApiUtil.html#a5084d60c3ba8c3a8d20e22bb2b3355c7>`__
(long timeout)

 

| Fire callback methods for asynchronous request(s) with timeout.
`More... <#a5084d60c3ba8c3a8d20e22bb2b3355c7>`__

 

size\_t 

`pending\_asynch\_call <../../d7/d2a/classTango_1_1ApiUtil.html#a260c968e8e556692681c5b3af065b73b>`__
(`asyn\_req\_type <../../d1/d45/group__Client.html#ga6c80e2130b95642d5c39ee8db7a25620>`__
ty)

 

| Get pending asynchronous requets number.
`More... <#a260c968e8e556692681c5b3af065b73b>`__

 

void 

`set\_asynch\_cb\_sub\_model <../../d7/d2a/classTango_1_1ApiUtil.html#a316875dce449fb9b4fca8ec932f17d75>`__
(`cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__
csm)

 

| Set asynchronous callback sub-model.
`More... <#a316875dce449fb9b4fca8ec932f17d75>`__

 

Static Public Member Functions
------------------------------

static TANGO\_IMP\_EXP void 

`cleanup <../../d7/d2a/classTango_1_1ApiUtil.html#a6edde9186c939355ab52dc2cffa82e8c>`__
()

 

| Destroy the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
instance. `More... <#a6edde9186c939355ab52dc2cffa82e8c>`__

 

static TANGO\_IMP\_EXP int 

`get\_env\_var <../../d7/d2a/classTango_1_1ApiUtil.html#a8a7109bd160494b0bd0dbbe60478117e>`__
(const char \*name, string &value)

 

| Get environment variable.
`More... <#a8a7109bd160494b0bd0dbbe60478117e>`__

 

static TANGO\_IMP\_EXP
`ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__ \* 

`instance <../../d7/d2a/classTango_1_1ApiUtil.html#afbc9fb1ffff7730689224dea5a3d9676>`__
()

 

| Retrieve the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
instance. `More... <#afbc9fb1ffff7730689224dea5a3d9676>`__

 

Detailed Description
--------------------

Miscellaneous utility methods usefull in a
`Tango <../../de/ddf/namespaceTango.html>`__ client.

This class is a singleton. Therefore, it is not necessary to create it.
It will be automatically done. A static method allows a user to retrieve
the instance

Author
    taurel

Revision
    1

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
| | static TANGO\_IMP\_EXP void Tango: |                                      |
| :ApiUtil::cleanup   | (   |    | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| --------------------+-----+----+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Destroy the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
instance.

Destroy the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
singleton instance.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
| | `cb\_sub\_model <../../d1/d45/grou |                                      |
| p__Client.html#ga3a5254b5c0c8de0c71c |                                      |
| 18bad2bd742bc>`__ Tango::ApiUtil::ge |                                      |
| t\_asynch\_cb\_sub\_model   | (   |  |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+-----+- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get asynchronous callback sub-model.

Get the asynchronous callback sub-model

Returns
    The asynchronous callback sub-model

+---------------------------------------------+-----+----+-----+----+
| void Tango::ApiUtil::get\_asynch\_replies   | (   |    | )   |    |
+---------------------------------------------+-----+----+-----+----+

Fire callback methods for asynchronous request(s)

Fire callback methods for all (any device) asynchronous requests
(command and attribute) with already arrived replied. Returns
immediately if there is no replies already arrived or if there is no
asynchronous requests.

+---------------------------------------------+-----+---------+-------------+-----+----+
| void Tango::ApiUtil::get\_asynch\_replies   | (   | long    | *timeout*   | )   |    |
+---------------------------------------------+-----+---------+-------------+-----+----+

Fire callback methods for asynchronous request(s) with timeout.

Fire callback methods for all (any device) asynchronous requests
(command and attributes) with already arrived replied. Wait and block
the caller for timeout milliseconds if they are some device asynchronous
requests which are not yet arrived. Returns immediately if there is no
asynchronous request. If timeout is set to 0, the call waits until all
the asynchronous requests sent has received a reply.

Parameters
    +--------+-----------+---------------------+
    | [in]   | timeout   | The timeout value   |
    +--------+-----------+---------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| -------------------------+-----+---- |                                      |
| --------------+------------+         |                                      |
| | static TANGO\_IMP\_EXP int Tango:: |                                      |
| ApiUtil::get\_env\_var   | (   | con |                                      |
| st char \*    | *name*,    |         |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| --------------+------------+         |                                      |
| |                                    |                                      |
|                          |     | str |                                      |
| ing &         | *value*    |         |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| --------------+------------+         |                                      |
| |                                    |                                      |
|                          | )   |     |                                      |
|               |            |         |                                      |
| +----------------------------------- |                                      |
| -------------------------+-----+---- |                                      |
| --------------+------------+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get environment variable.

Get environment variable. On Unixes OS, this call tries to get the
variable in the caller environment then in a file **.tangorc in the user
home directory and finally in a file */etc/tangorc*. On Windows, this
call looks in the user environment then in a file stored in
TANGO\_HOME%/tangorc. This method returns 0 of the environment variable
is found. Otherwise, it returns -1.

Parameters
    +---------+---------+----------------------------------+
    | [in]    | name    | The environment variable name    |
    +---------+---------+----------------------------------+
    | [out]   | value   | The environment variable value   |
    +---------+---------+----------------------------------+

Returns
    Set to -1 if the environment varaibel is not found

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------------------------------ |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | `ApiUtil <../../d7/d2a/classTango_ |                                      |
| 1_1ApiUtil.html>`__ \* Tango::ApiUti |                                      |
| l::instance   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Retrieve the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
instance.

Some inline methods
-------------------

Return the `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
singleton instance

Returns
    The singleton instance

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+--------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+--------+-----+----+          |                                      |
| | size\_t Tango::ApiUtil::pending\_a |                                      |
| synch\_call   | (   | `asyn\_req\_ty |                                      |
| pe <../../d1/d45/group__Client.html# |                                      |
| ga6c80e2130b95642d5c39ee8db7a25620>` |                                      |
| __    | *ty*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------+--------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get pending asynchronous requets number.

Return number of asynchronous pending requests (any device).

Parameters
    +--------+------+-----------------------------+
    | [in]   | ty   | Asynchronous request type   |
    +--------+------+-----------------------------+

Returns
    Pending asynchronous request number

+----------------------------------------------------+-----+--------------------------------------------------------------------------------------------+---------+-----+----+
| void Tango::ApiUtil::set\_asynch\_cb\_sub\_model   | (   | `cb\_sub\_model <../../d1/d45/group__Client.html#ga3a5254b5c0c8de0c71c18bad2bd742bc>`__    | *csm*   | )   |    |
+----------------------------------------------------+-----+--------------------------------------------------------------------------------------------+---------+-----+----+

Set asynchronous callback sub-model.

Set the asynchronous callback sub-model between the pull and push
sub-model. See `Tango <../../de/ddf/namespaceTango.html>`__ book chapter
4.5 to read the definition of these sub-models. By default, all
`Tango <../../de/ddf/namespaceTango.html>`__ client using asynchronous
callback model are in pull sub-model. This call must be used to switch
to the push sub-model. NOTE that in push sub-model, a separate thread is
spawned to deal with server replies.

Parameters
    +--------+-------+---------------------------------------+
    | [in]   | csm   | The asynchronous callback sub-model   |
    +--------+-------+---------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `ApiUtil <../../d7/d2a/classTango_1_1ApiUtil.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
