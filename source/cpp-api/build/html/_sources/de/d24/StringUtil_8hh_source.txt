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

StringUtil.hh

`Go to the documentation of this
file. <../../de/d24/StringUtil_8hh.html>`__

1 //

2 // StringUtil.hh

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

28 #ifndef \_LOG4TANGO\_STRINGUTIL\_H

29 #define \_LOG4TANGO\_STRINGUTIL\_H

30 

31 #include
"`PortabilityImpl.hh <../../da/dc7/PortabilityImpl_8hh.html>`__\ "

32 #include <string>

33 #include <vector>

34 #include <climits>

35 #include <stdarg.h>

36 

37 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

38 

`39 <../../d4/d04/classlog4tango_1_1StringUtil.html>`__ class
`StringUtil <../../d4/d04/classlog4tango_1_1StringUtil.html>`__

40 {

41 public:

42 

49  static std::string
`vform <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__\ (const
char\* format, va\_list args);

50 

55  static std::string
`trim <../../d4/d04/classlog4tango_1_1StringUtil.html#a5b1f1af63d4ac9d16150d08f2af6ebbc>`__\ (const
std::string& s);

56 

70  static unsigned int
`split <../../d4/d04/classlog4tango_1_1StringUtil.html#a0cbc8f98a127ba0cb36df3845e16405c>`__\ (std::vector<std::string>&
v,

71  const std::string& s, char delimiter,

72  unsigned int maxSegments = INT\_MAX);

73 

84  template<typename T>

`85 <../../d4/d04/classlog4tango_1_1StringUtil.html#aaefb28c23a501416d11eb8a0c41b5fd2>`__ 
static unsigned int
`split <../../d4/d04/classlog4tango_1_1StringUtil.html#aaefb28c23a501416d11eb8a0c41b5fd2>`__\ (T&
output,

86  const std::string& s, char delimiter,

87  unsigned int maxSegments = INT\_MAX)

88  {

89  std::string::size\_type left = 0;

90  unsigned int i;

91  for (i = 1; i < maxSegments; i++) {

92  std::string::size\_type right = s.find(delimiter, left);

93  if (right == std::string::npos) {

94  break;

95  }

96  \*output++ = s.substr(left, right - left);

97  left = right + 1;

98  }

99  \*output++ = s.substr(left);

100  return i;

101  }

102 };

103 

104 } // namespace log4tango

105 

106 #endif // \_LOG4TANGO\_STRINGUTIL\_HH

107 

`log4tango::StringUtil::split <../../d4/d04/classlog4tango_1_1StringUtil.html#aaefb28c23a501416d11eb8a0c41b5fd2>`__

static unsigned int split(T &output, const std::string &s, char
delimiter, unsigned int maxSegments=INT\_MAX)

splits a string into string segments based on the given delimiter and
assigns the segments through an...

**Definition:** StringUtil.hh:85

`log4tango::StringUtil <../../d4/d04/classlog4tango_1_1StringUtil.html>`__

**Definition:** StringUtil.hh:39

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`PortabilityImpl.hh <../../da/dc7/PortabilityImpl_8hh.html>`__

`log4tango::StringUtil::split <../../d4/d04/classlog4tango_1_1StringUtil.html#a0cbc8f98a127ba0cb36df3845e16405c>`__

static unsigned int split(std::vector< std::string > &v, const
std::string &s, char delimiter, unsigned int maxSegments=INT\_MAX)

splits a string into a vector of string segments based on the given
delimiter.

**Definition:** StringUtil.cpp:98

`log4tango::StringUtil::vform <../../d4/d04/classlog4tango_1_1StringUtil.html#a1588cfe00d2951f175025f949793f866>`__

static std::string vform(const char \*format, va\_list args)

Returns a string contructed from the a format specifier and a va\_list
of arguments, analogously to vprintf(3).

**Definition:** StringUtil.cpp:57

`log4tango::StringUtil::trim <../../d4/d04/classlog4tango_1_1StringUtil.html#a5b1f1af63d4ac9d16150d08f2af6ebbc>`__

static std::string trim(const std::string &s)

Returns a string identical to the given string but without leading or
trailing HTABs or spaces...

**Definition:** StringUtil.cpp:81

-  `src <../../dir_dce6f6254c1e480719f507d4d11781da.html>`__
-  `log4tango <../../dir_c2bf562858037ce0c46f648f9a619349.html>`__
-  `StringUtil.hh <../../de/d24/StringUtil_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
