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
members <../../d0/d4f/classTango_1_1MultiAttribute-members.html>`__

Tango::MultiAttribute Class Reference

`Server classes <../../da/d64/group__Server.html>`__

There is one instance of this class for each device.
`More... <../../dc/d3b/classTango_1_1MultiAttribute.html#details>`__

Public Member Functions
-----------------------

Constructor

Only one constructor is defined for this class

 

`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#aafd0cc4e89eeef1687b827da72b2db34>`__
(string &dev\_name,
`DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__
\*dev\_class,
`DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*dev)

 

| Create a new
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
object. `More... <#aafd0cc4e89eeef1687b827da72b2db34>`__

 

Destructor

Only one desctructor is defined for this class

 

`~MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html#ad0f2a8d4aaff4735c71456d7ef6ba440>`__
()

 

| The
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
desctructor. `More... <#ad0f2a8d4aaff4735c71456d7ef6ba440>`__

 

Miscellaneous methods

`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ & 

`get\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a7b35eb2625bb190393524de6971e2a84>`__
(const char \*attr\_name)

 

| Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object
from its name. `More... <#a7b35eb2625bb190393524de6971e2a84>`__

 

`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ & 

`get\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__
(const long ind)

 

| Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object
from its index. `More... <#a30ec97afa15f663a53df8a07aab3b29f>`__

 

`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ & 

`get\_w\_attr\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a3023529c543ed802a58c9e1eb2b12ff3>`__
(const char \*attr\_name)

 

| Get Writable `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object from its name. `More... <#a3023529c543ed802a58c9e1eb2b12ff3>`__

 

`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ & 

`get\_w\_attr\_by\_ind <../../dc/d3b/classTango_1_1MultiAttribute.html#a1e02cdb7576f1758143226efabcc374c>`__
(const long ind)

 

| Get Writable `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object from its index. `More... <#a1e02cdb7576f1758143226efabcc374c>`__

 

long 

`get\_attr\_ind\_by\_name <../../dc/d3b/classTango_1_1MultiAttribute.html#a63ae2f2c06d88bb8b641a37898fdefdf>`__
(const char \*attr\_name)

 

| Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ index
into the main attribute vector from its name.
`More... <#a63ae2f2c06d88bb8b641a37898fdefdf>`__

 

vector< long > & 

`get\_alarm\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a18553cf9309d7a92f2f8d1fe96b7c637>`__
()

 

| Get list of attribute with an alarm level defined.
`More... <#a18553cf9309d7a92f2f8d1fe96b7c637>`__

 

unsigned long 

`get\_attr\_nb <../../dc/d3b/classTango_1_1MultiAttribute.html#a1eeb8abbdd3e3a44d60410758a0d0535>`__
()

 

| Get attribute number. `More... <#a1eeb8abbdd3e3a44d60410758a0d0535>`__

 

bool 

`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__
(const char \*attr\_name)

 

| Check alarm for one attribute with a given name.
`More... <#af25a9b37449cc1e596bd5154c710c8df>`__

 

bool 

`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a11c6b528f663726ccc8b39f0e0ddf967>`__
(const long ind)

 

| Check alarm for one attribute from its index in the main attributes
vector. `More... <#a11c6b528f663726ccc8b39f0e0ddf967>`__

 

bool 

`check\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a4293e644ee659ccc6796f8bf4bea8e5a>`__
()

 

| Check alarm on all attribute(s) with an alarm defined.
`More... <#a4293e644ee659ccc6796f8bf4bea8e5a>`__

 

void 

`read\_alarm <../../dc/d3b/classTango_1_1MultiAttribute.html#a5f848b890a266861a0dced1add52fe88>`__
(string &status)

 

| Add alarm message to device status.
`More... <#a5f848b890a266861a0dced1add52fe88>`__

 

vector< `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ \* >
& 

`get\_attribute\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a1cb698e75ba5417305de17409fbeb1b3>`__
()

 

| Get the vector of attribute objects.
`More... <#a1cb698e75ba5417305de17409fbeb1b3>`__

 

Protected Attributes
--------------------

Class data members

vector< `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ \* > 

`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__

 

| The `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ objects
vector. `More... <#aacf766c6cbdeef887e871ec408d80ff7>`__

 

vector< long > 

`writable\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aa256d20e115d7c13a17d82fa7fbdd2d5>`__

 

| The list of writable attribute.
`More... <#aa256d20e115d7c13a17d82fa7fbdd2d5>`__

 

vector< long > 

`alarm\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__

 

| The list of attribute with an alarm level defined.
`More... <#a2ae4228c1bc367771a1c7add54c60ff2>`__

 

Detailed Description
--------------------

There is one instance of this class for each device.

This class is mainly an aggregate of
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ or
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ objects. It
eases management of multiple attributes

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+---------------------------------------------------------------------+-----------------+
| Tango::MultiAttribute::MultiAttribute   | (   | string &                                                            | *dev\_name*,    |
+-----------------------------------------+-----+---------------------------------------------------------------------+-----------------+
|                                         |     | `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ \*    | *dev\_class*,   |
+-----------------------------------------+-----+---------------------------------------------------------------------+-----------------+
|                                         |     | `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*      | *dev*           |
+-----------------------------------------+-----+---------------------------------------------------------------------+-----------------+
|                                         | )   |                                                                     |                 |
+-----------------------------------------+-----+---------------------------------------------------------------------+-----------------+

