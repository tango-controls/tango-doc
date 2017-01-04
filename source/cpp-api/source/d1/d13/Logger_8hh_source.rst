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

Logger.hh

`Go to the documentation of this file. <../../d1/d13/Logger_8hh.html>`__

1 //

2 // Logger.hh

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

28 #ifndef \_LOG4TANGO\_LOGGER\_H

29 #define \_LOG4TANGO\_LOGGER\_H

30 

31 //-----------------------------------------------------------------------------

32 // IMPL. OPTION

33 //-----------------------------------------------------------------------------

34 //#define LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

35 

36 #include "`Portability.hh <../../da/dd8/Portability_8hh.html>`__\ "

37 #include
"`AppenderAttachable.hh <../../d6/d73/AppenderAttachable_8hh.html>`__\ "

38 #include "`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__\ "

39 #include "`Level.hh <../../d2/d33/Level_8hh.html>`__\ "

40 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

41 # include
"`LoggerStream.hh <../../d2/de3/LoggerStream_8hh.html>`__\ "

42 #endif

43 

44 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

45 

46 #ifdef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

47 //-----------------------------------------------------------------------------

48 // FORWARD DECL.

49 //-----------------------------------------------------------------------------

50 class LogStream;

51 #endif

52 

53 //-----------------------------------------------------------------------------

54 // class : Logger

55 //-----------------------------------------------------------------------------

`56 <../../d4/d1c/classlog4tango_1_1Logger.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__ : public
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

57 {

58 public:

59 

65 
`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__\ (const
std::string& name,

66 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level =
`Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__);

67 

71  virtual
~\ `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__\ ();

72 

`77 <../../d4/d1c/classlog4tango_1_1Logger.html#abfe1c32b01e64c5f58f52812f898f170>`__ 
inline const std::string&
`get\_name <../../d4/d1c/classlog4tango_1_1Logger.html#abfe1c32b01e64c5f58f52812f898f170>`__\ ()
const {

78  return \_name;

79  }

80 

85  void set\_level
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level);

86 

`91 <../../d4/d1c/classlog4tango_1_1Logger.html#a0bfd7a54498aba29263cfb0dae55faff>`__ 
inline
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
`get\_level <../../d4/d1c/classlog4tango_1_1Logger.html#a0bfd7a54498aba29263cfb0dae55faff>`__\ ()
const {

92  return \_level;

93  }

94 

`101 <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__ 
bool
`is\_level\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level) const {

102  return \_level >= level;

103  }

104 

111  void log
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level,

112  const char\* string\_format, ...);

113 

`119 <../../d4/d1c/classlog4tango_1_1Logger.html#afab624480348ae2bae502c72efeaf38e>`__ 
inline void
`log <../../d4/d1c/classlog4tango_1_1Logger.html#afab624480348ae2bae502c72efeaf38e>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, const std::string& message)

120  {

121  if (is\_level\_enabled(level)) {

122  log\_unconditionally(level, message);

123  }

124  }

125 

132  void log\_unconditionally
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level,

133  const char\* string\_format, ...);

134 

140  void log\_unconditionally
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level,

141  const std::string& message);

142 

148  void debug (const char\* string\_format, ...);

149 

`154 <../../d4/d1c/classlog4tango_1_1Logger.html#acdeaf9ecda4f2fd1b6ac845e188b34d6>`__ 
inline void
`debug <../../d4/d1c/classlog4tango_1_1Logger.html#acdeaf9ecda4f2fd1b6ac845e188b34d6>`__
(const std::string& message) {

155  if
(is\_level\_enabled(`Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__))
{

156 
log\_unconditionally(\ `Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__,
message);

157  }

158  }

159 

