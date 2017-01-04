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

PortabilityImpl.hh

`Go to the documentation of this
file. <../../da/dc7/PortabilityImpl_8hh.html>`__

1 //

2 // PortabilityImpl.hh

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

28 #ifndef \_LOG4TANGO\_PORTABILITYIMPL\_H

29 #define \_LOG4TANGO\_PORTABILITYIMPL\_H

30 

31 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

32 

33 #ifdef LOG4TANGO\_CSTDLIB\_NOT\_IN\_STD

34 #include <cstdlib>

35 namespace `std <../../d8/dcc/namespacestd.html>`__ {

36  static inline char \*getenv(const char \*name) { return
::getenv(name); };

37  static inline int atoi(const char \*nptr) { return ::atoi(nptr); };

38  static inline unsigned long int

39  strtoul(const char \*nptr, char \*\*endptr, int base) {

40  return ::strtol(nptr, endptr, base);

41  };

42 }

43 #endif

44 

45 #ifdef LOG4TANGO\_CSTRING\_NOT\_IN\_STD

46 #include <cstring>

47 namespace `std <../../d8/dcc/namespacestd.html>`__ {

48  static inline void \*memmove(void \*dest, const void \*src, size\_t
n) {

49  return ::memmove(dest, src, n);

50  };

51 }

52 #endif

53 

54 #ifdef LOG4TANGO\_CTIME\_NOT\_IN\_STD

55 #include <ctime>

56 namespace `std <../../d8/dcc/namespacestd.html>`__ {

57  static inline size\_t strftime(char \*strDest, size\_t maxsize,
const char \*format, const struct tm \*timeptr ) {

58  return ::strftime(strDest,maxsize,format,timeptr);

59  }

60  static inline struct tm \*localtime( const time\_t \*timer ) {
return ::localtime(timer); }

61  }

62 #endif

63 

64 #ifdef LOG4TANGO\_CMATH\_NOT\_IN\_STD

65 #include <cmath>

66 namespace `std <../../d8/dcc/namespacestd.html>`__ {

67  static inline int abs(int i) { return ::abs(i); }

68 }

69 #endif

70 

71 #endif // \_LOG4TANGO\_PORTABILITYIMPL\_H

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

-  `src <../../dir_dce6f6254c1e480719f507d4d11781da.html>`__
-  `log4tango <../../dir_c2bf562858037ce0c46f648f9a619349.html>`__
-  `PortabilityImpl.hh <../../da/dc7/PortabilityImpl_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
