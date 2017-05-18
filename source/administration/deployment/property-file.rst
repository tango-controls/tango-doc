.. raw:: latex

    \clearpage

.. _property_file:

The property file syntax
========================

Property file usage
-------------------

A property file is a file where you store all the property(ies) related
to device(s) belonging to a specific device server process. In this
file, one can find:

-  Which device(s) has to be created for each Tango class embedded in
   the device server process

-  Device(s) properties

-  Device(s) attribute properties

This type of file is not required by a Tango control system. These
informations are stored in the Tango database and having them also in a
file could generate some data duplication issues. Nevertheless, in some
cases, it could very very helpful to generate this type of file. These
cases are:

#. If you want to run a device server process on a host which does not
   have access to the Tango control system database. In such a case, the
   user can generate the file from the database content and run the
   device server process using this file as database (-file option of
   device server process)

#. In case of massive property changes where no tool will be more
   adapted than your favorite text editor. In such a case, the user can
   generate a file from the database content, change/add/modify file
   contents using his favorite tool and then reload file content into
   the database.

Jive (`JIVE home page`_) is the tool provided to generate and
load a property file. To generate a device server process properties
file, select your device server process in the Server tab, right click
and select Save Server Data. A file selection window pops up allowing
you to choose your file name and path. To reload a file in the Tango
database, click on File then Load Property File.

Property file syntax
--------------------

.. code:: cpp
  :number-lines:

   #---------------------------------------------------------
   # SERVER TimeoutTest/manu, TimeoutTest device declaration
   #---------------------------------------------------------

   TimeoutTest/manu/DEVICE/TimeoutTest: "et/to/01",\
                                        "et/to/02",\
                                        "et/to/03"


   # --- et/to/01 properties

   et/to/01->StringProp: Property
   et/to/01->ArrayProp: 1,\
                        2,\
                        3
   et/to/01->attr_min_poll_period: TheAttr,\
                                   1000
   et/to/01->AnotherStringProp: "A long string"
   et/to/01->ArrayStringProp: "the first prop",\
                              "the second prop"

   # --- et/to/01 attribute properties

   et/to/01/TheAttr->display_unit: 1.0
   et/to/01/TheAttr->event_period: 1000
   et/to/01/TheAttr->format: %4d
   et/to/01/TheAttr->min_alarm: -2.0
   et/to/01/TheAttr->min_value: -5.0
   et/to/01/TheAttr->standard_unit: 1.0
   et/to/01/TheAttr->__value: 111
   et/to/01/BooAttr->event_period: 1000doc_url
   et/to/01/TestAttr->display_unit: 1.0
   et/to/01/TestAttr->event_period: 1000
   et/to/01/TestAttr->format: %4d
   et/to/01/TestAttr->standard_unit: 1.0
   et/to/01/DbAttr->abs_change: 1.1
   et/to/01/DbAttr->event_period: 1000

   CLASS/TimeoutTest->InheritedFrom:   Device_4Impl
   CLASS/TimeoutTest->doc_url:   "http://www.esrf.fr/some/path"

Line 1 - 3: Comments. Comment starts with the ’#’ character

Line 4: Blank line

Line 5 - 7: Devices definition. DEVICE is the keyword to declare a
device(s) definition sequence. The general syntax is:

<DS name>/<inst name>/DEVICE/<Class name>: dev1,dev2,dev3

Device(s) name can follow on next line if the last line character is
’\\’ (see line 5,6). The ’’ characters around device name are generated
by the Jive tool and are not mandatory.

Line 12: Device property definition. The general device property syntax
is

<device name>\ **->**\ <property name>: <property value>

In case of array, the array element delimiter is the character ’,’.
Array definition can be splitted on several lines if the last line
character is ’\\’. Allowed characters after the ’:’ delimiter are space,
tabulation or nothing.

Line 13 - 15 and 16 - 17: Device property (array)

Line 18: A device string property with special characters (spaces). The
’’ character is used to delimit the string

Line 24 - 37: Device attribute property definition. The general device
attribute property syntax is

<device name>/<attribute name>\ **->**\ <property name>: <property
value>

Allowed characters after the ’:’ delimiter are space, tabulation or
nothing.

Line 39 - 40: Class property definition. The general class property
syntax is

CLASS/<class name>\ **->**\ <property name>: <property value>

CLASS is the keyword to declare a class property definition. Allowed
characters after the ’:’ delimiter are space, tabulation or nothing. On
line 40, the ’’ characters around the property value are mandatory due
to the ’/’ character contains in the property value.

