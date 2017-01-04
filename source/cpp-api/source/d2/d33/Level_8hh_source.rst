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

Level.hh

`Go to the documentation of this file. <../../d2/d33/Level_8hh.html>`__

1 //

2 // Level.hh

3 //

4 // Copyright (C) : 2000 - 2002

5 // LifeLine Networks BV (www.lifeline.nl). All rights reserved.

6 // Bastiaan Bakker. All rights reserved.

7 //

8 // 2004,2005,2006,2007,2008,2009,2010,2011,2012

9 // Synchrotron SOLEIL

10 // L'Orme des Merisiers

11 // Saint-Aubin - BP 48 - France

12 //

13 // This file is part of log4tango.

14 //

15 // Log4ango is free software: you can redistribute it and/or modify

16 // it under the terms of the GNU Lesser General Public License as
published by

17 // the Free Software Foundation, either version 3 of the License, or

18 // (at your option) any later version.

19 //

20 // Log4tango is distributed in the hope that it will be useful,

21 // but WITHOUT ANY WARRANTY; without even the implied warranty of

22 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

23 // GNU Lesser General Public License for more details.

24 //

25 // You should have received a copy of the GNU Lesser General Public
License

26 // along with Log4Tango. If not, see <http://www.gnu.org/licenses/>.

27 

28 #ifndef \_LOG4TANGO\_LEVEL\_H

29 #define \_LOG4TANGO\_LEVEL\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include <string>

33 #include <stdexcept>

34 

35 /\*

36  \* Optionally work around rudeness in windows.h on Win32.

37  \*/

38 #ifdef ERROR

39 #ifdef LOG4TANGO\_FIX\_ERROR\_COLLISION

40 

41 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

42  static const int \_tmpERRORValue = ERROR;

43 }

44 

45 #undef ERROR

46  static const int ERROR = log4tango::\_tmpERRORValue;

47 #define ERROR ERROR

48 

49 #else // LOG4TANGO\_FIX\_ERROR\_COLLISION

50 #error Naming collision for 'ERROR' detected. Please read the FAQ for
a \\

51  workaround.

52 #endif // LOG4TANGO\_FIX\_ERROR\_COLLISION

53 

54 #endif // ERROR

55 

56 /\*

57  \* Other Win32 rudeness in EDK.h

58  \*/

59 #ifdef DEBUG

60 

61 #ifdef LOG4TANGO\_FIX\_ERROR\_COLLISION

62 

63 #undef DEBUG

64 #define DEBUG DEBUG

65 

66 #else // LOG4TANGO\_FIX\_ERROR\_COLLISION

67 #error Naming collision for 'DEBUG' detected. Please read the FAQ for
a \\

68  workaround.

69 #endif // LOG4TANGO\_FIX\_ERROR\_COLLISION

70 

71 #endif // DEBUG

72 

73 

74 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

75 

76 //-----------------------------------------------------------------------------

77 // class : Level

78 //-----------------------------------------------------------------------------

`79 <../../d8/d0e/classlog4tango_1_1Level.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Level <../../d8/d0e/classlog4tango_1_1Level.html>`__

80 {

81 public:

82 

`86 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461>`__ 
typedef enum {

`87 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__ 
OFF = 100,

`88 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__ 
FATAL = 200,

`89 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__ 
ERROR = 300,

`90 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__ 
WARN = 400,

`91 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__ 
`INFO <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__
= 500,

`92 <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__ 
DEBUG = 600

93  } LevelLevel;

94 

`98 <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__ 
typedef int
`Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__;

99 

108  static const std::string& get\_name (Value level);

109 

119  static Value get\_value (const std::string& level\_name)

120  throw(std::invalid\_argument);

121 };

122 

123 } // namespace log4tango

124 

125 #endif // \_LOG4TANGO\_LEVEL\_H

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::Level <../../d8/d0e/classlog4tango_1_1Level.html>`__

**Definition:** Level.hh:79

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

`Tango::INFO <../../de/ddf/namespaceTango.html#a70c30a7719984da8f69730dfdb6288e4ac747fe7f9889a1acb7d110e8ff491a69>`__

**Definition:** tango\_const.h:941

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Level.hh <../../d2/d33/Level_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
