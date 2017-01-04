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

PThreads.hh

`Go to the documentation of this
file. <../../d0/d6c/PThreads_8hh.html>`__

1 //

2 // PThreads.hh

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

28 #ifndef \_LOG4TANGO\_THREADING\_PTHREADS\_H

29 #define \_LOG4TANGO\_THREADING\_PTHREADS\_H

30 

31 #include "../Portability.hh"

32 #include <stdio.h>

33 #include <pthread.h>

34 #include <string>

35 #include <assert.h>

36 

37 namespace `log4tango <../../d4/db0/namespacelog4tango.html>`__ {

38 

39 namespace threading {

40 

41 std::string
`get\_thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a91163823bc4a91e103ecad618f8b146a>`__
(void);

42 

43 long
`thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__
(void);

44 

45 //-----------------------------------------------------------------------------

46 // Class : Mutex

47 //-----------------------------------------------------------------------------

48 class
`Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__

49 {

50 private:

51  pthread\_mutex\_t mutex;

52 

53 

54 public:

`55 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__ 
inline
`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__\ ()
{

56  ::pthread\_mutex\_init(&mutex, NULL);

57  }

58 

`59 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__ 
inline
`~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__\ ()
{

60  ::pthread\_mutex\_destroy(&mutex);

61  }

62 

`63 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a121bae8bb2ca8d412983fbb303441ed0>`__ 
inline void
`lock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a121bae8bb2ca8d412983fbb303441ed0>`__\ ()
{

64  ::pthread\_mutex\_lock(&mutex);

65  }

66 

`67 <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a0689618bc67462cc3646e86de6b5f261>`__ 
inline void
`unlock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a0689618bc67462cc3646e86de6b5f261>`__\ ()
{

68  ::pthread\_mutex\_unlock(&mutex);

69  }

70 };

71 

72 //-----------------------------------------------------------------------------

73 // Class : ScopedLock

74 //-----------------------------------------------------------------------------

75 class
`ScopedLock <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__

76 {

77 private:

78 
`Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__\ &
\_mutex;

79 

80 public:

`81 <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#a3c6e5abbb0fada2b3ea6432bd19862dd>`__ 
inline
`ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#a3c6e5abbb0fada2b3ea6432bd19862dd>`__\ (`Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__
&m) : \_mutex(m) {

82  \_mutex.lock();

83  }

84 

`85 <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__ 
inline
`~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__\ ()
{

86  \_mutex.unlock();

87  }

88 };

89 

90 //-----------------------------------------------------------------------------

91 // Class : RecursiveMutex

92 //-----------------------------------------------------------------------------

93 class RecursiveMutex

94 {

95 public:

96  // ctor

97 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(void);

98 

99  // dtor

100 
`~RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7210fe141d367494415cf8b580910fdf>`__
(void);

101 

102  // Locking an RecursiveMutex:

103  // If <timeout\_> is null (the default), <lock> blocks until

104  // the mutex is acquired and returns 1 (true). Otherwise,

105  // <lock> blocks until the mutex is acquired or times out

106  // after <timeout\_> milliseconds in which case 0 (false) is

107  // returned.

108  int
`lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__
(long timeout\_ = 0);

109 

110  // Releasing an RecursiveMutex:

111  // Call unlock <recursion level> times (i.e. one call for

112  // each previous call to lock) or call unlockn just once.

113  // These two methods do nothing if the caller is not the

114  // current owner of the mutex.

115  void
`unlock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a35bcfd9220d32eb5d8974acde72e9820>`__
(void);

116  void
`unlockn <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ae8ca497191c6f8ac476f50fe5172f777>`__
(void);

117 

118 protected:

119  // guards the <recursion level> and <owner id>

`120 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a84a463cd8c14c629e9449a1ab16aecfb>`__ 
pthread\_mutex\_t
`guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a84a463cd8c14c629e9449a1ab16aecfb>`__;

121 

122  // this condition variable suspends other waiting threads

123  // until the mutex is available

`124 <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#abafc328ab69204599821730c657c3cba>`__ 
pthread\_cond\_t
`mutex\_available\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#abafc328ab69204599821730c657c3cba>`__;

125 

126 private:

127  // current level of the recursion

128  long recursion\_level\_;

129 

130  // current owner of the lock.

131  pthread\_t owner\_id\_;

132 

133  // dummy copy constructor and operator= to prevent copying

134 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a7bb6f1bb4ca7072b24bda6321e196fc8>`__
(const
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &);

135 
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &
operator= (const
`RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__\ &);

136 };

137 

138 //-----------------------------------------------------------------------------

139 // Class : ThreadLocalDataHolder

140 //-----------------------------------------------------------------------------

141 #ifdef LOG4TANGO\_HAS\_NDC

142 template<typename T> class ThreadLocalDataHolder {

143 

144 private:

145  pthread\_key\_t \_key;

146 

147 public:

148  typedef T data\_type;

149 

150  inline ThreadLocalDataHolder() {

151  ::pthread\_key\_create(&\_key, freeHolder);

152  }

153 

154  inline static void freeHolder(void \*p) {

155  assert(p != NULL);

156  delete reinterpret\_cast<T \*>(p);

157  }

158 

159  inline ~ThreadLocalDataHolder() {

160  T \*data = get();

161  if (data != NULL) {

162  delete data;

163  }

164  ::pthread\_key\_delete(\_key);

165  }

166 

167  inline T\* get() const {

168  return reinterpret\_cast<T \*>(::pthread\_getspecific(\_key));

169  }

170 

171  inline T\* operator->() const { return get(); }

172  inline T& operator\*() const { return \*get(); }

173 

174  inline T\* release() {

175  T\* result = get();

176  ::pthread\_setspecific(\_key, NULL);

177  return result;

178  }

179 

180  inline void reset(T\* p = NULL) {

181  T \*data = get();

182  if (data != NULL) {

183  delete data;

184  }

185  ::pthread\_setspecific(\_key, p);

186  }

187 };

188 #endif //LOG4TANGO\_HAS\_NDC

189 

190 } // namespace threading

