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

`Public Attributes <#pub-attribs>`__ \| `List of all
members <../../d2/da6/structTango_1_1DeviceAttributeConfig-members.html>`__

Tango::DeviceAttributeConfig Struct Reference

Base structure for
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration.
`More... <../../db/d74/structTango_1_1DeviceAttributeConfig.html#details>`__

Inheritance diagram for Tango::DeviceAttributeConfig:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Attributes
-----------------

AttrDataFormat 

`data\_format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a10e944fe3cc1e6dce24ebfd2f474c294>`__

 

| Data format (Scalar, Spectrum,...)
`More... <#a10e944fe3cc1e6dce24ebfd2f474c294>`__

 

int 

`data\_type <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a2e2c5a17bc577057f9db3fec6fc5002c>`__

 

| Data type. `More... <#a2e2c5a17bc577057f9db3fec6fc5002c>`__

 

string 

`description <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a3ee3ca0543af398a2ee69901ab2086ea>`__

 

| Description. `More... <#a3ee3ca0543af398a2ee69901ab2086ea>`__

 

string 

`display\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae7ec9432c308d2080bff8390bf86e9dc>`__

 

| Display unit. `More... <#ae7ec9432c308d2080bff8390bf86e9dc>`__

 

vector< string > 

`extensions <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ae77d336e762e1c6e1e8fcea17d6b107f>`__

 

| For future extensions.
`More... <#ae77d336e762e1c6e1e8fcea17d6b107f>`__

 

string 

`format <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ad3ec3ee2584e54354a9ad398432b7e63>`__

 

| Format. `More... <#ad3ec3ee2584e54354a9ad398432b7e63>`__

 

string 

`label <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a4ec80e8421b9f1f3e250b047771a4a17>`__

 

| Label. `More... <#a4ec80e8421b9f1f3e250b047771a4a17>`__

 

string 

`max\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#ac2be6304818d741aa970abcb3ff91105>`__

 

| Max alarm. `More... <#ac2be6304818d741aa970abcb3ff91105>`__

 

int 

`max\_dim\_x <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a1194d38c18b4aaeba0989b14d912f17f>`__

 

| Max dim X. `More... <#a1194d38c18b4aaeba0989b14d912f17f>`__

 

int 

`max\_dim\_y <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a519d30179f56a9d0405a2b16fbd762eb>`__

 

| Max dim Y. `More... <#a519d30179f56a9d0405a2b16fbd762eb>`__

 

string 

`max\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a84c6e32024eb2ab01a03cb1016f2acbd>`__

 

| Max value. `More... <#a84c6e32024eb2ab01a03cb1016f2acbd>`__

 

string 

`min\_alarm <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a265cd1f58f040fbb4fdebb8a5eb13718>`__

 

| Min alarm. `More... <#a265cd1f58f040fbb4fdebb8a5eb13718>`__

 

string 

`min\_value <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa647cb22659434ffe9833adbfecb11ab>`__

 

| Min value. `More... <#aa647cb22659434ffe9833adbfecb11ab>`__

 

string 

`name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#aa986f46571ce7f48ac88d005034b16be>`__

 

| Name. `More... <#aa986f46571ce7f48ac88d005034b16be>`__

 

string 

`standard\_unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a6e39a2bd02dff03ba378d42e0f0892e8>`__

 

| Standard unit. `More... <#a6e39a2bd02dff03ba378d42e0f0892e8>`__

 

string 

`unit <../../db/d74/structTango_1_1DeviceAttributeConfig.html#abbfe98ae17bfc21368b6347b9611e4f8>`__

 

| Unit. `More... <#abbfe98ae17bfc21368b6347b9611e4f8>`__

 

AttrWriteType 

`writable <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a5f02c5c4d857bd6eec495a746dfaf646>`__

 

| Writable type (Read, Write,...)
`More... <#a5f02c5c4d857bd6eec495a746dfaf646>`__

 

string 

`writable\_attr\_name <../../db/d74/structTango_1_1DeviceAttributeConfig.html#a7c86de3d725f10a4ca07b086d04ce043>`__

 

| Writable att. name. `More... <#a7c86de3d725f10a4ca07b086d04ce043>`__

 

Detailed Description
--------------------

Base structure for
`Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ configuration.

Member Data Documentation
-------------------------

+-------------------------------------------------------------+
| AttrDataFormat Tango::DeviceAttributeConfig::data\_format   |
+-------------------------------------------------------------+

Data format (Scalar, Spectrum,...)

+------------------------------------------------+
| int Tango::DeviceAttributeConfig::data\_type   |
+------------------------------------------------+

Data type.

+----------------------------------------------------+
| string Tango::DeviceAttributeConfig::description   |
+----------------------------------------------------+

Description.

+------------------------------------------------------+
| string Tango::DeviceAttributeConfig::display\_unit   |
+------------------------------------------------------+

Display unit.

+-----------------------------------------------------------+
| vector<string> Tango::DeviceAttributeConfig::extensions   |
+-----------------------------------------------------------+

For future extensions.

+-----------------------------------------------+
| string Tango::DeviceAttributeConfig::format   |
+-----------------------------------------------+

Format.

+----------------------------------------------+
| string Tango::DeviceAttributeConfig::label   |
+----------------------------------------------+

Label.

+---------------------------------------------------+
| string Tango::DeviceAttributeConfig::max\_alarm   |
+---------------------------------------------------+

Max alarm.

+-------------------------------------------------+
| int Tango::DeviceAttributeConfig::max\_dim\_x   |
+-------------------------------------------------+

Max dim X.

+-------------------------------------------------+
| int Tango::DeviceAttributeConfig::max\_dim\_y   |
+-------------------------------------------------+

Max dim Y.

+---------------------------------------------------+
| string Tango::DeviceAttributeConfig::max\_value   |
+---------------------------------------------------+

Max value.

+---------------------------------------------------+
| string Tango::DeviceAttributeConfig::min\_alarm   |
+---------------------------------------------------+

Min alarm.

+---------------------------------------------------+
| string Tango::DeviceAttributeConfig::min\_value   |
+---------------------------------------------------+

Min value.

+---------------------------------------------+
| string Tango::DeviceAttributeConfig::name   |
+---------------------------------------------+

Name.

+-------------------------------------------------------+
| string Tango::DeviceAttributeConfig::standard\_unit   |
+-------------------------------------------------------+

Standard unit.

+---------------------------------------------+
| string Tango::DeviceAttributeConfig::unit   |
+---------------------------------------------+

Unit.

+--------------------------------------------------------+
| AttrWriteType Tango::DeviceAttributeConfig::writable   |
+--------------------------------------------------------+

Writable type (Read, Write,...)

+-------------------------------------------------------------+
| string Tango::DeviceAttributeConfig::writable\_attr\_name   |
+-------------------------------------------------------------+

Writable att. name.

--------------

The documentation for this struct was generated from the following file:

-  `devapi.h <../../d9/ddc/devapi_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `DeviceAttributeConfig <../../db/d74/structTango_1_1DeviceAttributeConfig.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d8/dd4/structTango_1_1DeviceAttributeConfig__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
