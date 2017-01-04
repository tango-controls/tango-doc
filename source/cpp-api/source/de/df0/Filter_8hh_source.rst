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

Filter.hh

`Go to the documentation of this file. <../../de/df0/Filter_8hh.html>`__

1 //

2 // Filter.hh

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

28 #ifndef \_LOG4TANGO\_FILTER\_HH

29 #define \_LOG4TANGO\_FILTER\_HH

30 

31 #ifdef APPENDERS\_HAVE\_FILTERS

32 

33 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

34 #include
<`log4tango/LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__\ >

35 

36 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

37 

69 //-----------------------------------------------------------------------------

70 // class : Filter

71 //-----------------------------------------------------------------------------

72 class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
Filter

73 {

74 

75 public:

76 

77  typedef enum {

78  DENY = -1,

79  NEUTRAL = 0,

80  ACCEPT = 1

81  } Decision;

82 

86  Filter ();

87 

91  virtual ~Filter ();

92 

97  void set\_chained\_filter (Filter\* filter);

98 

104  inline Filter\* Filter::get\_chained\_filter (void) {

105  return \_chain;

106  }

107 

112  virtual Filter\* get\_end\_of\_chain (void);

113 

119  virtual void append\_chained\_filter (Filter\* filter);

120 

128  virtual Decision decide (const LoggingEvent& event);

129 

130 protected:

138  virtual Decision \_decide (const LoggingEvent& event) = 0;

139 

140 private:

141  Filter\* \_chain;

142 };

143 

144 } // namespace log4tango

145 

146 #endif // APPENDERS\_HAVE\_FILTERS

147 

148 #endif // \_LOG4TANGO\_FILTER\_HH

149 

150 

`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Filter.hh <../../de/df0/Filter_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
