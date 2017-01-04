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

DummyThreads.hh

`Go to the documentation of this
file. <../../d7/d68/DummyThreads_8hh.html>`__

1 //

2 // DummyThreads.hh

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

28 #ifndef \_LOG4TANGO\_THREADING\_DUMMY\_THREADS\_H

29 #define \_LOG4TANGO\_THREADING\_DUMMY\_THREADS\_H

30 

31 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

32 #include <stdio.h>

33 #include <string>

34 

35 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

36 

`37 <../../db/d10/namespacelog4tango_1_1threading.html>`__ namespace
threading {

38 

39 std::string
`get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__
(void);

40 

`41 <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__ typedef
int
`Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__;

42 

`43 <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__ typedef
int
`ScopedLock <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__;

44 

45 #ifdef LOG4TANGO\_HAS\_NDC

46 template<typename T> class ThreadLocalDataHolder

47 {

48 public:

49  typedef T data\_type;

50 

51  inline ThreadLocalDataHolder ()

52  : \_data(0)

53  {

54  //no-op

55  };

56 

57  inline ~ThreadLocalDataHolder () {

58  if (\_data) {

59  delete \_data;

60  }

61  };

62 

63  inline T\* get (void) const {

64  return \_data;

65  };

66 

67  inline T\* operator->() const {

68  return get();

69  };

70 

71  inline T& operator\*() const {

72  return \*get();

73  };

74 

75  inline T\* release() {

76  T\* result = \_data;

77  \_data = 0;

78  return result;

79  };

80 

81  inline void reset (T\* p = 0) {

82  if (\_data) {

83  delete \_data;

84  }

85  \_data = p;

86  };

87 

88 private:

89  T\* \_data;

90 };

91 #endif // #ifdef LOG4TANGO\_HAS\_NDC

92 

93 } // namespace threading

94 

95 } // namespace log4tango

96 

97 #endif // \_LOG4TANGO\_THREADING\_DUMMY\_THREADS\_H

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`log4tango::threading::Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__

int Mutex

**Definition:** DummyThreads.hh:41

`log4tango::threading::ScopedLock <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__

int ScopedLock

**Definition:** DummyThreads.hh:43

`log4tango::threading::get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__

std::string get\_thread\_id(void)

**Definition:** DummyThreads.cpp:37

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `threading <../../dir_58cd9cfc9a679a0ea9e384cd3ddfdc12.html>`__
-  `DummyThreads.hh <../../d7/d68/DummyThreads_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