Create a new
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
object.

This constructor will in-turn call the constructor of the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ or
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ class of all
the device class attributes.

Parameters
    +--------------+------------------------------------------------------------------------------------------------+
    | dev\_name    | The device name                                                                                |
    +--------------+------------------------------------------------------------------------------------------------+
    | dev\_class   | Reference to the device `DeviceClass <../../d4/dcd/classTango_1_1DeviceClass.html>`__ object   |
    +--------------+------------------------------------------------------------------------------------------------+
    | dev          | The device pointer                                                                             |
    +--------------+------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the command sent to the database failed. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+------------------------------------------+-----+----+-----+----+
| Tango::MultiAttribute::~MultiAttribute   | (   |    | )   |    |
+------------------------------------------+-----+----+-----+----+

The `MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+------------------+- |                                      |
| ---------------+-----+----+          |                                      |
| | bool Tango::MultiAttribute::check\ |                                      |
| _alarm   | (   | const char \*    |  |                                      |
| *attr\_name*   | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ---------+-----+------------------+- |                                      |
| ---------------+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check alarm for one attribute with a given name.

This method returns a boolean set to true if the attribute with the
given name is in alarm condition

Parameters
    +--------------+----------------------+
    | attr\_name   | The attribute name   |
    +--------------+----------------------+

Returns
    A boolean set to true if the attribute is in alarm

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute does not have any alarm level defined. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::Attribute::check\_alarm() <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__,
and
`get\_attr\_by\_name() <../../dc/d3b/classTango_1_1MultiAttribute.html#a7b35eb2625bb190393524de6971e2a84>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+---------------+---- |                                      |
| -----+-----+----+                    |                                      |
| | bool Tango::MultiAttribute::check\ |                                      |
| _alarm   | (   | const long    | *in |                                      |
| d*   | )   |    |                    |                                      |
| +----------------------------------- |                                      |
| ---------+-----+---------------+---- |                                      |
| -----+-----+----+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check alarm for one attribute from its index in the main attributes
vector.

This method returns a boolean set to true if the attribute with the
given index in the attrobite object vector is in alarm condition

Parameters
    +-------+-----------------------+
    | ind   | The attribute index   |
    +-------+-----------------------+

Returns
    A boolean set to true if the attribute is in alarm

Exceptions
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute does not have any alarm level defined. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::Attribute::check\_alarm() <../../d6/dad/classTango_1_1Attribute.html#a64b4a569c810258ae52a2acaadf15d55>`__,
and
`get\_attr\_by\_ind() <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__.

+--------------------------------------------+-----+----+-----+----+
| bool Tango::MultiAttribute::check\_alarm   | (   |    | )   |    |
+--------------------------------------------+-----+----+-----+----+

Check alarm on all attribute(s) with an alarm defined.

This method returns a boolean set to true if one of the attribute with
an alarm level defined is in alarm condition.

Returns
    A boolean set to true if one attribute is in alarm

Exceptions
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the alarm level are not defined for one of the attribute in the list of alarmable one Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
| | vector<long>& Tango::MultiAttribut |                                      |
| e::get\_alarm\_list   | (   |    | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| ----------------------+-----+----+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get list of attribute with an alarm level defined.

Returns
    A vector of long data. Each object is the index in the main
    attribute vector of attribute with alarm level defined

References
`alarm\_attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#a2ae4228c1bc367771a1c7add54c60ff2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+---------------+---------+---- |                                      |
| -+----+                              |                                      |
| | `Attribute <../../d6/dad/classTang |                                      |
| o_1_1Attribute.html>`__\ & Tango::Mu |                                      |
| ltiAttribute::get\_attr\_by\_ind   | |                                      |
|  (   | const long    | *ind*   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------------+ |                                      |
| -----+---------------+---------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object
from its index.

This method returns a reference to the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object from
the index in the main attribute vector

Parameters
    +-------+-----------------------+
    | ind   | The attribute index   |
    +-------+-----------------------+

Returns
    A reference to the
    `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object

References
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__.

Referenced by
`check\_alarm() <../../dc/d3b/classTango_1_1MultiAttribute.html#a11c6b528f663726ccc8b39f0e0ddf967>`__.

+-----------------------------------------------------------------------------------------------------------+-----+------------------+----------------+-----+----+
| `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__\ & Tango::MultiAttribute::get\_attr\_by\_name   | (   | const char \*    | *attr\_name*   | )   |    |
+-----------------------------------------------------------------------------------------------------------+-----+------------------+----------------+-----+----+

Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object
from its name.

This method returns a reference to the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object with a
name passed as parameter. The equality on attribute name is case
independant.

Parameters
    +--------------+----------------------+
    | attr\_name   | The attribute name   |
    +--------------+----------------------+

Returns
    A reference to the
    `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute is not defined. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------+

Referenced by
`check\_alarm() <../../dc/d3b/classTango_1_1MultiAttribute.html#af25a9b37449cc1e596bd5154c710c8df>`__.

+--------------------------------------------------------+-----+------------------+----------------+-----+----+
| long Tango::MultiAttribute::get\_attr\_ind\_by\_name   | (   | const char \*    | *attr\_name*   | )   |    |
+--------------------------------------------------------+-----+------------------+----------------+-----+----+

Get `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ index into
the main attribute vector from its name.

This method returns the index in the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ vector (stored
in the
`MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
object) of an attribute with a given name. The name equality is case
independant

