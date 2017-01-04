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

Threading.hh

`Go to the documentation of this
file. <../../d6/d51/Threading_8hh.html>`__

1 //

2 // Threading.hh

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

28 #ifndef \_LOG4TANGO\_THREADING\_THREADING\_H

29 #define \_LOG4TANGO\_THREADING\_THREADING\_H

30 

31 #include "../Portability.hh"

32 

33 #ifdef LOG4TANGO\_HAVE\_THREADING

34 

35 # ifdef LOG4TANGO\_USE\_MSTHREADS

36 # include
<`log4tango/threading/MSThreads.hh <../../db/d37/MSThreads_8hh.html>`__\ >

37 # endif

38 # ifdef LOG4TANGO\_USE\_PTHREADS

39 # include "`PThreads.hh <../../d0/d6c/PThreads_8hh.html>`__\ "

40 # endif

41 

42 #else

43 

44 # include
<`log4tango/threading/DummyThreads.hh <../../d7/d68/DummyThreads_8hh.html>`__\ >

45 

46 #endif

47 

48 #endif // \_LOG4TANGO\_THREADING\_THREADING\_H

`PThreads.hh <../../d0/d6c/PThreads_8hh.html>`__

`MSThreads.hh <../../db/d37/MSThreads_8hh.html>`__

`DummyThreads.hh <../../d7/d68/DummyThreads_8hh.html>`__

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `threading <../../dir_58cd9cfc9a679a0ea9e384cd3ddfdc12.html>`__
-  `Threading.hh <../../d6/d51/Threading_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
