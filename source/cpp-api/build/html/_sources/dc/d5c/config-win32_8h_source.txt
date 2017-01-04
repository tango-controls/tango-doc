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

config-win32.h

`Go to the documentation of this
file. <../../dc/d5c/config-win32_8h.html>`__

1 //

2 // config-win32.hh

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

28 #ifndef \_INCLUDE\_LOG4TANGO\_CONFIG\_WIN32\_H

29 #define \_INCLUDE\_LOG4TANGO\_CONFIG\_WIN32\_H 1

30 

31 /\* manually edited from include/log4tango/config.h \*/

32 

33 /\* Define if you have the syslog function. \*/

34 /\* #undef LOG4TANGO\_HAVE\_SYSLOG \*/

35 

36 /\* Define if you have the \`ftime' function. \*/

37 #ifndef LOG4TANGO\_HAVE\_FTIME

`38 <../../dc/d5c/config-win32_8h.html#ac492a1f9d85c862446bf20a4d71f284f>`__ #
define LOG4TANGO\_HAVE\_FTIME 1

39 #endif

40 

41 /\* Define if you have the \`gettimeofday' function. \*/

42 /\* #undef LOG4TANGO\_HAVE\_GETTIMEOFDAY \*/

43 

44 /\* define if the compiler has int64\_t \*/

45 #ifndef LOG4TANGO\_HAVE\_INT64\_T

`46 <../../dc/d5c/config-win32_8h.html#aef0b926c63a2735c24fb9677cb0f1015>`__ #define
LOG4TANGO\_HAVE\_INT64\_T

47 //#define int64\_t \_\_int64

`48 <../../dc/d5c/config-win32_8h.html#a67a9885ef4908cb72ce26d75b694386c>`__ typedef
\_\_int64
`int64\_t <../../dc/d5c/config-win32_8h.html#a67a9885ef4908cb72ce26d75b694386c>`__;

49 

50 #if defined(\_MSC\_VER) && \_MSC\_VER < 1300

51 # define LOG4TANGO\_MISSING\_INT64\_OSTREAM\_OP

52 #endif

53 

54 #endif

55 

56 /\* Define if you have the <io.h> header file. \*/

57 #ifndef LOG4TANGO\_HAVE\_IO\_H

`58 <../../dc/d5c/config-win32_8h.html#a1a6c808e0640cc974380511c6279b978>`__ #
define LOG4TANGO\_HAVE\_IO\_H 1

59 #endif

60 

61 /\* Define if you have the <unistd.h> header file. \*/

62 /\* #undef LOG4TANGO\_HAVE\_UNISTD\_H \*/

63 

64 /\* Define if you have the idsa library (-lidsa). \*/

65 /\* #undef LOG4TANGO\_HAVE\_LIBIDSA \*/

66 

67 /\* Define if you have the \`strcasecmp' function. \*/

68 /\* #undef LOG4TANGO\_HAVE\_STRCASECMP \*/

69 

70 /\* Name of package \*/

71 #ifndef LOG4TANGO\_PACKAGE

`72 <../../dc/d5c/config-win32_8h.html#a5d9607afa531130040cef0b7fd31c021>`__ #
define LOG4TANGO\_PACKAGE "log4tango"

73 #endif

74 

75 /\* Version number of package \*/

76 #ifndef LOG4TANGO\_VERSION

`77 <../../dc/d5c/config-win32_8h.html#a9afef51901812e2daa9e7faa557c29c3>`__ #
define LOG4TANGO\_VERSION "0.3.4"

78 #endif

79 

80 /\* define if the compiler implements namespaces \*/

81 #ifndef LOG4TANGO\_HAVE\_NAMESPACES

`82 <../../dc/d5c/config-win32_8h.html#ad5a921fd076de198c2e9cc83f5254376>`__ #
define LOG4TANGO\_HAVE\_NAMESPACES 1

83 #endif

84 

85 /\* define if the compiler has stringstream \*/

86 #ifndef LOG4TANGO\_HAVE\_SSTREAM

