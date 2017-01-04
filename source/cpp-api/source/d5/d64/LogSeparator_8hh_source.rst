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

LogSeparator.hh

`Go to the documentation of this
file. <../../d5/d64/LogSeparator_8hh.html>`__

1 //

2 // LogSeparator.hh

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

28 #ifndef \_LOG4TANGO\_LOG\_SEPARATOR\_H

29 #define \_LOG4TANGO\_LOG\_SEPARATOR\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 

33 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

34 

35 //-----------------------------------------------------------------------------

36 // Class : LogInitiator

37 //-----------------------------------------------------------------------------

`38 <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__ {

39 public:

`40 <../../d3/dfe/classlog4tango_1_1LogInitiator.html#a662c8dd89b2ea992603dbcb852ad9ce4>`__ 
static
`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__
`\_begin\_log <../../d3/dfe/classlog4tango_1_1LogInitiator.html#a662c8dd89b2ea992603dbcb852ad9ce4>`__;

41 };

42 

43 //-----------------------------------------------------------------------------

44 // Class : LogSeparator

45 //-----------------------------------------------------------------------------

`46 <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__ {

47 public:

`48 <../../d0/d2f/classlog4tango_1_1LogSeparator.html#aa953a8c528fc5518c27d69ddb6860311>`__ 
static
`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__
`\_end\_log <../../d0/d2f/classlog4tango_1_1LogSeparator.html#aa953a8c528fc5518c27d69ddb6860311>`__;

49 };

50 

51 } // namespace log4tango

52 

53 #endif // \_LOG4TANGO\_LOG\_SEPARATOR\_H

`log4tango::LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__

**Definition:** LogSeparator.hh:46

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::LogSeparator::\_end\_log <../../d0/d2f/classlog4tango_1_1LogSeparator.html#aa953a8c528fc5518c27d69ddb6860311>`__

static LogSeparator \_end\_log

**Definition:** LogSeparator.hh:48

`log4tango::LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__

**Definition:** LogSeparator.hh:38

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::LogInitiator::\_begin\_log <../../d3/dfe/classlog4tango_1_1LogInitiator.html#a662c8dd89b2ea992603dbcb852ad9ce4>`__

static LogInitiator \_begin\_log

**Definition:** LogSeparator.hh:40

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LogSeparator.hh <../../d5/d64/LogSeparator_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
