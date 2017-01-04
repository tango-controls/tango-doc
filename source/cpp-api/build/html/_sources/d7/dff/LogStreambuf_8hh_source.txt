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

LogStreambuf.hh

`Go to the documentation of this
file. <../../d7/dff/LogStreambuf_8hh.html>`__

1 //

2 // LogStreambuf.hh

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

28 #ifndef \_LOG4TANGO\_STREAM\_BUFFER\_H

29 #define \_LOG4TANGO\_STREAM\_BUFFER\_H

30 

31 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

32 #include <`log4tango/Logger.hh <../../d1/d13/Logger_8hh.html>`__\ >

33 

34 //-----------------------------------------------------------------------------

35 // #DEFINES

36 //-----------------------------------------------------------------------------

`37 <../../d7/dff/LogStreambuf_8hh.html#a17303732aa74827e074fb65d980902af>`__ #define
kDEFAULT\_BUFFER\_SIZE 512

38 

39 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

40 

41 //-----------------------------------------------------------------------------

42 // Class : LogStreamBuf

43 //-----------------------------------------------------------------------------

`44 <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__ :
public std::streambuf

45 {

`46 <../../db/d3a/classlog4tango_1_1LogStreamBuf.html#aabe1238b9c317325110868340635ff1f>`__ 
friend class
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__;

47 

48 public:

49 

50  `LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__
(`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ \* logger,

51 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level,

52  bool filter = true,

53  size\_t bsize =
`kDEFAULT\_BUFFER\_SIZE <../../d7/dff/LogStreambuf_8hh.html#a17303732aa74827e074fb65d980902af>`__);

54 

55  virtual
~\ `LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__\ ();

56 

57 protected:

58 

59  virtual std::streamsize xsputn (const char\*, std::streamsize);

60 

61 

62  virtual int sync (void);

63 

64 private:

65 

66  int flush\_buffer (void);

67 

68  char \*\_buffer;

69 

70  `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ \*
\_logger;

71 

72 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
\_level;

73 

74  bool \_filter;

75 };

76 

77 } // namespace log4tango

78 

79 #endif // \_LOG4TANGO\_STREAM\_BUFFER\_H

80 

81 

`kDEFAULT\_BUFFER\_SIZE <../../d7/dff/LogStreambuf_8hh.html#a17303732aa74827e074fb65d980902af>`__

#define kDEFAULT\_BUFFER\_SIZE

**Definition:** LogStreambuf.hh:37

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__

**Definition:** Logger.hh:56

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__

**Definition:** LogStream.hh:46

`Logger.hh <../../d1/d13/Logger_8hh.html>`__

`log4tango::LogStreamBuf <../../db/d3a/classlog4tango_1_1LogStreamBuf.html>`__

**Definition:** LogStreambuf.hh:44

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LogStreambuf.hh <../../d7/dff/LogStreambuf_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
