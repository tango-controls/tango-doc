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

Jive:raw-latex:`\cite{Jive doc}` is the tool provided to generate and
load a property file. To generate a device server process properties
file, select your device server process in the Server tab, right click
and select Save Server Data. A file selection window pops up allowing
you to choose your file name and path. To reload a file in the Tango
database, click on File then Load Property File.

Property file syntax
--------------------

**1 **\ #---------------------------------------------------------

2 # SERVER TimeoutTest/manu, TimeoutTest device declaration

3 #---------------------------------------------------------

4 

5 TimeoutTest/manu/DEVICE/TimeoutTest: et/to/01,\\ 

6                                      et/to/02,\\ 

7                                      et/to/03

8 

9 

10 # --- et/to/01 properties

11 

12 et/to/01->StringProp: Property

13 et/to/01->ArrayProp: 1,\\ 

14                      2,\\ 

15                      3

16 et/to/01->attr\_min\_poll\_period: TheAttr,\\ 

17                                 1000

18 et/to/01->AnotherStringProp: A long string

19 et/to/01->ArrayStringProp: the first prop,\\ 

20                            the second prop

21 

22 # --- et/to/01 attribute properties

23 

24 et/to/01/TheAttr->display\_unit: 1.0

25 et/to/01/TheAttr->event\_period: 1000

26 et/to/01/TheAttr->format: %4d

27 et/to/01/TheAttr->min\_alarm: -2.0

28 et/to/01/TheAttr->min\_value: -5.0

29 et/to/01/TheAttr->standard\_unit: 1.0

30 et/to/01/TheAttr->\_\_value: 111

31 et/to/01/BooAttr->event\_period: 1000doc\_url

32 et/to/01/TestAttr->display\_unit: 1.0

33 et/to/01/TestAttr->event\_period: 1000

34 et/to/01/TestAttr->format: %4d

35 et/to/01/TestAttr->standard\_unit: 1.0

36 et/to/01/DbAttr->abs\_change: 1.1

37 et/to/01/DbAttr->event\_period: 1000

38

39 CLASS/TimeoutTest->InheritedFrom:   Device\_4Impl

40 CLASS/TimeoutTest->doc\_url:   http://www.esrf.fr/some/path

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