191 

192 } // namespace log4tango

193 

194 #endif // \_LOG4TANGO\_THREADING\_PTHREADS\_H

`log4tango <../../d4/db0/namespacelog4tango.html>`__

**Definition:** Appender.hh:40

`log4tango::threading::RecursiveMutex::mutex\_available\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#abafc328ab69204599821730c657c3cba>`__

pthread\_cond\_t mutex\_available\_

**Definition:** PThreads.hh:124

`log4tango::threading::RecursiveMutex::guard\_ <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#a84a463cd8c14c629e9449a1ab16aecfb>`__

pthread\_mutex\_t guard\_

**Definition:** PThreads.hh:120

`log4tango::threading::RecursiveMutex <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html>`__

**Definition:** MSThreads.hh:123

`log4tango::threading::Mutex <../../db/d10/namespacelog4tango_1_1threading.html#a6ab044c515d422f490f47a2499bf1f0a>`__

int Mutex

**Definition:** DummyThreads.hh:41

`log4tango::threading::Mutex::unlock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a0689618bc67462cc3646e86de6b5f261>`__

void unlock()

**Definition:** PThreads.hh:67

`log4tango::threading::ScopedLock <../../db/d10/namespacelog4tango_1_1threading.html#ae0fb75dd01061ba7df4e4a68120507f1>`__

int ScopedLock

**Definition:** DummyThreads.hh:43

`log4tango::threading::Mutex::~Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#ad75cb2944b40e951cb131c66a573ef3c>`__

~Mutex()

**Definition:** PThreads.hh:59

`log4tango::threading::thread\_id <../../db/d10/namespacelog4tango_1_1threading.html#a078567483c4ee7490efecaa30047117f>`__

long thread\_id(void)

`log4tango::threading::Mutex::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#abc347dc995fca40b2017977630c173bc>`__

Mutex()

**Definition:** PThreads.hh:55

`log4tango::threading::ScopedLock::ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#a3c6e5abbb0fada2b3ea6432bd19862dd>`__

ScopedLock(Mutex &m)

**Definition:** PThreads.hh:81

`log4tango::threading::RecursiveMutex::lock <../../df/d2c/classlog4tango_1_1threading_1_1RecursiveMutex.html#ab25b75795eeed61c179ba00d3b9cd4e0>`__

int lock(long timeout\_=0)

**Definition:** MSThreads.hh:142

`log4tango::threading::ScopedLock::~ScopedLock <../../d3/d60/classlog4tango_1_1threading_1_1ScopedLock.html#ab03de73986f5bb51e7e40d5725e725bb>`__

~ScopedLock()

**Definition:** PThreads.hh:85

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

`log4tango::threading::Mutex::lock <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html#a121bae8bb2ca8d412983fbb303441ed0>`__

void lock()

**Definition:** PThreads.hh:63

`log4tango::threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__

**Definition:** MSThreads.hh:74

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `log4tango <../../dir_5a849e394260fc4e91409ef0349c0857.html>`__
-  `threading <../../dir_58cd9cfc9a679a0ea9e384cd3ddfdc12.html>`__
-  `PThreads.hh <../../d0/d6c/PThreads_8hh.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
