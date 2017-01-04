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

XmlLayout.hh

`Go to the documentation of this
file. <../../d3/d7f/XmlLayout_8hh.html>`__

1 //

2 // XMLLayout.hh

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

28 #ifndef \_LOG4TANGO\_XML\_LAYOUT\_H

29 #define \_LOG4TANGO\_XML\_LAYOUT\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include "`Layout.hh <../../db/da8/Layout_8hh.html>`__\ "

33 

34 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

35 

`39 <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ : public
`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

40 {

41 public:

45  `XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ ();

46 

50  virtual
~\ `XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__ ();

51 

55  virtual std::string format (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

56 

57 private:

61  void appendEscapingCDATA(std::string buf, std::string str);

62 };

63 

64 } // namespace log4tango

65 

66 #endif // \_LOG4TANGO\_XML\_LAYOUT\_H

`Layout.hh <../../db/da8/Layout_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::XMLLayout <../../d2/d7c/classlog4tango_1_1XMLLayout.html>`__

XMLLayout is a simple fixed format Layout implementation.

**Definition:** XmlLayout.hh:39

`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

**Definition:** Layout.hh:41

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `XmlLayout.hh <../../d3/d7f/XmlLayout_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