`164 <../../d4/d1c/classlog4tango_1_1Logger.html#a6ce8b32ab06c6b77f8aac562dabf9c1f>`__ 
inline bool
`is\_debug\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a6ce8b32ab06c6b77f8aac562dabf9c1f>`__
(void) const {

165  return is\_level\_enabled
(`Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__);

166  };

167 

168 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

169 

`173 <../../d4/d1c/classlog4tango_1_1Logger.html#a652427a4aed5322eb189f7409498cd18>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`debug\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a652427a4aed5322eb189f7409498cd18>`__
(void) {

174  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
`Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__,
true);

175  }

176 #else

177 

181  inline
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
debug\_stream (void) {

182  return \*\_log\_streams[\_DEBUG\_STREAM\_ID];

183  }

184 #endif

185 

191  void info (const char\* string\_format, ...);

192 

`197 <../../d4/d1c/classlog4tango_1_1Logger.html#a987565b18e6ea9a2524d64c80759c2eb>`__ 
inline void
`info <../../d4/d1c/classlog4tango_1_1Logger.html#a987565b18e6ea9a2524d64c80759c2eb>`__
(const std::string& message) {

198  if
(is\_level\_enabled(`Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__))
{

199 
log\_unconditionally(\ `Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__,
message);

200  }

201  }

202 

`207 <../../d4/d1c/classlog4tango_1_1Logger.html#af73279505009e650e615294711fe75fe>`__ 
inline bool
`is\_info\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#af73279505009e650e615294711fe75fe>`__
(void) const {

208  return
is\_level\_enabled(\ `Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__);

209  };

210 

211 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

212 

`216 <../../d4/d1c/classlog4tango_1_1Logger.html#a22a2fd4d13e70e352a5f47dd02d33342>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`info\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a22a2fd4d13e70e352a5f47dd02d33342>`__
(void) {

217  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
`Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__,
true);

218  }

219 #else

220 

224  inline
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
info\_stream (void) {

225  return \*\_log\_streams[\_INFO\_STREAM\_ID];

226  }

227 #endif

228 

234  void warn (const char\* string\_format, ...);

235 

`240 <../../d4/d1c/classlog4tango_1_1Logger.html#a22646b15ebc33254f734e23280868345>`__ 
inline void
`warn <../../d4/d1c/classlog4tango_1_1Logger.html#a22646b15ebc33254f734e23280868345>`__
(const std::string& message) {

241  if
(is\_level\_enabled(`Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__))
{

242 
log\_unconditionally(\ `Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__,
message);

243  }

244  }

245 

`250 <../../d4/d1c/classlog4tango_1_1Logger.html#ac48da8e8705775526b0d94f974dd158d>`__ 
inline bool
`is\_warn\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ac48da8e8705775526b0d94f974dd158d>`__
(void) const {

251  return
is\_level\_enabled(\ `Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__);

252  };

253 

254 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

255 

`259 <../../d4/d1c/classlog4tango_1_1Logger.html#a223a0d6d82a1e054d07474e87b207bba>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`warn\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a223a0d6d82a1e054d07474e87b207bba>`__
(void) {

260  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
`Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__,
true);

261  };

262 #else

263 

267  inline
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
warn\_stream (void) {

268  return \*\_log\_streams[\_WARN\_STREAM\_ID];

269  }

270 #endif

271 

277  void error (const char\* string\_format, ...);

278 

`283 <../../d4/d1c/classlog4tango_1_1Logger.html#a7d587fb218937b9c525f5c48e5f0e230>`__ 
inline void
`error <../../d4/d1c/classlog4tango_1_1Logger.html#a7d587fb218937b9c525f5c48e5f0e230>`__
(const std::string& message) {

284  if
(is\_level\_enabled(`Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__))
{

285 
log\_unconditionally(\ `Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__,
message);

286  }

287  }

288 

`293 <../../d4/d1c/classlog4tango_1_1Logger.html#ab2ec2debd2d3024293a0d873af8e86b3>`__ 
inline bool
`is\_error\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ab2ec2debd2d3024293a0d873af8e86b3>`__
(void) const {

294  return
is\_level\_enabled(\ `Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__);

295  };

296 

297 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

298 

`302 <../../d4/d1c/classlog4tango_1_1Logger.html#a09c866cc0bfb1de324c676617234f4fd>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`error\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a09c866cc0bfb1de324c676617234f4fd>`__
(void) {

303  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
`Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__,
true);

304  };

305 #else

306 

310  inline
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
error\_stream (void) {

311  return \*\_log\_streams[\_ERROR\_STREAM\_ID];

312  }

313 #endif

314 

320  void fatal(const char\* string\_format, ...);

321 

`326 <../../d4/d1c/classlog4tango_1_1Logger.html#a56287e6a0a500f74d9fd7bc09f612111>`__ 
inline void
`fatal <../../d4/d1c/classlog4tango_1_1Logger.html#a56287e6a0a500f74d9fd7bc09f612111>`__
(const std::string& message) {

327  if
(is\_level\_enabled(`Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__))
{

328 
log\_unconditionally(\ `Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__,
message);

329  }

330  }

331 

`336 <../../d4/d1c/classlog4tango_1_1Logger.html#a16213b0ab5912487ad2eb62c4337900b>`__ 
inline bool
`is\_fatal\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a16213b0ab5912487ad2eb62c4337900b>`__
(void) const {

337  return
is\_level\_enabled(\ `Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__);

338  };

339 

340 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

341 

`345 <../../d4/d1c/classlog4tango_1_1Logger.html#ae734bcc83b3b3687a073edaacd5c74f0>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`fatal\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#ae734bcc83b3b3687a073edaacd5c74f0>`__
(void) {

346  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
`Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__,
true);

347  };

348 #else

349 

353  inline
`LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__\ &
fatal\_stream (void) {

354  return \*\_log\_streams[\_FATAL\_STREAM\_ID];

355  }

356 #endif

357 

358 #ifndef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

359 

`365 <../../d4/d1c/classlog4tango_1_1Logger.html#a34b294678a690630721e8824f16020de>`__ 
inline
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__
`get\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a34b294678a690630721e8824f16020de>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
level, bool filter = true) {

366  return
`LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__\ (\*this,
level, filter);

367  }

368 #endif

369 

370 protected:

371 

377  void call\_appenders (const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__\ &
event);

378 

379 

380 private:

381 

382 #ifdef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

383 

384  enum {

385  \_FATAL\_STREAM\_ID = 0,

386  \_ERROR\_STREAM\_ID = 1,

387  \_WARN\_STREAM\_ID = 2,

388  \_INFO\_STREAM\_ID = 3,

389  \_DEBUG\_STREAM\_ID = 4

390  };

391 #endif

392 

394  const std::string \_name;

395 

397 
`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
\_level;

398 

399 #ifdef LOG4TANGO\_LOGGERS\_USE\_LOGSTREAM

400 

401  LogStream \*\_log\_streams[5];

402 #endif

403 

404  /\* prevent copying and assignment \*/

405 
`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__
(const
`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__\ &);

406 
`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__\ &
operator= (const
`Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__\ &);

407 };

408 

409 } // namespace log4tango

410 

411 #endif // \_LOG4TANGO\_LOGGER\_H

`log4tango::Level::WARN <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ab0dfb37a2ad73d7b7f53a460819a2cc3>`__

**Definition:** Level.hh:90

`log4tango::Logger::error <../../d4/d1c/classlog4tango_1_1Logger.html#a7d587fb218937b9c525f5c48e5f0e230>`__

void error(const std::string &message)

Log a message with error level.

**Definition:** Logger.hh:283

`LoggingEvent.hh <../../d2/d60/LoggingEvent_8hh.html>`__

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::Logger::get\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a34b294678a690630721e8824f16020de>`__

LoggerStream get\_stream(Level::Value level, bool filter=true)

Return a LoggerStream with given Level.

**Definition:** Logger.hh:365

`LoggerStream.hh <../../d2/de3/LoggerStream_8hh.html>`__

`log4tango::Logger::debug\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a652427a4aed5322eb189f7409498cd18>`__

LoggerStream debug\_stream(void)

Return a LoggerStream with level DEBUG.

**Definition:** Logger.hh:173

`log4tango::Level::DEBUG <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461aa98b4453bf21b1af1c2d3d953887f393>`__

**Definition:** Level.hh:92

`log4tango::Logger::is\_fatal\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a16213b0ab5912487ad2eb62c4337900b>`__

bool is\_fatal\_enabled(void) const

Return true if the Logger will log messages with level FATAL.

**Definition:** Logger.hh:336

`log4tango::Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__

**Definition:** Logger.hh:56

`Level.hh <../../d2/d33/Level_8hh.html>`__

`log4tango::Level::OFF <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a955ee789684a2e9952b7e4f56b6bb74f>`__

**Definition:** Level.hh:87

`log4tango::Logger::is\_level\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a393cade41cee1267e49018f5b4f8fa67>`__

bool is\_level\_enabled(Level::Value level) const

Returns true if the level of the Logger is equal to or higher than given
level.

**Definition:** Logger.hh:101

`Portability.hh <../../da/dd8/Portability_8hh.html>`__

`log4tango::Logger::get\_level <../../d4/d1c/classlog4tango_1_1Logger.html#a0bfd7a54498aba29263cfb0dae55faff>`__

Level::Value get\_level() const

Returns the assigned Level, if any, for this Logger.

**Definition:** Logger.hh:91

`log4tango::Logger::error\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a09c866cc0bfb1de324c676617234f4fd>`__

LoggerStream error\_stream(void)

Return a LoggerStream with level ERROR.

**Definition:** Logger.hh:302

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::LogStream <../../d7/dff/classlog4tango_1_1LogStream.html>`__

**Definition:** LogStream.hh:46

`log4tango::Logger::fatal <../../d4/d1c/classlog4tango_1_1Logger.html#a56287e6a0a500f74d9fd7bc09f612111>`__

void fatal(const std::string &message)

Log a message with fatal level.

**Definition:** Logger.hh:326

`log4tango::Logger::debug <../../d4/d1c/classlog4tango_1_1Logger.html#acdeaf9ecda4f2fd1b6ac845e188b34d6>`__

void debug(const std::string &message)

Log a message with debug level.

**Definition:** Logger.hh:154

`log4tango::Logger::is\_error\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ab2ec2debd2d3024293a0d873af8e86b3>`__

bool is\_error\_enabled(void) const

Return true if the Logger will log messages with level ERROR.

**Definition:** Logger.hh:293

`log4tango::AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__

**Definition:** AppenderAttachable.hh:58

`log4tango::LoggerStream <../../d6/de1/classlog4tango_1_1LoggerStream.html>`__

**Definition:** LoggerStream.hh:58

`log4tango::Logger::warn\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a223a0d6d82a1e054d07474e87b207bba>`__

LoggerStream warn\_stream(void)

Return a LoggerStream with level WARN.

**Definition:** Logger.hh:259

`log4tango::Logger::warn <../../d4/d1c/classlog4tango_1_1Logger.html#a22646b15ebc33254f734e23280868345>`__

void warn(const std::string &message)

Log a message with warn level.

**Definition:** Logger.hh:240

`log4tango::Logger::log <../../d4/d1c/classlog4tango_1_1Logger.html#afab624480348ae2bae502c72efeaf38e>`__

void log(Level::Value level, const std::string &message)

Log a message with the specified level.

**Definition:** Logger.hh:119

`log4tango::Logger::is\_debug\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#a6ce8b32ab06c6b77f8aac562dabf9c1f>`__

bool is\_debug\_enabled(void) const

Return true if the Logger will log messages with level DEBUG.

**Definition:** Logger.hh:164

`log4tango::Level::ERROR <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae9f52151dce772e7a7ee87bc824b1fdf>`__

**Definition:** Level.hh:89

`log4tango::Logger::info\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#a22a2fd4d13e70e352a5f47dd02d33342>`__

LoggerStream info\_stream(void)

Return a LoggerStream with level INFO.

**Definition:** Logger.hh:216

`log4tango::Logger::get\_name <../../d4/d1c/classlog4tango_1_1Logger.html#abfe1c32b01e64c5f58f52812f898f170>`__

const std::string & get\_name() const

Return the logger name.

**Definition:** Logger.hh:77

`log4tango::Level::FATAL <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461a58fb50808d864278c4127f5c8ac5406c>`__

**Definition:** Level.hh:88

`AppenderAttachable.hh <../../d6/d73/AppenderAttachable_8hh.html>`__

`log4tango::Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__

int Value

The type of Level Values.

**Definition:** Level.hh:98

`log4tango::Logger::info <../../d4/d1c/classlog4tango_1_1Logger.html#a987565b18e6ea9a2524d64c80759c2eb>`__

void info(const std::string &message)

Log a message with info level.

**Definition:** Logger.hh:197

`log4tango::Logger::fatal\_stream <../../d4/d1c/classlog4tango_1_1Logger.html#ae734bcc83b3b3687a073edaacd5c74f0>`__

LoggerStream fatal\_stream(void)

Return a LoggerStream with level FATAL.

**Definition:** Logger.hh:345

`log4tango::Level::INFO <../../d8/d0e/classlog4tango_1_1Level.html#ad9edd63020b6becc9aef8802c48eb461ae666ceb60dfca43381816abf33e2cd1b>`__

**Definition:** Level.hh:91

`log4tango::Logger <../../d4/db0/namespacelog4tango.html#a32cdd650c4bcacf2d8fbd74caae3205d>`__

class LOG4TANGO\_EXPORT Logger

**Definition:** LoggerStream.hh:43

`log4tango::Logger::is\_warn\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#ac48da8e8705775526b0d94f974dd158d>`__

bool is\_warn\_enabled(void) const

Return true if the Logger will log messages with level WARN.

**Definition:** Logger.hh:250

`log4tango::LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__

The internal representation of logging events.

**Definition:** LoggingEvent.hh:50

`log4tango::Logger::is\_info\_enabled <../../d4/d1c/classlog4tango_1_1Logger.html#af73279505009e650e615294711fe75fe>`__

bool is\_info\_enabled(void) const

Return true if the Logger will log messages with level INFO.

**Definition:** Logger.hh:207

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `Logger.hh <../../d1/d13/Logger_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
