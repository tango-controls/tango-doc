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

w\_pipe.h

`Go to the documentation of this file. <../../de/d22/w__pipe_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : w\_pipe.h

4 //

5 // description : Include file for the WPipe class.

6 //

7 // project : TANGO

8 //

9 // author(s) : E.Taurel

10 //

11 // Copyright (C) : 2014,2015

12 // European Synchrotron Radiation Facility

13 // BP 220, Grenoble 38043

14 // FRANCE

15 //

16 // This file is part of Tango.

17 //

18 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

19 // License as published by the Free Software Foundation, either
version 3 of the License, or

20 // (at your option) any later version.

21 //

22 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

23 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

24 // GNU Lesser General Public License for more details.

25 //

26 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

27 // If not, see <http://www.gnu.org/licenses/>.

28 //

29 // $Revision$

30 //

31 //===================================================================================================================

32 

33 #ifndef \_W\_PIPE\_H

34 #define \_W\_PIPE\_H

35 

36 #include <tango.h>

37 

38 namespace `Tango <../../de/ddf/namespaceTango.html>`__

39 {

40 

`52 <../../d2/de5/classTango_1_1WPipe.html>`__ class
`WPipe <../../d2/de5/classTango_1_1WPipe.html>`__: public
`Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

53 {

54 public:

55 

`64 <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__ 
`WPipe <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__\ ():w\_ext(new
WPipeExt) {}

65 

74 
`WPipe <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__\ (const
string &na,const Tango::DispLevel level);

76 

83 #ifdef HAS\_UNIQUE\_PTR

84  virtual
`~WPipe <../../d2/de5/classTango_1_1WPipe.html#ab90cc0267c8765c2db3c2c0a41a291c2>`__\ ()
{}

85 #else

`86 <../../d2/de5/classTango_1_1WPipe.html#ab90cc0267c8765c2db3c2c0a41a291c2>`__ 
virtual
`~WPipe <../../d2/de5/classTango_1_1WPipe.html#ab90cc0267c8765c2db3c2c0a41a291c2>`__\ ()
{delete w\_ext;}

87 #endif

88 

89 

`101 <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__ 
string
`get\_root\_blob\_name <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__\ ();}

103 

107 #ifdef GEN\_DOC

108 

118  `WPipe <../../d2/de5/classTango_1_1WPipe.html>`__ & `operator
>> <../../d2/de5/classTango_1_1WPipe.html#a8373577b75416aea0045dab9d6a0e79f>`__\ (short
&datum);

119 #endif

120 

`127 <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__ 
size\_t
`get\_data\_elt\_nb <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__\ ();}

`135 <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__ 
vector<string>
`get\_data\_elt\_names <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__\ ()
{return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#a2becdbba06b82cf962423f937d54b608>`__\ ();}

`144 <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__ 
string
`get\_data\_elt\_name <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__\ (size\_t
ind) {return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_data\_elt\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a73058a3dbe75fa859caad08c56b9e83f>`__\ (ind);}

`153 <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__ 
int
`get\_data\_elt\_type <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__\ (size\_t
ind) {return
`the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__.\ `get\_data\_elt\_type <../../df/dd9/classTango_1_1DevicePipeBlob.html#abe84aab96cd9150adceee9f653dea59f>`__\ (ind);}

155 

157  virtual void
write(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*)
{}

158 

159 

160 
`WPipe <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__
&operator[](const string &);

161 

162 private:

163  class WPipeExt

164  {

165  public:

166  WPipeExt() {}

167  };

168 

169 #ifdef HAS\_UNIQUE\_PTR

170  unique\_ptr<WPipeExt> w\_ext; // Class extension

171 #else

172  WPipeExt \*w\_ext;

173 #endif

174 

175 };

176 

177 

178 template <typename T>

179 WPipe
&\ `operator>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (WPipe
&,T &);

180 

181 template <typename T>

182 WPipe
&\ `operator>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (WPipe
&,T \*);

183 

184 template <typename T>

185 WPipe
&\ `operator>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__\ (WPipe
&, DataElement<T> &);

186 

187 

188 } // End of Tango namespace

189 

190 #endif // \_W\_PIPE\_H

