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

pipedesc.h

`Go to the documentation of this
file. <../../da/dea/pipedesc_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : pipedesc.h

4 //

5 // description : Include file for the Pipe user configuration

6 //

7 // project : TANGO

8 //

9 // author(s) : E.Taurel

10 //

11 // Copyright (C) : 2014

12 // European Synchrotron Radiation Facility

13 // BP 220, Grenoble 38043

14 // FRANCE

15 //

16 // This file is part of Tango.

17 //

18 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

19 // License as published by the Free Software Foundation, either
version 3 of the License, or

20 // (at your option) any later version.

21 //

22 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

23 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

24 // GNU Lesser General Public License for more details.

25 //

26 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

27 // If not, see <http://www.gnu.org/licenses/>.

28 //

29 // $Revision$

30 //

31 //===================================================================================================================

32 

33 #ifndef \_PIPEDESC\_H

34 #define \_PIPEDESC\_H

35 

36 #include <tango.h>

37 

38 namespace `Tango <../../de/ddf/namespaceTango.html>`__

39 {

40 

41 

`58 <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__ class
`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__

59 {

60 public:

61 

`68 <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a82e93031702a5358117b85ec41e3b09c>`__ 
`UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a82e93031702a5358117b85ec41e3b09c>`__\ ():ext(Tango\_nullptr)
{}

70 

`78 <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a907036fa8c1fa267cc15ea8699eadfd1>`__ 
void
`set\_label <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a907036fa8c1fa267cc15ea8699eadfd1>`__\ (const
string &def\_label)

79  {

80  label = def\_label;

81  }

82 

`88 <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#aab0829fe22ca5e105e6168f4e3e9888b>`__ 
void
`set\_description <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#aab0829fe22ca5e105e6168f4e3e9888b>`__\ (const
string &def\_desc)

89  {

90  description = def\_desc;

91  }

93 

95 
~\ `UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__\ ()
{}

96 

97  string label;

98  string description;

99 

100 private:

101  class UserDefaultPipePropExt

102  {

103  };

104 

105 #ifdef HAS\_UNIQUE\_PTR

106  unique\_ptr<UserDefaultPipePropExt> ext; // Class extension

107 #else

108  UserDefaultPipePropExt \*ext;

109 #endif

110 };

111 

112 

113 } // End of Tango namespace

114 

115 #endif /\* \_PIPEDESC\_H \*/

`Tango::UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html>`__

User class to set pipe default properties.

**Definition:** pipedesc.h:58

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::UserDefaultPipeProp::UserDefaultPipeProp <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a82e93031702a5358117b85ec41e3b09c>`__

UserDefaultPipeProp()

Constructs a newly allocated UserDefaultPipeProp object.

**Definition:** pipedesc.h:68

`Tango::UserDefaultPipeProp::set\_description <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#aab0829fe22ca5e105e6168f4e3e9888b>`__

void set\_description(const string &def\_desc)

Set default description property.

**Definition:** pipedesc.h:88

`Tango::UserDefaultPipeProp::set\_label <../../d9/de2/classTango_1_1UserDefaultPipeProp.html#a907036fa8c1fa267cc15ea8699eadfd1>`__

void set\_label(const string &def\_label)

Set default label property.

**Definition:** pipedesc.h:78

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `pipedesc.h <../../da/dea/pipedesc_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
