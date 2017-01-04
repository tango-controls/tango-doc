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

FileAppender.hh

`Go to the documentation of this
file. <../../dd/de6/FileAppender_8hh.html>`__

1 //

2 // FileAppender.hh

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

28 #ifndef \_LOG4TANGO\_FILEAPPENDER\_H

29 #define \_LOG4TANGO\_FILEAPPENDER\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include
"`LayoutAppender.hh <../../d3/da3/LayoutAppender_8hh.html>`__\ "

33 

34 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

35 

36 //-----------------------------------------------------------------------------

37 // class : FileAppender

38 //-----------------------------------------------------------------------------

`39 <../../dd/d62/classlog4tango_1_1FileAppender.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__ :
public
`LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

40 {

41 public:

42 

52 
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__\ (const
std::string& name, const std::string& fileName,

53  bool append = true,
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
mode = 00644);

54 

60 
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__\ (const
std::string& name, int fd);

61 

65  virtual
~\ `FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__\ ();

66 

74  virtual bool reopen (void);

75 

79  virtual void close (void);

80 

86  virtual bool is\_valid (void) const;

87 

96  virtual void set\_append (bool append);

97 

101  virtual bool get\_append (void) const;

102 

106  virtual void set\_mode
(`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
mode);

107 

111  virtual
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
get\_mode() const;

112 

113 protected:

114 

115  virtual int \_append (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

116 

`117 <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__ 
const std::string
`\_file\_name <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__;

`118 <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__ 
int
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__;

`119 <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__ 
int
`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__;

`120 <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__ 
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__;

121 };

122 

123 } // namespace log4tango

124 

125 #endif // \_LOG4TANGO\_FILEAPPENDER\_H

`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

**Definition:** LayoutAppender.hh:41

`log4tango::mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__

unsigned short mode\_t

**Definition:** config-win32.h:149

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::FileAppender::\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__

mode\_t \_mode

**Definition:** FileAppender.hh:120

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::FileAppender::\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__

int \_fd

**Definition:** FileAppender.hh:118

`log4tango::FileAppender::\_file\_name <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__

const std::string \_file\_name

**Definition:** FileAppender.hh:117

`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__

**Definition:** FileAppender.hh:39

`log4tango::FileAppender::\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__

int \_flags

**Definition:** FileAppender.hh:119

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

`LayoutAppender.hh <../../d3/da3/LayoutAppender_8hh.html>`__

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `FileAppender.hh <../../dd/de6/FileAppender_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
