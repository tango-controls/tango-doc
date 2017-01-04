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
`Typedefs <#typedef-members>`__

command.h File Reference

| ``#include <tango.h>``

Include dependency graph for command.h:

|image1|

`Go to the source code of this
file. <../../d0/d09/command_8h_source.html>`__

Classes
-------

class  

`Tango::Command <../../d2/d1d/classTango_1_1Command.html>`__

 

| This class is a class representing a command in the TANGO device
server pattern.
`More... <../../d2/d1d/classTango_1_1Command.html#details>`__

 

class  

`Tango::TemplCommand <../../de/de1/classTango_1_1TemplCommand.html>`__

 

| This class is a class representing a command in the template command
model without input or output parameter.
`More... <../../de/de1/classTango_1_1TemplCommand.html#details>`__

 

class  

`Tango::TemplCommandIn< INARG
> <../../d2/d50/classTango_1_1TemplCommandIn.html>`__

 

| This class is a class representing a command in the template command
model with input parameter but without output parameter.
`More... <../../d2/d50/classTango_1_1TemplCommandIn.html#details>`__

 

class  

`Tango::TemplCommandInOut< INARG, OUTARG
> <../../db/dbb/classTango_1_1TemplCommandInOut.html>`__

 

| This class is a class representing a command in the template command
model with output and input parameters.
`More... <../../db/dbb/classTango_1_1TemplCommandInOut.html#details>`__

 

class  

`Tango::TemplCommandOut< OUTARG
> <../../d3/d87/classTango_1_1TemplCommandOut.html>`__

 

| This class is a class representing a command in the template command
model with output parameter but without input parameter.
`More... <../../d3/d87/classTango_1_1TemplCommandOut.html#details>`__

 

struct  

`Tango::WantedCmd< A1, A2, R
> <../../db/d34/structTango_1_1WantedCmd.html>`__

 

Namespaces
----------

 

`Tango <../../de/ddf/namespaceTango.html>`__

 

| =============================================================================

 

Typedefs
--------

typedef bool(DeviceImpl::\* 

`Tango::ALLO\_PTR <../../de/ddf/namespaceTango.html#aa9a4f11e1e89ad0344f53eed576485f1>`__
)(const CORBA::Any &)

 

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `command.h <../../d0/d09/command_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../d4/d4d/command_8h__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
