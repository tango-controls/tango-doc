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

apiexcept.h

`Go to the documentation of this
file. <../../d3/d7a/apiexcept_8h.html>`__

1 //

2 // apiexcept.h - include file for TANGO device api exceptions

3 //

4 //

5 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

6 // European Synchrotron Radiation Facility

7 // BP 220, Grenoble 38043

8 // FRANCE

9 //

10 // This file is part of Tango.

11 //

12 // Tango is free software: you can redistribute it and/or modify

13 // it under the terms of the GNU Lesser General Public License as
published by

14 // the Free Software Foundation, either version 3 of the License, or

15 // (at your option) any later version.

16 //

17 // Tango is distributed in the hope that it will be useful,

18 // but WITHOUT ANY WARRANTY; without even the implied warranty of

19 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

20 // GNU Lesser General Public License for more details.

21 //

22 // You should have received a copy of the GNU Lesser General Public
License

23 // along with Tango. If not, see <http://www.gnu.org/licenses/>.

24 

25 

26 #ifndef \_APIEXCEPT\_H

27 #define \_APIEXCEPT\_H

28 

29 #include <`tango/server/except.h <../../dc/d65/except_8h.html>`__\ >

30 #include <vector>

31 

32 using namespace `std <../../d8/dcc/namespacestd.html>`__;

33 

