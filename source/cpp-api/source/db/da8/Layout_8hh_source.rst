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

Layout.hh

`Go to the documentation of this file. <../../db/da8/Layout_8hh.html>`__

1 //

2 // Layout.hh

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

28 #ifndef \_LOG4TANGO\_LAYOUT\_H

29 #define \_LOG4TANGO\_LAYOUT\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include
"`threading/Threading.hh <../../d6/d51/Threading_8hh.html>`__\ "

33 #include "`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__\ "

34 #include <string>

35 

36 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

37 

38 //-----------------------------------------------------------------------------

39 // class : Appender (abstract class)

40 //-----------------------------------------------------------------------------

`41 <../../d7/da6/classlog4tango_1_1Layout.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

42 {

43 public:

44 

`48 <../../d7/da6/classlog4tango_1_1Layout.html#a053084d0c22a45a3304a75f7b0c5de39>`__ 
`Layout <../../d7/da6/classlog4tango_1_1Layout.html#a053084d0c22a45a3304a75f7b0c5de39>`__\ ()
{};

49 

`53 <../../d7/da6/classlog4tango_1_1Layout.html#ae3298877b40a255b5723a6cfa58e00ea>`__ 
virtual
`~Layout <../../d7/da6/classlog4tango_1_1Layout.html#ae3298877b40a255b5723a6cfa58e00ea>`__\ ()
{};

54 

61  virtual std::string format (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

62 };

63 

64 } // namespace log4tango

65 

66 #endif // \_LOG4TANGO\_LAYOUT\_H

`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::Layout::Layout <../../d7/da6/classlog4tango_1_1Layout.html#a053084d0c22a45a3304a75f7b0c5de39>`__

Layout()

Constructor for Layout.

**Definition:** Layout.hh:48

`log4tango::Layout::~Layout <../../d7/da6/classlog4tango_1_1Layout.html#ae3298877b40a255b5723a6cfa58e00ea>`__

virtual ~Layout()

Destructor for Layout.

**Definition:** Layout.hh:53

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

**Definition:** Layout.hh:41

`Threading.hh <../../d6/d51/Threading_8hh.html>`__

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Layout.hh <../../db/da8/Layout_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
