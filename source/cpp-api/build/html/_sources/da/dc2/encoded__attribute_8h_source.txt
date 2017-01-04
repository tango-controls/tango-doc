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

encoded\_attribute.h

`Go to the documentation of this
file. <../../da/dc2/encoded__attribute_8h.html>`__

1 //

3 // file : encoded\_attribute.h

4 //

5 // description : Include file for the management of Tango::DevEncoded
format

6 //

7 // project : TANGO

8 //

9 // author(s) : JL Pons

10 //

11 // Copyright (C) :
2004,2005,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015

12 // European Synchrotron Radiation Facility

13 // BP 220, Grenoble 38043

14 // FRANCE

15 //

16 // This file is part of Tango.

17 //

18 // Tango is free software: you can redistribute it and/or modify

19 // it under the terms of the GNU Lesser General Public License as
published by

20 // the Free Software Foundation, either version 3 of the License, or

21 // (at your option) any later version.

22 //

23 // Tango is distributed in the hope that it will be useful,

24 // but WITHOUT ANY WARRANTY; without even the implied warranty of

25 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

26 // GNU Lesser General Public License for more details.

27 //

28 // You should have received a copy of the GNU Lesser General Public
License

29 // along with Tango. If not, see <http://www.gnu.org/licenses/>.

30 //

31 // $Revision$

32 //

33 //

34 //=============================================================================

35 

36 #include <tango.h>

37 

38 #ifndef \_ENCODED\_ATT\_H

39 #define \_ENCODED\_ATT\_H

40 

41 #include <tango/server/encoded\_format.h>

42 

43 namespace `Tango <../../de/ddf/namespaceTango.html>`__

