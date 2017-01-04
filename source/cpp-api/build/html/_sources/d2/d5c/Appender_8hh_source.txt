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

Appender.hh

`Go to the documentation of this
file. <../../d2/d5c/Appender_8hh.html>`__

1 //

2 // Appender.hh

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

28 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

29 #include <string>

30 #include <map>

31 #include <set>

32 #include "`Level.hh <../../d2/d33/Level_8hh.html>`__\ "

33 #include "`Layout.hh <../../db/da8/Layout_8hh.html>`__\ "

34 #include "`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__\ "

35 #include
"`threading/Threading.hh <../../d6/d51/Threading_8hh.html>`__\ "

36 

37 #ifndef \_LOG4TANGO\_APPENDER\_H

`38 <../../d2/d5c/Appender_8hh.html#abb0662b2282983a6a78a80220a3afc4b>`__ #define
\_LOG4TANGO\_APPENDER\_H

39 

`40 <../../d4/db0/namespacelog4tango.html>`__ namespace
`log4tango <../../d4/db0/namespacelog4tango.html>`__ {

41 

42 //-----------------------------------------------------------------------------

43 // class : Appender

44 //-----------------------------------------------------------------------------

`45 <../../d7/dc4/classlog4tango_1_1Appender.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

46 {

`47 <../../d7/dc4/classlog4tango_1_1Appender.html#aff02b76416d2846736b7ecd798921a0a>`__ 
friend class `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__;

48 

49 protected:

55  `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ (const
std::string& name);

56 

63  virtual void level\_changed
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
new\_level);

64 

65 public:

69  virtual
~\ `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ ();

70 

75 #if defined(APPENDERS\_HAVE\_LEVEL\_THRESHOLD) \|\|
defined(APPENDERS\_HAVE\_FILTERS)

76  int append (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

77 #else

`78 <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__ 
inline int
`append <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event) {

79  return \_append(event);

80  }

81 #endif

82 

88  virtual bool reopen (void);

89 

94  virtual void close (void) = 0;

95 

101  virtual bool requires\_layout (void) const = 0;

102 

106  virtual void set\_layout
(`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__\ \* layout = 0)
= 0;

107 

`111 <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__ 
inline const std::string&
`get\_name <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__
(void) const {

112  return \_name;

113  }

114 

122  virtual bool is\_valid (void) const;

123 

124 #ifdef APPENDERS\_HAVE\_LEVEL\_THRESHOLD

125 

131  void set\_level
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level);

132 

137 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
get\_level (void) const;

138 #endif // APPENDERS\_HAVE\_LEVEL\_THRESHOLD

139 

140 #ifdef APPENDERS\_HAVE\_FILTERS

141 

144  virtual void set\_filter (Filter\* filter);

145 

150  virtual Filter\* get\_filter (void);

151 #endif // APPENDERS\_HAVE\_FILTERS

152 

153 protected:

159  virtual int \_append(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event) = 0;

160 

161 private:

165  const std::string \_name;

166 

167 #ifdef APPENDERS\_HAVE\_LEVEL\_THRESHOLD

168 

171 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
\_level;

172 #endif

173 

174 #ifdef APPENDERS\_HAVE\_FILTERS

175 

178  Filter\* \_filter;

179 #endif

180 };

181 

182 } // namespace log4tango

183 

184 #endif // \_LOG4TANGO\_APPENDER\_H

`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__

`Layout.hh <../../db/da8/Layout_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__

**Definition:** Logger.hh:56

`Level.hh <../../d2/d33/Level_8hh.html>`__

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::Appender::get\_name <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__

const std::string & get\_name(void) const

Returns this appender name.

**Definition:** Appender.hh:111

`log4tango::Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__

**Definition:** Layout.hh:41

`log4tango::Appender::append <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__

int append(const LoggingEvent &event)

Log in Appender specific way.

**Definition:** Appender.hh:78

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

**Definition:** Appender.hh:45

`Threading.hh <../../d6/d51/Threading_8hh.html>`__

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Appender.hh <../../d2/d5c/Appender_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
