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

fwdattrdesc.h

`Go to the documentation of this
file. <../../d8/d3c/fwdattrdesc_8h.html>`__

1 //===================================================================================================================

2 //

3 // file : fwdattrdesc.h

4 //

5 // description : Include file for the FwdAttr classes hierarchy. Three
classes are declared in this file :

6 // The FwdAttr class

7 //

8 // project : TANGO

9 //

10 // author(s) : A.Gotz + E.Taurel

11 //

12 // Copyright (C) : 2013,2014,2015

13 // European Synchrotron Radiation Facility

14 // BP 220, Grenoble 38043

15 // FRANCE

16 //

17 // This file is part of Tango.

18 //

19 // Tango is free software: you can redistribute it and/or modify it
under the terms of the GNU Lesser General Public

20 // License as published by the Free Software Foundation, either
version 3 of the License, or

21 // (at your option) any later version.

22 //

23 // Tango is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty

24 // of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the

25 // GNU Lesser General Public License for more details.

26 //

27 // You should have received a copy of the GNU Lesser General Public
License along with Tango.

28 // If not, see <http://www.gnu.org/licenses/>.

29 //

30 // $Revision$

31 //

32 //===================================================================================================================

33 

34 #ifndef \_FWDATTRDESC\_H

35 #define \_FWDATTRDESC\_H

36 

37 #include <tango.h>

38 

39 namespace `Tango <../../de/ddf/namespaceTango.html>`__

