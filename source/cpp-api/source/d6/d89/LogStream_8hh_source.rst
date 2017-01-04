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

LogStream.hh

`Go to the documentation of this
file. <../../d6/d89/LogStream_8hh.html>`__

1 //

2 // LogStream.hh

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

28 #ifndef \_LOG4TANGO\_LOG\_STREAM\_H

29 #define \_LOG4TANGO\_LOG\_STREAM\_H

30 

31 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

32 #ifdef LOG4TANGO\_HAVE\_SSTREAM

33 # include <iostream>

34 #else

35 # include <iostream.h>

36 #endif

37 #include
<`log4tango/threading/Threading.hh <../../d6/d51/Threading_8hh.html>`__\ >

38 #include
<`log4tango/LogStreambuf.hh <../../d7/dff/LogStreambuf_8hh.html>`__\ >

39 #include
<`log4tango/LogSeparator.hh <../../d5/d64/LogSeparator_8hh.html>`__\ >

40 

41 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

42 

43 //-----------------------------------------------------------------------------

44 // Class : LogStream

45 //-----------------------------------------------------------------------------

`46 <../../d7/dff/classlog4tango_1_1LogStream.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__

47 {

48 protected:

49 

`50 <../../d7/dff/classlog4tango_1_1LogStream.html#a809fbebb6eac303284d9348eee8c25e3>`__ 
`threading::RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__
`\_rmutex <../../d7/dff/classlog4tango_1_1LogStream.html#a809fbebb6eac303284d9348eee8c25e3>`__;

51 

`52 <../../d7/dff/classlog4tango_1_1LogStream.html#a56e910c1670fcc56dc3ccf665fb7d686>`__ 
std::ostream
`\_ostream <../../d7/dff/classlog4tango_1_1LogStream.html#a56e910c1670fcc56dc3ccf665fb7d686>`__;

53 

54 public:

55 

56 
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ (`LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__\ \*
stream\_buf);

57 

58  virtual
~\ `LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ ();

59 

`60 <../../d7/dff/classlog4tango_1_1LogStream.html#a183f7f962965a0330300f5a1b6a58d2d>`__ 
inline `LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
`operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__\ (const
`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__\ &)
{

61  return \*this;

62  }

63 

`64 <../../d7/dff/classlog4tango_1_1LogStream.html#a63227c36b86838d90f78b6afeacff5a1>`__ 
template<typename T>
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
`operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__\ (const
T& t) {

65 
\_rmutex.\ `lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__\ ();

66  \_ostream << t;

67  return \*this;

68  }

69 

`70 <../../d7/dff/classlog4tango_1_1LogStream.html#ab46b78902a2d887f039c79239a4d4e43>`__ 
inline `LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
`operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__\ (`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__\ &)
{

71 
\_rmutex.\ `lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__\ ();

72  \_ostream.flush();

73 
\_rmutex.\ `unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__\ ();

74  return \*this;

75  }

76 };

77 

78 inline std::ostream&

`79 <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__ `operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__\ (std::ostream&
o\_str,
`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__\ &)

80 {

81  o\_str.flush();

82  return o\_str;

83 }

84 

85 } // namespace log4tango

86 

87 #endif // \_LOG4TANGO\_LOG\_STREAM\_H

`log4tango::LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__

**Definition:** LogSeparator.hh:46

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__

**Definition:** LogSeparator.hh:38

`log4tango::operator<< <../../d4/db0/namespacelog4tango.html#a0150a68ebe104703dbf0f9179c710955>`__

std::ostream & operator<<(std::ostream &o\_str, LogSeparator &)

**Definition:** LogStream.hh:79

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LogStreambuf.hh <../../d7/dff/LogStreambuf_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::threading::RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__

**Definition:** MSThreads.hh:123

`log4tango::LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__

**Definition:** LogStream.hh:46

`log4tango::LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__

**Definition:** LogStreambuf.hh:44

`log4tango::threading::RecursiveMutex::lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__

int lock(long timeout\_=0)

**Definition:** MSThreads.hh:142

`LogSeparator.hh <../../d5/d64/LogSeparator_8hh.html>`__

`Threading.hh <../../d6/d51/Threading_8hh.html>`__

`log4tango::LogStream::\_ostream <../../d7/dff/classlog4tango_1_1LogStream.html#a56e910c1670fcc56dc3ccf665fb7d686>`__

std::ostream \_ostream

**Definition:** LogStream.hh:52

`log4tango::LogStream::\_rmutex <../../d7/dff/classlog4tango_1_1LogStream.html#a809fbebb6eac303284d9348eee8c25e3>`__

threading::RecursiveMutex \_rmutex

**Definition:** LogStream.hh:50

`log4tango::threading::RecursiveMutex::unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__

void unlockn(void)

**Definition:** MSThreads.hh:159

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LogStream.hh <../../d6/d89/LogStream_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
