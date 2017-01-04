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

LoggerStream.hh

`Go to the documentation of this
file. <../../d2/de3/LoggerStream_8hh.html>`__

1 //

2 // LoggerStream.hh

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

28 #ifndef \_LOG4TANGO\_LOGGER\_STREAM\_H

29 #define \_LOG4TANGO\_LOGGER\_STREAM\_H

30 

31 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

32 #include "`Level.hh <../../d2/d33/Level_8hh.html>`__\ "

33 #ifdef LOG4TANGO\_HAVE\_SSTREAM

34 # include <sstream>

35 #endif

36 #include "`LogSeparator.hh <../../d5/d64/LogSeparator_8hh.html>`__\ "

37 

38 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

39 

40 //-----------------------------------------------------------------------------

41 // FORWARD DECLARATION

42 //-----------------------------------------------------------------------------

`43 <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__;

44 class
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__;

45 

46 //-----------------------------------------------------------------------------

47 // DEFINE WHAT IS A LS\_TERMINATOR

48 //-----------------------------------------------------------------------------

`49 <../../d4/db0/namespacelog4tango.html#ac25f18a9841eab936214ef50cdb08432>`__ typedef
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &
(\*ls\_terminator)
(`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &);

50 

51 

`52 <../../d4/db0/namespacelog4tango.html#a84630cb1e3eb8ecf59cd78fe4b250806>`__ typedef
class std::ios\_base&(\*StdIosFlag)(class std::ios\_base&);

53 

54 

55 //-----------------------------------------------------------------------------

56 // class : LoggerStream

57 //-----------------------------------------------------------------------------

`58 <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__ class
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__

59 {

60 public:

61 

69 
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a4bb2fa44f562c0398b6706ce241dbf81>`__\ (`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ &
logger,
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, bool filter = true);

70 

74 
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`~LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a03bd5a5f9b171ac3e192f4e56c00d079>`__\ ();

75 

`80 <../../d6/de1/classlog4tango_1_1LoggerStream.html#a0da2fad226c741bad936a1c260ecc780>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ &
`get\_logger <../../d6/de1/classlog4tango_1_1LoggerStream.html#a0da2fad226c741bad936a1c260ecc780>`__
(void) const {

81  return \_logger;

82  };

83 

`88 <../../d6/de1/classlog4tango_1_1LoggerStream.html#ad1e16a5bcc3e33dab57644ffc6141d5d>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
`get\_level <../../d6/de1/classlog4tango_1_1LoggerStream.html#ad1e16a5bcc3e33dab57644ffc6141d5d>`__
(void) const {

89  return \_level;

90  };

91 

`97 <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__\ &
i)) {

98  return \*this;

99  }

100 

`107 <../../d6/de1/classlog4tango_1_1LoggerStream.html#ae7da2af43a07d6aff594f733a137b630>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__\ &
s)) {

108 
`flush <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__\ ();

109  return \*this;

110  }

111 

`118 <../../d6/de1/classlog4tango_1_1LoggerStream.html#aa1d278ed6fc807a75e7f83daac063391>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__\ (`ls\_terminator <../../d4/db0/namespacelog4tango.html#ac25f18a9841eab936214ef50cdb08432>`__
endoflog)) {

119 
`flush <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__\ ();

120  return \*this;

121  }

122 

127 
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
void
`flush <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__
(void);

128 

134 #ifdef WIN32

135  inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (std::ios\_base&(\_cdecl
\*\_F)(std::ios\_base&)) {

136 #else

`137 <../../d6/de1/classlog4tango_1_1LoggerStream.html#af3dc8e4d367c118c86dc698b980fc0b2>`__ 
inline
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (std::ios\_base&(\*\_F)(std::ios\_base&))
{

138 #endif

139 #ifndef LOG4TANGO\_HAVE\_SSTREAM

140  if (!\_buffer)

141  \_buffer = new
`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__;

142 #endif

143  if (\_buffer)

144  (\*\_F)(\*(std::ios\_base \*)(\_buffer));

145  return \*this;

146  }

147 

`153 <../../d6/de1/classlog4tango_1_1LoggerStream.html#a3aa83b092637a7f0e87c96cc87e655cd>`__ 
template<typename T> LoggerStream&
`operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__\ (const
T& t) {

154  if (\_level !=
`Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__)
{

155 #ifndef LOG4TANGO\_HAVE\_SSTREAM

156  if (!\_buffer)

157  \_buffer = new
`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__;

158 #endif

159  if (\_buffer)

160  (\*\_buffer) << t;

161  }

162  return \*this;

163  }

164 

165 private:

166 

167  `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ &
\_logger;

168 

169 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
\_level;

170 

171  bool \_filter;

172 

173 
`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__\ \*
\_buffer;

174 };

175 

176 } // namespace log4tango

177 

`178 <../../d8/dcc/namespacestd.html>`__ namespace
`std <../../d8/dcc/namespacestd.html>`__ {

179  //-- A dummy <ls\_terminator>

`180 <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__ 
inline
`log4tango::LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &
`endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__
(`log4tango::LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ &
ls) {

181  return ls;

182  }

183 } // namespace std

184 

185 #endif // \_LOG4TANGO\_LOGGER\_STREAM\_H

`log4tango::LogSeparator <../../d0/d2f/classlog4tango_1_1LogSeparator.html>`__

**Definition:** LogSeparator.hh:46

`log4tango::LoggerStream::flush <../../d6/de1/classlog4tango_1_1LoggerStream.html#a87e12557f4851fcbb9f4077e9a4d0d59>`__

LOG4TANGO\_EXPORT void flush(void)

Flush the contents of the stream buffer to the Logger and empties the
buffer.

**Definition:** LoggerStream.cpp:59

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::LogInitiator <../../d3/dfe/classlog4tango_1_1LogInitiator.html>`__

**Definition:** LogSeparator.hh:38

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`std::endl <../../d8/dcc/namespacestd.html#a4639029cd5db5428c743a52d095356b9>`__

log4tango::LoggerStream & endl(log4tango::LoggerStream &ls)

**Definition:** LoggerStream.hh:180

`log4tango::Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__

**Definition:** Logger.hh:56

`log4tango::LoggerStream::operator<< <../../d6/de1/classlog4tango_1_1LoggerStream.html#a70c248b1dd5d54626b4588d949bbd2fe>`__

LOG4TANGO\_EXPORT LoggerStream &
operator<<(LOG4TANGO\_UNUSED(LogInitiator &i))

Streams in a Initiator.

**Definition:** LoggerStream.hh:97

`Level.hh <../../d2/d33/Level_8hh.html>`__

`log4tango::Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__

**Definition:** Level.hh:87

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::ls\_terminator <../../d4/db0/namespacelog4tango.html#ac25f18a9841eab936214ef50cdb08432>`__

LoggerStream &(\* ls\_terminator)(LoggerStream &)

**Definition:** LoggerStream.hh:49

`log4tango::LoggerStream::LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a4bb2fa44f562c0398b6706ce241dbf81>`__

LOG4TANGO\_EXPORT LoggerStream(Logger &logger, Level::Value level, bool
filter=true)

Construct a LoggerStream for given Logger with given level.

**Definition:** LoggerStream.cpp:39

`log4tango::LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__

**Definition:** LoggerStream.hh:58

`LogSeparator.hh <../../d5/d64/LogSeparator_8hh.html>`__

`log4tango::LoggerStream::get\_logger <../../d6/de1/classlog4tango_1_1LoggerStream.html#a0da2fad226c741bad936a1c260ecc780>`__

LOG4TANGO\_EXPORT Logger & get\_logger(void) const

Returns the destination Logger for this stream.

**Definition:** LoggerStream.hh:80

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

`log4tango::LoggerStream::~LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html#a03bd5a5f9b171ac3e192f4e56c00d079>`__

LOG4TANGO\_EXPORT ~LoggerStream()

Destructor for LoggerStream&)

**Definition:** LoggerStream.cpp:48

`std::ostringstream <../../d7/d24/classstd_1_1ostringstream.html>`__

**Definition:** Portability.hh:56

`log4tango::LoggerStream::get\_level <../../d6/de1/classlog4tango_1_1LoggerStream.html#ad1e16a5bcc3e33dab57644ffc6141d5d>`__

LOG4TANGO\_EXPORT Level::Value get\_level(void) const

Returns the level for this stream.

**Definition:** LoggerStream.hh:88

`LOG4TANGO\_UNUSED <../../da/dd8/Portability_8hh.html#a3e82719800a6abe2ae163e2da6739661>`__

#define LOG4TANGO\_UNUSED(var)

**Definition:** Portability.hh:49

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `LoggerStream.hh <../../d2/de3/LoggerStream_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
