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

RollingFileAppender.hh

`Go to the documentation of this
file. <../../d7/dd5/RollingFileAppender_8hh.html>`__

1 //

2 // RollingFileAppender.hh

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

28 #ifndef \_LOG4TANGO\_ROLLINGFILEAPPENDER\_H

29 #define \_LOG4TANGO\_ROLLINGFILEAPPENDER\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include "`FileAppender.hh <../../dd/de6/FileAppender_8hh.html>`__\ "

33 

34 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

35 

36 //-----------------------------------------------------------------------------

37 // class RollingFileAppender (olls over the logfile)

38 //-----------------------------------------------------------------------------

`39 <../../d9/db4/classlog4tango_1_1RollingFileAppender.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html>`__
: public
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__

40 {

41  public:

42 

43 
`RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html>`__\ (const
std::string& name,

44  const std::string& file\_name,

45  size\_t max\_fs = 10\*1024\*1024,

46  unsigned int max\_bi = 1,

47  bool append = true,

48 
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
mode = 00644);

49 

50  virtual void set\_max\_backup\_index(unsigned int maxBackups);

51 

52  virtual unsigned int get\_max\_backup\_index() const;

53 

54  virtual void set\_maximum\_file\_size (size\_t max\_fs);

55 

56  virtual size\_t get\_max\_file\_size() const;

57 

58  virtual void roll\_over();

59 

60 protected:

61 

62  virtual int \_append (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

63 

`64 <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a5ceb9ceff2058cc7726986cf54e2efa9>`__ 
unsigned int
`\_max\_backup\_index <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a5ceb9ceff2058cc7726986cf54e2efa9>`__;

65 

`66 <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#aa796609c18d8522c2d6898d4f12ffba4>`__ 
size\_t
`\_max\_file\_size <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#aa796609c18d8522c2d6898d4f12ffba4>`__;

67 };

68 

69 } // namespace log4tango

70 

71 #endif // \_LOG4TANGO\_ROLLINGFILEAPPENDER\_H

`log4tango::mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__

unsigned short mode\_t

**Definition:** config-win32.h:149

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::RollingFileAppender::\_max\_backup\_index <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a5ceb9ceff2058cc7726986cf54e2efa9>`__

unsigned int \_max\_backup\_index

**Definition:** RollingFileAppender.hh:64

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html>`__

**Definition:** RollingFileAppender.hh:39

`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__

**Definition:** FileAppender.hh:39

`log4tango::RollingFileAppender::\_max\_file\_size <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#aa796609c18d8522c2d6898d4f12ffba4>`__

size\_t \_max\_file\_size

**Definition:** RollingFileAppender.hh:66

`FileAppender.hh <../../dd/de6/FileAppender_8hh.html>`__

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `RollingFileAppender.hh <../../d7/dd5/RollingFileAppender_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