`Tango::WPipe::get\_data\_elt\_name <../../d2/de5/classTango_1_1WPipe.html#aefa6c951693649873f76f93729ba58b0>`__

string get\_data\_elt\_name(size\_t ind)

Get root blob data element name.

**Definition:** w\_pipe.h:144

`Tango::Pipe::the\_blob <../../d8/d14/classTango_1_1Pipe.html#a784d199e1309184b6c5afbe64dcc64b4>`__

DevicePipeBlob the\_blob

**Definition:** pipe.h:446

`Tango::DevicePipeBlob::get\_data\_elt\_names <../../df/dd9/classTango_1_1DevicePipeBlob.html#a2becdbba06b82cf962423f937d54b608>`__

vector< string > get\_data\_elt\_names()

Get blob data elements name.

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::WPipe::get\_root\_blob\_name <../../d2/de5/classTango_1_1WPipe.html#afdae25b4ab3382578c2ada89da569698>`__

string get\_root\_blob\_name()

Get root blob name.

**Definition:** w\_pipe.h:101

`Tango::WPipe::get\_data\_elt\_nb <../../d2/de5/classTango_1_1WPipe.html#a490dc17dc154629d22e09356bba2160e>`__

size\_t get\_data\_elt\_nb()

Get root blob data element number.

**Definition:** w\_pipe.h:127

`Tango::WPipe <../../d2/de5/classTango_1_1WPipe.html>`__

This class is a class representing a writable pipe in the TANGO device
server pattern.

**Definition:** w\_pipe.h:52

`Tango::WPipe::get\_data\_elt\_names <../../d2/de5/classTango_1_1WPipe.html#a6a13a4ae4253177e1b19c5921a61066b>`__

vector< string > get\_data\_elt\_names()

Get root blob data elements name.

**Definition:** w\_pipe.h:135

`Tango::Pipe <../../d8/d14/classTango_1_1Pipe.html>`__

This class is a class representing a pipe in the TANGO device server
pattern.

**Definition:** pipe.h:77

`Tango::operator>> <../../de/ddf/namespaceTango.html#a0b48524533ed1736e05e6fa10629aa60>`__

WPipe & operator>>(WPipe &, T &)

`Tango::DevicePipeBlob::get\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a5271acce39f4b6d3ddc5e91775ff8039>`__

const string & get\_name()

Get blob name.

**Definition:** devapi.h:164

`Tango::WPipe::operator>> <../../d2/de5/classTango_1_1WPipe.html#a8373577b75416aea0045dab9d6a0e79f>`__

WPipe & operator>>(short &datum)

Extract data from a device pipe.

`Tango::DevicePipeBlob::get\_data\_elt\_nb <../../df/dd9/classTango_1_1DevicePipeBlob.html#a85220fe9f2351d7a43dc4f7fdf4cd3d5>`__

size\_t get\_data\_elt\_nb()

Get blob data element number.

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::WPipe::~WPipe <../../d2/de5/classTango_1_1WPipe.html#ab90cc0267c8765c2db3c2c0a41a291c2>`__

virtual ~WPipe()

The object desctructor.

**Definition:** w\_pipe.h:86

`Tango::WPipe::WPipe <../../d2/de5/classTango_1_1WPipe.html#a55a5cb58749f6c67f8f40680ef51271e>`__

WPipe()

Constructs a newly allocated WPipe object.

**Definition:** w\_pipe.h:64

`Tango::DevicePipeBlob::get\_data\_elt\_type <../../df/dd9/classTango_1_1DevicePipeBlob.html#abe84aab96cd9150adceee9f653dea59f>`__

int get\_data\_elt\_type(size\_t ind)

Get blob data element value type.

`Tango::DevicePipeBlob::get\_data\_elt\_name <../../df/dd9/classTango_1_1DevicePipeBlob.html#a73058a3dbe75fa859caad08c56b9e83f>`__

string get\_data\_elt\_name(size\_t ind)

Get blob data element name.

`Tango::WPipe::get\_data\_elt\_type <../../d2/de5/classTango_1_1WPipe.html#a921bd7f37da698a6a39247756a873a68>`__

int get\_data\_elt\_type(size\_t ind)

Get root blob data element value type.

**Definition:** w\_pipe.h:153

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `w\_pipe.h <../../de/d22/w__pipe_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
