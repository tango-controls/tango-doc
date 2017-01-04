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
members <../../d2/d40/classTango_1_1Attr-members.html>`__

Tango::Attr Class Reference

`Server classes <../../da/d64/group__Server.html>`__

User class to create a no dimension attribute object.
`More... <../../d5/dcd/classTango_1_1Attr.html#details>`__

Inheritance diagram for Tango::Attr:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

Constructors

Two constructor are defined for this class

 

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

 

Destructor

Only one desctructor is defined for this class

virtual 

`~Attr <../../d5/dcd/classTango_1_1Attr.html#af280714a1ec4254e7ad7009eb0e8feda>`__
()

 

| The object desctructor.
`More... <#af280714a1ec4254e7ad7009eb0e8feda>`__

 

Miscellaneous methods

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

 

Detailed Description
--------------------

User class to create a no dimension attribute object.

Information from this class and information fetched out from the
`Tango <../../de/ddf/namespaceTango.html>`__ database allows the
`Tango <../../de/ddf/namespaceTango.html>`__ core software to create the
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ object for the
attribute created by the user.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

+---------------------+-----+-------------------------+-----------------------------------+
| Tango::Attr::Attr   | (   | const char \*           | *name*,                           |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | long                    | *data\_type*,                     |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | Tango::AttrWriteType    | *w\_type* = ``Tango::READ``,      |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | const char \*           | *assoc* = ``AssocWritNotSpec``    |
+---------------------+-----+-------------------------+-----------------------------------+
|                     | )   |                         |                                   |
+---------------------+-----+-------------------------+-----------------------------------+

Constructs a newly allocated
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object.

The attribute display level is set to OPERATOR.

Parameters
    +--------------+----------------------------------------------------------------------------------------------+
    | name         | The attribute name                                                                           |
    +--------------+----------------------------------------------------------------------------------------------+
    | data\_type   | The attribute data type                                                                      |
    +--------------+----------------------------------------------------------------------------------------------+
    | w\_type      | The attribute type (read, write, read with write ...)                                        |
    +--------------+----------------------------------------------------------------------------------------------+
    | assoc        | Name of the associated writable attribute. This is used only the read with write attribute   |
    +--------------+----------------------------------------------------------------------------------------------+

+---------------------+-----+-------------------------+-----------------------------------+
| Tango::Attr::Attr   | (   | const char \*           | *name*,                           |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | long                    | *data\_type*,                     |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | Tango::DispLevel        | *disp*,                           |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | Tango::AttrWriteType    | *w\_type* = ``Tango::READ``,      |
+---------------------+-----+-------------------------+-----------------------------------+
|                     |     | const char \*           | *assoc* = ``AssocWritNotSpec``    |
+---------------------+-----+-------------------------+-----------------------------------+
|                     | )   |                         |                                   |
+---------------------+-----+-------------------------+-----------------------------------+

Constructs a newly allocated
`Attr <../../d5/dcd/classTango_1_1Attr.html>`__ object.

Parameters
    +--------------+----------------------------------------------------------------------------------------------+
    | name         | The attribute name                                                                           |
    +--------------+----------------------------------------------------------------------------------------------+
    | data\_type   | The attribute data type                                                                      |
    +--------------+----------------------------------------------------------------------------------------------+
    | disp         | The attribute display level                                                                  |
    +--------------+----------------------------------------------------------------------------------------------+
    | w\_type      | The attribute type (read, write, read with write ...)                                        |
    +--------------+----------------------------------------------------------------------------------------------+
    | assoc        | Name of the associated writable attribute. This is used only the read with write attribute   |
    +--------------+----------------------------------------------------------------------------------------------+

+---------------------+-----+---------------------+---------------------------------+
| Tango::Attr::Attr   | (   | const char \*       | *name*,                         |
+---------------------+-----+---------------------+---------------------------------+
|                     |     | Tango::DispLevel    | *disp* = ``Tango::OPERATOR``    |
+---------------------+-----+---------------------+---------------------------------+
|                     | )   |                     |                                 |
+---------------------+-----+---------------------+---------------------------------+

+--------------------------------------+--------------------------------------+
| +------------------------------+---- | virtual                              |
| -+----+-----+----+                   |                                      |
| | virtual Tango::Attr::~Attr   | (   |                                      |
|  |    | )   |    |                   |                                      |
| +------------------------------+---- |                                      |
| -+----+-----+----+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

The object desctructor.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+----+-----+----+         |                                      |
| | bool Tango::Attr::is\_archive\_eve |                                      |
| nt   | (   |    | )   |    |         |                                      |
| +----------------------------------- |                                      |
| -----+-----+----+-----+----+         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the archive event is fired manually for this attribute.

Returns
    A boolean set to true if a manual fire archive event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----+-----+----+-----+----+          |                                      |
| | bool Tango::Attr::is\_change\_even |                                      |
| t   | (   |    | )   |    |          |                                      |
| +----------------------------------- |                                      |
| ----+-----+----+-----+----+          |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the change event is fired manually for this attribute.

Returns
    A boolean set to true if a manual fire change event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
