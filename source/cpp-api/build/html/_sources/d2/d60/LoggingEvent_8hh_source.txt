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

LoggingEvent.hh

`Go to the documentation of this
file. <../../d2/d60/LoggingEvent_8hh.html>`__

1 //

2 // LoggingEvent.hh

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

28 #ifndef \_LOG4TANGO\_LOGGINGEVENT\_H

29 #define \_LOG4TANGO\_LOGGINGEVENT\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include <string>

33 

34 #include "`Level.hh <../../d2/d33/Level_8hh.html>`__\ "

35 #include "`TimeStamp.hh <../../db/d7c/TimeStamp_8hh.html>`__\ "

36 

37 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

38 

47 //-----------------------------------------------------------------------------

48 // struct : LoggingEvent

49 //-----------------------------------------------------------------------------

`50 <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ struct
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

51 {

52 public:

63 #ifdef LOG4TANGO\_HAS\_NDC

64 
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ (const
std::string& logger,

65  const std::string& message,

66  const std::string& ndc,

67 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level);

68 #else

69 
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ (const
std::string& logger,

70  const std::string& message,

71 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level);

72 #endif // LOG4TANGO\_HAS\_NDC

73 

75 
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

76 

`78 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#af3e2d7c25fb876601d7a009cfef40905>`__ 
const std::string
`logger\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#af3e2d7c25fb876601d7a009cfef40905>`__;

79 

`81 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__ 
const std::string
`message <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__;

82 

83 #ifdef LOG4TANGO\_HAS\_NDC

84 

85  const std::string ndc;

86 #endif

87 

`89 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__ 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
`level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__;

90 

`92 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a6819a2b7cfcdc27390f2cbaa0ff4dcd1>`__ 
std::string
`thread\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a6819a2b7cfcdc27390f2cbaa0ff4dcd1>`__;

93 

`95 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ad811ff7b6b12fcefce201d91a95f6c75>`__ 
long
`thread\_id <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ad811ff7b6b12fcefce201d91a95f6c75>`__;

96 

`99 <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a69f17c639dea4fdca9db9a05f7cf810b>`__ 
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
`timestamp <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a69f17c639dea4fdca9db9a05f7cf810b>`__;

100 

101 private:

103  const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
operator= (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &);

104 };

105 

106 } // namespace log4tango

107 

108 #endif // \_LOG4TANGO\_LOGGINGEVENT\_H

109 

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::LoggingEvent::logger\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#af3e2d7c25fb876601d7a009cfef40905>`__

const std::string logger\_name

The logger name.

**Definition:** LoggingEvent.hh:78

`TimeStamp.hh <../../db/d7c/TimeStamp_8hh.html>`__

`log4tango::LoggingEvent::message <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ab2a64b1de2ffe194eb4050840bbb7e90>`__

const std::string message

The application supplied message of logging event.

**Definition:** LoggingEvent.hh:81

`Level.hh <../../d2/d33/Level_8hh.html>`__

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__

**Definition:** TimeStamp.hh:38

`log4tango::LoggingEvent::timestamp <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a69f17c639dea4fdca9db9a05f7cf810b>`__

TimeStamp timestamp

The number of seconds elapsed since the epoch (1/1/1970 00:00:00 UTC)
until logging event was created...

**Definition:** LoggingEvent.hh:99

`log4tango::LoggingEvent::thread\_name <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a6819a2b7cfcdc27390f2cbaa0ff4dcd1>`__

std::string thread\_name

Name of thread in which this logging event was generated.

**Definition:** LoggingEvent.hh:92

`log4tango::LoggingEvent::level <../../d8/df2/structlog4tango_1_1LoggingEvent.html#a669d5dbcaf34dff9ad9ec7578856a550>`__

Level::Value level

Level of logging event.

**Definition:** LoggingEvent.hh:89

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

`log4tango::LoggingEvent::thread\_id <../../d8/df2/structlog4tango_1_1LoggingEvent.html#ad811ff7b6b12fcefce201d91a95f6c75>`__

long thread\_id

id of thread in which this logging event was generated

**Definition:** LoggingEvent.hh:95

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
