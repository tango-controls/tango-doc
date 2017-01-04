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

TimeStamp.hh

`Go to the documentation of this
file. <../../db/d7c/TimeStamp_8hh.html>`__

1 //

2 // TimeStamp.hh

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

28 #ifndef \_LOG4TANGO\_TIMESTAMP\_H

29 #define \_LOG4TANGO\_TIMESTAMP\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 

33 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

34 

35 //-----------------------------------------------------------------------------

36 // Class : TimeStamp (timestamp abstraction)

37 //-----------------------------------------------------------------------------

`38 <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__

39 {

40 public:

44  `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__\ ();

45 

`49 <../../d2/df5/classlog4tango_1_1TimeStamp.html#acfd54cdae6f10111d7e0eb127962055c>`__ 
inline
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#acfd54cdae6f10111d7e0eb127962055c>`__
(const `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__\ &
t)

50  : \_seconds(t.\_seconds), \_micro\_seconds(t.\_micro\_seconds)

51  {

52  //--noop

53  };

54 

`59 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a953a716e551afe5d1af84994c42462dd>`__ 
inline
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#a953a716e551afe5d1af84994c42462dd>`__\ (unsigned
int seconds, unsigned int microseconds = 0)

60  : \_seconds(seconds), \_micro\_seconds(microseconds)

61  {

62  //--noop

63  };

64 

`68 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a94972a4ed5baac6f19536289ad12a890>`__ 
inline int
`get\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a94972a4ed5baac6f19536289ad12a890>`__
(void) const {

69  return \_seconds;

70  };

71 

`76 <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__ 
inline int
`get\_milliseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__
(void) const {

77  return \_micro\_seconds / 1000;

78  };

79 

`85 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__ 
inline int
`get\_microseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__
(void) const {

86  return \_micro\_seconds;

87  };

88 

`93 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a8aff592396c6987d1b0008fd7308346a>`__ 
static inline const
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__\ &
`get\_start\_time <../../d2/df5/classlog4tango_1_1TimeStamp.html#a8aff592396c6987d1b0008fd7308346a>`__
(void) {

94  return \_start\_stamp;

95  };

96 

`100 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a916933860753832c2b1444b3faa0dfcd>`__ 
inline void operator= (const
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__\ & t) {

101  \_seconds =
t.\ `\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__;

102  \_micro\_seconds =
t.\ `\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__;

`103 <../../d2/df5/classlog4tango_1_1TimeStamp.html#ae5498e41fd84e2a0f49bb7640ccec9ec>`__ 
};

104 

105 protected:

106  static
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
\_start\_stamp;

`107 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__ 
int
`\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__;

`108 <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__ 
int
`\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__;

109 };

110 

111 } // namespace log4tango

112 

113 #endif // \_LOG4TANGO\_TIMESTAMP\_H

114 

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::TimeStamp::TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#acfd54cdae6f10111d7e0eb127962055c>`__

TimeStamp(const TimeStamp &t)

Copy Constructor.

**Definition:** TimeStamp.hh:49

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__

**Definition:** TimeStamp.hh:38

`log4tango::TimeStamp::TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#a953a716e551afe5d1af84994c42462dd>`__

TimeStamp(unsigned int seconds, unsigned int microseconds=0)

Constructs a TimeStamp representing the given offset since the epoch (
00:00:00 1970/1/1 UTC)...

**Definition:** TimeStamp.hh:59

`log4tango::TimeStamp::get\_microseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__

int get\_microseconds(void) const

Returns the subsecond part of the TimeStamp in microseconds.

**Definition:** TimeStamp.hh:85

`log4tango::TimeStamp::\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__

int \_micro\_seconds

**Definition:** TimeStamp.hh:108

`log4tango::TimeStamp::get\_milliseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__

int get\_milliseconds(void) const

Returns the 'subseconds' part of the TimeStamp in milliseconds,
get\_milliseconds() == get\_microsecond...

**Definition:** TimeStamp.hh:76

`log4tango::TimeStamp::\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__

int \_seconds

**Definition:** TimeStamp.hh:107

`log4tango::TimeStamp::get\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a94972a4ed5baac6f19536289ad12a890>`__

int get\_seconds(void) const

Returns the 'seconds' part of the TimeStamp.

**Definition:** TimeStamp.hh:68

`log4tango::TimeStamp::get\_start\_time <../../d2/df5/classlog4tango_1_1TimeStamp.html#a8aff592396c6987d1b0008fd7308346a>`__

static const TimeStamp & get\_start\_time(void)

Returns a TimeStamp representing the time at which the application
started.

**Definition:** TimeStamp.hh:93

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `TimeStamp.hh <../../db/d7c/TimeStamp_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