| | bool Tango::Attr::is\_check\_archi |                                      |
| ve\_criteria   | (   |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the archive event criteria should be checked when firing the
event manually.

Returns
    A boolean set to true if a archive event criteria will be checked.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
| | bool Tango::Attr::is\_check\_chang |                                      |
| e\_criteria   | (   |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| --------------+-----+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the change event criteria should be checked when firing the
event manually.

Returns
    A boolean set to true if a change event criteria will be checked.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---------+-----+----+-----+----+     |                                      |
| | bool Tango::Attr::is\_data\_ready\ |                                      |
| _event   | (   |    | )   |    |     |                                      |
| +----------------------------------- |                                      |
| ---------+-----+----+-----+----+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the data ready event is fired for this attribute.

Returns
    A boolean set to true if firing data ready event is implemented.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------+-----+---------+------------- |                                      |
| -----+                               |                                      |
| | void Tango::Attr::set\_archive\_ev |                                      |
| ent   | (   | bool    | *implemented |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| ------+-----+---------+------------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|       |     | bool    | *detect*     |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| ------+-----+---------+------------- |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|       | )   |         |              |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| ------+-----+---------+------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires archive events manually
without the polling to be started for the attribute If the detect
parameter is set to true, the criteria specified for the archive event
are verified and the event is only pushed if they are fulfilled.

If detect is set to false the event is fired without checking!

Parameters
    +---------------+-------------------------------------------------------------------------------+
    | implemented   | True when the server fires archive events manually.                           |
    +---------------+-------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the archive event properties when set to true.   |
    +---------------+-------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+---------+-------------- |                                      |
| ----+                                |                                      |
| | void Tango::Attr::set\_change\_eve |                                      |
| nt   | (   | bool    | *implemented* |                                      |
| ,   |                                |                                      |
| +----------------------------------- |                                      |
| -----+-----+---------+-------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|      |     | bool    | *detect*      |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -----+-----+---------+-------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|      | )   |         |               |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| -----+-----+---------+-------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires change events manually
without the polling to be started for the attribute.

If the detect parameter is set to true, the criteria specified for the
change event are verified and the event is only pushed if they are
fulfilled. If detect is set to false the event is fired without
checking!

Parameters
    +---------------+------------------------------------------------------------------------------+
    | implemented   | True when the server fires change events manually.                           |
    +---------------+------------------------------------------------------------------------------+
    | detect        | Triggers the verification of the change event properties when set to true.   |
    +---------------+------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ----------+-----+---------+--------- |                                      |
| --------+-----+----+                 |                                      |
| | void Tango::Attr::set\_data\_ready |                                      |
| \_event   | (   | bool    | *impleme |                                      |
| nted*   | )   |    |                 |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| --------+-----+----+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set a flag to indicate that the server fires data ready events.

Parameters
    +---------------+------------------------------------------------+
    | implemented   | True when the server fires data ready events   |
    +---------------+------------------------------------------------+

+----------------------------------------------+-----+------------------------------------------------------------------------------------+----------+-----+----+
| void Tango::Attr::set\_default\_properties   | (   | `UserDefaultAttrProp <../../de/d9a/classTango_1_1UserDefaultAttrProp.html>`__ &    | *prop*   | )   |    |
+----------------------------------------------+-----+------------------------------------------------------------------------------------+----------+-----+----+

Set default attribute properties.

Parameters
    +--------+-----------------------------------+
    | prop   | The user default property class   |
    +--------+-----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ---+-----+---------------------+---- |                                      |
| -------+-----+----+                  |                                      |
| | void Tango::Attr::set\_disp\_level |                                      |
|    | (   | Tango::DispLevel    | *le |                                      |
| vel*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| ---+-----+---------------------+---- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the attribute display level.

Parameters
    +---------+-------------------------------+
    | level   | The attribute display level   |
    +---------+-------------------------------+

+------------------------------------+-----+----+-----+----+
| void Tango::Attr::set\_memorized   | (   |    | )   |    |
+------------------------------------+-----+----+-----+----+

Set the attribute as memorized in database (only for scalar and writable
attribute) By default the setpoint will be written to the attribute
during initialisation! Use method
`set\_memorized\_init() <../../d5/dcd/classTango_1_1Attr.html#a5c1d94ccc3bacb8d728cf836df737889>`__
with false as argument if you don't want this feature.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------+------------ |                                      |
| ---------+-----+----+                |                                      |
| | void Tango::Attr::set\_memorized\_ |                                      |
| init   | (   | bool    | *write\_on\ |                                      |
| _init*   | )   |    |                |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------+------------ |                                      |
| ---------+-----+----+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the initialisation flag for memorized attributes true = the setpoint
value will be written to the attribute on initialisation false = only
the attribute setpoint is initialised.

No action is taken on the attribute

Parameters
    +-------------------+---------------------------------------------------------------------------------+
    | write\_on\_init   | If true the setpoint value will be written to the attribute on initialisation   |
    +-------------------+---------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------+------------ |                                      |
| +-----+----+                         |                                      |
| | void Tango::Attr::set\_polling\_pe |                                      |
| riod   | (   | long    | *update*    |                                      |
| | )   |    |                         |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------+------------ |                                      |
| +-----+----+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Set the attribute polling update period.

Parameters
    +----------+----------------------------------------+
    | update   | The attribute polling period (in mS)   |
    +----------+----------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `attrdesc.h <../../d4/d18/attrdesc_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Attr <../../d5/dcd/classTango_1_1Attr.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d3/d21/classTango_1_1Attr__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