34 namespace `Tango <../../de/ddf/namespaceTango.html>`__ {

35 

36 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

37 \*

38 \* Exception classes used for the write\_attribute call

39 \*

40 \*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

41 

`54 <../../dc/d08/classTango_1_1NamedDevFailed.html>`__ class
`NamedDevFailed <../../dc/d08/classTango_1_1NamedDevFailed.html>`__

55 {

56 public:

`57 <../../dc/d08/classTango_1_1NamedDevFailed.html#a721334d873251d8ee91fb1f0479f281b>`__ 
string
`name <../../dc/d08/classTango_1_1NamedDevFailed.html#a721334d873251d8ee91fb1f0479f281b>`__;

`58 <../../dc/d08/classTango_1_1NamedDevFailed.html#a74da251e8cc904dddd1f037fb12d0288>`__ 
long
`idx\_in\_call <../../dc/d08/classTango_1_1NamedDevFailed.html#a74da251e8cc904dddd1f037fb12d0288>`__;

`59 <../../dc/d08/classTango_1_1NamedDevFailed.html#ab24a8e7c1a1a7b20e6361e85d5d4c20a>`__ 
DevErrorList
`err\_stack <../../dc/d08/classTango_1_1NamedDevFailed.html#ab24a8e7c1a1a7b20e6361e85d5d4c20a>`__;

60 

62 

63 
`NamedDevFailed <../../dc/d08/classTango_1_1NamedDevFailed.html>`__\ (const
DevErrorList &err,const string &na,long
idx):name(na),idx\_in\_call(idx),err\_stack(err) {}

64 
`NamedDevFailed <../../dc/d08/classTango_1_1NamedDevFailed.html>`__\ ();

65 };

66 

`79 <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__ class
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__:
public Tango::DevFailed

80 {

81 public:

`89 <../../d8/d55/classTango_1_1NamedDevFailedList.html#ab158860b2498a2ac2c2c0b019d04108f>`__ 
size\_t
`get\_faulty\_attr\_nb <../../d8/d55/classTango_1_1NamedDevFailedList.html#ab158860b2498a2ac2c2c0b019d04108f>`__\ ()
{return err\_list.size();}

`97 <../../d8/d55/classTango_1_1NamedDevFailedList.html#a3956dbf7ffa91df81efda72c4a1f6ab2>`__ 
bool
`call\_failed <../../d8/d55/classTango_1_1NamedDevFailedList.html#a3956dbf7ffa91df81efda72c4a1f6ab2>`__\ ()
{if ((err\_list.empty()==true) && (errors.length()!=0))return true;else
return false;}

98 

`99 <../../d8/d55/classTango_1_1NamedDevFailedList.html#a6223048f31f50ac1f6eaa9b6eb625236>`__ 
vector<NamedDevFailed>
`err\_list <../../d8/d55/classTango_1_1NamedDevFailedList.html#a6223048f31f50ac1f6eaa9b6eb625236>`__;

100 

102 

103 
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__\ (const
Tango::MultiDevFailed &,string,const char \*,const char \*);

104 
`NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__\ ()
{};

105 };

106 

107 

108 /\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*

109 \*

110 \* Macro to define API specific exception and their methods

111 \*

112 \*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/

113 

`114 <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__ #define
MAKE\_EXCEPT(E,I) \\

115 class E: public Tango::DevFailed \\

116 { \\

117 public: \\

118  E(const DevErrorList& err):DevFailed(err) {} \\

119 }; \\

120 class I \\

121 { \\

122 public: \\

123  static inline void throw\_exception(const char \*reason,const
string &desc,const char \*origin, \\

124  Tango::ErrSeverity sever = Tango::ERR) \\

125  {\\

126  Tango::DevErrorList errors(1);\\

127  errors.length(1);\\

128  errors[0].desc = CORBA::string\_dup(desc.c\_str()); \\

129  errors[0].severity = sever; \\

130  errors[0].reason = CORBA::string\_dup(reason);\\

131  errors[0].origin = CORBA::string\_dup(origin);\\

132  throw Tango::E(errors);\\

133  }\\

134 \\

135  static inline void throw\_exception(const char \*reason,char
\*desc,const char \*origin,\\

136  Tango::ErrSeverity sever = Tango::ERR)\\

137  {\\

138  Tango::DevErrorList errors(1);\\

139  errors.length(1);\\

140  errors[0].desc = CORBA::string\_dup(desc);\\

141  errors[0].severity = sever;\\

142  errors[0].reason = CORBA::string\_dup(reason);\\

143  errors[0].origin = CORBA::string\_dup(origin);\\

144  delete[] desc;\\

145  throw Tango::E(errors);\\

146  }\\

147 \\

148  static inline void throw\_exception(const char \*reason,const char
\*desc,const char \*origin,\\

149  Tango::ErrSeverity sever = Tango::ERR)\\

150  {\\

151  Tango::DevErrorList errors(1);\\

152  errors.length(1);\\

153  errors[0].desc = CORBA::string\_dup(desc);\\

154  errors[0].severity = sever;\\

155  errors[0].reason = CORBA::string\_dup(reason);\\

156  errors[0].origin = CORBA::string\_dup(origin);\\

157  throw Tango::E(errors);\\

158  }\\

159 \\

160  static inline void re\_throw\_exception(CORBA::SystemException
&cex,\\

161  const string &reason,const string &desc,\\

162  const char \*origin,\\

163  Tango::ErrSeverity sever = Tango::ERR)\\

164  {\\

165  Tango::DevErrorList errors(2);\\

166  errors.length(2);\\

167  Tango::Except::the\_mutex.lock(); \\

168  char \*tmp = Tango::Except::print\_CORBA\_SystemException(&cex);\\

169  errors[0].desc = CORBA::string\_dup(tmp);\\

170  Tango::Except::the\_mutex.unlock(); \\

171  errors[0].severity = sever;\\

172  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

173  errors[0].origin = CORBA::string\_dup(origin);\\

174  errors[1].desc = CORBA::string\_dup(desc.c\_str());\\

175  errors[1].severity = sever;\\

176  errors[1].reason = CORBA::string\_dup(reason.c\_str());\\

177  errors[1].origin = CORBA::string\_dup(origin);\\

178  throw Tango::E(errors);\\

179  }\\

180 \\

181  static inline void re\_throw\_exception(CORBA::SystemException
&cex,\\

182  char \*reason,char \*desc,\\

183  const char \*origin,\\

184  Tango::ErrSeverity sever = Tango::ERR)\\

185  {\\

186  Tango::DevErrorList errors(2);\\

187  errors.length(2);\\

188  Tango::Except::the\_mutex.lock(); \\

189  char \*tmp = Tango::Except::print\_CORBA\_SystemException(&cex);\\

190  errors[0].desc = CORBA::string\_dup(tmp);\\

191  Tango::Except::the\_mutex.unlock(); \\

192  errors[0].severity = sever;\\

193  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

194  errors[0].origin = CORBA::string\_dup(origin);\\

195  errors[1].desc = CORBA::string\_dup(desc);\\

196  errors[1].severity = sever;\\

197  errors[1].reason = CORBA::string\_dup(reason);\\

198  errors[1].origin = CORBA::string\_dup(origin);\\

199  delete[] desc;\\

200  delete[] reason;\\

201  throw Tango::E(errors);\\

202  }\\

203  static inline void re\_throw\_exception(CORBA::SystemException
&cex,\\

204  const char \*reason,const string &desc,\\

205  const char \*origin,\\

206  Tango::ErrSeverity sever = Tango::ERR)\\

207  {\\

208  Tango::DevErrorList errors(2);\\

209  errors.length(2);\\

210  Tango::Except::the\_mutex.lock(); \\

211  char \*tmp = Tango::Except::print\_CORBA\_SystemException(&cex);\\

212  errors[0].desc = CORBA::string\_dup(tmp);\\

213  Tango::Except::the\_mutex.unlock(); \\

214  errors[0].severity = sever;\\

215  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

216  errors[0].origin = CORBA::string\_dup(origin);\\

217  errors[1].desc = CORBA::string\_dup(desc.c\_str());\\

218  errors[1].severity = sever;\\

219  errors[1].reason = CORBA::string\_dup(reason);\\

220  errors[1].origin = CORBA::string\_dup(origin);\\

221  throw Tango::E(errors);\\

222  }\\

223  static inline void re\_throw\_exception(CORBA::SystemException
&cex,\\

224  const char \*reason,const string &desc,\\

225  const string &origin,\\

226  Tango::ErrSeverity sever = Tango::ERR)\\

227  {\\

228  Tango::DevErrorList errors(2);\\

229  errors.length(2);\\

230  Tango::Except::the\_mutex.lock(); \\

231  char \*tmp = Tango::Except::print\_CORBA\_SystemException(&cex);\\

232  errors[0].desc = CORBA::string\_dup(tmp);\\

233  Tango::Except::the\_mutex.unlock(); \\

234  errors[0].severity = sever;\\

235  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

236  errors[0].origin = CORBA::string\_dup(origin.c\_str());\\

237  errors[1].desc = CORBA::string\_dup(desc.c\_str());\\

238  errors[1].severity = sever;\\

239  errors[1].reason = CORBA::string\_dup(reason);\\

240  errors[1].origin = CORBA::string\_dup(origin.c\_str());\\

241  throw Tango::E(errors);\\

242  }\\

243 \\

244  static inline void re\_throw\_exception(CORBA::SystemException
&cex,\\

245  const char \*reason,char \*desc,\\

246  const char \*origin,\\

247  Tango::ErrSeverity sever = Tango::ERR)\\

248  {\\

249  Tango::DevErrorList errors(2);\\

250  errors.length(2);\\

251  Tango::Except::the\_mutex.lock(); \\

252  char \*tmp = Tango::Except::print\_CORBA\_SystemException(&cex);\\

253  errors[0].desc = CORBA::string\_dup(tmp);\\

254  Tango::Except::the\_mutex.unlock(); \\

255  errors[0].severity = sever;\\

256  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

257  errors[0].origin = CORBA::string\_dup(origin);\\

258  errors[1].desc = CORBA::string\_dup(desc);\\

259  errors[1].severity = sever;\\

260  errors[1].reason = CORBA::string\_dup(reason);\\

261  errors[1].origin = CORBA::string\_dup(origin);\\

262  delete[] desc;\\

263  throw Tango::E(errors);\\

264  }\\

265 \\

266  static inline void re\_throw\_exception(Tango::E &ex,\\

267  const char \*reason,char \*desc,\\

268  const char \*origin,\\

269  Tango::ErrSeverity sever = Tango::ERR)\\

270  {\\

271  long nb\_err = ex.errors.length();\\

272  ex.errors.length(nb\_err + 1);\\

273  ex.errors[nb\_err].severity = sever;\\

274  ex.errors[nb\_err].desc = CORBA::string\_dup(desc);\\

275  delete[] desc;\\

276  ex.errors[nb\_err].origin = CORBA::string\_dup(origin);\\

277  ex.errors[nb\_err].reason = CORBA::string\_dup(reason);\\

278  throw ex;\\

279  }\\

280 \\

281  static inline void re\_throw\_exception(Tango::E &ex,\\

282  const char \*reason,const string &desc,\\

283  const char \*origin,\\

284  Tango::ErrSeverity sever = Tango::ERR)\\

285  {\\

286  long nb\_err = ex.errors.length();\\

287  ex.errors.length(nb\_err + 1);\\

288  ex.errors[nb\_err].severity = sever;\\

289  ex.errors[nb\_err].desc = CORBA::string\_dup(desc.c\_str());\\

290  ex.errors[nb\_err].origin = CORBA::string\_dup(origin);\\

291  ex.errors[nb\_err].reason = CORBA::string\_dup(reason);\\

292  throw ex;\\

293  }\\

294  static inline void re\_throw\_exception(Tango::DevFailed &ex,\\

295  const char \*reason,char \*desc,\\

296  const char \*origin,\\

297  Tango::ErrSeverity sever = Tango::ERR)\\

298  {\\

299  long nb\_err = ex.errors.length();\\

300  ex.errors.length(nb\_err + 1);\\

301  ex.errors[nb\_err].severity = sever;\\

302  ex.errors[nb\_err].desc = CORBA::string\_dup(desc);\\

303  delete[] desc;\\

304  ex.errors[nb\_err].origin = CORBA::string\_dup(origin);\\

305  ex.errors[nb\_err].reason = CORBA::string\_dup(reason);\\

306  throw ex;\\

307  }\\

308 \\

309  static inline void re\_throw\_exception(Tango::DevFailed &ex,\\

310  const char \*reason,const string &desc,\\

311  const char \*origin,\\

312  Tango::ErrSeverity sever = Tango::ERR)\\

313  {\\

314  long nb\_err = ex.errors.length();\\

315  ex.errors.length(nb\_err + 1);\\

316  ex.errors[nb\_err].severity = sever;\\

317  ex.errors[nb\_err].desc = CORBA::string\_dup(desc.c\_str());\\

318  ex.errors[nb\_err].origin = CORBA::string\_dup(origin);\\

319  ex.errors[nb\_err].reason = CORBA::string\_dup(reason);\\

320  throw ex;\\

321  }\\

322  static inline void re\_throw\_exception(Tango::DevFailed &ex,\\

323  const char \*reason,const char \*desc,\\

324  const char \*origin,\\

325  Tango::ErrSeverity sever = Tango::ERR)\\

326  {\\

327  long nb\_err = ex.errors.length();\\

328  ex.errors.length(nb\_err + 1);\\

329  ex.errors[nb\_err].severity = sever;\\

330  ex.errors[nb\_err].desc = CORBA::string\_dup(desc);\\

331  ex.errors[nb\_err].origin = CORBA::string\_dup(origin);\\

332  ex.errors[nb\_err].reason = CORBA::string\_dup(reason);\\

333  throw ex;\\

334  }\\

335 \\

336  static inline void re\_throw\_exception(char
\*CORBA\_error\_desc,\\

337  const char \*reason,char \*desc,\\

338  const char \*origin,\\

339  Tango::ErrSeverity sever = Tango::ERR)\\

340  {\\

341  Tango::DevErrorList errors(2);\\

342  errors.length(2);\\

343  errors[0].desc = CORBA::string\_dup(CORBA\_error\_desc);\\

344  errors[0].severity = sever;\\

345  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

346  errors[0].origin = CORBA::string\_dup(origin);\\

347  errors[1].desc = CORBA::string\_dup(desc);\\

348  errors[1].severity = sever;\\

349  errors[1].reason = CORBA::string\_dup(reason);\\

350  errors[1].origin = CORBA::string\_dup(origin);\\

351  delete[] desc;\\

352  throw Tango::E(errors);\\

353  }\\

354 \\

355  static inline void re\_throw\_exception(char
\*CORBA\_error\_desc,\\

356  const char \*reason,const string &desc,\\

357  const char \*origin,\\

358  Tango::ErrSeverity sever = Tango::ERR)\\

359  {\\

360  Tango::DevErrorList errors(2);\\

361  errors.length(2);\\

362  errors[0].desc = CORBA::string\_dup(CORBA\_error\_desc);\\

363  errors[0].severity = sever;\\

364  errors[0].reason = CORBA::string\_dup("API\_CorbaException");\\

365  errors[0].origin = CORBA::string\_dup(origin);\\

366  errors[1].desc = CORBA::string\_dup(desc.c\_str());\\

367  errors[1].severity = sever;\\

368  errors[1].reason = CORBA::string\_dup(reason);\\

369  errors[1].origin = CORBA::string\_dup(origin);\\

370  throw Tango::E(errors);\\

371  }\\

372 };

373 

374 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (ConnectionFailed,ApiConnExcept)

375 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (CommunicationFailed,ApiCommExcept)

376 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (WrongNameSyntax,ApiWrongNameExcept)

377 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (NonDbDevice,ApiNonDbExcept)

378 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (WrongData,ApiDataExcept)

379 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (NonSupportedFeature,ApiNonSuppExcept)

380 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (AsynCall,ApiAsynExcept)

381 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (AsynReplyNotArrived,ApiAsynNotThereExcept)

382 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (EventSystemFailed,EventSystemExcept)

383 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (DeviceUnlocked,DeviceUnlockedExcept)

384 `MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__\ (NotAllowed,NotAllowedExcept)

385 

386 //

387 // Define macros for the management of the Corba TRANSIENT exception

388 //

389 

`390 <../../d3/d7a/apiexcept_8h.html#ac86ab2caba67e3455c7f2f74ab9c3dcc>`__ #define
TRANSIENT\_NOT\_EXIST\_EXCEPT(E,CLASS,NAME,OBJ) \\

391  if (E.minor() == omni::TRANSIENT\_CallTimedout) \\

392  { \\

393 \\

394  bool need\_reconnect = false; \\

395  omniORB::setClientConnectTimeout(NARROW\_CLNT\_TIMEOUT); \\

396  try \\

397  { \\

398  Device\_var dev = Device::\_duplicate(OBJ->device); \\

399  dev->ping(); \\

400  } \\

401  catch(CORBA::TRANSIENT &trans\_ping) \\

402  { \\

403  if (trans\_ping.minor() == omni::TRANSIENT\_ConnectFailed \|\| \\

404  trans\_ping.minor() == omni::TRANSIENT\_CallTimedout \|\| \\

405  (OBJ->ext->has\_alt\_adr == true && trans\_ping.minor() ==
omni::TRANSIENT\_CallTimedout)) \\

406  { \\

407  need\_reconnect = true; \\

408  } \\

409  } \\

410  catch(...) {} \\

411  omniORB::setClientConnectTimeout(0); \\

412 \\

413  if (need\_reconnect == false) \\

414  { \\

415  TangoSys\_OMemStream desc; \\

416  desc << "Timeout (" << OBJ->timeout << " mS) exceeded on device "
<< OBJ->dev\_name(); \\

417  desc << ends; \\

418  TangoSys\_OMemStream ori; \\

419  ori << CLASS << ":" << NAME << ends; \\

420  ApiCommExcept::re\_throw\_exception(E, \\

421  (const char \*)"API\_DeviceTimedOut", \\

422  desc.str(), ori.str());\\

423  }\\

424  } \\

425 \\

426  OBJ->set\_connection\_state(CONNECTION\_NOTOK); \\

427  ctr++; \\

428 \\

429  if ((OBJ->tr\_reco == false) \|\| \\

430  ((ctr == 2) && (OBJ->tr\_reco == true))) \\

431  { \\

432 \\

433  TangoSys\_OMemStream desc; \\

434  desc << "Failed to execute " << NAME << " on device " <<
OBJ->dev\_name(); \\

435  desc << ends; \\

436  TangoSys\_OMemStream ori; \\

437  ori << CLASS << ":" << NAME << ends; \\

438  ApiCommExcept::re\_throw\_exception(E, \\

439  (const char\*)"API\_CommunicationFailed", \\

440  desc.str(),ori.str()); \\

441  }

442 

443 

`444 <../../d3/d7a/apiexcept_8h.html#aafa766dd97bc9baaa3e3a9ed7aebf4d2>`__ #define
TRANSIENT\_NOT\_EXIST\_EXCEPT\_CMD(E) \\

445  if (E.minor() == omni::TRANSIENT\_CallTimedout) \\

446  { \\

447 \\

448  bool need\_reconnect = false; \\

449  try \\

450  { \\

451  Device\_var dev = Device::\_duplicate(device); \\

452  dev->ping(); \\

453  } \\

454  catch(CORBA::TRANSIENT &trans\_ping) \\

455  { \\

456  if (trans\_ping.minor() == omni::TRANSIENT\_ConnectFailed \|\| \\

457  trans\_ping.minor() == omni::TRANSIENT\_CallTimedout \|\| \\

458  (ext->has\_alt\_adr == true && trans\_ping.minor() ==
omni::TRANSIENT\_CallTimedout)) \\

459  { \\

460  need\_reconnect = true; \\

461  } \\

462  } \\

463  catch(...) {} \\

464 \\

465  if (need\_reconnect == false) \\

466  { \\

467  TangoSys\_OMemStream desc; \\

468  desc << "Timeout (" << timeout << " mS) exceeded on device " <<
dev\_name(); \\

469  desc << ", command " << command << ends; \\

470  ApiCommExcept::re\_throw\_exception(E, \\

471  (const char \*)"API\_DeviceTimedOut", \\

472  desc.str(), \\

473  (const char \*)"Connection::command\_inout()"); \\

474  }\\

475  } \\

476 \\

477  set\_connection\_state(CONNECTION\_NOTOK); \\

478  if (get\_lock\_ctr() != 0) \\

479  { \\

480  set\_lock\_ctr(0); \\

481  TangoSys\_OMemStream desc; \\

482  desc << "Device " << dev\_name() << " has lost your lock(s) (server
re-start?) while executing command " << command << ends; \\

483  DeviceUnlockedExcept::re\_throw\_exception(E,(const
char\*)DEVICE\_UNLOCKED\_REASON, \\

484  desc.str(), (const char\*)"Connection::command\_inout()"); \\

485  } \\

