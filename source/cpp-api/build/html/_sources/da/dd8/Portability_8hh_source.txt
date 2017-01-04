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

Portability.hh

`Go to the documentation of this
file. <../../da/dd8/Portability_8hh.html>`__

1 //

2 // Portability.hh

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

28 #ifndef \_LOG4TANGO\_PORTABILITY\_H

29 #define \_LOG4TANGO\_PORTABILITY\_H

30 

31 #if defined (\_MSC\_VER) \|\| defined(\_\_BORLANDC\_\_)

32 # include
<`log4tango/config-win32.h <../../dc/d5c/config-win32_8h.html>`__\ >

33 #else

34 # include <log4tango/config.h>

35 #endif

36 

37 #include "`Export.hh <../../df/d5d/Export_8hh.html>`__\ "

38 

39 #if defined(\_MSC\_VER)

40 # pragma warning( disable : 4786 ) // 255 char debug symbol limit

41 # pragma warning( disable : 4290 ) // throw specifier not implemented

42 # pragma warning( disable : 4251 ) // "class XXX should be exported"

43 

44 #define LOG4TANGO\_UNUSED(var) var

45 #else

46  #ifdef \_\_GNUC\_\_

47  #define LOG4TANGO\_UNUSED(var) var \_\_attribute\_\_ ((unused))

48  #else

`49 <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__ 
#define LOG4TANGO\_UNUSED(var) var

50  #endif

51 #endif

52 

53 #ifndef LOG4TANGO\_HAVE\_SSTREAM

54 #include <strstream>

55 namespace `std <../../d8/dcc/namespacestd.html>`__ {

`56 <../../d7/d24/classstd_1_1ostringstream.html>`__  class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__ : public
ostrstream {

57  public:

58  std::string str();

59  void str (const char\*);

60  };

61 }

62 #endif // LOG4TANGO\_HAVE\_SSTREAM

63 

64 #endif // \_LOG4TANGO\_PORTABILITY\_H

`config-win32.h <../../dc/d5c/config-win32_8h.html>`__

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`Export.hh <../../df/d5d/Export_8hh.html>`__

`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__

**Definition:** Portability.hh:56

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Portability.hh <../../da/dd8/Portability_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
