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

LayoutAppender.hh

`Go to the documentation of this
file. <../../d3/da3/LayoutAppender_8hh.html>`__

1 //

2 // LayoutAppender.hh

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

28 #ifndef \_LOG4TANGO\_LAYOUTAPPENDER\_H

29 #define \_LOG4TANGO\_LAYOUTAPPENDER\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include <string>

33 #include "`Appender.hh <../../d2/d5c/Appender_8hh.html>`__\ "

34 #include
"`PatternLayout.hh <../../df/d8c/PatternLayout_8hh.html>`__\ "

35 

36 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

37 

38 //-----------------------------------------------------------------------------

39 // class : LayoutAppender (superclass for appenders that require a
Layout)

40 //-----------------------------------------------------------------------------

`41 <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__
: public `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

42 {

43 public:

44 

`45 <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__ 
typedef `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__
`DefaultLayoutType <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__;

46 

47 
`LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__\ (const
std::string& name);

48 

49  virtual
~\ `LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__\ ();

50 

51  virtual bool requires\_layout() const;

52 

53  virtual void set\_layout
(`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__\ \* layout =
0);

54 

55 protected:

56 

57  `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__\ &
get\_layout();

58 

59 private:

60  `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__\ \*
\_layout;

61 };

62 

63 } // namespace log4tango

64 

65 #endif // \_LOG4TANGO\_LAYOUTAPPENDER\_H

66 

`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

**Definition:** LayoutAppender.hh:41

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Appender.hh <../../d2/d5c/Appender_8hh.html>`__

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`log4tango::LayoutAppender::DefaultLayoutType <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__

Layout DefaultLayoutType

**Definition:** LayoutAppender.hh:45

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`PatternLayout.hh <../../df/d8c/PatternLayout_8hh.html>`__

`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

**Definition:** Layout.hh:41

`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

**Definition:** Appender.hh:45

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LayoutAppender.hh <../../d3/da3/LayoutAppender_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