Parameters
    +--------------+----------------------+
    | attr\_name   | The attribute name   |
    +--------------+----------------------+

Returns
    The index in the main attributes vector

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute is not found in the vector. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | unsigned long Tango::MultiAttribut |                                      |
| e::get\_attr\_nb   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get attribute number.

Returns
    The attribute number

References
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
| | vector<\ `Attribute <../../d6/dad/ |                                      |
| classTango_1_1Attribute.html>`__ \*> |                                      |
| & Tango::MultiAttribute::get\_attrib |                                      |
| ute\_list   | (   |    | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------+-----+----+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get the vector of attribute objects.

Returns the vector of attribute objects.

References
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+-----+---------------+--------- |                                      |
| +-----+----+                         |                                      |
| | `WAttribute <../../db/da8/classTan |                                      |
| go_1_1WAttribute.html>`__\ & Tango:: |                                      |
| MultiAttribute::get\_w\_attr\_by\_in |                                      |
| d   | (   | const long    | *ind*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----+-----+---------------+--------- |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Get Writable `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object from its index.

This method returns a reference to the Writable
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object from
the index in the main attribute vector

Parameters
    +-------+-----------------------+
    | ind   | The attribute index   |
    +-------+-----------------------+

Returns
    A reference to the
    `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ object

References
`attr\_list <../../dc/d3b/classTango_1_1MultiAttribute.html#aacf766c6cbdeef887e871ec408d80ff7>`__.

+----------------------------------------------------------------------------------------------------------------+-----+------------------+----------------+-----+----+
| `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__\ & Tango::MultiAttribute::get\_w\_attr\_by\_name   | (   | const char \*    | *attr\_name*   | )   |    |
+----------------------------------------------------------------------------------------------------------------+-----+------------------+----------------+-----+----+

Get Writable `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__
object from its name.

This method returns a reference to the
`WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ object with
a name passed as parameter. The equality on attribute name is case
independant.

Parameters
    +--------------+----------------------+
    | attr\_name   | The attribute name   |
    +--------------+----------------------+

Returns
    A reference to the writable attribute object

Exceptions
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | If the attribute is not defined. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------+

+-------------------------------------------+-----+-------------+------------+-----+----+
| void Tango::MultiAttribute::read\_alarm   | (   | string &    | *status*   | )   |    |
+-------------------------------------------+-----+-------------+------------+-----+----+

Add alarm message to device status.

This method add alarm mesage to the string passed as parameter. A
message is added for each attribute which is in alarm condition

Parameters
    +----------+--------------------------------------------+
    | status   | The string (should be the device status)   |
    +----------+--------------------------------------------+

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----------------------+              |                                      |
| | vector<long> Tango::MultiAttribute |                                      |
| ::alarm\_attr\_list   |              |                                      |
| +----------------------------------- |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The list of attribute with an alarm level defined.

It is a vector of index in the main attribute vector

Referenced by
`get\_alarm\_list() <../../dc/d3b/classTango_1_1MultiAttribute.html#a18553cf9309d7a92f2f8d1fe96b7c637>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+                                   |                                      |
| | vector<\ `Attribute <../../d6/dad/ |                                      |
| classTango_1_1Attribute.html>`__ \*> |                                      |
|  Tango::MultiAttribute::attr\_list   |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ objects
vector.

This vector is often referred as the main attributes vector

Referenced by
`get\_attr\_by\_ind() <../../dc/d3b/classTango_1_1MultiAttribute.html#a30ec97afa15f663a53df8a07aab3b29f>`__,
`get\_attr\_nb() <../../dc/d3b/classTango_1_1MultiAttribute.html#a1eeb8abbdd3e3a44d60410758a0d0535>`__,
`get\_attribute\_list() <../../dc/d3b/classTango_1_1MultiAttribute.html#a1cb698e75ba5417305de17409fbeb1b3>`__,
and
`get\_w\_attr\_by\_ind() <../../dc/d3b/classTango_1_1MultiAttribute.html#a1e02cdb7576f1758143226efabcc374c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -------------------------+           |                                      |
| | vector<long> Tango::MultiAttribute |                                      |
| ::writable\_attr\_list   |           |                                      |
| +----------------------------------- |                                      |
| -------------------------+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The list of writable attribute.

It is a vector of index in the main attribute vector

--------------

The documentation for this class was generated from the following file:

-  `multiattribute.h <../../da/dd1/multiattribute_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
