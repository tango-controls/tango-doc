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

PatternLayout.hh

`Go to the documentation of this
file. <../../df/d8c/PatternLayout_8hh.html>`__

1 //

2 // PatternLayout.hh

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

28 #ifndef \_LOG4TANGO\_PATTERNLAYOUT\_H

29 #define \_LOG4TANGO\_PATTERNLAYOUT\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include "`Layout.hh <../../db/da8/Layout_8hh.html>`__\ "

33 #include <vector>

34 #ifdef LOG4TANGO\_HAVE\_SSTREAM

35 # include <sstream>

36 #endif

37 

38 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

39 

40 //-----------------------------------------------------------------------------

41 // class : PatternLayout (a simple fixed format Layout
implementation)

42 //-----------------------------------------------------------------------------

`43 <../../db/d60/classlog4tango_1_1PatternLayout.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__ :
public `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

44 {

45 public:

46 

`50 <../../db/d60/classlog4tango_1_1PatternLayout.html#a8d601a7465e1e7c5b83fc87a1a68cd37>`__ 
static const char\*
`BASIC\_CONVERSION\_PATTERN <../../db/d60/classlog4tango_1_1PatternLayout.html#a8d601a7465e1e7c5b83fc87a1a68cd37>`__;

51 

52 
`PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__\ ();

53 

54  virtual
~\ `PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__\ ();

55 

56  // NOTE:

57  // All double percentage signs ('%%') followed by a character

58  // in the following comments should actually be a single char.

59  // The doubles are included so that doxygen will print them
correctly.

60 

66  virtual std::string format(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

67 

93  virtual int set\_conversion\_pattern (const std::string&
conversionPattern);

94 

95  virtual std::string get\_conversion\_pattern() const;

96 

97  virtual void clear\_conversion\_pattern();

98 

`99 <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__ 
class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__
{

100  public:

`101 <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__ 
inline virtual
`~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__\ ()
{};

102  virtual void
append(\ `std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__\ &
out, const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event) = 0;

103  };

104 

105  private:

106  typedef std::vector<PatternComponent\*> ComponentVector;

107  ComponentVector \_components;

108  std::string \_conversionPattern;

109 };

110 

111 } // namespace log4tango

112 

113 #endif // \_LOG4TANGO\_PATTERNLAYOUT\_H

`log4tango::PatternLayout::PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html>`__

**Definition:** PatternLayout.hh:99

`log4tango::PatternLayout::BASIC\_CONVERSION\_PATTERN <../../db/d60/classlog4tango_1_1PatternLayout.html#a8d601a7465e1e7c5b83fc87a1a68cd37>`__

static const char \* BASIC\_CONVERSION\_PATTERN

A conversion pattern equivalent to the BasicLayout.

**Definition:** PatternLayout.hh:50

`Layout.hh <../../db/da8/Layout_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

**Definition:** Layout.hh:41

`log4tango::PatternLayout::PatternComponent::~PatternComponent <../../d0/d47/classlog4tango_1_1PatternLayout_1_1PatternComponent.html#adc8b8fe4a04939ecf6c440bf64ceaf80>`__

virtual ~PatternComponent()

**Definition:** PatternLayout.hh:101

`log4tango::PatternLayout <../../db/d60/classlog4tango_1_1PatternLayout.html>`__

**Definition:** PatternLayout.hh:43

`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__

**Definition:** Portability.hh:56

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `PatternLayout.hh <../../df/d8c/PatternLayout_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