486  ctr++; \\

487 \\

488  if ((tr\_reco == false) \|\| \\

489  ((ctr == 2) && (tr\_reco == true))) \\

490  { \\

491  TangoSys\_OMemStream desc; \\

492  desc << "Failed to execute command\_inout on device " <<
dev\_name(); \\

493  desc << ", command " << command << ends; \\

494  ApiCommExcept::re\_throw\_exception(E, \\

495  (const char\*)"API\_CommunicationFailed", \\

496  desc.str(), \\

497  (const char\*)"Connection::command\_inout()"); \\

498  }

499 

500 

501 } // End of Tango namespace

502 

503 #endif /\* \_APIEXCEPT\_H \*/

`except.h <../../dc/d65/except_8h.html>`__

`std <../../d8/dcc/namespacestd.html>`__

**Definition:** LoggerStream.hh:178

`Tango::NamedDevFailedList <../../d8/d55/classTango_1_1NamedDevFailedList.html>`__

An exception class.

**Definition:** apiexcept.h:79

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::NamedDevFailedList::get\_faulty\_attr\_nb <../../d8/d55/classTango_1_1NamedDevFailedList.html#ab158860b2498a2ac2c2c0b019d04108f>`__

size\_t get\_faulty\_attr\_nb()

Get faulty attribute number.

