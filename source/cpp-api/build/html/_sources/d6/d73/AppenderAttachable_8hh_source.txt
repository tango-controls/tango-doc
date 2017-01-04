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

AppenderAttachable.hh

`Go to the documentation of this
file. <../../d6/d73/AppenderAttachable_8hh.html>`__

1 //

2 // AppenderAttachable.hh

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

28 #ifndef \_LOG4TANGO\_APPENDER\_ATTACHABLE\_H

29 #define \_LOG4TANGO\_APPENDER\_ATTACHABLE\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include <map>

33 #include <vector>

34 #include "`Appender.hh <../../d2/d5c/Appender_8hh.html>`__\ "

35 #include
"`threading/Threading.hh <../../d6/d51/Threading_8hh.html>`__\ "

36 

37 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

38 

`42 <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__ typedef
std::map<std::string, Appender\*>
`AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__;

43 

`47 <../../d4/db0/namespacelog4tango.html#a40603d6f5fc476a8515fe9dafe0d828a>`__ typedef
AppenderMap::iterator
`AppenderMapIterator <../../d4/db0/namespacelog4tango.html#a40603d6f5fc476a8515fe9dafe0d828a>`__;

48 

`52 <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__ typedef
std::vector<Appender\*>
`AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__;

53 

54 

55 //-----------------------------------------------------------------------------

56 // class : AppenderAttachable

57 //-----------------------------------------------------------------------------

`58 <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

59 {

60  public:

61 

65 
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
();

66 

70  virtual
~\ `AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
();

71 

76  void add\_appender
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*
appender);

77 

84  AppenderList get\_all\_appenders (void);

85 

93  `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*
get\_appender (const std::string& name);

94 

99  bool is\_attached
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*
appender);

100 

104  void remove\_all\_appenders();

105 

109  void
remove\_appender(\ `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__\ \*
appender);

110 

115  void remove\_appender(const std::string& name);

116 

117  protected:

118 

`122 <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__ 
AppenderMap
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__;

123 

`127 <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__ 
`threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__;

128 

129 
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__\ &
other);

130 
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__\ &
operator=(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__\ &
other);

131 };

132 

133 } // namespace log4tango

134 

135 #endif // \_LOG4TANGO\_APPENDER\_ATTACHABLE\_H

`log4tango::AppenderMapIterator <../../d4/db0/namespacelog4tango.html#a40603d6f5fc476a8515fe9dafe0d828a>`__

AppenderMap::iterator AppenderMapIterator

A map of appenders iterator.

**Definition:** AppenderAttachable.hh:47

`log4tango::AppenderAttachable::\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__

AppenderMap \_appenders

Appenders repository.

**Definition:** AppenderAttachable.hh:122

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Appender.hh <../../d2/d5c/Appender_8hh.html>`__

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`log4tango::AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__

std::map< std::string, Appender \* > AppenderMap

A map of appenders.

**Definition:** AppenderAttachable.hh:42

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

**Definition:** AppenderAttachable.hh:58

`log4tango::AppenderAttachable::\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__

threading::Mutex \_appendersMutex

A mutex to protect the repository against race conditions.

**Definition:** AppenderAttachable.hh:127

`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

**Definition:** Appender.hh:45

`Threading.hh <../../d6/d51/Threading_8hh.html>`__

`log4tango::threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__

**Definition:** MSThreads.hh:74

`log4tango::AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__

std::vector< Appender \* > AppenderList

Define what is a list of appenders.

**Definition:** AppenderAttachable.hh:52

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `AppenderAttachable.hh <../../d6/d73/AppenderAttachable_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