`87 <../../dc/d5c/config-win32_8h.html#abcbcf16a705691c3fc1c6842e9f2e850>`__ #
define LOG4TANGO\_HAVE\_SSTREAM 1

88 #endif

89 

90 /\* define if the C library has snprintf \*/

91 #ifndef LOG4TANGO\_HAVE\_SNPRINTF

`92 <../../dc/d5c/config-win32_8h.html#a929c3c3cdd0d6742f5b06a8015fefef1>`__ #
define LOG4TANGO\_HAVE\_SNPRINTF 1

93 #endif

94 

95 /\* define to get around problems with ERROR in windows.h \*/

96 #ifndef LOG4TANGO\_FIX\_ERROR\_COLLISION

`97 <../../dc/d5c/config-win32_8h.html#a035f5e502e96cd5e909dc6ca33a9083c>`__ #
define LOG4TANGO\_FIX\_ERROR\_COLLISION 1

98 #endif

99 

100 /\* define WIN32 for Borland \*/

101 #ifndef WIN32

`102 <../../dc/d5c/config-win32_8h.html#a6402e8b8594280624585b8fd643bfb65>`__ #
define WIN32

103 #endif

104 

105 /\* use threads \*/

106 #ifndef LOG4TANGO\_HAVE\_THREADING

`107 <../../dc/d5c/config-win32_8h.html#ab03bddf2508202a5a163ef82f4de82c9>`__ #
define LOG4TANGO\_HAVE\_THREADING

108 #endif

109 

110 /\* use ms threads \*/

111 #ifndef LOG4TANGO\_USE\_MSTHREADS

`112 <../../dc/d5c/config-win32_8h.html#ad6c861ed12235fbcb0697fcc7741a9fa>`__ #
define LOG4TANGO\_USE\_MSTHREADS

113 #endif

114 

115 /\* supply DLL main \*/

116 #ifndef LOG4TANGO\_SUPPLY\_DLLMAIN

`117 <../../dc/d5c/config-win32_8h.html#a1cf708c2fca25d90f2b8633876638e2b>`__ #
define LOG4TANGO\_SUPPLY\_DLLMAIN

118 #endif

119 

120 /\* MSVCs <cstdlib> and <cstring> headers are broken in the sense
that they

121  put functions in the global namespace instead of std::

122  The #defines below enable a workaround for MSVC 6 and lower. If
MSVC 7

123  is still broken please adjust the \_MSC\_VER version check and
report it.

124  See also bug report #628211.

125 \*/

126 #if defined(\_MSC\_VER) && \_MSC\_VER < 1300

127 

128 #ifndef LOG4TANGO\_CSTDLIB\_NOT\_IN\_STD

129 # define LOG4TANGO\_CSTDLIB\_NOT\_IN\_STD

130 #endif

131 

132 #ifndef LOG4TANGO\_CSTRING\_NOT\_IN\_STD

133 # define LOG4TANGO\_CSTRING\_NOT\_IN\_STD

134 #endif

135 

136 #ifndef LOG4TANGO\_CTIME\_NOT\_IN\_STD

137 # define LOG4TANGO\_CTIME\_NOT\_IN\_STD

138 #endif

139 

140 #ifndef LOG4TANGO\_CMATH\_NOT\_IN\_STD

141 # define LOG4TANGO\_CMATH\_NOT\_IN\_STD

142 #endif

143 

144 #endif

145 

146 /\* define mode\_t. Move to Portability.hh if more platforms need it
\*/

147 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__

148 {

`149 <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__ typedef
unsigned short
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__;

150 }

151 

152 /\* \_INCLUDE\_LOG4TANGO\_CONFIG\_WIN32\_H \*/

153 #endif

`log4tango::mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__

unsigned short mode\_t

**Definition:** config-win32.h:149

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`int64\_t <../../dc/d5c/config-win32_8h.html#a67a9885ef4908cb72ce26d75b694386c>`__

\_\_int64 int64\_t

**Definition:** config-win32.h:48

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `config-win32.h <../../dc/d5c/config-win32_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
