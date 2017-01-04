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

NDC.hh

`Go to the documentation of this file. <../../d1/d26/NDC_8hh.html>`__

1 //

2 // NDC.hh

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

28 #ifndef \_LOG4TANGO\_NDC\_H

29 #define \_LOG4TANGO\_NDC\_H

30 

31 #ifdef LOG4TANGO\_HAS\_NDC

32 

33 #include
<`log4tango/Portability.hh <../../da/dd8/Portability_8hh.html>`__\ >

34 #include <string>

35 #include <vector>

36 

37 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

89 class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
NDC

90 {

91 public:

92 

93  struct DiagnosticContext {

94  DiagnosticContext(const std::string& message);

95  DiagnosticContext(const std::string& message,

96  const DiagnosticContext& parent);

97 

98  std::string message;

99  std::string full\_msg;

100  };

101 

102  typedef std::vector<DiagnosticContext> ContextStack;

103 

112  static void clear (void);

113 

127  static ContextStack\* clone\_stack (void);

128 

133  static const std::string& get (void);

134 

139  static int get\_depth (void);

140 

141  static void inherit (ContextStack\* stack);

142 

152  static std::string pop (void);

153 

162  static void push (const std::string& message);

163 

170  static void set\_max\_depth (int max\_depth);

171 

176  static NDC& get\_ndc();

177 

178  NDC();

179  virtual ~NDC();

180 

181 public:

182  virtual void \_clear (void);

183  virtual ContextStack\* \_clone\_stack (void);

184  virtual const std::string& \_get (void) const;

185  virtual int \_get\_depth (void) const;

186  virtual void \_inherit (ContextStack\* stack);

187  virtual std::string \_pop (void);

188  virtual void \_push (const std::string& message);

189  virtual void \_set\_max\_depth (int max\_depth);

190 

191  ContextStack \_stack;

192 };

193 

194 } // namespace log4tango

195 

196 #endif // LOG4TANGO\_HAS\_NDC

197 

198 #endif // \_LOG4TANGO\_NDC\_HH

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `NDC.hh <../../d1/d26/NDC_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
