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

MSThreads.hh

`Go to the documentation of this
file. <../../db/d37/MSThreads_8hh.html>`__

1 //

2 // MSThreads.hh

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

28 #ifndef \_LOG4TANGO\_THREADING\_MSTHREADS\_H

29 #define \_LOG4TANGO\_THREADING\_MSTHREADS\_H

30 

31 #include <string>

32 

33 // deal with ERROR #define

34 

35 // This #includes windows.h with NOGDI and WIN32\_LEAN\_AND\_MEAN

36 // #defined. If this is not what the user wants, #include

37 // windows.h before this file.

38 

39 #ifndef \_WINDOWS\_

40 # ifndef NOGDI

`41 <../../db/d37/MSThreads_8hh.html#a2bedaca1c6ca66de2397772910fbe140>`__ #
define NOGDI // circumvent the ERROR #define in windows.h

`42 <../../db/d37/MSThreads_8hh.html#adcc3f7038d118eceac6daa0c1cb85ad2>`__ #
define LOG4TANGO\_UNDEFINE\_NOGDI

43 # endif

44 

45 # ifndef WIN32\_LEAN\_AND\_MEAN

`46 <../../db/d37/MSThreads_8hh.html#ac7bef5d85e3dcd73eef56ad39ffc84a9>`__ #
define WIN32\_LEAN\_AND\_MEAN

`47 <../../db/d37/MSThreads_8hh.html#a51da47eccf881f253f7bce437e91fc23>`__ #
define LOG4TANGO\_UNDEFINE\_WIN32\_LEAN\_AND\_MEAN

48 # endif

49 

50 # include <windows.h>

51 

52 # ifdef LOG4TANGO\_UNDEFINE\_NOGDI

53 # undef NOGDI

54 # endif

55 

56 # ifdef LOG4TANGO\_UNDEFINE\_WIN32\_LEAN\_AND\_MEAN

57 # undef WIN32\_LEAN\_AND\_MEAN

58 # endif

59 

60 #endif

61 // done dealing with ERROR #define

62 

63 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

64 