44 {

45 

`53 <../../da/da5/classTango_1_1EncodedAttribute.html>`__ class
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__

54 {

55 

56 public:

57 

65 
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a2d44e9152c929390d51fd631f5e31d37>`__\ ();

66 

79 
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a2d44e9152c929390d51fd631f5e31d37>`__\ (int
buf\_pool\_size,bool serialization = false);

81 

89 
`~EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a6e013aa1fbfaa40971b3db1a32c17970>`__\ ();

91 

95 

105  void
`encode\_jpeg\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a7a98013fc1577c67127c0cca9b192b88>`__\ (unsigned
char \*gray8,int width,int height,double quality);

106 

116  void
`encode\_jpeg\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#afd6be02fbf49d3f7823679d190eea0a1>`__\ (unsigned
char \*rgb32,int width,int height,double quality);

117 

127  void
`encode\_jpeg\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a2bf74ff1635f2d3120dd0cdbef5e0c00>`__\ (unsigned
char \*rgb24,int width,int height,double quality);

128 

137  void
`encode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a0aeecda296c64b53ab43317e94e6ac35>`__\ (unsigned
char \*gray8,int width,int height);

138 

147  void
`encode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#aa67d49c4b99bd6e91e80138acca7a1a4>`__\ (unsigned
short \*gray16,int width,int height);

148 

157  void
`encode\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a8c0850a138718cf1a1513c20c1e58844>`__\ (unsigned
char \*rgb24,int width,int height);

159 

160 

173  void
`decode\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#a0a64f653b5fe0049cb04daf0740c4755>`__\ (`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr,int \*width,int \*height,unsigned char \*\*rgb32);

174 

184  void
`decode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#ae12a9771857f2fecbebd3b9381213ab5>`__\ (`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr,int \*width,int \*height,unsigned char \*\*gray8);

185 

195  void
`decode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#a76fef5a1583210da6f06d7e3fe5bf7bb>`__\ (`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr,int \*width,int \*height,unsigned short \*\*gray16);

196 

198 

200 

201  DevUChar \*get\_data()

202  {if (index==0)

203  return (DevUChar \*)buffer\_array[buf\_elt\_nb-1];

204  else

205  return (DevUChar \*)buffer\_array[index-1];}

206 

207  long get\_size()

208  {if (index==0)

209  return (long)buffSize\_array[buf\_elt\_nb-1];

210  else

211  return (long)buffSize\_array[index-1];}

212 

213  DevString \*get\_format() {return &format;}

214  bool get\_exclusion() {return manage\_exclusion;}

215  omni\_mutex \*get\_mutex()

216  {if (index==0)

217  return &(mutex\_array[buf\_elt\_nb-1]);

218  else

219  return &(mutex\_array[index-1]);}

220 

221 private:

222  class EncodedAttributeExt

223  {

224  };

225 

226  unsigned char \*\*buffer\_array;

227  int \*buffSize\_array;

228  omni\_mutex \*mutex\_array;

229  char \*format;

230 

231  int index;

232  int buf\_elt\_nb;

233  bool manage\_exclusion;

234 

235 #ifdef HAS\_UNIQUE\_PTR

236  unique\_ptr<EncodedAttributeExt> ext; // Class extension

237 #else

238  EncodedAttributeExt \*ext;

239 #endif

240 

241 };

242 

`243 <../../da/dc2/encoded__attribute_8h.html#a122c2c871efab18ffb4af25a750eeb0e>`__ #define
INC\_INDEX() \\

244  index++; \\

245  if (index == buf\_elt\_nb) \\

246  index = 0;

247 

248 } // End of Tango namespace

249 

250 #endif // \_ENCODED\_ATT\_H

`Tango::EncodedAttribute::encode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#aa67d49c4b99bd6e91e80138acca7a1a4>`__

void encode\_gray16(unsigned short \*gray16, int width, int height)

Encode a 16 bit grayscale image (no compression)

`Tango::EncodedAttribute::~EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a6e013aa1fbfaa40971b3db1a32c17970>`__

~EncodedAttribute()

The attribute desctructor.

`Tango::EncodedAttribute::encode\_jpeg\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a2bf74ff1635f2d3120dd0cdbef5e0c00>`__

void encode\_jpeg\_rgb24(unsigned char \*rgb24, int width, int height,
double quality)

Encode a 24 bit rgb color image as JPEG format.

`Tango::EncodedAttribute::encode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a0aeecda296c64b53ab43317e94e6ac35>`__

void encode\_gray8(unsigned char \*gray8, int width, int height)

Encode a 8 bit grayscale image (no compression)

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::EncodedAttribute::decode\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#a0a64f653b5fe0049cb04daf0740c4755>`__

void decode\_rgb32(DeviceAttribute \*attr, int \*width, int \*height,
unsigned char \*\*rgb32)

Decode a color image (JPEG\_RGB or RGB24) and returns a 32 bits RGB
image.

`Tango::EncodedAttribute::decode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#ae12a9771857f2fecbebd3b9381213ab5>`__

void decode\_gray8(DeviceAttribute \*attr, int \*width, int \*height,
unsigned char \*\*gray8)

Decode a 8 bits grayscale image (JPEG\_GRAY8 or GRAY8) and returns a 8
bits gray scale image...

`Tango::EncodedAttribute::decode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#a76fef5a1583210da6f06d7e3fe5bf7bb>`__

void decode\_gray16(DeviceAttribute \*attr, int \*width, int \*height,
unsigned short \*\*gray16)

Decode a 16 bits grayscale image (GRAY16) and returns a 16 bits gray
scale image. ...

`Tango::EncodedAttribute::encode\_jpeg\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a7a98013fc1577c67127c0cca9b192b88>`__

void encode\_jpeg\_gray8(unsigned char \*gray8, int width, int height,
double quality)

Encode a 8 bit grayscale image as JPEG format.

`Tango::EncodedAttribute::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a2d44e9152c929390d51fd631f5e31d37>`__

EncodedAttribute()

Create a new EncodedAttribute object.

`Tango::DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__

Fundamental type for sending an dreceiving data to and from device
attributes.

**Definition:** devapi.h:73

`Tango::EncodedAttribute::encode\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a8c0850a138718cf1a1513c20c1e58844>`__

void encode\_rgb24(unsigned char \*rgb24, int width, int height)

Encode a 24 bit color image (no compression)

`Tango::EncodedAttribute::encode\_jpeg\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#afd6be02fbf49d3f7823679d190eea0a1>`__

void encode\_jpeg\_rgb32(unsigned char \*rgb32, int width, int height,
double quality)

Encode a 32 bit rgb color image as JPEG format.

`Tango::EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__

This class provides method to deal with Tango::DevEncoded attribute
format.

**Definition:** encoded\_attribute.h:53

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `encoded\_attribute.h <../../da/dc2/encoded__attribute_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