**Definition:** apiexcept.h:89

`Tango::NamedDevFailed::name <../../dc/d08/classTango_1_1NamedDevFailed.html#a721334d873251d8ee91fb1f0479f281b>`__

string name

The name of the attribute which fails.

**Definition:** apiexcept.h:57

`Tango::NamedDevFailed::err\_stack <../../dc/d08/classTango_1_1NamedDevFailed.html#ab24a8e7c1a1a7b20e6361e85d5d4c20a>`__

DevErrorList err\_stack

The error stack.

**Definition:** apiexcept.h:59

`Tango::NamedDevFailedList::err\_list <../../d8/d55/classTango_1_1NamedDevFailedList.html#a6223048f31f50ac1f6eaa9b6eb625236>`__

vector< NamedDevFailed > err\_list

There is one element in this vector for each attribute which failed
during its writing.

**Definition:** apiexcept.h:99

`Tango::NamedDevFailed::idx\_in\_call <../../dc/d08/classTango_1_1NamedDevFailed.html#a74da251e8cc904dddd1f037fb12d0288>`__

long idx\_in\_call

Index in the write\_attributes method parameter vector of the attribute
which failed.

**Definition:** apiexcept.h:58

`MAKE\_EXCEPT <../../d3/d7a/apiexcept_8h.html#afd452ad0dbb5bb9da19c6229068b0aac>`__

#define MAKE\_EXCEPT(E, I)

**Definition:** apiexcept.h:114

`Tango::NamedDevFailed <../../dc/d08/classTango_1_1NamedDevFailed.html>`__

An exception class.

**Definition:** apiexcept.h:54

`Tango::NamedDevFailedList::call\_failed <../../d8/d55/classTango_1_1NamedDevFailedList.html#a3956dbf7ffa91df81efda72c4a1f6ab2>`__

bool call\_failed()

Check if the call failed.

**Definition:** apiexcept.h:97

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `client <../../dir_aabb28ef55dfa122001606060d01cd05.html>`__
-  `apiexcept.h <../../d3/d7a/apiexcept_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