65 namespace threading {

66 

67 std::string
`get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__
(void);

68 

69 long
`thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__
(void);

70 

71 //-----------------------------------------------------------------------------

72 // Class : MSMutex

73 //-----------------------------------------------------------------------------

`74 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__ class
`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__
`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__

75 {

76 public:

77 

`78 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__ 
`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__\ ()
{

79  InitializeCriticalSection(&\_criticalSection);

80  }

81 

`82 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__ 
`~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__\ ()
{

83  DeleteCriticalSection(&\_criticalSection);

84  }

85 

`86 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__ 
inline LPCRITICAL\_SECTION
`get\_critical\_section <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__
(void) {

87  return &\_criticalSection;

88  }

89 

90 private:

91 
`Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__\ (const
`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__\ &);

92  `Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__
operator=(const
`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__\ &);

93 

94  CRITICAL\_SECTION \_criticalSection;

95 };

96 

97 //-----------------------------------------------------------------------------

98 // Class : ScopedLock

99 //-----------------------------------------------------------------------------

`100 <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__ class
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__

101 {

102  public:

103 

`104 <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__ 
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__
(`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__\ &
mutex) {

105  \_criticalSection =
mutex.\ `get\_critical\_section <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__\ ();

106  EnterCriticalSection(\_criticalSection);

107  }

108 

`109 <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__ 
`~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__\ ()
{

110  LeaveCriticalSection(\_criticalSection);

111  }

112 

113 private:

114 
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__\ (const
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__\ &);

115 
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__
operator=(const
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__\ &);

116 

117  LPCRITICAL\_SECTION \_criticalSection;

118 };

119 

120 //-----------------------------------------------------------------------------

121 // Class : RecursiveMutex

122 //-----------------------------------------------------------------------------

`123 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__ class
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__

124 {

125 public:

126  // ctor

`127 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__ 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(void) : recursion\_level\_(0) {

128 
::InitializeCriticalSection(&`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__);

129  }

130 

131  // dtor

`132 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__ 
`~RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__
(void) {

133 
::DeleteCriticalSection(&`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__);

134  }

135 

136  // Locking an RecursiveMutex:

137  // If <timeout\_> is null (the default), <lock> blocks until

138  // the mutex is acquired and returns 1 (true). Otherwise,

139  // <lock> blocks until the mutex is acquired or times out

140  // after <timeout\_> milliseconds in which case 0 (false) is

141  // returned.

`142 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__ 
inline int
`lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__
(long timeout\_ = 0) {

143 
::EnterCriticalSection(&`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__);

144  recursion\_level\_++;

145  return 0;

146  }

147 

148  // Releasing an RecursiveMutex:

149  // Call unlock <recursion level> times (i.e. one call for

150  // each previous call to lock) or call unlockn just once.

151  // These two methods do nothing if the caller is not the

152  // current owner of the mutex.

`153 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__ 
inline void
`unlock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__
(void) {

154  //-should work if called by owner

155  recursion\_level\_--;

156 
::LeaveCriticalSection(&`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__);

157  }

158 

`159 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__ 
inline void
`unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__
(void) {

160  //-should work if called by owner

161  while (recursion\_level\_ > 0) {

162  recursion\_level\_--;

163 
::LeaveCriticalSection(&`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__);

164  }

165  }

166 

167 protected:

168  // guards the <recursion level>

`169 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__ 
CRITICAL\_SECTION
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__;

170 

171 private:

172  // current level of the recursion

173  unsigned long recursion\_level\_;

174 

175  // dummy copy constructor and operator= to prevent copying

176 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(const
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &);

177 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &
operator= (const
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &);

178 };

179 

180 //-----------------------------------------------------------------------------

181 // Class : ThreadLocalDataHolder

182 //-----------------------------------------------------------------------------

189 #ifdef LOG4TANGO\_HAS\_NDC

190 template<typename T> class ThreadLocalDataHolder

191 {

192 public:

193 

194  inline ThreadLocalDataHolder()

195  : \_key(TlsAlloc()) {

196  };

197 

198  inline ~ThreadLocalDataHolder() {

199  TlsFree(\_key);

200  };

201 

207  inline T\* get (void) const {

208  return (T\*)TlsGetValue(\_key);

209  };

210 

217  inline T\* operator->() const {

218  return get();

219  };

220 

226  inline T& operator\*() const {

227  return \*get();

228  };

229 

236  inline T\* release() {

237  T\* result = (T\*)TlsGetValue(\_key);

238  TlsSetValue(\_key, NULL);

239  return result;

240  };

241 

248  inline void reset(T\* p = NULL) {

249  T\* thing = (T\*)TlsGetValue(\_key);

250  delete thing;

251  TlsSetValue(\_key, p);

252  };

253 

254 private:

255 

256  DWORD \_key;

257 };

258 

259 #endif // LOG4TANGO\_HAS\_NDC

260 

261 } // namespace threading

262 

263 } // namespace log4tango

264 

265 #endif // \_LOG4TANGO\_THREADING\_MSTHREADS\_H

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::threading::ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html>`__

**Definition:** MSThreads.hh:100

`LOG4TANGO\_EXPORT <../../df/d5d/Export_8hh.html#abb9e874b4244b6247ac9dbb62a2c7b8f>`__

#define LOG4TANGO\_EXPORT

**Definition:** Export.hh:38

`log4tango::threading::RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__

**Definition:** MSThreads.hh:123

`log4tango::threading::Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__

int Mutex

**Definition:** DummyThreads.hh:41

`log4tango::threading::ScopedLock::ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#aa11d7d68ced4dc20f5577a264797e9a1>`__

ScopedLock(Mutex &mutex)

**Definition:** MSThreads.hh:104

`log4tango::threading::Mutex::get\_critical\_section <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ac0dff8ce594fd638931141d431b5117a>`__

LPCRITICAL\_SECTION get\_critical\_section(void)

**Definition:** MSThreads.hh:86

`log4tango::threading::RecursiveMutex::guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#aba88d437ae0d89daf73d46488b45b06d>`__

CRITICAL\_SECTION guard\_

**Definition:** MSThreads.hh:169

`log4tango::threading::Mutex::~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__

~Mutex()

**Definition:** MSThreads.hh:82

`log4tango::threading::thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__

long thread\_id(void)

`log4tango::threading::Mutex::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__

Mutex()

**Definition:** MSThreads.hh:78

`log4tango::threading::RecursiveMutex::lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__

int lock(long timeout\_=0)

**Definition:** MSThreads.hh:142

`log4tango::threading::ScopedLock::~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__

~ScopedLock()

**Definition:** MSThreads.hh:109

`log4tango::threading::RecursiveMutex::~RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__

~RecursiveMutex(void)

**Definition:** MSThreads.hh:132

`log4tango::threading::get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__

std::string get\_thread\_id(void)

**Definition:** DummyThreads.cpp:37

`log4tango::threading::RecursiveMutex::RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__

RecursiveMutex(void)

**Definition:** MSThreads.hh:127

`log4tango::threading::RecursiveMutex::unlock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__

void unlock(void)

**Definition:** MSThreads.hh:153

`log4tango::threading::RecursiveMutex::unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__

void unlockn(void)

**Definition:** MSThreads.hh:159

`log4tango::threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__

**Definition:** MSThreads.hh:74

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `threading <../../dir_58cd9cfc9a679a0ea9e384cd3ddfdc12.html>`__
-  `MSThreads.hh <../../db/d37/MSThreads_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