40 {

41 

`58 <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__ class
`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__

59 {

60 public:

61 

`68 <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a1f9555dc9376f0ac86399164ae6be529>`__ 
`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a1f9555dc9376f0ac86399164ae6be529>`__\ ():ext(Tango\_nullptr)
{}

70 

`78 <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a83a156838771e7aac685e7e3c1a89fd3>`__ 
void
`set\_label <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a83a156838771e7aac685e7e3c1a89fd3>`__\ (const
string &def\_label)

79  {

80  label = def\_label;

81  }

83 

85 
~\ `UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__\ ()
{}

86 

87  string label;

88 

89 private:

90  class UserDefaultFwdAttrPropExt

91  {

92  };

93 

94 #ifdef HAS\_UNIQUE\_PTR

95  unique\_ptr<UserDefaultFwdAttrPropExt> ext; // Class extension

96 #else

97  UserDefaultFwdAttrPropExt \*ext;

98 #endif

99 };

100 

101 class MultiAttribute;

102 

`117 <../../d6/daa/classTango_1_1FwdAttr.html>`__ class
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__: public
`ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__

118 {

119 public:

130 
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html#a9a241a7b91325152d9cb29e339ed816d>`__\ (const
string &name,const string
&root\_attribute=\ `RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__);

132 

140  void
`set\_default\_properties <../../d6/daa/classTango_1_1FwdAttr.html#a4e03c27d8edac79cb48a9f2cb0170359>`__\ (`UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__
&prop);

142 

144 
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html#a9a241a7b91325152d9cb29e339ed816d>`__\ (const
`FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__ &);

145  virtual bool is\_fwd() {return true;}

146 

147  string &get\_fwd\_root\_att() {return fwd\_root\_att;}

148  string &get\_fwd\_dev\_name() {return fwd\_dev\_name;}

149  string &get\_full\_root\_att() {return full\_root\_att;}

150  bool is\_correctly\_configured() {return fwd\_wrongly\_conf;}

151 
`FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__
get\_err\_kind() {return err\_kind;}

152  void
set\_err\_kind(\ `FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__
\_e) {err\_kind = \_e;}

153 

154  virtual void
read(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*,\ `Attribute <../../d6/dad/classTango_1_1Attribute.html>`__ &);

155  virtual void
write(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*,\ `WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__ &);

156  virtual bool
is\_allowed(\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__
\*,\ `AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__)
{return true;}

157 

158  virtual void
init\_conf(\ `AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__
\*);

159  bool validate\_fwd\_att(vector<AttrProperty> &,const string &);

160  void get\_root\_conf(string
&,\ `DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*);

161 

162  void remove\_useless\_prop(vector<AttrProperty> &,string
&,\ `MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__
\*);

163  string &get\_label\_from\_default\_properties();

164 

165 protected:

167  string full\_root\_att; // Root att (dev\_name/att\_name)

168  string fwd\_dev\_name; // Root att device name (lower case)

169  string fwd\_root\_att; // Root att (lower case)

170  bool fwd\_wrongly\_conf;

171 
`FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__
err\_kind;

172 

173 private:

174  class FwdAttrExt

175  {

176  };

177 

178 #ifdef HAS\_UNIQUE\_PTR

179  unique\_ptr<FwdAttrExt> ext; // Class extension

180 #else

181  FwdAttrExt \*ext;

182 #endif

183 };

184 

185 

186 } // End of Tango namespace

187 

188 #endif /\* \_FWDATTRDESC\_H \*/

`Tango::FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html>`__

User class to create a forwarded attribute object.

**Definition:** fwdattrdesc.h:117

`Tango::UserDefaultFwdAttrProp::set\_label <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a83a156838771e7aac685e7e3c1a89fd3>`__

void set\_label(const string &def\_label)

Set default label property.

**Definition:** fwdattrdesc.h:78

`Tango::FwdAttr::FwdAttr <../../d6/daa/classTango_1_1FwdAttr.html#a9a241a7b91325152d9cb29e339ed816d>`__

FwdAttr(const string &name, const string &root\_attribute=RootAttNotDef)

Constructs a newly allocated FwdAttr object.

`Tango::FwdAttr::set\_default\_properties <../../d6/daa/classTango_1_1FwdAttr.html#a4e03c27d8edac79cb48a9f2cb0170359>`__

void set\_default\_properties(UserDefaultFwdAttrProp &prop)

Set default attribute properties.

`Tango::MultiAttribute <../../dc/d3b/classTango_1_1MultiAttribute.html>`__

There is one instance of this class for each device.

**Definition:** multiattribute.h:87

`Tango::ImageAttr <../../dd/dd1/classTango_1_1ImageAttr.html>`__

User class to create a two dimensions attribute object.

**Definition:** attrdesc.h:727

`Tango::Attribute <../../d6/dad/classTango_1_1Attribute.html>`__

This class represents a Tango attribute.

**Definition:** attribute.h:163

`Tango <../../de/ddf/namespaceTango.html>`__

=============================================================================

**Definition:** device.h:50

`Tango::RootAttNotDef <../../de/ddf/namespaceTango.html#a1c7c38a09a30e1eb128a9d90c3b8e41a>`__

const char \*const RootAttNotDef

**Definition:** tango\_const.h:73

`Tango::WAttribute <../../db/da8/classTango_1_1WAttribute.html>`__

This class represents a writable attribute.

**Definition:** w\_attribute.h:68

`Tango::AttrConfEventData <../../d9/da1/classTango_1_1AttrConfEventData.html>`__

Attribute configuration change event callback execution data.

**Definition:** event.h:172

`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__

Base class for all TANGO device.

**Definition:** device.h:90

`Tango::FwdAttError <../../de/ddf/namespaceTango.html#a1e389712aae3f56c65cda947d965f8f3>`__

enum Tango::\_FwdAttError FwdAttError

`Tango::UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html>`__

User class to set forwarded attribute default properties.

**Definition:** fwdattrdesc.h:58

`Tango::UserDefaultFwdAttrProp::UserDefaultFwdAttrProp <../../d0/d19/classTango_1_1UserDefaultFwdAttrProp.html#a1f9555dc9376f0ac86399164ae6be529>`__

UserDefaultFwdAttrProp()

Constructs a newly allocated UserDefaultAttrProp object.

**Definition:** fwdattrdesc.h:68

`Tango::AttReqType <../../de/ddf/namespaceTango.html#af86537193dcecd8a6710791fc2d4969d>`__

AttReqType

**Definition:** tango\_const.h:971

-  `include <../../dir_93bc669b4520ad36068f344e109b7d17.html>`__
-  `tango <../../dir_8ff48e8f3ef80891a9957ae5e9583431.html>`__
-  `server <../../dir_53b28a22454594c5818f3f3f5a9fd698.html>`__
-  `fwdattrdesc.h <../../d8/d3c/fwdattrdesc_8h.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
